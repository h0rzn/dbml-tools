package language

import (
	"errors"
	"fmt"

	sitter "github.com/smacker/go-tree-sitter"
)

const tableLocateIncludeAliases = true

// TODO: support project location detection
func Resolve(document *Document, line uint32, offset uint32) (destinationNode *sitter.Node, err error) {
	result, err := document.NodeAt(line, offset)
	if err != nil {
		return nil, err
	}

	switch result.Node.Type() {
	case TSVColumnName:
		result, err := resolveColumn(document, result)
		if err != nil {
			return nil, err
		}
		return result, nil

	case TSVTableName:
		result, err := resolveTable(document, result, tableLocateIncludeAliases)
		if err != nil {
			return nil, err
		}
		return result, nil
	default:
		return nil, errors.New("failed to resolve: unsupported node type")
	}
}

type ResolvedContents struct {
	Content string
	// If content could be resolved
	Resolved bool
}

func ResolveContents(document *Document, line uint32, column uint32) (ResolvedContents, error) {
	var resolveResult ResolvedContents

	src, err := document.NodeAt(line, column)
	if err != nil {
		return resolveResult, err
	}

	result, err := Resolve(document, src.Node.StartPoint().Row, src.Node.StartPoint().Row)
	if err != nil {
		return resolveResult, err
	}

	resultNodeType := result.Type()
	if resultNodeType == TSVColumnName || resultNodeType == TSVTableName {
		content, _ := document.ContentsRange(result.StartByte(), result.EndByte())
		resolveResult.Content = string(content)

		return resolveResult, nil
	}

	resolveResult.Resolved = false

	return resolveResult, nil
}

func resolveTable(document *Document, result *NodeAtResult, includeAliases bool) (*sitter.Node, error) {
	if result.Parent.Type() == TSDRelationshipSide {
		// find destination node by table and column name
		resultParentNode := result.Parent.Child(0)
		resultParentValue := resultParentNode.Content(document.Contents())
		// column
		dstTableNode, err := tableByName(document, resultParentValue, includeAliases)
		if err != nil {
			return nil, err
		}

		return dstTableNode, nil
	}
	return nil, errors.New("locateTable: unsupported parent type")
}

func resolveColumn(document *Document, result *NodeAtResult) (*sitter.Node, error) {
	if result.Parent.Type() == TSDRelationshipSide {
		// find destination node by table and column name
		resultParentNode := result.Parent.Child(0)
		resultParentValue := resultParentNode.Content(document.Contents())
		// column
		resultNodeValue := result.Node.Content(document.Contents())
		dstTableNode, err := columnByValues(document, resultParentValue, resultNodeValue)
		if err != nil {
			return nil, err
		}

		return dstTableNode, nil
	}

	return nil, errors.New("locateTable: unsupported parent type")
}

func columnByValues(document *Document, tableName string, columnName string) (*sitter.Node, error) {
	query := `
		(table_definition) @table
	`
	nodes, err := document.Query(query)
	if err != nil {
		return nil, err
	}

	for _, tableNode := range nodes {
		tableNameNode := tableNode.ChildByFieldName(TSVTableName)
		if tableNameNode == nil {
			continue
		}
		// compare table names
		if tableNameNode.Content(document.Contents()) == tableName {
			childCount := tableNode.ChildCount()
			var i uint32
			for i = 0; i < childCount; i++ {
				child := tableNode.Child(int(i))
				if child.Type() != TSDColumn {
					continue
				}

				columnNameNode := child.ChildByFieldName(TSVColumnNameValue)
				if columnNameNode == nil {
					continue
				}

				dstColumnName := columnNameNode.Content(document.Contents())
				if dstColumnName == columnName {
					return child, nil
				}
			}

			return nil, ErrDefinitionMissingDestination
		}
	}
	return nil, ErrDefinitionMissingDestination
}

func tableByName(document *Document, tableName string, includeAliases bool) (*sitter.Node, error) {
	query := `
		(table_definition) @table
	`
	nodes, err := document.Query(query)
	if err != nil {
		return nil, err
	}

	for _, tableNode := range nodes {
		if includeAliases {
			if aliasNameNode := tableNode.ChildByFieldName("table_alias_name"); aliasNameNode != nil {

				if aliasNameNode.Content(document.Contents()) == tableName {
					fmt.Println("MATCH", tableNode)
					return tableNode, nil
				}
			}
		}

		if tableNameNode := tableNode.ChildByFieldName(TSVTableName); tableNameNode != nil {
			if tableNameNode.Content(document.Contents()) == tableName {

				fmt.Println("MATCH 2", tableNode)
				return tableNode, nil
			}
		}

	}
	return nil, ErrDefinitionMissingDestination
}
