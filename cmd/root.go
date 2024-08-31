package cmd

import (
	"github.com/spf13/cobra"
)

var rootCmd = &cobra.Command{
	Use:   "dbml-lsp-ts",
	Short: "A dbml language server based on tree-sitter based on tree-sitter",
	Long:  "",
}

func Execute() error {
	return rootCmd.Execute()
}

func init() {
	rootCmd.AddCommand(lspCmd)

	parseCmd.Flags().BoolVarP(&ErrorsOnly, "errorOnly", "e", false, "Only show errors as output")
	parseCmd.Flags().BoolVarP(&RawOutput, "raw", "r", false, "Raw output")
	parseCmd.Flags().BoolVarP(&FieldNames, "fieldNames", "f", false, "Show field names")
	rootCmd.AddCommand(parseCmd)

	rootCmd.AddCommand(queryCmd)

	validateCmd.Flags().BoolVarP(&Compact, "compact", "c", false, "Compact output")
	rootCmd.AddCommand(validateCmd)

	rootCmd.AddCommand(devCmd)
}
