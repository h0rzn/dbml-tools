#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 140
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 74
#define ALIAS_COUNT 0
#define TOKEN_COUNT 43
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 13
#define PRODUCTION_ID_COUNT 14

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
  anon_sym_ref_COLON = 23,
  anon_sym_delete = 24,
  anon_sym_on_delete = 25,
  anon_sym_update = 26,
  anon_sym_on_update = 27,
  anon_sym_cascade = 28,
  anon_sym_restrict = 29,
  anon_sym_setnull = 30,
  anon_sym_setdefault = 31,
  anon_sym_noaction = 32,
  anon_sym_DASH = 33,
  anon_sym_LT = 34,
  anon_sym_GT = 35,
  anon_sym_LT_GT = 36,
  sym_Ref = 37,
  aux_sym_identifier_token1 = 38,
  sym__newline = 39,
  sym__space = 40,
  sym__dot = 41,
  anon_sym_DQUOTE = 42,
  sym_source_file = 43,
  sym__definition = 44,
  sym_project_definition = 45,
  sym_project_name = 46,
  sym_project_property_definition = 47,
  sym_project_property_key = 48,
  sym_table_definition = 49,
  sym_table_name = 50,
  sym_column_definition = 51,
  sym_column_settings = 52,
  sym_column_setting_default = 53,
  sym_column_constraint = 54,
  sym_table_alias = 55,
  sym_relationship_definition_short = 56,
  sym_relationship_definition_inline = 57,
  sym_relationship_definition_long = 58,
  sym_relationship_definition_side = 59,
  sym_relationship_setting_definition = 60,
  sym_relationship_event = 61,
  sym_relationship_action = 62,
  sym_relationship_symbol = 63,
  sym_column_name = 64,
  sym_identifier = 65,
  sym_enquoted_identifier_multi = 66,
  sym__hidden_identifier = 67,
  aux_sym_source_file_repeat1 = 68,
  aux_sym_project_definition_repeat1 = 69,
  aux_sym_table_definition_repeat1 = 70,
  aux_sym_column_settings_repeat1 = 71,
  aux_sym_column_setting_default_repeat1 = 72,
  aux_sym_relationship_definition_short_repeat1 = 73,
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
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 2},
  [7] = {.index = 7, .length = 2},
  [8] = {.index = 9, .length = 1},
  [9] = {.index = 10, .length = 2},
  [10] = {.index = 12, .length = 3},
  [11] = {.index = 15, .length = 2},
  [12] = {.index = 17, .length = 2},
  [13] = {.index = 19, .length = 3},
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
    {field_table_name, 2},
  [5] =
    {field_project_name, 2},
    {field_project_property, 6},
  [7] =
    {field_column, 6},
    {field_table_name, 2},
  [9] =
    {field_relationship_name, 2},
  [10] =
    {field_col_name, 0},
    {field_col_type, 2},
  [12] =
    {field_col_name, 0},
    {field_col_settings, 3},
    {field_col_type, 2},
  [15] =
    {field_table_alias_name, 5},
    {field_table_name, 2},
  [17] =
    {field_project_property_key, 0},
    {field_project_property_value, 3},
  [19] =
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
  [58] = 57,
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
  [71] = 57,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 59,
  [82] = 82,
  [83] = 83,
  [84] = 84,
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
  [109] = 7,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 6,
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
  [131] = 107,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 7,
  [137] = 6,
  [138] = 98,
  [139] = 98,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(124);
      ADVANCE_MAP(
        '"', 166,
        '\'', 137,
        ',', 133,
        '-', 157,
        '.', 165,
        '/', 8,
        ':', 128,
        '<', 158,
        '>', 159,
        'N', 86,
        'P', 94,
        'R', 36,
        'T', 12,
        '[', 132,
        ']', 134,
        '`', 138,
        'a', 97,
        'c', 14,
        'd', 15,
        'i', 80,
        'n', 87,
        'o', 81,
        'p', 66,
        'r', 37,
        's', 50,
        'u', 83,
        '{', 126,
        '}', 127,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '[') ADVANCE(132);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(34);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(67);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(164);
      if (lookahead == ':') ADVANCE(128);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(84);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(137);
      if (lookahead == '`') ADVANCE(138);
      if (lookahead == '{') ADVANCE(126);
      if (lookahead == '}') ADVANCE(127);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(125);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(147);
      END_STATE();
    case 10:
      if (lookahead == '_') ADVANCE(32);
      END_STATE();
    case 11:
      if (lookahead == '_') ADVANCE(106);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(114);
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 24:
      if (lookahead == 'b') ADVANCE(74);
      END_STATE();
    case 25:
      if (lookahead == 'b') ADVANCE(18);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(96);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(109);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(17);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(100);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(102);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(21);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(54);
      if (lookahead == 'u') ADVANCE(91);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(43);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(47);
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(22);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 57:
      if (lookahead == 'f') ADVANCE(161);
      END_STATE();
    case 58:
      if (lookahead == 'f') ADVANCE(9);
      if (lookahead == 's') ADVANCE(107);
      END_STATE();
    case 59:
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 60:
      if (lookahead == 'f') ADVANCE(23);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 65:
      if (lookahead == 'j') ADVANCE(55);
      END_STATE();
    case 66:
      if (lookahead == 'k') ADVANCE(140);
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 67:
      if (lookahead == 'k') ADVANCE(51);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(154);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 78:
      if (lookahead == 'm') ADVANCE(20);
      END_STATE();
    case 79:
      if (lookahead == 'm') ADVANCE(52);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(156);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(6);
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 90:
      if (lookahead == 'p') ADVANCE(46);
      END_STATE();
    case 91:
      if (lookahead == 'p') ADVANCE(35);
      END_STATE();
    case 92:
      if (lookahead == 'q') ADVANCE(116);
      END_STATE();
    case 93:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 97:
      if (lookahead == 's') ADVANCE(146);
      END_STATE();
    case 98:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 99:
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(2);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 115:
      if (lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 116:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 117:
      if (lookahead == 'u') ADVANCE(72);
      END_STATE();
    case 118:
      if (lookahead == 'u') ADVANCE(76);
      END_STATE();
    case 119:
      if (lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 120:
      if (lookahead == 'y') ADVANCE(139);
      END_STATE();
    case 121:
      if (lookahead == 'y') ADVANCE(90);
      END_STATE();
    case 122:
      if (lookahead == 'y') ADVANCE(3);
      END_STATE();
    case 123:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(123);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_database_type);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_Note);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_Project);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_column_type);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_primarykey);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_pk);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_notnull);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_unique);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_increment);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_Table);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_as);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_ref_COLON);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_on_delete);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_update);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_on_update);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_cascade);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_restrict);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_setnull);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_setdefault);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_noaction);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '>') ADVANCE(160);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_Ref);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == ' ') ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__dot);
      END_STATE();
    case 166:
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
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 7},
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
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 7},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 7},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 7},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 7},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 123},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
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
    [sym_source_file] = STATE(128),
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
    STATE(3), 6,
      sym__definition,
      sym_project_definition,
      sym_table_definition,
      sym_relationship_definition_short,
      sym_relationship_definition_long,
      aux_sym_source_file_repeat1,
  [24] = 6,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(22), 1,
      sym_Project,
    ACTIONS(25), 1,
      sym_Table,
    ACTIONS(28), 1,
      sym_Ref,
    STATE(3), 6,
      sym__definition,
      sym_project_definition,
      sym_table_definition,
      sym_relationship_definition_short,
      sym_relationship_definition_long,
      aux_sym_source_file_repeat1,
  [48] = 4,
    ACTIONS(31), 1,
      anon_sym_default,
    ACTIONS(35), 1,
      anon_sym_ref_COLON,
    STATE(73), 3,
      sym_column_setting_default,
      sym_column_constraint,
      sym_relationship_definition_inline,
    ACTIONS(33), 6,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_increment,
  [68] = 3,
    ACTIONS(35), 1,
      anon_sym_ref_COLON,
    STATE(68), 2,
      sym_column_constraint,
      sym_relationship_definition_inline,
    ACTIONS(33), 6,
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
  [106] = 3,
    STATE(66), 1,
      sym_relationship_setting_definition,
    STATE(126), 1,
      sym_relationship_event,
    ACTIONS(41), 4,
      anon_sym_delete,
      anon_sym_on_delete,
      anon_sym_update,
      anon_sym_on_update,
  [119] = 2,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [130] = 3,
    STATE(56), 1,
      sym_relationship_setting_definition,
    STATE(126), 1,
      sym_relationship_event,
    ACTIONS(41), 4,
      anon_sym_delete,
      anon_sym_on_delete,
      anon_sym_update,
      anon_sym_on_update,
  [143] = 4,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(130), 1,
      sym_project_property_key,
    ACTIONS(49), 2,
      anon_sym_database_type,
      anon_sym_Note,
    STATE(12), 2,
      sym_project_property_definition,
      aux_sym_project_definition_repeat1,
  [158] = 4,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(130), 1,
      sym_project_property_key,
    ACTIONS(53), 2,
      anon_sym_database_type,
      anon_sym_Note,
    STATE(12), 2,
      sym_project_property_definition,
      aux_sym_project_definition_repeat1,
  [173] = 4,
    ACTIONS(56), 1,
      anon_sym_RBRACE,
    STATE(130), 1,
      sym_project_property_key,
    ACTIONS(49), 2,
      anon_sym_database_type,
      anon_sym_Note,
    STATE(11), 2,
      sym_project_property_definition,
      aux_sym_project_definition_repeat1,
  [188] = 2,
    ACTIONS(60), 1,
      anon_sym_LBRACK,
    ACTIONS(58), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [199] = 2,
    STATE(82), 1,
      sym_relationship_action,
    ACTIONS(62), 5,
      anon_sym_cascade,
      anon_sym_restrict,
      anon_sym_setnull,
      anon_sym_setdefault,
      anon_sym_noaction,
  [210] = 3,
    STATE(87), 1,
      sym_relationship_setting_definition,
    STATE(126), 1,
      sym_relationship_event,
    ACTIONS(41), 4,
      anon_sym_delete,
      anon_sym_on_delete,
      anon_sym_update,
      anon_sym_on_update,
  [223] = 1,
    ACTIONS(64), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [231] = 4,
    ACTIONS(66), 1,
      anon_sym_RBRACE,
    ACTIONS(68), 1,
      aux_sym_identifier_token1,
    STATE(127), 1,
      sym_identifier,
    STATE(23), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [245] = 3,
    ACTIONS(72), 1,
      aux_sym_identifier_token1,
    ACTIONS(70), 2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
    STATE(19), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [257] = 1,
    ACTIONS(75), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [265] = 1,
    ACTIONS(77), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [273] = 1,
    ACTIONS(79), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [281] = 4,
    ACTIONS(68), 1,
      aux_sym_identifier_token1,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    STATE(127), 1,
      sym_identifier,
    STATE(33), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [295] = 1,
    ACTIONS(83), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [303] = 1,
    ACTIONS(85), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [311] = 1,
    ACTIONS(87), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [319] = 4,
    ACTIONS(68), 1,
      aux_sym_identifier_token1,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    STATE(127), 1,
      sym_identifier,
    STATE(33), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [333] = 1,
    ACTIONS(91), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [341] = 1,
    ACTIONS(93), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
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
    STATE(42), 1,
      sym_relationship_symbol,
    ACTIONS(97), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [369] = 3,
    ACTIONS(99), 1,
      anon_sym_LT,
    STATE(48), 1,
      sym_relationship_symbol,
    ACTIONS(97), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [381] = 4,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    ACTIONS(103), 1,
      aux_sym_identifier_token1,
    STATE(127), 1,
      sym_identifier,
    STATE(33), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [395] = 1,
    ACTIONS(106), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [403] = 1,
    ACTIONS(108), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [411] = 3,
    ACTIONS(99), 1,
      anon_sym_LT,
    STATE(40), 1,
      sym_relationship_symbol,
    ACTIONS(97), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [423] = 4,
    ACTIONS(68), 1,
      aux_sym_identifier_token1,
    ACTIONS(110), 1,
      anon_sym_RBRACE,
    STATE(127), 1,
      sym_identifier,
    STATE(27), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [437] = 3,
    ACTIONS(99), 1,
      anon_sym_LT,
    STATE(44), 1,
      sym_relationship_symbol,
    ACTIONS(97), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [449] = 3,
    ACTIONS(99), 1,
      anon_sym_LT,
    STATE(43), 1,
      sym_relationship_symbol,
    ACTIONS(97), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [461] = 4,
    ACTIONS(112), 1,
      aux_sym_identifier_token1,
    STATE(79), 1,
      sym_relationship_definition_side,
    STATE(131), 1,
      sym__hidden_identifier,
    STATE(138), 1,
      sym_table_name,
  [474] = 4,
    ACTIONS(112), 1,
      aux_sym_identifier_token1,
    STATE(98), 1,
      sym_table_name,
    STATE(131), 1,
      sym__hidden_identifier,
    STATE(135), 1,
      sym_relationship_definition_side,
  [487] = 4,
    ACTIONS(112), 1,
      aux_sym_identifier_token1,
    STATE(9), 1,
      sym_relationship_definition_side,
    STATE(131), 1,
      sym__hidden_identifier,
    STATE(138), 1,
      sym_table_name,
  [500] = 4,
    ACTIONS(112), 1,
      aux_sym_identifier_token1,
    STATE(96), 1,
      sym_relationship_definition_side,
    STATE(131), 1,
      sym__hidden_identifier,
    STATE(139), 1,
      sym_table_name,
  [513] = 4,
    ACTIONS(112), 1,
      aux_sym_identifier_token1,
    STATE(14), 1,
      sym_relationship_definition_side,
    STATE(131), 1,
      sym__hidden_identifier,
    STATE(138), 1,
      sym_table_name,
  [526] = 4,
    ACTIONS(112), 1,
      aux_sym_identifier_token1,
    STATE(98), 1,
      sym_table_name,
    STATE(121), 1,
      sym_relationship_definition_side,
    STATE(131), 1,
      sym__hidden_identifier,
  [539] = 3,
    ACTIONS(114), 1,
      anon_sym_SQUOTE,
    ACTIONS(116), 1,
      aux_sym_identifier_token1,
    STATE(52), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [550] = 3,
    ACTIONS(116), 1,
      aux_sym_identifier_token1,
    ACTIONS(118), 1,
      anon_sym_BQUOTE,
    STATE(19), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [561] = 4,
    ACTIONS(112), 1,
      aux_sym_identifier_token1,
    STATE(103), 1,
      sym_relationship_definition_side,
    STATE(131), 1,
      sym__hidden_identifier,
    STATE(139), 1,
      sym_table_name,
  [574] = 3,
    ACTIONS(116), 1,
      aux_sym_identifier_token1,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(54), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [585] = 4,
    ACTIONS(112), 1,
      aux_sym_identifier_token1,
    STATE(92), 1,
      sym_relationship_definition_side,
    STATE(98), 1,
      sym_table_name,
    STATE(131), 1,
      sym__hidden_identifier,
  [598] = 3,
    ACTIONS(116), 1,
      aux_sym_identifier_token1,
    ACTIONS(120), 1,
      anon_sym_BQUOTE,
    STATE(47), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [609] = 3,
    ACTIONS(116), 1,
      aux_sym_identifier_token1,
    ACTIONS(122), 1,
      anon_sym_SQUOTE,
    STATE(19), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [620] = 4,
    ACTIONS(112), 1,
      aux_sym_identifier_token1,
    STATE(95), 1,
      sym_relationship_definition_side,
    STATE(98), 1,
      sym_table_name,
    STATE(131), 1,
      sym__hidden_identifier,
  [633] = 3,
    ACTIONS(116), 1,
      aux_sym_identifier_token1,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    STATE(19), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [644] = 3,
    ACTIONS(124), 1,
      anon_sym_LBRACK,
    ACTIONS(126), 1,
      sym__newline,
    STATE(85), 1,
      sym_column_settings,
  [654] = 3,
    ACTIONS(128), 1,
      anon_sym_COMMA,
    ACTIONS(130), 1,
      anon_sym_RBRACK,
    STATE(69), 1,
      aux_sym_relationship_definition_short_repeat1,
  [664] = 3,
    ACTIONS(132), 1,
      aux_sym_identifier_token1,
    STATE(136), 1,
      sym_column_name,
    STATE(137), 1,
      sym__hidden_identifier,
  [674] = 3,
    ACTIONS(134), 1,
      aux_sym_identifier_token1,
    STATE(6), 1,
      sym__hidden_identifier,
    STATE(7), 1,
      sym_column_name,
  [684] = 1,
    ACTIONS(136), 3,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      aux_sym_identifier_token1,
  [690] = 3,
    ACTIONS(68), 1,
      aux_sym_identifier_token1,
    STATE(113), 1,
      sym_identifier,
    STATE(115), 1,
      sym_project_name,
  [700] = 3,
    ACTIONS(138), 1,
      aux_sym_identifier_token1,
    STATE(107), 1,
      sym__hidden_identifier,
    STATE(108), 1,
      sym_table_name,
  [710] = 3,
    ACTIONS(68), 1,
      aux_sym_identifier_token1,
    ACTIONS(140), 1,
      anon_sym_LBRACE,
    STATE(88), 1,
      sym_identifier,
  [720] = 3,
    ACTIONS(142), 1,
      anon_sym_COMMA,
    ACTIONS(145), 1,
      anon_sym_RBRACK,
    STATE(63), 1,
      aux_sym_column_settings_repeat1,
  [730] = 3,
    ACTIONS(128), 1,
      anon_sym_COMMA,
    ACTIONS(147), 1,
      anon_sym_RBRACK,
    STATE(67), 1,
      aux_sym_relationship_definition_short_repeat1,
  [740] = 3,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(151), 1,
      anon_sym_RBRACK,
    STATE(63), 1,
      aux_sym_column_settings_repeat1,
  [750] = 3,
    ACTIONS(128), 1,
      anon_sym_COMMA,
    ACTIONS(153), 1,
      anon_sym_RBRACK,
    STATE(64), 1,
      aux_sym_relationship_definition_short_repeat1,
  [760] = 3,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    ACTIONS(158), 1,
      anon_sym_RBRACK,
    STATE(67), 1,
      aux_sym_relationship_definition_short_repeat1,
  [770] = 3,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(160), 1,
      anon_sym_RBRACK,
    STATE(65), 1,
      aux_sym_column_settings_repeat1,
  [780] = 3,
    ACTIONS(128), 1,
      anon_sym_COMMA,
    ACTIONS(162), 1,
      anon_sym_RBRACK,
    STATE(67), 1,
      aux_sym_relationship_definition_short_repeat1,
  [790] = 3,
    ACTIONS(164), 1,
      aux_sym_identifier_token1,
    STATE(122), 1,
      sym_table_alias,
    STATE(133), 1,
      sym__hidden_identifier,
  [800] = 3,
    ACTIONS(166), 1,
      aux_sym_identifier_token1,
    STATE(109), 1,
      sym_column_name,
    STATE(118), 1,
      sym__hidden_identifier,
  [810] = 1,
    ACTIONS(168), 3,
      anon_sym_RBRACE,
      anon_sym_database_type,
      anon_sym_Note,
  [816] = 1,
    ACTIONS(145), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [821] = 1,
    ACTIONS(170), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [826] = 2,
    ACTIONS(172), 1,
      anon_sym_COLON,
    ACTIONS(174), 1,
      sym__space,
  [833] = 1,
    ACTIONS(176), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [838] = 1,
    ACTIONS(178), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [843] = 2,
    ACTIONS(180), 1,
      anon_sym_SQUOTE,
    ACTIONS(182), 1,
      anon_sym_BQUOTE,
  [850] = 1,
    ACTIONS(184), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [855] = 1,
    ACTIONS(186), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
  [860] = 2,
    ACTIONS(136), 1,
      sym__space,
    ACTIONS(188), 1,
      anon_sym_COLON,
  [867] = 1,
    ACTIONS(190), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [872] = 1,
    ACTIONS(192), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [877] = 1,
    ACTIONS(194), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
  [882] = 1,
    ACTIONS(196), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
  [887] = 1,
    ACTIONS(198), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
  [892] = 1,
    ACTIONS(158), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [897] = 2,
    ACTIONS(200), 1,
      anon_sym_COLON,
    ACTIONS(202), 1,
      sym__space,
  [904] = 2,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_as,
  [911] = 2,
    ACTIONS(208), 1,
      anon_sym_SQUOTE,
    STATE(112), 1,
      sym_enquoted_identifier_multi,
  [918] = 1,
    ACTIONS(210), 1,
      sym__space,
  [922] = 1,
    ACTIONS(212), 1,
      sym__space,
  [926] = 1,
    ACTIONS(214), 1,
      anon_sym_LBRACE,
  [930] = 1,
    ACTIONS(216), 1,
      sym__space,
  [934] = 1,
    ACTIONS(218), 1,
      sym__space,
  [938] = 1,
    ACTIONS(220), 1,
      sym__newline,
  [942] = 1,
    ACTIONS(222), 1,
      sym__newline,
  [946] = 1,
    ACTIONS(224), 1,
      sym__dot,
  [950] = 1,
    ACTIONS(226), 1,
      sym__space,
  [954] = 1,
    ACTIONS(228), 1,
      aux_sym_identifier_token1,
  [958] = 1,
    ACTIONS(230), 1,
      anon_sym_LBRACE,
  [962] = 1,
    ACTIONS(232), 1,
      sym__space,
  [966] = 1,
    ACTIONS(234), 1,
      sym__newline,
  [970] = 1,
    ACTIONS(236), 1,
      anon_sym_RBRACE,
  [974] = 1,
    ACTIONS(238), 1,
      sym__newline,
  [978] = 1,
    ACTIONS(240), 1,
      sym__newline,
  [982] = 1,
    ACTIONS(242), 1,
      sym__space,
  [986] = 1,
    ACTIONS(244), 1,
      sym__space,
  [990] = 1,
    ACTIONS(39), 1,
      sym__space,
  [994] = 1,
    ACTIONS(246), 1,
      sym__newline,
  [998] = 1,
    ACTIONS(248), 1,
      sym__newline,
  [1002] = 1,
    ACTIONS(250), 1,
      sym__newline,
  [1006] = 1,
    ACTIONS(252), 1,
      sym__space,
  [1010] = 1,
    ACTIONS(254), 1,
      sym_column_type,
  [1014] = 1,
    ACTIONS(256), 1,
      sym__space,
  [1018] = 1,
    ACTIONS(258), 1,
      sym__newline,
  [1022] = 1,
    ACTIONS(260), 1,
      anon_sym_COLON,
  [1026] = 1,
    ACTIONS(37), 1,
      sym__space,
  [1030] = 1,
    ACTIONS(262), 1,
      sym__newline,
  [1034] = 1,
    ACTIONS(264), 1,
      sym__space,
  [1038] = 1,
    ACTIONS(266), 1,
      sym__space,
  [1042] = 1,
    ACTIONS(268), 1,
      sym__space,
  [1046] = 1,
    ACTIONS(270), 1,
      anon_sym_RBRACE,
  [1050] = 1,
    ACTIONS(272), 1,
      sym__space,
  [1054] = 1,
    ACTIONS(274), 1,
      anon_sym_LBRACE,
  [1058] = 1,
    ACTIONS(276), 1,
      anon_sym_COLON,
  [1062] = 1,
    ACTIONS(278), 1,
      sym__space,
  [1066] = 1,
    ACTIONS(280), 1,
      ts_builtin_sym_end,
  [1070] = 1,
    ACTIONS(282), 1,
      anon_sym_COLON,
  [1074] = 1,
    ACTIONS(284), 1,
      anon_sym_COLON,
  [1078] = 1,
    ACTIONS(242), 1,
      sym__dot,
  [1082] = 1,
    ACTIONS(286), 1,
      anon_sym_COLON,
  [1086] = 1,
    ACTIONS(288), 1,
      sym__space,
  [1090] = 1,
    ACTIONS(290), 1,
      sym__space,
  [1094] = 1,
    ACTIONS(292), 1,
      sym__space,
  [1098] = 1,
    ACTIONS(39), 1,
      sym__newline,
  [1102] = 1,
    ACTIONS(37), 1,
      sym__newline,
  [1106] = 1,
    ACTIONS(294), 1,
      sym__dot,
  [1110] = 1,
    ACTIONS(296), 1,
      sym__dot,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 24,
  [SMALL_STATE(4)] = 48,
  [SMALL_STATE(5)] = 68,
  [SMALL_STATE(6)] = 84,
  [SMALL_STATE(7)] = 95,
  [SMALL_STATE(8)] = 106,
  [SMALL_STATE(9)] = 119,
  [SMALL_STATE(10)] = 130,
  [SMALL_STATE(11)] = 143,
  [SMALL_STATE(12)] = 158,
  [SMALL_STATE(13)] = 173,
  [SMALL_STATE(14)] = 188,
  [SMALL_STATE(15)] = 199,
  [SMALL_STATE(16)] = 210,
  [SMALL_STATE(17)] = 223,
  [SMALL_STATE(18)] = 231,
  [SMALL_STATE(19)] = 245,
  [SMALL_STATE(20)] = 257,
  [SMALL_STATE(21)] = 265,
  [SMALL_STATE(22)] = 273,
  [SMALL_STATE(23)] = 281,
  [SMALL_STATE(24)] = 295,
  [SMALL_STATE(25)] = 303,
  [SMALL_STATE(26)] = 311,
  [SMALL_STATE(27)] = 319,
  [SMALL_STATE(28)] = 333,
  [SMALL_STATE(29)] = 341,
  [SMALL_STATE(30)] = 349,
  [SMALL_STATE(31)] = 357,
  [SMALL_STATE(32)] = 369,
  [SMALL_STATE(33)] = 381,
  [SMALL_STATE(34)] = 395,
  [SMALL_STATE(35)] = 403,
  [SMALL_STATE(36)] = 411,
  [SMALL_STATE(37)] = 423,
  [SMALL_STATE(38)] = 437,
  [SMALL_STATE(39)] = 449,
  [SMALL_STATE(40)] = 461,
  [SMALL_STATE(41)] = 474,
  [SMALL_STATE(42)] = 487,
  [SMALL_STATE(43)] = 500,
  [SMALL_STATE(44)] = 513,
  [SMALL_STATE(45)] = 526,
  [SMALL_STATE(46)] = 539,
  [SMALL_STATE(47)] = 550,
  [SMALL_STATE(48)] = 561,
  [SMALL_STATE(49)] = 574,
  [SMALL_STATE(50)] = 585,
  [SMALL_STATE(51)] = 598,
  [SMALL_STATE(52)] = 609,
  [SMALL_STATE(53)] = 620,
  [SMALL_STATE(54)] = 633,
  [SMALL_STATE(55)] = 644,
  [SMALL_STATE(56)] = 654,
  [SMALL_STATE(57)] = 664,
  [SMALL_STATE(58)] = 674,
  [SMALL_STATE(59)] = 684,
  [SMALL_STATE(60)] = 690,
  [SMALL_STATE(61)] = 700,
  [SMALL_STATE(62)] = 710,
  [SMALL_STATE(63)] = 720,
  [SMALL_STATE(64)] = 730,
  [SMALL_STATE(65)] = 740,
  [SMALL_STATE(66)] = 750,
  [SMALL_STATE(67)] = 760,
  [SMALL_STATE(68)] = 770,
  [SMALL_STATE(69)] = 780,
  [SMALL_STATE(70)] = 790,
  [SMALL_STATE(71)] = 800,
  [SMALL_STATE(72)] = 810,
  [SMALL_STATE(73)] = 816,
  [SMALL_STATE(74)] = 821,
  [SMALL_STATE(75)] = 826,
  [SMALL_STATE(76)] = 833,
  [SMALL_STATE(77)] = 838,
  [SMALL_STATE(78)] = 843,
  [SMALL_STATE(79)] = 850,
  [SMALL_STATE(80)] = 855,
  [SMALL_STATE(81)] = 860,
  [SMALL_STATE(82)] = 867,
  [SMALL_STATE(83)] = 872,
  [SMALL_STATE(84)] = 877,
  [SMALL_STATE(85)] = 882,
  [SMALL_STATE(86)] = 887,
  [SMALL_STATE(87)] = 892,
  [SMALL_STATE(88)] = 897,
  [SMALL_STATE(89)] = 904,
  [SMALL_STATE(90)] = 911,
  [SMALL_STATE(91)] = 918,
  [SMALL_STATE(92)] = 922,
  [SMALL_STATE(93)] = 926,
  [SMALL_STATE(94)] = 930,
  [SMALL_STATE(95)] = 934,
  [SMALL_STATE(96)] = 938,
  [SMALL_STATE(97)] = 942,
  [SMALL_STATE(98)] = 946,
  [SMALL_STATE(99)] = 950,
  [SMALL_STATE(100)] = 954,
  [SMALL_STATE(101)] = 958,
  [SMALL_STATE(102)] = 962,
  [SMALL_STATE(103)] = 966,
  [SMALL_STATE(104)] = 970,
  [SMALL_STATE(105)] = 974,
  [SMALL_STATE(106)] = 978,
  [SMALL_STATE(107)] = 982,
  [SMALL_STATE(108)] = 986,
  [SMALL_STATE(109)] = 990,
  [SMALL_STATE(110)] = 994,
  [SMALL_STATE(111)] = 998,
  [SMALL_STATE(112)] = 1002,
  [SMALL_STATE(113)] = 1006,
  [SMALL_STATE(114)] = 1010,
  [SMALL_STATE(115)] = 1014,
  [SMALL_STATE(116)] = 1018,
  [SMALL_STATE(117)] = 1022,
  [SMALL_STATE(118)] = 1026,
  [SMALL_STATE(119)] = 1030,
  [SMALL_STATE(120)] = 1034,
  [SMALL_STATE(121)] = 1038,
  [SMALL_STATE(122)] = 1042,
  [SMALL_STATE(123)] = 1046,
  [SMALL_STATE(124)] = 1050,
  [SMALL_STATE(125)] = 1054,
  [SMALL_STATE(126)] = 1058,
  [SMALL_STATE(127)] = 1062,
  [SMALL_STATE(128)] = 1066,
  [SMALL_STATE(129)] = 1070,
  [SMALL_STATE(130)] = 1074,
  [SMALL_STATE(131)] = 1078,
  [SMALL_STATE(132)] = 1082,
  [SMALL_STATE(133)] = 1086,
  [SMALL_STATE(134)] = 1090,
  [SMALL_STATE(135)] = 1094,
  [SMALL_STATE(136)] = 1098,
  [SMALL_STATE(137)] = 1102,
  [SMALL_STATE(138)] = 1106,
  [SMALL_STATE(139)] = 1110,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_name, 1, 0, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_side, 3, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 7, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_project_definition_repeat1, 2, 0, 0),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_project_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 9, 0, 8),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 10, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_setting_default_repeat1, 2, 0, 0),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_setting_default_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 8, 0, 7),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 11, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 11, 0, 13),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_long, 10, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 7, 0, 5),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 13, 0, 8),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 10, 0, 11),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_definition, 8, 0, 6),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_definition, 7, 0, 4),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_definition_repeat1, 2, 0, 0),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 12, 0, 8),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_long, 12, 0, 8),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_settings_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_settings_repeat1, 2, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relationship_definition_short_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relationship_definition_short_repeat1, 2, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_property_definition, 5, 0, 12),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 1, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_setting_default, 5, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_setting_default, 4, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_inline, 4, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 4, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_setting_definition, 4, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_action, 1, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 4, 0, 9),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 4, 0, 10),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 3, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enquoted_identifier_multi, 2, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_symbol, 1, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enquoted_identifier_multi, 3, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 1, 0, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_name, 1, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [280] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_event, 1, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_property_key, 1, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_alias, 1, 0, 2),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
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
