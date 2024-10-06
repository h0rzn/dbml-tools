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
    optional(field('index_settings', $.index_settings))
  ),

  index_definition_single: $ => field('index_column', $.index_column),

  index_definition_composite: $ => seq(
    '(',
    field('index_column', $.index_column),
    repeat(
      seq(
        ',',
        field('index_column', $.index_column),
      ),
    ),
    ')'
  ),

  index_column: $ => $.ident_basic,

  index_settings: $ => seq(
    '[',
    $.index_setting,
    ']'
  ),

  index_setting: $ => choice(
    'pk',
    'unique',
    seq('name', ':', $._space, $.enquoted_identifier),
    seq('type', ':', $.ident_basic),
  ),

  indexes: $ => token('indexes')

}
