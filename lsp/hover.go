package lsp

import (
	"github.com/h0rzn/dbml-lsp-ts/language"
	"github.com/tliron/glsp"
	protocol "github.com/tliron/glsp/protocol_3_16"
)

func (s *Server) TextDocumentHover(context *glsp.Context, params *protocol.HoverParams) (*protocol.Hover, error) {
	line := params.Position.Line
	column := params.Position.Character

	result, err := language.ResolveContents(s.document, line, column)
	if err != nil {
		return nil, err
	}

	// No errors but we couln't resolve
	if !result.Resolved {
		return nil, nil
	}

	hover := &protocol.Hover{
		Contents: result.Content,
	}

	return hover, nil
}
