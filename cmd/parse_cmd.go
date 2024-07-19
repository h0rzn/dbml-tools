package cmd

import (
	"fmt"
	"io"
	"os"

	"github.com/h0rzn/dbml-lsp-ts/language"
	"github.com/h0rzn/dbml-lsp-ts/lsp"
	"github.com/spf13/cobra"
	protocol "github.com/tliron/glsp/protocol_3_16"
)

var parseCmd = &cobra.Command{
	Use:   "parse",
	Short: "Parse a file directly",
	Long:  "",
	Run: func(cmd *cobra.Command, args []string) {
		if len(args) == 0 {
			fmt.Println("Error: no input file")
			return
		}
		if len(args) > 1 {
			fmt.Printf("Warning: only parsing first input file %q\n", args[0])
		}
		path := args[0]
		fmt.Println("++ parsing:", path)

		language := language.GetLanguage()
		if language == nil {
			fmt.Println("Error: failed to get language")
		}

		documentItem, err := createDocumentItem(path)
		if err != nil {
			fmt.Println(err)
			return
		}

		document := lsp.NewDocument(language, documentItem)
		err = document.Init()
		if err != nil {
			fmt.Println(err)
		}

		document.PrintAST()
	},
}

var queryCmd = &cobra.Command{
	Use:   "query",
	Short: "Query a file directly",
	Long:  "",
	Run: func(cmd *cobra.Command, args []string) {
		fmt.Println("querying")
		if len(args) != 2 {
			fmt.Println("Error: provide file and query")
			return
		}
		path := args[0]
		query := args[1]

		language := language.GetLanguage()
		if language == nil {
			fmt.Println("Error: failed to get language")
		}

		documentItem, err := createDocumentItem(path)
		if err != nil {
			fmt.Println(err)
			return
		}

		document := lsp.NewDocument(language, documentItem)
		err = document.Init()
		if err != nil {
			fmt.Println(err)
		}

		nodes, err := document.Query(query)
		if err != nil {
			fmt.Println(err)
		}
		for _, node := range nodes {
			fmt.Println(node.String(), document.Contents(node.StartByte(), node.EndByte()))
		}

	},
}

func createDocumentItem(path string) (protocol.TextDocumentItem, error) {
	item := protocol.TextDocumentItem{}

	file, err := os.Open(path)
	if err != nil {
		panic(err)
	}
	data, err := io.ReadAll(file)
	if err != nil {
		return item, err
	}

	item.Text = string(data)

	return item, nil
}
