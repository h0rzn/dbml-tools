package lsp

import (
	"github.com/h0rzn/dbml-lsp-ts/language"
	"github.com/tliron/glsp"
	protocol "github.com/tliron/glsp/protocol_3_16"
)

func (s *Server) TextDocumentDocumentSymbol(context *glsp.Context, params *protocol.DocumentSymbolParams) (any, error) {
	documentSymbols, err := language.Symbols(s.document)
	if err != nil {
		return nil, err
	}

	return ConvertSymbols(documentSymbols), nil
}

func ConvertSymbols(documentSymbols []language.Symbol) []protocol.DocumentSymbol {
	var symbols []protocol.DocumentSymbol
	for _, docSymbol := range documentSymbols {
		detail := docSymbol.Name + " details..."
		startPoint := docSymbol.Range.StartPoint
		endPoint := docSymbol.Range.EndPoint
		deprecated := false

		symbols = append(symbols, protocol.DocumentSymbol{
			Name:       docSymbol.Name,
			Detail:     &detail,
			Kind:       protocol.SymbolKind(docSymbol.Type),
			Tags:       []protocol.SymbolTag{},
			Deprecated: &deprecated,
			Range: protocol.Range{
				Start: protocol.Position{Line: startPoint.Row, Character: startPoint.Column},
				End:   protocol.Position{Line: endPoint.Row, Character: endPoint.Column},
			},
			SelectionRange: protocol.Range{
				Start: protocol.Position{Line: startPoint.Row, Character: startPoint.Column},
				End:   protocol.Position{Line: endPoint.Row, Character: endPoint.Column},
			},
			// TODO: implement children for node
			Children: []protocol.DocumentSymbol{},
		})

	}

	return symbols

}
