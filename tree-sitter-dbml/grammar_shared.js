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

  double_enquoted_identifier: $ => seq(
    '"',
    $.identifier,
    '"',
  ),

  // _unrestricted_identifier: /[a-zA-Z0-9_-]+/,
  _hidden_identifier: $ => /[a-zA-Z0-9_-]+/,
};
