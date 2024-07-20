package cmd

import (
	"fmt"

	"github.com/h0rzn/dbml-lsp-ts/language"
	"github.com/spf13/cobra"
)

var validateCmd = &cobra.Command{
	Use:   "validate",
	Short: "Validate a file directly",
	Long:  "",
	Run: func(cmd *cobra.Command, args []string) {
		if len(args) != 1 {
			fmt.Println("Error: exactly 1 input file expected")
			return
		}

		path := args[0]
		fmt.Printf("Validating: %q\n\n", path)
		document, err := documentFromArg(path)
		if err != nil {
			fmt.Printf("Error: %s\n", err.Error())
			return
		}
		language.ValidateDocument(document)

	},
}
