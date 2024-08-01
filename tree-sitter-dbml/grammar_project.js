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

  project_name: $ => $.identifier,

  project_property_definition: $ => seq(
      field('project_property_key', $.project_property_key),
      ':',
      $._space,
      field('project_property_value', $.enquoted_identifier),
      $._newline
  ),

  project_property_key: $ => choice(
    'database_type',
    'Note'
  ),

  //
  // Keywords
  //
  Project: $ => token('Project'),

};
