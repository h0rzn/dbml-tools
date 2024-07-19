package lsp

import (
	"fmt"

	"github.com/tliron/glsp"
	protocol "github.com/tliron/glsp/protocol_3_16"
)

func (s *Server) TextDocumentDefinition(context *glsp.Context, params *protocol.DefinitionParams) (any, error) {
	fmt.Printf("[DEFINITION]")

	line, offset, err := s.document.LocateTable(params.Position.Line, params.Position.Character)
	if err != nil {
		fmt.Println("definition err", err)
		return nil, err
	}
	resultLocation := protocol.Location{
		URI: params.TextDocument.URI,
		Range: protocol.Range{
			Start: protocol.Position{
				Line:      line,
				Character: offset,
			},
			End: protocol.Position{
				Line:      line,
				Character: offset,
			},
		},
	}
	return resultLocation, nil
}
