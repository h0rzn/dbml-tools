package lsp

import (
	"errors"

	"github.com/h0rzn/dbml-lsp-ts/language"
	"github.com/tliron/glsp"
	protocol "github.com/tliron/glsp/protocol_3_16"
)

func (s *Server) TextDocumentHover(context *glsp.Context, params *protocol.HoverParams) (*protocol.Hover, error) {
	line := params.Position.Line
	column := params.Position.Character

	result, err := language.ResolveContents(s.document, line, column)
	if err != nil {
		// Dont error if node type is not supported
		if errors.Is(err, language.ErrResolveUnsupportedNodeType) {
			return nil, nil
		}

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
