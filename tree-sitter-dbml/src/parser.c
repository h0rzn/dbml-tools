#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 215
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 101
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
  anon_sym_note = 49,
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
  sym_column_constraint = 66,
  sym_table_alias = 67,
  sym_indexes_definition = 68,
  sym_index_definition = 69,
  sym_index_definition_single = 70,
  sym_index_definition_composite = 71,
  sym_index_column = 72,
  sym_index_settings = 73,
  sym_index_setting = 74,
  sym_enum_definition = 75,
  sym_enum_field = 76,
  sym_enum_name = 77,
  sym_relationship_definition_short = 78,
  sym_relationship_definition_inline = 79,
  sym_relationship_definition_long = 80,
  sym_relationship_definition_side = 81,
  sym_relationship_setting_definition = 82,
  sym_relationship_event = 83,
  sym_relationship_action = 84,
  sym_relationship_symbol = 85,
  sym_identifier = 86,
  sym_enquoted_identifier = 87,
  sym_enquoted_identifier_multi = 88,
  sym_double_enquoted_identifier = 89,
  sym__hidden_identifier = 90,
  sym_field_note_standalone = 91,
  aux_sym_source_file_repeat1 = 92,
  aux_sym_project_definition_repeat1 = 93,
  aux_sym_table_definition_repeat1 = 94,
  aux_sym_column_settings_repeat1 = 95,
  aux_sym_column_setting_default_repeat1 = 96,
  aux_sym_indexes_definition_repeat1 = 97,
  aux_sym_index_definition_composite_repeat1 = 98,
  aux_sym_enum_definition_repeat1 = 99,
  aux_sym_relationship_definition_short_repeat1 = 100,
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
  [anon_sym_note] = "note",
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
  [anon_sym_note] = anon_sym_note,
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
  [anon_sym_note] = {
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
  [55] = 51,
  [56] = 54,
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
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 91,
  [96] = 91,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 13,
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
  [127] = 103,
  [128] = 128,
  [129] = 129,
  [130] = 13,
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
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 6,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 7,
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
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 140,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 158,
  [205] = 143,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 7,
  [210] = 6,
  [211] = 184,
  [212] = 212,
  [213] = 213,
  [214] = 184,
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
      if (lookahead == 'e') ADVANCE(193);
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
      if (lookahead == 't') ADVANCE(2);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(175);
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
    case 193:
      ACCEPT_TOKEN(anon_sym_note);
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
  [14] = {.lex_state = 0},
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
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 136},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 0},
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
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 67},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 7},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 7},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 7},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 67},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 7},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 7},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 7},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 67},
  [99] = {.lex_state = 7},
  [100] = {.lex_state = 67},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 7},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 136},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 7},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 4},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 4},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 4},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 4},
  [157] = {.lex_state = 4},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 4},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 4},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 4},
  [170] = {.lex_state = 1},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 4},
  [174] = {.lex_state = 4},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 4},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 4},
  [182] = {.lex_state = 4},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 4},
  [186] = {.lex_state = 4},
  [187] = {.lex_state = 1},
  [188] = {.lex_state = 1},
  [189] = {.lex_state = 4},
  [190] = {.lex_state = 1},
  [191] = {.lex_state = 4},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 1},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 4},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 4},
  [208] = {.lex_state = 1},
  [209] = {.lex_state = 1},
  [210] = {.lex_state = 1},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 1},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
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
    [anon_sym_note] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(171),
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
    STATE(121), 3,
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
    STATE(102), 1,
      sym_index_column,
    STATE(127), 1,
      sym_identifier,
    STATE(151), 1,
      sym_index_definition,
    STATE(82), 2,
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
    STATE(102), 1,
      sym_index_column,
    STATE(127), 1,
      sym_identifier,
    STATE(151), 1,
      sym_index_definition,
    STATE(82), 2,
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
    STATE(102), 1,
      sym_index_column,
    STATE(127), 1,
      sym_identifier,
    STATE(151), 1,
      sym_index_definition,
    STATE(82), 2,
      sym_index_definition_single,
      sym_index_definition_composite,
  [178] = 3,
    ACTIONS(40), 1,
      anon_sym_ref_COLON,
    STATE(89), 2,
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
    STATE(150), 1,
      sym_indexes_definition,
    STATE(164), 1,
      sym_column_name,
    STATE(176), 1,
      sym__hidden_identifier,
    STATE(18), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [217] = 7,
    ACTIONS(64), 1,
      sym_indexes,
    ACTIONS(66), 1,
      aux_sym_identifier_token1,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    STATE(136), 1,
      sym_indexes_definition,
    STATE(164), 1,
      sym_column_name,
    STATE(176), 1,
      sym__hidden_identifier,
    STATE(18), 2,
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
  [250] = 2,
    ACTIONS(74), 1,
      anon_sym_LBRACK,
    ACTIONS(72), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [262] = 7,
    ACTIONS(46), 1,
      aux_sym_identifier_token1,
    ACTIONS(76), 1,
      anon_sym_RBRACE,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    STATE(16), 1,
      aux_sym_enum_definition_repeat1,
    STATE(77), 1,
      sym_enum_field,
    STATE(123), 1,
      sym_identifier,
    STATE(124), 1,
      sym_double_enquoted_identifier,
  [284] = 7,
    ACTIONS(46), 1,
      aux_sym_identifier_token1,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(80), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      aux_sym_enum_definition_repeat1,
    STATE(77), 1,
      sym_enum_field,
    STATE(123), 1,
      sym_identifier,
    STATE(124), 1,
      sym_double_enquoted_identifier,
  [306] = 2,
    ACTIONS(84), 1,
      anon_sym_LBRACK,
    ACTIONS(82), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [318] = 6,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    ACTIONS(88), 1,
      sym_indexes,
    ACTIONS(90), 1,
      aux_sym_identifier_token1,
    STATE(164), 1,
      sym_column_name,
    STATE(176), 1,
      sym__hidden_identifier,
    STATE(18), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [338] = 7,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    ACTIONS(95), 1,
      aux_sym_identifier_token1,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    STATE(19), 1,
      aux_sym_enum_definition_repeat1,
    STATE(77), 1,
      sym_enum_field,
    STATE(123), 1,
      sym_identifier,
    STATE(124), 1,
      sym_double_enquoted_identifier,
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
  [378] = 3,
    STATE(86), 1,
      sym_relationship_setting_definition,
    STATE(194), 1,
      sym_relationship_event,
    ACTIONS(105), 4,
      anon_sym_delete,
      anon_sym_on_delete,
      anon_sym_update,
      anon_sym_on_update,
  [391] = 1,
    ACTIONS(107), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [400] = 1,
    ACTIONS(109), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [409] = 3,
    STATE(101), 1,
      sym_relationship_setting_definition,
    STATE(194), 1,
      sym_relationship_event,
    ACTIONS(105), 4,
      anon_sym_delete,
      anon_sym_on_delete,
      anon_sym_update,
      anon_sym_on_update,
  [422] = 1,
    ACTIONS(111), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
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
  [449] = 1,
    ACTIONS(117), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [458] = 4,
    ACTIONS(119), 1,
      anon_sym_RBRACE,
    STATE(165), 1,
      sym_project_property_key,
    ACTIONS(121), 2,
      anon_sym_database_type,
      anon_sym_Note,
    STATE(30), 2,
      sym_project_property_definition,
      aux_sym_project_definition_repeat1,
  [473] = 1,
    ACTIONS(124), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [482] = 4,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    STATE(165), 1,
      sym_project_property_key,
    ACTIONS(128), 2,
      anon_sym_database_type,
      anon_sym_Note,
    STATE(30), 2,
      sym_project_property_definition,
      aux_sym_project_definition_repeat1,
  [497] = 1,
    ACTIONS(130), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [506] = 2,
    STATE(125), 1,
      sym_relationship_action,
    ACTIONS(132), 5,
      anon_sym_cascade,
      anon_sym_restrict,
      anon_sym_setnull,
      anon_sym_setdefault,
      anon_sym_noaction,
  [517] = 1,
    ACTIONS(134), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [526] = 1,
    ACTIONS(136), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [535] = 1,
    ACTIONS(138), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [544] = 1,
    ACTIONS(140), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [553] = 4,
    ACTIONS(142), 1,
      anon_sym_RBRACE,
    STATE(165), 1,
      sym_project_property_key,
    ACTIONS(128), 2,
      anon_sym_database_type,
      anon_sym_Note,
    STATE(32), 2,
      sym_project_property_definition,
      aux_sym_project_definition_repeat1,
  [568] = 3,
    STATE(76), 1,
      sym_relationship_setting_definition,
    STATE(194), 1,
      sym_relationship_event,
    ACTIONS(105), 4,
      anon_sym_delete,
      anon_sym_on_delete,
      anon_sym_update,
      anon_sym_on_update,
  [581] = 3,
    ACTIONS(146), 1,
      anon_sym_LT,
    STATE(52), 1,
      sym_relationship_symbol,
    ACTIONS(144), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [593] = 4,
    ACTIONS(148), 1,
      aux_sym_identifier_token1,
    STATE(164), 1,
      sym_column_name,
    STATE(176), 1,
      sym__hidden_identifier,
    STATE(11), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [607] = 3,
    ACTIONS(152), 1,
      aux_sym_identifier_token1,
    ACTIONS(150), 2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
    STATE(43), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [619] = 3,
    ACTIONS(146), 1,
      anon_sym_LT,
    STATE(67), 1,
      sym_relationship_symbol,
    ACTIONS(144), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [631] = 3,
    ACTIONS(155), 1,
      sym__identifier2,
    STATE(206), 1,
      sym_column_type_ref_item,
    STATE(94), 3,
      sym__column_type,
      sym_column_type_basic,
      sym_column_type_ref,
  [643] = 4,
    ACTIONS(159), 1,
      anon_sym_name,
    ACTIONS(161), 1,
      anon_sym_type,
    STATE(180), 1,
      sym_index_setting,
    ACTIONS(157), 2,
      anon_sym_pk,
      anon_sym_unique,
  [657] = 4,
    ACTIONS(148), 1,
      aux_sym_identifier_token1,
    STATE(164), 1,
      sym_column_name,
    STATE(176), 1,
      sym__hidden_identifier,
    STATE(12), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [671] = 3,
    ACTIONS(146), 1,
      anon_sym_LT,
    STATE(60), 1,
      sym_relationship_symbol,
    ACTIONS(144), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [683] = 3,
    ACTIONS(146), 1,
      anon_sym_LT,
    STATE(58), 1,
      sym_relationship_symbol,
    ACTIONS(144), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [695] = 3,
    ACTIONS(146), 1,
      anon_sym_LT,
    STATE(63), 1,
      sym_relationship_symbol,
    ACTIONS(144), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [707] = 3,
    ACTIONS(163), 1,
      anon_sym_SQUOTE,
    ACTIONS(165), 1,
      aux_sym_identifier_token1,
    STATE(56), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [718] = 4,
    ACTIONS(167), 1,
      aux_sym_identifier_token1,
    STATE(118), 1,
      sym_relationship_definition_side,
    STATE(200), 1,
      sym__hidden_identifier,
    STATE(211), 1,
      sym_table_name,
  [731] = 4,
    ACTIONS(167), 1,
      aux_sym_identifier_token1,
    STATE(184), 1,
      sym_table_name,
    STATE(191), 1,
      sym_relationship_definition_side,
    STATE(200), 1,
      sym__hidden_identifier,
  [744] = 3,
    ACTIONS(165), 1,
      aux_sym_identifier_token1,
    ACTIONS(169), 1,
      anon_sym_SQUOTE,
    STATE(43), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [755] = 3,
    ACTIONS(165), 1,
      aux_sym_identifier_token1,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    STATE(54), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [766] = 3,
    ACTIONS(165), 1,
      aux_sym_identifier_token1,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    STATE(43), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [777] = 4,
    ACTIONS(167), 1,
      aux_sym_identifier_token1,
    STATE(137), 1,
      sym_relationship_definition_side,
    STATE(184), 1,
      sym_table_name,
    STATE(200), 1,
      sym__hidden_identifier,
  [790] = 4,
    ACTIONS(167), 1,
      aux_sym_identifier_token1,
    STATE(159), 1,
      sym_relationship_definition_side,
    STATE(200), 1,
      sym__hidden_identifier,
    STATE(214), 1,
      sym_table_name,
  [803] = 3,
    ACTIONS(165), 1,
      aux_sym_identifier_token1,
    ACTIONS(175), 1,
      anon_sym_BQUOTE,
    STATE(43), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [814] = 4,
    ACTIONS(167), 1,
      aux_sym_identifier_token1,
    STATE(17), 1,
      sym_relationship_definition_side,
    STATE(200), 1,
      sym__hidden_identifier,
    STATE(211), 1,
      sym_table_name,
  [827] = 3,
    ACTIONS(165), 1,
      aux_sym_identifier_token1,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    STATE(43), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [838] = 4,
    ACTIONS(167), 1,
      aux_sym_identifier_token1,
    STATE(169), 1,
      sym_relationship_definition_side,
    STATE(184), 1,
      sym_table_name,
    STATE(200), 1,
      sym__hidden_identifier,
  [851] = 4,
    ACTIONS(167), 1,
      aux_sym_identifier_token1,
    STATE(155), 1,
      sym_relationship_definition_side,
    STATE(200), 1,
      sym__hidden_identifier,
    STATE(214), 1,
      sym_table_name,
  [864] = 3,
    ACTIONS(165), 1,
      aux_sym_identifier_token1,
    ACTIONS(177), 1,
      anon_sym_BQUOTE,
    STATE(59), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [875] = 3,
    ACTIONS(165), 1,
      aux_sym_identifier_token1,
    ACTIONS(177), 1,
      anon_sym_SQUOTE,
    STATE(61), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [886] = 4,
    ACTIONS(167), 1,
      aux_sym_identifier_token1,
    STATE(157), 1,
      sym_relationship_definition_side,
    STATE(184), 1,
      sym_table_name,
    STATE(200), 1,
      sym__hidden_identifier,
  [899] = 4,
    ACTIONS(167), 1,
      aux_sym_identifier_token1,
    STATE(14), 1,
      sym_relationship_definition_side,
    STATE(200), 1,
      sym__hidden_identifier,
    STATE(211), 1,
      sym_table_name,
  [912] = 3,
    ACTIONS(179), 1,
      aux_sym_identifier_token1,
    STATE(145), 1,
      sym_identifier,
    STATE(146), 1,
      sym_project_name,
  [922] = 3,
    ACTIONS(165), 1,
      aux_sym_identifier_token1,
    STATE(103), 1,
      sym_identifier,
    STATE(114), 1,
      sym_index_column,
  [932] = 3,
    ACTIONS(181), 1,
      aux_sym_identifier_token1,
    STATE(140), 1,
      sym__hidden_identifier,
    STATE(144), 1,
      sym_table_name,
  [942] = 3,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    ACTIONS(185), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      aux_sym_index_definition_composite_repeat1,
  [952] = 1,
    ACTIONS(52), 3,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_identifier_token1,
  [958] = 3,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    ACTIONS(187), 1,
      anon_sym_RPAREN,
    STATE(71), 1,
      aux_sym_index_definition_composite_repeat1,
  [968] = 3,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    ACTIONS(192), 1,
      anon_sym_RBRACK,
    STATE(74), 1,
      aux_sym_column_settings_repeat1,
  [978] = 2,
    ACTIONS(194), 1,
      anon_sym_RBRACE,
    ACTIONS(196), 2,
      sym_indexes,
      aux_sym_identifier_token1,
  [986] = 3,
    ACTIONS(198), 1,
      anon_sym_COMMA,
    ACTIONS(200), 1,
      anon_sym_RBRACK,
    STATE(90), 1,
      aux_sym_relationship_definition_short_repeat1,
  [996] = 3,
    ACTIONS(202), 1,
      anon_sym_LBRACK,
    ACTIONS(204), 1,
      sym__newline,
    STATE(135), 1,
      sym_field_note_standalone,
  [1006] = 3,
    ACTIONS(179), 1,
      aux_sym_identifier_token1,
    STATE(133), 1,
      sym_identifier,
    STATE(138), 1,
      sym_enum_name,
  [1016] = 3,
    ACTIONS(198), 1,
      anon_sym_COMMA,
    ACTIONS(206), 1,
      anon_sym_RBRACK,
    STATE(87), 1,
      aux_sym_relationship_definition_short_repeat1,
  [1026] = 3,
    ACTIONS(208), 1,
      anon_sym_COMMA,
    ACTIONS(211), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      aux_sym_index_definition_composite_repeat1,
  [1036] = 3,
    ACTIONS(179), 1,
      aux_sym_identifier_token1,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
    STATE(122), 1,
      sym_identifier,
  [1046] = 3,
    ACTIONS(215), 1,
      anon_sym_LBRACK,
    ACTIONS(217), 1,
      sym__newline,
    STATE(167), 1,
      sym_index_settings,
  [1056] = 3,
    ACTIONS(165), 1,
      aux_sym_identifier_token1,
    STATE(73), 1,
      sym_index_column,
    STATE(103), 1,
      sym_identifier,
  [1066] = 3,
    ACTIONS(219), 1,
      anon_sym_COMMA,
    ACTIONS(221), 1,
      anon_sym_RBRACK,
    STATE(74), 1,
      aux_sym_column_settings_repeat1,
  [1076] = 2,
    ACTIONS(223), 1,
      anon_sym_RBRACE,
    ACTIONS(225), 2,
      sym_indexes,
      aux_sym_identifier_token1,
  [1084] = 3,
    ACTIONS(198), 1,
      anon_sym_COMMA,
    ACTIONS(227), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      aux_sym_relationship_definition_short_repeat1,
  [1094] = 3,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(232), 1,
      anon_sym_RBRACK,
    STATE(87), 1,
      aux_sym_relationship_definition_short_repeat1,
  [1104] = 1,
    ACTIONS(93), 3,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
      anon_sym_DQUOTE,
  [1110] = 3,
    ACTIONS(219), 1,
      anon_sym_COMMA,
    ACTIONS(234), 1,
      anon_sym_RBRACK,
    STATE(84), 1,
      aux_sym_column_settings_repeat1,
  [1120] = 3,
    ACTIONS(198), 1,
      anon_sym_COMMA,
    ACTIONS(236), 1,
      anon_sym_RBRACK,
    STATE(87), 1,
      aux_sym_relationship_definition_short_repeat1,
  [1130] = 3,
    ACTIONS(148), 1,
      aux_sym_identifier_token1,
    STATE(176), 1,
      sym__hidden_identifier,
    STATE(181), 1,
      sym_column_name,
  [1140] = 3,
    ACTIONS(238), 1,
      aux_sym_identifier_token1,
    STATE(182), 1,
      sym__hidden_identifier,
    STATE(185), 1,
      sym_table_alias,
  [1150] = 3,
    ACTIONS(240), 1,
      anon_sym_LBRACK,
    ACTIONS(242), 1,
      sym__newline,
    ACTIONS(244), 1,
      sym__dot,
  [1160] = 3,
    ACTIONS(246), 1,
      anon_sym_LBRACK,
    ACTIONS(248), 1,
      sym__newline,
    STATE(100), 1,
      sym_column_settings,
  [1170] = 3,
    ACTIONS(250), 1,
      aux_sym_identifier_token1,
    STATE(6), 1,
      sym__hidden_identifier,
    STATE(7), 1,
      sym_column_name,
  [1180] = 3,
    ACTIONS(252), 1,
      aux_sym_identifier_token1,
    STATE(209), 1,
      sym_column_name,
    STATE(210), 1,
      sym__hidden_identifier,
  [1190] = 1,
    ACTIONS(254), 3,
      anon_sym_RBRACE,
      anon_sym_database_type,
      anon_sym_Note,
  [1196] = 2,
    ACTIONS(256), 1,
      anon_sym_RBRACE,
    ACTIONS(258), 2,
      sym_indexes,
      aux_sym_identifier_token1,
  [1204] = 1,
    ACTIONS(260), 3,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
      anon_sym_DQUOTE,
  [1210] = 2,
    ACTIONS(262), 1,
      anon_sym_RBRACE,
    ACTIONS(264), 2,
      sym_indexes,
      aux_sym_identifier_token1,
  [1218] = 1,
    ACTIONS(232), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1223] = 2,
    ACTIONS(266), 1,
      anon_sym_LBRACK,
    ACTIONS(268), 1,
      sym__newline,
  [1230] = 1,
    ACTIONS(270), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1235] = 2,
    ACTIONS(272), 1,
      anon_sym_SQUOTE,
    STATE(187), 1,
      sym_enquoted_identifier_multi,
  [1242] = 2,
    ACTIONS(274), 1,
      anon_sym_COLON,
    ACTIONS(276), 1,
      sym__space,
  [1249] = 2,
    ACTIONS(70), 1,
      sym__newline,
    ACTIONS(278), 1,
      anon_sym_LBRACK,
  [1256] = 2,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      sym__newline,
  [1263] = 2,
    ACTIONS(165), 1,
      aux_sym_identifier_token1,
    STATE(197), 1,
      sym_identifier,
  [1270] = 1,
    ACTIONS(284), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1275] = 2,
    ACTIONS(286), 1,
      anon_sym_SQUOTE,
    STATE(196), 1,
      sym_enquoted_identifier,
  [1282] = 1,
    ACTIONS(288), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1287] = 2,
    ACTIONS(165), 1,
      aux_sym_identifier_token1,
    STATE(193), 1,
      sym_identifier,
  [1294] = 2,
    ACTIONS(290), 1,
      anon_sym_LBRACK,
    ACTIONS(292), 1,
      sym__newline,
  [1301] = 1,
    ACTIONS(294), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1306] = 2,
    ACTIONS(296), 1,
      sym__identifier2,
    STATE(129), 1,
      sym_column_type_ref_item,
  [1313] = 2,
    ACTIONS(298), 1,
      anon_sym_LBRACK,
    ACTIONS(300), 1,
      sym__newline,
  [1320] = 2,
    ACTIONS(302), 1,
      anon_sym_SQUOTE,
    ACTIONS(304), 1,
      anon_sym_BQUOTE,
  [1327] = 1,
    ACTIONS(306), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1332] = 2,
    ACTIONS(308), 1,
      anon_sym_LBRACE,
    ACTIONS(310), 1,
      sym_as,
  [1339] = 2,
    ACTIONS(165), 1,
      aux_sym_identifier_token1,
    STATE(147), 1,
      sym_identifier,
  [1346] = 1,
    ACTIONS(192), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1351] = 2,
    ACTIONS(312), 1,
      anon_sym_COLON,
    ACTIONS(314), 1,
      sym__space,
  [1358] = 2,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      sym__newline,
  [1365] = 2,
    ACTIONS(320), 1,
      anon_sym_LBRACK,
    ACTIONS(322), 1,
      sym__newline,
  [1372] = 1,
    ACTIONS(324), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1377] = 1,
    ACTIONS(326), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1382] = 2,
    ACTIONS(270), 1,
      sym__newline,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
  [1389] = 2,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      sym__newline,
  [1396] = 2,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      sym__newline,
  [1403] = 2,
    ACTIONS(70), 1,
      sym__space,
    ACTIONS(278), 1,
      anon_sym_COLON,
  [1410] = 1,
    ACTIONS(336), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1415] = 2,
    ACTIONS(338), 1,
      anon_sym_SQUOTE,
    STATE(154), 1,
      sym_enquoted_identifier_multi,
  [1422] = 1,
    ACTIONS(340), 1,
      sym__space,
  [1426] = 1,
    ACTIONS(342), 1,
      aux_sym_identifier_token1,
  [1430] = 1,
    ACTIONS(344), 1,
      sym__newline,
  [1434] = 1,
    ACTIONS(346), 1,
      anon_sym_RBRACE,
  [1438] = 1,
    ACTIONS(348), 1,
      sym__space,
  [1442] = 1,
    ACTIONS(350), 1,
      sym__space,
  [1446] = 1,
    ACTIONS(352), 1,
      sym__space,
  [1450] = 1,
    ACTIONS(354), 1,
      sym__space,
  [1454] = 1,
    ACTIONS(356), 1,
      anon_sym_note,
  [1458] = 1,
    ACTIONS(358), 1,
      anon_sym_RBRACE,
  [1462] = 1,
    ACTIONS(360), 1,
      sym__newline,
  [1466] = 1,
    ACTIONS(362), 1,
      sym__space,
  [1470] = 1,
    ACTIONS(364), 1,
      sym__space,
  [1474] = 1,
    ACTIONS(366), 1,
      sym__space,
  [1478] = 1,
    ACTIONS(368), 1,
      anon_sym_DQUOTE,
  [1482] = 1,
    ACTIONS(370), 1,
      sym__newline,
  [1486] = 1,
    ACTIONS(372), 1,
      anon_sym_RBRACE,
  [1490] = 1,
    ACTIONS(374), 1,
      anon_sym_RBRACE,
  [1494] = 1,
    ACTIONS(376), 1,
      sym__newline,
  [1498] = 1,
    ACTIONS(378), 1,
      sym__space,
  [1502] = 1,
    ACTIONS(380), 1,
      sym__space,
  [1506] = 1,
    ACTIONS(382), 1,
      anon_sym_RBRACK,
  [1510] = 1,
    ACTIONS(384), 1,
      sym__newline,
  [1514] = 1,
    ACTIONS(386), 1,
      sym__space,
  [1518] = 1,
    ACTIONS(388), 1,
      sym__space,
  [1522] = 1,
    ACTIONS(390), 1,
      sym__newline,
  [1526] = 1,
    ACTIONS(392), 1,
      sym__newline,
  [1530] = 1,
    ACTIONS(394), 1,
      anon_sym_COLON,
  [1534] = 1,
    ACTIONS(396), 1,
      sym__newline,
  [1538] = 1,
    ACTIONS(398), 1,
      sym__space,
  [1542] = 1,
    ACTIONS(400), 1,
      anon_sym_LBRACE,
  [1546] = 1,
    ACTIONS(402), 1,
      sym__space,
  [1550] = 1,
    ACTIONS(404), 1,
      anon_sym_COLON,
  [1554] = 1,
    ACTIONS(406), 1,
      anon_sym_COLON,
  [1558] = 1,
    ACTIONS(408), 1,
      sym__newline,
  [1562] = 1,
    ACTIONS(410), 1,
      anon_sym_RBRACE,
  [1566] = 1,
    ACTIONS(412), 1,
      sym__space,
  [1570] = 1,
    ACTIONS(414), 1,
      sym__newline,
  [1574] = 1,
    ACTIONS(416), 1,
      ts_builtin_sym_end,
  [1578] = 1,
    ACTIONS(418), 1,
      anon_sym_LBRACE,
  [1582] = 1,
    ACTIONS(420), 1,
      sym__space,
  [1586] = 1,
    ACTIONS(422), 1,
      sym__space,
  [1590] = 1,
    ACTIONS(424), 1,
      anon_sym_LBRACE,
  [1594] = 1,
    ACTIONS(48), 1,
      sym__space,
  [1598] = 1,
    ACTIONS(426), 1,
      anon_sym_RBRACK,
  [1602] = 1,
    ACTIONS(428), 1,
      anon_sym_COLON,
  [1606] = 1,
    ACTIONS(430), 1,
      anon_sym_COLON,
  [1610] = 1,
    ACTIONS(432), 1,
      anon_sym_RBRACK,
  [1614] = 1,
    ACTIONS(50), 1,
      sym__space,
  [1618] = 1,
    ACTIONS(434), 1,
      sym__space,
  [1622] = 1,
    ACTIONS(436), 1,
      sym__newline,
  [1626] = 1,
    ACTIONS(438), 1,
      sym__dot,
  [1630] = 1,
    ACTIONS(440), 1,
      sym__space,
  [1634] = 1,
    ACTIONS(442), 1,
      sym__space,
  [1638] = 1,
    ACTIONS(444), 1,
      sym__newline,
  [1642] = 1,
    ACTIONS(446), 1,
      sym__newline,
  [1646] = 1,
    ACTIONS(448), 1,
      sym__space,
  [1650] = 1,
    ACTIONS(450), 1,
      sym__newline,
  [1654] = 1,
    ACTIONS(452), 1,
      sym__space,
  [1658] = 1,
    ACTIONS(454), 1,
      anon_sym_RBRACE,
  [1662] = 1,
    ACTIONS(456), 1,
      anon_sym_RBRACK,
  [1666] = 1,
    ACTIONS(458), 1,
      anon_sym_COLON,
  [1670] = 1,
    ACTIONS(460), 1,
      anon_sym_COLON,
  [1674] = 1,
    ACTIONS(462), 1,
      anon_sym_RBRACK,
  [1678] = 1,
    ACTIONS(464), 1,
      anon_sym_SQUOTE,
  [1682] = 1,
    ACTIONS(466), 1,
      anon_sym_RBRACK,
  [1686] = 1,
    ACTIONS(468), 1,
      anon_sym_COLON,
  [1690] = 1,
    ACTIONS(354), 1,
      sym__dot,
  [1694] = 1,
    ACTIONS(470), 1,
      sym__newline,
  [1698] = 1,
    ACTIONS(472), 1,
      anon_sym_LBRACE,
  [1702] = 1,
    ACTIONS(474), 1,
      sym__space,
  [1706] = 1,
    ACTIONS(390), 1,
      anon_sym_RBRACK,
  [1710] = 1,
    ACTIONS(360), 1,
      anon_sym_RBRACK,
  [1714] = 1,
    ACTIONS(476), 1,
      sym__dot,
  [1718] = 1,
    ACTIONS(478), 1,
      sym__space,
  [1722] = 1,
    ACTIONS(480), 1,
      sym__newline,
  [1726] = 1,
    ACTIONS(50), 1,
      sym__newline,
  [1730] = 1,
    ACTIONS(48), 1,
      sym__newline,
  [1734] = 1,
    ACTIONS(482), 1,
      sym__dot,
  [1738] = 1,
    ACTIONS(484), 1,
      sym__newline,
  [1742] = 1,
    ACTIONS(486), 1,
      anon_sym_LBRACE,
  [1746] = 1,
    ACTIONS(488), 1,
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
  [SMALL_STATE(15)] = 262,
  [SMALL_STATE(16)] = 284,
  [SMALL_STATE(17)] = 306,
  [SMALL_STATE(18)] = 318,
  [SMALL_STATE(19)] = 338,
  [SMALL_STATE(20)] = 360,
  [SMALL_STATE(21)] = 369,
  [SMALL_STATE(22)] = 378,
  [SMALL_STATE(23)] = 391,
  [SMALL_STATE(24)] = 400,
  [SMALL_STATE(25)] = 409,
  [SMALL_STATE(26)] = 422,
  [SMALL_STATE(27)] = 431,
  [SMALL_STATE(28)] = 440,
  [SMALL_STATE(29)] = 449,
  [SMALL_STATE(30)] = 458,
  [SMALL_STATE(31)] = 473,
  [SMALL_STATE(32)] = 482,
  [SMALL_STATE(33)] = 497,
  [SMALL_STATE(34)] = 506,
  [SMALL_STATE(35)] = 517,
  [SMALL_STATE(36)] = 526,
  [SMALL_STATE(37)] = 535,
  [SMALL_STATE(38)] = 544,
  [SMALL_STATE(39)] = 553,
  [SMALL_STATE(40)] = 568,
  [SMALL_STATE(41)] = 581,
  [SMALL_STATE(42)] = 593,
  [SMALL_STATE(43)] = 607,
  [SMALL_STATE(44)] = 619,
  [SMALL_STATE(45)] = 631,
  [SMALL_STATE(46)] = 643,
  [SMALL_STATE(47)] = 657,
  [SMALL_STATE(48)] = 671,
  [SMALL_STATE(49)] = 683,
  [SMALL_STATE(50)] = 695,
  [SMALL_STATE(51)] = 707,
  [SMALL_STATE(52)] = 718,
  [SMALL_STATE(53)] = 731,
  [SMALL_STATE(54)] = 744,
  [SMALL_STATE(55)] = 755,
  [SMALL_STATE(56)] = 766,
  [SMALL_STATE(57)] = 777,
  [SMALL_STATE(58)] = 790,
  [SMALL_STATE(59)] = 803,
  [SMALL_STATE(60)] = 814,
  [SMALL_STATE(61)] = 827,
  [SMALL_STATE(62)] = 838,
  [SMALL_STATE(63)] = 851,
  [SMALL_STATE(64)] = 864,
  [SMALL_STATE(65)] = 875,
  [SMALL_STATE(66)] = 886,
  [SMALL_STATE(67)] = 899,
  [SMALL_STATE(68)] = 912,
  [SMALL_STATE(69)] = 922,
  [SMALL_STATE(70)] = 932,
  [SMALL_STATE(71)] = 942,
  [SMALL_STATE(72)] = 952,
  [SMALL_STATE(73)] = 958,
  [SMALL_STATE(74)] = 968,
  [SMALL_STATE(75)] = 978,
  [SMALL_STATE(76)] = 986,
  [SMALL_STATE(77)] = 996,
  [SMALL_STATE(78)] = 1006,
  [SMALL_STATE(79)] = 1016,
  [SMALL_STATE(80)] = 1026,
  [SMALL_STATE(81)] = 1036,
  [SMALL_STATE(82)] = 1046,
  [SMALL_STATE(83)] = 1056,
  [SMALL_STATE(84)] = 1066,
  [SMALL_STATE(85)] = 1076,
  [SMALL_STATE(86)] = 1084,
  [SMALL_STATE(87)] = 1094,
  [SMALL_STATE(88)] = 1104,
  [SMALL_STATE(89)] = 1110,
  [SMALL_STATE(90)] = 1120,
  [SMALL_STATE(91)] = 1130,
  [SMALL_STATE(92)] = 1140,
  [SMALL_STATE(93)] = 1150,
  [SMALL_STATE(94)] = 1160,
  [SMALL_STATE(95)] = 1170,
  [SMALL_STATE(96)] = 1180,
  [SMALL_STATE(97)] = 1190,
  [SMALL_STATE(98)] = 1196,
  [SMALL_STATE(99)] = 1204,
  [SMALL_STATE(100)] = 1210,
  [SMALL_STATE(101)] = 1218,
  [SMALL_STATE(102)] = 1223,
  [SMALL_STATE(103)] = 1230,
  [SMALL_STATE(104)] = 1235,
  [SMALL_STATE(105)] = 1242,
  [SMALL_STATE(106)] = 1249,
  [SMALL_STATE(107)] = 1256,
  [SMALL_STATE(108)] = 1263,
  [SMALL_STATE(109)] = 1270,
  [SMALL_STATE(110)] = 1275,
  [SMALL_STATE(111)] = 1282,
  [SMALL_STATE(112)] = 1287,
  [SMALL_STATE(113)] = 1294,
  [SMALL_STATE(114)] = 1301,
  [SMALL_STATE(115)] = 1306,
  [SMALL_STATE(116)] = 1313,
  [SMALL_STATE(117)] = 1320,
  [SMALL_STATE(118)] = 1327,
  [SMALL_STATE(119)] = 1332,
  [SMALL_STATE(120)] = 1339,
  [SMALL_STATE(121)] = 1346,
  [SMALL_STATE(122)] = 1351,
  [SMALL_STATE(123)] = 1358,
  [SMALL_STATE(124)] = 1365,
  [SMALL_STATE(125)] = 1372,
  [SMALL_STATE(126)] = 1377,
  [SMALL_STATE(127)] = 1382,
  [SMALL_STATE(128)] = 1389,
  [SMALL_STATE(129)] = 1396,
  [SMALL_STATE(130)] = 1403,
  [SMALL_STATE(131)] = 1410,
  [SMALL_STATE(132)] = 1415,
  [SMALL_STATE(133)] = 1422,
  [SMALL_STATE(134)] = 1426,
  [SMALL_STATE(135)] = 1430,
  [SMALL_STATE(136)] = 1434,
  [SMALL_STATE(137)] = 1438,
  [SMALL_STATE(138)] = 1442,
  [SMALL_STATE(139)] = 1446,
  [SMALL_STATE(140)] = 1450,
  [SMALL_STATE(141)] = 1454,
  [SMALL_STATE(142)] = 1458,
  [SMALL_STATE(143)] = 1462,
  [SMALL_STATE(144)] = 1466,
  [SMALL_STATE(145)] = 1470,
  [SMALL_STATE(146)] = 1474,
  [SMALL_STATE(147)] = 1478,
  [SMALL_STATE(148)] = 1482,
  [SMALL_STATE(149)] = 1486,
  [SMALL_STATE(150)] = 1490,
  [SMALL_STATE(151)] = 1494,
  [SMALL_STATE(152)] = 1498,
  [SMALL_STATE(153)] = 1502,
  [SMALL_STATE(154)] = 1506,
  [SMALL_STATE(155)] = 1510,
  [SMALL_STATE(156)] = 1514,
  [SMALL_STATE(157)] = 1518,
  [SMALL_STATE(158)] = 1522,
  [SMALL_STATE(159)] = 1526,
  [SMALL_STATE(160)] = 1530,
  [SMALL_STATE(161)] = 1534,
  [SMALL_STATE(162)] = 1538,
  [SMALL_STATE(163)] = 1542,
  [SMALL_STATE(164)] = 1546,
  [SMALL_STATE(165)] = 1550,
  [SMALL_STATE(166)] = 1554,
  [SMALL_STATE(167)] = 1558,
  [SMALL_STATE(168)] = 1562,
  [SMALL_STATE(169)] = 1566,
  [SMALL_STATE(170)] = 1570,
  [SMALL_STATE(171)] = 1574,
  [SMALL_STATE(172)] = 1578,
  [SMALL_STATE(173)] = 1582,
  [SMALL_STATE(174)] = 1586,
  [SMALL_STATE(175)] = 1590,
  [SMALL_STATE(176)] = 1594,
  [SMALL_STATE(177)] = 1598,
  [SMALL_STATE(178)] = 1602,
  [SMALL_STATE(179)] = 1606,
  [SMALL_STATE(180)] = 1610,
  [SMALL_STATE(181)] = 1614,
  [SMALL_STATE(182)] = 1618,
  [SMALL_STATE(183)] = 1622,
  [SMALL_STATE(184)] = 1626,
  [SMALL_STATE(185)] = 1630,
  [SMALL_STATE(186)] = 1634,
  [SMALL_STATE(187)] = 1638,
  [SMALL_STATE(188)] = 1642,
  [SMALL_STATE(189)] = 1646,
  [SMALL_STATE(190)] = 1650,
  [SMALL_STATE(191)] = 1654,
  [SMALL_STATE(192)] = 1658,
  [SMALL_STATE(193)] = 1662,
  [SMALL_STATE(194)] = 1666,
  [SMALL_STATE(195)] = 1670,
  [SMALL_STATE(196)] = 1674,
  [SMALL_STATE(197)] = 1678,
  [SMALL_STATE(198)] = 1682,
  [SMALL_STATE(199)] = 1686,
  [SMALL_STATE(200)] = 1690,
  [SMALL_STATE(201)] = 1694,
  [SMALL_STATE(202)] = 1698,
  [SMALL_STATE(203)] = 1702,
  [SMALL_STATE(204)] = 1706,
  [SMALL_STATE(205)] = 1710,
  [SMALL_STATE(206)] = 1714,
  [SMALL_STATE(207)] = 1718,
  [SMALL_STATE(208)] = 1722,
  [SMALL_STATE(209)] = 1726,
  [SMALL_STATE(210)] = 1730,
  [SMALL_STATE(211)] = 1734,
  [SMALL_STATE(212)] = 1738,
  [SMALL_STATE(213)] = 1742,
  [SMALL_STATE(214)] = 1746,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(189),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(207),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(203),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_name, 1, 0, 3),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_side, 3, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_indexes_definition_repeat1, 2, 0, 0),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_indexes_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_indexes_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 7, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 9, 0, 11),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_definition_repeat1, 2, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_definition_repeat1, 2, 0, 0),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(176),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_definition_repeat1, 2, 0, 0),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 10, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 8, 0, 5),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_long, 10, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 9, 0, 10),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 13, 0, 11),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 11, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_definition, 8, 0, 8),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_definition, 7, 0, 4),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_project_definition_repeat1, 2, 0, 0),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_project_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(166),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_long, 12, 0, 11),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 8, 0, 9),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 11, 0, 16),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 7, 0, 5),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 12, 0, 11),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 12, 0, 18),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_setting_default_repeat1, 2, 0, 0),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_setting_default_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_settings_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_settings_repeat1, 2, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 4, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_settings, 4, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_definition_composite_repeat1, 2, 0, 22), SHIFT_REPEAT(69),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_definition_composite_repeat1, 2, 0, 22),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_definition, 1, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 3, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_settings, 3, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relationship_definition_short_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relationship_definition_short_repeat1, 2, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_type_basic, 1, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_type_basic, 1, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_type_ref_item, 1, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_property_definition, 5, 0, 14),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 4, 0, 12),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definition, 4, 0, 12),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_definition_repeat1, 3, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 4, 0, 13),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definition, 4, 0, 13),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_definition_single, 1, 0, 17),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_definition_single, 1, 0, 17),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column, 1, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_enquoted_identifier, 3, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_enquoted_identifier, 3, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_setting_default, 5, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_setting_default, 4, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_definition_composite, 4, 0, 21),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_definition_composite, 4, 0, 21),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_definition_composite_repeat1, 2, 0, 20),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_definition_composite, 3, 0, 20),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_definition_composite, 3, 0, 20),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_inline, 4, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 1, 0, 6),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 1, 0, 6),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 1, 0, 7),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 1, 0, 7),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_setting_definition, 4, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 1, 0, 0),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_column, 1, 0, 0),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_type_ref_item, 1, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_type_ref, 3, 0, 15),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_type_ref, 3, 0, 15),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_action, 1, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_name, 1, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_symbol, 1, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 1, 0, 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enquoted_identifier_multi, 3, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_name, 1, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indexes_definition, 5, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enquoted_identifier_multi, 2, 0, 0),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_property_key, 1, 0, 0),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_definition, 2, 0, 19),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indexes_definition, 6, 0, 0),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_note_standalone, 6, 0, 0),
  [416] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_setting, 1, 0, 0),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_alias, 1, 0, 2),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_settings, 3, 0, 0),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_setting, 3, 0, 0),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_event, 1, 0, 0),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_setting, 4, 0, 0),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enquoted_identifier, 3, 0, 0),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
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
