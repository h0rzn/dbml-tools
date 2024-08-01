package language

import (
	"bytes"
	"context"
	"errors"
	"fmt"
	"os"
	"strings"
	"time"

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
	parsing      bool
}

type DocumentChange struct {
	Text       []byte
	StartPoint sitter.Point
	EndPoint   sitter.Point
}

func NewDocument(item protocol.TextDocumentItem) *Document {
	return &Document{
		language:     GetLanguage(),
		item:         item,
		fileContents: make([]byte, 0),
	}
}

func (d *Document) Init() error {
	d.parsing = true
	defer func() {
		d.parsing = false
	}()

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

func (d *Document) ApplyChanges(changes []DocumentChange) error {
	fmt.Println("Document Update: change count:", len(changes))

	// NOTE: just reparse the whole document for now
	// should use sitter.EditInput
	path := d.item.URI
	path, _ = strings.CutPrefix(path, "file://")
	fmt.Println("uri", path)
	newContents, err := os.ReadFile(path)
	if err != nil {
		return err
	}
	tree, err := d.parser.ParseCtx(context.Background(), nil, newContents)
	if err != nil {
		return err
	}

	d.fileContents = newContents
	d.tree = tree

	return nil
}

func (d *Document) createTreeInput(changes []DocumentChange) (sitter.EditInput, error) {
	// TODO: return if list is empty

	firstChange := changes[0]
	startPoint := firstChange.StartPoint
	newEndPoint := firstChange.EndPoint

	oldEndPoint, err := d.calculateOldEndpoint(startPoint)
	if err != nil {
		return sitter.EditInput{}, nil
	}

	edit := sitter.EditInput{
		// TODO: Indexes!
		StartPoint:  startPoint,
		OldEndPoint: oldEndPoint,
		NewEndPoint: newEndPoint,
	}

	return edit, nil
}

func (d *Document) calculateOldEndpoint(startPoint sitter.Point) (sitter.Point, error) {
	oldEndpoint := startPoint
	oldTextLength := 0
	_ = oldTextLength

	return oldEndpoint, nil
}

func (d *Document) Tree() chan *sitter.Tree {
	out := make(chan *sitter.Tree, 1)

	if d.parsing {
		// TODO: add timeout
		for {
			<-time.After(100 * time.Millisecond)
			if !d.parsing {
				break
			}
		}
	}
	out <- d.tree

	return out
}

func (d *Document) TreeCursor() *sitter.TreeCursor {
	return sitter.NewTreeCursor(d.RootNode())
}

func (d *Document) RootNode() *sitter.Node {
	tree := <-d.Tree()
	return tree.RootNode()
}

func (d *Document) ContentsRange(startByte uint32, endByte uint32) (contents []byte, truncated bool) {
	if len(d.fileContents) == 0 {
		return make([]byte, 0), false
	}
	if int(endByte) >= len(d.fileContents) {
		endByte = uint32(len(d.fileContents) - 1)
		truncated = true
	}

	return d.fileContents[startByte:endByte], truncated
}

func (d *Document) Contents() []byte {
	return d.fileContents
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
	offset, err := d.OffsetByPosition(line, column)
	if err != nil {
		return "", err
	}

	fmt.Printf("**src: position {%d:%d} to offset %d/%d\n", line, column, offset, len(d.fileContents))
	fmt.Printf("   -> sample: %q\n", string(d.fileContents[offset:offset+10]))

	treeCursor := sitter.NewTreeCursor(d.RootNode())
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
func (d *Document) OffsetByPosition(line uint32, column uint32) (int, error) {
	lines := bytes.SplitAfter(d.fileContents, []byte("\n"))
	byteOffset := 0

	for lineIndex, lineSlice := range lines {
		for charIndex, char := range lineSlice {
			_ = charIndex
			_ = char
			// fmt.Printf("charOff %02d | line %02d | %s\n", charIndex, lineIndex, string(char))

			if uint32(lineIndex) == line {
				return byteOffset + int(column), nil
			}
			byteOffset += 1
		}
	}

	return byteOffset, fmt.Errorf("failed to find node @ %d:%d", line, column)
}

type NodeAtResult struct {
	Node       *sitter.Node
	Parent     *sitter.Node
	ParentType string
	NodeIndex  int64
}

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

func (d *Document) getValue(line uint32, offset uint32) string {
	rawQuery := `
		(_ ) @node
	`
	cursor, err := d.queryWithCursor(rawQuery)
	if err != nil {
		return ""
	}
	defer cursor.Close()

	match, exists := cursor.NextMatch()
	if !exists {
		return ""
	}
	// match = cursor.FilterPredicates(match, d.fileContents)
	for _, capture := range match.Captures {
		node := capture.Node
		startPoint := node.StartPoint()
		if startPoint.Row == line && startPoint.Column == offset {
			return node.Content(d.Contents())
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
