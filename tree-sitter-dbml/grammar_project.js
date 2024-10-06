module.exports = {
  project_definition: $ => seq(
    $.Project,
    $._space,
    field('project_name', $.project_name),
    $._space,
    '{',
    $._newline,
    field('project_property', repeat($.project_property_definition)),
    '}'
  ),

  project_name: $ => $.ident_basic,

  project_property_definition: $ => choice(
    seq(
      $.Note,
      ':',
      $.note_standalone_multiline
    ),
    seq(
      $.database_type,
      ':',
      $.enquoted_identifier_multi
    ),
  ),

  //
  // Keywords
  //
  Project: $ => token('Project'),
  database_type: $ => token('database_type')

};
