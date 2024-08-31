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

  index_definition: $ => seq(
    choice(
      $.index_definition_single,
      $.index_definition_composite
    ),
    optional($.index_setting)
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

  index_setting: $ => seq(
    '[',
    $.index_settings,
    ']'
  ),

  index_settings: $ => choice(
    'pk',
    'unique',
    seq('name', ':', $._space, $.enquoted_identifier),
    seq('type', ':', $.identifier),
  ),

  indexes: $ => token('indexes')

}
