package language

import (
	"errors"
	"fmt"

	sitter "github.com/smacker/go-tree-sitter"
)

type SymbolType int32

const ProjectSymbol SymbolType = 23
const ProjectPropertySymbol SymbolType = 8
const TableSymbol SymbolType = 23
const ColumnSymbol SymbolType = 8
const ShortRefSymbol SymbolType = 25

type Symbol struct {
	Name  string
	Range sitter.Range
	Type  SymbolType
}

// NOTE: Ad-Hoc symbol retrieval
// this sould be cached
func Symbols(document *Document) ([]Symbol, error) {
	var symbols []Symbol

	cursor := document.TreeCursor()
	// root: 'source_file' node -> skip

	hasChild := cursor.GoToFirstChild()
	if !hasChild {
		return symbols, errors.New("root node has no children")
	}

	symbols = collectSymbols(document, document.RootNode(), symbols)

	return symbols, nil
}

func collectSymbols(document *Document, node *sitter.Node, symbols []Symbol) []Symbol {
	for i := 0; i < int(node.ChildCount()); i++ {
		child := node.Child(i)

		var name string
		var symbolType SymbolType
		switch child.Type() {
		case TSDProject:
			symbolType = TableSymbol
			nameNode := child.ChildByFieldName(TSVProjectName)
			if nameNode != nil {
				name = nameNode.Content(document.Contents())
			} else {
				name = "<unkown project>"
			}

		case TSDProjectProperty:
			symbolType = ProjectPropertySymbol
			nameNode := child.ChildByFieldName(TSVProjectPropertyKey)
			if nameNode != nil {
				name = nameNode.Content(document.Contents())
			} else {
				name = "<unkown project>"
			}

		case TSDTable:
			symbolType = TableSymbol
			nameNode := child.ChildByFieldName(TSVTableName)
			if nameNode != nil {
				name = nameNode.Content(document.Contents())
			} else {
				name = "<unkown table>"
			}

		case TSDColumn:
			symbolType = ColumnSymbol
			nameNode := child.ChildByFieldName(TSVColumnNameValue)
			if nameNode != nil {
				name = nameNode.Content(document.Contents())
			} else {
				name = "<unkown column>"
			}
			fmt.Println(name, child)

		case TSDRelationshipShort:
			symbolType = ShortRefSymbol
			nameNode := child.ChildByFieldName(TSVRelationshipName)
			if nameNode != nil {
				name = nameNode.Content(document.Contents())
			} else {
				name = "<anonymouse ref>"
			}

		default:
			continue
		}

		symbol := Symbol{
			Type:  symbolType,
			Name:  name,
			Range: child.Range(),
		}

		symbols = append(symbols, symbol)
		symbols = collectSymbols(document, child, symbols)

	}
	return symbols

}
