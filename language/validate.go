package language

import (
	"fmt"
	"strings"

	sitter "github.com/smacker/go-tree-sitter"
)

func ValidateDocument(document *Document) {
	var errNodes []*sitter.Node
	errNodes = findErrorNodes(document.RootNode(), errNodes)
	printWithErrors(document, errNodes)
}

func printWithErrors(document *Document, errNodes []*sitter.Node) {
	contents := document.Contents()
	var errNodeRanges []sitter.Range
	for _, errNode := range errNodes {
		errNodeRanges = append(errNodeRanges, errNode.Range())
	}

	renderer := NewRenderer(document)
	// var lineOffset uint32
	// var errOffset uint32
	// var errLen uint32
	// var errMessage string
	// var isErrorLine bool
	// var showErrorLine bool
	for byteOffset, contentsByte := range contents {
		// lineOffset += 1
		// if contentsByte == '\n' {
		// 	lineOffset = 0
		// 	if isErrorLine && lineOffset == 0 {
		// 		showErrorLine = true
		// 		isErrorLine = false
		// 	}
		// }
		// if contentsByte == '\t' {
		// 	tabWidth := uint32(8 - (int(lineOffset) % 8))
		// 	lineOffset += tabWidth
		// }

		for nodeRangeIndex, nodeRange := range errNodeRanges {
			if byteOffset == int(nodeRange.StartByte) {

				errMessage := errNodes[nodeRangeIndex].String()
				renderer.SetMarker(nodeRange.StartByte, nodeRange.EndByte, errMessage)

				// renderer.SetColor(Red)

				// isErrorLine = true
				// errOffset = lineOffset
				// errLen = nodeRange.EndByte - nodeRange.StartByte
				// errMessage = errNodes[nodeRangeIndex].String()
				break
			}

			// fix linewrap due to '\n'
			// if byteOffset == int(nodeRange.EndByte)+1 && contents[byteOffset+1] == '\n' {
			// 	renderer.ResetColor()
			// 	// errOffset = 0
			// 	break
			// }
		}
		// builder.WriteByte(contentsByte)
		renderer.Push(contentsByte)
		// if showErrorLine {
		// 	// errorLine := createErrorLine(errOffset, errLen, errMessage)
		// 	errorLine := errMessage
		// 	renderer.PushString(errorLine)
		// 	showErrorLine = false
		//
		// }
	}

	fmt.Println(renderer.String())
}

func createErrorLine(offset uint32, len uint32, message string) string {
	var builder strings.Builder
	for i := 0; i < int(offset)-1; i++ {
		builder.WriteByte(' ')
	}
	for i := 0; i < int(len); i++ {
		builder.WriteByte('^')
	}
	builder.WriteByte('\n')

	errMessage := fmt.Sprintf("%s*\tError: %s%s\n", colorYellow, message, colorReset)
	builder.WriteString(errMessage)

	return builder.String()
}

func findErrorNodes(node *sitter.Node, errNodes []*sitter.Node) []*sitter.Node {
	for i := 0; i < int(node.ChildCount()); i++ {
		child := node.Child(i)
		if child.IsError() {
			// fmt.Println("found err, is", child.IsError(), "has", child.HasError(), child.String(), child.StartByte(), child.EndByte())
			if len(errNodes) != 0 {
				previousIndex := len(errNodes) - 1
				if child.Parent() == errNodes[previousIndex] {
					errNodes[previousIndex] = child
					break
				}
			}
			errNodes = append(errNodes, child)
		}
		errNodes = findErrorNodes(child, errNodes)
	}
	return errNodes

}
