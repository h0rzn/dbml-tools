build:
	./gen.sh 
	./compile_static.sh 
	go build

agent:
	lsp-devtools agent -- ./dbml-lsp-ts
