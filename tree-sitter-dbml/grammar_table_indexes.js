module.exports = {

  indexes_definition: $ => seq(
    $.indexes,
    $._space,
    '{',
    $._newline,
    repeat(
      seq($.index_definition, $._newline)
    ),
    '}'
  ),

  index_definition: $ => choice(
    $.index_definition_single,
  ),


  index_definition_single: $ => $.identifier,

  indexes: $ => token('indexes')

}
