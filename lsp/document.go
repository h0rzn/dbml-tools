package lsp

import (
	"bytes"
	"context"
	"errors"
	"fmt"
	"strings"

	sitter "github.com/smacker/go-tree-sitter"
	protocol "github.com/tliron/glsp/protocol_3_16"
)

var ErrDefinitionMissingDestination = errors.New("failed to find match")

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
	tree, err := d.parse(d.fileContents)
	if err != nil {
		fmt.Println("!! Init: parse err:", err.Error())
		return err
	}
	d.tree = tree

	return err
}

func (d *Document) parse(fileContents []byte) (*sitter.Tree, error) {
	tree, err := d.parser.ParseCtx(context.Background(), nil, fileContents)
	if err != nil {
		return tree, err
	}
	return tree, nil
}

func (d *Document) PrintAST() {
	d.printTree(d.tree.RootNode(), 0)
}

func (d *Document) printTree(node *sitter.Node, indentLevel int) {
	fmt.Printf("%s%s\n", strings.Repeat("  ", indentLevel), node.String())
	for i := 0; i < int(node.ChildCount()); i++ {
		child := node.Child(i)
		d.printTree(child, indentLevel+1)
	}
}

func (d *Document) Query(query string) ([]*sitter.Node, error) {
	results := make([]*sitter.Node, 0)
	cursor, err := d.queryWithCursor(query)
	if err != nil {
		return results, err
	}

	for {
		match, exists := cursor.NextMatch()
		if !exists {
			return results, nil
		}
		// fmt.Printf("match: %+v\n", match)
		for _, capture := range match.Captures {
			// val := d.fileContents[capture.Node.StartByte():capture.Node.EndByte()]
			// fmt.Printf("\t %+v\n:: %q\n", capture, val)
			results = append(results, capture.Node)
		}

	}
}

func (d *Document) Contents(startByte uint32, endByte uint32) string {
	// TODO: handle out of bounds
	return string(d.fileContents[startByte:endByte])
}

func (d *Document) ContentsByPosition(line uint32, column uint32) (string, error) {
	offset := d.OffsetByPosition(line, column)
	fmt.Printf("**src: position {%d:%d} to offset %d/%d\n", line, column, offset, len(d.fileContents))
	fmt.Printf("   -> sample: %q\n", string(d.fileContents[offset:offset+10]))

	treeCursor := sitter.NewTreeCursor(d.tree.RootNode())
	var lastNode *sitter.Node
	for {
		nodeIndex := treeCursor.GoToFirstChildForByte(uint32(offset))
		if nodeIndex == -1 {
			if lastNode != nil {
				value := string(d.fileContents[lastNode.Range().StartByte:lastNode.Range().EndByte])
				fmt.Printf("**src result <%s>: %q ###\n", lastNode.Type(), value)
				return value, nil
			} else {
				return "", errors.New("failed to find value by line+column")
			}
		}

		node := treeCursor.CurrentNode()
		lastNode = node
	}
}

// Function to convert line and column to byte offset
func (d *Document) OffsetByPosition(line uint32, column uint32) int {
	lines := bytes.SplitAfter(d.fileContents, []byte("\n"))
	byteOffset := 0

	for lineIndex, lineSlice := range lines {
		for charIndex, char := range lineSlice {
			_ = charIndex
			_ = char
			// fmt.Printf("charOff %02d | line %02d | %s\n", charIndex, lineIndex, string(char))

			if uint32(lineIndex) == line {
				return byteOffset + int(column)
			}
			byteOffset += 1
		}
	}

	return byteOffset
}

func (d *Document) LocateTable(line uint32, offset uint32) (outLine uint32, outOffset uint32, err error) {
	fmt.Println("-- Locate Table --")
	srcValue, err := d.ContentsByPosition(line, offset)
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

	nodes, err := d.Query(query)
	if err != nil {
		return 0, 0, err
	}
	for _, node := range nodes {
		nodeValue := d.Contents(node.StartByte(), node.EndByte())
		nodePoint := node.StartPoint()
		if nodeValue == srcValue && nodePoint != srcPoint {
			fmt.Println("match", nodeValue, nodePoint, node.StartByte(), "is", srcValue, srcPoint)
			return node.StartPoint().Row, node.StartPoint().Column, nil
		}
	}

	fmt.Printf("!! failed to find match for %q", srcValue)
	return 0, 0, ErrDefinitionMissingDestination
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
		fmt.Printf("# cur node {%d:%d} inp {%d:%d}\n", startPoint.Row, startPoint.Column, line, offset)
		if startPoint.Row == line && startPoint.Column == offset {
			return node.Content(d.fileContents)
		}
	}

	return ""
}

func (d *Document) queryWithCursor(rawQuery string) (*sitter.QueryCursor, error) {
	query, err := sitter.NewQuery([]byte(rawQuery), d.language)
	if err != nil {
		return nil, fmt.Errorf("failed to create query: %q", string(rawQuery))
	}
	cursor := sitter.NewQueryCursor()
	cursor.Exec(query, d.tree.RootNode())
	return cursor, nil
}
