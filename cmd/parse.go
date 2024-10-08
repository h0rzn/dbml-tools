package cmd

import (
	"fmt"

	"github.com/h0rzn/dbml-lsp-ts/language"
	"github.com/spf13/cobra"
)

var ErrorsOnly bool
var RawOutput bool
var FieldNames bool

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
		fmt.Printf("Parsing: %q\n\n", path)

		document, err := documentFromArg(path)
		if err != nil {
			fmt.Println("Error:", err.Error())
			return
		}

		errorOnly, _ := cmd.Flags().GetBool("errorOnly")
		rawOutput, _ := cmd.Flags().GetBool("raw")
		fieldNames, _ := cmd.Flags().GetBool("fieldNames")
		printOpts := language.PrintTreeOpts{
			ErrorsOnly: errorOnly,
			Raw:        rawOutput,
			FieldNames: fieldNames,
		}

		language.PrintTree(document.RootNode(), printOpts)
	},
}

var queryCmd = &cobra.Command{
	Use:   "query",
	Short: "Query a file directly",
	Long:  "",
	Run: func(cmd *cobra.Command, args []string) {
		if len(args) != 2 {
			fmt.Println("Error: provide file and query")
			return
		}
		path := args[0]
		query := args[1]

		document, err := documentFromArg(path)
		if err != nil {
			fmt.Println("Error:", err.Error())
			return
		}

		nodes, err := document.Query(query)
		if err != nil {
			fmt.Println(err)
		}
		fmt.Printf("Found %d matches\n\n", len(nodes))

		for nodeIndex, node := range nodes {
			// nodeRange := node.Range().StartByte
			fmt.Printf("[%02d]\n", nodeIndex)
			fmt.Printf("Expression:\n\t%q\n", node.String())
			contents := document.ContentsRange(node.StartByte(), node.EndByte())
			fmt.Printf("Result:\n\t%q\n", contents)
		}

	},
}
