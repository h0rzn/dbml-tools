package language

import (
	sitter "github.com/smacker/go-tree-sitter"
)

type SymbolType int32

const ProjectSymbol SymbolType = 2
const ProjectPropertySymbol SymbolType = 7
const TableSymbol SymbolType = 23
const ColumnSymbol SymbolType = 8
const RefSymbol SymbolType = 25
const EnumSymbol SymbolType = 10

type Symbol struct {
	Name  string
	Range sitter.Range
	Type  SymbolType
}

// Symbols collects all symbols for a document.
// Top-level node (source_file) is ignored.
// Returns list of symbols or empty list if no children are
// found and error.
func Symbols(document *Document) ([]Symbol, error) {
	var symbols []Symbol

	cursor := document.TreeCursor()
	// root: 'source_file' node -> skip

	hasChild := cursor.GoToFirstChild()
	if !hasChild {
		return symbols, nil
	}

	symbols = collectSymbols(document, document.RootNode(), symbols)

	return symbols, nil
}

// collectSymbols recursively collects relevant nodes starting from initially passed node.
// Returns a list of these nodes converted to symbols.
func collectSymbols(document *Document, node *sitter.Node, symbols []Symbol) []Symbol {
	for i := 0; i < int(node.ChildCount()); i++ {
		child := node.Child(i)

		// var name string
		var nameNode *sitter.Node
		var symbolType SymbolType
		switch child.Type() {
		case TSDProject:
			// fmt.Println("PROJECT")
			symbolType = TableSymbol
			nameNode = child.ChildByFieldName(TSVProjectName)

		case TSDProjectProperty:
			// fmt.Println("PROJECT PROPERTY")
			symbolType = ProjectPropertySymbol
			nameNode = child.ChildByFieldName(TSVProjectPropertyKey)

		case TSDTable:
			// fmt.Println("TABLE")
			symbolType = TableSymbol
			nameNode = child.ChildByFieldName(TSVTableName)

		case TSDColumn:
			// fmt.Println("COLUMN")
			symbolType = ColumnSymbol
			nameNode = child.ChildByFieldName(TSVColumnNameValue)

		case TSDRelationshipShort:
			// fmt.Println("REL SHORT")
			symbolType = RefSymbol
			nameNode = child.ChildByFieldName(TSVRelationshipName)

		case TSDRelationshipLong:
			// fmt.Println("REL LONG")
			symbolType = RefSymbol
			nameNode = child.ChildByFieldName(TSVRelationshipName)

		case TSDEnum:
			symbolType = EnumSymbol
			nameNode = child.ChildByFieldName(TSVEnumName)

		case TSDEnumField:
			symbolType = EnumSymbol
			nameNode = child.ChildByFieldName(TSVEnumFieldName)

		default:
			continue
		}

		// fmt.Println("retrieve <name>")
		var name string
		if nameNode == nil {
			name = "<unkown>"
		} else {
			name = nameNode.Content(document.Contents())
			// fmt.Printf("nameNode exists (v: %q), range: %+v\n", name, nameNode.Range())
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
