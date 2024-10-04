#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 203
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 99
#define ALIAS_COUNT 0
#define TOKEN_COUNT 49
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 21
#define MAX_ALIAS_SEQUENCE_LENGTH 13
#define PRODUCTION_ID_COUNT 23

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
  anon_sym_default = 11,
  anon_sym_SQUOTE = 12,
  anon_sym_BQUOTE = 13,
  anon_sym_primarykey = 14,
  anon_sym_pk = 15,
  anon_sym_null = 16,
  anon_sym_notnull = 17,
  anon_sym_unique = 18,
  anon_sym_increment = 19,
  sym__identifier2 = 20,
  sym_Table = 21,
  sym_as = 22,
  anon_sym_LPAREN = 23,
  anon_sym_RPAREN = 24,
  anon_sym_name = 25,
  anon_sym_type = 26,
  sym_indexes = 27,
  sym_enum = 28,
  anon_sym_ref_COLON = 29,
  anon_sym_delete = 30,
  anon_sym_on_delete = 31,
  anon_sym_update = 32,
  anon_sym_on_update = 33,
  anon_sym_cascade = 34,
  anon_sym_restrict = 35,
  anon_sym_setnull = 36,
  anon_sym_setdefault = 37,
  anon_sym_noaction = 38,
  anon_sym_DASH = 39,
  anon_sym_LT = 40,
  anon_sym_GT = 41,
  anon_sym_LT_GT = 42,
  sym_Ref = 43,
  aux_sym_identifier_token1 = 44,
  sym__newline = 45,
  sym__space = 46,
  sym__dot = 47,
  anon_sym_DQUOTE = 48,
  sym_source_file = 49,
  sym__definition = 50,
  sym_project_definition = 51,
  sym_project_name = 52,
  sym_project_property_definition = 53,
  sym_project_property_key = 54,
  sym_table_definition = 55,
  sym_table_name = 56,
  sym_column_definition = 57,
  sym_column_name = 58,
  sym__column_type = 59,
  sym_column_type_basic = 60,
  sym_column_type_ref = 61,
  sym_column_type_ref_item = 62,
  sym_column_settings = 63,
  sym_column_setting_default = 64,
  sym_column_constraint = 65,
  sym_table_alias = 66,
  sym_indexes_definition = 67,
  sym_index_definition = 68,
  sym_index_definition_single = 69,
  sym_index_definition_composite = 70,
  sym_index_column = 71,
  sym_index_settings = 72,
  sym_index_setting = 73,
  sym_enum_definition = 74,
  sym_enum_field = 75,
  sym_enum_name = 76,
  sym_relationship_definition_short = 77,
  sym_relationship_definition_inline = 78,
  sym_relationship_definition_long = 79,
  sym_relationship_definition_side = 80,
  sym_relationship_setting_definition = 81,
  sym_relationship_event = 82,
  sym_relationship_action = 83,
  sym_relationship_symbol = 84,
  sym_identifier = 85,
  sym_enquoted_identifier = 86,
  sym_enquoted_identifier_multi = 87,
  sym_double_enquoted_identifier = 88,
  sym__hidden_identifier = 89,
  aux_sym_source_file_repeat1 = 90,
  aux_sym_project_definition_repeat1 = 91,
  aux_sym_table_definition_repeat1 = 92,
  aux_sym_column_settings_repeat1 = 93,
  aux_sym_column_setting_default_repeat1 = 94,
  aux_sym_indexes_definition_repeat1 = 95,
  aux_sym_index_definition_composite_repeat1 = 96,
  aux_sym_enum_definition_repeat1 = 97,
  aux_sym_relationship_definition_short_repeat1 = 98,
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
  [anon_sym_default] = "default",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_primarykey] = "primary key",
  [anon_sym_pk] = "pk",
  [anon_sym_null] = "null",
  [anon_sym_notnull] = "not null",
  [anon_sym_unique] = "unique",
  [anon_sym_increment] = "increment",
  [sym__identifier2] = "_identifier2",
  [sym_Table] = "Table",
  [sym_as] = "as",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_name] = "name",
  [anon_sym_type] = "type",
  [sym_indexes] = "indexes",
  [sym_enum] = "enum",
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
  [sym_column_name] = "column_name",
  [sym__column_type] = "_column_type",
  [sym_column_type_basic] = "column_type_basic",
  [sym_column_type_ref] = "column_type_ref",
  [sym_column_type_ref_item] = "column_type_ref_item",
  [sym_column_settings] = "column_settings",
  [sym_column_setting_default] = "column_setting_default",
  [sym_column_constraint] = "column_constraint",
  [sym_table_alias] = "table_alias",
  [sym_indexes_definition] = "indexes_definition",
  [sym_index_definition] = "index_definition",
  [sym_index_definition_single] = "index_definition_single",
  [sym_index_definition_composite] = "index_definition_composite",
  [sym_index_column] = "index_column",
  [sym_index_settings] = "index_settings",
  [sym_index_setting] = "index_setting",
  [sym_enum_definition] = "enum_definition",
  [sym_enum_field] = "enum_field",
  [sym_enum_name] = "enum_name",
  [sym_relationship_definition_short] = "relationship_definition_short",
  [sym_relationship_definition_inline] = "relationship_definition_inline",
  [sym_relationship_definition_long] = "relationship_definition_long",
  [sym_relationship_definition_side] = "relationship_definition_side",
  [sym_relationship_setting_definition] = "relationship_setting_definition",
  [sym_relationship_event] = "relationship_event",
  [sym_relationship_action] = "relationship_action",
  [sym_relationship_symbol] = "relationship_symbol",
  [sym_identifier] = "identifier",
  [sym_enquoted_identifier] = "enquoted_identifier",
  [sym_enquoted_identifier_multi] = "enquoted_identifier_multi",
  [sym_double_enquoted_identifier] = "double_enquoted_identifier",
  [sym__hidden_identifier] = "_hidden_identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_project_definition_repeat1] = "project_definition_repeat1",
  [aux_sym_table_definition_repeat1] = "table_definition_repeat1",
  [aux_sym_column_settings_repeat1] = "column_settings_repeat1",
  [aux_sym_column_setting_default_repeat1] = "column_setting_default_repeat1",
  [aux_sym_indexes_definition_repeat1] = "indexes_definition_repeat1",
  [aux_sym_index_definition_composite_repeat1] = "index_definition_composite_repeat1",
  [aux_sym_enum_definition_repeat1] = "enum_definition_repeat1",
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
  [anon_sym_default] = anon_sym_default,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_primarykey] = anon_sym_primarykey,
  [anon_sym_pk] = anon_sym_pk,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_notnull] = anon_sym_notnull,
  [anon_sym_unique] = anon_sym_unique,
  [anon_sym_increment] = anon_sym_increment,
  [sym__identifier2] = sym__identifier2,
  [sym_Table] = sym_Table,
  [sym_as] = sym_as,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_name] = anon_sym_name,
  [anon_sym_type] = anon_sym_type,
  [sym_indexes] = sym_indexes,
  [sym_enum] = sym_enum,
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
  [sym_column_name] = sym_column_name,
  [sym__column_type] = sym__column_type,
  [sym_column_type_basic] = sym_column_type_basic,
  [sym_column_type_ref] = sym_column_type_ref,
  [sym_column_type_ref_item] = sym_column_type_ref_item,
  [sym_column_settings] = sym_column_settings,
  [sym_column_setting_default] = sym_column_setting_default,
  [sym_column_constraint] = sym_column_constraint,
  [sym_table_alias] = sym_table_alias,
  [sym_indexes_definition] = sym_indexes_definition,
  [sym_index_definition] = sym_index_definition,
  [sym_index_definition_single] = sym_index_definition_single,
  [sym_index_definition_composite] = sym_index_definition_composite,
  [sym_index_column] = sym_index_column,
  [sym_index_settings] = sym_index_settings,
  [sym_index_setting] = sym_index_setting,
  [sym_enum_definition] = sym_enum_definition,
  [sym_enum_field] = sym_enum_field,
  [sym_enum_name] = sym_enum_name,
  [sym_relationship_definition_short] = sym_relationship_definition_short,
  [sym_relationship_definition_inline] = sym_relationship_definition_inline,
  [sym_relationship_definition_long] = sym_relationship_definition_long,
  [sym_relationship_definition_side] = sym_relationship_definition_side,
  [sym_relationship_setting_definition] = sym_relationship_setting_definition,
  [sym_relationship_event] = sym_relationship_event,
  [sym_relationship_action] = sym_relationship_action,
  [sym_relationship_symbol] = sym_relationship_symbol,
  [sym_identifier] = sym_identifier,
  [sym_enquoted_identifier] = sym_enquoted_identifier,
  [sym_enquoted_identifier_multi] = sym_enquoted_identifier_multi,
  [sym_double_enquoted_identifier] = sym_double_enquoted_identifier,
  [sym__hidden_identifier] = sym__hidden_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_project_definition_repeat1] = aux_sym_project_definition_repeat1,
  [aux_sym_table_definition_repeat1] = aux_sym_table_definition_repeat1,
  [aux_sym_column_settings_repeat1] = aux_sym_column_settings_repeat1,
  [aux_sym_column_setting_default_repeat1] = aux_sym_column_setting_default_repeat1,
  [aux_sym_indexes_definition_repeat1] = aux_sym_indexes_definition_repeat1,
  [aux_sym_index_definition_composite_repeat1] = aux_sym_index_definition_composite_repeat1,
  [aux_sym_enum_definition_repeat1] = aux_sym_enum_definition_repeat1,
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
  [sym__identifier2] = {
    .visible = false,
    .named = true,
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
  [sym_enum] = {
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
  [sym_column_name] = {
    .visible = true,
    .named = true,
  },
  [sym__column_type] = {
    .visible = false,
    .named = true,
  },
  [sym_column_type_basic] = {
    .visible = true,
    .named = true,
  },
  [sym_column_type_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_column_type_ref_item] = {
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
  [sym_index_settings] = {
    .visible = true,
    .named = true,
  },
  [sym_index_setting] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_field] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_name] = {
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
  [sym_double_enquoted_identifier] = {
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
  [aux_sym_enum_definition_repeat1] = {
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
  field_column_ref_type_left = 6,
  field_column_ref_type_right = 7,
  field_enum_field = 8,
  field_enum_field_name = 9,
  field_enum_name = 10,
  field_index_column = 11,
  field_index_settings = 12,
  field_indexes = 13,
  field_project_name = 14,
  field_project_property = 15,
  field_project_property_key = 16,
  field_project_property_value = 17,
  field_relationship_name = 18,
  field_table_alias = 19,
  field_table_alias_name = 20,
  field_table_name = 21,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_col_name] = "col_name",
  [field_col_settings] = "col_settings",
  [field_col_type] = "col_type",
  [field_column] = "column",
  [field_column_name] = "column_name",
  [field_column_ref_type_left] = "column_ref_type_left",
  [field_column_ref_type_right] = "column_ref_type_right",
  [field_enum_field] = "enum_field",
  [field_enum_field_name] = "enum_field_name",
  [field_enum_name] = "enum_name",
  [field_index_column] = "index_column",
  [field_index_settings] = "index_settings",
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
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 1},
  [8] = {.index = 7, .length = 2},
  [9] = {.index = 9, .length = 2},
  [10] = {.index = 11, .length = 3},
  [11] = {.index = 14, .length = 1},
  [12] = {.index = 15, .length = 2},
  [13] = {.index = 17, .length = 3},
  [14] = {.index = 20, .length = 2},
  [15] = {.index = 22, .length = 2},
  [16] = {.index = 24, .length = 3},
  [17] = {.index = 27, .length = 1},
  [18] = {.index = 28, .length = 4},
  [19] = {.index = 32, .length = 1},
  [20] = {.index = 33, .length = 1},
  [21] = {.index = 34, .length = 2},
  [22] = {.index = 36, .length = 2},
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
    {field_enum_name, 2},
  [5] =
    {field_enum_field_name, 0},
  [6] =
    {field_enum_field, 0},
  [7] =
    {field_project_name, 2},
    {field_project_property, 6},
  [9] =
    {field_column, 6},
    {field_table_name, 2},
  [11] =
    {field_column, 6},
    {field_indexes, 7},
    {field_table_name, 2},
  [14] =
    {field_relationship_name, 2},
  [15] =
    {field_col_name, 0},
    {field_col_type, 2},
  [17] =
    {field_col_name, 0},
    {field_col_settings, 3},
    {field_col_type, 2},
  [20] =
    {field_project_property_key, 0},
    {field_project_property_value, 3},
  [22] =
    {field_column_ref_type_left, 0},
    {field_column_ref_type_right, 2},
  [24] =
    {field_column, 9},
    {field_table_alias_name, 5},
    {field_table_name, 2},
  [27] =
    {field_index_column, 0},
  [28] =
    {field_column, 9},
    {field_indexes, 10},
    {field_table_alias_name, 5},
    {field_table_name, 2},
  [32] =
    {field_index_settings, 1},
  [33] =
    {field_index_column, 1},
  [34] =
    {field_index_column, 1},
    {field_index_column, 2, .inherited = true},
  [36] =
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
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 80,
  [89] = 80,
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
  [101] = 13,
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
  [118] = 13,
  [119] = 99,
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
  [159] = 6,
  [160] = 160,
  [161] = 161,
  [162] = 7,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 130,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 7,
  [200] = 6,
  [201] = 169,
  [202] = 169,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(137);
      ADVANCE_MAP(
        '"', 192,
        '\'', 149,
        '(', 160,
        ')', 161,
        ',', 146,
        '-', 177,
        '.', 191,
        '/', 8,
        ':', 141,
        '<', 178,
        '>', 179,
        'N', 95,
        'P', 102,
        'R', 37,
        'T', 12,
        '[', 145,
        ']', 147,
        '`', 150,
        'a', 106,
        'c', 14,
        'd', 15,
        'e', 88,
        'i', 89,
        'n', 13,
        'o', 90,
        'p', 72,
        'r', 38,
        's', 54,
        't', 132,
        'u', 92,
        '{', 139,
        '}', 140,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(189);
      if (lookahead == '.') ADVANCE(191);
      if (lookahead == '[') ADVANCE(145);
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
      if (lookahead == ' ') ADVANCE(190);
      if (lookahead == ':') ADVANCE(141);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(93);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '"', 192,
        '\'', 149,
        '(', 160,
        ')', 161,
        ',', 146,
        ']', 147,
        '`', 150,
        '{', 139,
        '}', 140,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(138);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(167);
      END_STATE();
    case 10:
      if (lookahead == '_') ADVANCE(33);
      END_STATE();
    case 11:
      if (lookahead == '_') ADVANCE(124);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(85);
      if (lookahead == 'o') ADVANCE(5);
      if (lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(123);
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 25:
      if (lookahead == 'b') ADVANCE(81);
      END_STATE();
    case 26:
      if (lookahead == 'b') ADVANCE(20);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(105);
      if (lookahead == 'd') ADVANCE(40);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(118);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(18);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(110);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(112);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(22);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(59);
      if (lookahead == 'u') ADVANCE(100);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(47);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(51);
      if (lookahead == 'n') ADVANCE(130);
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
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 62:
      if (lookahead == 'f') ADVANCE(181);
      END_STATE();
    case 63:
      if (lookahead == 'f') ADVANCE(9);
      if (lookahead == 's') ADVANCE(116);
      END_STATE();
    case 64:
      if (lookahead == 'f') ADVANCE(17);
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 65:
      if (lookahead == 'f') ADVANCE(24);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(185);
      if (lookahead == '}') ADVANCE(140);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(67);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 71:
      if (lookahead == 'j') ADVANCE(60);
      END_STATE();
    case 72:
      if (lookahead == 'k') ADVANCE(152);
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 73:
      if (lookahead == 'k') ADVANCE(53);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(153);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(154);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(174);
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
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 84:
      if (lookahead == 'm') ADVANCE(166);
      END_STATE();
    case 85:
      if (lookahead == 'm') ADVANCE(41);
      END_STATE();
    case 86:
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 87:
      if (lookahead == 'm') ADVANCE(56);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(176);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == 'p') ADVANCE(32);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 98:
      if (lookahead == 'p') ADVANCE(42);
      END_STATE();
    case 99:
      if (lookahead == 'p') ADVANCE(50);
      END_STATE();
    case 100:
      if (lookahead == 'p') ADVANCE(36);
      END_STATE();
    case 101:
      if (lookahead == 'q') ADVANCE(127);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 106:
      if (lookahead == 's') ADVANCE(159);
      END_STATE();
    case 107:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 108:
      if (lookahead == 's') ADVANCE(164);
      END_STATE();
    case 109:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(2);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 125:
      if (lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 126:
      if (lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 127:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 128:
      if (lookahead == 'u') ADVANCE(78);
      END_STATE();
    case 129:
      if (lookahead == 'u') ADVANCE(82);
      END_STATE();
    case 130:
      if (lookahead == 'u') ADVANCE(79);
      END_STATE();
    case 131:
      if (lookahead == 'x') ADVANCE(55);
      END_STATE();
    case 132:
      if (lookahead == 'y') ADVANCE(98);
      END_STATE();
    case 133:
      if (lookahead == 'y') ADVANCE(151);
      END_STATE();
    case 134:
      if (lookahead == 'y') ADVANCE(3);
      END_STATE();
    case 135:
      if (lookahead == 'y') ADVANCE(99);
      END_STATE();
    case 136:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(136);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_database_type);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_Note);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_Project);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_primarykey);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_pk);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_notnull);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_unique);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_increment);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__identifier2);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_Table);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_as);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_indexes);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_indexes);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_enum);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_ref_COLON);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_on_delete);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_update);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_on_update);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_cascade);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_restrict);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_setnull);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_setdefault);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_noaction);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '>') ADVANCE(180);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_Ref);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(182);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(165);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'x') ADVANCE(184);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == ' ') ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__dot);
      END_STATE();
    case 192:
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
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 67},
  [12] = {.lex_state = 67},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 67},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 7},
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
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 136},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
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
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 67},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 7},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 7},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 7},
  [81] = {.lex_state = 67},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 7},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 7},
  [88] = {.lex_state = 7},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 67},
  [95] = {.lex_state = 67},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 7},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 7},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 136},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 4},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 4},
  [158] = {.lex_state = 7},
  [159] = {.lex_state = 4},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 4},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 4},
  [166] = {.lex_state = 4},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 4},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 1},
  [174] = {.lex_state = 4},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 1},
  [178] = {.lex_state = 4},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 1},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 1},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 1},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 4},
  [196] = {.lex_state = 1},
  [197] = {.lex_state = 4},
  [198] = {.lex_state = 4},
  [199] = {.lex_state = 1},
  [200] = {.lex_state = 1},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
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
    [sym_enum] = ACTIONS(1),
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
    [sym_source_file] = STATE(125),
    [sym__definition] = STATE(2),
    [sym_project_definition] = STATE(2),
    [sym_table_definition] = STATE(2),
    [sym_enum_definition] = STATE(2),
    [sym_relationship_definition_short] = STATE(2),
    [sym_relationship_definition_long] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_Project] = ACTIONS(7),
    [sym_Table] = ACTIONS(9),
    [sym_enum] = ACTIONS(11),
    [sym_Ref] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(7), 1,
      sym_Project,
    ACTIONS(9), 1,
      sym_Table,
    ACTIONS(11), 1,
      sym_enum,
    ACTIONS(13), 1,
      sym_Ref,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      sym_comment,
    STATE(3), 7,
      sym__definition,
      sym_project_definition,
      sym_table_definition,
      sym_enum_definition,
      sym_relationship_definition_short,
      sym_relationship_definition_long,
      aux_sym_source_file_repeat1,
  [28] = 7,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(24), 1,
      sym_Project,
    ACTIONS(27), 1,
      sym_Table,
    ACTIONS(30), 1,
      sym_enum,
    ACTIONS(33), 1,
      sym_Ref,
    STATE(3), 7,
      sym__definition,
      sym_project_definition,
      sym_table_definition,
      sym_enum_definition,
      sym_relationship_definition_short,
      sym_relationship_definition_long,
      aux_sym_source_file_repeat1,
  [56] = 4,
    ACTIONS(36), 1,
      anon_sym_default,
    ACTIONS(40), 1,
      anon_sym_ref_COLON,
    STATE(112), 3,
      sym_column_setting_default,
      sym_column_constraint,
      sym_relationship_definition_inline,
    ACTIONS(38), 6,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_increment,
  [76] = 8,
    ACTIONS(42), 1,
      anon_sym_RBRACE,
    ACTIONS(44), 1,
      anon_sym_LPAREN,
    ACTIONS(46), 1,
      aux_sym_identifier_token1,
    STATE(9), 1,
      aux_sym_indexes_definition_repeat1,
    STATE(119), 1,
      sym_identifier,
    STATE(120), 1,
      sym_index_column,
    STATE(141), 1,
      sym_index_definition,
    STATE(77), 2,
      sym_index_definition_single,
      sym_index_definition_composite,
  [102] = 1,
    ACTIONS(48), 9,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_Table,
      sym_enum,
      sym_Ref,
  [114] = 1,
    ACTIONS(50), 9,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_Table,
      sym_enum,
      sym_Ref,
  [126] = 8,
    ACTIONS(52), 1,
      anon_sym_RBRACE,
    ACTIONS(54), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      aux_sym_identifier_token1,
    STATE(8), 1,
      aux_sym_indexes_definition_repeat1,
    STATE(119), 1,
      sym_identifier,
    STATE(120), 1,
      sym_index_column,
    STATE(141), 1,
      sym_index_definition,
    STATE(77), 2,
      sym_index_definition_single,
      sym_index_definition_composite,
  [152] = 8,
    ACTIONS(44), 1,
      anon_sym_LPAREN,
    ACTIONS(46), 1,
      aux_sym_identifier_token1,
    ACTIONS(60), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      aux_sym_indexes_definition_repeat1,
    STATE(119), 1,
      sym_identifier,
    STATE(120), 1,
      sym_index_column,
    STATE(141), 1,
      sym_index_definition,
    STATE(77), 2,
      sym_index_definition_single,
      sym_index_definition_composite,
  [178] = 3,
    ACTIONS(40), 1,
      anon_sym_ref_COLON,
    STATE(93), 2,
      sym_column_constraint,
      sym_relationship_definition_inline,
    ACTIONS(38), 6,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_increment,
  [194] = 7,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    ACTIONS(64), 1,
      sym_indexes,
    ACTIONS(66), 1,
      aux_sym_identifier_token1,
    STATE(152), 1,
      sym_column_name,
    STATE(159), 1,
      sym__hidden_identifier,
    STATE(176), 1,
      sym_indexes_definition,
    STATE(17), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [217] = 7,
    ACTIONS(64), 1,
      sym_indexes,
    ACTIONS(66), 1,
      aux_sym_identifier_token1,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    STATE(152), 1,
      sym_column_name,
    STATE(159), 1,
      sym__hidden_identifier,
    STATE(164), 1,
      sym_indexes_definition,
    STATE(17), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [240] = 1,
    ACTIONS(70), 7,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_RPAREN,
      aux_sym_identifier_token1,
      anon_sym_DQUOTE,
  [250] = 7,
    ACTIONS(46), 1,
      aux_sym_identifier_token1,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
    STATE(16), 1,
      aux_sym_enum_definition_repeat1,
    STATE(140), 1,
      sym_double_enquoted_identifier,
    STATE(142), 1,
      sym_identifier,
    STATE(146), 1,
      sym_enum_field,
  [272] = 2,
    ACTIONS(78), 1,
      anon_sym_LBRACK,
    ACTIONS(76), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [284] = 7,
    ACTIONS(46), 1,
      aux_sym_identifier_token1,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
    ACTIONS(80), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      aux_sym_enum_definition_repeat1,
    STATE(140), 1,
      sym_double_enquoted_identifier,
    STATE(142), 1,
      sym_identifier,
    STATE(146), 1,
      sym_enum_field,
  [306] = 6,
    ACTIONS(82), 1,
      anon_sym_RBRACE,
    ACTIONS(84), 1,
      sym_indexes,
    ACTIONS(86), 1,
      aux_sym_identifier_token1,
    STATE(152), 1,
      sym_column_name,
    STATE(159), 1,
      sym__hidden_identifier,
    STATE(17), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [326] = 2,
    ACTIONS(91), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [338] = 7,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    ACTIONS(95), 1,
      aux_sym_identifier_token1,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    STATE(19), 1,
      aux_sym_enum_definition_repeat1,
    STATE(140), 1,
      sym_double_enquoted_identifier,
    STATE(142), 1,
      sym_identifier,
    STATE(146), 1,
      sym_enum_field,
  [360] = 1,
    ACTIONS(101), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [369] = 1,
    ACTIONS(103), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [378] = 1,
    ACTIONS(105), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [387] = 1,
    ACTIONS(107), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [396] = 3,
    STATE(82), 1,
      sym_relationship_setting_definition,
    STATE(179), 1,
      sym_relationship_event,
    ACTIONS(109), 4,
      anon_sym_delete,
      anon_sym_on_delete,
      anon_sym_update,
      anon_sym_on_update,
  [409] = 1,
    ACTIONS(111), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [418] = 3,
    STATE(122), 1,
      sym_relationship_setting_definition,
    STATE(179), 1,
      sym_relationship_event,
    ACTIONS(109), 4,
      anon_sym_delete,
      anon_sym_on_delete,
      anon_sym_update,
      anon_sym_on_update,
  [431] = 1,
    ACTIONS(113), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [440] = 1,
    ACTIONS(115), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [449] = 4,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    STATE(155), 1,
      sym_project_property_key,
    ACTIONS(119), 2,
      anon_sym_database_type,
      anon_sym_Note,
    STATE(29), 2,
      sym_project_property_definition,
      aux_sym_project_definition_repeat1,
  [464] = 1,
    ACTIONS(122), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [473] = 4,
    ACTIONS(124), 1,
      anon_sym_RBRACE,
    STATE(155), 1,
      sym_project_property_key,
    ACTIONS(126), 2,
      anon_sym_database_type,
      anon_sym_Note,
    STATE(29), 2,
      sym_project_property_definition,
      aux_sym_project_definition_repeat1,
  [488] = 1,
    ACTIONS(128), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [497] = 1,
    ACTIONS(130), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [506] = 3,
    STATE(85), 1,
      sym_relationship_setting_definition,
    STATE(179), 1,
      sym_relationship_event,
    ACTIONS(109), 4,
      anon_sym_delete,
      anon_sym_on_delete,
      anon_sym_update,
      anon_sym_on_update,
  [519] = 2,
    STATE(115), 1,
      sym_relationship_action,
    ACTIONS(132), 5,
      anon_sym_cascade,
      anon_sym_restrict,
      anon_sym_setnull,
      anon_sym_setdefault,
      anon_sym_noaction,
  [530] = 1,
    ACTIONS(134), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [539] = 1,
    ACTIONS(136), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [548] = 1,
    ACTIONS(138), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [557] = 1,
    ACTIONS(140), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [566] = 4,
    ACTIONS(142), 1,
      anon_sym_RBRACE,
    STATE(155), 1,
      sym_project_property_key,
    ACTIONS(126), 2,
      anon_sym_database_type,
      anon_sym_Note,
    STATE(31), 2,
      sym_project_property_definition,
      aux_sym_project_definition_repeat1,
  [581] = 3,
    ACTIONS(146), 1,
      anon_sym_LT,
    STATE(58), 1,
      sym_relationship_symbol,
    ACTIONS(144), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [593] = 4,
    ACTIONS(148), 1,
      aux_sym_identifier_token1,
    STATE(152), 1,
      sym_column_name,
    STATE(159), 1,
      sym__hidden_identifier,
    STATE(11), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [607] = 3,
    ACTIONS(146), 1,
      anon_sym_LT,
    STATE(64), 1,
      sym_relationship_symbol,
    ACTIONS(144), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [619] = 3,
    ACTIONS(146), 1,
      anon_sym_LT,
    STATE(51), 1,
      sym_relationship_symbol,
    ACTIONS(144), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [631] = 3,
    ACTIONS(152), 1,
      aux_sym_identifier_token1,
    ACTIONS(150), 2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
    STATE(45), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [643] = 4,
    ACTIONS(148), 1,
      aux_sym_identifier_token1,
    STATE(152), 1,
      sym_column_name,
    STATE(159), 1,
      sym__hidden_identifier,
    STATE(12), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [657] = 3,
    ACTIONS(146), 1,
      anon_sym_LT,
    STATE(53), 1,
      sym_relationship_symbol,
    ACTIONS(144), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [669] = 3,
    ACTIONS(155), 1,
      sym__identifier2,
    STATE(187), 1,
      sym_column_type_ref_item,
    STATE(92), 3,
      sym__column_type,
      sym_column_type_basic,
      sym_column_type_ref,
  [681] = 4,
    ACTIONS(159), 1,
      anon_sym_name,
    ACTIONS(161), 1,
      anon_sym_type,
    STATE(172), 1,
      sym_index_setting,
    ACTIONS(157), 2,
      anon_sym_pk,
      anon_sym_unique,
  [695] = 3,
    ACTIONS(146), 1,
      anon_sym_LT,
    STATE(61), 1,
      sym_relationship_symbol,
    ACTIONS(144), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [707] = 4,
    ACTIONS(163), 1,
      aux_sym_identifier_token1,
    STATE(15), 1,
      sym_relationship_definition_side,
    STATE(192), 1,
      sym__hidden_identifier,
    STATE(201), 1,
      sym_table_name,
  [720] = 3,
    ACTIONS(165), 1,
      anon_sym_SQUOTE,
    ACTIONS(167), 1,
      aux_sym_identifier_token1,
    STATE(45), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [731] = 4,
    ACTIONS(163), 1,
      aux_sym_identifier_token1,
    STATE(18), 1,
      sym_relationship_definition_side,
    STATE(192), 1,
      sym__hidden_identifier,
    STATE(201), 1,
      sym_table_name,
  [744] = 4,
    ACTIONS(163), 1,
      aux_sym_identifier_token1,
    STATE(169), 1,
      sym_table_name,
    STATE(174), 1,
      sym_relationship_definition_side,
    STATE(192), 1,
      sym__hidden_identifier,
  [757] = 3,
    ACTIONS(167), 1,
      aux_sym_identifier_token1,
    ACTIONS(169), 1,
      anon_sym_SQUOTE,
    STATE(52), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [768] = 3,
    ACTIONS(167), 1,
      aux_sym_identifier_token1,
    ACTIONS(171), 1,
      anon_sym_BQUOTE,
    STATE(45), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [779] = 3,
    ACTIONS(167), 1,
      aux_sym_identifier_token1,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    STATE(45), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [790] = 4,
    ACTIONS(163), 1,
      aux_sym_identifier_token1,
    STATE(144), 1,
      sym_relationship_definition_side,
    STATE(192), 1,
      sym__hidden_identifier,
    STATE(202), 1,
      sym_table_name,
  [803] = 4,
    ACTIONS(163), 1,
      aux_sym_identifier_token1,
    STATE(129), 1,
      sym_relationship_definition_side,
    STATE(169), 1,
      sym_table_name,
    STATE(192), 1,
      sym__hidden_identifier,
  [816] = 3,
    ACTIONS(167), 1,
      aux_sym_identifier_token1,
    ACTIONS(173), 1,
      anon_sym_BQUOTE,
    STATE(56), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [827] = 4,
    ACTIONS(163), 1,
      aux_sym_identifier_token1,
    STATE(191), 1,
      sym_relationship_definition_side,
    STATE(192), 1,
      sym__hidden_identifier,
    STATE(202), 1,
      sym_table_name,
  [840] = 3,
    ACTIONS(167), 1,
      aux_sym_identifier_token1,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    STATE(57), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [851] = 4,
    ACTIONS(163), 1,
      aux_sym_identifier_token1,
    STATE(157), 1,
      sym_relationship_definition_side,
    STATE(169), 1,
      sym_table_name,
    STATE(192), 1,
      sym__hidden_identifier,
  [864] = 4,
    ACTIONS(163), 1,
      aux_sym_identifier_token1,
    STATE(97), 1,
      sym_relationship_definition_side,
    STATE(192), 1,
      sym__hidden_identifier,
    STATE(201), 1,
      sym_table_name,
  [877] = 4,
    ACTIONS(163), 1,
      aux_sym_identifier_token1,
    STATE(138), 1,
      sym_relationship_definition_side,
    STATE(169), 1,
      sym_table_name,
    STATE(192), 1,
      sym__hidden_identifier,
  [890] = 3,
    ACTIONS(175), 1,
      aux_sym_identifier_token1,
    STATE(135), 1,
      sym_identifier,
    STATE(136), 1,
      sym_project_name,
  [900] = 3,
    ACTIONS(177), 1,
      aux_sym_identifier_token1,
    STATE(130), 1,
      sym__hidden_identifier,
    STATE(134), 1,
      sym_table_name,
  [910] = 1,
    ACTIONS(52), 3,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_identifier_token1,
  [916] = 3,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    ACTIONS(181), 1,
      anon_sym_RPAREN,
    STATE(73), 1,
      aux_sym_index_definition_composite_repeat1,
  [926] = 3,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    ACTIONS(186), 1,
      anon_sym_RBRACK,
    STATE(70), 1,
      aux_sym_column_settings_repeat1,
  [936] = 3,
    ACTIONS(167), 1,
      aux_sym_identifier_token1,
    STATE(99), 1,
      sym_identifier,
    STATE(108), 1,
      sym_index_column,
  [946] = 2,
    ACTIONS(188), 1,
      anon_sym_RBRACE,
    ACTIONS(190), 2,
      sym_indexes,
      aux_sym_identifier_token1,
  [954] = 3,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    ACTIONS(192), 1,
      anon_sym_RPAREN,
    STATE(86), 1,
      aux_sym_index_definition_composite_repeat1,
  [964] = 3,
    ACTIONS(175), 1,
      aux_sym_identifier_token1,
    STATE(128), 1,
      sym_enum_name,
    STATE(139), 1,
      sym_identifier,
  [974] = 3,
    ACTIONS(194), 1,
      anon_sym_COMMA,
    ACTIONS(196), 1,
      anon_sym_RBRACK,
    STATE(83), 1,
      aux_sym_relationship_definition_short_repeat1,
  [984] = 3,
    ACTIONS(175), 1,
      aux_sym_identifier_token1,
    ACTIONS(198), 1,
      anon_sym_LBRACE,
    STATE(117), 1,
      sym_identifier,
  [994] = 3,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      sym__newline,
    STATE(160), 1,
      sym_index_settings,
  [1004] = 3,
    ACTIONS(167), 1,
      aux_sym_identifier_token1,
    STATE(69), 1,
      sym_index_column,
    STATE(99), 1,
      sym_identifier,
  [1014] = 3,
    ACTIONS(204), 1,
      anon_sym_COMMA,
    ACTIONS(206), 1,
      anon_sym_RBRACK,
    STATE(70), 1,
      aux_sym_column_settings_repeat1,
  [1024] = 3,
    ACTIONS(148), 1,
      aux_sym_identifier_token1,
    STATE(159), 1,
      sym__hidden_identifier,
    STATE(162), 1,
      sym_column_name,
  [1034] = 2,
    ACTIONS(208), 1,
      anon_sym_RBRACE,
    ACTIONS(210), 2,
      sym_indexes,
      aux_sym_identifier_token1,
  [1042] = 3,
    ACTIONS(194), 1,
      anon_sym_COMMA,
    ACTIONS(212), 1,
      anon_sym_RBRACK,
    STATE(75), 1,
      aux_sym_relationship_definition_short_repeat1,
  [1052] = 3,
    ACTIONS(214), 1,
      anon_sym_COMMA,
    ACTIONS(217), 1,
      anon_sym_RBRACK,
    STATE(83), 1,
      aux_sym_relationship_definition_short_repeat1,
  [1062] = 3,
    ACTIONS(219), 1,
      aux_sym_identifier_token1,
    STATE(166), 1,
      sym__hidden_identifier,
    STATE(168), 1,
      sym_table_alias,
  [1072] = 3,
    ACTIONS(194), 1,
      anon_sym_COMMA,
    ACTIONS(221), 1,
      anon_sym_RBRACK,
    STATE(96), 1,
      aux_sym_relationship_definition_short_repeat1,
  [1082] = 3,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    ACTIONS(226), 1,
      anon_sym_RPAREN,
    STATE(86), 1,
      aux_sym_index_definition_composite_repeat1,
  [1092] = 1,
    ACTIONS(93), 3,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
      anon_sym_DQUOTE,
  [1098] = 3,
    ACTIONS(228), 1,
      aux_sym_identifier_token1,
    STATE(6), 1,
      sym__hidden_identifier,
    STATE(7), 1,
      sym_column_name,
  [1108] = 3,
    ACTIONS(230), 1,
      aux_sym_identifier_token1,
    STATE(199), 1,
      sym_column_name,
    STATE(200), 1,
      sym__hidden_identifier,
  [1118] = 1,
    ACTIONS(232), 3,
      anon_sym_RBRACE,
      anon_sym_database_type,
      anon_sym_Note,
  [1124] = 3,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      sym__newline,
    ACTIONS(238), 1,
      sym__dot,
  [1134] = 3,
    ACTIONS(240), 1,
      anon_sym_LBRACK,
    ACTIONS(242), 1,
      sym__newline,
    STATE(95), 1,
      sym_column_settings,
  [1144] = 3,
    ACTIONS(204), 1,
      anon_sym_COMMA,
    ACTIONS(244), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      aux_sym_column_settings_repeat1,
  [1154] = 2,
    ACTIONS(246), 1,
      anon_sym_RBRACE,
    ACTIONS(248), 2,
      sym_indexes,
      aux_sym_identifier_token1,
  [1162] = 2,
    ACTIONS(250), 1,
      anon_sym_RBRACE,
    ACTIONS(252), 2,
      sym_indexes,
      aux_sym_identifier_token1,
  [1170] = 3,
    ACTIONS(194), 1,
      anon_sym_COMMA,
    ACTIONS(254), 1,
      anon_sym_RBRACK,
    STATE(83), 1,
      aux_sym_relationship_definition_short_repeat1,
  [1180] = 1,
    ACTIONS(256), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1185] = 2,
    ACTIONS(258), 1,
      anon_sym_LBRACK,
    ACTIONS(260), 1,
      sym__newline,
  [1192] = 1,
    ACTIONS(262), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1197] = 2,
    ACTIONS(264), 1,
      anon_sym_COLON,
    ACTIONS(266), 1,
      sym__space,
  [1204] = 2,
    ACTIONS(70), 1,
      sym__newline,
    ACTIONS(268), 1,
      anon_sym_LBRACK,
  [1211] = 2,
    ACTIONS(270), 1,
      anon_sym_SQUOTE,
    STATE(167), 1,
      sym_enquoted_identifier_multi,
  [1218] = 2,
    ACTIONS(167), 1,
      aux_sym_identifier_token1,
    STATE(189), 1,
      sym_identifier,
  [1225] = 1,
    ACTIONS(272), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1230] = 2,
    ACTIONS(274), 1,
      anon_sym_SQUOTE,
    STATE(188), 1,
      sym_enquoted_identifier,
  [1237] = 1,
    ACTIONS(276), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1242] = 2,
    ACTIONS(167), 1,
      aux_sym_identifier_token1,
    STATE(185), 1,
      sym_identifier,
  [1249] = 1,
    ACTIONS(278), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1254] = 2,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      sym__newline,
  [1261] = 2,
    ACTIONS(284), 1,
      anon_sym_SQUOTE,
    ACTIONS(286), 1,
      anon_sym_BQUOTE,
  [1268] = 2,
    ACTIONS(288), 1,
      sym__identifier2,
    STATE(124), 1,
      sym_column_type_ref_item,
  [1275] = 1,
    ACTIONS(186), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1280] = 2,
    ACTIONS(167), 1,
      aux_sym_identifier_token1,
    STATE(194), 1,
      sym_identifier,
  [1287] = 2,
    ACTIONS(290), 1,
      anon_sym_LBRACE,
    ACTIONS(292), 1,
      sym_as,
  [1294] = 1,
    ACTIONS(294), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1299] = 1,
    ACTIONS(296), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1304] = 2,
    ACTIONS(298), 1,
      anon_sym_COLON,
    ACTIONS(300), 1,
      sym__space,
  [1311] = 2,
    ACTIONS(70), 1,
      sym__space,
    ACTIONS(268), 1,
      anon_sym_COLON,
  [1318] = 2,
    ACTIONS(262), 1,
      sym__newline,
    ACTIONS(302), 1,
      anon_sym_LBRACK,
  [1325] = 2,
    ACTIONS(304), 1,
      anon_sym_LBRACK,
    ACTIONS(306), 1,
      sym__newline,
  [1332] = 1,
    ACTIONS(308), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1337] = 1,
    ACTIONS(217), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1342] = 2,
    ACTIONS(238), 1,
      anon_sym_LBRACK,
    ACTIONS(310), 1,
      sym__newline,
  [1349] = 2,
    ACTIONS(312), 1,
      anon_sym_LBRACK,
    ACTIONS(314), 1,
      sym__newline,
  [1356] = 1,
    ACTIONS(316), 1,
      ts_builtin_sym_end,
  [1360] = 1,
    ACTIONS(318), 1,
      anon_sym_RBRACK,
  [1364] = 1,
    ACTIONS(320), 1,
      sym__space,
  [1368] = 1,
    ACTIONS(322), 1,
      sym__space,
  [1372] = 1,
    ACTIONS(324), 1,
      sym__space,
  [1376] = 1,
    ACTIONS(326), 1,
      sym__space,
  [1380] = 1,
    ACTIONS(328), 1,
      sym__space,
  [1384] = 1,
    ACTIONS(330), 1,
      anon_sym_RBRACE,
  [1388] = 1,
    ACTIONS(332), 1,
      sym__newline,
  [1392] = 1,
    ACTIONS(334), 1,
      sym__space,
  [1396] = 1,
    ACTIONS(336), 1,
      sym__space,
  [1400] = 1,
    ACTIONS(338), 1,
      sym__space,
  [1404] = 1,
    ACTIONS(340), 1,
      sym__space,
  [1408] = 1,
    ACTIONS(342), 1,
      sym__space,
  [1412] = 1,
    ACTIONS(344), 1,
      sym__space,
  [1416] = 1,
    ACTIONS(346), 1,
      sym__newline,
  [1420] = 1,
    ACTIONS(348), 1,
      sym__newline,
  [1424] = 1,
    ACTIONS(350), 1,
      sym__newline,
  [1428] = 1,
    ACTIONS(352), 1,
      sym__newline,
  [1432] = 1,
    ACTIONS(354), 1,
      sym__newline,
  [1436] = 1,
    ACTIONS(356), 1,
      sym__newline,
  [1440] = 1,
    ACTIONS(358), 1,
      sym__newline,
  [1444] = 1,
    ACTIONS(360), 1,
      sym__space,
  [1448] = 1,
    ACTIONS(362), 1,
      anon_sym_LBRACE,
  [1452] = 1,
    ACTIONS(364), 1,
      sym__space,
  [1456] = 1,
    ACTIONS(366), 1,
      anon_sym_LBRACE,
  [1460] = 1,
    ACTIONS(368), 1,
      anon_sym_LBRACE,
  [1464] = 1,
    ACTIONS(370), 1,
      sym__space,
  [1468] = 1,
    ACTIONS(372), 1,
      anon_sym_COLON,
  [1472] = 1,
    ACTIONS(374), 1,
      sym__newline,
  [1476] = 1,
    ACTIONS(376), 1,
      anon_sym_COLON,
  [1480] = 1,
    ACTIONS(378), 1,
      anon_sym_COLON,
  [1484] = 1,
    ACTIONS(380), 1,
      sym__space,
  [1488] = 1,
    ACTIONS(382), 1,
      aux_sym_identifier_token1,
  [1492] = 1,
    ACTIONS(48), 1,
      sym__space,
  [1496] = 1,
    ACTIONS(384), 1,
      sym__newline,
  [1500] = 1,
    ACTIONS(386), 1,
      anon_sym_RBRACE,
  [1504] = 1,
    ACTIONS(50), 1,
      sym__space,
  [1508] = 1,
    ACTIONS(388), 1,
      anon_sym_RBRACE,
  [1512] = 1,
    ACTIONS(390), 1,
      anon_sym_RBRACE,
  [1516] = 1,
    ACTIONS(392), 1,
      sym__space,
  [1520] = 1,
    ACTIONS(394), 1,
      sym__space,
  [1524] = 1,
    ACTIONS(396), 1,
      sym__newline,
  [1528] = 1,
    ACTIONS(398), 1,
      sym__space,
  [1532] = 1,
    ACTIONS(400), 1,
      sym__dot,
  [1536] = 1,
    ACTIONS(402), 1,
      anon_sym_COLON,
  [1540] = 1,
    ACTIONS(404), 1,
      anon_sym_COLON,
  [1544] = 1,
    ACTIONS(406), 1,
      anon_sym_RBRACK,
  [1548] = 1,
    ACTIONS(408), 1,
      sym__newline,
  [1552] = 1,
    ACTIONS(410), 1,
      sym__space,
  [1556] = 1,
    ACTIONS(412), 1,
      anon_sym_RBRACE,
  [1560] = 1,
    ACTIONS(414), 1,
      anon_sym_RBRACE,
  [1564] = 1,
    ACTIONS(416), 1,
      sym__newline,
  [1568] = 1,
    ACTIONS(418), 1,
      sym__space,
  [1572] = 1,
    ACTIONS(420), 1,
      anon_sym_COLON,
  [1576] = 1,
    ACTIONS(422), 1,
      sym__newline,
  [1580] = 1,
    ACTIONS(424), 1,
      anon_sym_COLON,
  [1584] = 1,
    ACTIONS(426), 1,
      sym__newline,
  [1588] = 1,
    ACTIONS(428), 1,
      sym__newline,
  [1592] = 1,
    ACTIONS(430), 1,
      sym__newline,
  [1596] = 1,
    ACTIONS(432), 1,
      anon_sym_RBRACK,
  [1600] = 1,
    ACTIONS(434), 1,
      anon_sym_LBRACE,
  [1604] = 1,
    ACTIONS(436), 1,
      sym__dot,
  [1608] = 1,
    ACTIONS(438), 1,
      anon_sym_RBRACK,
  [1612] = 1,
    ACTIONS(440), 1,
      anon_sym_SQUOTE,
  [1616] = 1,
    ACTIONS(442), 1,
      anon_sym_RBRACK,
  [1620] = 1,
    ACTIONS(444), 1,
      sym__newline,
  [1624] = 1,
    ACTIONS(326), 1,
      sym__dot,
  [1628] = 1,
    ACTIONS(446), 1,
      anon_sym_LBRACE,
  [1632] = 1,
    ACTIONS(448), 1,
      anon_sym_DQUOTE,
  [1636] = 1,
    ACTIONS(450), 1,
      sym__space,
  [1640] = 1,
    ACTIONS(452), 1,
      sym__newline,
  [1644] = 1,
    ACTIONS(454), 1,
      sym__space,
  [1648] = 1,
    ACTIONS(456), 1,
      sym__space,
  [1652] = 1,
    ACTIONS(50), 1,
      sym__newline,
  [1656] = 1,
    ACTIONS(48), 1,
      sym__newline,
  [1660] = 1,
    ACTIONS(458), 1,
      sym__dot,
  [1664] = 1,
    ACTIONS(460), 1,
      sym__dot,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 56,
  [SMALL_STATE(5)] = 76,
  [SMALL_STATE(6)] = 102,
  [SMALL_STATE(7)] = 114,
  [SMALL_STATE(8)] = 126,
  [SMALL_STATE(9)] = 152,
  [SMALL_STATE(10)] = 178,
  [SMALL_STATE(11)] = 194,
  [SMALL_STATE(12)] = 217,
  [SMALL_STATE(13)] = 240,
  [SMALL_STATE(14)] = 250,
  [SMALL_STATE(15)] = 272,
  [SMALL_STATE(16)] = 284,
  [SMALL_STATE(17)] = 306,
  [SMALL_STATE(18)] = 326,
  [SMALL_STATE(19)] = 338,
  [SMALL_STATE(20)] = 360,
  [SMALL_STATE(21)] = 369,
  [SMALL_STATE(22)] = 378,
  [SMALL_STATE(23)] = 387,
  [SMALL_STATE(24)] = 396,
  [SMALL_STATE(25)] = 409,
  [SMALL_STATE(26)] = 418,
  [SMALL_STATE(27)] = 431,
  [SMALL_STATE(28)] = 440,
  [SMALL_STATE(29)] = 449,
  [SMALL_STATE(30)] = 464,
  [SMALL_STATE(31)] = 473,
  [SMALL_STATE(32)] = 488,
  [SMALL_STATE(33)] = 497,
  [SMALL_STATE(34)] = 506,
  [SMALL_STATE(35)] = 519,
  [SMALL_STATE(36)] = 530,
  [SMALL_STATE(37)] = 539,
  [SMALL_STATE(38)] = 548,
  [SMALL_STATE(39)] = 557,
  [SMALL_STATE(40)] = 566,
  [SMALL_STATE(41)] = 581,
  [SMALL_STATE(42)] = 593,
  [SMALL_STATE(43)] = 607,
  [SMALL_STATE(44)] = 619,
  [SMALL_STATE(45)] = 631,
  [SMALL_STATE(46)] = 643,
  [SMALL_STATE(47)] = 657,
  [SMALL_STATE(48)] = 669,
  [SMALL_STATE(49)] = 681,
  [SMALL_STATE(50)] = 695,
  [SMALL_STATE(51)] = 707,
  [SMALL_STATE(52)] = 720,
  [SMALL_STATE(53)] = 731,
  [SMALL_STATE(54)] = 744,
  [SMALL_STATE(55)] = 757,
  [SMALL_STATE(56)] = 768,
  [SMALL_STATE(57)] = 779,
  [SMALL_STATE(58)] = 790,
  [SMALL_STATE(59)] = 803,
  [SMALL_STATE(60)] = 816,
  [SMALL_STATE(61)] = 827,
  [SMALL_STATE(62)] = 840,
  [SMALL_STATE(63)] = 851,
  [SMALL_STATE(64)] = 864,
  [SMALL_STATE(65)] = 877,
  [SMALL_STATE(66)] = 890,
  [SMALL_STATE(67)] = 900,
  [SMALL_STATE(68)] = 910,
  [SMALL_STATE(69)] = 916,
  [SMALL_STATE(70)] = 926,
  [SMALL_STATE(71)] = 936,
  [SMALL_STATE(72)] = 946,
  [SMALL_STATE(73)] = 954,
  [SMALL_STATE(74)] = 964,
  [SMALL_STATE(75)] = 974,
  [SMALL_STATE(76)] = 984,
  [SMALL_STATE(77)] = 994,
  [SMALL_STATE(78)] = 1004,
  [SMALL_STATE(79)] = 1014,
  [SMALL_STATE(80)] = 1024,
  [SMALL_STATE(81)] = 1034,
  [SMALL_STATE(82)] = 1042,
  [SMALL_STATE(83)] = 1052,
  [SMALL_STATE(84)] = 1062,
  [SMALL_STATE(85)] = 1072,
  [SMALL_STATE(86)] = 1082,
  [SMALL_STATE(87)] = 1092,
  [SMALL_STATE(88)] = 1098,
  [SMALL_STATE(89)] = 1108,
  [SMALL_STATE(90)] = 1118,
  [SMALL_STATE(91)] = 1124,
  [SMALL_STATE(92)] = 1134,
  [SMALL_STATE(93)] = 1144,
  [SMALL_STATE(94)] = 1154,
  [SMALL_STATE(95)] = 1162,
  [SMALL_STATE(96)] = 1170,
  [SMALL_STATE(97)] = 1180,
  [SMALL_STATE(98)] = 1185,
  [SMALL_STATE(99)] = 1192,
  [SMALL_STATE(100)] = 1197,
  [SMALL_STATE(101)] = 1204,
  [SMALL_STATE(102)] = 1211,
  [SMALL_STATE(103)] = 1218,
  [SMALL_STATE(104)] = 1225,
  [SMALL_STATE(105)] = 1230,
  [SMALL_STATE(106)] = 1237,
  [SMALL_STATE(107)] = 1242,
  [SMALL_STATE(108)] = 1249,
  [SMALL_STATE(109)] = 1254,
  [SMALL_STATE(110)] = 1261,
  [SMALL_STATE(111)] = 1268,
  [SMALL_STATE(112)] = 1275,
  [SMALL_STATE(113)] = 1280,
  [SMALL_STATE(114)] = 1287,
  [SMALL_STATE(115)] = 1294,
  [SMALL_STATE(116)] = 1299,
  [SMALL_STATE(117)] = 1304,
  [SMALL_STATE(118)] = 1311,
  [SMALL_STATE(119)] = 1318,
  [SMALL_STATE(120)] = 1325,
  [SMALL_STATE(121)] = 1332,
  [SMALL_STATE(122)] = 1337,
  [SMALL_STATE(123)] = 1342,
  [SMALL_STATE(124)] = 1349,
  [SMALL_STATE(125)] = 1356,
  [SMALL_STATE(126)] = 1360,
  [SMALL_STATE(127)] = 1364,
  [SMALL_STATE(128)] = 1368,
  [SMALL_STATE(129)] = 1372,
  [SMALL_STATE(130)] = 1376,
  [SMALL_STATE(131)] = 1380,
  [SMALL_STATE(132)] = 1384,
  [SMALL_STATE(133)] = 1388,
  [SMALL_STATE(134)] = 1392,
  [SMALL_STATE(135)] = 1396,
  [SMALL_STATE(136)] = 1400,
  [SMALL_STATE(137)] = 1404,
  [SMALL_STATE(138)] = 1408,
  [SMALL_STATE(139)] = 1412,
  [SMALL_STATE(140)] = 1416,
  [SMALL_STATE(141)] = 1420,
  [SMALL_STATE(142)] = 1424,
  [SMALL_STATE(143)] = 1428,
  [SMALL_STATE(144)] = 1432,
  [SMALL_STATE(145)] = 1436,
  [SMALL_STATE(146)] = 1440,
  [SMALL_STATE(147)] = 1444,
  [SMALL_STATE(148)] = 1448,
  [SMALL_STATE(149)] = 1452,
  [SMALL_STATE(150)] = 1456,
  [SMALL_STATE(151)] = 1460,
  [SMALL_STATE(152)] = 1464,
  [SMALL_STATE(153)] = 1468,
  [SMALL_STATE(154)] = 1472,
  [SMALL_STATE(155)] = 1476,
  [SMALL_STATE(156)] = 1480,
  [SMALL_STATE(157)] = 1484,
  [SMALL_STATE(158)] = 1488,
  [SMALL_STATE(159)] = 1492,
  [SMALL_STATE(160)] = 1496,
  [SMALL_STATE(161)] = 1500,
  [SMALL_STATE(162)] = 1504,
  [SMALL_STATE(163)] = 1508,
  [SMALL_STATE(164)] = 1512,
  [SMALL_STATE(165)] = 1516,
  [SMALL_STATE(166)] = 1520,
  [SMALL_STATE(167)] = 1524,
  [SMALL_STATE(168)] = 1528,
  [SMALL_STATE(169)] = 1532,
  [SMALL_STATE(170)] = 1536,
  [SMALL_STATE(171)] = 1540,
  [SMALL_STATE(172)] = 1544,
  [SMALL_STATE(173)] = 1548,
  [SMALL_STATE(174)] = 1552,
  [SMALL_STATE(175)] = 1556,
  [SMALL_STATE(176)] = 1560,
  [SMALL_STATE(177)] = 1564,
  [SMALL_STATE(178)] = 1568,
  [SMALL_STATE(179)] = 1572,
  [SMALL_STATE(180)] = 1576,
  [SMALL_STATE(181)] = 1580,
  [SMALL_STATE(182)] = 1584,
  [SMALL_STATE(183)] = 1588,
  [SMALL_STATE(184)] = 1592,
  [SMALL_STATE(185)] = 1596,
  [SMALL_STATE(186)] = 1600,
  [SMALL_STATE(187)] = 1604,
  [SMALL_STATE(188)] = 1608,
  [SMALL_STATE(189)] = 1612,
  [SMALL_STATE(190)] = 1616,
  [SMALL_STATE(191)] = 1620,
  [SMALL_STATE(192)] = 1624,
  [SMALL_STATE(193)] = 1628,
  [SMALL_STATE(194)] = 1632,
  [SMALL_STATE(195)] = 1636,
  [SMALL_STATE(196)] = 1640,
  [SMALL_STATE(197)] = 1644,
  [SMALL_STATE(198)] = 1648,
  [SMALL_STATE(199)] = 1652,
  [SMALL_STATE(200)] = 1656,
  [SMALL_STATE(201)] = 1660,
  [SMALL_STATE(202)] = 1664,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(197),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(195),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(100),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_name, 1, 0, 3),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_side, 3, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_indexes_definition_repeat1, 2, 0, 0),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_indexes_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_indexes_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 7, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_definition_repeat1, 2, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_definition_repeat1, 2, 0, 0),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(159),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 9, 0, 11),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_definition_repeat1, 2, 0, 0),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 10, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 7, 0, 5),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 11, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 11, 0, 16),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_long, 10, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_definition, 8, 0, 8),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_definition, 7, 0, 4),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_project_definition_repeat1, 2, 0, 0),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_project_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(156),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 8, 0, 5),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 8, 0, 9),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 13, 0, 11),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_long, 12, 0, 11),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 12, 0, 11),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 12, 0, 18),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 9, 0, 10),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_setting_default_repeat1, 2, 0, 0),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_setting_default_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_settings_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_settings_repeat1, 2, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 4, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_settings, 4, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_definition, 1, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 3, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_settings, 3, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relationship_definition_short_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relationship_definition_short_repeat1, 2, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_definition_composite_repeat1, 2, 0, 22), SHIFT_REPEAT(71),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_definition_composite_repeat1, 2, 0, 22),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_property_definition, 5, 0, 14),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_type_basic, 1, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_type_basic, 1, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_type_ref_item, 1, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 4, 0, 12),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definition, 4, 0, 12),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 4, 0, 13),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definition, 4, 0, 13),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_inline, 4, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_definition_composite, 4, 0, 21),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_definition_composite, 4, 0, 21),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column, 1, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_setting_default, 5, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_setting_default, 4, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_definition_composite_repeat1, 2, 0, 20),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_definition_composite, 3, 0, 20),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_definition_composite, 3, 0, 20),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_setting_definition, 4, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_action, 1, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_column, 1, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_definition_single, 1, 0, 17),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_definition_single, 1, 0, 17),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 1, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_type_ref_item, 1, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_type_ref, 3, 0, 15),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_type_ref, 3, 0, 15),
  [316] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_setting, 1, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 1, 0, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enquoted_identifier_multi, 3, 0, 0),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_name, 1, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_name, 1, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 1, 0, 7),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 1, 0, 6),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enquoted_identifier_multi, 2, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_property_key, 1, 0, 0),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_symbol, 1, 0, 0),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_definition, 2, 0, 19),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indexes_definition, 6, 0, 0),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indexes_definition, 5, 0, 0),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_alias, 1, 0, 2),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_settings, 3, 0, 0),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_event, 1, 0, 0),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_enquoted_identifier, 3, 0, 0),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_setting, 3, 0, 0),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_setting, 4, 0, 0),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enquoted_identifier, 3, 0, 0),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
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
