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

	fmt.Printf("found %d errors\n", len(errNodes))

	renderer := NewRenderer(document)
	// i := 0
	for byteOffset, contentsByte := range contents {
		// if i == 301 {
		// 	fmt.Println()
		// 	fmt.Println(renderer.String())
		//
		// 	return
		// }
		for nodeRangeIndex, nodeRange := range errNodeRanges {
			if byteOffset == int(nodeRange.StartByte) {
				errMessage := errNodes[nodeRangeIndex].String()
				renderer.SetMarker(nodeRange.StartByte, nodeRange.EndByte, errMessage)
				break
			}
		}
		renderer.Push(contentsByte)
		// i++
	}

	fmt.Println(renderer.String())
	// renderer := NewRenderer(document)
	// for byteOffset, contentsByte := range contents {
	// 	for nodeRangeIndex, nodeRange := range errNodeRanges {
	// 		if byteOffset == int(nodeRange.StartByte) {
	//
	// 			errMessage := errNodes[nodeRangeIndex].String()
	// 			renderer.SetMarker(nodeRange.StartByte, nodeRange.EndByte, errMessage)
	// 			break
	// 		}
	// 	}
	// 	renderer.Push(contentsByte)
	// }
	//
	// fmt.Println(renderer.String())
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
