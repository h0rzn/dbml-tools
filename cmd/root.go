package cmd

import (
	"fmt"

	"github.com/h0rzn/dbml-lsp-ts/language"
	"github.com/spf13/cobra"
)

var rootCmd = &cobra.Command{
	Use:   "dbml-lsp-ts",
	Short: "A dbml language server based on tree-sitter based on tree-sitter",
	Long:  "",
}

var devCmd = &cobra.Command{
	Use:   "dev cmd",
	Short: "",
	Long:  "",
	Run: func(cmd *cobra.Command, args []string) {
		path := "./test.dbml"

		documentItem, err := createDocumentItem(path)
		if err != nil {
			fmt.Println(err)
			return
		}

		document := language.NewDocument(documentItem)
		err = document.Init()
		if err != nil {
			fmt.Println(err)
		}

		document.ContentsByPosition(0, 6)
	},
}

func Execute() error {
	return rootCmd.Execute()
}

func init() {
	rootCmd.AddCommand(lspCmd)
	rootCmd.AddCommand(parseCmd)
	rootCmd.AddCommand(queryCmd)
	rootCmd.AddCommand(validateCmd)

	rootCmd.AddCommand(devCmd)
}
