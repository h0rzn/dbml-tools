package lsp

import (
	"errors"
	"fmt"

	"github.com/h0rzn/dbml-lsp-ts/language"
	sitter "github.com/smacker/go-tree-sitter"
	"github.com/tliron/glsp"
	protocol "github.com/tliron/glsp/protocol_3_16"
	"github.com/tliron/glsp/server"
)

var (
	handler protocol.Handler
	version = "0.1"
)

type Server struct {
	language  *sitter.Language
	lspServer *server.Server
	document  *language.Document
	state     *State
}

func NewServer(language *sitter.Language) *Server {
	return &Server{
		language: language,
		state:    NewState(),
	}
}

func (s *Server) Init() {
	handler = protocol.Handler{
		Initialize:             s.initialize,
		Initialized:            s.initialized,
		Shutdown:               s.shutdown,
		SetTrace:               s.setTrace,
		TextDocumentCompletion: TestCompletion,
		TextDocumentDefinition: s.TextDocumentDefinition,
		TextDocumentDidOpen:    s.TextDocumentDidOpen,
		TextDocumentDidChange:  s.TextDocumentDidChange,
		TextDocumentDidSave:    s.TextDocumentDidSave,
		TextDocumentHover:      s.TextDocumentHover,
	}
	s.lspServer = server.NewServer(&handler, "dbml-lsp-ts", false)
}

func (s *Server) Run() {
	s.lspServer.RunStdio()
}

func (s *Server) initialize(context *glsp.Context, params *protocol.InitializeParams) (any, error) {
	fmt.Println("[INITIALIZE]", *params.RootURI)
	capabilities := handler.CreateServerCapabilities()

	return protocol.InitializeResult{
		Capabilities: capabilities,
		ServerInfo: &protocol.InitializeResultServerInfo{
			Name:    "dbml-lsp",
			Version: &version,
		},
	}, nil
}

func (s *Server) initialized(context *glsp.Context, params *protocol.InitializedParams) error {
	fmt.Println("[INITIALIZED]")
	return nil
}

func (s *Server) shutdown(context *glsp.Context) error {
	protocol.SetTraceValue(protocol.TraceValueOff)
	fmt.Println("[SHUTDOWN]")
	return nil
}

func (s *Server) setTrace(context *glsp.Context, params *protocol.SetTraceParams) error {
	protocol.SetTraceValue(params.Value)
	return nil
}

func (s *Server) TextDocumentDidOpen(context *glsp.Context, params *protocol.DidOpenTextDocumentParams) error {
	fmt.Println("[DID_OPEN]", params.TextDocument.URI, s.language)

	// TODO: handle existing document
	document := language.NewDocument(params.TextDocument)
	err := document.Init()
	if err != nil {
		fmt.Println(err)
	}
	s.document = document
	return err
}

func (s *Server) TextDocumentDidChange(context *glsp.Context, params *protocol.DidChangeTextDocumentParams) error {
	fmt.Println("\n [DID_CHANGE]")

	changeList := params.ContentChanges
	var changes []protocol.TextDocumentContentChangeEvent
	for _, change := range changeList {
		fmt.Printf("\t change: %+v\n", change)
		switch v := change.(type) {
		case protocol.TextDocumentContentChangeEvent:
			changes = append(changes, v)
		case protocol.TextDocumentContentChangeEventWhole:
			return errors.New("DidChange: whole change not implemented")
		default:
			return errors.New("DidChange: unsupported content change format")
		}
	}

	s.state.PushChange(changes...)

	return nil
}

func (s *Server) TextDocumentDidSave(context *glsp.Context, params *protocol.DidSaveTextDocumentParams) error {
	fmt.Println("[DID_SAVE]")
	documentChanges := s.state.Changes()
	err := s.document.ApplyChanges(documentChanges)
	return err
}
