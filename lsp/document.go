package lsp

import (
	"context"
	"errors"
	"fmt"

	sitter "github.com/smacker/go-tree-sitter"
	protocol "github.com/tliron/glsp/protocol_3_16"
)

type Document struct {
	tree         *sitter.Tree
	parser       *sitter.Parser
	language     *sitter.Language
	item         protocol.TextDocumentItem
	fileContents []byte
}

func NewDocument(language *sitter.Language, item protocol.TextDocumentItem) *Document {
	return &Document{
		language:     language,
		item:         item,
		fileContents: make([]byte, 0),
	}
}

func (d *Document) Init() error {
	parser := sitter.NewParser()
	parser.SetLanguage(d.language)
	d.parser = parser

	d.fileContents = []byte(d.item.Text)

	err := d.parse()
	if err != nil {
		fmt.Println("!! Init: parse err:", err.Error())
		return err
	}
	return err
}

/*
func (d *Document) load() error {
	file, err := os.Open(d.uri)
	if err != nil {
		return err
	}
	fmt.Println("++ opened file")
	d.file = file

	contents, err := io.ReadAll(file)
	if err != nil {
		return err
	}
	fmt.Println("++ read contents", len(contents))
	d.fileContents = contents
	return nil
}
*/

func (d *Document) parse() error {
	tree, err := d.parser.ParseCtx(context.Background(), nil, d.fileContents)
	if err != nil {
		return err
	}
	d.tree = tree
	return nil
}

func (d *Document) FindTableDefinition(line uint32, offset uint32) (outLine uint32, outOffset uint32, err error) {
	fmt.Println("++ FindTableDefinition", line, offset)
	query := `(table_definition
		    (table_name
		      (identifier) @table_name_value))
		`

	cursor, err := d.queryWithCursor(query)
	if err != nil {
		return 0, 0, err
	}

	for {
		match, exists := cursor.NextMatch()
		if !exists {
			break
		}

		for _, capture := range match.Captures {
			node := capture.Node
			if node.Content(d.fileContents) == "ta" {
				startPoint := node.StartPoint()
				return startPoint.Row, startPoint.Column, nil
			}
		}
	}

	return 0, 0, errors.New("failed to find table definition")

	// sourceNameValue := []byte(d.getValue(line, offset))

	// sourceNameValueString := d.getValue(line, offset)
	//
	// query := `(table_definition
	// 	    (table_name
	// 	      (identifier) @table_name_value))
	// `
	// cursor, err := d.queryWithCursor(query)
	// if err != nil {
	// 	return 0, 0, err
	// }
	// defer cursor.Close()
	//
	// for {
	// 	match, exists := cursor.NextMatch()
	// 	if !exists {
	// 		return 0, 0, errors.New("failed to find table definition")
	// 	}
	//
	// 	for _, capture := range match.Captures {
	// 		node := capture.Node
	// 		if node.Content(d.fileContents) == sourceNameValueString {
	// 			startPoint := node.StartPoint()
	// 			return startPoint.Row, startPoint.Column, nil
	// 		}
	// 	}
	// }

	// -------

	//
	// root := d.tree.RootNode()
	// childCount := root.ChildCount()
	// for i := 0; i < int(childCount); i++ {
	// 	if root.Type() != "table_definition" {
	// 		continue
	// 	}
	//
	// 	nameNode := root.ChildByFieldName("table_name")
	// 	nameNodeValue := d.fileContents[nameNode.StartByte():nameNode.EndByte()]
	// 	if string(nameNodeValue) == string(sourceNameValue) {
	// 		startPoint := nameNode.StartPoint()
	// 		return startPoint.Row, startPoint.Column, nil
	// 	}
	// }
	//
	// return 0, 0, errors.New("failed to find table definition")
}

func (d *Document) getValue(line uint32, offset uint32) string {
	fmt.Println("++ GetValue", line, offset)
	rawQuery := `
		(_ ) @node
	`
	query, err := sitter.NewQuery([]byte(rawQuery), d.language)
	if err != nil {
		return ""
	}
	cursor := sitter.NewQueryCursor()
	defer cursor.Close()
	cursor.Exec(query, d.tree.RootNode())

	match, exists := cursor.NextMatch()
	fmt.Println("++ GetValue: nextMatch:", match, exists)
	if !exists {
		return ""
	}
	// match = cursor.FilterPredicates(match, d.fileContents)
	for _, capture := range match.Captures {
		node := capture.Node
		startPoint := node.StartPoint()
		if startPoint.Row == line && startPoint.Column == offset {
			return node.Content(d.fileContents)
		}
	}

	return ""
}

func (d *Document) queryWithCursor(rawQuery string) (*sitter.QueryCursor, error) {
	fmt.Println("queryWithCursor", d.language != nil)
	query, err := sitter.NewQuery([]byte(rawQuery), d.language)
	if err != nil {
		return nil, fmt.Errorf("failed to create query: %q", string(rawQuery))
	}
	cursor := sitter.NewQueryCursor()
	cursor.Exec(query, d.tree.RootNode())
	return cursor, nil
}
