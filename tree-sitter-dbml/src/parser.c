#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 155
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 79
#define ALIAS_COUNT 0
#define TOKEN_COUNT 44
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
  sym_indexes = 23,
  anon_sym_ref_COLON = 24,
  anon_sym_delete = 25,
  anon_sym_on_delete = 26,
  anon_sym_update = 27,
  anon_sym_on_update = 28,
  anon_sym_cascade = 29,
  anon_sym_restrict = 30,
  anon_sym_setnull = 31,
  anon_sym_setdefault = 32,
  anon_sym_noaction = 33,
  anon_sym_DASH = 34,
  anon_sym_LT = 35,
  anon_sym_GT = 36,
  anon_sym_LT_GT = 37,
  sym_Ref = 38,
  aux_sym_identifier_token1 = 39,
  sym__newline = 40,
  sym__space = 41,
  sym__dot = 42,
  anon_sym_DQUOTE = 43,
  sym_source_file = 44,
  sym__definition = 45,
  sym_project_definition = 46,
  sym_project_name = 47,
  sym_project_property_definition = 48,
  sym_project_property_key = 49,
  sym_table_definition = 50,
  sym_table_name = 51,
  sym_column_definition = 52,
  sym_column_settings = 53,
  sym_column_setting_default = 54,
  sym_column_constraint = 55,
  sym_table_alias = 56,
  sym_indexes_definition = 57,
  sym_index_definition = 58,
  sym_index_definition_single = 59,
  sym_relationship_definition_short = 60,
  sym_relationship_definition_inline = 61,
  sym_relationship_definition_long = 62,
  sym_relationship_definition_side = 63,
  sym_relationship_setting_definition = 64,
  sym_relationship_event = 65,
  sym_relationship_action = 66,
  sym_relationship_symbol = 67,
  sym_column_name = 68,
  sym_identifier = 69,
  sym_enquoted_identifier_multi = 70,
  sym__hidden_identifier = 71,
  aux_sym_source_file_repeat1 = 72,
  aux_sym_project_definition_repeat1 = 73,
  aux_sym_table_definition_repeat1 = 74,
  aux_sym_column_settings_repeat1 = 75,
  aux_sym_column_setting_default_repeat1 = 76,
  aux_sym_indexes_definition_repeat1 = 77,
  aux_sym_relationship_definition_short_repeat1 = 78,
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
  [67] = 59,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 59,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 78,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
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
  [127] = 6,
  [128] = 128,
  [129] = 7,
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
  [145] = 142,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 78,
  [150] = 150,
  [151] = 7,
  [152] = 6,
  [153] = 139,
  [154] = 139,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(129);
      ADVANCE_MAP(
        '"', 179,
        '\'', 142,
        ',', 138,
        '-', 164,
        '.', 178,
        '/', 8,
        ':', 133,
        '<', 165,
        '>', 166,
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
      if (lookahead == '\n') ADVANCE(176);
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
      if (lookahead == ' ') ADVANCE(177);
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
      if (lookahead == '`') ADVANCE(143);
      if (lookahead == '{') ADVANCE(131);
      if (lookahead == '}') ADVANCE(132);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(130);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(154);
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
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(158);
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
      if (lookahead == 'f') ADVANCE(168);
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
      if (lookahead == 'i') ADVANCE(172);
      if (lookahead == '}') ADVANCE(132);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(65);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
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
      if (lookahead == 'l') ADVANCE(161);
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
      if (lookahead == 'n') ADVANCE(163);
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
      if (lookahead == 's') ADVANCE(152);
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
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(162);
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
      ACCEPT_TOKEN(sym_indexes);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_indexes);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_ref_COLON);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_on_delete);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_update);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_on_update);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_cascade);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_restrict);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_setnull);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_setdefault);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_noaction);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '>') ADVANCE(167);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_Ref);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(170);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(174);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(173);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(169);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(153);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'x') ADVANCE(171);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == ' ') ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__dot);
      END_STATE();
    case 179:
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
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 65},
  [9] = {.lex_state = 65},
  [10] = {.lex_state = 65},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 7},
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
  [58] = {.lex_state = 65},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 65},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 7},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 65},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 7},
  [79] = {.lex_state = 65},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 7},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 128},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 4},
  [143] = {.lex_state = 4},
  [144] = {.lex_state = 4},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 4},
  [147] = {.lex_state = 4},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 4},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
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
    [sym_source_file] = STATE(148),
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
    STATE(82), 3,
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
    STATE(63), 2,
      sym_column_constraint,
      sym_relationship_definition_inline,
    ACTIONS(19), 6,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_increment,
  [84] = 1,
    ACTIONS(37), 8,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_Table,
      sym_Ref,
  [95] = 1,
    ACTIONS(39), 8,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_Table,
      sym_Ref,
  [106] = 6,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(43), 1,
      sym_indexes,
    ACTIONS(45), 1,
      aux_sym_identifier_token1,
    STATE(112), 1,
      sym_indexes_definition,
    STATE(122), 1,
      sym_identifier,
    STATE(10), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [126] = 6,
    ACTIONS(43), 1,
      sym_indexes,
    ACTIONS(45), 1,
      aux_sym_identifier_token1,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(103), 1,
      sym_indexes_definition,
    STATE(122), 1,
      sym_identifier,
    STATE(10), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [146] = 5,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    ACTIONS(51), 1,
      sym_indexes,
    ACTIONS(53), 1,
      aux_sym_identifier_token1,
    STATE(122), 1,
      sym_identifier,
    STATE(10), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [163] = 4,
    ACTIONS(56), 1,
      anon_sym_RBRACE,
    STATE(123), 1,
      sym_project_property_key,
    ACTIONS(58), 2,
      anon_sym_database_type,
      anon_sym_Note,
    STATE(11), 2,
      sym_project_property_definition,
      aux_sym_project_definition_repeat1,
  [178] = 6,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    ACTIONS(63), 1,
      aux_sym_identifier_token1,
    STATE(20), 1,
      aux_sym_indexes_definition_repeat1,
    STATE(117), 1,
      sym_index_definition,
    STATE(118), 1,
      sym_index_definition_single,
    STATE(119), 1,
      sym_identifier,
  [197] = 3,
    STATE(89), 1,
      sym_relationship_setting_definition,
    STATE(101), 1,
      sym_relationship_event,
    ACTIONS(65), 4,
      anon_sym_delete,
      anon_sym_on_delete,
      anon_sym_update,
      anon_sym_on_update,
  [210] = 2,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(67), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [221] = 4,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    STATE(123), 1,
      sym_project_property_key,
    ACTIONS(73), 2,
      anon_sym_database_type,
      anon_sym_Note,
    STATE(11), 2,
      sym_project_property_definition,
      aux_sym_project_definition_repeat1,
  [236] = 4,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    STATE(123), 1,
      sym_project_property_key,
    ACTIONS(73), 2,
      anon_sym_database_type,
      anon_sym_Note,
    STATE(15), 2,
      sym_project_property_definition,
      aux_sym_project_definition_repeat1,
  [251] = 3,
    STATE(66), 1,
      sym_relationship_setting_definition,
    STATE(101), 1,
      sym_relationship_event,
    ACTIONS(65), 4,
      anon_sym_delete,
      anon_sym_on_delete,
      anon_sym_update,
      anon_sym_on_update,
  [264] = 2,
    STATE(81), 1,
      sym_relationship_action,
    ACTIONS(77), 5,
      anon_sym_cascade,
      anon_sym_restrict,
      anon_sym_setnull,
      anon_sym_setdefault,
      anon_sym_noaction,
  [275] = 3,
    STATE(76), 1,
      sym_relationship_setting_definition,
    STATE(101), 1,
      sym_relationship_event,
    ACTIONS(65), 4,
      anon_sym_delete,
      anon_sym_on_delete,
      anon_sym_update,
      anon_sym_on_update,
  [288] = 6,
    ACTIONS(63), 1,
      aux_sym_identifier_token1,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      aux_sym_indexes_definition_repeat1,
    STATE(117), 1,
      sym_index_definition,
    STATE(118), 1,
      sym_index_definition_single,
    STATE(119), 1,
      sym_identifier,
  [307] = 2,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [318] = 6,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    ACTIONS(87), 1,
      aux_sym_identifier_token1,
    STATE(22), 1,
      aux_sym_indexes_definition_repeat1,
    STATE(117), 1,
      sym_index_definition,
    STATE(118), 1,
      sym_index_definition_single,
    STATE(119), 1,
      sym_identifier,
  [337] = 1,
    ACTIONS(90), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [345] = 1,
    ACTIONS(92), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [353] = 1,
    ACTIONS(94), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [361] = 1,
    ACTIONS(96), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [369] = 3,
    ACTIONS(100), 1,
      anon_sym_LT,
    STATE(43), 1,
      sym_relationship_symbol,
    ACTIONS(98), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [381] = 1,
    ACTIONS(102), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [389] = 3,
    ACTIONS(100), 1,
      anon_sym_LT,
    STATE(55), 1,
      sym_relationship_symbol,
    ACTIONS(98), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [401] = 3,
    ACTIONS(106), 1,
      aux_sym_identifier_token1,
    ACTIONS(104), 2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
    STATE(30), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [413] = 3,
    ACTIONS(100), 1,
      anon_sym_LT,
    STATE(45), 1,
      sym_relationship_symbol,
    ACTIONS(98), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [425] = 1,
    ACTIONS(109), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [433] = 3,
    ACTIONS(100), 1,
      anon_sym_LT,
    STATE(47), 1,
      sym_relationship_symbol,
    ACTIONS(98), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [445] = 1,
    ACTIONS(111), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [453] = 1,
    ACTIONS(113), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [461] = 1,
    ACTIONS(115), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [469] = 1,
    ACTIONS(117), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [477] = 1,
    ACTIONS(119), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [485] = 3,
    ACTIONS(100), 1,
      anon_sym_LT,
    STATE(54), 1,
      sym_relationship_symbol,
    ACTIONS(98), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [497] = 1,
    ACTIONS(121), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [505] = 4,
    ACTIONS(123), 1,
      aux_sym_identifier_token1,
    STATE(120), 1,
      sym_relationship_definition_side,
    STATE(139), 1,
      sym_table_name,
    STATE(145), 1,
      sym__hidden_identifier,
  [518] = 4,
    ACTIONS(123), 1,
      aux_sym_identifier_token1,
    STATE(132), 1,
      sym_relationship_definition_side,
    STATE(139), 1,
      sym_table_name,
    STATE(145), 1,
      sym__hidden_identifier,
  [531] = 4,
    ACTIONS(123), 1,
      aux_sym_identifier_token1,
    STATE(92), 1,
      sym_relationship_definition_side,
    STATE(145), 1,
      sym__hidden_identifier,
    STATE(153), 1,
      sym_table_name,
  [544] = 3,
    ACTIONS(125), 1,
      anon_sym_SQUOTE,
    ACTIONS(127), 1,
      aux_sym_identifier_token1,
    STATE(30), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [555] = 4,
    ACTIONS(123), 1,
      aux_sym_identifier_token1,
    STATE(21), 1,
      sym_relationship_definition_side,
    STATE(145), 1,
      sym__hidden_identifier,
    STATE(153), 1,
      sym_table_name,
  [568] = 3,
    ACTIONS(127), 1,
      aux_sym_identifier_token1,
    ACTIONS(129), 1,
      anon_sym_SQUOTE,
    STATE(44), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [579] = 4,
    ACTIONS(123), 1,
      aux_sym_identifier_token1,
    STATE(102), 1,
      sym_relationship_definition_side,
    STATE(145), 1,
      sym__hidden_identifier,
    STATE(154), 1,
      sym_table_name,
  [592] = 3,
    ACTIONS(127), 1,
      aux_sym_identifier_token1,
    ACTIONS(131), 1,
      anon_sym_BQUOTE,
    STATE(30), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [603] = 3,
    ACTIONS(127), 1,
      aux_sym_identifier_token1,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    STATE(30), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [614] = 3,
    ACTIONS(133), 1,
      aux_sym_identifier_token1,
    STATE(122), 1,
      sym_identifier,
    STATE(8), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [625] = 3,
    ACTIONS(133), 1,
      aux_sym_identifier_token1,
    STATE(122), 1,
      sym_identifier,
    STATE(9), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [636] = 4,
    ACTIONS(123), 1,
      aux_sym_identifier_token1,
    STATE(125), 1,
      sym_relationship_definition_side,
    STATE(139), 1,
      sym_table_name,
    STATE(145), 1,
      sym__hidden_identifier,
  [649] = 4,
    ACTIONS(123), 1,
      aux_sym_identifier_token1,
    STATE(138), 1,
      sym_relationship_definition_side,
    STATE(139), 1,
      sym_table_name,
    STATE(145), 1,
      sym__hidden_identifier,
  [662] = 4,
    ACTIONS(123), 1,
      aux_sym_identifier_token1,
    STATE(108), 1,
      sym_relationship_definition_side,
    STATE(145), 1,
      sym__hidden_identifier,
    STATE(154), 1,
      sym_table_name,
  [675] = 4,
    ACTIONS(123), 1,
      aux_sym_identifier_token1,
    STATE(14), 1,
      sym_relationship_definition_side,
    STATE(145), 1,
      sym__hidden_identifier,
    STATE(153), 1,
      sym_table_name,
  [688] = 3,
    ACTIONS(127), 1,
      aux_sym_identifier_token1,
    ACTIONS(135), 1,
      anon_sym_BQUOTE,
    STATE(48), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [699] = 3,
    ACTIONS(127), 1,
      aux_sym_identifier_token1,
    ACTIONS(135), 1,
      anon_sym_SQUOTE,
    STATE(49), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [710] = 2,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
    ACTIONS(139), 2,
      sym_indexes,
      aux_sym_identifier_token1,
  [718] = 3,
    ACTIONS(141), 1,
      aux_sym_identifier_token1,
    STATE(151), 1,
      sym_column_name,
    STATE(152), 1,
      sym__hidden_identifier,
  [728] = 2,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    ACTIONS(145), 2,
      sym_indexes,
      aux_sym_identifier_token1,
  [736] = 3,
    ACTIONS(147), 1,
      aux_sym_identifier_token1,
    STATE(95), 1,
      sym__hidden_identifier,
    STATE(130), 1,
      sym_table_alias,
  [746] = 3,
    ACTIONS(133), 1,
      aux_sym_identifier_token1,
    STATE(144), 1,
      sym_identifier,
    STATE(146), 1,
      sym_project_name,
  [756] = 3,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(151), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      aux_sym_column_settings_repeat1,
  [766] = 1,
    ACTIONS(153), 3,
      anon_sym_RBRACE,
      anon_sym_database_type,
      anon_sym_Note,
  [772] = 3,
    ACTIONS(155), 1,
      aux_sym_identifier_token1,
    STATE(142), 1,
      sym__hidden_identifier,
    STATE(143), 1,
      sym_table_name,
  [782] = 3,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    ACTIONS(159), 1,
      anon_sym_RBRACK,
    STATE(68), 1,
      aux_sym_relationship_definition_short_repeat1,
  [792] = 3,
    ACTIONS(161), 1,
      aux_sym_identifier_token1,
    STATE(6), 1,
      sym__hidden_identifier,
    STATE(7), 1,
      sym_column_name,
  [802] = 3,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    ACTIONS(163), 1,
      anon_sym_RBRACK,
    STATE(72), 1,
      aux_sym_relationship_definition_short_repeat1,
  [812] = 3,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    ACTIONS(165), 1,
      anon_sym_RBRACK,
    STATE(72), 1,
      aux_sym_relationship_definition_short_repeat1,
  [822] = 3,
    ACTIONS(133), 1,
      aux_sym_identifier_token1,
    ACTIONS(167), 1,
      anon_sym_LBRACE,
    STATE(87), 1,
      sym_identifier,
  [832] = 3,
    ACTIONS(169), 1,
      anon_sym_LBRACK,
    ACTIONS(171), 1,
      sym__newline,
    STATE(58), 1,
      sym_column_settings,
  [842] = 3,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(176), 1,
      anon_sym_RBRACK,
    STATE(72), 1,
      aux_sym_relationship_definition_short_repeat1,
  [852] = 3,
    ACTIONS(178), 1,
      aux_sym_identifier_token1,
    STATE(127), 1,
      sym__hidden_identifier,
    STATE(129), 1,
      sym_column_name,
  [862] = 3,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    ACTIONS(183), 1,
      anon_sym_RBRACK,
    STATE(74), 1,
      aux_sym_column_settings_repeat1,
  [872] = 2,
    ACTIONS(185), 1,
      anon_sym_RBRACE,
    ACTIONS(187), 2,
      sym_indexes,
      aux_sym_identifier_token1,
  [880] = 3,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    ACTIONS(189), 1,
      anon_sym_RBRACK,
    STATE(69), 1,
      aux_sym_relationship_definition_short_repeat1,
  [890] = 3,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(191), 1,
      anon_sym_RBRACK,
    STATE(74), 1,
      aux_sym_column_settings_repeat1,
  [900] = 1,
    ACTIONS(193), 3,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      aux_sym_identifier_token1,
  [906] = 2,
    ACTIONS(195), 1,
      anon_sym_RBRACE,
    ACTIONS(197), 2,
      sym_indexes,
      aux_sym_identifier_token1,
  [914] = 1,
    ACTIONS(199), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [919] = 1,
    ACTIONS(201), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [924] = 1,
    ACTIONS(183), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [929] = 1,
    ACTIONS(203), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [934] = 2,
    ACTIONS(193), 1,
      sym__space,
    ACTIONS(205), 1,
      anon_sym_COLON,
  [941] = 2,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    STATE(96), 1,
      sym_enquoted_identifier_multi,
  [948] = 1,
    ACTIONS(209), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [953] = 2,
    ACTIONS(211), 1,
      anon_sym_COLON,
    ACTIONS(213), 1,
      sym__space,
  [960] = 2,
    ACTIONS(215), 1,
      anon_sym_LBRACE,
    ACTIONS(217), 1,
      sym_as,
  [967] = 1,
    ACTIONS(176), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [972] = 2,
    ACTIONS(219), 1,
      anon_sym_SQUOTE,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
  [979] = 1,
    ACTIONS(223), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [984] = 1,
    ACTIONS(225), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [989] = 1,
    ACTIONS(85), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
  [994] = 2,
    ACTIONS(227), 1,
      anon_sym_COLON,
    ACTIONS(229), 1,
      sym__space,
  [1001] = 1,
    ACTIONS(231), 1,
      sym__space,
  [1005] = 1,
    ACTIONS(233), 1,
      sym__newline,
  [1009] = 1,
    ACTIONS(235), 1,
      sym__newline,
  [1013] = 1,
    ACTIONS(237), 1,
      sym__space,
  [1017] = 1,
    ACTIONS(239), 1,
      sym__space,
  [1021] = 1,
    ACTIONS(241), 1,
      anon_sym_RBRACE,
  [1025] = 1,
    ACTIONS(243), 1,
      anon_sym_COLON,
  [1029] = 1,
    ACTIONS(245), 1,
      sym__newline,
  [1033] = 1,
    ACTIONS(247), 1,
      anon_sym_RBRACE,
  [1037] = 1,
    ACTIONS(249), 1,
      sym__newline,
  [1041] = 1,
    ACTIONS(251), 1,
      sym__space,
  [1045] = 1,
    ACTIONS(253), 1,
      anon_sym_COLON,
  [1049] = 1,
    ACTIONS(255), 1,
      anon_sym_LBRACE,
  [1053] = 1,
    ACTIONS(257), 1,
      sym__newline,
  [1057] = 1,
    ACTIONS(259), 1,
      anon_sym_RBRACE,
  [1061] = 1,
    ACTIONS(261), 1,
      sym__newline,
  [1065] = 1,
    ACTIONS(263), 1,
      sym__newline,
  [1069] = 1,
    ACTIONS(265), 1,
      anon_sym_RBRACE,
  [1073] = 1,
    ACTIONS(267), 1,
      sym__space,
  [1077] = 1,
    ACTIONS(269), 1,
      sym_column_type,
  [1081] = 1,
    ACTIONS(271), 1,
      sym__space,
  [1085] = 1,
    ACTIONS(273), 1,
      anon_sym_RBRACE,
  [1089] = 1,
    ACTIONS(275), 1,
      sym__newline,
  [1093] = 1,
    ACTIONS(277), 1,
      sym__newline,
  [1097] = 1,
    ACTIONS(279), 1,
      sym__newline,
  [1101] = 1,
    ACTIONS(281), 1,
      sym__space,
  [1105] = 1,
    ACTIONS(283), 1,
      anon_sym_LBRACE,
  [1109] = 1,
    ACTIONS(285), 1,
      sym__space,
  [1113] = 1,
    ACTIONS(287), 1,
      anon_sym_COLON,
  [1117] = 1,
    ACTIONS(289), 1,
      anon_sym_COLON,
  [1121] = 1,
    ACTIONS(291), 1,
      sym__space,
  [1125] = 1,
    ACTIONS(293), 1,
      aux_sym_identifier_token1,
  [1129] = 1,
    ACTIONS(37), 1,
      sym__space,
  [1133] = 1,
    ACTIONS(295), 1,
      anon_sym_COLON,
  [1137] = 1,
    ACTIONS(39), 1,
      sym__space,
  [1141] = 1,
    ACTIONS(297), 1,
      sym__space,
  [1145] = 1,
    ACTIONS(299), 1,
      sym__newline,
  [1149] = 1,
    ACTIONS(301), 1,
      sym__space,
  [1153] = 1,
    ACTIONS(303), 1,
      anon_sym_RBRACE,
  [1157] = 1,
    ACTIONS(305), 1,
      sym__newline,
  [1161] = 1,
    ACTIONS(307), 1,
      sym__newline,
  [1165] = 1,
    ACTIONS(309), 1,
      anon_sym_LBRACE,
  [1169] = 1,
    ACTIONS(311), 1,
      sym__space,
  [1173] = 1,
    ACTIONS(313), 1,
      sym__space,
  [1177] = 1,
    ACTIONS(315), 1,
      sym__dot,
  [1181] = 1,
    ACTIONS(317), 1,
      anon_sym_LBRACE,
  [1185] = 1,
    ACTIONS(319), 1,
      sym__newline,
  [1189] = 1,
    ACTIONS(321), 1,
      sym__space,
  [1193] = 1,
    ACTIONS(323), 1,
      sym__space,
  [1197] = 1,
    ACTIONS(325), 1,
      sym__space,
  [1201] = 1,
    ACTIONS(321), 1,
      sym__dot,
  [1205] = 1,
    ACTIONS(327), 1,
      sym__space,
  [1209] = 1,
    ACTIONS(329), 1,
      sym__space,
  [1213] = 1,
    ACTIONS(331), 1,
      ts_builtin_sym_end,
  [1217] = 1,
    ACTIONS(193), 1,
      sym__newline,
  [1221] = 1,
    ACTIONS(333), 1,
      sym__space,
  [1225] = 1,
    ACTIONS(39), 1,
      sym__newline,
  [1229] = 1,
    ACTIONS(37), 1,
      sym__newline,
  [1233] = 1,
    ACTIONS(335), 1,
      sym__dot,
  [1237] = 1,
    ACTIONS(337), 1,
      sym__dot,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 24,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 68,
  [SMALL_STATE(6)] = 84,
  [SMALL_STATE(7)] = 95,
  [SMALL_STATE(8)] = 106,
  [SMALL_STATE(9)] = 126,
  [SMALL_STATE(10)] = 146,
  [SMALL_STATE(11)] = 163,
  [SMALL_STATE(12)] = 178,
  [SMALL_STATE(13)] = 197,
  [SMALL_STATE(14)] = 210,
  [SMALL_STATE(15)] = 221,
  [SMALL_STATE(16)] = 236,
  [SMALL_STATE(17)] = 251,
  [SMALL_STATE(18)] = 264,
  [SMALL_STATE(19)] = 275,
  [SMALL_STATE(20)] = 288,
  [SMALL_STATE(21)] = 307,
  [SMALL_STATE(22)] = 318,
  [SMALL_STATE(23)] = 337,
  [SMALL_STATE(24)] = 345,
  [SMALL_STATE(25)] = 353,
  [SMALL_STATE(26)] = 361,
  [SMALL_STATE(27)] = 369,
  [SMALL_STATE(28)] = 381,
  [SMALL_STATE(29)] = 389,
  [SMALL_STATE(30)] = 401,
  [SMALL_STATE(31)] = 413,
  [SMALL_STATE(32)] = 425,
  [SMALL_STATE(33)] = 433,
  [SMALL_STATE(34)] = 445,
  [SMALL_STATE(35)] = 453,
  [SMALL_STATE(36)] = 461,
  [SMALL_STATE(37)] = 469,
  [SMALL_STATE(38)] = 477,
  [SMALL_STATE(39)] = 485,
  [SMALL_STATE(40)] = 497,
  [SMALL_STATE(41)] = 505,
  [SMALL_STATE(42)] = 518,
  [SMALL_STATE(43)] = 531,
  [SMALL_STATE(44)] = 544,
  [SMALL_STATE(45)] = 555,
  [SMALL_STATE(46)] = 568,
  [SMALL_STATE(47)] = 579,
  [SMALL_STATE(48)] = 592,
  [SMALL_STATE(49)] = 603,
  [SMALL_STATE(50)] = 614,
  [SMALL_STATE(51)] = 625,
  [SMALL_STATE(52)] = 636,
  [SMALL_STATE(53)] = 649,
  [SMALL_STATE(54)] = 662,
  [SMALL_STATE(55)] = 675,
  [SMALL_STATE(56)] = 688,
  [SMALL_STATE(57)] = 699,
  [SMALL_STATE(58)] = 710,
  [SMALL_STATE(59)] = 718,
  [SMALL_STATE(60)] = 728,
  [SMALL_STATE(61)] = 736,
  [SMALL_STATE(62)] = 746,
  [SMALL_STATE(63)] = 756,
  [SMALL_STATE(64)] = 766,
  [SMALL_STATE(65)] = 772,
  [SMALL_STATE(66)] = 782,
  [SMALL_STATE(67)] = 792,
  [SMALL_STATE(68)] = 802,
  [SMALL_STATE(69)] = 812,
  [SMALL_STATE(70)] = 822,
  [SMALL_STATE(71)] = 832,
  [SMALL_STATE(72)] = 842,
  [SMALL_STATE(73)] = 852,
  [SMALL_STATE(74)] = 862,
  [SMALL_STATE(75)] = 872,
  [SMALL_STATE(76)] = 880,
  [SMALL_STATE(77)] = 890,
  [SMALL_STATE(78)] = 900,
  [SMALL_STATE(79)] = 906,
  [SMALL_STATE(80)] = 914,
  [SMALL_STATE(81)] = 919,
  [SMALL_STATE(82)] = 924,
  [SMALL_STATE(83)] = 929,
  [SMALL_STATE(84)] = 934,
  [SMALL_STATE(85)] = 941,
  [SMALL_STATE(86)] = 948,
  [SMALL_STATE(87)] = 953,
  [SMALL_STATE(88)] = 960,
  [SMALL_STATE(89)] = 967,
  [SMALL_STATE(90)] = 972,
  [SMALL_STATE(91)] = 979,
  [SMALL_STATE(92)] = 984,
  [SMALL_STATE(93)] = 989,
  [SMALL_STATE(94)] = 994,
  [SMALL_STATE(95)] = 1001,
  [SMALL_STATE(96)] = 1005,
  [SMALL_STATE(97)] = 1009,
  [SMALL_STATE(98)] = 1013,
  [SMALL_STATE(99)] = 1017,
  [SMALL_STATE(100)] = 1021,
  [SMALL_STATE(101)] = 1025,
  [SMALL_STATE(102)] = 1029,
  [SMALL_STATE(103)] = 1033,
  [SMALL_STATE(104)] = 1037,
  [SMALL_STATE(105)] = 1041,
  [SMALL_STATE(106)] = 1045,
  [SMALL_STATE(107)] = 1049,
  [SMALL_STATE(108)] = 1053,
  [SMALL_STATE(109)] = 1057,
  [SMALL_STATE(110)] = 1061,
  [SMALL_STATE(111)] = 1065,
  [SMALL_STATE(112)] = 1069,
  [SMALL_STATE(113)] = 1073,
  [SMALL_STATE(114)] = 1077,
  [SMALL_STATE(115)] = 1081,
  [SMALL_STATE(116)] = 1085,
  [SMALL_STATE(117)] = 1089,
  [SMALL_STATE(118)] = 1093,
  [SMALL_STATE(119)] = 1097,
  [SMALL_STATE(120)] = 1101,
  [SMALL_STATE(121)] = 1105,
  [SMALL_STATE(122)] = 1109,
  [SMALL_STATE(123)] = 1113,
  [SMALL_STATE(124)] = 1117,
  [SMALL_STATE(125)] = 1121,
  [SMALL_STATE(126)] = 1125,
  [SMALL_STATE(127)] = 1129,
  [SMALL_STATE(128)] = 1133,
  [SMALL_STATE(129)] = 1137,
  [SMALL_STATE(130)] = 1141,
  [SMALL_STATE(131)] = 1145,
  [SMALL_STATE(132)] = 1149,
  [SMALL_STATE(133)] = 1153,
  [SMALL_STATE(134)] = 1157,
  [SMALL_STATE(135)] = 1161,
  [SMALL_STATE(136)] = 1165,
  [SMALL_STATE(137)] = 1169,
  [SMALL_STATE(138)] = 1173,
  [SMALL_STATE(139)] = 1177,
  [SMALL_STATE(140)] = 1181,
  [SMALL_STATE(141)] = 1185,
  [SMALL_STATE(142)] = 1189,
  [SMALL_STATE(143)] = 1193,
  [SMALL_STATE(144)] = 1197,
  [SMALL_STATE(145)] = 1201,
  [SMALL_STATE(146)] = 1205,
  [SMALL_STATE(147)] = 1209,
  [SMALL_STATE(148)] = 1213,
  [SMALL_STATE(149)] = 1217,
  [SMALL_STATE(150)] = 1221,
  [SMALL_STATE(151)] = 1225,
  [SMALL_STATE(152)] = 1229,
  [SMALL_STATE(153)] = 1233,
  [SMALL_STATE(154)] = 1237,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_name, 1, 0, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_side, 3, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_definition_repeat1, 2, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_definition_repeat1, 2, 0, 0),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_project_definition_repeat1, 2, 0, 0),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_project_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 9, 0, 7),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 7, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_indexes_definition_repeat1, 2, 0, 0),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_indexes_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(149),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 8, 0, 6),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 11, 0, 11),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_long, 10, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 13, 0, 7),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_definition, 8, 0, 5),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_setting_default_repeat1, 2, 0, 0),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_setting_default_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 12, 0, 7),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 12, 0, 11),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 9, 0, 6),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 11, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_definition, 7, 0, 4),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 10, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_long, 12, 0, 7),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 4, 0, 9),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definition, 4, 0, 9),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 3, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_settings, 3, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_property_definition, 5, 0, 10),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relationship_definition_short_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relationship_definition_short_repeat1, 2, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_settings_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_settings_repeat1, 2, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 4, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_settings, 4, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 4, 0, 8),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definition, 4, 0, 8),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_setting_default, 5, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_setting_definition, 4, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_action, 1, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_setting_default, 4, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 1, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_inline, 4, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_alias, 1, 0, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enquoted_identifier_multi, 2, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_event, 1, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enquoted_identifier_multi, 3, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indexes_definition, 5, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_definition, 1, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_definition_single, 1, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_property_key, 1, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_symbol, 1, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indexes_definition, 6, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 1, 0, 1),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_name, 1, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [331] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
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
