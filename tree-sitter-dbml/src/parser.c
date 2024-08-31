#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 163
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 83
#define ALIAS_COUNT 0
#define TOKEN_COUNT 46
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
  sym_indexes = 25,
  anon_sym_ref_COLON = 26,
  anon_sym_delete = 27,
  anon_sym_on_delete = 28,
  anon_sym_update = 29,
  anon_sym_on_update = 30,
  anon_sym_cascade = 31,
  anon_sym_restrict = 32,
  anon_sym_setnull = 33,
  anon_sym_setdefault = 34,
  anon_sym_noaction = 35,
  anon_sym_DASH = 36,
  anon_sym_LT = 37,
  anon_sym_GT = 38,
  anon_sym_LT_GT = 39,
  sym_Ref = 40,
  aux_sym_identifier_token1 = 41,
  sym__newline = 42,
  sym__space = 43,
  sym__dot = 44,
  anon_sym_DQUOTE = 45,
  sym_source_file = 46,
  sym__definition = 47,
  sym_project_definition = 48,
  sym_project_name = 49,
  sym_project_property_definition = 50,
  sym_project_property_key = 51,
  sym_table_definition = 52,
  sym_table_name = 53,
  sym_column_definition = 54,
  sym_column_settings = 55,
  sym_column_setting_default = 56,
  sym_column_constraint = 57,
  sym_table_alias = 58,
  sym_indexes_definition = 59,
  sym_index_definition = 60,
  sym_index_definition_single = 61,
  sym_index_definition_composite = 62,
  sym_relationship_definition_short = 63,
  sym_relationship_definition_inline = 64,
  sym_relationship_definition_long = 65,
  sym_relationship_definition_side = 66,
  sym_relationship_setting_definition = 67,
  sym_relationship_event = 68,
  sym_relationship_action = 69,
  sym_relationship_symbol = 70,
  sym_column_name = 71,
  sym_identifier = 72,
  sym_enquoted_identifier_multi = 73,
  sym__hidden_identifier = 74,
  aux_sym_source_file_repeat1 = 75,
  aux_sym_project_definition_repeat1 = 76,
  aux_sym_table_definition_repeat1 = 77,
  aux_sym_column_settings_repeat1 = 78,
  aux_sym_column_setting_default_repeat1 = 79,
  aux_sym_indexes_definition_repeat1 = 80,
  aux_sym_index_definition_composite_repeat1 = 81,
  aux_sym_relationship_definition_short_repeat1 = 82,
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
  [69] = 66,
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
  [81] = 66,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 36,
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
  [101] = 9,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
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
  [134] = 8,
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
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 150,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 36,
  [158] = 158,
  [159] = 8,
  [160] = 9,
  [161] = 147,
  [162] = 147,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(129);
      ADVANCE_MAP(
        '"', 181,
        '\'', 142,
        '(', 152,
        ')', 153,
        ',', 138,
        '-', 166,
        '.', 180,
        '/', 8,
        ':', 133,
        '<', 167,
        '>', 168,
        'N', 89,
        'P', 97,
        'R', 36,
        'T', 12,
        '[', 137,
        ']', 139,
        '`', 143,
        'a', 100,
        'c', 14,
        'd', 15,
        'i', 83,
        'n', 90,
        'o', 84,
        'p', 69,
        'r', 37,
        's', 51,
        'u', 86,
        '{', 131,
        '}', 132,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '[') ADVANCE(137);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(34);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(70);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(179);
      if (lookahead == ':') ADVANCE(133);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(87);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(142);
      if (lookahead == '(') ADVANCE(152);
      if (lookahead == ')') ADVANCE(153);
      if (lookahead == ',') ADVANCE(138);
      if (lookahead == '`') ADVANCE(143);
      if (lookahead == '{') ADVANCE(131);
      if (lookahead == '}') ADVANCE(132);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(130);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(156);
      END_STATE();
    case 10:
      if (lookahead == '_') ADVANCE(32);
      END_STATE();
    case 11:
      if (lookahead == '_') ADVANCE(110);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(118);
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 24:
      if (lookahead == 'b') ADVANCE(78);
      END_STATE();
    case 25:
      if (lookahead == 'b') ADVANCE(19);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(99);
      if (lookahead == 'd') ADVANCE(39);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(113);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(17);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(104);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(106);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(21);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(56);
      if (lookahead == 'u') ADVANCE(94);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(44);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(22);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 59:
      if (lookahead == 'f') ADVANCE(170);
      END_STATE();
    case 60:
      if (lookahead == 'f') ADVANCE(9);
      if (lookahead == 's') ADVANCE(111);
      END_STATE();
    case 61:
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 62:
      if (lookahead == 'f') ADVANCE(23);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(174);
      if (lookahead == '}') ADVANCE(132);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(65);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 68:
      if (lookahead == 'j') ADVANCE(57);
      END_STATE();
    case 69:
      if (lookahead == 'k') ADVANCE(145);
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 70:
      if (lookahead == 'k') ADVANCE(52);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(146);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(163);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 81:
      if (lookahead == 'm') ADVANCE(20);
      END_STATE();
    case 82:
      if (lookahead == 'm') ADVANCE(54);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(165);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(64);
      if (lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(6);
      if (lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 93:
      if (lookahead == 'p') ADVANCE(47);
      END_STATE();
    case 94:
      if (lookahead == 'p') ADVANCE(35);
      END_STATE();
    case 95:
      if (lookahead == 'q') ADVANCE(120);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 100:
      if (lookahead == 's') ADVANCE(151);
      END_STATE();
    case 101:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 102:
      if (lookahead == 's') ADVANCE(154);
      END_STATE();
    case 103:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(2);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 119:
      if (lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 120:
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 121:
      if (lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 122:
      if (lookahead == 'u') ADVANCE(79);
      END_STATE();
    case 123:
      if (lookahead == 'u') ADVANCE(76);
      END_STATE();
    case 124:
      if (lookahead == 'x') ADVANCE(53);
      END_STATE();
    case 125:
      if (lookahead == 'y') ADVANCE(144);
      END_STATE();
    case 126:
      if (lookahead == 'y') ADVANCE(93);
      END_STATE();
    case 127:
      if (lookahead == 'y') ADVANCE(3);
      END_STATE();
    case 128:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(128);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_database_type);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_Note);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_Project);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_column_type);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_primarykey);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_pk);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_notnull);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_unique);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_increment);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_Table);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_as);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_indexes);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_indexes);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_ref_COLON);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_on_delete);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_update);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_on_update);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_cascade);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_restrict);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_setnull);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_setdefault);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_noaction);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '>') ADVANCE(169);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_Ref);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(172);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(171);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(155);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'x') ADVANCE(173);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == ' ') ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__dot);
      END_STATE();
    case 181:
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
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 65},
  [12] = {.lex_state = 65},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 65},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
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
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 7},
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
  [59] = {.lex_state = 65},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 65},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 7},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 7},
  [82] = {.lex_state = 65},
  [83] = {.lex_state = 65},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 7},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 128},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 7},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 4},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 4},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 4},
  [155] = {.lex_state = 4},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 4},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
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
    [sym_source_file] = STATE(156),
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
    STATE(85), 3,
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
    STATE(73), 2,
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
    STATE(118), 1,
      sym_index_definition,
    STATE(120), 1,
      sym_identifier,
    STATE(119), 2,
      sym_index_definition_single,
      sym_index_definition_composite,
  [107] = 7,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      aux_sym_identifier_token1,
    STATE(10), 1,
      aux_sym_indexes_definition_repeat1,
    STATE(118), 1,
      sym_index_definition,
    STATE(120), 1,
      sym_identifier,
    STATE(119), 2,
      sym_index_definition_single,
      sym_index_definition_composite,
  [130] = 1,
    ACTIONS(51), 8,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_Table,
      sym_Ref,
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
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      aux_sym_identifier_token1,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      aux_sym_indexes_definition_repeat1,
    STATE(118), 1,
      sym_index_definition,
    STATE(120), 1,
      sym_identifier,
    STATE(119), 2,
      sym_index_definition_single,
      sym_index_definition_composite,
  [175] = 6,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    ACTIONS(59), 1,
      sym_indexes,
    ACTIONS(61), 1,
      aux_sym_identifier_token1,
    STATE(122), 1,
      sym_indexes_definition,
    STATE(128), 1,
      sym_identifier,
    STATE(15), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [195] = 6,
    ACTIONS(59), 1,
      sym_indexes,
    ACTIONS(61), 1,
      aux_sym_identifier_token1,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    STATE(103), 1,
      sym_indexes_definition,
    STATE(128), 1,
      sym_identifier,
    STATE(15), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [215] = 4,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    STATE(130), 1,
      sym_project_property_key,
    ACTIONS(67), 2,
      anon_sym_database_type,
      anon_sym_Note,
    STATE(21), 2,
      sym_project_property_definition,
      aux_sym_project_definition_repeat1,
  [230] = 3,
    STATE(65), 1,
      sym_relationship_setting_definition,
    STATE(113), 1,
      sym_relationship_event,
    ACTIONS(69), 4,
      anon_sym_delete,
      anon_sym_on_delete,
      anon_sym_update,
      anon_sym_on_update,
  [243] = 5,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    ACTIONS(73), 1,
      sym_indexes,
    ACTIONS(75), 1,
      aux_sym_identifier_token1,
    STATE(128), 1,
      sym_identifier,
    STATE(15), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [260] = 2,
    STATE(94), 1,
      sym_relationship_action,
    ACTIONS(78), 5,
      anon_sym_cascade,
      anon_sym_restrict,
      anon_sym_setnull,
      anon_sym_setdefault,
      anon_sym_noaction,
  [271] = 4,
    ACTIONS(80), 1,
      anon_sym_RBRACE,
    STATE(130), 1,
      sym_project_property_key,
    ACTIONS(67), 2,
      anon_sym_database_type,
      anon_sym_Note,
    STATE(13), 2,
      sym_project_property_definition,
      aux_sym_project_definition_repeat1,
  [286] = 3,
    STATE(97), 1,
      sym_relationship_setting_definition,
    STATE(113), 1,
      sym_relationship_event,
    ACTIONS(69), 4,
      anon_sym_delete,
      anon_sym_on_delete,
      anon_sym_update,
      anon_sym_on_update,
  [299] = 2,
    ACTIONS(84), 1,
      anon_sym_LBRACK,
    ACTIONS(82), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [310] = 2,
    ACTIONS(88), 1,
      anon_sym_LBRACK,
    ACTIONS(86), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [321] = 4,
    ACTIONS(90), 1,
      anon_sym_RBRACE,
    STATE(130), 1,
      sym_project_property_key,
    ACTIONS(92), 2,
      anon_sym_database_type,
      anon_sym_Note,
    STATE(21), 2,
      sym_project_property_definition,
      aux_sym_project_definition_repeat1,
  [336] = 3,
    STATE(76), 1,
      sym_relationship_setting_definition,
    STATE(113), 1,
      sym_relationship_event,
    ACTIONS(69), 4,
      anon_sym_delete,
      anon_sym_on_delete,
      anon_sym_update,
      anon_sym_on_update,
  [349] = 1,
    ACTIONS(95), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [357] = 3,
    ACTIONS(99), 1,
      anon_sym_LT,
    STATE(52), 1,
      sym_relationship_symbol,
    ACTIONS(97), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [369] = 1,
    ACTIONS(101), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [377] = 1,
    ACTIONS(103), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [385] = 1,
    ACTIONS(105), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [393] = 1,
    ACTIONS(107), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [401] = 1,
    ACTIONS(109), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [409] = 1,
    ACTIONS(111), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [417] = 3,
    ACTIONS(99), 1,
      anon_sym_LT,
    STATE(46), 1,
      sym_relationship_symbol,
    ACTIONS(97), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [429] = 3,
    ACTIONS(99), 1,
      anon_sym_LT,
    STATE(58), 1,
      sym_relationship_symbol,
    ACTIONS(97), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [441] = 3,
    ACTIONS(99), 1,
      anon_sym_LT,
    STATE(50), 1,
      sym_relationship_symbol,
    ACTIONS(97), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [453] = 1,
    ACTIONS(113), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [461] = 3,
    ACTIONS(117), 1,
      aux_sym_identifier_token1,
    ACTIONS(115), 2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
    STATE(35), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [473] = 1,
    ACTIONS(120), 5,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_RPAREN,
      aux_sym_identifier_token1,
  [481] = 1,
    ACTIONS(122), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [489] = 3,
    ACTIONS(99), 1,
      anon_sym_LT,
    STATE(54), 1,
      sym_relationship_symbol,
    ACTIONS(97), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [501] = 1,
    ACTIONS(124), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [509] = 1,
    ACTIONS(126), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [517] = 1,
    ACTIONS(128), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [525] = 3,
    ACTIONS(130), 1,
      anon_sym_SQUOTE,
    ACTIONS(132), 1,
      aux_sym_identifier_token1,
    STATE(47), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [536] = 4,
    ACTIONS(134), 1,
      aux_sym_identifier_token1,
    STATE(139), 1,
      sym_relationship_definition_side,
    STATE(147), 1,
      sym_table_name,
    STATE(153), 1,
      sym__hidden_identifier,
  [549] = 3,
    ACTIONS(132), 1,
      aux_sym_identifier_token1,
    ACTIONS(136), 1,
      anon_sym_SQUOTE,
    STATE(35), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [560] = 3,
    ACTIONS(132), 1,
      aux_sym_identifier_token1,
    ACTIONS(138), 1,
      anon_sym_BQUOTE,
    STATE(35), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [571] = 4,
    ACTIONS(134), 1,
      aux_sym_identifier_token1,
    STATE(20), 1,
      sym_relationship_definition_side,
    STATE(153), 1,
      sym__hidden_identifier,
    STATE(161), 1,
      sym_table_name,
  [584] = 3,
    ACTIONS(132), 1,
      aux_sym_identifier_token1,
    ACTIONS(138), 1,
      anon_sym_SQUOTE,
    STATE(35), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [595] = 4,
    ACTIONS(134), 1,
      aux_sym_identifier_token1,
    STATE(126), 1,
      sym_relationship_definition_side,
    STATE(147), 1,
      sym_table_name,
    STATE(153), 1,
      sym__hidden_identifier,
  [608] = 4,
    ACTIONS(134), 1,
      aux_sym_identifier_token1,
    STATE(145), 1,
      sym_relationship_definition_side,
    STATE(147), 1,
      sym_table_name,
    STATE(153), 1,
      sym__hidden_identifier,
  [621] = 4,
    ACTIONS(134), 1,
      aux_sym_identifier_token1,
    STATE(86), 1,
      sym_relationship_definition_side,
    STATE(153), 1,
      sym__hidden_identifier,
    STATE(161), 1,
      sym_table_name,
  [634] = 3,
    ACTIONS(132), 1,
      aux_sym_identifier_token1,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    STATE(44), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [645] = 4,
    ACTIONS(134), 1,
      aux_sym_identifier_token1,
    STATE(107), 1,
      sym_relationship_definition_side,
    STATE(153), 1,
      sym__hidden_identifier,
    STATE(162), 1,
      sym_table_name,
  [658] = 3,
    ACTIONS(142), 1,
      aux_sym_identifier_token1,
    STATE(128), 1,
      sym_identifier,
    STATE(11), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [669] = 4,
    ACTIONS(134), 1,
      aux_sym_identifier_token1,
    STATE(117), 1,
      sym_relationship_definition_side,
    STATE(153), 1,
      sym__hidden_identifier,
    STATE(162), 1,
      sym_table_name,
  [682] = 4,
    ACTIONS(134), 1,
      aux_sym_identifier_token1,
    STATE(132), 1,
      sym_relationship_definition_side,
    STATE(147), 1,
      sym_table_name,
    STATE(153), 1,
      sym__hidden_identifier,
  [695] = 3,
    ACTIONS(142), 1,
      aux_sym_identifier_token1,
    STATE(128), 1,
      sym_identifier,
    STATE(12), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [706] = 3,
    ACTIONS(130), 1,
      anon_sym_BQUOTE,
    ACTIONS(132), 1,
      aux_sym_identifier_token1,
    STATE(45), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [717] = 4,
    ACTIONS(134), 1,
      aux_sym_identifier_token1,
    STATE(19), 1,
      sym_relationship_definition_side,
    STATE(153), 1,
      sym__hidden_identifier,
    STATE(161), 1,
      sym_table_name,
  [730] = 2,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
    ACTIONS(146), 2,
      sym_indexes,
      aux_sym_identifier_token1,
  [738] = 1,
    ACTIONS(37), 3,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_identifier_token1,
  [744] = 3,
    ACTIONS(148), 1,
      anon_sym_COMMA,
    ACTIONS(151), 1,
      anon_sym_RBRACK,
    STATE(61), 1,
      aux_sym_relationship_definition_short_repeat1,
  [754] = 3,
    ACTIONS(142), 1,
      aux_sym_identifier_token1,
    STATE(152), 1,
      sym_identifier,
    STATE(154), 1,
      sym_project_name,
  [764] = 3,
    ACTIONS(153), 1,
      aux_sym_identifier_token1,
    STATE(150), 1,
      sym__hidden_identifier,
    STATE(151), 1,
      sym_table_name,
  [774] = 3,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    ACTIONS(157), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      aux_sym_index_definition_composite_repeat1,
  [784] = 3,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    ACTIONS(161), 1,
      anon_sym_RBRACK,
    STATE(80), 1,
      aux_sym_relationship_definition_short_repeat1,
  [794] = 3,
    ACTIONS(163), 1,
      aux_sym_identifier_token1,
    STATE(8), 1,
      sym_column_name,
    STATE(9), 1,
      sym__hidden_identifier,
  [804] = 3,
    ACTIONS(165), 1,
      anon_sym_COMMA,
    ACTIONS(167), 1,
      anon_sym_RBRACK,
    STATE(75), 1,
      aux_sym_column_settings_repeat1,
  [814] = 3,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    ACTIONS(169), 1,
      anon_sym_RPAREN,
    STATE(64), 1,
      aux_sym_index_definition_composite_repeat1,
  [824] = 3,
    ACTIONS(171), 1,
      aux_sym_identifier_token1,
    STATE(101), 1,
      sym__hidden_identifier,
    STATE(134), 1,
      sym_column_name,
  [834] = 3,
    ACTIONS(173), 1,
      aux_sym_identifier_token1,
    STATE(136), 1,
      sym__hidden_identifier,
    STATE(137), 1,
      sym_table_alias,
  [844] = 3,
    ACTIONS(175), 1,
      anon_sym_LBRACK,
    ACTIONS(177), 1,
      sym__newline,
    STATE(83), 1,
      sym_column_settings,
  [854] = 2,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
    ACTIONS(181), 2,
      sym_indexes,
      aux_sym_identifier_token1,
  [862] = 3,
    ACTIONS(165), 1,
      anon_sym_COMMA,
    ACTIONS(183), 1,
      anon_sym_RBRACK,
    STATE(67), 1,
      aux_sym_column_settings_repeat1,
  [872] = 1,
    ACTIONS(185), 3,
      anon_sym_RBRACE,
      anon_sym_database_type,
      anon_sym_Note,
  [878] = 3,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(190), 1,
      anon_sym_RBRACK,
    STATE(75), 1,
      aux_sym_column_settings_repeat1,
  [888] = 3,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    ACTIONS(192), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      aux_sym_relationship_definition_short_repeat1,
  [898] = 3,
    ACTIONS(194), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      aux_sym_index_definition_composite_repeat1,
  [908] = 3,
    ACTIONS(142), 1,
      aux_sym_identifier_token1,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    STATE(91), 1,
      sym_identifier,
  [918] = 3,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    ACTIONS(201), 1,
      anon_sym_RBRACK,
    STATE(61), 1,
      aux_sym_relationship_definition_short_repeat1,
  [928] = 3,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    ACTIONS(203), 1,
      anon_sym_RBRACK,
    STATE(61), 1,
      aux_sym_relationship_definition_short_repeat1,
  [938] = 3,
    ACTIONS(205), 1,
      aux_sym_identifier_token1,
    STATE(159), 1,
      sym_column_name,
    STATE(160), 1,
      sym__hidden_identifier,
  [948] = 2,
    ACTIONS(207), 1,
      anon_sym_RBRACE,
    ACTIONS(209), 2,
      sym_indexes,
      aux_sym_identifier_token1,
  [956] = 2,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    ACTIONS(213), 2,
      sym_indexes,
      aux_sym_identifier_token1,
  [964] = 2,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    STATE(104), 1,
      sym_enquoted_identifier_multi,
  [971] = 1,
    ACTIONS(190), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [976] = 1,
    ACTIONS(217), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [981] = 1,
    ACTIONS(219), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [986] = 1,
    ACTIONS(221), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [991] = 2,
    ACTIONS(120), 1,
      sym__space,
    ACTIONS(223), 1,
      anon_sym_COLON,
  [998] = 1,
    ACTIONS(225), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1003] = 2,
    ACTIONS(227), 1,
      anon_sym_COLON,
    ACTIONS(229), 1,
      sym__space,
  [1010] = 2,
    ACTIONS(231), 1,
      anon_sym_LBRACE,
    ACTIONS(233), 1,
      sym_as,
  [1017] = 1,
    ACTIONS(235), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1022] = 1,
    ACTIONS(237), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1027] = 1,
    ACTIONS(197), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1032] = 2,
    ACTIONS(132), 1,
      aux_sym_identifier_token1,
    STATE(68), 1,
      sym_identifier,
  [1039] = 1,
    ACTIONS(151), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1044] = 2,
    ACTIONS(132), 1,
      aux_sym_identifier_token1,
    STATE(95), 1,
      sym_identifier,
  [1051] = 2,
    ACTIONS(239), 1,
      anon_sym_SQUOTE,
    ACTIONS(241), 1,
      anon_sym_BQUOTE,
  [1058] = 2,
    ACTIONS(243), 1,
      anon_sym_COLON,
    ACTIONS(245), 1,
      sym__space,
  [1065] = 1,
    ACTIONS(53), 1,
      sym__space,
  [1069] = 1,
    ACTIONS(247), 1,
      sym__space,
  [1073] = 1,
    ACTIONS(249), 1,
      anon_sym_RBRACE,
  [1077] = 1,
    ACTIONS(251), 1,
      sym__newline,
  [1081] = 1,
    ACTIONS(253), 1,
      sym__newline,
  [1085] = 1,
    ACTIONS(255), 1,
      sym__space,
  [1089] = 1,
    ACTIONS(257), 1,
      sym__newline,
  [1093] = 1,
    ACTIONS(259), 1,
      sym__newline,
  [1097] = 1,
    ACTIONS(261), 1,
      anon_sym_RBRACE,
  [1101] = 1,
    ACTIONS(263), 1,
      sym__newline,
  [1105] = 1,
    ACTIONS(265), 1,
      sym__space,
  [1109] = 1,
    ACTIONS(267), 1,
      anon_sym_RBRACE,
  [1113] = 1,
    ACTIONS(269), 1,
      anon_sym_COLON,
  [1117] = 1,
    ACTIONS(271), 1,
      anon_sym_COLON,
  [1121] = 1,
    ACTIONS(273), 1,
      anon_sym_LBRACE,
  [1125] = 1,
    ACTIONS(275), 1,
      anon_sym_RBRACE,
  [1129] = 1,
    ACTIONS(277), 1,
      sym__newline,
  [1133] = 1,
    ACTIONS(279), 1,
      sym__newline,
  [1137] = 1,
    ACTIONS(281), 1,
      sym__newline,
  [1141] = 1,
    ACTIONS(283), 1,
      sym__newline,
  [1145] = 1,
    ACTIONS(285), 1,
      sym__newline,
  [1149] = 1,
    ACTIONS(287), 1,
      anon_sym_RBRACE,
  [1153] = 1,
    ACTIONS(289), 1,
      sym__space,
  [1157] = 1,
    ACTIONS(291), 1,
      sym_column_type,
  [1161] = 1,
    ACTIONS(293), 1,
      sym__space,
  [1165] = 1,
    ACTIONS(295), 1,
      sym__space,
  [1169] = 1,
    ACTIONS(297), 1,
      anon_sym_LBRACE,
  [1173] = 1,
    ACTIONS(299), 1,
      sym__space,
  [1177] = 1,
    ACTIONS(301), 1,
      anon_sym_COLON,
  [1181] = 1,
    ACTIONS(303), 1,
      anon_sym_COLON,
  [1185] = 1,
    ACTIONS(305), 1,
      anon_sym_COLON,
  [1189] = 1,
    ACTIONS(307), 1,
      sym__space,
  [1193] = 1,
    ACTIONS(309), 1,
      aux_sym_identifier_token1,
  [1197] = 1,
    ACTIONS(51), 1,
      sym__space,
  [1201] = 1,
    ACTIONS(311), 1,
      anon_sym_RBRACE,
  [1205] = 1,
    ACTIONS(313), 1,
      sym__space,
  [1209] = 1,
    ACTIONS(315), 1,
      sym__space,
  [1213] = 1,
    ACTIONS(317), 1,
      sym__newline,
  [1217] = 1,
    ACTIONS(319), 1,
      sym__space,
  [1221] = 1,
    ACTIONS(321), 1,
      sym__newline,
  [1225] = 1,
    ACTIONS(323), 1,
      sym__newline,
  [1229] = 1,
    ACTIONS(325), 1,
      sym__newline,
  [1233] = 1,
    ACTIONS(327), 1,
      anon_sym_LBRACE,
  [1237] = 1,
    ACTIONS(329), 1,
      sym__space,
  [1241] = 1,
    ACTIONS(331), 1,
      sym__space,
  [1245] = 1,
    ACTIONS(333), 1,
      sym__newline,
  [1249] = 1,
    ACTIONS(335), 1,
      sym__dot,
  [1253] = 1,
    ACTIONS(337), 1,
      anon_sym_LBRACE,
  [1257] = 1,
    ACTIONS(339), 1,
      sym__newline,
  [1261] = 1,
    ACTIONS(341), 1,
      sym__space,
  [1265] = 1,
    ACTIONS(343), 1,
      sym__space,
  [1269] = 1,
    ACTIONS(345), 1,
      sym__space,
  [1273] = 1,
    ACTIONS(341), 1,
      sym__dot,
  [1277] = 1,
    ACTIONS(347), 1,
      sym__space,
  [1281] = 1,
    ACTIONS(349), 1,
      sym__space,
  [1285] = 1,
    ACTIONS(351), 1,
      ts_builtin_sym_end,
  [1289] = 1,
    ACTIONS(120), 1,
      sym__newline,
  [1293] = 1,
    ACTIONS(353), 1,
      sym__space,
  [1297] = 1,
    ACTIONS(51), 1,
      sym__newline,
  [1301] = 1,
    ACTIONS(53), 1,
      sym__newline,
  [1305] = 1,
    ACTIONS(355), 1,
      sym__dot,
  [1309] = 1,
    ACTIONS(357), 1,
      sym__dot,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 24,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 68,
  [SMALL_STATE(6)] = 84,
  [SMALL_STATE(7)] = 107,
  [SMALL_STATE(8)] = 130,
  [SMALL_STATE(9)] = 141,
  [SMALL_STATE(10)] = 152,
  [SMALL_STATE(11)] = 175,
  [SMALL_STATE(12)] = 195,
  [SMALL_STATE(13)] = 215,
  [SMALL_STATE(14)] = 230,
  [SMALL_STATE(15)] = 243,
  [SMALL_STATE(16)] = 260,
  [SMALL_STATE(17)] = 271,
  [SMALL_STATE(18)] = 286,
  [SMALL_STATE(19)] = 299,
  [SMALL_STATE(20)] = 310,
  [SMALL_STATE(21)] = 321,
  [SMALL_STATE(22)] = 336,
  [SMALL_STATE(23)] = 349,
  [SMALL_STATE(24)] = 357,
  [SMALL_STATE(25)] = 369,
  [SMALL_STATE(26)] = 377,
  [SMALL_STATE(27)] = 385,
  [SMALL_STATE(28)] = 393,
  [SMALL_STATE(29)] = 401,
  [SMALL_STATE(30)] = 409,
  [SMALL_STATE(31)] = 417,
  [SMALL_STATE(32)] = 429,
  [SMALL_STATE(33)] = 441,
  [SMALL_STATE(34)] = 453,
  [SMALL_STATE(35)] = 461,
  [SMALL_STATE(36)] = 473,
  [SMALL_STATE(37)] = 481,
  [SMALL_STATE(38)] = 489,
  [SMALL_STATE(39)] = 501,
  [SMALL_STATE(40)] = 509,
  [SMALL_STATE(41)] = 517,
  [SMALL_STATE(42)] = 525,
  [SMALL_STATE(43)] = 536,
  [SMALL_STATE(44)] = 549,
  [SMALL_STATE(45)] = 560,
  [SMALL_STATE(46)] = 571,
  [SMALL_STATE(47)] = 584,
  [SMALL_STATE(48)] = 595,
  [SMALL_STATE(49)] = 608,
  [SMALL_STATE(50)] = 621,
  [SMALL_STATE(51)] = 634,
  [SMALL_STATE(52)] = 645,
  [SMALL_STATE(53)] = 658,
  [SMALL_STATE(54)] = 669,
  [SMALL_STATE(55)] = 682,
  [SMALL_STATE(56)] = 695,
  [SMALL_STATE(57)] = 706,
  [SMALL_STATE(58)] = 717,
  [SMALL_STATE(59)] = 730,
  [SMALL_STATE(60)] = 738,
  [SMALL_STATE(61)] = 744,
  [SMALL_STATE(62)] = 754,
  [SMALL_STATE(63)] = 764,
  [SMALL_STATE(64)] = 774,
  [SMALL_STATE(65)] = 784,
  [SMALL_STATE(66)] = 794,
  [SMALL_STATE(67)] = 804,
  [SMALL_STATE(68)] = 814,
  [SMALL_STATE(69)] = 824,
  [SMALL_STATE(70)] = 834,
  [SMALL_STATE(71)] = 844,
  [SMALL_STATE(72)] = 854,
  [SMALL_STATE(73)] = 862,
  [SMALL_STATE(74)] = 872,
  [SMALL_STATE(75)] = 878,
  [SMALL_STATE(76)] = 888,
  [SMALL_STATE(77)] = 898,
  [SMALL_STATE(78)] = 908,
  [SMALL_STATE(79)] = 918,
  [SMALL_STATE(80)] = 928,
  [SMALL_STATE(81)] = 938,
  [SMALL_STATE(82)] = 948,
  [SMALL_STATE(83)] = 956,
  [SMALL_STATE(84)] = 964,
  [SMALL_STATE(85)] = 971,
  [SMALL_STATE(86)] = 976,
  [SMALL_STATE(87)] = 981,
  [SMALL_STATE(88)] = 986,
  [SMALL_STATE(89)] = 991,
  [SMALL_STATE(90)] = 998,
  [SMALL_STATE(91)] = 1003,
  [SMALL_STATE(92)] = 1010,
  [SMALL_STATE(93)] = 1017,
  [SMALL_STATE(94)] = 1022,
  [SMALL_STATE(95)] = 1027,
  [SMALL_STATE(96)] = 1032,
  [SMALL_STATE(97)] = 1039,
  [SMALL_STATE(98)] = 1044,
  [SMALL_STATE(99)] = 1051,
  [SMALL_STATE(100)] = 1058,
  [SMALL_STATE(101)] = 1065,
  [SMALL_STATE(102)] = 1069,
  [SMALL_STATE(103)] = 1073,
  [SMALL_STATE(104)] = 1077,
  [SMALL_STATE(105)] = 1081,
  [SMALL_STATE(106)] = 1085,
  [SMALL_STATE(107)] = 1089,
  [SMALL_STATE(108)] = 1093,
  [SMALL_STATE(109)] = 1097,
  [SMALL_STATE(110)] = 1101,
  [SMALL_STATE(111)] = 1105,
  [SMALL_STATE(112)] = 1109,
  [SMALL_STATE(113)] = 1113,
  [SMALL_STATE(114)] = 1117,
  [SMALL_STATE(115)] = 1121,
  [SMALL_STATE(116)] = 1125,
  [SMALL_STATE(117)] = 1129,
  [SMALL_STATE(118)] = 1133,
  [SMALL_STATE(119)] = 1137,
  [SMALL_STATE(120)] = 1141,
  [SMALL_STATE(121)] = 1145,
  [SMALL_STATE(122)] = 1149,
  [SMALL_STATE(123)] = 1153,
  [SMALL_STATE(124)] = 1157,
  [SMALL_STATE(125)] = 1161,
  [SMALL_STATE(126)] = 1165,
  [SMALL_STATE(127)] = 1169,
  [SMALL_STATE(128)] = 1173,
  [SMALL_STATE(129)] = 1177,
  [SMALL_STATE(130)] = 1181,
  [SMALL_STATE(131)] = 1185,
  [SMALL_STATE(132)] = 1189,
  [SMALL_STATE(133)] = 1193,
  [SMALL_STATE(134)] = 1197,
  [SMALL_STATE(135)] = 1201,
  [SMALL_STATE(136)] = 1205,
  [SMALL_STATE(137)] = 1209,
  [SMALL_STATE(138)] = 1213,
  [SMALL_STATE(139)] = 1217,
  [SMALL_STATE(140)] = 1221,
  [SMALL_STATE(141)] = 1225,
  [SMALL_STATE(142)] = 1229,
  [SMALL_STATE(143)] = 1233,
  [SMALL_STATE(144)] = 1237,
  [SMALL_STATE(145)] = 1241,
  [SMALL_STATE(146)] = 1245,
  [SMALL_STATE(147)] = 1249,
  [SMALL_STATE(148)] = 1253,
  [SMALL_STATE(149)] = 1257,
  [SMALL_STATE(150)] = 1261,
  [SMALL_STATE(151)] = 1265,
  [SMALL_STATE(152)] = 1269,
  [SMALL_STATE(153)] = 1273,
  [SMALL_STATE(154)] = 1277,
  [SMALL_STATE(155)] = 1281,
  [SMALL_STATE(156)] = 1285,
  [SMALL_STATE(157)] = 1289,
  [SMALL_STATE(158)] = 1293,
  [SMALL_STATE(159)] = 1297,
  [SMALL_STATE(160)] = 1301,
  [SMALL_STATE(161)] = 1305,
  [SMALL_STATE(162)] = 1309,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(158),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(100),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_indexes_definition_repeat1, 2, 0, 0),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_indexes_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_indexes_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_side, 3, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_name, 1, 0, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_definition_repeat1, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_definition_repeat1, 2, 0, 0),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 9, 0, 7),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 7, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_project_definition_repeat1, 2, 0, 0),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_project_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_long, 10, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 11, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 12, 0, 11),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 8, 0, 6),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 9, 0, 6),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_definition, 8, 0, 5),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 12, 0, 7),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 13, 0, 7),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_setting_default_repeat1, 2, 0, 0),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_setting_default_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 10, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_definition, 7, 0, 4),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 11, 0, 11),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_long, 12, 0, 7),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 3, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_settings, 3, 0, 0),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relationship_definition_short_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relationship_definition_short_repeat1, 2, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 4, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_settings, 4, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_property_definition, 5, 0, 10),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_settings_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_settings_repeat1, 2, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_definition_composite_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_definition_composite_repeat1, 2, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 4, 0, 8),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definition, 4, 0, 8),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 4, 0, 9),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definition, 4, 0, 9),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_inline, 4, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_setting_default, 5, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_action, 1, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_setting_default, 4, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 1, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_setting_definition, 4, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enquoted_identifier_multi, 2, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enquoted_identifier_multi, 3, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_event, 1, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indexes_definition, 5, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_definition, 1, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_definition_single, 1, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_property_key, 1, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_symbol, 1, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indexes_definition, 6, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_alias, 1, 0, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_definition_composite, 3, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_definition_composite, 4, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 1, 0, 1),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_name, 1, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [351] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
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
