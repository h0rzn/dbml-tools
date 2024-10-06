module.exports = {
  // note_setting_standalone is a standalone comment
  // (formatted as setting but is the only setting in
  // the brackets)
  // ... [note: '...']
  note_setting_standalone: $ => seq(
    '[',
    'note',
    ':',
    $._space,
    $.enquoted_identifier_multi,
    ']'
  ),

  // note setting is a node setting. this can be used
  // for a note embedded in a settings array
  note_setting: $ => seq(
    $.note,
    ':',
    $.enquoted_identifier_multi2
  ),

  // note_standalone is a note of following two types:
  // Note: '...' or
  // Note {\n ... \n}
  note_standalone: $ => seq(
    $.Note,
    choice(
      seq(':', $.enquoted_identifier_multi),
      seq(
        $._space,
        '{',
        $._newline,
        $.enquoted_identifier_multi,
        $._newline,
        '}'
      )
    )
  ),

  // note_standalone_multiline is a triple single quote
  // enquoted block comment
  note_standalone_multiline: $ => seq(
    "'''",
    $.note_value_mutliline,
    "'''",
  ),

  // note_value_mulitline is the complete node
  // content, spanning mulitiple lines
  // note_value_mutliline: $ => repeat1($._note_line),

  note_value_mutliline: $ => repeat1(choice(
      /[^\n]+/,  // Matches any non-newline character
      '\n'       // Matches newline (empty lines)
  )),

  // _note_line is a single line in a block comment
  // it also captures newlines
  // _note_line: $ => choice(
  //     /[^\n]+/,  // Matches any non-newline character
  //     '\n'       // Matches newline (empty lines)
  // ),

  Note: $ => token('Note'),
  note: $ => token('note')
}
