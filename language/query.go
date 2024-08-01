package language

import (
	"errors"
	"fmt"

	sitter "github.com/smacker/go-tree-sitter"
)

type LocateResult struct {
	Start LocatePosition
	End   LocatePosition
}

type LocatePosition struct {
	Row    uint32
	Column uint32
	Offset uint32
}

// TODO: support project location detection
func Locate(document *Document, line uint32, offset uint32) (outLine uint32, outOffset uint32, err error) {
	result, err := document.NodeAt(line, offset)
	if err != nil {
		return 0, 0, err
	}

	switch result.Node.Type() {
	case TSVColumnName:
		result, err := locateColumn(document, result)
		if err != nil {
			return 0, 0, err
		}
		return result.Start.Row, result.Start.Column, nil
	case TSVTableName:
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
	if result.Parent.Type() == TSDRelationshipSide {
		// source: relationship
		// destination: table

		// find destination node by table and column name
		resultParentNode := result.Parent.Child(0)
		resultParentValue := resultParentNode.Content(document.Contents())
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
	if result.Parent.Type() == TSDRelationshipSide {
		// source: relationship
		// destination: column in table

		// find destination node by table and column name
		resultParentNode := result.Parent.Child(0)
		resultParentValue := resultParentNode.Content(document.Contents())
		// column
		resultNodeValue := result.Node.Content(document.Contents())
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
	nodes, err := document.Query(query)
	if err != nil {
		return nil, err
	}

	for _, tableNode := range nodes {
		tableNameNode := tableNode.ChildByFieldName(TSVTableName)
		if tableNameNode == nil {
			continue
		}
		// compare table names
		if tableNameNode.Content(document.Contents()) == tableName {
			childCount := tableNode.ChildCount()
			fmt.Println("+ children:", childCount)
			var i uint32
			for i = 0; i < childCount; i++ {
				child := tableNode.Child(int(i))
				if child.Type() != TSDColumn {
					continue
				}

				columnNameNode := child.ChildByFieldName(TSVColumnNameValue)
				if columnNameNode == nil {
					continue
				}
				dstColumnName := columnNameNode.Content(document.Contents())

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
	nodes, err := document.Query(query)
	if err != nil {
		return nil, err
	}

	for _, tableNode := range nodes {
		tableNameNode := tableNode.ChildByFieldName(TSVTableName)
		if tableNameNode == nil {
			continue
		}
		// compare table names
		if tableNameNode.Content(document.Contents()) == tableName {
			return tableNode, nil
		}
	}
	return nil, ErrDefinitionMissingDestination
}
