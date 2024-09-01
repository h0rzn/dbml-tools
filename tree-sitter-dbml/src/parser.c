#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 180
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 89
#define ALIAS_COUNT 0
#define TOKEN_COUNT 48
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 15
#define MAX_ALIAS_SEQUENCE_LENGTH 13
#define PRODUCTION_ID_COUNT 18

enum ts_symbol_identifiers {
  sym_comment = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_COLON = 4,
  anon_sym_database_type = 5,
  anon_sym_Note = 6,
  sym_Project = 7,
  anon_sym_LBRACK = 8,
  anon_sym_COMMA = 9,
  anon_sym_RBRACK = 10,
  sym_column_type = 11,
  anon_sym_default = 12,
  anon_sym_SQUOTE = 13,
  anon_sym_BQUOTE = 14,
  anon_sym_primarykey = 15,
  anon_sym_pk = 16,
  anon_sym_null = 17,
  anon_sym_notnull = 18,
  anon_sym_unique = 19,
  anon_sym_increment = 20,
  sym_Table = 21,
  sym_as = 22,
  anon_sym_LPAREN = 23,
  anon_sym_RPAREN = 24,
  anon_sym_name = 25,
  anon_sym_type = 26,
  sym_indexes = 27,
  anon_sym_ref_COLON = 28,
  anon_sym_delete = 29,
  anon_sym_on_delete = 30,
  anon_sym_update = 31,
  anon_sym_on_update = 32,
  anon_sym_cascade = 33,
  anon_sym_restrict = 34,
  anon_sym_setnull = 35,
  anon_sym_setdefault = 36,
  anon_sym_noaction = 37,
  anon_sym_DASH = 38,
  anon_sym_LT = 39,
  anon_sym_GT = 40,
  anon_sym_LT_GT = 41,
  sym_Ref = 42,
  aux_sym_identifier_token1 = 43,
  sym__newline = 44,
  sym__space = 45,
  sym__dot = 46,
  anon_sym_DQUOTE = 47,
  sym_source_file = 48,
  sym__definition = 49,
  sym_project_definition = 50,
  sym_project_name = 51,
  sym_project_property_definition = 52,
  sym_project_property_key = 53,
  sym_table_definition = 54,
  sym_table_name = 55,
  sym_column_definition = 56,
  sym_column_settings = 57,
  sym_column_setting_default = 58,
  sym_column_constraint = 59,
  sym_table_alias = 60,
  sym_indexes_definition = 61,
  sym_index_definition = 62,
  sym_index_definition_single = 63,
  sym_index_definition_composite = 64,
  sym_index_column = 65,
  sym_index_setting = 66,
  sym_index_settings = 67,
  sym_relationship_definition_short = 68,
  sym_relationship_definition_inline = 69,
  sym_relationship_definition_long = 70,
  sym_relationship_definition_side = 71,
  sym_relationship_setting_definition = 72,
  sym_relationship_event = 73,
  sym_relationship_action = 74,
  sym_relationship_symbol = 75,
  sym_column_name = 76,
  sym_identifier = 77,
  sym_enquoted_identifier = 78,
  sym_enquoted_identifier_multi = 79,
  sym__hidden_identifier = 80,
  aux_sym_source_file_repeat1 = 81,
  aux_sym_project_definition_repeat1 = 82,
  aux_sym_table_definition_repeat1 = 83,
  aux_sym_column_settings_repeat1 = 84,
  aux_sym_column_setting_default_repeat1 = 85,
  aux_sym_indexes_definition_repeat1 = 86,
  aux_sym_index_definition_composite_repeat1 = 87,
  aux_sym_relationship_definition_short_repeat1 = 88,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_database_type] = "database_type",
  [anon_sym_Note] = "Note",
  [sym_Project] = "Project",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [sym_column_type] = "column_type",
  [anon_sym_default] = "default",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_primarykey] = "primary key",
  [anon_sym_pk] = "pk",
  [anon_sym_null] = "null",
  [anon_sym_notnull] = "not null",
  [anon_sym_unique] = "unique",
  [anon_sym_increment] = "increment",
  [sym_Table] = "Table",
  [sym_as] = "as",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_name] = "name",
  [anon_sym_type] = "type",
  [sym_indexes] = "indexes",
  [anon_sym_ref_COLON] = "ref:",
  [anon_sym_delete] = "delete",
  [anon_sym_on_delete] = "on_delete",
  [anon_sym_update] = "update",
  [anon_sym_on_update] = "on_update",
  [anon_sym_cascade] = "cascade",
  [anon_sym_restrict] = "restrict",
  [anon_sym_setnull] = "set null",
  [anon_sym_setdefault] = "set default",
  [anon_sym_noaction] = "no action",
  [anon_sym_DASH] = "-",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_GT] = "<>",
  [sym_Ref] = "Ref",
  [aux_sym_identifier_token1] = "identifier_token1",
  [sym__newline] = "_newline",
  [sym__space] = "_space",
  [sym__dot] = "_dot",
  [anon_sym_DQUOTE] = "\"",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_project_definition] = "project_definition",
  [sym_project_name] = "project_name",
  [sym_project_property_definition] = "project_property_definition",
  [sym_project_property_key] = "project_property_key",
  [sym_table_definition] = "table_definition",
  [sym_table_name] = "table_name",
  [sym_column_definition] = "column_definition",
  [sym_column_settings] = "column_settings",
  [sym_column_setting_default] = "column_setting_default",
  [sym_column_constraint] = "column_constraint",
  [sym_table_alias] = "table_alias",
  [sym_indexes_definition] = "indexes_definition",
  [sym_index_definition] = "index_definition",
  [sym_index_definition_single] = "index_definition_single",
  [sym_index_definition_composite] = "index_definition_composite",
  [sym_index_column] = "index_column",
  [sym_index_setting] = "index_setting",
  [sym_index_settings] = "index_settings",
  [sym_relationship_definition_short] = "relationship_definition_short",
  [sym_relationship_definition_inline] = "relationship_definition_inline",
  [sym_relationship_definition_long] = "relationship_definition_long",
  [sym_relationship_definition_side] = "relationship_definition_side",
  [sym_relationship_setting_definition] = "relationship_setting_definition",
  [sym_relationship_event] = "relationship_event",
  [sym_relationship_action] = "relationship_action",
  [sym_relationship_symbol] = "relationship_symbol",
  [sym_column_name] = "column_name",
  [sym_identifier] = "identifier",
  [sym_enquoted_identifier] = "enquoted_identifier",
  [sym_enquoted_identifier_multi] = "enquoted_identifier_multi",
  [sym__hidden_identifier] = "_hidden_identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_project_definition_repeat1] = "project_definition_repeat1",
  [aux_sym_table_definition_repeat1] = "table_definition_repeat1",
  [aux_sym_column_settings_repeat1] = "column_settings_repeat1",
  [aux_sym_column_setting_default_repeat1] = "column_setting_default_repeat1",
  [aux_sym_indexes_definition_repeat1] = "indexes_definition_repeat1",
  [aux_sym_index_definition_composite_repeat1] = "index_definition_composite_repeat1",
  [aux_sym_relationship_definition_short_repeat1] = "relationship_definition_short_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_database_type] = anon_sym_database_type,
  [anon_sym_Note] = anon_sym_Note,
  [sym_Project] = sym_Project,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_column_type] = sym_column_type,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_primarykey] = anon_sym_primarykey,
  [anon_sym_pk] = anon_sym_pk,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_notnull] = anon_sym_notnull,
  [anon_sym_unique] = anon_sym_unique,
  [anon_sym_increment] = anon_sym_increment,
  [sym_Table] = sym_Table,
  [sym_as] = sym_as,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_name] = anon_sym_name,
  [anon_sym_type] = anon_sym_type,
  [sym_indexes] = sym_indexes,
  [anon_sym_ref_COLON] = anon_sym_ref_COLON,
  [anon_sym_delete] = anon_sym_delete,
  [anon_sym_on_delete] = anon_sym_on_delete,
  [anon_sym_update] = anon_sym_update,
  [anon_sym_on_update] = anon_sym_on_update,
  [anon_sym_cascade] = anon_sym_cascade,
  [anon_sym_restrict] = anon_sym_restrict,
  [anon_sym_setnull] = anon_sym_setnull,
  [anon_sym_setdefault] = anon_sym_setdefault,
  [anon_sym_noaction] = anon_sym_noaction,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [sym_Ref] = sym_Ref,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [sym__newline] = sym__newline,
  [sym__space] = sym__space,
  [sym__dot] = sym__dot,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_project_definition] = sym_project_definition,
  [sym_project_name] = sym_project_name,
  [sym_project_property_definition] = sym_project_property_definition,
  [sym_project_property_key] = sym_project_property_key,
  [sym_table_definition] = sym_table_definition,
  [sym_table_name] = sym_table_name,
  [sym_column_definition] = sym_column_definition,
  [sym_column_settings] = sym_column_settings,
  [sym_column_setting_default] = sym_column_setting_default,
  [sym_column_constraint] = sym_column_constraint,
  [sym_table_alias] = sym_table_alias,
  [sym_indexes_definition] = sym_indexes_definition,
  [sym_index_definition] = sym_index_definition,
  [sym_index_definition_single] = sym_index_definition_single,
  [sym_index_definition_composite] = sym_index_definition_composite,
  [sym_index_column] = sym_index_column,
  [sym_index_setting] = sym_index_setting,
  [sym_index_settings] = sym_index_settings,
  [sym_relationship_definition_short] = sym_relationship_definition_short,
  [sym_relationship_definition_inline] = sym_relationship_definition_inline,
  [sym_relationship_definition_long] = sym_relationship_definition_long,
  [sym_relationship_definition_side] = sym_relationship_definition_side,
  [sym_relationship_setting_definition] = sym_relationship_setting_definition,
  [sym_relationship_event] = sym_relationship_event,
  [sym_relationship_action] = sym_relationship_action,
  [sym_relationship_symbol] = sym_relationship_symbol,
  [sym_column_name] = sym_column_name,
  [sym_identifier] = sym_identifier,
  [sym_enquoted_identifier] = sym_enquoted_identifier,
  [sym_enquoted_identifier_multi] = sym_enquoted_identifier_multi,
  [sym__hidden_identifier] = sym__hidden_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_project_definition_repeat1] = aux_sym_project_definition_repeat1,
  [aux_sym_table_definition_repeat1] = aux_sym_table_definition_repeat1,
  [aux_sym_column_settings_repeat1] = aux_sym_column_settings_repeat1,
  [aux_sym_column_setting_default_repeat1] = aux_sym_column_setting_default_repeat1,
  [aux_sym_indexes_definition_repeat1] = aux_sym_indexes_definition_repeat1,
  [aux_sym_index_definition_composite_repeat1] = aux_sym_index_definition_composite_repeat1,
  [aux_sym_relationship_definition_short_repeat1] = aux_sym_relationship_definition_short_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_database_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Note] = {
    .visible = true,
    .named = false,
  },
  [sym_Project] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_column_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_primarykey] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pk] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_notnull] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unique] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_increment] = {
    .visible = true,
    .named = false,
  },
  [sym_Table] = {
    .visible = true,
    .named = true,
  },
  [sym_as] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [sym_indexes] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ref_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on_delete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_update] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on_update] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cascade] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_restrict] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setnull] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setdefault] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_noaction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_Ref] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__space] = {
    .visible = false,
    .named = true,
  },
  [sym__dot] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_project_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_project_name] = {
    .visible = true,
    .named = true,
  },
  [sym_project_property_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_project_property_key] = {
    .visible = true,
    .named = true,
  },
  [sym_table_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_table_name] = {
    .visible = true,
    .named = true,
  },
  [sym_column_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_column_settings] = {
    .visible = true,
    .named = true,
  },
  [sym_column_setting_default] = {
    .visible = true,
    .named = true,
  },
  [sym_column_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_table_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_indexes_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_index_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_index_definition_single] = {
    .visible = true,
    .named = true,
  },
  [sym_index_definition_composite] = {
    .visible = true,
    .named = true,
  },
  [sym_index_column] = {
    .visible = true,
    .named = true,
  },
  [sym_index_setting] = {
    .visible = true,
    .named = true,
  },
  [sym_index_settings] = {
    .visible = true,
    .named = true,
  },
  [sym_relationship_definition_short] = {
    .visible = true,
    .named = true,
  },
  [sym_relationship_definition_inline] = {
    .visible = true,
    .named = true,
  },
  [sym_relationship_definition_long] = {
    .visible = true,
    .named = true,
  },
  [sym_relationship_definition_side] = {
    .visible = true,
    .named = true,
  },
  [sym_relationship_setting_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_relationship_event] = {
    .visible = true,
    .named = true,
  },
  [sym_relationship_action] = {
    .visible = true,
    .named = true,
  },
  [sym_relationship_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_column_name] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_enquoted_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_enquoted_identifier_multi] = {
    .visible = true,
    .named = true,
  },
  [sym__hidden_identifier] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_project_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_table_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_column_settings_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_column_setting_default_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_indexes_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_index_definition_composite_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_relationship_definition_short_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_col_name = 1,
  field_col_settings = 2,
  field_col_type = 3,
  field_column = 4,
  field_column_name = 5,
  field_index_column = 6,
  field_indexes = 7,
  field_project_name = 8,
  field_project_property = 9,
  field_project_property_key = 10,
  field_project_property_value = 11,
  field_relationship_name = 12,
  field_table_alias = 13,
  field_table_alias_name = 14,
  field_table_name = 15,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_col_name] = "col_name",
  [field_col_settings] = "col_settings",
  [field_col_type] = "col_type",
  [field_column] = "column",
  [field_column_name] = "column_name",
  [field_index_column] = "index_column",
  [field_indexes] = "indexes",
  [field_project_name] = "project_name",
  [field_project_property] = "project_property",
  [field_project_property_key] = "project_property_key",
  [field_project_property_value] = "project_property_value",
  [field_relationship_name] = "relationship_name",
  [field_table_alias] = "table_alias",
  [field_table_alias_name] = "table_alias_name",
  [field_table_name] = "table_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 3},
  [8] = {.index = 11, .length = 1},
  [9] = {.index = 12, .length = 2},
  [10] = {.index = 14, .length = 3},
  [11] = {.index = 17, .length = 2},
  [12] = {.index = 19, .length = 3},
  [13] = {.index = 22, .length = 1},
  [14] = {.index = 23, .length = 4},
  [15] = {.index = 27, .length = 1},
  [16] = {.index = 28, .length = 2},
  [17] = {.index = 30, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_table_name, 0},
  [1] =
    {field_table_alias, 0},
  [2] =
    {field_column_name, 0},
  [3] =
    {field_project_name, 2},
  [4] =
    {field_project_name, 2},
    {field_project_property, 6},
  [6] =
    {field_column, 6},
    {field_table_name, 2},
  [8] =
    {field_column, 6},
    {field_indexes, 7},
    {field_table_name, 2},
  [11] =
    {field_relationship_name, 2},
  [12] =
    {field_col_name, 0},
    {field_col_type, 2},
  [14] =
    {field_col_name, 0},
    {field_col_settings, 3},
    {field_col_type, 2},
  [17] =
    {field_project_property_key, 0},
    {field_project_property_value, 3},
  [19] =
    {field_column, 9},
    {field_table_alias_name, 5},
    {field_table_name, 2},
  [22] =
    {field_index_column, 0},
  [23] =
    {field_column, 9},
    {field_indexes, 10},
    {field_table_alias_name, 5},
    {field_table_name, 2},
  [27] =
    {field_index_column, 1},
  [28] =
    {field_index_column, 1},
    {field_index_column, 2, .inherited = true},
  [30] =
    {field_index_column, 0, .inherited = true},
    {field_index_column, 1, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 62,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 62,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 13,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 103,
  [111] = 13,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 9,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 10,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 128,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 10,
  [177] = 9,
  [178] = 116,
  [179] = 116,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(134);
      ADVANCE_MAP(
        '"', 188,
        '\'', 147,
        '(', 157,
        ')', 158,
        ',', 143,
        '-', 173,
        '.', 187,
        '/', 8,
        ':', 138,
        '<', 174,
        '>', 175,
        'N', 93,
        'P', 100,
        'R', 37,
        'T', 12,
        '[', 142,
        ']', 144,
        '`', 148,
        'a', 104,
        'c', 15,
        'd', 16,
        'i', 87,
        'n', 13,
        'o', 88,
        'p', 72,
        'r', 38,
        's', 54,
        't', 129,
        'u', 90,
        '{', 136,
        '}', 137,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(185);
      if (lookahead == '[') ADVANCE(142);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(73);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(186);
      if (lookahead == ':') ADVANCE(138);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(91);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '\'', 147,
        '(', 157,
        ')', 158,
        ',', 143,
        ']', 144,
        '`', 148,
        '{', 136,
        '}', 137,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(135);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(163);
      END_STATE();
    case 10:
      if (lookahead == '_') ADVANCE(33);
      END_STATE();
    case 11:
      if (lookahead == '_') ADVANCE(122);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(6);
      if (lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 25:
      if (lookahead == 'b') ADVANCE(81);
      END_STATE();
    case 26:
      if (lookahead == 'b') ADVANCE(20);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(103);
      if (lookahead == 'd') ADVANCE(40);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(116);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(18);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(108);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(110);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(22);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(59);
      if (lookahead == 'u') ADVANCE(98);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(47);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(51);
      if (lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(23);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 62:
      if (lookahead == 'f') ADVANCE(177);
      END_STATE();
    case 63:
      if (lookahead == 'f') ADVANCE(9);
      if (lookahead == 's') ADVANCE(114);
      END_STATE();
    case 64:
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 65:
      if (lookahead == 'f') ADVANCE(24);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(181);
      if (lookahead == '}') ADVANCE(137);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(67);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 71:
      if (lookahead == 'j') ADVANCE(60);
      END_STATE();
    case 72:
      if (lookahead == 'k') ADVANCE(150);
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 73:
      if (lookahead == 'k') ADVANCE(53);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(170);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 84:
      if (lookahead == 'm') ADVANCE(41);
      END_STATE();
    case 85:
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 86:
      if (lookahead == 'm') ADVANCE(56);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == 'p') ADVANCE(32);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 96:
      if (lookahead == 'p') ADVANCE(42);
      END_STATE();
    case 97:
      if (lookahead == 'p') ADVANCE(50);
      END_STATE();
    case 98:
      if (lookahead == 'p') ADVANCE(36);
      END_STATE();
    case 99:
      if (lookahead == 'q') ADVANCE(124);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 104:
      if (lookahead == 's') ADVANCE(156);
      END_STATE();
    case 105:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 106:
      if (lookahead == 's') ADVANCE(161);
      END_STATE();
    case 107:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(169);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(2);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 123:
      if (lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 124:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 125:
      if (lookahead == 'u') ADVANCE(78);
      END_STATE();
    case 126:
      if (lookahead == 'u') ADVANCE(82);
      END_STATE();
    case 127:
      if (lookahead == 'u') ADVANCE(79);
      END_STATE();
    case 128:
      if (lookahead == 'x') ADVANCE(55);
      END_STATE();
    case 129:
      if (lookahead == 'y') ADVANCE(96);
      END_STATE();
    case 130:
      if (lookahead == 'y') ADVANCE(149);
      END_STATE();
    case 131:
      if (lookahead == 'y') ADVANCE(3);
      END_STATE();
    case 132:
      if (lookahead == 'y') ADVANCE(97);
      END_STATE();
    case 133:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(133);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_database_type);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_Note);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_Project);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_column_type);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_primarykey);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_pk);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_notnull);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_unique);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_increment);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_Table);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_as);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_indexes);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_indexes);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_ref_COLON);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_on_delete);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_update);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_on_update);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_cascade);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_restrict);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_setnull);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_setdefault);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_noaction);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '>') ADVANCE(176);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_Ref);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(162);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'x') ADVANCE(180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == ' ') ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__dot);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 67},
  [12] = {.lex_state = 67},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 67},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 67},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 7},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 7},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 67},
  [79] = {.lex_state = 7},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 7},
  [84] = {.lex_state = 67},
  [85] = {.lex_state = 67},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 7},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 7},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 4},
  [142] = {.lex_state = 4},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 4},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 4},
  [160] = {.lex_state = 133},
  [161] = {.lex_state = 4},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 4},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 4},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 4},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 4},
  [175] = {.lex_state = 7},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 1},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_database_type] = ACTIONS(1),
    [anon_sym_Note] = ACTIONS(1),
    [sym_Project] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_primarykey] = ACTIONS(1),
    [anon_sym_pk] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_notnull] = ACTIONS(1),
    [anon_sym_unique] = ACTIONS(1),
    [anon_sym_increment] = ACTIONS(1),
    [sym_Table] = ACTIONS(1),
    [sym_as] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_name] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [sym_indexes] = ACTIONS(1),
    [anon_sym_ref_COLON] = ACTIONS(1),
    [anon_sym_delete] = ACTIONS(1),
    [anon_sym_on_delete] = ACTIONS(1),
    [anon_sym_update] = ACTIONS(1),
    [anon_sym_on_update] = ACTIONS(1),
    [anon_sym_cascade] = ACTIONS(1),
    [anon_sym_restrict] = ACTIONS(1),
    [anon_sym_setnull] = ACTIONS(1),
    [anon_sym_setdefault] = ACTIONS(1),
    [anon_sym_noaction] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [sym_Ref] = ACTIONS(1),
    [sym__dot] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(168),
    [sym__definition] = STATE(4),
    [sym_project_definition] = STATE(4),
    [sym_table_definition] = STATE(4),
    [sym_relationship_definition_short] = STATE(4),
    [sym_relationship_definition_long] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_Project] = ACTIONS(7),
    [sym_Table] = ACTIONS(9),
    [sym_Ref] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(18), 1,
      sym_Project,
    ACTIONS(21), 1,
      sym_Table,
    ACTIONS(24), 1,
      sym_Ref,
    STATE(2), 6,
      sym__definition,
      sym_project_definition,
      sym_table_definition,
      sym_relationship_definition_short,
      sym_relationship_definition_long,
      aux_sym_source_file_repeat1,
  [24] = 4,
    ACTIONS(27), 1,
      anon_sym_default,
    ACTIONS(31), 1,
      anon_sym_ref_COLON,
    STATE(94), 3,
      sym_column_setting_default,
      sym_column_constraint,
      sym_relationship_definition_inline,
    ACTIONS(29), 6,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_increment,
  [44] = 6,
    ACTIONS(7), 1,
      sym_Project,
    ACTIONS(9), 1,
      sym_Table,
    ACTIONS(11), 1,
      sym_Ref,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      sym_comment,
    STATE(2), 6,
      sym__definition,
      sym_project_definition,
      sym_table_definition,
      sym_relationship_definition_short,
      sym_relationship_definition_long,
      aux_sym_source_file_repeat1,
  [68] = 8,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(42), 1,
      aux_sym_identifier_token1,
    STATE(5), 1,
      aux_sym_indexes_definition_repeat1,
    STATE(103), 1,
      sym_identifier,
    STATE(105), 1,
      sym_index_column,
    STATE(118), 1,
      sym_index_definition,
    STATE(67), 2,
      sym_index_definition_single,
      sym_index_definition_composite,
  [94] = 3,
    ACTIONS(31), 1,
      anon_sym_ref_COLON,
    STATE(69), 2,
      sym_column_constraint,
      sym_relationship_definition_inline,
    ACTIONS(29), 6,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_increment,
  [110] = 8,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      aux_sym_identifier_token1,
    STATE(5), 1,
      aux_sym_indexes_definition_repeat1,
    STATE(103), 1,
      sym_identifier,
    STATE(105), 1,
      sym_index_column,
    STATE(118), 1,
      sym_index_definition,
    STATE(67), 2,
      sym_index_definition_single,
      sym_index_definition_composite,
  [136] = 8,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      aux_sym_identifier_token1,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      aux_sym_indexes_definition_repeat1,
    STATE(103), 1,
      sym_identifier,
    STATE(105), 1,
      sym_index_column,
    STATE(118), 1,
      sym_index_definition,
    STATE(67), 2,
      sym_index_definition_single,
      sym_index_definition_composite,
  [162] = 1,
    ACTIONS(53), 8,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_Table,
      sym_Ref,
  [173] = 1,
    ACTIONS(55), 8,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_Table,
      sym_Ref,
  [184] = 6,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    ACTIONS(59), 1,
      sym_indexes,
    ACTIONS(61), 1,
      aux_sym_identifier_token1,
    STATE(158), 1,
      sym_indexes_definition,
    STATE(170), 1,
      sym_identifier,
    STATE(20), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [204] = 6,
    ACTIONS(59), 1,
      sym_indexes,
    ACTIONS(61), 1,
      aux_sym_identifier_token1,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    STATE(123), 1,
      sym_indexes_definition,
    STATE(170), 1,
      sym_identifier,
    STATE(20), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [224] = 1,
    ACTIONS(65), 6,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_RPAREN,
      aux_sym_identifier_token1,
  [233] = 4,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    STATE(171), 1,
      sym_project_property_key,
    ACTIONS(69), 2,
      anon_sym_database_type,
      anon_sym_Note,
    STATE(14), 2,
      sym_project_property_definition,
      aux_sym_project_definition_repeat1,
  [248] = 2,
    ACTIONS(74), 1,
      anon_sym_LBRACK,
    ACTIONS(72), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [259] = 2,
    ACTIONS(78), 1,
      anon_sym_LBRACK,
    ACTIONS(76), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [270] = 4,
    ACTIONS(80), 1,
      anon_sym_RBRACE,
    STATE(171), 1,
      sym_project_property_key,
    ACTIONS(82), 2,
      anon_sym_database_type,
      anon_sym_Note,
    STATE(14), 2,
      sym_project_property_definition,
      aux_sym_project_definition_repeat1,
  [285] = 3,
    STATE(65), 1,
      sym_relationship_setting_definition,
    STATE(150), 1,
      sym_relationship_event,
    ACTIONS(84), 4,
      anon_sym_delete,
      anon_sym_on_delete,
      anon_sym_update,
      anon_sym_on_update,
  [298] = 3,
    STATE(80), 1,
      sym_relationship_setting_definition,
    STATE(150), 1,
      sym_relationship_event,
    ACTIONS(84), 4,
      anon_sym_delete,
      anon_sym_on_delete,
      anon_sym_update,
      anon_sym_on_update,
  [311] = 5,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    ACTIONS(88), 1,
      sym_indexes,
    ACTIONS(90), 1,
      aux_sym_identifier_token1,
    STATE(170), 1,
      sym_identifier,
    STATE(20), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [328] = 3,
    STATE(104), 1,
      sym_relationship_setting_definition,
    STATE(150), 1,
      sym_relationship_event,
    ACTIONS(84), 4,
      anon_sym_delete,
      anon_sym_on_delete,
      anon_sym_update,
      anon_sym_on_update,
  [341] = 4,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    STATE(171), 1,
      sym_project_property_key,
    ACTIONS(82), 2,
      anon_sym_database_type,
      anon_sym_Note,
    STATE(17), 2,
      sym_project_property_definition,
      aux_sym_project_definition_repeat1,
  [356] = 2,
    STATE(99), 1,
      sym_relationship_action,
    ACTIONS(95), 5,
      anon_sym_cascade,
      anon_sym_restrict,
      anon_sym_setnull,
      anon_sym_setdefault,
      anon_sym_noaction,
  [367] = 1,
    ACTIONS(97), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [375] = 4,
    ACTIONS(101), 1,
      anon_sym_name,
    ACTIONS(103), 1,
      anon_sym_type,
    STATE(149), 1,
      sym_index_settings,
    ACTIONS(99), 2,
      anon_sym_pk,
      anon_sym_unique,
  [389] = 1,
    ACTIONS(105), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [397] = 1,
    ACTIONS(107), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [405] = 1,
    ACTIONS(109), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [413] = 3,
    ACTIONS(113), 1,
      anon_sym_LT,
    STATE(57), 1,
      sym_relationship_symbol,
    ACTIONS(111), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [425] = 3,
    ACTIONS(113), 1,
      anon_sym_LT,
    STATE(52), 1,
      sym_relationship_symbol,
    ACTIONS(111), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [437] = 3,
    ACTIONS(113), 1,
      anon_sym_LT,
    STATE(43), 1,
      sym_relationship_symbol,
    ACTIONS(111), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [449] = 1,
    ACTIONS(115), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [457] = 3,
    ACTIONS(119), 1,
      aux_sym_identifier_token1,
    ACTIONS(117), 2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
    STATE(33), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [469] = 1,
    ACTIONS(122), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [477] = 3,
    ACTIONS(113), 1,
      anon_sym_LT,
    STATE(48), 1,
      sym_relationship_symbol,
    ACTIONS(111), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [489] = 1,
    ACTIONS(124), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [497] = 1,
    ACTIONS(126), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [505] = 1,
    ACTIONS(128), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [513] = 1,
    ACTIONS(130), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [521] = 1,
    ACTIONS(132), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [529] = 1,
    ACTIONS(134), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [537] = 3,
    ACTIONS(113), 1,
      anon_sym_LT,
    STATE(54), 1,
      sym_relationship_symbol,
    ACTIONS(111), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [549] = 4,
    ACTIONS(136), 1,
      aux_sym_identifier_token1,
    STATE(15), 1,
      sym_relationship_definition_side,
    STATE(169), 1,
      sym__hidden_identifier,
    STATE(178), 1,
      sym_table_name,
  [562] = 4,
    ACTIONS(136), 1,
      aux_sym_identifier_token1,
    STATE(115), 1,
      sym_relationship_definition_side,
    STATE(116), 1,
      sym_table_name,
    STATE(169), 1,
      sym__hidden_identifier,
  [575] = 4,
    ACTIONS(136), 1,
      aux_sym_identifier_token1,
    STATE(116), 1,
      sym_table_name,
    STATE(163), 1,
      sym_relationship_definition_side,
    STATE(169), 1,
      sym__hidden_identifier,
  [588] = 3,
    ACTIONS(138), 1,
      aux_sym_identifier_token1,
    STATE(170), 1,
      sym_identifier,
    STATE(11), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [599] = 3,
    ACTIONS(138), 1,
      aux_sym_identifier_token1,
    STATE(170), 1,
      sym_identifier,
    STATE(12), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [610] = 4,
    ACTIONS(136), 1,
      aux_sym_identifier_token1,
    STATE(89), 1,
      sym_relationship_definition_side,
    STATE(169), 1,
      sym__hidden_identifier,
    STATE(178), 1,
      sym_table_name,
  [623] = 4,
    ACTIONS(136), 1,
      aux_sym_identifier_token1,
    STATE(116), 1,
      sym_table_name,
    STATE(169), 1,
      sym__hidden_identifier,
    STATE(174), 1,
      sym_relationship_definition_side,
  [636] = 3,
    ACTIONS(140), 1,
      anon_sym_BQUOTE,
    ACTIONS(142), 1,
      aux_sym_identifier_token1,
    STATE(33), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [647] = 3,
    ACTIONS(142), 1,
      aux_sym_identifier_token1,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    STATE(59), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [658] = 4,
    ACTIONS(136), 1,
      aux_sym_identifier_token1,
    STATE(16), 1,
      sym_relationship_definition_side,
    STATE(169), 1,
      sym__hidden_identifier,
    STATE(178), 1,
      sym_table_name,
  [671] = 3,
    ACTIONS(142), 1,
      aux_sym_identifier_token1,
    ACTIONS(144), 1,
      anon_sym_BQUOTE,
    STATE(50), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [682] = 4,
    ACTIONS(136), 1,
      aux_sym_identifier_token1,
    STATE(154), 1,
      sym_relationship_definition_side,
    STATE(169), 1,
      sym__hidden_identifier,
    STATE(179), 1,
      sym_table_name,
  [695] = 3,
    ACTIONS(142), 1,
      aux_sym_identifier_token1,
    ACTIONS(146), 1,
      anon_sym_SQUOTE,
    STATE(56), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [706] = 3,
    ACTIONS(142), 1,
      aux_sym_identifier_token1,
    ACTIONS(148), 1,
      anon_sym_SQUOTE,
    STATE(33), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [717] = 4,
    ACTIONS(136), 1,
      aux_sym_identifier_token1,
    STATE(132), 1,
      sym_relationship_definition_side,
    STATE(169), 1,
      sym__hidden_identifier,
    STATE(179), 1,
      sym_table_name,
  [730] = 4,
    ACTIONS(136), 1,
      aux_sym_identifier_token1,
    STATE(116), 1,
      sym_table_name,
    STATE(133), 1,
      sym_relationship_definition_side,
    STATE(169), 1,
      sym__hidden_identifier,
  [743] = 3,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    ACTIONS(142), 1,
      aux_sym_identifier_token1,
    STATE(33), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [754] = 3,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    ACTIONS(152), 1,
      anon_sym_RBRACK,
    STATE(68), 1,
      aux_sym_relationship_definition_short_repeat1,
  [764] = 1,
    ACTIONS(154), 3,
      anon_sym_RBRACE,
      anon_sym_database_type,
      anon_sym_Note,
  [770] = 3,
    ACTIONS(156), 1,
      aux_sym_identifier_token1,
    STATE(176), 1,
      sym_column_name,
    STATE(177), 1,
      sym__hidden_identifier,
  [780] = 3,
    ACTIONS(158), 1,
      anon_sym_COMMA,
    ACTIONS(160), 1,
      anon_sym_RBRACK,
    STATE(82), 1,
      aux_sym_column_settings_repeat1,
  [790] = 2,
    ACTIONS(162), 1,
      anon_sym_RBRACE,
    ACTIONS(164), 2,
      sym_indexes,
      aux_sym_identifier_token1,
  [798] = 3,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    ACTIONS(166), 1,
      anon_sym_RBRACK,
    STATE(75), 1,
      aux_sym_relationship_definition_short_repeat1,
  [808] = 3,
    ACTIONS(168), 1,
      aux_sym_identifier_token1,
    STATE(9), 1,
      sym__hidden_identifier,
    STATE(10), 1,
      sym_column_name,
  [818] = 3,
    ACTIONS(170), 1,
      anon_sym_LBRACK,
    ACTIONS(172), 1,
      sym__newline,
    STATE(137), 1,
      sym_index_setting,
  [828] = 3,
    ACTIONS(174), 1,
      anon_sym_COMMA,
    ACTIONS(177), 1,
      anon_sym_RBRACK,
    STATE(68), 1,
      aux_sym_relationship_definition_short_repeat1,
  [838] = 3,
    ACTIONS(158), 1,
      anon_sym_COMMA,
    ACTIONS(179), 1,
      anon_sym_RBRACK,
    STATE(63), 1,
      aux_sym_column_settings_repeat1,
  [848] = 3,
    ACTIONS(138), 1,
      aux_sym_identifier_token1,
    STATE(136), 1,
      sym_identifier,
    STATE(139), 1,
      sym_project_name,
  [858] = 3,
    ACTIONS(181), 1,
      aux_sym_identifier_token1,
    STATE(128), 1,
      sym__hidden_identifier,
    STATE(129), 1,
      sym_table_name,
  [868] = 3,
    ACTIONS(142), 1,
      aux_sym_identifier_token1,
    STATE(86), 1,
      sym_index_column,
    STATE(110), 1,
      sym_identifier,
  [878] = 3,
    ACTIONS(183), 1,
      aux_sym_identifier_token1,
    STATE(140), 1,
      sym_table_alias,
    STATE(141), 1,
      sym__hidden_identifier,
  [888] = 3,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(188), 1,
      anon_sym_RPAREN,
    STATE(74), 1,
      aux_sym_index_definition_composite_repeat1,
  [898] = 3,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    ACTIONS(190), 1,
      anon_sym_RBRACK,
    STATE(68), 1,
      aux_sym_relationship_definition_short_repeat1,
  [908] = 3,
    ACTIONS(192), 1,
      aux_sym_identifier_token1,
    STATE(119), 1,
      sym__hidden_identifier,
    STATE(135), 1,
      sym_column_name,
  [918] = 3,
    ACTIONS(194), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      sym__newline,
    STATE(85), 1,
      sym_column_settings,
  [928] = 2,
    ACTIONS(198), 1,
      anon_sym_RBRACE,
    ACTIONS(200), 2,
      sym_indexes,
      aux_sym_identifier_token1,
  [936] = 3,
    ACTIONS(138), 1,
      aux_sym_identifier_token1,
    ACTIONS(202), 1,
      anon_sym_LBRACE,
    STATE(102), 1,
      sym_identifier,
  [946] = 3,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    ACTIONS(204), 1,
      anon_sym_RBRACK,
    STATE(60), 1,
      aux_sym_relationship_definition_short_repeat1,
  [956] = 3,
    ACTIONS(206), 1,
      anon_sym_COMMA,
    ACTIONS(208), 1,
      anon_sym_RPAREN,
    STATE(74), 1,
      aux_sym_index_definition_composite_repeat1,
  [966] = 3,
    ACTIONS(210), 1,
      anon_sym_COMMA,
    ACTIONS(213), 1,
      anon_sym_RBRACK,
    STATE(82), 1,
      aux_sym_column_settings_repeat1,
  [976] = 3,
    ACTIONS(142), 1,
      aux_sym_identifier_token1,
    STATE(92), 1,
      sym_index_column,
    STATE(110), 1,
      sym_identifier,
  [986] = 2,
    ACTIONS(215), 1,
      anon_sym_RBRACE,
    ACTIONS(217), 2,
      sym_indexes,
      aux_sym_identifier_token1,
  [994] = 2,
    ACTIONS(219), 1,
      anon_sym_RBRACE,
    ACTIONS(221), 2,
      sym_indexes,
      aux_sym_identifier_token1,
  [1002] = 3,
    ACTIONS(206), 1,
      anon_sym_COMMA,
    ACTIONS(223), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      aux_sym_index_definition_composite_repeat1,
  [1012] = 1,
    ACTIONS(37), 3,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_identifier_token1,
  [1018] = 2,
    ACTIONS(65), 1,
      sym__space,
    ACTIONS(225), 1,
      anon_sym_COLON,
  [1025] = 1,
    ACTIONS(227), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1030] = 2,
    ACTIONS(229), 1,
      anon_sym_SQUOTE,
    ACTIONS(231), 1,
      anon_sym_BQUOTE,
  [1037] = 2,
    ACTIONS(233), 1,
      anon_sym_LBRACK,
    ACTIONS(235), 1,
      sym__newline,
  [1044] = 1,
    ACTIONS(237), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1049] = 2,
    ACTIONS(239), 1,
      anon_sym_SQUOTE,
    STATE(144), 1,
      sym_enquoted_identifier_multi,
  [1056] = 1,
    ACTIONS(213), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1061] = 2,
    ACTIONS(241), 1,
      anon_sym_LBRACK,
    ACTIONS(243), 1,
      sym__newline,
  [1068] = 2,
    ACTIONS(142), 1,
      aux_sym_identifier_token1,
    STATE(162), 1,
      sym_identifier,
  [1075] = 1,
    ACTIONS(245), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1080] = 1,
    ACTIONS(247), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1085] = 1,
    ACTIONS(249), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1090] = 2,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    STATE(165), 1,
      sym_enquoted_identifier,
  [1097] = 1,
    ACTIONS(253), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1102] = 2,
    ACTIONS(255), 1,
      anon_sym_COLON,
    ACTIONS(257), 1,
      sym__space,
  [1109] = 2,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      sym__newline,
  [1116] = 1,
    ACTIONS(177), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1121] = 2,
    ACTIONS(263), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      sym__newline,
  [1128] = 1,
    ACTIONS(267), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1133] = 2,
    ACTIONS(142), 1,
      aux_sym_identifier_token1,
    STATE(166), 1,
      sym_identifier,
  [1140] = 2,
    ACTIONS(269), 1,
      anon_sym_COLON,
    ACTIONS(271), 1,
      sym__space,
  [1147] = 2,
    ACTIONS(273), 1,
      anon_sym_LBRACE,
    ACTIONS(275), 1,
      sym_as,
  [1154] = 1,
    ACTIONS(261), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1159] = 2,
    ACTIONS(65), 1,
      sym__newline,
    ACTIONS(225), 1,
      anon_sym_LBRACK,
  [1166] = 1,
    ACTIONS(277), 1,
      sym__newline,
  [1170] = 1,
    ACTIONS(279), 1,
      anon_sym_RBRACE,
  [1174] = 1,
    ACTIONS(281), 1,
      sym__newline,
  [1178] = 1,
    ACTIONS(283), 1,
      sym__space,
  [1182] = 1,
    ACTIONS(285), 1,
      sym__dot,
  [1186] = 1,
    ACTIONS(287), 1,
      anon_sym_RBRACE,
  [1190] = 1,
    ACTIONS(289), 1,
      sym__newline,
  [1194] = 1,
    ACTIONS(53), 1,
      sym__space,
  [1198] = 1,
    ACTIONS(291), 1,
      sym__space,
  [1202] = 1,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
  [1206] = 1,
    ACTIONS(295), 1,
      anon_sym_LBRACE,
  [1210] = 1,
    ACTIONS(297), 1,
      anon_sym_RBRACE,
  [1214] = 1,
    ACTIONS(299), 1,
      sym__newline,
  [1218] = 1,
    ACTIONS(301), 1,
      sym__newline,
  [1222] = 1,
    ACTIONS(303), 1,
      sym__newline,
  [1226] = 1,
    ACTIONS(305), 1,
      sym__space,
  [1230] = 1,
    ACTIONS(307), 1,
      sym__space,
  [1234] = 1,
    ACTIONS(309), 1,
      sym__space,
  [1238] = 1,
    ACTIONS(311), 1,
      anon_sym_COLON,
  [1242] = 1,
    ACTIONS(313), 1,
      sym__newline,
  [1246] = 1,
    ACTIONS(315), 1,
      sym__newline,
  [1250] = 1,
    ACTIONS(317), 1,
      sym__space,
  [1254] = 1,
    ACTIONS(319), 1,
      sym__space,
  [1258] = 1,
    ACTIONS(55), 1,
      sym__space,
  [1262] = 1,
    ACTIONS(321), 1,
      sym__space,
  [1266] = 1,
    ACTIONS(323), 1,
      sym__newline,
  [1270] = 1,
    ACTIONS(325), 1,
      anon_sym_RBRACE,
  [1274] = 1,
    ACTIONS(327), 1,
      sym__space,
  [1278] = 1,
    ACTIONS(329), 1,
      sym__space,
  [1282] = 1,
    ACTIONS(331), 1,
      sym__space,
  [1286] = 1,
    ACTIONS(333), 1,
      sym__space,
  [1290] = 1,
    ACTIONS(335), 1,
      sym__newline,
  [1294] = 1,
    ACTIONS(337), 1,
      sym__newline,
  [1298] = 1,
    ACTIONS(339), 1,
      anon_sym_RBRACE,
  [1302] = 1,
    ACTIONS(341), 1,
      anon_sym_RBRACK,
  [1306] = 1,
    ACTIONS(343), 1,
      anon_sym_COLON,
  [1310] = 1,
    ACTIONS(345), 1,
      anon_sym_COLON,
  [1314] = 1,
    ACTIONS(347), 1,
      anon_sym_RBRACK,
  [1318] = 1,
    ACTIONS(349), 1,
      anon_sym_COLON,
  [1322] = 1,
    ACTIONS(351), 1,
      sym__space,
  [1326] = 1,
    ACTIONS(353), 1,
      anon_sym_COLON,
  [1330] = 1,
    ACTIONS(355), 1,
      anon_sym_LBRACE,
  [1334] = 1,
    ACTIONS(357), 1,
      sym__newline,
  [1338] = 1,
    ACTIONS(359), 1,
      sym__space,
  [1342] = 1,
    ACTIONS(361), 1,
      sym__newline,
  [1346] = 1,
    ACTIONS(363), 1,
      sym__newline,
  [1350] = 1,
    ACTIONS(365), 1,
      anon_sym_RBRACE,
  [1354] = 1,
    ACTIONS(367), 1,
      sym__space,
  [1358] = 1,
    ACTIONS(369), 1,
      sym_column_type,
  [1362] = 1,
    ACTIONS(371), 1,
      sym__space,
  [1366] = 1,
    ACTIONS(373), 1,
      anon_sym_RBRACK,
  [1370] = 1,
    ACTIONS(375), 1,
      sym__space,
  [1374] = 1,
    ACTIONS(377), 1,
      anon_sym_LBRACE,
  [1378] = 1,
    ACTIONS(379), 1,
      anon_sym_RBRACK,
  [1382] = 1,
    ACTIONS(381), 1,
      anon_sym_SQUOTE,
  [1386] = 1,
    ACTIONS(383), 1,
      anon_sym_RBRACK,
  [1390] = 1,
    ACTIONS(385), 1,
      ts_builtin_sym_end,
  [1394] = 1,
    ACTIONS(307), 1,
      sym__dot,
  [1398] = 1,
    ACTIONS(387), 1,
      sym__space,
  [1402] = 1,
    ACTIONS(389), 1,
      anon_sym_COLON,
  [1406] = 1,
    ACTIONS(391), 1,
      sym__space,
  [1410] = 1,
    ACTIONS(393), 1,
      anon_sym_COLON,
  [1414] = 1,
    ACTIONS(395), 1,
      sym__space,
  [1418] = 1,
    ACTIONS(397), 1,
      aux_sym_identifier_token1,
  [1422] = 1,
    ACTIONS(55), 1,
      sym__newline,
  [1426] = 1,
    ACTIONS(53), 1,
      sym__newline,
  [1430] = 1,
    ACTIONS(399), 1,
      sym__dot,
  [1434] = 1,
    ACTIONS(401), 1,
      sym__dot,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 24,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 68,
  [SMALL_STATE(6)] = 94,
  [SMALL_STATE(7)] = 110,
  [SMALL_STATE(8)] = 136,
  [SMALL_STATE(9)] = 162,
  [SMALL_STATE(10)] = 173,
  [SMALL_STATE(11)] = 184,
  [SMALL_STATE(12)] = 204,
  [SMALL_STATE(13)] = 224,
  [SMALL_STATE(14)] = 233,
  [SMALL_STATE(15)] = 248,
  [SMALL_STATE(16)] = 259,
  [SMALL_STATE(17)] = 270,
  [SMALL_STATE(18)] = 285,
  [SMALL_STATE(19)] = 298,
  [SMALL_STATE(20)] = 311,
  [SMALL_STATE(21)] = 328,
  [SMALL_STATE(22)] = 341,
  [SMALL_STATE(23)] = 356,
  [SMALL_STATE(24)] = 367,
  [SMALL_STATE(25)] = 375,
  [SMALL_STATE(26)] = 389,
  [SMALL_STATE(27)] = 397,
  [SMALL_STATE(28)] = 405,
  [SMALL_STATE(29)] = 413,
  [SMALL_STATE(30)] = 425,
  [SMALL_STATE(31)] = 437,
  [SMALL_STATE(32)] = 449,
  [SMALL_STATE(33)] = 457,
  [SMALL_STATE(34)] = 469,
  [SMALL_STATE(35)] = 477,
  [SMALL_STATE(36)] = 489,
  [SMALL_STATE(37)] = 497,
  [SMALL_STATE(38)] = 505,
  [SMALL_STATE(39)] = 513,
  [SMALL_STATE(40)] = 521,
  [SMALL_STATE(41)] = 529,
  [SMALL_STATE(42)] = 537,
  [SMALL_STATE(43)] = 549,
  [SMALL_STATE(44)] = 562,
  [SMALL_STATE(45)] = 575,
  [SMALL_STATE(46)] = 588,
  [SMALL_STATE(47)] = 599,
  [SMALL_STATE(48)] = 610,
  [SMALL_STATE(49)] = 623,
  [SMALL_STATE(50)] = 636,
  [SMALL_STATE(51)] = 647,
  [SMALL_STATE(52)] = 658,
  [SMALL_STATE(53)] = 671,
  [SMALL_STATE(54)] = 682,
  [SMALL_STATE(55)] = 695,
  [SMALL_STATE(56)] = 706,
  [SMALL_STATE(57)] = 717,
  [SMALL_STATE(58)] = 730,
  [SMALL_STATE(59)] = 743,
  [SMALL_STATE(60)] = 754,
  [SMALL_STATE(61)] = 764,
  [SMALL_STATE(62)] = 770,
  [SMALL_STATE(63)] = 780,
  [SMALL_STATE(64)] = 790,
  [SMALL_STATE(65)] = 798,
  [SMALL_STATE(66)] = 808,
  [SMALL_STATE(67)] = 818,
  [SMALL_STATE(68)] = 828,
  [SMALL_STATE(69)] = 838,
  [SMALL_STATE(70)] = 848,
  [SMALL_STATE(71)] = 858,
  [SMALL_STATE(72)] = 868,
  [SMALL_STATE(73)] = 878,
  [SMALL_STATE(74)] = 888,
  [SMALL_STATE(75)] = 898,
  [SMALL_STATE(76)] = 908,
  [SMALL_STATE(77)] = 918,
  [SMALL_STATE(78)] = 928,
  [SMALL_STATE(79)] = 936,
  [SMALL_STATE(80)] = 946,
  [SMALL_STATE(81)] = 956,
  [SMALL_STATE(82)] = 966,
  [SMALL_STATE(83)] = 976,
  [SMALL_STATE(84)] = 986,
  [SMALL_STATE(85)] = 994,
  [SMALL_STATE(86)] = 1002,
  [SMALL_STATE(87)] = 1012,
  [SMALL_STATE(88)] = 1018,
  [SMALL_STATE(89)] = 1025,
  [SMALL_STATE(90)] = 1030,
  [SMALL_STATE(91)] = 1037,
  [SMALL_STATE(92)] = 1044,
  [SMALL_STATE(93)] = 1049,
  [SMALL_STATE(94)] = 1056,
  [SMALL_STATE(95)] = 1061,
  [SMALL_STATE(96)] = 1068,
  [SMALL_STATE(97)] = 1075,
  [SMALL_STATE(98)] = 1080,
  [SMALL_STATE(99)] = 1085,
  [SMALL_STATE(100)] = 1090,
  [SMALL_STATE(101)] = 1097,
  [SMALL_STATE(102)] = 1102,
  [SMALL_STATE(103)] = 1109,
  [SMALL_STATE(104)] = 1116,
  [SMALL_STATE(105)] = 1121,
  [SMALL_STATE(106)] = 1128,
  [SMALL_STATE(107)] = 1133,
  [SMALL_STATE(108)] = 1140,
  [SMALL_STATE(109)] = 1147,
  [SMALL_STATE(110)] = 1154,
  [SMALL_STATE(111)] = 1159,
  [SMALL_STATE(112)] = 1166,
  [SMALL_STATE(113)] = 1170,
  [SMALL_STATE(114)] = 1174,
  [SMALL_STATE(115)] = 1178,
  [SMALL_STATE(116)] = 1182,
  [SMALL_STATE(117)] = 1186,
  [SMALL_STATE(118)] = 1190,
  [SMALL_STATE(119)] = 1194,
  [SMALL_STATE(120)] = 1198,
  [SMALL_STATE(121)] = 1202,
  [SMALL_STATE(122)] = 1206,
  [SMALL_STATE(123)] = 1210,
  [SMALL_STATE(124)] = 1214,
  [SMALL_STATE(125)] = 1218,
  [SMALL_STATE(126)] = 1222,
  [SMALL_STATE(127)] = 1226,
  [SMALL_STATE(128)] = 1230,
  [SMALL_STATE(129)] = 1234,
  [SMALL_STATE(130)] = 1238,
  [SMALL_STATE(131)] = 1242,
  [SMALL_STATE(132)] = 1246,
  [SMALL_STATE(133)] = 1250,
  [SMALL_STATE(134)] = 1254,
  [SMALL_STATE(135)] = 1258,
  [SMALL_STATE(136)] = 1262,
  [SMALL_STATE(137)] = 1266,
  [SMALL_STATE(138)] = 1270,
  [SMALL_STATE(139)] = 1274,
  [SMALL_STATE(140)] = 1278,
  [SMALL_STATE(141)] = 1282,
  [SMALL_STATE(142)] = 1286,
  [SMALL_STATE(143)] = 1290,
  [SMALL_STATE(144)] = 1294,
  [SMALL_STATE(145)] = 1298,
  [SMALL_STATE(146)] = 1302,
  [SMALL_STATE(147)] = 1306,
  [SMALL_STATE(148)] = 1310,
  [SMALL_STATE(149)] = 1314,
  [SMALL_STATE(150)] = 1318,
  [SMALL_STATE(151)] = 1322,
  [SMALL_STATE(152)] = 1326,
  [SMALL_STATE(153)] = 1330,
  [SMALL_STATE(154)] = 1334,
  [SMALL_STATE(155)] = 1338,
  [SMALL_STATE(156)] = 1342,
  [SMALL_STATE(157)] = 1346,
  [SMALL_STATE(158)] = 1350,
  [SMALL_STATE(159)] = 1354,
  [SMALL_STATE(160)] = 1358,
  [SMALL_STATE(161)] = 1362,
  [SMALL_STATE(162)] = 1366,
  [SMALL_STATE(163)] = 1370,
  [SMALL_STATE(164)] = 1374,
  [SMALL_STATE(165)] = 1378,
  [SMALL_STATE(166)] = 1382,
  [SMALL_STATE(167)] = 1386,
  [SMALL_STATE(168)] = 1390,
  [SMALL_STATE(169)] = 1394,
  [SMALL_STATE(170)] = 1398,
  [SMALL_STATE(171)] = 1402,
  [SMALL_STATE(172)] = 1406,
  [SMALL_STATE(173)] = 1410,
  [SMALL_STATE(174)] = 1414,
  [SMALL_STATE(175)] = 1418,
  [SMALL_STATE(176)] = 1422,
  [SMALL_STATE(177)] = 1426,
  [SMALL_STATE(178)] = 1430,
  [SMALL_STATE(179)] = 1434,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(172),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_indexes_definition_repeat1, 2, 0, 0),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_indexes_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_indexes_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_name, 1, 0, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_side, 3, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_project_definition_repeat1, 2, 0, 0),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_project_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(173),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 7, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 9, 0, 8),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_definition_repeat1, 2, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_definition_repeat1, 2, 0, 0),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_long, 10, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_definition, 8, 0, 5),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 11, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 11, 0, 12),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 13, 0, 8),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_setting_default_repeat1, 2, 0, 0),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_setting_default_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 10, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_definition, 7, 0, 4),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 12, 0, 14),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_long, 12, 0, 8),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 8, 0, 6),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 12, 0, 8),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 9, 0, 7),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_property_definition, 5, 0, 11),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 3, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_settings, 3, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_definition, 1, 0, 0),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relationship_definition_short_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relationship_definition_short_repeat1, 2, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_definition_composite_repeat1, 2, 0, 17), SHIFT_REPEAT(83),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_definition_composite_repeat1, 2, 0, 17),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 4, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_settings, 4, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_settings_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_settings_repeat1, 2, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 4, 0, 9),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definition, 4, 0, 9),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 4, 0, 10),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definition, 4, 0, 10),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_inline, 4, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_definition_composite, 3, 0, 15),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_definition_composite, 3, 0, 15),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_definition_composite_repeat1, 2, 0, 15),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_definition_composite, 4, 0, 16),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_definition_composite, 4, 0, 16),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_setting_default, 4, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 1, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_setting_definition, 4, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_action, 1, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_column, 1, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column, 1, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_definition_single, 1, 0, 13),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_definition_single, 1, 0, 13),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_setting_default, 5, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enquoted_identifier_multi, 3, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indexes_definition, 5, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 1, 0, 1),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enquoted_identifier_multi, 2, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_name, 1, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_definition, 2, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indexes_definition, 6, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_alias, 1, 0, 2),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_settings, 1, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_event, 1, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_setting, 3, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_settings, 3, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_settings, 4, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enquoted_identifier, 3, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_property_key, 1, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_symbol, 1, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_dbml(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
