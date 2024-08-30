package export

import (
	"errors"
	"strings"

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

	tablesSql, err := e.tablesSql()
	if err != nil {
		return "", err
	}
	var tableBuilder strings.Builder
	for _, tableSql := range tablesSql {
		if tableSql != "" {
			tableBuilder.WriteString(tableSql)
			tableBuilder.WriteRune('\n')
		}
	}

	return tableBuilder.String(), nil
}

func (e *Exporter) tablesSql() ([]string, error) {
	var tablesSql []string
	nodes, err := e.document.Query("(table_definition) @td")
	if err != nil {
		return nil, err
	}

	for _, node := range nodes {
		tableNode := WalkTableNode(node, e.document)
		tableSql, err := CreateTableSQL(tableNode)
		if err != nil {
			return nil, err
		}
		tablesSql = append(tablesSql, tableSql)
	}
	return tablesSql, nil

}
