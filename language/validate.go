package language

import (
	"fmt"
	"strings"

	sitter "github.com/smacker/go-tree-sitter"
)

var Reset = "\033[0m"
var Red = "\033[31m"
var Yellow = "\033[33m"

// var Red = "\x1b[6;30;42m"
// var Red = "\x1b[6;30;41m"

func ValidateDocument(document *Document) {
	var errNodes []*sitter.Node
	errNodes = findErrorNodes(document.tree.RootNode(), errNodes)
	printWithErrors(document.fileContents, errNodes)

	fmt.Println("---")
	n := document.fileContents[24:37]
	fmt.Printf("%q\n", string(n))
}

func printWithErrors(contents []byte, errNodes []*sitter.Node) {
	var errNodeRanges []sitter.Range
	for _, errNode := range errNodes {
		fmt.Println("errRange", errNode.Range())
		errNodeRanges = append(errNodeRanges, errNode.Range())
	}

	var builder strings.Builder
	var lineOffset uint32
	var errOffset uint32
	var errLen uint32
	var errMessage string
	var isErrorLine bool
	var showErrorLine bool
	for byteOffset, contentsByte := range contents {
		lineOffset += 1
		if contentsByte == '\n' {
			lineOffset = 0
			if isErrorLine && lineOffset == 0 {
				showErrorLine = true
				isErrorLine = false
			}
		}
		if contentsByte == '\t' {
			tabWidth := uint32(8 - (int(lineOffset) % 8))
			lineOffset += tabWidth
		}

		for nodeRangeIndex, nodeRange := range errNodeRanges {
			if byteOffset == int(nodeRange.StartByte) {
				// fmt.Println("++ e start", nodeRange.StartByte, nodeRange.EndByte)
				builder.WriteString(Red)
				isErrorLine = true
				errOffset = lineOffset
				errLen = nodeRange.EndByte - nodeRange.StartByte
				errMessage = errNodes[nodeRangeIndex].String()
				break
			}

			// fix linewrap due to '\n'
			if byteOffset == int(nodeRange.EndByte)+1 && contents[byteOffset+1] == '\n' {
				// fmt.Println("-- err end", string(contentsByte))
				builder.WriteString(Reset)
				errOffset = 0
				break
			}
		}
		builder.WriteByte(contentsByte)
		if showErrorLine {
			errorLine := createErrorLine(errOffset, errLen, errMessage)
			builder.WriteString(errorLine)
			showErrorLine = false
		}
	}

	fmt.Println(builder.String())
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

	errMessage := fmt.Sprintf("%s*\tError: %s%s\n", Yellow, message, Reset)
	builder.WriteString(errMessage)

	return builder.String()
}

func findErrorNodes(node *sitter.Node, errNodes []*sitter.Node) []*sitter.Node {
	for i := 0; i < int(node.ChildCount()); i++ {
		child := node.Child(i)
		if child.IsError() {
			fmt.Println("found err, is", child.IsError(), "has", child.HasError(), child.String(), child.StartByte(), child.EndByte())
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
