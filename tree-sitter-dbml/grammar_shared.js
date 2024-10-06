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

  enquoted_identifier_multi2: $ => seq(
    '\'',
    $.ident_inside,
    '\'',
  ),

  double_enquoted_identifier: $ => seq(
    '"',
    $.identifier,
    '"',
  ),

  _hidden_identifier: $ => /[a-zA-Z0-9_-]+/,

  // ident_all: $ => /.+/,

  ident_inside: $ => /[^'\n]+/,
};
