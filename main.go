package main

import (
	"context"
	"fmt"
	"io"
	"os"

	// tree_sitter_dbml "github.com/h0rzn/dbml-lsp-ts/parser"
	sitter "github.com/smacker/go-tree-sitter"
)

func getContent() []byte {
	file, err := os.Open("./test")
	if err != nil {
		panic(err)
	}
	data, err := io.ReadAll(file)
	if err != nil {
		panic(err)
	}
	return data
}

func findTableDefinition(node *sitter.Node, tableName string, sourceCode []byte) (position uint32, exists bool) {
	childCount := node.ChildCount()
	for i := 0; i < int(childCount); i++ {
		if node.Type() == "table_definition" {
			tableNameNode := node.ChildByFieldName("table_name")
			if tableNameNode != nil {
				return node.StartByte(), true
			}
		}
	}
	return 0, false

}

func main() {
	parser := sitter.NewParser()
	unsafeLanguage := Language()
	language := sitter.NewLanguage(unsafeLanguage)
	parser.SetLanguage(language)

	sourceCode := getContent()
	tree, err := parser.ParseCtx(context.Background(), nil, sourceCode)
	if err != nil {
		panic(err)
	}
	fmt.Printf("%+v\n", tree)

	root := tree.RootNode()
	fmt.Println(root)

	tdef := root.Child(0)
	tname := tdef.Child(1)
	tnameValue := sourceCode[tname.StartByte():tname.EndByte()]
	fmt.Println("tname value", string(tnameValue))
}
