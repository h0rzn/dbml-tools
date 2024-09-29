package language

import (
	"errors"

	sitter "github.com/smacker/go-tree-sitter"
)

var ErrDefinitionMissingDestination = errors.New("failed to find match")
var ErrResolveUnsupportedNodeType = errors.New("failed to resolve: unsupported node type")

const tableLocateIncludeAliases = true

// TODO: support project location detection

// Resolve resolves a node by line and offset for a given document.
// Depending on the node at the given position either a table or a column is resolved.
// Returns the destinationNode and error.
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
		return nil, ErrResolveUnsupportedNodeType
	}
}

type ResolvedContents struct {
	// Content is the resolved
	// source code as string
	Content string
	// Resolved states
	// if content could be resolved
	Resolved bool
}

// ResolveContents uses Resolve to resolve a node, but returns the contents instead of node.
// Returns ResolveContents and error.
func ResolveContents(document *Document, line uint32, column uint32) (ResolvedContents, error) {
	var resolveResult ResolvedContents

	result, err := Resolve(document, line, column)
	if err != nil {
		return resolveResult, err
	}

	content := document.ContentsRange(result.StartByte(), result.EndByte())
	resolveResult.Content = string(content)
	resolveResult.Resolved = true

	return resolveResult, nil
}

// resolveTable resolves a table based on NodeAtResult for a document.
// If param includeAliases is true table aliases will also be considered.
// Returns resolved table node and error.
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

// resolveColumn resolves a column based on NodeAtResult for a document.
// Returns resolved column node and error.
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

	return nil, errors.New("locateColumn: unsupported parent type")
}

// columnByValues finds a column node by table name and column name, by matching
// these strings node values.
// Returns column node and error.
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

// tableByName finds a tableNode by table name.
// If includeAliases is true table aliases will also be considered.
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
					return tableNode, nil
				}
			}
		}

		if tableNameNode := tableNode.ChildByFieldName(TSVTableName); tableNameNode != nil {
			if tableNameNode.Content(document.Contents()) == tableName {

				return tableNode, nil
			}
		}

	}
	return nil, ErrDefinitionMissingDestination
}
