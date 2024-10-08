module.exports = {
  enum_definition: $ => seq(
    $.enum,
    $._space,
    field('enum_name', $.enum_name),
    $._space,
    '{',

    $._newline,
    repeat(
      seq($.enum_field, optional($.note_setting_standalone), $._newline)
    ),

    '}'
  ),

  enum_field: $ => field('enum_field',
    choice(
      field('enum_field_name', $.ident_basic),
      $.double_enquoted_identifier
    )
  ),

  enum_name: $ => $.ident_basic,

  enum: $ => token('enum')

}
