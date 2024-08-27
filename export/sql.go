package export

import (
	"errors"
	"strings"

	"github.com/h0rzn/dbml-lsp-ts/language"
	sitter "github.com/smacker/go-tree-sitter"
)

var ErrorIncompatibleNodeType = errors.New("incompatible node type")

var constraintsMap = map[string]string{
	"increment": "AUTO_INCREMENT",
	"unique":    "UNIQUE",
	"not null":  "NOT NULL",
}

type Table struct {
	references []Reference
	name       string
	primaryKey string
	columns    []Column
}

type Column struct {
	name        string
	typ         string
	constraints []string
}

// Reference is a reference (FOREIGN KEY)
// to a different table
type Reference struct {
	SrcColumn string
	RefTable  string
	RefColumn string
}

func WalkTableNode(node *sitter.Node, document *language.Document) Table {
	cursor := document.TreeCursorByNode(node)
	defer cursor.Close()

	nameNode := cursor.CurrentNode().ChildByFieldName("table_name")
	if nameNode == nil {
		panic("name node is nil")
	}
	tableName := nameNode.Content(document.Contents())

	// walk column definitions
	var primaryKey string
	columns := make([]Column, 0)
	references := make([]Reference, 0)
	currentColumnNode := cursor.CurrentNode().ChildByFieldName("column")
	for currentColumnNode != nil {
		// column name
		columnNameNode := currentColumnNode.ChildByFieldName("col_name")
		if columnNameNode == nil {
			panic("col name Node is nil")
		}
		columnName := columnNameNode.Content(document.Contents())

		// column type
		typeNode := currentColumnNode.ChildByFieldName("col_type")
		if typeNode == nil {
			panic("col type Node is nil")
		}
		columnType := typeNode.Content(document.Contents())

		// column options (optional)
		constraints := make([]string, 0)
		settingsListNode := currentColumnNode.ChildByFieldName("col_settings")
		if settingsListNode != nil {
			settingsNodeIndex := 0
			for settingsNodeIndex < int(settingsListNode.ChildCount()) {
				currentSettingNode := settingsListNode.Child(settingsNodeIndex)
				if currentSettingNode != nil {
					switch currentSettingNode.Type() {
					case "relationship_definition_inline":
						// TODO: add fields in grammar
						if refTableNode := currentSettingNode.Child(2); refTableNode != nil {
							// WARN: hardcoded indeces could cause problems if schema is supplied
							refTableName := refTableNode.Child(0).Content(document.Contents())
							refColumnName := refTableNode.Child(1).Content(document.Contents())

							references = append(references, Reference{
								SrcColumn: columnName,
								RefTable:  refTableName,
								RefColumn: refColumnName,
							})
						}

					case "column_constraint":
						constraintValue := currentSettingNode.Content(document.Contents())
						if constraintValue == "pk" || constraintValue == "primary key" {
							primaryKey = columnName
							break
						}
						constraints = append(constraints, currentSettingNode.Content(document.Contents()))
					// TODO: handle other setting types
					default:
						settingsNodeIndex++
						continue
					}
				}
				settingsNodeIndex++
			}
		}

		columns = append(columns, Column{
			name:        columnName,
			typ:         columnType,
			constraints: constraints,
		})

		currentColumnNode = currentColumnNode.NextNamedSibling()
	}

	table := Table{
		name:       tableName,
		columns:    columns,
		primaryKey: primaryKey,
		references: references,
	}

	return table
}

func CreateTableSQL(table Table) (string, error) {
	var builder strings.Builder

	// CREATE-header
	builder.WriteString("CREATE TABLE IF NOT EXISTS ")
	builder.WriteString(table.name)
	builder.WriteString(" (\n")

	// column definitions
	for i, columnDefinition := range table.columns {
		builder.WriteString("\t")
		builder.WriteString(columnDefinition.name)
		builder.WriteString(" ")
		builder.WriteString(columnDefinition.typ)

		// column options
		constraintsLen := len(columnDefinition.constraints)
		if constraintsLen > 0 {
			builder.WriteString(" ")
			for i, constraint := range columnDefinition.constraints {
				// only write if constraint can be translated to sql
				if sqlValue, ok := constraintsMap[constraint]; ok {
					builder.WriteString(sqlValue)
				}
				if i < constraintsLen-1 {
					builder.WriteString(" ")
				}
			}
		}

		if i < len(table.columns)-1 {
			builder.WriteString(",\n")
		}

	}

	// FOREIGN KEY statements
	if len(table.references) > 0 {
		builder.WriteString(",\n")
		for i, reference := range table.references {
			builder.WriteString("\tFOREIGN KEY (")
			builder.WriteString(reference.SrcColumn)
			builder.WriteString(") REFERENCES ")
			builder.WriteString(reference.RefTable)
			builder.WriteString("(")
			builder.WriteString(reference.RefColumn)

			builder.WriteString(")")
			if i != len(table.references)-1 {
				builder.WriteString(",\n")
			}
		}
	}

	// PRIMARY KEY statement (just 1!)
	if table.primaryKey != "" {
		builder.WriteString(",\n\tPRIMARY KEY (")
		builder.WriteString(table.primaryKey)
		builder.WriteString(")")
	}

	builder.WriteString("\n);\n")

	return builder.String(), nil
}