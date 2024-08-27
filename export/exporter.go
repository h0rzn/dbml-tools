package export

import (
	"errors"
	"fmt"

	"github.com/h0rzn/dbml-lsp-ts/language"
)

type Exporter struct {
	document *language.Document
}

func NewExporter(document *language.Document) *Exporter {
	return &Exporter{
		document: document,
	}
}

func (e *Exporter) Export() (string, error) {
	if e.document.RootNode() == nil {
		return "", errors.New("cannot export: tree has no nodes")
	}

	nodes, err := e.document.Query("(table_definition) @td")
	if err != nil {
		return "", err
	}
	for _, node := range nodes {
		// createCommand, err := GenCreateTable(node, e.document)
		// if err != nil {
		// 	panic(err)
		// }
		// fmt.Println("---")
		// fmt.Println(createCommand)
		// fmt.Println("---")
		tableNode := WalkTableNode(node, e.document)
		fmt.Printf("*tableNode*:\n%+v\n", tableNode)
		tableSql, _ := CreateTableSQL(tableNode)
		fmt.Println("***")
		fmt.Println(tableSql)
		fmt.Println("***")
	}
	return "", nil
}
