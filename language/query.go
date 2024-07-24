package language

import (
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

func LocateTable(document *Document, line uint32, offset uint32) (outLine uint32, outOffset uint32, err error) {
	fmt.Println("-- Locate Table --")
	srcValue, err := document.ContentsByPosition(line, offset)
	if err != nil {
		return 0, 0, err
	}
	srcPoint := sitter.Point{
		Row:    line,
		Column: offset,
	}
	fmt.Printf("++ found source item %q @ %+v\n", srcValue, srcPoint)

	query := `(table_definition
		    (table_name
		      (identifier) @table_name_value))
		`

	nodes, err := Query(document, query)
	if err != nil {
		return 0, 0, err
	}
	for _, node := range nodes {
		nodeValue, err := document.Contents(node.StartByte(), node.EndByte())
		if err != nil {
			return 0, 0, err
		}
		nodePoint := node.StartPoint()
		if nodeValue == srcValue && nodePoint != srcPoint {
			fmt.Println("match", nodeValue, nodePoint, node.StartByte(), "is", srcValue, srcPoint)
			return node.StartPoint().Row, node.StartPoint().Column, nil
		}
	}

	fmt.Printf("!! failed to find match for %q", srcValue)
	return 0, 0, ErrDefinitionMissingDestination
}
