package cmd

import (
	"fmt"

	"github.com/spf13/cobra"
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
		fmt.Printf("Parsing: %q\n\n", path)

		document, err := documentFromArg(path)
		if err != nil {
			fmt.Println("Error:", err.Error())
			return
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

		document, err := documentFromArg(path)
		if err != nil {
			fmt.Println("Error:", err.Error())
			return
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
