package language

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
var ErrOutOfBoundsFileContents = errors.New("input access parameters are out of bounds for file contents")

type Document struct {
	tree         *sitter.Tree
	parser       *sitter.Parser
	language     *sitter.Language
	item         protocol.TextDocumentItem
	fileContents []byte
	tabWidth     int
}

func NewDocument(item protocol.TextDocumentItem) *Document {
	return &Document{
		language:     GetLanguage(),
		item:         item,
		fileContents: make([]byte, 0),
	}
}

func (d *Document) Init() error {
	if d.language == nil {
		return errors.New("failed to get language")
	}
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

func (d *Document) TreeCursor() *sitter.TreeCursor {
	return sitter.NewTreeCursor(d.tree.RootNode())
}

func (d *Document) PrintAST(errorsOnly bool) {
	d.printTree(d.tree.RootNode(), 0, errorsOnly)
}

func (d *Document) printTree(node *sitter.Node, indentLevel int, errorsOnly bool) {
	if !errorsOnly || node.IsError() {
		fmt.Printf("%s%s (%d:%d)\n", strings.Repeat("  ", indentLevel), node.String(), node.StartPoint().Row, node.StartPoint().Column)
	}
	for i := 0; i < int(node.ChildCount()); i++ {
		child := node.Child(i)
		d.printTree(child, indentLevel+1, errorsOnly)
	}
}

func (d *Document) Contents(startByte uint32, endByte uint32) (string, error) {
	if int(endByte) > len(d.fileContents) {
		return "", ErrOutOfBoundsFileContents
	}
	return string(d.fileContents[startByte:endByte]), nil
}

func (d *Document) ContentsLine(startByte uint32, endByte uint32) (string, error) {
	if int(endByte) > len(d.fileContents) {
		return "", ErrOutOfBoundsFileContents
	}

	contentsAfterStart := d.fileContents[startByte:]

	var builder strings.Builder
	for _, contentsByte := range contentsAfterStart {
		if contentsByte == '\n' {
			break
		}
		builder.WriteByte(contentsByte)
	}

	return builder.String(), nil
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
