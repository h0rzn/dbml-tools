#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 178
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 88
#define ALIAS_COUNT 0
#define TOKEN_COUNT 48
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 13
#define PRODUCTION_ID_COUNT 12

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
  sym_index_setting = 65,
  sym_index_settings = 66,
  sym_relationship_definition_short = 67,
  sym_relationship_definition_inline = 68,
  sym_relationship_definition_long = 69,
  sym_relationship_definition_side = 70,
  sym_relationship_setting_definition = 71,
  sym_relationship_event = 72,
  sym_relationship_action = 73,
  sym_relationship_symbol = 74,
  sym_column_name = 75,
  sym_identifier = 76,
  sym_enquoted_identifier = 77,
  sym_enquoted_identifier_multi = 78,
  sym__hidden_identifier = 79,
  aux_sym_source_file_repeat1 = 80,
  aux_sym_project_definition_repeat1 = 81,
  aux_sym_table_definition_repeat1 = 82,
  aux_sym_column_settings_repeat1 = 83,
  aux_sym_column_setting_default_repeat1 = 84,
  aux_sym_indexes_definition_repeat1 = 85,
  aux_sym_index_definition_composite_repeat1 = 86,
  aux_sym_relationship_definition_short_repeat1 = 87,
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
  field_project_name = 6,
  field_project_property = 7,
  field_project_property_key = 8,
  field_project_property_value = 9,
  field_relationship_name = 10,
  field_table_alias = 11,
  field_table_alias_name = 12,
  field_table_name = 13,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_col_name] = "col_name",
  [field_col_settings] = "col_settings",
  [field_col_type] = "col_type",
  [field_column] = "column",
  [field_column_name] = "column_name",
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
  [7] = {.index = 8, .length = 1},
  [8] = {.index = 9, .length = 2},
  [9] = {.index = 11, .length = 3},
  [10] = {.index = 14, .length = 2},
  [11] = {.index = 16, .length = 3},
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
    {field_relationship_name, 2},
  [9] =
    {field_col_name, 0},
    {field_col_type, 2},
  [11] =
    {field_col_name, 0},
    {field_col_settings, 3},
    {field_col_type, 2},
  [14] =
    {field_project_property_key, 0},
    {field_project_property_value, 3},
  [16] =
    {field_column, 9},
    {field_table_alias_name, 5},
    {field_table_name, 2},
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
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 77,
  [82] = 77,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 17,
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
  [108] = 17,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
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
  [135] = 135,
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
  [149] = 7,
  [150] = 9,
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
  [168] = 117,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 9,
  [175] = 7,
  [176] = 111,
  [177] = 111,
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
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 67},
  [12] = {.lex_state = 67},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 67},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
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
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 67},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 67},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 7},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 7},
  [81] = {.lex_state = 7},
  [82] = {.lex_state = 7},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 67},
  [85] = {.lex_state = 67},
  [86] = {.lex_state = 7},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 7},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 133},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 7},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 4},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 4},
  [154] = {.lex_state = 4},
  [155] = {.lex_state = 4},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 4},
  [158] = {.lex_state = 4},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 4},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 1},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
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
    [sym_source_file] = STATE(167),
    [sym__definition] = STATE(2),
    [sym_project_definition] = STATE(2),
    [sym_table_definition] = STATE(2),
    [sym_relationship_definition_short] = STATE(2),
    [sym_relationship_definition_long] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_Project] = ACTIONS(7),
    [sym_Table] = ACTIONS(9),
    [sym_Ref] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(7), 1,
      sym_Project,
    ACTIONS(9), 1,
      sym_Table,
    ACTIONS(11), 1,
      sym_Ref,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      sym_comment,
    STATE(4), 6,
      sym__definition,
      sym_project_definition,
      sym_table_definition,
      sym_relationship_definition_short,
      sym_relationship_definition_long,
      aux_sym_source_file_repeat1,
  [24] = 4,
    ACTIONS(17), 1,
      anon_sym_default,
    ACTIONS(21), 1,
      anon_sym_ref_COLON,
    STATE(102), 3,
      sym_column_setting_default,
      sym_column_constraint,
      sym_relationship_definition_inline,
    ACTIONS(19), 6,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_increment,
  [44] = 6,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(28), 1,
      sym_Project,
    ACTIONS(31), 1,
      sym_Table,
    ACTIONS(34), 1,
      sym_Ref,
    STATE(4), 6,
      sym__definition,
      sym_project_definition,
      sym_table_definition,
      sym_relationship_definition_short,
      sym_relationship_definition_long,
      aux_sym_source_file_repeat1,
  [68] = 3,
    ACTIONS(21), 1,
      anon_sym_ref_COLON,
    STATE(75), 2,
      sym_column_constraint,
      sym_relationship_definition_inline,
    ACTIONS(19), 6,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_increment,
  [84] = 7,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(42), 1,
      aux_sym_identifier_token1,
    STATE(6), 1,
      aux_sym_indexes_definition_repeat1,
    STATE(87), 1,
      sym_identifier,
    STATE(122), 1,
      sym_index_definition,
    STATE(68), 2,
      sym_index_definition_single,
      sym_index_definition_composite,
  [107] = 1,
    ACTIONS(45), 8,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_Table,
      sym_Ref,
  [118] = 7,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      aux_sym_identifier_token1,
    STATE(6), 1,
      aux_sym_indexes_definition_repeat1,
    STATE(87), 1,
      sym_identifier,
    STATE(122), 1,
      sym_index_definition,
    STATE(68), 2,
      sym_index_definition_single,
      sym_index_definition_composite,
  [141] = 1,
    ACTIONS(53), 8,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_Table,
      sym_Ref,
  [152] = 7,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      aux_sym_identifier_token1,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      aux_sym_indexes_definition_repeat1,
    STATE(87), 1,
      sym_identifier,
    STATE(122), 1,
      sym_index_definition,
    STATE(68), 2,
      sym_index_definition_single,
      sym_index_definition_composite,
  [175] = 6,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    ACTIONS(59), 1,
      sym_indexes,
    ACTIONS(61), 1,
      aux_sym_identifier_token1,
    STATE(123), 1,
      sym_indexes_definition,
    STATE(133), 1,
      sym_identifier,
    STATE(14), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [195] = 6,
    ACTIONS(59), 1,
      sym_indexes,
    ACTIONS(61), 1,
      aux_sym_identifier_token1,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    STATE(112), 1,
      sym_indexes_definition,
    STATE(133), 1,
      sym_identifier,
    STATE(14), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [215] = 3,
    STATE(78), 1,
      sym_relationship_setting_definition,
    STATE(170), 1,
      sym_relationship_event,
    ACTIONS(65), 4,
      anon_sym_delete,
      anon_sym_on_delete,
      anon_sym_update,
      anon_sym_on_update,
  [228] = 5,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    ACTIONS(69), 1,
      sym_indexes,
    ACTIONS(71), 1,
      aux_sym_identifier_token1,
    STATE(133), 1,
      sym_identifier,
    STATE(14), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [245] = 2,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(74), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [256] = 4,
    ACTIONS(78), 1,
      anon_sym_RBRACE,
    STATE(134), 1,
      sym_project_property_key,
    ACTIONS(80), 2,
      anon_sym_database_type,
      anon_sym_Note,
    STATE(19), 2,
      sym_project_property_definition,
      aux_sym_project_definition_repeat1,
  [271] = 1,
    ACTIONS(82), 6,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_RPAREN,
      aux_sym_identifier_token1,
  [280] = 2,
    ACTIONS(86), 1,
      anon_sym_LBRACK,
    ACTIONS(84), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [291] = 4,
    ACTIONS(88), 1,
      anon_sym_RBRACE,
    STATE(134), 1,
      sym_project_property_key,
    ACTIONS(80), 2,
      anon_sym_database_type,
      anon_sym_Note,
    STATE(22), 2,
      sym_project_property_definition,
      aux_sym_project_definition_repeat1,
  [306] = 2,
    STATE(104), 1,
      sym_relationship_action,
    ACTIONS(90), 5,
      anon_sym_cascade,
      anon_sym_restrict,
      anon_sym_setnull,
      anon_sym_setdefault,
      anon_sym_noaction,
  [317] = 3,
    STATE(64), 1,
      sym_relationship_setting_definition,
    STATE(170), 1,
      sym_relationship_event,
    ACTIONS(65), 4,
      anon_sym_delete,
      anon_sym_on_delete,
      anon_sym_update,
      anon_sym_on_update,
  [330] = 4,
    ACTIONS(92), 1,
      anon_sym_RBRACE,
    STATE(134), 1,
      sym_project_property_key,
    ACTIONS(94), 2,
      anon_sym_database_type,
      anon_sym_Note,
    STATE(22), 2,
      sym_project_property_definition,
      aux_sym_project_definition_repeat1,
  [345] = 3,
    STATE(106), 1,
      sym_relationship_setting_definition,
    STATE(170), 1,
      sym_relationship_event,
    ACTIONS(65), 4,
      anon_sym_delete,
      anon_sym_on_delete,
      anon_sym_update,
      anon_sym_on_update,
  [358] = 1,
    ACTIONS(97), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [366] = 1,
    ACTIONS(99), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [374] = 1,
    ACTIONS(101), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [382] = 1,
    ACTIONS(103), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [390] = 1,
    ACTIONS(105), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [398] = 1,
    ACTIONS(107), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [406] = 1,
    ACTIONS(109), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [414] = 3,
    ACTIONS(113), 1,
      anon_sym_LT,
    STATE(58), 1,
      sym_relationship_symbol,
    ACTIONS(111), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [426] = 1,
    ACTIONS(115), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [434] = 3,
    ACTIONS(119), 1,
      aux_sym_identifier_token1,
    ACTIONS(117), 2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
    STATE(33), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [446] = 3,
    ACTIONS(113), 1,
      anon_sym_LT,
    STATE(59), 1,
      sym_relationship_symbol,
    ACTIONS(111), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [458] = 1,
    ACTIONS(122), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [466] = 3,
    ACTIONS(113), 1,
      anon_sym_LT,
    STATE(46), 1,
      sym_relationship_symbol,
    ACTIONS(111), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [478] = 3,
    ACTIONS(113), 1,
      anon_sym_LT,
    STATE(44), 1,
      sym_relationship_symbol,
    ACTIONS(111), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [490] = 1,
    ACTIONS(124), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [498] = 3,
    ACTIONS(113), 1,
      anon_sym_LT,
    STATE(56), 1,
      sym_relationship_symbol,
    ACTIONS(111), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [510] = 1,
    ACTIONS(126), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [518] = 4,
    ACTIONS(130), 1,
      anon_sym_name,
    ACTIONS(132), 1,
      anon_sym_type,
    STATE(148), 1,
      sym_index_settings,
    ACTIONS(128), 2,
      anon_sym_pk,
      anon_sym_unique,
  [532] = 1,
    ACTIONS(134), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [540] = 4,
    ACTIONS(136), 1,
      aux_sym_identifier_token1,
    STATE(110), 1,
      sym_relationship_definition_side,
    STATE(111), 1,
      sym_table_name,
    STATE(168), 1,
      sym__hidden_identifier,
  [553] = 4,
    ACTIONS(136), 1,
      aux_sym_identifier_token1,
    STATE(119), 1,
      sym_relationship_definition_side,
    STATE(168), 1,
      sym__hidden_identifier,
    STATE(177), 1,
      sym_table_name,
  [566] = 3,
    ACTIONS(138), 1,
      anon_sym_SQUOTE,
    ACTIONS(140), 1,
      aux_sym_identifier_token1,
    STATE(47), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [577] = 4,
    ACTIONS(136), 1,
      aux_sym_identifier_token1,
    STATE(141), 1,
      sym_relationship_definition_side,
    STATE(168), 1,
      sym__hidden_identifier,
    STATE(177), 1,
      sym_table_name,
  [590] = 3,
    ACTIONS(140), 1,
      aux_sym_identifier_token1,
    ACTIONS(142), 1,
      anon_sym_SQUOTE,
    STATE(33), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [601] = 4,
    ACTIONS(136), 1,
      aux_sym_identifier_token1,
    STATE(111), 1,
      sym_table_name,
    STATE(168), 1,
      sym__hidden_identifier,
    STATE(169), 1,
      sym_relationship_definition_side,
  [614] = 3,
    ACTIONS(140), 1,
      aux_sym_identifier_token1,
    ACTIONS(144), 1,
      anon_sym_BQUOTE,
    STATE(33), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [625] = 4,
    ACTIONS(136), 1,
      aux_sym_identifier_token1,
    STATE(111), 1,
      sym_table_name,
    STATE(139), 1,
      sym_relationship_definition_side,
    STATE(168), 1,
      sym__hidden_identifier,
  [638] = 3,
    ACTIONS(140), 1,
      aux_sym_identifier_token1,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    STATE(33), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [649] = 3,
    ACTIONS(146), 1,
      aux_sym_identifier_token1,
    STATE(133), 1,
      sym_identifier,
    STATE(11), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [660] = 3,
    ACTIONS(146), 1,
      aux_sym_identifier_token1,
    STATE(133), 1,
      sym_identifier,
    STATE(12), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [671] = 3,
    ACTIONS(140), 1,
      aux_sym_identifier_token1,
    ACTIONS(148), 1,
      anon_sym_BQUOTE,
    STATE(49), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [682] = 3,
    ACTIONS(140), 1,
      aux_sym_identifier_token1,
    ACTIONS(148), 1,
      anon_sym_SQUOTE,
    STATE(51), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [693] = 4,
    ACTIONS(136), 1,
      aux_sym_identifier_token1,
    STATE(18), 1,
      sym_relationship_definition_side,
    STATE(168), 1,
      sym__hidden_identifier,
    STATE(176), 1,
      sym_table_name,
  [706] = 4,
    ACTIONS(136), 1,
      aux_sym_identifier_token1,
    STATE(111), 1,
      sym_table_name,
    STATE(151), 1,
      sym_relationship_definition_side,
    STATE(168), 1,
      sym__hidden_identifier,
  [719] = 4,
    ACTIONS(136), 1,
      aux_sym_identifier_token1,
    STATE(15), 1,
      sym_relationship_definition_side,
    STATE(168), 1,
      sym__hidden_identifier,
    STATE(176), 1,
      sym_table_name,
  [732] = 4,
    ACTIONS(136), 1,
      aux_sym_identifier_token1,
    STATE(99), 1,
      sym_relationship_definition_side,
    STATE(168), 1,
      sym__hidden_identifier,
    STATE(176), 1,
      sym_table_name,
  [745] = 1,
    ACTIONS(37), 3,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_identifier_token1,
  [751] = 3,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    ACTIONS(152), 1,
      anon_sym_RPAREN,
    STATE(72), 1,
      aux_sym_index_definition_composite_repeat1,
  [761] = 3,
    ACTIONS(154), 1,
      anon_sym_COMMA,
    ACTIONS(157), 1,
      anon_sym_RBRACK,
    STATE(62), 1,
      aux_sym_column_settings_repeat1,
  [771] = 2,
    ACTIONS(159), 1,
      anon_sym_RBRACE,
    ACTIONS(161), 2,
      sym_indexes,
      aux_sym_identifier_token1,
  [779] = 3,
    ACTIONS(163), 1,
      anon_sym_COMMA,
    ACTIONS(165), 1,
      anon_sym_RBRACK,
    STATE(67), 1,
      aux_sym_relationship_definition_short_repeat1,
  [789] = 3,
    ACTIONS(167), 1,
      aux_sym_identifier_token1,
    STATE(117), 1,
      sym__hidden_identifier,
    STATE(118), 1,
      sym_table_name,
  [799] = 3,
    ACTIONS(146), 1,
      aux_sym_identifier_token1,
    ACTIONS(169), 1,
      anon_sym_LBRACE,
    STATE(107), 1,
      sym_identifier,
  [809] = 3,
    ACTIONS(163), 1,
      anon_sym_COMMA,
    ACTIONS(171), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      aux_sym_relationship_definition_short_repeat1,
  [819] = 3,
    ACTIONS(173), 1,
      anon_sym_LBRACK,
    ACTIONS(175), 1,
      sym__newline,
    STATE(136), 1,
      sym_index_setting,
  [829] = 3,
    ACTIONS(177), 1,
      anon_sym_COMMA,
    ACTIONS(179), 1,
      anon_sym_RBRACK,
    STATE(62), 1,
      aux_sym_column_settings_repeat1,
  [839] = 2,
    ACTIONS(181), 1,
      anon_sym_RBRACE,
    ACTIONS(183), 2,
      sym_indexes,
      aux_sym_identifier_token1,
  [847] = 3,
    ACTIONS(146), 1,
      aux_sym_identifier_token1,
    STATE(124), 1,
      sym_identifier,
    STATE(125), 1,
      sym_project_name,
  [857] = 3,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    ACTIONS(185), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      aux_sym_index_definition_composite_repeat1,
  [867] = 3,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(190), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      aux_sym_relationship_definition_short_repeat1,
  [877] = 3,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(194), 1,
      sym__newline,
    STATE(85), 1,
      sym_column_settings,
  [887] = 3,
    ACTIONS(177), 1,
      anon_sym_COMMA,
    ACTIONS(196), 1,
      anon_sym_RBRACK,
    STATE(69), 1,
      aux_sym_column_settings_repeat1,
  [897] = 3,
    ACTIONS(198), 1,
      anon_sym_COMMA,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      aux_sym_index_definition_composite_repeat1,
  [907] = 3,
    ACTIONS(203), 1,
      aux_sym_identifier_token1,
    STATE(149), 1,
      sym__hidden_identifier,
    STATE(150), 1,
      sym_column_name,
  [917] = 3,
    ACTIONS(163), 1,
      anon_sym_COMMA,
    ACTIONS(205), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      aux_sym_relationship_definition_short_repeat1,
  [927] = 3,
    ACTIONS(163), 1,
      anon_sym_COMMA,
    ACTIONS(207), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      aux_sym_relationship_definition_short_repeat1,
  [937] = 3,
    ACTIONS(209), 1,
      aux_sym_identifier_token1,
    STATE(153), 1,
      sym__hidden_identifier,
    STATE(158), 1,
      sym_table_alias,
  [947] = 3,
    ACTIONS(211), 1,
      aux_sym_identifier_token1,
    STATE(7), 1,
      sym__hidden_identifier,
    STATE(9), 1,
      sym_column_name,
  [957] = 3,
    ACTIONS(213), 1,
      aux_sym_identifier_token1,
    STATE(174), 1,
      sym_column_name,
    STATE(175), 1,
      sym__hidden_identifier,
  [967] = 1,
    ACTIONS(215), 3,
      anon_sym_RBRACE,
      anon_sym_database_type,
      anon_sym_Note,
  [973] = 2,
    ACTIONS(217), 1,
      anon_sym_RBRACE,
    ACTIONS(219), 2,
      sym_indexes,
      aux_sym_identifier_token1,
  [981] = 2,
    ACTIONS(221), 1,
      anon_sym_RBRACE,
    ACTIONS(223), 2,
      sym_indexes,
      aux_sym_identifier_token1,
  [989] = 2,
    ACTIONS(140), 1,
      aux_sym_identifier_token1,
    STATE(96), 1,
      sym_identifier,
  [996] = 2,
    ACTIONS(225), 1,
      anon_sym_LBRACK,
    ACTIONS(227), 1,
      sym__newline,
  [1003] = 2,
    ACTIONS(82), 1,
      sym__newline,
    ACTIONS(229), 1,
      anon_sym_LBRACK,
  [1010] = 2,
    ACTIONS(231), 1,
      anon_sym_COLON,
    ACTIONS(233), 1,
      sym__space,
  [1017] = 2,
    ACTIONS(140), 1,
      aux_sym_identifier_token1,
    STATE(165), 1,
      sym_identifier,
  [1024] = 1,
    ACTIONS(235), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1029] = 2,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    STATE(164), 1,
      sym_enquoted_identifier,
  [1036] = 1,
    ACTIONS(239), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1041] = 2,
    ACTIONS(140), 1,
      aux_sym_identifier_token1,
    STATE(161), 1,
      sym_identifier,
  [1048] = 2,
    ACTIONS(241), 1,
      anon_sym_LBRACK,
    ACTIONS(243), 1,
      sym__newline,
  [1055] = 1,
    ACTIONS(201), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1060] = 2,
    ACTIONS(245), 1,
      anon_sym_LBRACK,
    ACTIONS(247), 1,
      sym__newline,
  [1067] = 2,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_BQUOTE,
  [1074] = 1,
    ACTIONS(253), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1079] = 2,
    ACTIONS(255), 1,
      anon_sym_SQUOTE,
    STATE(162), 1,
      sym_enquoted_identifier_multi,
  [1086] = 1,
    ACTIONS(257), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1091] = 1,
    ACTIONS(157), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1096] = 2,
    ACTIONS(259), 1,
      anon_sym_LBRACE,
    ACTIONS(261), 1,
      sym_as,
  [1103] = 1,
    ACTIONS(263), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1108] = 2,
    ACTIONS(140), 1,
      aux_sym_identifier_token1,
    STATE(61), 1,
      sym_identifier,
  [1115] = 1,
    ACTIONS(190), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1120] = 2,
    ACTIONS(265), 1,
      anon_sym_COLON,
    ACTIONS(267), 1,
      sym__space,
  [1127] = 2,
    ACTIONS(82), 1,
      sym__space,
    ACTIONS(229), 1,
      anon_sym_COLON,
  [1134] = 1,
    ACTIONS(269), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1139] = 1,
    ACTIONS(271), 1,
      sym__space,
  [1143] = 1,
    ACTIONS(273), 1,
      sym__dot,
  [1147] = 1,
    ACTIONS(275), 1,
      anon_sym_RBRACE,
  [1151] = 1,
    ACTIONS(277), 1,
      sym__newline,
  [1155] = 1,
    ACTIONS(279), 1,
      anon_sym_RBRACE,
  [1159] = 1,
    ACTIONS(281), 1,
      sym__newline,
  [1163] = 1,
    ACTIONS(283), 1,
      sym__newline,
  [1167] = 1,
    ACTIONS(285), 1,
      sym__space,
  [1171] = 1,
    ACTIONS(287), 1,
      sym__space,
  [1175] = 1,
    ACTIONS(289), 1,
      sym__newline,
  [1179] = 1,
    ACTIONS(291), 1,
      sym__newline,
  [1183] = 1,
    ACTIONS(293), 1,
      anon_sym_RBRACE,
  [1187] = 1,
    ACTIONS(295), 1,
      sym__newline,
  [1191] = 1,
    ACTIONS(297), 1,
      anon_sym_RBRACE,
  [1195] = 1,
    ACTIONS(299), 1,
      sym__space,
  [1199] = 1,
    ACTIONS(301), 1,
      sym__space,
  [1203] = 1,
    ACTIONS(303), 1,
      sym__space,
  [1207] = 1,
    ACTIONS(305), 1,
      sym_column_type,
  [1211] = 1,
    ACTIONS(307), 1,
      sym__space,
  [1215] = 1,
    ACTIONS(309), 1,
      anon_sym_COLON,
  [1219] = 1,
    ACTIONS(311), 1,
      anon_sym_LBRACE,
  [1223] = 1,
    ACTIONS(313), 1,
      sym__space,
  [1227] = 1,
    ACTIONS(315), 1,
      anon_sym_LBRACE,
  [1231] = 1,
    ACTIONS(317), 1,
      sym__space,
  [1235] = 1,
    ACTIONS(319), 1,
      anon_sym_COLON,
  [1239] = 1,
    ACTIONS(321), 1,
      sym__space,
  [1243] = 1,
    ACTIONS(323), 1,
      sym__newline,
  [1247] = 1,
    ACTIONS(325), 1,
      anon_sym_RBRACE,
  [1251] = 1,
    ACTIONS(327), 1,
      anon_sym_COLON,
  [1255] = 1,
    ACTIONS(329), 1,
      sym__space,
  [1259] = 1,
    ACTIONS(331), 1,
      sym__newline,
  [1263] = 1,
    ACTIONS(333), 1,
      sym__newline,
  [1267] = 1,
    ACTIONS(335), 1,
      anon_sym_LBRACE,
  [1271] = 1,
    ACTIONS(337), 1,
      anon_sym_LBRACE,
  [1275] = 1,
    ACTIONS(339), 1,
      aux_sym_identifier_token1,
  [1279] = 1,
    ACTIONS(341), 1,
      anon_sym_RBRACK,
  [1283] = 1,
    ACTIONS(343), 1,
      anon_sym_COLON,
  [1287] = 1,
    ACTIONS(345), 1,
      anon_sym_COLON,
  [1291] = 1,
    ACTIONS(347), 1,
      anon_sym_RBRACK,
  [1295] = 1,
    ACTIONS(45), 1,
      sym__space,
  [1299] = 1,
    ACTIONS(53), 1,
      sym__space,
  [1303] = 1,
    ACTIONS(349), 1,
      sym__space,
  [1307] = 1,
    ACTIONS(351), 1,
      sym__space,
  [1311] = 1,
    ACTIONS(353), 1,
      sym__space,
  [1315] = 1,
    ACTIONS(355), 1,
      sym__space,
  [1319] = 1,
    ACTIONS(357), 1,
      sym__space,
  [1323] = 1,
    ACTIONS(359), 1,
      sym__newline,
  [1327] = 1,
    ACTIONS(361), 1,
      sym__space,
  [1331] = 1,
    ACTIONS(363), 1,
      sym__space,
  [1335] = 1,
    ACTIONS(365), 1,
      sym__newline,
  [1339] = 1,
    ACTIONS(367), 1,
      sym__newline,
  [1343] = 1,
    ACTIONS(369), 1,
      anon_sym_RBRACK,
  [1347] = 1,
    ACTIONS(371), 1,
      sym__newline,
  [1351] = 1,
    ACTIONS(373), 1,
      anon_sym_RBRACE,
  [1355] = 1,
    ACTIONS(375), 1,
      anon_sym_RBRACK,
  [1359] = 1,
    ACTIONS(377), 1,
      anon_sym_SQUOTE,
  [1363] = 1,
    ACTIONS(379), 1,
      anon_sym_RBRACK,
  [1367] = 1,
    ACTIONS(381), 1,
      ts_builtin_sym_end,
  [1371] = 1,
    ACTIONS(285), 1,
      sym__dot,
  [1375] = 1,
    ACTIONS(383), 1,
      sym__space,
  [1379] = 1,
    ACTIONS(385), 1,
      anon_sym_COLON,
  [1383] = 1,
    ACTIONS(387), 1,
      sym__space,
  [1387] = 1,
    ACTIONS(389), 1,
      anon_sym_COLON,
  [1391] = 1,
    ACTIONS(391), 1,
      sym__newline,
  [1395] = 1,
    ACTIONS(53), 1,
      sym__newline,
  [1399] = 1,
    ACTIONS(45), 1,
      sym__newline,
  [1403] = 1,
    ACTIONS(393), 1,
      sym__dot,
  [1407] = 1,
    ACTIONS(395), 1,
      sym__dot,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 24,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 68,
  [SMALL_STATE(6)] = 84,
  [SMALL_STATE(7)] = 107,
  [SMALL_STATE(8)] = 118,
  [SMALL_STATE(9)] = 141,
  [SMALL_STATE(10)] = 152,
  [SMALL_STATE(11)] = 175,
  [SMALL_STATE(12)] = 195,
  [SMALL_STATE(13)] = 215,
  [SMALL_STATE(14)] = 228,
  [SMALL_STATE(15)] = 245,
  [SMALL_STATE(16)] = 256,
  [SMALL_STATE(17)] = 271,
  [SMALL_STATE(18)] = 280,
  [SMALL_STATE(19)] = 291,
  [SMALL_STATE(20)] = 306,
  [SMALL_STATE(21)] = 317,
  [SMALL_STATE(22)] = 330,
  [SMALL_STATE(23)] = 345,
  [SMALL_STATE(24)] = 358,
  [SMALL_STATE(25)] = 366,
  [SMALL_STATE(26)] = 374,
  [SMALL_STATE(27)] = 382,
  [SMALL_STATE(28)] = 390,
  [SMALL_STATE(29)] = 398,
  [SMALL_STATE(30)] = 406,
  [SMALL_STATE(31)] = 414,
  [SMALL_STATE(32)] = 426,
  [SMALL_STATE(33)] = 434,
  [SMALL_STATE(34)] = 446,
  [SMALL_STATE(35)] = 458,
  [SMALL_STATE(36)] = 466,
  [SMALL_STATE(37)] = 478,
  [SMALL_STATE(38)] = 490,
  [SMALL_STATE(39)] = 498,
  [SMALL_STATE(40)] = 510,
  [SMALL_STATE(41)] = 518,
  [SMALL_STATE(42)] = 532,
  [SMALL_STATE(43)] = 540,
  [SMALL_STATE(44)] = 553,
  [SMALL_STATE(45)] = 566,
  [SMALL_STATE(46)] = 577,
  [SMALL_STATE(47)] = 590,
  [SMALL_STATE(48)] = 601,
  [SMALL_STATE(49)] = 614,
  [SMALL_STATE(50)] = 625,
  [SMALL_STATE(51)] = 638,
  [SMALL_STATE(52)] = 649,
  [SMALL_STATE(53)] = 660,
  [SMALL_STATE(54)] = 671,
  [SMALL_STATE(55)] = 682,
  [SMALL_STATE(56)] = 693,
  [SMALL_STATE(57)] = 706,
  [SMALL_STATE(58)] = 719,
  [SMALL_STATE(59)] = 732,
  [SMALL_STATE(60)] = 745,
  [SMALL_STATE(61)] = 751,
  [SMALL_STATE(62)] = 761,
  [SMALL_STATE(63)] = 771,
  [SMALL_STATE(64)] = 779,
  [SMALL_STATE(65)] = 789,
  [SMALL_STATE(66)] = 799,
  [SMALL_STATE(67)] = 809,
  [SMALL_STATE(68)] = 819,
  [SMALL_STATE(69)] = 829,
  [SMALL_STATE(70)] = 839,
  [SMALL_STATE(71)] = 847,
  [SMALL_STATE(72)] = 857,
  [SMALL_STATE(73)] = 867,
  [SMALL_STATE(74)] = 877,
  [SMALL_STATE(75)] = 887,
  [SMALL_STATE(76)] = 897,
  [SMALL_STATE(77)] = 907,
  [SMALL_STATE(78)] = 917,
  [SMALL_STATE(79)] = 927,
  [SMALL_STATE(80)] = 937,
  [SMALL_STATE(81)] = 947,
  [SMALL_STATE(82)] = 957,
  [SMALL_STATE(83)] = 967,
  [SMALL_STATE(84)] = 973,
  [SMALL_STATE(85)] = 981,
  [SMALL_STATE(86)] = 989,
  [SMALL_STATE(87)] = 996,
  [SMALL_STATE(88)] = 1003,
  [SMALL_STATE(89)] = 1010,
  [SMALL_STATE(90)] = 1017,
  [SMALL_STATE(91)] = 1024,
  [SMALL_STATE(92)] = 1029,
  [SMALL_STATE(93)] = 1036,
  [SMALL_STATE(94)] = 1041,
  [SMALL_STATE(95)] = 1048,
  [SMALL_STATE(96)] = 1055,
  [SMALL_STATE(97)] = 1060,
  [SMALL_STATE(98)] = 1067,
  [SMALL_STATE(99)] = 1074,
  [SMALL_STATE(100)] = 1079,
  [SMALL_STATE(101)] = 1086,
  [SMALL_STATE(102)] = 1091,
  [SMALL_STATE(103)] = 1096,
  [SMALL_STATE(104)] = 1103,
  [SMALL_STATE(105)] = 1108,
  [SMALL_STATE(106)] = 1115,
  [SMALL_STATE(107)] = 1120,
  [SMALL_STATE(108)] = 1127,
  [SMALL_STATE(109)] = 1134,
  [SMALL_STATE(110)] = 1139,
  [SMALL_STATE(111)] = 1143,
  [SMALL_STATE(112)] = 1147,
  [SMALL_STATE(113)] = 1151,
  [SMALL_STATE(114)] = 1155,
  [SMALL_STATE(115)] = 1159,
  [SMALL_STATE(116)] = 1163,
  [SMALL_STATE(117)] = 1167,
  [SMALL_STATE(118)] = 1171,
  [SMALL_STATE(119)] = 1175,
  [SMALL_STATE(120)] = 1179,
  [SMALL_STATE(121)] = 1183,
  [SMALL_STATE(122)] = 1187,
  [SMALL_STATE(123)] = 1191,
  [SMALL_STATE(124)] = 1195,
  [SMALL_STATE(125)] = 1199,
  [SMALL_STATE(126)] = 1203,
  [SMALL_STATE(127)] = 1207,
  [SMALL_STATE(128)] = 1211,
  [SMALL_STATE(129)] = 1215,
  [SMALL_STATE(130)] = 1219,
  [SMALL_STATE(131)] = 1223,
  [SMALL_STATE(132)] = 1227,
  [SMALL_STATE(133)] = 1231,
  [SMALL_STATE(134)] = 1235,
  [SMALL_STATE(135)] = 1239,
  [SMALL_STATE(136)] = 1243,
  [SMALL_STATE(137)] = 1247,
  [SMALL_STATE(138)] = 1251,
  [SMALL_STATE(139)] = 1255,
  [SMALL_STATE(140)] = 1259,
  [SMALL_STATE(141)] = 1263,
  [SMALL_STATE(142)] = 1267,
  [SMALL_STATE(143)] = 1271,
  [SMALL_STATE(144)] = 1275,
  [SMALL_STATE(145)] = 1279,
  [SMALL_STATE(146)] = 1283,
  [SMALL_STATE(147)] = 1287,
  [SMALL_STATE(148)] = 1291,
  [SMALL_STATE(149)] = 1295,
  [SMALL_STATE(150)] = 1299,
  [SMALL_STATE(151)] = 1303,
  [SMALL_STATE(152)] = 1307,
  [SMALL_STATE(153)] = 1311,
  [SMALL_STATE(154)] = 1315,
  [SMALL_STATE(155)] = 1319,
  [SMALL_STATE(156)] = 1323,
  [SMALL_STATE(157)] = 1327,
  [SMALL_STATE(158)] = 1331,
  [SMALL_STATE(159)] = 1335,
  [SMALL_STATE(160)] = 1339,
  [SMALL_STATE(161)] = 1343,
  [SMALL_STATE(162)] = 1347,
  [SMALL_STATE(163)] = 1351,
  [SMALL_STATE(164)] = 1355,
  [SMALL_STATE(165)] = 1359,
  [SMALL_STATE(166)] = 1363,
  [SMALL_STATE(167)] = 1367,
  [SMALL_STATE(168)] = 1371,
  [SMALL_STATE(169)] = 1375,
  [SMALL_STATE(170)] = 1379,
  [SMALL_STATE(171)] = 1383,
  [SMALL_STATE(172)] = 1387,
  [SMALL_STATE(173)] = 1391,
  [SMALL_STATE(174)] = 1395,
  [SMALL_STATE(175)] = 1399,
  [SMALL_STATE(176)] = 1403,
  [SMALL_STATE(177)] = 1407,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(171),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_indexes_definition_repeat1, 2, 0, 0),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_indexes_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_indexes_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_name, 1, 0, 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_side, 3, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_definition_repeat1, 2, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_definition_repeat1, 2, 0, 0),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 7, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 9, 0, 7),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_project_definition_repeat1, 2, 0, 0),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_project_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(138),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 12, 0, 7),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 10, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 13, 0, 7),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_long, 10, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_definition, 7, 0, 4),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 11, 0, 11),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 8, 0, 6),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 11, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_setting_default_repeat1, 2, 0, 0),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_setting_default_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 12, 0, 11),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_long, 12, 0, 7),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 9, 0, 6),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_definition, 8, 0, 5),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_settings_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_settings_repeat1, 2, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 4, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_settings, 4, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_definition, 1, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 3, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_settings, 3, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relationship_definition_short_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relationship_definition_short_repeat1, 2, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_definition_composite_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_definition_composite_repeat1, 2, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_property_definition, 5, 0, 10),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 4, 0, 8),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definition, 4, 0, 8),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 4, 0, 9),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definition, 4, 0, 9),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_definition_single, 1, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_definition_single, 1, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_setting_default, 5, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_setting_default, 4, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_definition_composite, 4, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_definition_composite, 4, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_definition_composite, 3, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_definition_composite, 3, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_inline, 4, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 1, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_setting_definition, 4, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_action, 1, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enquoted_identifier_multi, 3, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 1, 0, 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indexes_definition, 5, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_name, 1, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_definition, 2, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indexes_definition, 6, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_property_key, 1, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enquoted_identifier_multi, 2, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_symbol, 1, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_settings, 1, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_alias, 1, 0, 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_setting, 3, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_settings, 3, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_settings, 4, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enquoted_identifier, 3, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_event, 1, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
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
