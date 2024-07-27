package language

import (
	"errors"
	"fmt"

	sitter "github.com/smacker/go-tree-sitter"
)

func Query(document *Document, query string) ([]*sitter.Node, error) {
	results := make([]*sitter.Node, 0)
	cursor, err := queryWithCursor(document, query)
	if err != nil {
		return results, err
	}

	for {
		match, exists := cursor.NextMatch()
		if !exists {
			return results, nil
		}
		for _, capture := range match.Captures {
			results = append(results, capture.Node)
		}

	}
}

func getValue(document *Document, line uint32, offset uint32) string {
	fmt.Println("++ GetValue", line, offset)
	rawQuery := `
		(_ ) @node
	`
	query, err := sitter.NewQuery([]byte(rawQuery), document.language)
	if err != nil {
		return ""
	}
	cursor := sitter.NewQueryCursor()
	defer cursor.Close()
	cursor.Exec(query, document.tree.RootNode())

	match, exists := cursor.NextMatch()
	fmt.Println("++ GetValue: nextMatch:", match, exists)
	if !exists {
		return ""
	}
	// match = cursor.FilterPredicates(match, d.fileContents)
	for _, capture := range match.Captures {
		node := capture.Node
		startPoint := node.StartPoint()
		fmt.Printf("# cur node {%d:%d} inp {%d:%d}\n", startPoint.Row, startPoint.Column, line, offset)
		if startPoint.Row == line && startPoint.Column == offset {
			return node.Content(document.fileContents)
		}
	}

	return ""
}

func queryWithCursor(document *Document, rawQuery string) (*sitter.QueryCursor, error) {
	query, err := sitter.NewQuery([]byte(rawQuery), document.language)
	if err != nil {
		return nil, fmt.Errorf("failed to create query: %q", string(rawQuery))
	}
	cursor := sitter.NewQueryCursor()
	cursor.Exec(query, document.tree.RootNode())
	return cursor, nil
}

type LocateResult struct {
	Start LocatePosition
	End   LocatePosition
}

type LocatePosition struct {
	Row    uint32
	Column uint32
	Offset uint32
}

func Locate(document *Document, line uint32, offset uint32) (outLine uint32, outOffset uint32, err error) {
	result, err := document.NodeAt(line, offset)
	if err != nil {
		return 0, 0, err
	}

	switch result.Node.Type() {
	case "column_name":
		result, err := locateColumn(document, result)
		if err != nil {
			return 0, 0, err
		}
		return result.Start.Row, result.Start.Column, nil
	case "table_name":
		result, err := locateTable(document, result)
		if err != nil {
			return 0, 0, err
		}
		return result.Start.Row, result.Start.Column, nil
	default:
		return 0, 0, errors.New("Locate: unsupported node type")
	}
}

func locateTable(document *Document, result *NodeAtResult) (*LocateResult, error) {
	if result.Parent.Type() == "relationship_definition_side" {
		// source: relationship
		// destination: table

		// find destination node by table and column name
		resultParentNode := result.Parent.Child(0)
		resultParentValue := resultParentNode.Content(document.fileContents)
		// column
		dstTableNode, err := tableByName(document, resultParentValue)
		if err != nil {
			return nil, err
		}

		fmt.Printf("dst node: %+v\n", dstTableNode)

		locateResult := &LocateResult{
			Start: LocatePosition{
				Row:    dstTableNode.StartPoint().Row,
				Column: dstTableNode.StartPoint().Row,
				Offset: dstTableNode.StartByte(),
			},
			End: LocatePosition{
				Row:    dstTableNode.EndPoint().Row,
				Column: dstTableNode.EndPoint().Row,
				Offset: dstTableNode.EndByte(),
			},
		}

		return locateResult, nil
	}

	return nil, errors.New("locateTable: unsupported parent type")
}

func locateColumn(document *Document, result *NodeAtResult) (*LocateResult, error) {
	if result.Parent.Type() == "relationship_definition_side" {
		// source: relationship
		// destination: column in table

		// find destination node by table and column name
		resultParentNode := result.Parent.Child(0)
		resultParentValue := resultParentNode.Content(document.fileContents)
		// column
		resultNodeValue := result.Node.Content(document.fileContents)
		dstTableNode, err := columnByValues(document, resultParentValue, resultNodeValue)
		if err != nil {
			return nil, err
		}

		// dstStartPoint := dstTableNode.Range().StartPoint
		locateResult := &LocateResult{
			Start: LocatePosition{
				Row:    dstTableNode.StartPoint().Row,
				Column: dstTableNode.StartPoint().Row,
				Offset: dstTableNode.StartByte(),
			},
			End: LocatePosition{
				Row:    dstTableNode.EndPoint().Row,
				Column: dstTableNode.EndPoint().Row,
				Offset: dstTableNode.EndByte(),
			},
		}

		return locateResult, nil
	}

	return nil, errors.New("locateTable: unsupported parent type")
}

func columnByValues(document *Document, tableName string, columnName string) (*sitter.Node, error) {
	fmt.Printf("columnByValues: %q %q\n", tableName, columnName)
	query := `
		(table_definition) @table
	`
	nodes, err := Query(document, query)
	if err != nil {
		return nil, err
	}

	for _, tableNode := range nodes {
		tableNameNode := tableNode.ChildByFieldName("table_name")
		if tableNameNode == nil {
			continue
		}
		// compare table names
		if tableNameNode.Content(document.fileContents) == tableName {
			childCount := tableNode.ChildCount()
			fmt.Println("+ children:", childCount)
			var i uint32
			for i = 0; i < childCount; i++ {
				child := tableNode.Child(int(i))
				if child.Type() != "column_definition" {
					continue
				}

				columnNameNode := child.ChildByFieldName("col_name")
				if columnNameNode == nil {
					continue
				}
				dstColumnName := columnNameNode.Content(document.fileContents)

				fmt.Println("\t column def child", child.Type(), dstColumnName)
				if dstColumnName == columnName {
					return child, nil
				}
			}

			return nil, ErrDefinitionMissingDestination
		}
	}
	return nil, ErrDefinitionMissingDestination
}

func tableByName(document *Document, tableName string) (*sitter.Node, error) {
	fmt.Printf("tableByName: %q\n", tableName)
	query := `
		(table_definition) @table
	`
	nodes, err := Query(document, query)
	if err != nil {
		return nil, err
	}

	for _, tableNode := range nodes {
		tableNameNode := tableNode.ChildByFieldName("table_name")
		if tableNameNode == nil {
			continue
		}
		// compare table names
		if tableNameNode.Content(document.fileContents) == tableName {
			return tableNode, nil
		}
	}
	return nil, ErrDefinitionMissingDestination
}
