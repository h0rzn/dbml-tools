#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 218
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 102
#define ALIAS_COUNT 0
#define TOKEN_COUNT 50
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
  anon_sym_note = 14,
  anon_sym_primarykey = 15,
  anon_sym_pk = 16,
  anon_sym_null = 17,
  anon_sym_notnull = 18,
  anon_sym_unique = 19,
  anon_sym_increment = 20,
  sym__identifier2 = 21,
  sym_Table = 22,
  sym_as = 23,
  anon_sym_LPAREN = 24,
  anon_sym_RPAREN = 25,
  anon_sym_name = 26,
  anon_sym_type = 27,
  sym_indexes = 28,
  sym_enum = 29,
  anon_sym_ref_COLON = 30,
  anon_sym_delete = 31,
  anon_sym_on_delete = 32,
  anon_sym_update = 33,
  anon_sym_on_update = 34,
  anon_sym_cascade = 35,
  anon_sym_restrict = 36,
  anon_sym_setnull = 37,
  anon_sym_setdefault = 38,
  anon_sym_noaction = 39,
  anon_sym_DASH = 40,
  anon_sym_LT = 41,
  anon_sym_GT = 42,
  anon_sym_LT_GT = 43,
  sym_Ref = 44,
  aux_sym_identifier_token1 = 45,
  sym__newline = 46,
  sym__space = 47,
  sym__dot = 48,
  anon_sym_DQUOTE = 49,
  sym_source_file = 50,
  sym__definition = 51,
  sym_project_definition = 52,
  sym_project_name = 53,
  sym_project_property_definition = 54,
  sym_project_property_key = 55,
  sym_table_definition = 56,
  sym_table_name = 57,
  sym_column_definition = 58,
  sym_column_name = 59,
  sym__column_type = 60,
  sym_column_type_basic = 61,
  sym_column_type_ref = 62,
  sym_column_type_ref_item = 63,
  sym_column_settings = 64,
  sym_column_setting_default = 65,
  sym_column_setting_note = 66,
  sym_column_constraint = 67,
  sym_table_alias = 68,
  sym_indexes_definition = 69,
  sym_index_definition = 70,
  sym_index_definition_single = 71,
  sym_index_definition_composite = 72,
  sym_index_column = 73,
  sym_index_settings = 74,
  sym_index_setting = 75,
  sym_enum_definition = 76,
  sym_enum_field = 77,
  sym_enum_name = 78,
  sym_relationship_definition_short = 79,
  sym_relationship_definition_inline = 80,
  sym_relationship_definition_long = 81,
  sym_relationship_definition_side = 82,
  sym_relationship_setting_definition = 83,
  sym_relationship_event = 84,
  sym_relationship_action = 85,
  sym_relationship_symbol = 86,
  sym_identifier = 87,
  sym_enquoted_identifier = 88,
  sym_enquoted_identifier_multi = 89,
  sym_double_enquoted_identifier = 90,
  sym__hidden_identifier = 91,
  sym_field_note_standalone = 92,
  aux_sym_source_file_repeat1 = 93,
  aux_sym_project_definition_repeat1 = 94,
  aux_sym_table_definition_repeat1 = 95,
  aux_sym_column_settings_repeat1 = 96,
  aux_sym_column_setting_default_repeat1 = 97,
  aux_sym_indexes_definition_repeat1 = 98,
  aux_sym_index_definition_composite_repeat1 = 99,
  aux_sym_enum_definition_repeat1 = 100,
  aux_sym_relationship_definition_short_repeat1 = 101,
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
  [anon_sym_note] = "note",
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
  [sym_column_setting_note] = "column_setting_note",
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
  [sym_field_note_standalone] = "field_note_standalone",
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
  [anon_sym_note] = anon_sym_note,
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
  [sym_column_setting_note] = sym_column_setting_note,
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
  [sym_field_note_standalone] = sym_field_note_standalone,
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
  [anon_sym_note] = {
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
  [sym_column_setting_note] = {
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
  [sym_field_note_standalone] = {
    .visible = true,
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
  [58] = 51,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 59,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 70,
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
  [88] = 88,
  [89] = 70,
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
  [108] = 15,
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
  [120] = 15,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 104,
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
  [141] = 105,
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
  [159] = 106,
  [160] = 160,
  [161] = 161,
  [162] = 162,
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
  [184] = 7,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 8,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 162,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 8,
  [213] = 7,
  [214] = 177,
  [215] = 215,
  [216] = 216,
  [217] = 177,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(137);
      ADVANCE_MAP(
        '"', 193,
        '\'', 149,
        '(', 161,
        ')', 162,
        ',', 146,
        '-', 178,
        '.', 192,
        '/', 8,
        ':', 141,
        '<', 179,
        '>', 180,
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
      if (lookahead == '\n') ADVANCE(190);
      if (lookahead == '.') ADVANCE(192);
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
      if (lookahead == ' ') ADVANCE(191);
      if (lookahead == ':') ADVANCE(141);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '"', 193,
        '\'', 149,
        '(', 161,
        ')', 162,
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
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(138);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(168);
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
      if (lookahead == 'c') ADVANCE(111);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(113);
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
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(172);
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
      if (lookahead == 'e') ADVANCE(110);
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
      if (lookahead == 'f') ADVANCE(182);
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
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead == '}') ADVANCE(140);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(67);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
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
      if (lookahead == 'k') ADVANCE(153);
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 73:
      if (lookahead == 'k') ADVANCE(53);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(154);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(155);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(175);
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
      if (lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 84:
      if (lookahead == 'm') ADVANCE(167);
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
      if (lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == 'p') ADVANCE(32);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(114);
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
      if (lookahead == 's') ADVANCE(160);
      END_STATE();
    case 107:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 108:
      if (lookahead == 's') ADVANCE(165);
      END_STATE();
    case 109:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(2);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(176);
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
      if (lookahead == 'y') ADVANCE(152);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
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
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_primarykey);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_pk);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_notnull);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_unique);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_increment);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__identifier2);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_Table);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_as);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_indexes);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_indexes);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_enum);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_ref_COLON);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_on_delete);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_update);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_on_update);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_cascade);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_restrict);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_setnull);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_setdefault);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_noaction);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '>') ADVANCE(181);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_Ref);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(184);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(188);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'x') ADVANCE(185);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == ' ') ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__dot);
      END_STATE();
    case 193:
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
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 67},
  [12] = {.lex_state = 67},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 67},
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
  [44] = {.lex_state = 136},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 7},
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
  [68] = {.lex_state = 67},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 7},
  [77] = {.lex_state = 7},
  [78] = {.lex_state = 7},
  [79] = {.lex_state = 7},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 67},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 7},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 67},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 7},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 7},
  [100] = {.lex_state = 67},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 7},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 136},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 7},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
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
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 4},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 4},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 4},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 4},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 4},
  [163] = {.lex_state = 4},
  [164] = {.lex_state = 4},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 4},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 1},
  [169] = {.lex_state = 4},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 1},
  [173] = {.lex_state = 1},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 4},
  [181] = {.lex_state = 4},
  [182] = {.lex_state = 7},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 4},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 1},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 4},
  [193] = {.lex_state = 4},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 1},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 4},
  [205] = {.lex_state = 4},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 1},
  [208] = {.lex_state = 1},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 1},
  [212] = {.lex_state = 1},
  [213] = {.lex_state = 1},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 4},
  [216] = {.lex_state = 4},
  [217] = {.lex_state = 0},
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
    [anon_sym_note] = ACTIONS(1),
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
    [sym_source_file] = STATE(206),
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
    STATE(4), 7,
      sym__definition,
      sym_project_definition,
      sym_table_definition,
      sym_enum_definition,
      sym_relationship_definition_short,
      sym_relationship_definition_long,
      aux_sym_source_file_repeat1,
  [28] = 5,
    ACTIONS(19), 1,
      anon_sym_default,
    ACTIONS(21), 1,
      anon_sym_note,
    ACTIONS(25), 1,
      anon_sym_ref_COLON,
    STATE(90), 4,
      sym_column_setting_default,
      sym_column_setting_note,
      sym_column_constraint,
      sym_relationship_definition_inline,
    ACTIONS(23), 6,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_increment,
  [52] = 7,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(32), 1,
      sym_Project,
    ACTIONS(35), 1,
      sym_Table,
    ACTIONS(38), 1,
      sym_enum,
    ACTIONS(41), 1,
      sym_Ref,
    STATE(4), 7,
      sym__definition,
      sym_project_definition,
      sym_table_definition,
      sym_enum_definition,
      sym_relationship_definition_short,
      sym_relationship_definition_long,
      aux_sym_source_file_repeat1,
  [80] = 5,
    ACTIONS(19), 1,
      anon_sym_default,
    ACTIONS(21), 1,
      anon_sym_note,
    ACTIONS(25), 1,
      anon_sym_ref_COLON,
    STATE(123), 4,
      sym_column_setting_default,
      sym_column_setting_note,
      sym_column_constraint,
      sym_relationship_definition_inline,
    ACTIONS(23), 6,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_increment,
  [104] = 8,
    ACTIONS(44), 1,
      anon_sym_RBRACE,
    ACTIONS(46), 1,
      anon_sym_LPAREN,
    ACTIONS(48), 1,
      aux_sym_identifier_token1,
    STATE(9), 1,
      aux_sym_indexes_definition_repeat1,
    STATE(127), 1,
      sym_identifier,
    STATE(128), 1,
      sym_index_column,
    STATE(151), 1,
      sym_index_definition,
    STATE(85), 2,
      sym_index_definition_single,
      sym_index_definition_composite,
  [130] = 1,
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
  [142] = 1,
    ACTIONS(52), 9,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_Table,
      sym_enum,
      sym_Ref,
  [154] = 8,
    ACTIONS(54), 1,
      anon_sym_RBRACE,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      aux_sym_identifier_token1,
    STATE(9), 1,
      aux_sym_indexes_definition_repeat1,
    STATE(127), 1,
      sym_identifier,
    STATE(128), 1,
      sym_index_column,
    STATE(151), 1,
      sym_index_definition,
    STATE(85), 2,
      sym_index_definition_single,
      sym_index_definition_composite,
  [180] = 8,
    ACTIONS(46), 1,
      anon_sym_LPAREN,
    ACTIONS(48), 1,
      aux_sym_identifier_token1,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      aux_sym_indexes_definition_repeat1,
    STATE(127), 1,
      sym_identifier,
    STATE(128), 1,
      sym_index_column,
    STATE(151), 1,
      sym_index_definition,
    STATE(85), 2,
      sym_index_definition_single,
      sym_index_definition_composite,
  [206] = 7,
    ACTIONS(64), 1,
      anon_sym_RBRACE,
    ACTIONS(66), 1,
      sym_indexes,
    ACTIONS(68), 1,
      aux_sym_identifier_token1,
    STATE(147), 1,
      sym_indexes_definition,
    STATE(171), 1,
      sym_column_name,
    STATE(184), 1,
      sym__hidden_identifier,
    STATE(18), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [229] = 7,
    ACTIONS(66), 1,
      sym_indexes,
    ACTIONS(68), 1,
      aux_sym_identifier_token1,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    STATE(171), 1,
      sym_column_name,
    STATE(179), 1,
      sym_indexes_definition,
    STATE(184), 1,
      sym__hidden_identifier,
    STATE(18), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [252] = 2,
    ACTIONS(74), 1,
      anon_sym_LBRACK,
    ACTIONS(72), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [264] = 7,
    ACTIONS(48), 1,
      aux_sym_identifier_token1,
    ACTIONS(76), 1,
      anon_sym_RBRACE,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    STATE(16), 1,
      aux_sym_enum_definition_repeat1,
    STATE(83), 1,
      sym_enum_field,
    STATE(102), 1,
      sym_double_enquoted_identifier,
    STATE(122), 1,
      sym_identifier,
  [286] = 1,
    ACTIONS(80), 7,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_RPAREN,
      aux_sym_identifier_token1,
      anon_sym_DQUOTE,
  [296] = 7,
    ACTIONS(82), 1,
      anon_sym_RBRACE,
    ACTIONS(84), 1,
      aux_sym_identifier_token1,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    STATE(16), 1,
      aux_sym_enum_definition_repeat1,
    STATE(83), 1,
      sym_enum_field,
    STATE(102), 1,
      sym_double_enquoted_identifier,
    STATE(122), 1,
      sym_identifier,
  [318] = 2,
    ACTIONS(92), 1,
      anon_sym_LBRACK,
    ACTIONS(90), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [330] = 6,
    ACTIONS(94), 1,
      anon_sym_RBRACE,
    ACTIONS(96), 1,
      sym_indexes,
    ACTIONS(98), 1,
      aux_sym_identifier_token1,
    STATE(171), 1,
      sym_column_name,
    STATE(184), 1,
      sym__hidden_identifier,
    STATE(18), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [350] = 7,
    ACTIONS(48), 1,
      aux_sym_identifier_token1,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      aux_sym_enum_definition_repeat1,
    STATE(83), 1,
      sym_enum_field,
    STATE(102), 1,
      sym_double_enquoted_identifier,
    STATE(122), 1,
      sym_identifier,
  [372] = 1,
    ACTIONS(103), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [381] = 4,
    ACTIONS(105), 1,
      anon_sym_RBRACE,
    STATE(175), 1,
      sym_project_property_key,
    ACTIONS(107), 2,
      anon_sym_database_type,
      anon_sym_Note,
    STATE(21), 2,
      sym_project_property_definition,
      aux_sym_project_definition_repeat1,
  [396] = 1,
    ACTIONS(110), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [405] = 3,
    STATE(94), 1,
      sym_relationship_setting_definition,
    STATE(191), 1,
      sym_relationship_event,
    ACTIONS(112), 4,
      anon_sym_delete,
      anon_sym_on_delete,
      anon_sym_update,
      anon_sym_on_update,
  [418] = 1,
    ACTIONS(114), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [427] = 1,
    ACTIONS(116), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [436] = 2,
    STATE(125), 1,
      sym_relationship_action,
    ACTIONS(118), 5,
      anon_sym_cascade,
      anon_sym_restrict,
      anon_sym_setnull,
      anon_sym_setdefault,
      anon_sym_noaction,
  [447] = 1,
    ACTIONS(120), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [456] = 1,
    ACTIONS(122), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [465] = 1,
    ACTIONS(124), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [474] = 1,
    ACTIONS(126), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [483] = 3,
    STATE(96), 1,
      sym_relationship_setting_definition,
    STATE(191), 1,
      sym_relationship_event,
    ACTIONS(112), 4,
      anon_sym_delete,
      anon_sym_on_delete,
      anon_sym_update,
      anon_sym_on_update,
  [496] = 1,
    ACTIONS(128), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [505] = 4,
    ACTIONS(130), 1,
      anon_sym_RBRACE,
    STATE(175), 1,
      sym_project_property_key,
    ACTIONS(132), 2,
      anon_sym_database_type,
      anon_sym_Note,
    STATE(21), 2,
      sym_project_property_definition,
      aux_sym_project_definition_repeat1,
  [520] = 3,
    STATE(135), 1,
      sym_relationship_setting_definition,
    STATE(191), 1,
      sym_relationship_event,
    ACTIONS(112), 4,
      anon_sym_delete,
      anon_sym_on_delete,
      anon_sym_update,
      anon_sym_on_update,
  [533] = 1,
    ACTIONS(134), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [542] = 1,
    ACTIONS(136), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [551] = 1,
    ACTIONS(138), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [560] = 1,
    ACTIONS(140), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [569] = 4,
    ACTIONS(142), 1,
      anon_sym_RBRACE,
    STATE(175), 1,
      sym_project_property_key,
    ACTIONS(132), 2,
      anon_sym_database_type,
      anon_sym_Note,
    STATE(33), 2,
      sym_project_property_definition,
      aux_sym_project_definition_repeat1,
  [584] = 1,
    ACTIONS(144), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [593] = 4,
    ACTIONS(148), 1,
      anon_sym_name,
    ACTIONS(150), 1,
      anon_sym_type,
    STATE(188), 1,
      sym_index_setting,
    ACTIONS(146), 2,
      anon_sym_pk,
      anon_sym_unique,
  [607] = 4,
    ACTIONS(152), 1,
      aux_sym_identifier_token1,
    STATE(171), 1,
      sym_column_name,
    STATE(184), 1,
      sym__hidden_identifier,
    STATE(11), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [621] = 3,
    ACTIONS(156), 1,
      anon_sym_LT,
    STATE(54), 1,
      sym_relationship_symbol,
    ACTIONS(154), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [633] = 3,
    ACTIONS(158), 1,
      sym__identifier2,
    STATE(202), 1,
      sym_column_type_ref_item,
    STATE(98), 3,
      sym__column_type,
      sym_column_type_basic,
      sym_column_type_ref,
  [645] = 3,
    ACTIONS(156), 1,
      anon_sym_LT,
    STATE(61), 1,
      sym_relationship_symbol,
    ACTIONS(154), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [657] = 4,
    ACTIONS(152), 1,
      aux_sym_identifier_token1,
    STATE(171), 1,
      sym_column_name,
    STATE(184), 1,
      sym__hidden_identifier,
    STATE(12), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [671] = 3,
    ACTIONS(156), 1,
      anon_sym_LT,
    STATE(57), 1,
      sym_relationship_symbol,
    ACTIONS(154), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [683] = 3,
    ACTIONS(162), 1,
      aux_sym_identifier_token1,
    ACTIONS(160), 2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
    STATE(48), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [695] = 3,
    ACTIONS(156), 1,
      anon_sym_LT,
    STATE(55), 1,
      sym_relationship_symbol,
    ACTIONS(154), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [707] = 3,
    ACTIONS(156), 1,
      anon_sym_LT,
    STATE(67), 1,
      sym_relationship_symbol,
    ACTIONS(154), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [719] = 3,
    ACTIONS(165), 1,
      anon_sym_SQUOTE,
    ACTIONS(167), 1,
      aux_sym_identifier_token1,
    STATE(48), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [730] = 4,
    ACTIONS(169), 1,
      aux_sym_identifier_token1,
    STATE(152), 1,
      sym_relationship_definition_side,
    STATE(177), 1,
      sym_table_name,
    STATE(203), 1,
      sym__hidden_identifier,
  [743] = 4,
    ACTIONS(169), 1,
      aux_sym_identifier_token1,
    STATE(177), 1,
      sym_table_name,
    STATE(180), 1,
      sym_relationship_definition_side,
    STATE(203), 1,
      sym__hidden_identifier,
  [756] = 4,
    ACTIONS(169), 1,
      aux_sym_identifier_token1,
    STATE(118), 1,
      sym_relationship_definition_side,
    STATE(203), 1,
      sym__hidden_identifier,
    STATE(214), 1,
      sym_table_name,
  [769] = 4,
    ACTIONS(169), 1,
      aux_sym_identifier_token1,
    STATE(17), 1,
      sym_relationship_definition_side,
    STATE(203), 1,
      sym__hidden_identifier,
    STATE(214), 1,
      sym_table_name,
  [782] = 3,
    ACTIONS(167), 1,
      aux_sym_identifier_token1,
    ACTIONS(171), 1,
      anon_sym_BQUOTE,
    STATE(65), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [793] = 4,
    ACTIONS(169), 1,
      aux_sym_identifier_token1,
    STATE(165), 1,
      sym_relationship_definition_side,
    STATE(203), 1,
      sym__hidden_identifier,
    STATE(217), 1,
      sym_table_name,
  [806] = 3,
    ACTIONS(167), 1,
      aux_sym_identifier_token1,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    STATE(48), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [817] = 3,
    ACTIONS(167), 1,
      aux_sym_identifier_token1,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    STATE(58), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [828] = 4,
    ACTIONS(169), 1,
      aux_sym_identifier_token1,
    STATE(143), 1,
      sym_relationship_definition_side,
    STATE(177), 1,
      sym_table_name,
    STATE(203), 1,
      sym__hidden_identifier,
  [841] = 4,
    ACTIONS(169), 1,
      aux_sym_identifier_token1,
    STATE(13), 1,
      sym_relationship_definition_side,
    STATE(203), 1,
      sym__hidden_identifier,
    STATE(214), 1,
      sym_table_name,
  [854] = 3,
    ACTIONS(167), 1,
      aux_sym_identifier_token1,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    STATE(63), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [865] = 3,
    ACTIONS(167), 1,
      aux_sym_identifier_token1,
    ACTIONS(177), 1,
      anon_sym_SQUOTE,
    STATE(48), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [876] = 4,
    ACTIONS(169), 1,
      aux_sym_identifier_token1,
    STATE(142), 1,
      sym_relationship_definition_side,
    STATE(177), 1,
      sym_table_name,
    STATE(203), 1,
      sym__hidden_identifier,
  [889] = 3,
    ACTIONS(167), 1,
      aux_sym_identifier_token1,
    ACTIONS(177), 1,
      anon_sym_BQUOTE,
    STATE(48), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [900] = 3,
    ACTIONS(167), 1,
      aux_sym_identifier_token1,
    ACTIONS(179), 1,
      anon_sym_SQUOTE,
    STATE(51), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [911] = 4,
    ACTIONS(169), 1,
      aux_sym_identifier_token1,
    STATE(203), 1,
      sym__hidden_identifier,
    STATE(207), 1,
      sym_relationship_definition_side,
    STATE(217), 1,
      sym_table_name,
  [924] = 2,
    ACTIONS(181), 1,
      anon_sym_RBRACE,
    ACTIONS(183), 2,
      sym_indexes,
      aux_sym_identifier_token1,
  [932] = 3,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(187), 1,
      anon_sym_RBRACK,
    STATE(92), 1,
      aux_sym_relationship_definition_short_repeat1,
  [942] = 3,
    ACTIONS(189), 1,
      aux_sym_identifier_token1,
    STATE(212), 1,
      sym_column_name,
    STATE(213), 1,
      sym__hidden_identifier,
  [952] = 3,
    ACTIONS(191), 1,
      aux_sym_identifier_token1,
    STATE(164), 1,
      sym_identifier,
    STATE(166), 1,
      sym_project_name,
  [962] = 3,
    ACTIONS(193), 1,
      aux_sym_identifier_token1,
    STATE(7), 1,
      sym__hidden_identifier,
    STATE(8), 1,
      sym_column_name,
  [972] = 3,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    ACTIONS(198), 1,
      anon_sym_RPAREN,
    STATE(73), 1,
      aux_sym_index_definition_composite_repeat1,
  [982] = 3,
    ACTIONS(200), 1,
      anon_sym_COMMA,
    ACTIONS(202), 1,
      anon_sym_RPAREN,
    STATE(73), 1,
      aux_sym_index_definition_composite_repeat1,
  [992] = 3,
    ACTIONS(167), 1,
      aux_sym_identifier_token1,
    STATE(104), 1,
      sym_identifier,
    STATE(114), 1,
      sym_index_column,
  [1002] = 3,
    ACTIONS(204), 1,
      aux_sym_identifier_token1,
    STATE(162), 1,
      sym__hidden_identifier,
    STATE(163), 1,
      sym_table_name,
  [1012] = 3,
    ACTIONS(191), 1,
      aux_sym_identifier_token1,
    STATE(156), 1,
      sym_identifier,
    STATE(160), 1,
      sym_enum_name,
  [1022] = 3,
    ACTIONS(191), 1,
      aux_sym_identifier_token1,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    STATE(130), 1,
      sym_identifier,
  [1032] = 1,
    ACTIONS(54), 3,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_identifier_token1,
  [1038] = 3,
    ACTIONS(200), 1,
      anon_sym_COMMA,
    ACTIONS(208), 1,
      anon_sym_RPAREN,
    STATE(74), 1,
      aux_sym_index_definition_composite_repeat1,
  [1048] = 3,
    ACTIONS(210), 1,
      anon_sym_COMMA,
    ACTIONS(213), 1,
      anon_sym_RBRACK,
    STATE(81), 1,
      aux_sym_column_settings_repeat1,
  [1058] = 2,
    ACTIONS(215), 1,
      anon_sym_RBRACE,
    ACTIONS(217), 2,
      sym_indexes,
      aux_sym_identifier_token1,
  [1066] = 3,
    ACTIONS(219), 1,
      anon_sym_LBRACK,
    ACTIONS(221), 1,
      sym__newline,
    STATE(208), 1,
      sym_field_note_standalone,
  [1076] = 3,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(223), 1,
      anon_sym_RBRACK,
    STATE(92), 1,
      aux_sym_relationship_definition_short_repeat1,
  [1086] = 3,
    ACTIONS(225), 1,
      anon_sym_LBRACK,
    ACTIONS(227), 1,
      sym__newline,
    STATE(173), 1,
      sym_index_settings,
  [1096] = 3,
    ACTIONS(167), 1,
      aux_sym_identifier_token1,
    STATE(80), 1,
      sym_index_column,
    STATE(104), 1,
      sym_identifier,
  [1106] = 3,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(231), 1,
      anon_sym_RBRACK,
    STATE(81), 1,
      aux_sym_column_settings_repeat1,
  [1116] = 2,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    ACTIONS(235), 2,
      sym_indexes,
      aux_sym_identifier_token1,
  [1124] = 3,
    ACTIONS(152), 1,
      aux_sym_identifier_token1,
    STATE(184), 1,
      sym__hidden_identifier,
    STATE(192), 1,
      sym_column_name,
  [1134] = 3,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(237), 1,
      anon_sym_RBRACK,
    STATE(87), 1,
      aux_sym_column_settings_repeat1,
  [1144] = 1,
    ACTIONS(239), 3,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
      anon_sym_DQUOTE,
  [1150] = 3,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    ACTIONS(244), 1,
      anon_sym_RBRACK,
    STATE(92), 1,
      aux_sym_relationship_definition_short_repeat1,
  [1160] = 1,
    ACTIONS(82), 3,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
      anon_sym_DQUOTE,
  [1166] = 3,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(246), 1,
      anon_sym_RBRACK,
    STATE(69), 1,
      aux_sym_relationship_definition_short_repeat1,
  [1176] = 1,
    ACTIONS(248), 3,
      anon_sym_RBRACE,
      anon_sym_database_type,
      anon_sym_Note,
  [1182] = 3,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(250), 1,
      anon_sym_RBRACK,
    STATE(84), 1,
      aux_sym_relationship_definition_short_repeat1,
  [1192] = 3,
    ACTIONS(252), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      sym__newline,
    ACTIONS(256), 1,
      sym__dot,
  [1202] = 3,
    ACTIONS(258), 1,
      anon_sym_LBRACK,
    ACTIONS(260), 1,
      sym__newline,
    STATE(100), 1,
      sym_column_settings,
  [1212] = 3,
    ACTIONS(262), 1,
      aux_sym_identifier_token1,
    STATE(204), 1,
      sym__hidden_identifier,
    STATE(205), 1,
      sym_table_alias,
  [1222] = 2,
    ACTIONS(264), 1,
      anon_sym_RBRACE,
    ACTIONS(266), 2,
      sym_indexes,
      aux_sym_identifier_token1,
  [1230] = 2,
    ACTIONS(268), 1,
      anon_sym_SQUOTE,
    ACTIONS(270), 1,
      anon_sym_BQUOTE,
  [1237] = 2,
    ACTIONS(272), 1,
      anon_sym_LBRACK,
    ACTIONS(274), 1,
      sym__newline,
  [1244] = 2,
    ACTIONS(276), 1,
      anon_sym_COLON,
    ACTIONS(278), 1,
      sym__space,
  [1251] = 1,
    ACTIONS(280), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1256] = 1,
    ACTIONS(282), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1261] = 1,
    ACTIONS(284), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1266] = 2,
    ACTIONS(286), 1,
      anon_sym_SQUOTE,
    STATE(189), 1,
      sym_enquoted_identifier_multi,
  [1273] = 2,
    ACTIONS(80), 1,
      sym__newline,
    ACTIONS(288), 1,
      anon_sym_LBRACK,
  [1280] = 2,
    ACTIONS(167), 1,
      aux_sym_identifier_token1,
    STATE(200), 1,
      sym_identifier,
  [1287] = 2,
    ACTIONS(290), 1,
      anon_sym_LBRACK,
    ACTIONS(292), 1,
      sym__newline,
  [1294] = 2,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    STATE(199), 1,
      sym_enquoted_identifier,
  [1301] = 2,
    ACTIONS(167), 1,
      aux_sym_identifier_token1,
    STATE(197), 1,
      sym_identifier,
  [1308] = 2,
    ACTIONS(296), 1,
      anon_sym_LBRACK,
    ACTIONS(298), 1,
      sym__newline,
  [1315] = 1,
    ACTIONS(300), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1320] = 1,
    ACTIONS(302), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1325] = 2,
    ACTIONS(304), 1,
      sym__identifier2,
    STATE(132), 1,
      sym_column_type_ref_item,
  [1332] = 2,
    ACTIONS(306), 1,
      anon_sym_LBRACK,
    ACTIONS(308), 1,
      sym__newline,
  [1339] = 1,
    ACTIONS(310), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1344] = 1,
    ACTIONS(312), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1349] = 2,
    ACTIONS(80), 1,
      sym__space,
    ACTIONS(288), 1,
      anon_sym_COLON,
  [1356] = 2,
    ACTIONS(167), 1,
      aux_sym_identifier_token1,
    STATE(210), 1,
      sym_identifier,
  [1363] = 2,
    ACTIONS(314), 1,
      anon_sym_LBRACK,
    ACTIONS(316), 1,
      sym__newline,
  [1370] = 1,
    ACTIONS(213), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1375] = 1,
    ACTIONS(318), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1380] = 1,
    ACTIONS(320), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1385] = 1,
    ACTIONS(322), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1390] = 2,
    ACTIONS(280), 1,
      sym__newline,
    ACTIONS(324), 1,
      anon_sym_LBRACK,
  [1397] = 2,
    ACTIONS(326), 1,
      anon_sym_LBRACK,
    ACTIONS(328), 1,
      sym__newline,
  [1404] = 1,
    ACTIONS(330), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1409] = 2,
    ACTIONS(332), 1,
      anon_sym_COLON,
    ACTIONS(334), 1,
      sym__space,
  [1416] = 2,
    ACTIONS(256), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      sym__newline,
  [1423] = 2,
    ACTIONS(338), 1,
      anon_sym_LBRACK,
    ACTIONS(340), 1,
      sym__newline,
  [1430] = 2,
    ACTIONS(342), 1,
      anon_sym_SQUOTE,
    STATE(124), 1,
      sym_enquoted_identifier_multi,
  [1437] = 2,
    ACTIONS(344), 1,
      anon_sym_LBRACE,
    ACTIONS(346), 1,
      sym_as,
  [1444] = 1,
    ACTIONS(244), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1449] = 2,
    ACTIONS(342), 1,
      anon_sym_SQUOTE,
    STATE(157), 1,
      sym_enquoted_identifier_multi,
  [1456] = 1,
    ACTIONS(348), 1,
      sym__space,
  [1460] = 1,
    ACTIONS(350), 1,
      sym__space,
  [1464] = 1,
    ACTIONS(352), 1,
      anon_sym_LBRACE,
  [1468] = 1,
    ACTIONS(354), 1,
      anon_sym_RBRACE,
  [1472] = 1,
    ACTIONS(282), 1,
      sym__newline,
  [1476] = 1,
    ACTIONS(356), 1,
      sym__space,
  [1480] = 1,
    ACTIONS(358), 1,
      sym__space,
  [1484] = 1,
    ACTIONS(360), 1,
      sym__space,
  [1488] = 1,
    ACTIONS(362), 1,
      anon_sym_LBRACE,
  [1492] = 1,
    ACTIONS(364), 1,
      sym__space,
  [1496] = 1,
    ACTIONS(366), 1,
      anon_sym_RBRACE,
  [1500] = 1,
    ACTIONS(368), 1,
      sym__space,
  [1504] = 1,
    ACTIONS(370), 1,
      anon_sym_RBRACE,
  [1508] = 1,
    ACTIONS(372), 1,
      sym__space,
  [1512] = 1,
    ACTIONS(374), 1,
      sym__newline,
  [1516] = 1,
    ACTIONS(376), 1,
      sym__space,
  [1520] = 1,
    ACTIONS(378), 1,
      anon_sym_COLON,
  [1524] = 1,
    ACTIONS(380), 1,
      anon_sym_COLON,
  [1528] = 1,
    ACTIONS(382), 1,
      sym__newline,
  [1532] = 1,
    ACTIONS(384), 1,
      sym__space,
  [1536] = 1,
    ACTIONS(386), 1,
      anon_sym_RBRACK,
  [1540] = 1,
    ACTIONS(388), 1,
      anon_sym_LBRACE,
  [1544] = 1,
    ACTIONS(284), 1,
      sym__newline,
  [1548] = 1,
    ACTIONS(390), 1,
      sym__space,
  [1552] = 1,
    ACTIONS(392), 1,
      sym__newline,
  [1556] = 1,
    ACTIONS(394), 1,
      sym__space,
  [1560] = 1,
    ACTIONS(396), 1,
      sym__space,
  [1564] = 1,
    ACTIONS(398), 1,
      sym__space,
  [1568] = 1,
    ACTIONS(400), 1,
      sym__newline,
  [1572] = 1,
    ACTIONS(402), 1,
      sym__space,
  [1576] = 1,
    ACTIONS(404), 1,
      sym__newline,
  [1580] = 1,
    ACTIONS(406), 1,
      sym__newline,
  [1584] = 1,
    ACTIONS(408), 1,
      sym__space,
  [1588] = 1,
    ACTIONS(410), 1,
      anon_sym_LBRACE,
  [1592] = 1,
    ACTIONS(412), 1,
      sym__space,
  [1596] = 1,
    ACTIONS(414), 1,
      sym__newline,
  [1600] = 1,
    ACTIONS(416), 1,
      sym__newline,
  [1604] = 1,
    ACTIONS(418), 1,
      anon_sym_RBRACE,
  [1608] = 1,
    ACTIONS(420), 1,
      anon_sym_COLON,
  [1612] = 1,
    ACTIONS(422), 1,
      sym__newline,
  [1616] = 1,
    ACTIONS(424), 1,
      sym__dot,
  [1620] = 1,
    ACTIONS(426), 1,
      anon_sym_COLON,
  [1624] = 1,
    ACTIONS(428), 1,
      anon_sym_RBRACE,
  [1628] = 1,
    ACTIONS(430), 1,
      sym__space,
  [1632] = 1,
    ACTIONS(432), 1,
      sym__space,
  [1636] = 1,
    ACTIONS(434), 1,
      aux_sym_identifier_token1,
  [1640] = 1,
    ACTIONS(436), 1,
      sym__newline,
  [1644] = 1,
    ACTIONS(50), 1,
      sym__space,
  [1648] = 1,
    ACTIONS(438), 1,
      anon_sym_RBRACK,
  [1652] = 1,
    ACTIONS(440), 1,
      anon_sym_COLON,
  [1656] = 1,
    ACTIONS(442), 1,
      anon_sym_COLON,
  [1660] = 1,
    ACTIONS(444), 1,
      anon_sym_RBRACK,
  [1664] = 1,
    ACTIONS(446), 1,
      sym__newline,
  [1668] = 1,
    ACTIONS(448), 1,
      anon_sym_RBRACE,
  [1672] = 1,
    ACTIONS(450), 1,
      anon_sym_COLON,
  [1676] = 1,
    ACTIONS(52), 1,
      sym__space,
  [1680] = 1,
    ACTIONS(452), 1,
      sym__space,
  [1684] = 1,
    ACTIONS(454), 1,
      anon_sym_COLON,
  [1688] = 1,
    ACTIONS(456), 1,
      sym__newline,
  [1692] = 1,
    ACTIONS(458), 1,
      anon_sym_COLON,
  [1696] = 1,
    ACTIONS(460), 1,
      anon_sym_RBRACK,
  [1700] = 1,
    ACTIONS(462), 1,
      anon_sym_LBRACE,
  [1704] = 1,
    ACTIONS(464), 1,
      anon_sym_RBRACK,
  [1708] = 1,
    ACTIONS(466), 1,
      anon_sym_SQUOTE,
  [1712] = 1,
    ACTIONS(468), 1,
      anon_sym_RBRACK,
  [1716] = 1,
    ACTIONS(470), 1,
      sym__dot,
  [1720] = 1,
    ACTIONS(394), 1,
      sym__dot,
  [1724] = 1,
    ACTIONS(472), 1,
      sym__space,
  [1728] = 1,
    ACTIONS(474), 1,
      sym__space,
  [1732] = 1,
    ACTIONS(476), 1,
      ts_builtin_sym_end,
  [1736] = 1,
    ACTIONS(478), 1,
      sym__newline,
  [1740] = 1,
    ACTIONS(480), 1,
      sym__newline,
  [1744] = 1,
    ACTIONS(482), 1,
      anon_sym_note,
  [1748] = 1,
    ACTIONS(484), 1,
      anon_sym_DQUOTE,
  [1752] = 1,
    ACTIONS(486), 1,
      sym__newline,
  [1756] = 1,
    ACTIONS(52), 1,
      sym__newline,
  [1760] = 1,
    ACTIONS(50), 1,
      sym__newline,
  [1764] = 1,
    ACTIONS(488), 1,
      sym__dot,
  [1768] = 1,
    ACTIONS(490), 1,
      sym__space,
  [1772] = 1,
    ACTIONS(492), 1,
      sym__space,
  [1776] = 1,
    ACTIONS(494), 1,
      sym__dot,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 80,
  [SMALL_STATE(6)] = 104,
  [SMALL_STATE(7)] = 130,
  [SMALL_STATE(8)] = 142,
  [SMALL_STATE(9)] = 154,
  [SMALL_STATE(10)] = 180,
  [SMALL_STATE(11)] = 206,
  [SMALL_STATE(12)] = 229,
  [SMALL_STATE(13)] = 252,
  [SMALL_STATE(14)] = 264,
  [SMALL_STATE(15)] = 286,
  [SMALL_STATE(16)] = 296,
  [SMALL_STATE(17)] = 318,
  [SMALL_STATE(18)] = 330,
  [SMALL_STATE(19)] = 350,
  [SMALL_STATE(20)] = 372,
  [SMALL_STATE(21)] = 381,
  [SMALL_STATE(22)] = 396,
  [SMALL_STATE(23)] = 405,
  [SMALL_STATE(24)] = 418,
  [SMALL_STATE(25)] = 427,
  [SMALL_STATE(26)] = 436,
  [SMALL_STATE(27)] = 447,
  [SMALL_STATE(28)] = 456,
  [SMALL_STATE(29)] = 465,
  [SMALL_STATE(30)] = 474,
  [SMALL_STATE(31)] = 483,
  [SMALL_STATE(32)] = 496,
  [SMALL_STATE(33)] = 505,
  [SMALL_STATE(34)] = 520,
  [SMALL_STATE(35)] = 533,
  [SMALL_STATE(36)] = 542,
  [SMALL_STATE(37)] = 551,
  [SMALL_STATE(38)] = 560,
  [SMALL_STATE(39)] = 569,
  [SMALL_STATE(40)] = 584,
  [SMALL_STATE(41)] = 593,
  [SMALL_STATE(42)] = 607,
  [SMALL_STATE(43)] = 621,
  [SMALL_STATE(44)] = 633,
  [SMALL_STATE(45)] = 645,
  [SMALL_STATE(46)] = 657,
  [SMALL_STATE(47)] = 671,
  [SMALL_STATE(48)] = 683,
  [SMALL_STATE(49)] = 695,
  [SMALL_STATE(50)] = 707,
  [SMALL_STATE(51)] = 719,
  [SMALL_STATE(52)] = 730,
  [SMALL_STATE(53)] = 743,
  [SMALL_STATE(54)] = 756,
  [SMALL_STATE(55)] = 769,
  [SMALL_STATE(56)] = 782,
  [SMALL_STATE(57)] = 793,
  [SMALL_STATE(58)] = 806,
  [SMALL_STATE(59)] = 817,
  [SMALL_STATE(60)] = 828,
  [SMALL_STATE(61)] = 841,
  [SMALL_STATE(62)] = 854,
  [SMALL_STATE(63)] = 865,
  [SMALL_STATE(64)] = 876,
  [SMALL_STATE(65)] = 889,
  [SMALL_STATE(66)] = 900,
  [SMALL_STATE(67)] = 911,
  [SMALL_STATE(68)] = 924,
  [SMALL_STATE(69)] = 932,
  [SMALL_STATE(70)] = 942,
  [SMALL_STATE(71)] = 952,
  [SMALL_STATE(72)] = 962,
  [SMALL_STATE(73)] = 972,
  [SMALL_STATE(74)] = 982,
  [SMALL_STATE(75)] = 992,
  [SMALL_STATE(76)] = 1002,
  [SMALL_STATE(77)] = 1012,
  [SMALL_STATE(78)] = 1022,
  [SMALL_STATE(79)] = 1032,
  [SMALL_STATE(80)] = 1038,
  [SMALL_STATE(81)] = 1048,
  [SMALL_STATE(82)] = 1058,
  [SMALL_STATE(83)] = 1066,
  [SMALL_STATE(84)] = 1076,
  [SMALL_STATE(85)] = 1086,
  [SMALL_STATE(86)] = 1096,
  [SMALL_STATE(87)] = 1106,
  [SMALL_STATE(88)] = 1116,
  [SMALL_STATE(89)] = 1124,
  [SMALL_STATE(90)] = 1134,
  [SMALL_STATE(91)] = 1144,
  [SMALL_STATE(92)] = 1150,
  [SMALL_STATE(93)] = 1160,
  [SMALL_STATE(94)] = 1166,
  [SMALL_STATE(95)] = 1176,
  [SMALL_STATE(96)] = 1182,
  [SMALL_STATE(97)] = 1192,
  [SMALL_STATE(98)] = 1202,
  [SMALL_STATE(99)] = 1212,
  [SMALL_STATE(100)] = 1222,
  [SMALL_STATE(101)] = 1230,
  [SMALL_STATE(102)] = 1237,
  [SMALL_STATE(103)] = 1244,
  [SMALL_STATE(104)] = 1251,
  [SMALL_STATE(105)] = 1256,
  [SMALL_STATE(106)] = 1261,
  [SMALL_STATE(107)] = 1266,
  [SMALL_STATE(108)] = 1273,
  [SMALL_STATE(109)] = 1280,
  [SMALL_STATE(110)] = 1287,
  [SMALL_STATE(111)] = 1294,
  [SMALL_STATE(112)] = 1301,
  [SMALL_STATE(113)] = 1308,
  [SMALL_STATE(114)] = 1315,
  [SMALL_STATE(115)] = 1320,
  [SMALL_STATE(116)] = 1325,
  [SMALL_STATE(117)] = 1332,
  [SMALL_STATE(118)] = 1339,
  [SMALL_STATE(119)] = 1344,
  [SMALL_STATE(120)] = 1349,
  [SMALL_STATE(121)] = 1356,
  [SMALL_STATE(122)] = 1363,
  [SMALL_STATE(123)] = 1370,
  [SMALL_STATE(124)] = 1375,
  [SMALL_STATE(125)] = 1380,
  [SMALL_STATE(126)] = 1385,
  [SMALL_STATE(127)] = 1390,
  [SMALL_STATE(128)] = 1397,
  [SMALL_STATE(129)] = 1404,
  [SMALL_STATE(130)] = 1409,
  [SMALL_STATE(131)] = 1416,
  [SMALL_STATE(132)] = 1423,
  [SMALL_STATE(133)] = 1430,
  [SMALL_STATE(134)] = 1437,
  [SMALL_STATE(135)] = 1444,
  [SMALL_STATE(136)] = 1449,
  [SMALL_STATE(137)] = 1456,
  [SMALL_STATE(138)] = 1460,
  [SMALL_STATE(139)] = 1464,
  [SMALL_STATE(140)] = 1468,
  [SMALL_STATE(141)] = 1472,
  [SMALL_STATE(142)] = 1476,
  [SMALL_STATE(143)] = 1480,
  [SMALL_STATE(144)] = 1484,
  [SMALL_STATE(145)] = 1488,
  [SMALL_STATE(146)] = 1492,
  [SMALL_STATE(147)] = 1496,
  [SMALL_STATE(148)] = 1500,
  [SMALL_STATE(149)] = 1504,
  [SMALL_STATE(150)] = 1508,
  [SMALL_STATE(151)] = 1512,
  [SMALL_STATE(152)] = 1516,
  [SMALL_STATE(153)] = 1520,
  [SMALL_STATE(154)] = 1524,
  [SMALL_STATE(155)] = 1528,
  [SMALL_STATE(156)] = 1532,
  [SMALL_STATE(157)] = 1536,
  [SMALL_STATE(158)] = 1540,
  [SMALL_STATE(159)] = 1544,
  [SMALL_STATE(160)] = 1548,
  [SMALL_STATE(161)] = 1552,
  [SMALL_STATE(162)] = 1556,
  [SMALL_STATE(163)] = 1560,
  [SMALL_STATE(164)] = 1564,
  [SMALL_STATE(165)] = 1568,
  [SMALL_STATE(166)] = 1572,
  [SMALL_STATE(167)] = 1576,
  [SMALL_STATE(168)] = 1580,
  [SMALL_STATE(169)] = 1584,
  [SMALL_STATE(170)] = 1588,
  [SMALL_STATE(171)] = 1592,
  [SMALL_STATE(172)] = 1596,
  [SMALL_STATE(173)] = 1600,
  [SMALL_STATE(174)] = 1604,
  [SMALL_STATE(175)] = 1608,
  [SMALL_STATE(176)] = 1612,
  [SMALL_STATE(177)] = 1616,
  [SMALL_STATE(178)] = 1620,
  [SMALL_STATE(179)] = 1624,
  [SMALL_STATE(180)] = 1628,
  [SMALL_STATE(181)] = 1632,
  [SMALL_STATE(182)] = 1636,
  [SMALL_STATE(183)] = 1640,
  [SMALL_STATE(184)] = 1644,
  [SMALL_STATE(185)] = 1648,
  [SMALL_STATE(186)] = 1652,
  [SMALL_STATE(187)] = 1656,
  [SMALL_STATE(188)] = 1660,
  [SMALL_STATE(189)] = 1664,
  [SMALL_STATE(190)] = 1668,
  [SMALL_STATE(191)] = 1672,
  [SMALL_STATE(192)] = 1676,
  [SMALL_STATE(193)] = 1680,
  [SMALL_STATE(194)] = 1684,
  [SMALL_STATE(195)] = 1688,
  [SMALL_STATE(196)] = 1692,
  [SMALL_STATE(197)] = 1696,
  [SMALL_STATE(198)] = 1700,
  [SMALL_STATE(199)] = 1704,
  [SMALL_STATE(200)] = 1708,
  [SMALL_STATE(201)] = 1712,
  [SMALL_STATE(202)] = 1716,
  [SMALL_STATE(203)] = 1720,
  [SMALL_STATE(204)] = 1724,
  [SMALL_STATE(205)] = 1728,
  [SMALL_STATE(206)] = 1732,
  [SMALL_STATE(207)] = 1736,
  [SMALL_STATE(208)] = 1740,
  [SMALL_STATE(209)] = 1744,
  [SMALL_STATE(210)] = 1748,
  [SMALL_STATE(211)] = 1752,
  [SMALL_STATE(212)] = 1756,
  [SMALL_STATE(213)] = 1760,
  [SMALL_STATE(214)] = 1764,
  [SMALL_STATE(215)] = 1768,
  [SMALL_STATE(216)] = 1772,
  [SMALL_STATE(217)] = 1776,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(181),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(216),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(215),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_name, 1, 0, 3),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_side, 3, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_indexes_definition_repeat1, 2, 0, 0),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_indexes_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_indexes_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 7, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_definition_repeat1, 2, 0, 0),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(121),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 9, 0, 11),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_definition_repeat1, 2, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_definition_repeat1, 2, 0, 0),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(184),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 10, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_project_definition_repeat1, 2, 0, 0),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_project_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(178),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 12, 0, 18),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 8, 0, 5),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 9, 0, 10),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 11, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 11, 0, 16),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 7, 0, 5),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 13, 0, 11),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_long, 10, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_definition, 7, 0, 4),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 8, 0, 9),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_long, 12, 0, 11),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 12, 0, 11),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_definition, 8, 0, 8),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_setting_default_repeat1, 2, 0, 0),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_setting_default_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 4, 0, 12),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definition, 4, 0, 12),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_definition_composite_repeat1, 2, 0, 22), SHIFT_REPEAT(75),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_definition_composite_repeat1, 2, 0, 22),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_settings_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_settings_repeat1, 2, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 4, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_settings, 4, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_definition, 1, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 3, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_settings, 3, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_definition_repeat1, 3, 0, 0),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relationship_definition_short_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relationship_definition_short_repeat1, 2, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_property_definition, 5, 0, 14),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_type_basic, 1, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_type_basic, 1, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_type_ref_item, 1, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 4, 0, 13),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definition, 4, 0, 13),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 1, 0, 7),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 1, 0, 7),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column, 1, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enquoted_identifier_multi, 3, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enquoted_identifier_multi, 2, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_enquoted_identifier, 3, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_enquoted_identifier, 3, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_definition_composite, 4, 0, 21),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_definition_composite, 4, 0, 21),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_definition_composite_repeat1, 2, 0, 20),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_setting_default, 5, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_definition_composite, 3, 0, 20),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_definition_composite, 3, 0, 20),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_inline, 4, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_setting_default, 4, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 1, 0, 6),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 1, 0, 6),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_setting_note, 3, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_setting_definition, 4, 0, 0),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_action, 1, 0, 0),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_column, 1, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_definition_single, 1, 0, 17),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_definition_single, 1, 0, 17),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 1, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_type_ref_item, 1, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_type_ref, 3, 0, 15),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_type_ref, 3, 0, 15),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indexes_definition, 5, 0, 0),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_name, 1, 0, 0),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 1, 0, 1),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_name, 1, 0, 0),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_definition, 2, 0, 19),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indexes_definition, 6, 0, 0),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_note_standalone, 6, 0, 0),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_property_key, 1, 0, 0),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_symbol, 1, 0, 0),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_setting, 1, 0, 0),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_event, 1, 0, 0),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_settings, 3, 0, 0),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_setting, 3, 0, 0),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_setting, 4, 0, 0),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enquoted_identifier, 3, 0, 0),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_alias, 1, 0, 2),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [476] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
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
