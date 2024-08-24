package export

import (
	"errors"
	"fmt"
	"strings"

	"github.com/h0rzn/dbml-lsp-ts/language"
	sitter "github.com/smacker/go-tree-sitter"
)

var ErrorIncompatibleNodeType = errors.New("incompatible node type")

func GenCreateTable(node *sitter.Node, document *language.Document) (string, error) {
	if node.Type() != "table_definition" {
		return "", ErrorIncompatibleNodeType
	}
	if node == nil {
		return "", errors.New("genCreateTable: node is nil")
	}

	var builder strings.Builder

	// CREATE-header
	builder.WriteString("CREATE TABLE IF NOT EXISTS ")
	nameNode := node.ChildByFieldName("table_name")
	if nameNode == nil {
		return "", errors.New("nameNode is nil")
	}
	builder.WriteString(nameNode.Content(document.Contents()))
	builder.WriteString(" (\n")

	// column definitions
	columnDefinitions, err := genColumnDefinitions(node, document)
	if err != nil {
		fmt.Println(err)
	}
	builder.WriteString(columnDefinitions)
	builder.WriteString(");\n")

	return builder.String(), nil
}

func genColumnDefinitions(node *sitter.Node, document *language.Document) (string, error) {
	var builder strings.Builder
	for i := 0; i < int(node.ChildCount()); i++ {
		child := node.Child(i)
		if child == nil {
			return "", errors.New("column definitions: child is nil")
		}

		if child.Type() != "column_definition" {
			fmt.Println("continue", child.Type())
			continue
		}
		nameNode := child.ChildByFieldName("col_name")
		if nameNode == nil {
			return "", errors.New("column name: node is nil")
		}
		columnName := nameNode.Content(document.Contents())

		typeNode := child.ChildByFieldName("col_type")
		if typeNode == nil {
			return "", errors.New("column type: node is nil")
		}
		columnType := typeNode.Content(document.Contents())

		// TODO: add column options

		builder.WriteString("\t")
		builder.WriteString(columnName)
		builder.WriteRune(' ')
		builder.WriteString(columnType)
		fmt.Println(i, columnName, node.ChildCount())
		if i < int(node.ChildCount())-2 {
			builder.WriteString(",")
		}
		builder.WriteRune('\n')
	}

	return builder.String(), nil
}
