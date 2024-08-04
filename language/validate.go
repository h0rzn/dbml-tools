package language

import (
	"fmt"
	"strconv"
	"strings"

	sitter "github.com/smacker/go-tree-sitter"
)

func ValidateDocument(document *Document, compact bool) {
	var errNodes []*ErrorNode
	errNodes = findErrorNodes(document.RootNode(), errNodes)
	fmt.Printf("Found problems in %d tables:", len(errNodes))
	if compact {
		printErrorList(document, errNodes)
	} else {
		printValidated(document, errNodes)
	}
}

func printErrorList(document *Document, errNodes []*ErrorNode) {
	var builder strings.Builder
	builder.WriteRune('\n')
	for _, errNode := range errNodes {
		if errNode.ContextNode != nil && errNode.ContextNode.Type() == "table_definition" {
			builder.WriteString("Error in Table ")
			nameNode := errNode.ContextNode.ChildByFieldName("table_name")
			if nameNode == nil {
				builder.WriteString("<unkown table>")
			} else {
				name := nameNode.Content(document.Contents())
				builder.WriteString(name)
				builder.WriteString(": Error @ ")
				from := uint64(errNode.ErrorNode.StartPoint().Row)
				to := uint64(errNode.ErrorNode.StartPoint().Column)
				builder.WriteString(strconv.FormatUint(to, 10))
				builder.WriteString(":")
				builder.WriteString(strconv.FormatUint(from, 10))
				builder.WriteRune('\n')

				builder.WriteString(errNode.ErrorNode.String())
				builder.WriteString("\n\n")
			}
		} else {
			builder.WriteString("Unkown Error @ ")
			from := uint64(errNode.ErrorNode.StartPoint().Row)
			to := uint64(errNode.ErrorNode.StartPoint().Column)
			builder.WriteString(strconv.FormatUint(to, 10))
			builder.WriteString(":")
			builder.WriteString(strconv.FormatUint(from, 10))
			builder.WriteRune('\n')

			builder.WriteString(errNode.ErrorNode.String())
			builder.WriteString("\n\n")
		}
	}

	fmt.Println(builder.String())

}

func printValidated(document *Document, errNodes []*ErrorNode) {
	var builder strings.Builder
	for i, errNode := range errNodes {
		if errNode.ContextNode != nil {
			writeHeader(&builder, i, errNode.ErrorNode, true)
			contents, _ := document.ContentsRange(errNode.ContextNode.StartByte(), errNode.ContextNode.EndByte())
			errRelStart := errNode.ErrorNode.StartByte() - errNode.ContextNode.StartByte()
			errRelEnd := errNode.ErrorNode.EndByte() - errNode.ContextNode.StartByte()
			builder.WriteString(CGREY)
			for i, b := range contents {
				if i >= int(errRelStart) && i <= int(errRelEnd) {
					builder.WriteString(CRED + string(b) + CEND)
				} else {
					builder.WriteString(CGREY)
					builder.WriteByte(b)
				}
			}
			builder.WriteString(CEND)
		} else {
			writeHeader(&builder, i, errNode.ErrorNode, false)
			builder.WriteString(CYELLOW)
			builder.WriteString(errNode.ErrorNode.Content(document.Contents()))
		}
	}

	fmt.Println(builder.String())
}

func writeHeader(builder *strings.Builder, i int, errNode *sitter.Node, showMessage bool) {
	builder.WriteString("\n\n")
	builder.WriteString(SERROR)
	builder.WriteString("  ERROR ")
	builder.WriteString(strconv.Itoa(i))
	builder.WriteString("  ")
	builder.WriteString(CEND)
	builder.WriteString(" ")
	builder.WriteString(strconv.FormatUint(uint64(errNode.Range().StartPoint.Row), 10))
	builder.WriteString(":")
	builder.WriteString(strconv.FormatUint(uint64(errNode.Range().StartPoint.Column), 10))
	if showMessage {
		builder.WriteRune('\n')
		builder.WriteString(errNode.String())
	}
	builder.WriteRune('\n')
}

type ErrorNode struct {
	ContextNode *sitter.Node
	ErrorNode   *sitter.Node
}

func findErrorNodes(node *sitter.Node, errNodes []*ErrorNode) []*ErrorNode {
	for i := 0; i < int(node.ChildCount()); i++ {
		child := node.Child(i)
		isErr := child.IsError()
		hasErr := child.HasError()

		if isErr && hasErr {
			// try to find table definition node
			parent := child.Parent()
			for {
				if parent.Type() == "source_file" {
					// TODO: collect pre and post lines and
					// construct artificial ContextNode
					errNodes = append(errNodes, &ErrorNode{
						ContextNode: nil,
						ErrorNode:   child,
					})

					break
				} else if parent.Type() == "table_definition" {
					errNodes = append(errNodes, &ErrorNode{
						ContextNode: parent,
						ErrorNode:   child,
					})
					break
				}

				parent = parent.Parent()
			}
			errNodes = findErrorNodes(child, errNodes)

		} else {
			if sibling := child.NextSibling(); sibling != nil {
				errNodes = findErrorNodes(sibling, errNodes)
			}

		}

	}
	return errNodes

}
