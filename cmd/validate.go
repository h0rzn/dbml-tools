package cmd

import (
	"fmt"

	"github.com/h0rzn/dbml-lsp-ts/language"
	"github.com/h0rzn/dbml-lsp-ts/lsp"
	"github.com/spf13/cobra"
)

var validateCmd = &cobra.Command{
	Use:   "validate",
	Short: "Validate a file directly",
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
