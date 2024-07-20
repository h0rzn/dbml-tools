package language

import (
	"fmt"
	"strings"

	sitter "github.com/smacker/go-tree-sitter"
)

var Reset = "\033[0m"
var Red = "\033[31m"
var Yellow = "\033[33m"

func ValidateDocument(document *Document) {
	fmt.Println("validateDocument")
	var errNodes []*sitter.Node
	errNodes = findErrorNodes(document.tree.RootNode(), errNodes)
	printWithErrors(document.fileContents, errNodes)

}

func printWithErrors(contents []byte, errNodes []*sitter.Node) {
	// collect byte ranges of errors
	var errNodeRanges []sitter.Range
	for _, errNode := range errNodes {
		errNodeRanges = append(errNodeRanges, errNode.Range())
	}

	var builder strings.Builder
	var lineOffset uint32
	var isErrorLine bool
	for byteOffset, contentsByte := range contents {
		lineOffset += 1
		if contentsByte == '\n' {
			lineOffset = 0
			if isErrorLine {
				isErrorLine = false
			}
		}

		for _, nodeRange := range errNodeRanges {
			if byteOffset == int(nodeRange.StartByte) {
				fmt.Println("err start", string(contentsByte))
				builder.WriteString(Red)
				break
			}

			if byteOffset == int(nodeRange.EndByte) {
				fmt.Println("err end", string(contentsByte))
				builder.WriteString(Reset)
				isErrorLine = true
				break
			}
			// fix linewrap due to '\n'
			// if byteOffset == int(nodeRange.EndByte)+1 && contents[byteOffset+1] == '\n' {
			// 	fmt.Println("err end", string(contentsByte))
			// 	break
			// }
		}
		builder.WriteByte(contentsByte)
	}

	fmt.Println(builder.String())

}

func findErrorNodes(node *sitter.Node, errNodes []*sitter.Node) []*sitter.Node {
	for i := 0; i < int(node.ChildCount()); i++ {
		child := node.Child(i)
		if child.IsError() {
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
