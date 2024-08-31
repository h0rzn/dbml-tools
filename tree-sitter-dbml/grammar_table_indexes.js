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
    $.index_definition_composite
  ),

  index_definition_single: $ => $.identifier,

  index_definition_composite: $ => seq(
    '(',
    $.identifier,
    repeat(
      seq(
        ',',
        $.identifier
      ),
    ),
    ')'
  ),

  indexes: $ => token('indexes')

}
