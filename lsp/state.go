package lsp

import (
	"fmt"
	"sync"

	"github.com/h0rzn/dbml-lsp-ts/language"
	sitter "github.com/smacker/go-tree-sitter"
	protocol "github.com/tliron/glsp/protocol_3_16"
)

type State struct {
	*sync.Mutex
	changes []language.DocumentChange
}

func NewState() *State {
	return &State{
		&sync.Mutex{},
		make([]language.DocumentChange, 0),
	}
}

func (s *State) Changes() []language.DocumentChange {
	fmt.Printf("State: getting %d changes from buffer\n", len(s.changes))
	return s.changes
}

func (s *State) PushChange(event ...protocol.TextDocumentContentChangeEvent) {
	s.Lock()
	for _, event := range event {
		documentChange := s.convertEvent(event)
		s.changes = append(s.changes, documentChange)
	}
	s.Unlock()
	fmt.Printf("State: pushed %d changes to buffer\n", len(event))
}

func (s *State) convertEvent(event protocol.TextDocumentContentChangeEvent) language.DocumentChange {
	start := event.Range.Start
	end := event.Range.End
	documentChange := language.DocumentChange{
		Text: []byte(event.Text),
		StartPoint: sitter.Point{
			Row:    start.Line,
			Column: start.Character,
		},
		EndPoint: sitter.Point{
			Row:    end.Line,
			Column: end.Character,
		},
	}

	return documentChange
}

func (s *State) ClearChanges() {
	s.Lock()
	s.changes = nil
	s.Unlock()
}
