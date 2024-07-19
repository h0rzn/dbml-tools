package lsp

import (
	"fmt"

	"github.com/tliron/glsp"
	protocol "github.com/tliron/glsp/protocol_3_16"
)

func (s *Server) TextDocumentDefinition(context *glsp.Context, params *protocol.DefinitionParams) (any, error) {
	fmt.Printf("[DEFINITION]")
	// fmt.Printf("definition: %+v, %+v\n", context, params)
	line, offset, err := s.document.FindTableDefinition(params.Position.Line, params.Position.Character)
	if err != nil {
		fmt.Println("definition err:", err.Error())
		return nil, err
	}
	fmt.Println("definition result", line, offset)

	resultLocation := protocol.Location{
		URI: params.TextDocument.URI,
		Range: protocol.Range{
			Start: protocol.Position{
				Line:      0,
				Character: 0,
			},
			End: protocol.Position{
				Line:      0,
				Character: 0,
			},
		},
	}

	return resultLocation, nil
}
