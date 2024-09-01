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

	tablesSql, indexesSql, err := e.tablesSql()
	if err != nil {
		return "", err
	}

	var builder strings.Builder
	for _, tableSql := range tablesSql {
		if tableSql != "" {
			builder.WriteString(tableSql)
			builder.WriteRune('\n')
		}
	}

	for _, indexSql := range indexesSql {
		if indexSql != "" {
			builder.WriteString(indexSql)
			builder.WriteRune('\n')
		}
	}
	return builder.String(), nil
}

func (e *Exporter) tablesSql() (tablesSql []string, indexesSql []string, err error) {
	tablesSql = make([]string, 0)
	indexesSql = make([]string, 0)

	nodes, err := e.document.Query("(table_definition) @td")
	if err != nil {
		return nil, nil, err
	}

	for _, node := range nodes {
		tableNode := WalkTableNode(node, e.document)
		tableSql, err := CreateTableSQL(tableNode)
		if err != nil {
			return nil, nil, err
		}
		tablesSql = append(tablesSql, tableSql)

		indexSql, err := CreateIndexesSQL(tableNode.indexes)
		if err != nil {
			return nil, nil, err
		}
		indexesSql = append(indexesSql, indexSql...)
	}
	return tablesSql, indexesSql, nil

}
