package textbuffer

type TextBuffer interface {
	Insert(offset int, text []byte)
	Delete(offset int, length int)
	Replace(offset int, replacement []byte)
	Contents() []byte
	ContentsRange(startByte uint32, endByte uint32) []byte
}
