package cmd

import (
	"fmt"

	"github.com/h0rzn/dbml-lsp-ts/language"
	"github.com/h0rzn/dbml-lsp-ts/lsp"
	"github.com/spf13/cobra"
)

var lspCmd = &cobra.Command{
	Use:   "lsp",
	Short: "Run lsp",
	Long:  "",
	Run: func(cmd *cobra.Command, args []string) {
		language := language.GetLanguage()
		if language == nil {
			fmt.Println("Error: failure starting server: failed to get language")
		}
		server := lsp.NewServer(language)
		server.Init()
		server.Run()
	},
}
