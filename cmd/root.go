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

		// l := uint32(22)
		// o := uint32(16)
		l := uint32(19)
		o := uint32(17)

		result, err := language.Resolve(document, l, o)
		if err != nil {
			panic(err)
		}
		fmt.Printf("\n Resolve Result:\n%+v\n", result)
	},
}

func Execute() error {
	return rootCmd.Execute()
}

func init() {
	rootCmd.AddCommand(lspCmd)

	parseCmd.Flags().BoolVarP(&ErrorsOnly, "errorOnly", "e", false, "Only show errors as output")
	parseCmd.Flags().BoolVarP(&RawOutput, "raw", "r", false, "Raw output")
	rootCmd.AddCommand(parseCmd)

	rootCmd.AddCommand(queryCmd)

	validateCmd.Flags().BoolVarP(&Compact, "compact", "c", false, "Compact output")
	rootCmd.AddCommand(validateCmd)

	rootCmd.AddCommand(devCmd)
}
