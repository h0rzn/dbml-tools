package textbuffer

type Piece struct {
	// start is start index for this piece for either []original
	// or []add. end is start + length
	start int
	// length is length of piece
	length int
	// flags if contents are stored in PieceTable.original (false)
	// or PieceTable.add (true)
	buffer bool
}

type PieceTable struct {
	// original holds the original version of the document
	original []byte
	// add holds all modifications
	add []byte
	// pieces stores all pieces of this piece table
	pieces []Piece
}

// NewPieceTable creates a new *PieceTable, which has one piece
// representing the whole document
func NewPieceTable(content []byte) *PieceTable {
	return &PieceTable{
		original: content,
		add:      []byte{},
		pieces: []Piece{
			{start: 0, length: len(content), buffer: false},
		},
	}
}

// Insert inserts text at offset. if internalOffset for the found piece
// is not 0, the piece will be split into left and right and the "insertion"-piece
// will be inserted between them.
func (pt *PieceTable) Insert(offset int, text []byte) {
	if !offsetOK(offset) {
		return
	}

	newPiece := Piece{
		start:  len(pt.add),
		length: len(text),
		buffer: true,
	}
	pt.add = append(pt.add, text...)

	index, internalOffset := pt.findPieceIndex(offset)
	// insertion at start of piece
	if internalOffset == 0 {
		pt.pieces = append(pt.pieces[:index], append([]Piece{newPiece}, pt.pieces[index:]...)...)

		return
	}

	// split existing piece
	// insert new piece
	currentPiece := pt.pieces[index]
	leftPiece := Piece{
		start:  currentPiece.start,
		length: internalOffset,
		buffer: currentPiece.buffer,
	}
	rightPiece := Piece{
		start:  currentPiece.start + internalOffset,
		length: currentPiece.length - internalOffset,
		buffer: currentPiece.buffer,
	}

	// update table pieces
	newPieceSlice := []Piece{leftPiece, newPiece, rightPiece}
	pt.pieces = append(pt.pieces[:index], append(newPieceSlice, pt.pieces[index+1:]...)...)
}

// Delete deletes a range of bytes with length length at offset
func (pt *PieceTable) Delete(offset int, length int) {
	if !offsetOK(offset) || length <= 0 {
		return
	}
	startIndex, startOffset := pt.findPieceIndex(offset)
	endIndex, endOffset := pt.findPieceIndex(offset + length)

	newPieces := make([]Piece, 0, len(pt.pieces))
	newPieces = append(newPieces, pt.pieces[:startIndex]...)
	// start piece
	if startOffset > 0 {
		newPieces = append(newPieces, Piece{
			start:  pt.pieces[startIndex].start,
			length: startOffset,
			buffer: pt.pieces[startIndex].buffer,
		})
	}
	// end piece
	if endOffset < pt.pieces[endIndex].length {
		newPieces = append(newPieces, Piece{
			start:  pt.pieces[endIndex].start + endOffset,
			length: pt.pieces[endIndex].length - endOffset,
			buffer: pt.pieces[endIndex].buffer,
		})
	}

	// append remaining pieces (pieces after index endIndex)
	newPieces = append(newPieces, pt.pieces[endIndex+1:]...)

	pt.pieces = newPieces
}

// Replace replaces text starting with offset until len(replacement)
// and returns old end index (previous contents) and new end index (replacement)
// TODO: implement whole piece replacement
// TODO: implement multi piece replacement
func (pt *PieceTable) Replace(offset int, replacement []byte) (oldEnd int, newEnd int) {
	if len(replacement) == 0 || !offsetOK(offset) {
		return 0, 0
	}

	replacementLen := len(replacement)
	pieceIndex, pieceOffset := pt.findPieceIndex(offset)
	pieceEndIndex, _ := pt.findPieceIndex(offset + replacementLen)
	piece := pt.pieces[pieceIndex]

	if piece.length-1 == replacementLen {
		panic("Replace for whole piece is not implemented")
	}

	if piece.start+piece.length <= offset+len(replacement) {
		panic("Replace for multiple pieces is not implemented")
	}

	// split piece into left, middle and right
	// modifiedPiece will represent the replacement
	leftPiece, modifiedPiece, rightPiece := pt.extractSplit(pieceEndIndex, pieceOffset, len(replacement))
	modifiedPiece.buffer = true

	pieces := []Piece{}
	if leftPiece.length > 0 {
		pieces = append(pieces, leftPiece)
	}
	pieces = append(pieces, modifiedPiece)
	if rightPiece.length > 0 {
		pieces = append(pieces, rightPiece)
	}
	pt.pieces = pieces
	pt.add = append(pt.add, replacement...)

	if len(replacement) == modifiedPiece.length {
		endIndex := leftPiece.start + leftPiece.length + modifiedPiece.length
		return endIndex, endIndex
	}

	// TODO: implement return offsets when multiple pieces are affected
	// newEnd = modifiedPiece.start + modifiedPiece.length + (leftPiece.start + leftPiece.length)
	// return newEnd, newEnd
	return 0, 0
}

// splitPiece splits a piece into two pieces. right piece starts after left piece
func (pt *PieceTable) splitPiece(index int, offset int) (leftPiece Piece, rightPiece Piece) {
	currentPiece := pt.pieces[index]
	leftPiece = Piece{
		start:  currentPiece.start,
		length: offset,
		buffer: currentPiece.buffer,
	}
	rightPiece = Piece{
		start:  currentPiece.start + offset,
		length: currentPiece.length - offset,
		buffer: currentPiece.buffer,
	}

	return leftPiece, rightPiece
}

// extractSplit splits node of a given index into three pieces.
// left is left node. extracted is the piece of length extractLength
// and right is a piece referencing all following text.
func (pt *PieceTable) extractSplit(index int, offset int, extractLength int) (left Piece, extracted Piece, right Piece) {
	piece := pt.pieces[index]
	left = Piece{
		start:  piece.start,
		length: offset,
		buffer: piece.buffer,
	}

	extracted = Piece{
		start:  len(pt.add),
		length: extractLength,
		buffer: piece.buffer,
	}

	right = Piece{
		start:  (left.start + left.length) + (extracted.start + extracted.length),
		length: piece.length - offset - extractLength,
		buffer: piece.buffer,
	}

	return left, extracted, right
}

// Contents returns the contents stored
func (pt *PieceTable) Contents() []byte {
	var result []byte
	for _, piece := range pt.pieces {
		endIndex := piece.start + piece.length
		if piece.buffer {
			result = append(result, pt.add[piece.start:endIndex]...)
		} else {
			result = append(result, pt.original[piece.start:endIndex]...)
		}
	}
	return result
}

// ContentsRange returns the contents for in range [start:end]
func (pt *PieceTable) ContentsRange(start uint32, end uint32) []byte {
	if start >= end {
		return []byte{}
	}

	result := make([]byte, 0, end-start)
	currentOffset := uint32(0)
	for _, piece := range pt.pieces {
		// byte offsets for current piece
		pieceStart := currentOffset
		pieceEnd := currentOffset + uint32(piece.length)

		// fast forward if start offset has
		// not been reached yet
		if pieceEnd <= start {
			currentOffset = pieceEnd
			continue
		}

		// exit if current piece end offset is
		// outside of requested range
		if pieceStart >= end {
			break
		}

		// overlaps between current piece and
		// requested range
		overlapStart := max(pieceStart, start)
		overlapEnd := min(pieceEnd, end)
		// start and end offset for byte buffer
		bufferOffset := overlapStart - pieceStart
		bufferEnd := overlapEnd - pieceStart

		// indices for accessing bytes from piece
		startIndex := piece.start + int(bufferOffset)
		endIndex := piece.start + int(bufferEnd)
		if piece.buffer {
			result = append(result, pt.add[startIndex:endIndex]...)
		} else {
			result = append(result, pt.original[startIndex:endIndex]...)
		}

		currentOffset = pieceEnd

		// exit if piece end is
		// end of requested range
		if currentOffset >= end {
			break
		}
	}

	return result
}

// PieceText returns the current contents of the stored document
func (pt *PieceTable) PieceText(piece Piece) []byte {
	endIndex := piece.start + piece.length
	if piece.buffer {
		return pt.add[piece.start:endIndex]
	}

	return pt.original[piece.start:endIndex]
}

// findPieceIndex finds the index and internalOffset of a piece by its offset
func (pt *PieceTable) findPieceIndex(offset int) (index int, internalOffset int) {
	currentOffset := 0
	for i, piece := range pt.pieces {
		if currentOffset+piece.length > offset {
			return i, offset - currentOffset
		}
		currentOffset += piece.length
	}

	index = len(pt.pieces) - 1
	internalOffset = pt.pieces[len(pt.pieces)-1].length
	return index, internalOffset
}

// offsetOK returns true if offset >= 0
func offsetOK(offset int) bool {
	return offset >= 0
}

func max(a, b uint32) uint32 {
	if a > b {
		return a
	}

	return b
}

func min(a, b uint32) uint32 {
	if a < b {
		return a
	}

	return b
}
