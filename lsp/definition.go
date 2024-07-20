package lsp

import (
	"errors"
	"fmt"

	"github.com/h0rzn/dbml-lsp-ts/language"
	"github.com/tliron/glsp"
	protocol "github.com/tliron/glsp/protocol_3_16"
)

func (s *Server) TextDocumentDefinition(context *glsp.Context, params *protocol.DefinitionParams) (any, error) {
	fmt.Printf("[DEFINITION]\n")

	resultLocation := protocol.Location{
		URI: params.TextDocument.URI,
	}

	line, offset, err := s.document.LocateTable(params.Position.Line, params.Position.Character)
	if err != nil {
		if errors.Is(err, language.ErrDefinitionMissingDestination) {
			resultLocation.Range = protocol.Range{
				Start: protocol.Position{
					Line:      params.Position.Line,
					Character: params.Position.Character,
				},
				End: protocol.Position{
					Line:      params.Position.Line,
					Character: params.Position.Character,
				},
			}
			return resultLocation, nil
		}
		fmt.Println("unhandled definition err", err)
		return nil, err
	}

	resultPosition := protocol.Position{
		Line:      line,
		Character: offset,
	}
	resultLocation.Range = protocol.Range{
		Start: resultPosition,
		End:   resultPosition,
	}
	return resultLocation, nil
}
