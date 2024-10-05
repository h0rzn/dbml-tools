module.exports = {
  identifier: $ => /[a-zA-Z0-9_-]+/,
  _newline: $ => '\n',
  _space: $ => ' ',
  _dot: $ => '.',

  enquoted_identifier: $ => seq(
    '\'',
    $.identifier,
    '\'',
  ),

  enquoted_identifier_multi: $ => seq(
    '\'',
    repeat($.identifier),
    '\'',
  ),

  double_enquoted_identifier: $ => seq(
    '"',
    $.identifier,
    '"',
  ),

  // _unrestricted_identifier: /[a-zA-Z0-9_-]+/,
  _hidden_identifier: $ => /[a-zA-Z0-9_-]+/,

  field_note_standalone: $ => seq(
    '[',
    'note',
    ':',
    $._space,
    $.enquoted_identifier_multi,
    ']'
  )
};
