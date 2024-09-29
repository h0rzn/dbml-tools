package language

import (
	"bytes"
	"context"
	"errors"
	"fmt"
	"sync"

	"github.com/h0rzn/dbml-lsp-ts/language/textbuffer"
	sitter "github.com/smacker/go-tree-sitter"
	protocol "github.com/tliron/glsp/protocol_3_16"
)

type Document struct {
	tree     *sitter.Tree
	treeLock *sync.RWMutex
	parser   *sitter.Parser
	language *sitter.Language
	text     *textbuffer.PieceTable
	item     protocol.TextDocumentItem
}

type DocumentChange struct {
	Text       []byte
	StartPoint sitter.Point
	EndPoint   sitter.Point
}

func NewDocument(item protocol.TextDocumentItem) *Document {
	return &Document{
		treeLock: &sync.RWMutex{},
		language: GetLanguage(),
		item:     item,
	}
}

// Init initializes the document by setting upd
// and running the parser on the source code.
func (d *Document) Init() error {
	d.treeLock.Lock()
	defer d.treeLock.Unlock()

	if d.language == nil {
		return errors.New("failed to get language")
	}
	parser := sitter.NewParser()
	parser.SetLanguage(d.language)
	d.parser = parser

	d.text = textbuffer.NewPieceTable([]byte(d.item.Text))
	tree, err := d.parse(nil, d.text.Contents())
	if err != nil {
		fmt.Println("!! Init: parse err:", err.Error())
		return err
	}
	d.tree = tree

	return err
}

func (d *Document) TextBuffer() *textbuffer.PieceTable {
	return d.text
}

// parse parses fileContents with sitter.ParseCtx and returns
// *sitter.Tree and error.
func (d *Document) parse(tree *sitter.Tree, fileContents []byte) (*sitter.Tree, error) {
	return d.parser.ParseCtx(context.Background(), tree, fileContents)

}

// ApplyChanges applies all document changes to piece table and parser
// via applyChange
func (d *Document) ApplyChanges(changes []DocumentChange) error {
	for _, change := range changes {
		err := d.applyChange(change)
		if err != nil {
			return err
		}
	}
	return nil
}

// applyChange updates piece table and and reparses changes with tree-sitter
// based on a DocumentChange
func (d *Document) applyChange(change DocumentChange) error {
	var startOffset int
	var endOffset int

	var oldEndOffset int
	var newEndOffset int

	startOffset, err := d.OffsetByPosition2(change.StartPoint.Row, change.StartPoint.Column)
	if err != nil {
		return err
	}
	endOffset, err = d.OffsetByPosition2(change.EndPoint.Row, change.EndPoint.Column)
	if err != nil {
		return err
	}

	byteRange := d.ContentsRange(uint32(startOffset), uint32(endOffset))
	fmt.Printf("calculated range (%d - %d): %d\n", startOffset, endOffset, len(byteRange))

	// DELETE operation
	if len(change.Text) == 0 {
		fmt.Println("applyChange: DELETE")
		oldEndOffset, newEndOffset = d.text.Delete(startOffset, len(byteRange))
		startOffset = oldEndOffset

	} else { // INSERT or UPDATE operation
		fmt.Println("applyChange: INSERT or UPDATE")
		oldEndOffset, newEndOffset = d.text.Update(startOffset, change.Text)
		fmt.Println("insert/update", startOffset, endOffset)
	}

	edit := sitter.EditInput{
		StartIndex: uint32(startOffset),
		StartPoint: change.StartPoint,

		OldEndIndex: uint32(oldEndOffset),
		// OldEndPoint: change.StartPoint,
		OldEndPoint: change.EndPoint,

		NewEndIndex: uint32(newEndOffset),
		// NewEndPoint: change.EndPoint,
		NewEndPoint: change.StartPoint,
	}
	fmt.Printf("Edit: %+v\n", edit)

	d.treeLock.Lock()
	defer d.treeLock.Unlock()
	d.tree.Edit(edit)
	fmt.Printf("reparse tree...\n %q\n", string(d.Contents()))
	d.tree, err = d.parser.ParseCtx(context.Background(), d.tree, d.Contents())

	return err
}

// TreeCursor creates and returns a *sitter.TreeCursor
// based on root node.
func (d *Document) TreeCursor() *sitter.TreeCursor {
	return sitter.NewTreeCursor(d.RootNode())
}

// TreeCursorByNode creates and returns a *sitter.TreeCursor
// with cursor on specified node
func (d *Document) TreeCursorByNode(node *sitter.Node) *sitter.TreeCursor {
	return sitter.NewTreeCursor(node)
}

// RootNode fetches RootNode for current document.
func (d *Document) RootNode() *sitter.Node {
	d.treeLock.RLock()
	rootNode := d.tree.RootNode()
	d.treeLock.RUnlock()
	return rootNode
}

// ContentsRange returns file contents in bytes for [startByte:endByte].
// Range parameter validation is handled by the underlying textbuffer.
func (d *Document) ContentsRange(startByte uint32, endByte uint32) []byte {
	return d.text.ContentsRange(startByte, endByte)
}

// Contents fetches file contents.
func (d *Document) Contents() []byte {
	return d.text.Contents()
}

// OffsetByPosition converts line and column to byte offset.
// Returns byte offset and error if no byte offset could be found.
func (d *Document) OffsetByPosition(line uint32, column uint32) (int, error) {
	lines := bytes.SplitAfter(d.text.Contents(), []byte("\n"))
	byteOffset := 0

	for lineIndex, currentLine := range lines {
		if uint32(lineIndex) == line {
			return byteOffset + int(column), nil
		}
		byteOffset += 1
		_ = currentLine
		// byteOffset += len(currentLine)
	}

	return byteOffset, fmt.Errorf("failed to find node @ %d:%d", line, column)
}

func (d *Document) OffsetByPosition2(line uint32, column uint32) (int, error) {
	lines := bytes.SplitAfter(d.text.Contents(), []byte("\n"))
	byteOffset := 0

	for lineIndex, currentLine := range lines {
		if uint32(lineIndex) == line {
			return byteOffset + int(column), nil
		}
		byteOffset += len(currentLine)
	}

	// lineCount := uint32(0)
	// for _, b := range d.text.Contents() {
	// 	if b == '\n' {
	// 		if lineCount == line {
	// 			return byteOffset + int(column), nil
	// 		}
	// 		lineCount++
	// 	}
	// 	byteOffset++
	//
	// }

	return byteOffset, fmt.Errorf("failed to find node @ %d:%d", line, column)
}

// PositionByOffset translates a byte offset to line and column
// TODO: check if this method is really needed
func (d *Document) PositionByOffset(offset int) (line uint32, column uint32) {
	line = 0
	column = 0
	text := d.text.Contents()
	for offs, value := range text {
		if offset == offs {
			break
		}
		if value == '\n' {
			line++
		} else {
			column++
		}
	}

	return
}

type NodeAtResult struct {
	// Node is the direct result node
	Node *sitter.Node
	// Parent is parent of Node
	Parent *sitter.Node
	// Node type of Parent
	ParentType string
	// Index of Parents children that
	// represents Node
	NodeIndex int64
}

// NodeAt finds a node in document tree based on line and column.
// Returns node and additional parent information in NodeAtResult and error.
func (d *Document) NodeAt(line uint32, column uint32) (result *NodeAtResult, err error) {
	nodeStartOffset, err := d.OffsetByPosition(line, column)
	if err != nil {
		return nil, err
	}

	treeCursor := sitter.NewTreeCursor(d.RootNode())
	nodeIndex := treeCursor.GoToFirstChildForByte(uint32(nodeStartOffset))
	if nodeIndex == -1 {
		return nil, errors.New("failed to find node in tree")
	}
	node := treeCursor.CurrentNode()

	result = &NodeAtResult{}
	result.ParentType = node.Type()
	result.Parent = node

	var lastNode *sitter.Node
	var childNodeIndex int64
	for {
		currentNodeIndex := treeCursor.GoToFirstChildForByte(uint32(nodeStartOffset))
		if currentNodeIndex == -1 {
			result.Node = lastNode
			break
		}
		node = treeCursor.CurrentNode()
		childNodeIndex = currentNodeIndex
	}
	result.Node = node
	result.Parent = node.Parent()
	result.NodeIndex = childNodeIndex

	return result, nil
}

// Query is a utility function to query nodes based on a query.
// Returns result nodes []*sitter.Node and error.
func (d *Document) Query(query string) ([]*sitter.Node, error) {
	results := make([]*sitter.Node, 0)
	cursor, err := d.queryWithCursor(query)
	if err != nil {
		return results, err
	}
	defer cursor.Close()

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

// queryWithCursor creates a new *sitter.QueryCursor from a query string.
// Returns query cursor and error
func (d *Document) queryWithCursor(rawQuery string) (*sitter.QueryCursor, error) {
	query, err := sitter.NewQuery([]byte(rawQuery), d.language)
	if err != nil {
		return nil, fmt.Errorf("failed to create query: %q", string(rawQuery))
	}
	cursor := sitter.NewQueryCursor()
	cursor.Exec(query, d.tree.RootNode())
	return cursor, nil
}
