module.exports = {
  project_definition: $ => seq(
    $.Project,
    $._space,
    field('project_name', $.project_name),
    $._space,
    '{',
    $._newline,
    field('project_property', repeat($.project_property_definition2)),
    '}'
  ),

  project_name: $ => $.identifier,

  project_property_definition: $ => seq(
      field('project_property_key', $.project_property_key),
      ':',
      $._space,
      field('project_property_value', $.enquoted_identifier_multi),
      $._newline
  ),

  project_property_definition2: $ => choice(
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

  // TODO: use grammar_notes.js for 'note' implementation
  project_property_key: $ => choice(
    $.Note,
    $.database_type
  ),

  //
  // Keywords
  //
  Project: $ => token('Project'),
  database_type: $ => token('database_type')

};
