package language

import (
	"fmt"
	"strings"

	sitter "github.com/smacker/go-tree-sitter"
)

const rangeFormat = " %s%d:%d%s - %s%d:%d%s "

type PrintTreeOpts struct {
	ErrorsOnly bool
	Raw        bool
	FieldNames bool
}

func PrintTree(rootNode *sitter.Node, opts PrintTreeOpts) {
	printTreeNodes(rootNode, "", 0, opts.ErrorsOnly, opts.Raw, opts.FieldNames)
}

func printTreeNodes(node *sitter.Node, fieldName string, indentLevel int, errorsOnly bool, raw bool, withFieldNames bool) {
	if !errorsOnly || node.IsError() {
		nodeText := formatNode(node, fieldName, indentLevel, raw)
		fmt.Print(nodeText)
	}
	for i := 0; i < int(node.ChildCount()); i++ {
		child := node.Child(i)
		var fieldName string
		if withFieldNames {
			fieldName = node.FieldNameForChild(i)
		}
		printTreeNodes(child, fieldName, indentLevel+1, errorsOnly, raw, withFieldNames)
	}
}

func formatNode(node *sitter.Node, fieldName string, indentLevel int, raw bool) string {
	if raw {
		return fmt.Sprintf("%s%s (%d:%d)\n", strings.Repeat("  ", indentLevel), node.String(), node.StartPoint().Row, node.StartPoint().Column)
	}

	var builder strings.Builder
	builder.WriteString(strings.Repeat("\t", indentLevel))
	if node.IsError() {
		builder.WriteString(CRED + node.String())
		builder.WriteString(CEND + "\n")
		return builder.String()
	}

	if fieldName != "" {
		builder.WriteString(CGREY)
		builder.WriteString(fieldName)
		builder.WriteString(": ")
		builder.WriteString(CEND)
	}

	nodeType := fmt.Sprintf("%s%s%s", CGREEN, node.Type(), CEND)
	builder.WriteString(nodeType)

	startPoint := node.StartPoint()
	endPoint := node.EndPoint()
	builder.WriteString(fmt.Sprintf(rangeFormat, CYELLOW, startPoint.Row, startPoint.Column, CEND, CYELLOW, endPoint.Row, endPoint.Column, CEND))

	asString := node.String()
	builder.WriteString(asString)
	builder.WriteString("\n")
	return builder.String()
}
