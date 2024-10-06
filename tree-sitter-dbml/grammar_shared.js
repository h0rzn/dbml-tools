module.exports = {
  //
  // Identifiers
  //
  // user values like table names, or node contentes

  ident_basic: $ => /[a-zA-Z0-9_-]+/,

  _ident_basic: $ => /[a-zA-Z0-9_-]+/,

  // ident_inside machtes any character except
  // ' and newline
  ident_inside: $ => /[^'\n]+/,

  // needed? probably not
  _identifier2: $ => /[a-zA-Z0-9_\-()]+/,

  ident_any_with_nl: $ => choice(
    /[^\n]+/,  // any non-newline character
    '\n'       // newline (empty lines)
  ),


  //
  // Special Characters
  //
  _newline: $ => '\n',
  _space: $ => ' ',
  _dot: $ => '.',


  //
  // Enquoting Helpers for Identifiers
  //
  // primarily used for note rules
  enquoted_identifier: $ => seq(
    '\'',
    $.ident_basic,
    '\'',
  ),

  enquoted_identifier_multi: $ => seq(
    '\'',
    repeat($.ident_basic),
    '\'',
  ),

  enquoted_identifier_multi2: $ => seq(
    '\'',
    $.ident_inside,
    '\'',
  ),

  double_enquoted_identifier: $ => seq(
    '"',
    $.ident_basic,
    '"',
  ),

};
