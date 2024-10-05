module.exports = {
  enum_definition: $ => seq(
    $.enum,
    $._space,
    field('enum_name', $.enum_name),
    $._space,
    '{',

    $._newline,
    repeat(
      seq($.enum_field, optional($.field_note_standalone), $._newline)
    ),

    '}'
  ),

  enum_field: $ => field('enum_field',
    choice(
      field('enum_field_name', $.identifier),
      $.double_enquoted_identifier
    )
  ),

  enum_name: $ => $.identifier,

  enum: $ => token('enum')

}
