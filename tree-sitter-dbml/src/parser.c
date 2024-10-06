#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 257
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 111
#define ALIAS_COUNT 0
#define TOKEN_COUNT 53
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 20
#define MAX_ALIAS_SEQUENCE_LENGTH 13
#define PRODUCTION_ID_COUNT 34

enum ts_symbol_identifiers {
  sym_comment = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_COLON = 4,
  sym_Project = 5,
  sym_database_type = 6,
  anon_sym_LBRACK = 7,
  anon_sym_COMMA = 8,
  anon_sym_RBRACK = 9,
  anon_sym_default = 10,
  anon_sym_SQUOTE = 11,
  anon_sym_BQUOTE = 12,
  anon_sym_primarykey = 13,
  anon_sym_pk = 14,
  anon_sym_null = 15,
  anon_sym_notnull = 16,
  anon_sym_unique = 17,
  anon_sym_increment = 18,
  sym__identifier2 = 19,
  sym_Table = 20,
  sym_as = 21,
  anon_sym_LPAREN = 22,
  anon_sym_RPAREN = 23,
  anon_sym_name = 24,
  anon_sym_type = 25,
  sym_indexes = 26,
  sym_enum = 27,
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
  anon_sym_LF = 44,
  sym__space = 45,
  sym__dot = 46,
  anon_sym_DQUOTE = 47,
  sym_ident_inside = 48,
  anon_sym_note = 49,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 50,
  aux_sym_note_value_mutliline_token1 = 51,
  sym_Note = 52,
  sym_source_file = 53,
  sym__definition = 54,
  sym_project_definition = 55,
  sym_project_name = 56,
  sym_project_property_definition2 = 57,
  sym_table_definition = 58,
  sym_table_name = 59,
  sym_column_definition = 60,
  sym_column_name = 61,
  sym__column_type = 62,
  sym_column_type_basic = 63,
  sym_column_type_ref = 64,
  sym_column_type_ref_item = 65,
  sym_column_settings = 66,
  sym_column_setting_default = 67,
  sym_column_constraint = 68,
  sym_table_alias = 69,
  sym_indexes_definition = 70,
  sym_index_definition = 71,
  sym_index_definition_single = 72,
  sym_index_definition_composite = 73,
  sym_index_column = 74,
  sym_index_settings = 75,
  sym_index_setting = 76,
  sym_enum_definition = 77,
  sym_enum_field = 78,
  sym_enum_name = 79,
  sym_relationship_definition_short = 80,
  sym_relationship_definition_inline = 81,
  sym_relationship_definition_long = 82,
  sym_relationship_definition_side = 83,
  sym_relationship_setting_definition = 84,
  sym_relationship_event = 85,
  sym_relationship_action = 86,
  sym_relationship_symbol = 87,
  sym_identifier = 88,
  sym__newline = 89,
  sym_enquoted_identifier = 90,
  sym_enquoted_identifier_multi = 91,
  sym_enquoted_identifier_multi2 = 92,
  sym_double_enquoted_identifier = 93,
  sym__hidden_identifier = 94,
  sym_note_setting_standalone = 95,
  sym_note_setting = 96,
  sym_note_standalone = 97,
  sym_note_standalone_multiline = 98,
  sym_note_value_mutliline = 99,
  sym_note = 100,
  aux_sym_source_file_repeat1 = 101,
  aux_sym_project_definition_repeat1 = 102,
  aux_sym_table_definition_repeat1 = 103,
  aux_sym_column_settings_repeat1 = 104,
  aux_sym_column_setting_default_repeat1 = 105,
  aux_sym_indexes_definition_repeat1 = 106,
  aux_sym_index_definition_composite_repeat1 = 107,
  aux_sym_enum_definition_repeat1 = 108,
  aux_sym_relationship_definition_short_repeat1 = 109,
  aux_sym_note_value_mutliline_repeat1 = 110,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [sym_Project] = "Project",
  [sym_database_type] = "database_type",
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
  [anon_sym_LF] = "\n",
  [sym__space] = "_space",
  [sym__dot] = "_dot",
  [anon_sym_DQUOTE] = "\"",
  [sym_ident_inside] = "ident_inside",
  [anon_sym_note] = "note",
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = "'''",
  [aux_sym_note_value_mutliline_token1] = "note_value_mutliline_token1",
  [sym_Note] = "Note",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_project_definition] = "project_definition",
  [sym_project_name] = "project_name",
  [sym_project_property_definition2] = "project_property_definition2",
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
  [sym__newline] = "_newline",
  [sym_enquoted_identifier] = "enquoted_identifier",
  [sym_enquoted_identifier_multi] = "enquoted_identifier_multi",
  [sym_enquoted_identifier_multi2] = "enquoted_identifier_multi2",
  [sym_double_enquoted_identifier] = "double_enquoted_identifier",
  [sym__hidden_identifier] = "_hidden_identifier",
  [sym_note_setting_standalone] = "note_setting_standalone",
  [sym_note_setting] = "note_setting",
  [sym_note_standalone] = "note_standalone",
  [sym_note_standalone_multiline] = "note_standalone_multiline",
  [sym_note_value_mutliline] = "note_value_mutliline",
  [sym_note] = "note",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_project_definition_repeat1] = "project_definition_repeat1",
  [aux_sym_table_definition_repeat1] = "table_definition_repeat1",
  [aux_sym_column_settings_repeat1] = "column_settings_repeat1",
  [aux_sym_column_setting_default_repeat1] = "column_setting_default_repeat1",
  [aux_sym_indexes_definition_repeat1] = "indexes_definition_repeat1",
  [aux_sym_index_definition_composite_repeat1] = "index_definition_composite_repeat1",
  [aux_sym_enum_definition_repeat1] = "enum_definition_repeat1",
  [aux_sym_relationship_definition_short_repeat1] = "relationship_definition_short_repeat1",
  [aux_sym_note_value_mutliline_repeat1] = "note_value_mutliline_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_Project] = sym_Project,
  [sym_database_type] = sym_database_type,
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
  [anon_sym_LF] = anon_sym_LF,
  [sym__space] = sym__space,
  [sym__dot] = sym__dot,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_ident_inside] = sym_ident_inside,
  [anon_sym_note] = anon_sym_note,
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [aux_sym_note_value_mutliline_token1] = aux_sym_note_value_mutliline_token1,
  [sym_Note] = sym_Note,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_project_definition] = sym_project_definition,
  [sym_project_name] = sym_project_name,
  [sym_project_property_definition2] = sym_project_property_definition2,
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
  [sym__newline] = sym__newline,
  [sym_enquoted_identifier] = sym_enquoted_identifier,
  [sym_enquoted_identifier_multi] = sym_enquoted_identifier_multi,
  [sym_enquoted_identifier_multi2] = sym_enquoted_identifier_multi2,
  [sym_double_enquoted_identifier] = sym_double_enquoted_identifier,
  [sym__hidden_identifier] = sym__hidden_identifier,
  [sym_note_setting_standalone] = sym_note_setting_standalone,
  [sym_note_setting] = sym_note_setting,
  [sym_note_standalone] = sym_note_standalone,
  [sym_note_standalone_multiline] = sym_note_standalone_multiline,
  [sym_note_value_mutliline] = sym_note_value_mutliline,
  [sym_note] = sym_note,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_project_definition_repeat1] = aux_sym_project_definition_repeat1,
  [aux_sym_table_definition_repeat1] = aux_sym_table_definition_repeat1,
  [aux_sym_column_settings_repeat1] = aux_sym_column_settings_repeat1,
  [aux_sym_column_setting_default_repeat1] = aux_sym_column_setting_default_repeat1,
  [aux_sym_indexes_definition_repeat1] = aux_sym_indexes_definition_repeat1,
  [aux_sym_index_definition_composite_repeat1] = aux_sym_index_definition_composite_repeat1,
  [aux_sym_enum_definition_repeat1] = aux_sym_enum_definition_repeat1,
  [aux_sym_relationship_definition_short_repeat1] = aux_sym_relationship_definition_short_repeat1,
  [aux_sym_note_value_mutliline_repeat1] = aux_sym_note_value_mutliline_repeat1,
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
  [sym_Project] = {
    .visible = true,
    .named = true,
  },
  [sym_database_type] = {
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
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
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
  [sym_ident_inside] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_note] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_note_value_mutliline_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_Note] = {
    .visible = true,
    .named = true,
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
  [sym_project_property_definition2] = {
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
  [sym__newline] = {
    .visible = false,
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
  [sym_enquoted_identifier_multi2] = {
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
  [sym_note_setting_standalone] = {
    .visible = true,
    .named = true,
  },
  [sym_note_setting] = {
    .visible = true,
    .named = true,
  },
  [sym_note_standalone] = {
    .visible = true,
    .named = true,
  },
  [sym_note_standalone_multiline] = {
    .visible = true,
    .named = true,
  },
  [sym_note_value_mutliline] = {
    .visible = true,
    .named = true,
  },
  [sym_note] = {
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
  [aux_sym_note_value_mutliline_repeat1] = {
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
  field_note = 14,
  field_project_name = 15,
  field_project_property = 16,
  field_relationship_name = 17,
  field_table_alias = 18,
  field_table_alias_name = 19,
  field_table_name = 20,
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
  [field_note] = "note",
  [field_project_name] = "project_name",
  [field_project_property] = "project_property",
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
  [8] = {.index = 7, .length = 1},
  [9] = {.index = 8, .length = 2},
  [10] = {.index = 10, .length = 2},
  [11] = {.index = 12, .length = 2},
  [12] = {.index = 14, .length = 2},
  [13] = {.index = 16, .length = 3},
  [14] = {.index = 19, .length = 3},
  [15] = {.index = 22, .length = 3},
  [16] = {.index = 25, .length = 1},
  [17] = {.index = 26, .length = 3},
  [18] = {.index = 29, .length = 2},
  [19] = {.index = 31, .length = 4},
  [20] = {.index = 35, .length = 2},
  [21] = {.index = 37, .length = 1},
  [22] = {.index = 38, .length = 2},
  [23] = {.index = 40, .length = 3},
  [24] = {.index = 43, .length = 3},
  [25] = {.index = 46, .length = 3},
  [26] = {.index = 49, .length = 1},
  [27] = {.index = 50, .length = 4},
  [28] = {.index = 54, .length = 4},
  [29] = {.index = 58, .length = 4},
  [30] = {.index = 62, .length = 1},
  [31] = {.index = 63, .length = 5},
  [32] = {.index = 68, .length = 2},
  [33] = {.index = 70, .length = 2},
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
    {field_enum_name, 2},
  [6] =
    {field_enum_field_name, 0},
  [7] =
    {field_enum_field, 0},
  [8] =
    {field_project_name, 2},
    {field_project_property, 6},
  [10] =
    {field_indexes, 6},
    {field_table_name, 2},
  [12] =
    {field_note, 6},
    {field_table_name, 2},
  [14] =
    {field_column, 6},
    {field_table_name, 2},
  [16] =
    {field_indexes, 6},
    {field_note, 7},
    {field_table_name, 2},
  [19] =
    {field_column, 6},
    {field_indexes, 7},
    {field_table_name, 2},
  [22] =
    {field_column, 6},
    {field_note, 7},
    {field_table_name, 2},
  [25] =
    {field_relationship_name, 2},
  [26] =
    {field_col_name, 0},
    {field_col_settings, 3},
    {field_col_type, 2},
  [29] =
    {field_col_name, 0},
    {field_col_type, 2},
  [31] =
    {field_column, 6},
    {field_indexes, 7},
    {field_note, 8},
    {field_table_name, 2},
  [35] =
    {field_table_alias_name, 5},
    {field_table_name, 2},
  [37] =
    {field_index_column, 0},
  [38] =
    {field_column_ref_type_left, 0},
    {field_column_ref_type_right, 2},
  [40] =
    {field_indexes, 9},
    {field_table_alias_name, 5},
    {field_table_name, 2},
  [43] =
    {field_note, 9},
    {field_table_alias_name, 5},
    {field_table_name, 2},
  [46] =
    {field_column, 9},
    {field_table_alias_name, 5},
    {field_table_name, 2},
  [49] =
    {field_index_settings, 1},
  [50] =
    {field_indexes, 9},
    {field_note, 10},
    {field_table_alias_name, 5},
    {field_table_name, 2},
  [54] =
    {field_column, 9},
    {field_indexes, 10},
    {field_table_alias_name, 5},
    {field_table_name, 2},
  [58] =
    {field_column, 9},
    {field_note, 10},
    {field_table_alias_name, 5},
    {field_table_name, 2},
  [62] =
    {field_index_column, 1},
  [63] =
    {field_column, 9},
    {field_indexes, 10},
    {field_note, 11},
    {field_table_alias_name, 5},
    {field_table_name, 2},
  [68] =
    {field_index_column, 1},
    {field_index_column, 2, .inherited = true},
  [70] =
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
  [77] = 66,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 69,
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
  [109] = 98,
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
  [121] = 98,
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
  [132] = 21,
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
  [145] = 21,
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
  [156] = 124,
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
  [192] = 192,
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
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 182,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 78,
  [247] = 71,
  [248] = 11,
  [249] = 249,
  [250] = 12,
  [251] = 12,
  [252] = 11,
  [253] = 198,
  [254] = 254,
  [255] = 255,
  [256] = 198,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(142);
      ADVANCE_MAP(
        '"', 201,
        '\'', 153,
        '(', 164,
        ')', 165,
        ',', 150,
        '-', 181,
        '.', 200,
        '/', 14,
        ':', 146,
        '<', 182,
        '>', 183,
        'N', 100,
        'P', 107,
        'R', 43,
        'T', 18,
        '[', 149,
        ']', 151,
        '`', 154,
        'a', 111,
        'c', 20,
        'd', 21,
        'e', 93,
        'i', 94,
        'n', 19,
        'o', 95,
        'p', 77,
        'r', 44,
        's', 60,
        't', 137,
        'u', 97,
        '{', 144,
        '}', 145,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(196);
      if (lookahead == '\'') ADVANCE(210);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(207);
      if (lookahead != 0) ADVANCE(211);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(197);
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == '[') ADVANCE(149);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(203);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(198);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(208);
      if (lookahead != 0) ADVANCE(211);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(78);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(199);
      if (lookahead == ':') ADVANCE(146);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(7);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(98);
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '"', 201,
        '\'', 153,
        '(', 164,
        ')', 165,
        ',', 150,
        ']', 151,
        '`', 154,
        '{', 144,
        '}', 145,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == 'N') ADVANCE(191);
      if (lookahead == 'i') ADVANCE(190);
      if (lookahead == '}') ADVANCE(145);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(205);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(143);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(171);
      END_STATE();
    case 16:
      if (lookahead == '_') ADVANCE(39);
      END_STATE();
    case 17:
      if (lookahead == '_') ADVANCE(129);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(90);
      if (lookahead == 'o') ADVANCE(8);
      if (lookahead == 'u') ADVANCE(82);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(128);
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 31:
      if (lookahead == 'b') ADVANCE(86);
      END_STATE();
    case 32:
      if (lookahead == 'b') ADVANCE(26);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(110);
      if (lookahead == 'd') ADVANCE(46);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(123);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(24);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(116);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(118);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(65);
      if (lookahead == 'u') ADVANCE(105);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(53);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(57);
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(29);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 68:
      if (lookahead == 'f') ADVANCE(185);
      END_STATE();
    case 69:
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 70:
      if (lookahead == 'f') ADVANCE(23);
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 71:
      if (lookahead == 'f') ADVANCE(30);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 76:
      if (lookahead == 'j') ADVANCE(66);
      END_STATE();
    case 77:
      if (lookahead == 'k') ADVANCE(156);
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 78:
      if (lookahead == 'k') ADVANCE(59);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(157);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(158);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(178);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 89:
      if (lookahead == 'm') ADVANCE(170);
      END_STATE();
    case 90:
      if (lookahead == 'm') ADVANCE(47);
      END_STATE();
    case 91:
      if (lookahead == 'm') ADVANCE(27);
      END_STATE();
    case 92:
      if (lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(180);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(72);
      if (lookahead == 'p') ADVANCE(38);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 103:
      if (lookahead == 'p') ADVANCE(48);
      END_STATE();
    case 104:
      if (lookahead == 'p') ADVANCE(56);
      END_STATE();
    case 105:
      if (lookahead == 'p') ADVANCE(42);
      END_STATE();
    case 106:
      if (lookahead == 'q') ADVANCE(132);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 111:
      if (lookahead == 's') ADVANCE(163);
      END_STATE();
    case 112:
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 113:
      if (lookahead == 's') ADVANCE(168);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 130:
      if (lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 131:
      if (lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 132:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 133:
      if (lookahead == 'u') ADVANCE(83);
      END_STATE();
    case 134:
      if (lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 135:
      if (lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 136:
      if (lookahead == 'x') ADVANCE(61);
      END_STATE();
    case 137:
      if (lookahead == 'y') ADVANCE(103);
      END_STATE();
    case 138:
      if (lookahead == 'y') ADVANCE(155);
      END_STATE();
    case 139:
      if (lookahead == 'y') ADVANCE(6);
      END_STATE();
    case 140:
      if (lookahead == 'y') ADVANCE(104);
      END_STATE();
    case 141:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(141);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_Project);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_database_type);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_primarykey);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_pk);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_notnull);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_unique);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_increment);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__identifier2);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_Table);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_as);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_indexes);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_indexes);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_enum);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_ref_COLON);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_on_delete);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_update);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_on_update);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_cascade);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_restrict);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_setnull);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_setdefault);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_noaction);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '>') ADVANCE(184);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_Ref);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(188);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(194);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(192);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(193);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(169);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'x') ADVANCE(189);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(196);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(207);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(198);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(208);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == ' ') ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__dot);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_ident_inside);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(202);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '\'') ADVANCE(203);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_ident_inside);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(211);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_note_value_mutliline_token1);
      if (lookahead == '\n') ADVANCE(196);
      if (lookahead == '\'') ADVANCE(210);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(207);
      if (lookahead != 0) ADVANCE(211);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_note_value_mutliline_token1);
      if (lookahead == '\n') ADVANCE(198);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(208);
      if (lookahead != 0) ADVANCE(211);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_note_value_mutliline_token1);
      if (lookahead == '\'') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(211);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_note_value_mutliline_token1);
      if (lookahead == '\'') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(211);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_note_value_mutliline_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_Note);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_Note);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
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
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 10},
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
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 141},
  [62] = {.lex_state = 10},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 11},
  [65] = {.lex_state = 11},
  [66] = {.lex_state = 10},
  [67] = {.lex_state = 10},
  [68] = {.lex_state = 10},
  [69] = {.lex_state = 10},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 10},
  [73] = {.lex_state = 11},
  [74] = {.lex_state = 10},
  [75] = {.lex_state = 11},
  [76] = {.lex_state = 10},
  [77] = {.lex_state = 10},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 10},
  [80] = {.lex_state = 10},
  [81] = {.lex_state = 10},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 10},
  [84] = {.lex_state = 10},
  [85] = {.lex_state = 10},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 10},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 10},
  [90] = {.lex_state = 10},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 10},
  [93] = {.lex_state = 10},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 10},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 10},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 10},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 10},
  [108] = {.lex_state = 10},
  [109] = {.lex_state = 10},
  [110] = {.lex_state = 10},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 10},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 10},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 10},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 10},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 141},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 7},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 10},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 2},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 2},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 2},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 2},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 7},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 7},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 2},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 2},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 10},
  [155] = {.lex_state = 2},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 2},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 7},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 11},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 2},
  [172] = {.lex_state = 2},
  [173] = {.lex_state = 10},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 2},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 7},
  [183] = {.lex_state = 2},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 7},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 7},
  [188] = {.lex_state = 7},
  [189] = {.lex_state = 7},
  [190] = {.lex_state = 7},
  [191] = {.lex_state = 7},
  [192] = {.lex_state = 7},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 7},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 7},
  [200] = {.lex_state = 7},
  [201] = {.lex_state = 7},
  [202] = {.lex_state = 7},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 7},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 11},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 3},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 2},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 7},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 2},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 7},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 7},
  [236] = {.lex_state = 7},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 7},
  [244] = {.lex_state = 10},
  [245] = {.lex_state = 7},
  [246] = {.lex_state = 2},
  [247] = {.lex_state = 2},
  [248] = {.lex_state = 7},
  [249] = {.lex_state = 7},
  [250] = {.lex_state = 7},
  [251] = {.lex_state = 2},
  [252] = {.lex_state = 2},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 7},
  [255] = {.lex_state = 7},
  [256] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_Project] = ACTIONS(1),
    [sym_database_type] = ACTIONS(1),
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
    [sym_Note] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(221),
    [sym__definition] = STATE(4),
    [sym_project_definition] = STATE(4),
    [sym_table_definition] = STATE(4),
    [sym_enum_definition] = STATE(4),
    [sym_relationship_definition_short] = STATE(4),
    [sym_relationship_definition_long] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_Project] = ACTIONS(7),
    [sym_Table] = ACTIONS(9),
    [sym_enum] = ACTIONS(11),
    [sym_Ref] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(15), 1,
      anon_sym_default,
    ACTIONS(19), 1,
      anon_sym_ref_COLON,
    ACTIONS(21), 1,
      anon_sym_note,
    STATE(178), 1,
      sym_note,
    STATE(99), 4,
      sym_column_setting_default,
      sym_column_constraint,
      sym_relationship_definition_inline,
      sym_note_setting,
    ACTIONS(17), 6,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_increment,
  [27] = 6,
    ACTIONS(15), 1,
      anon_sym_default,
    ACTIONS(19), 1,
      anon_sym_ref_COLON,
    ACTIONS(21), 1,
      anon_sym_note,
    STATE(178), 1,
      sym_note,
    STATE(135), 4,
      sym_column_setting_default,
      sym_column_constraint,
      sym_relationship_definition_inline,
      sym_note_setting,
    ACTIONS(17), 6,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_increment,
  [54] = 7,
    ACTIONS(7), 1,
      sym_Project,
    ACTIONS(9), 1,
      sym_Table,
    ACTIONS(11), 1,
      sym_enum,
    ACTIONS(13), 1,
      sym_Ref,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      sym_comment,
    STATE(5), 7,
      sym__definition,
      sym_project_definition,
      sym_table_definition,
      sym_enum_definition,
      sym_relationship_definition_short,
      sym_relationship_definition_long,
      aux_sym_source_file_repeat1,
  [82] = 7,
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
    STATE(5), 7,
      sym__definition,
      sym_project_definition,
      sym_table_definition,
      sym_enum_definition,
      sym_relationship_definition_short,
      sym_relationship_definition_long,
      aux_sym_source_file_repeat1,
  [110] = 9,
    ACTIONS(44), 1,
      anon_sym_RBRACE,
    ACTIONS(46), 1,
      sym_indexes,
    ACTIONS(48), 1,
      aux_sym_identifier_token1,
    ACTIONS(50), 1,
      sym_Note,
    STATE(103), 1,
      sym_indexes_definition,
    STATE(224), 1,
      sym_note_standalone,
    STATE(235), 1,
      sym_column_name,
    STATE(248), 1,
      sym__hidden_identifier,
    STATE(15), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [139] = 9,
    ACTIONS(46), 1,
      sym_indexes,
    ACTIONS(48), 1,
      aux_sym_identifier_token1,
    ACTIONS(50), 1,
      sym_Note,
    ACTIONS(52), 1,
      anon_sym_RBRACE,
    STATE(114), 1,
      sym_indexes_definition,
    STATE(203), 1,
      sym_note_standalone,
    STATE(235), 1,
      sym_column_name,
    STATE(248), 1,
      sym__hidden_identifier,
    STATE(9), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [168] = 9,
    ACTIONS(46), 1,
      sym_indexes,
    ACTIONS(48), 1,
      aux_sym_identifier_token1,
    ACTIONS(50), 1,
      sym_Note,
    ACTIONS(54), 1,
      anon_sym_RBRACE,
    STATE(118), 1,
      sym_indexes_definition,
    STATE(233), 1,
      sym_note_standalone,
    STATE(235), 1,
      sym_column_name,
    STATE(248), 1,
      sym__hidden_identifier,
    STATE(6), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [197] = 9,
    ACTIONS(46), 1,
      sym_indexes,
    ACTIONS(48), 1,
      aux_sym_identifier_token1,
    ACTIONS(50), 1,
      sym_Note,
    ACTIONS(56), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      sym_indexes_definition,
    STATE(180), 1,
      sym_note_standalone,
    STATE(235), 1,
      sym_column_name,
    STATE(248), 1,
      sym__hidden_identifier,
    STATE(15), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [226] = 8,
    ACTIONS(58), 1,
      anon_sym_RBRACE,
    ACTIONS(60), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      aux_sym_identifier_token1,
    STATE(10), 1,
      aux_sym_indexes_definition_repeat1,
    STATE(153), 1,
      sym_index_definition,
    STATE(155), 1,
      sym_index_column,
    STATE(156), 1,
      sym_identifier,
    STATE(100), 2,
      sym_index_definition_single,
      sym_index_definition_composite,
  [252] = 1,
    ACTIONS(66), 9,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_Table,
      sym_enum,
      sym_Ref,
  [264] = 1,
    ACTIONS(68), 9,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_Table,
      sym_enum,
      sym_Ref,
  [276] = 8,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    ACTIONS(74), 1,
      aux_sym_identifier_token1,
    STATE(14), 1,
      aux_sym_indexes_definition_repeat1,
    STATE(153), 1,
      sym_index_definition,
    STATE(155), 1,
      sym_index_column,
    STATE(156), 1,
      sym_identifier,
    STATE(100), 2,
      sym_index_definition_single,
      sym_index_definition_composite,
  [302] = 8,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    ACTIONS(74), 1,
      aux_sym_identifier_token1,
    ACTIONS(76), 1,
      anon_sym_RBRACE,
    STATE(10), 1,
      aux_sym_indexes_definition_repeat1,
    STATE(153), 1,
      sym_index_definition,
    STATE(155), 1,
      sym_index_column,
    STATE(156), 1,
      sym_identifier,
    STATE(100), 2,
      sym_index_definition_single,
      sym_index_definition_composite,
  [328] = 6,
    ACTIONS(78), 1,
      anon_sym_RBRACE,
    ACTIONS(82), 1,
      aux_sym_identifier_token1,
    STATE(235), 1,
      sym_column_name,
    STATE(248), 1,
      sym__hidden_identifier,
    ACTIONS(80), 2,
      sym_indexes,
      sym_Note,
    STATE(15), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [349] = 7,
    ACTIONS(74), 1,
      aux_sym_identifier_token1,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    STATE(20), 1,
      aux_sym_enum_definition_repeat1,
    STATE(86), 1,
      sym_enum_field,
    STATE(171), 1,
      sym_double_enquoted_identifier,
    STATE(172), 1,
      sym_identifier,
  [371] = 7,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    ACTIONS(91), 1,
      aux_sym_identifier_token1,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    STATE(17), 1,
      aux_sym_enum_definition_repeat1,
    STATE(86), 1,
      sym_enum_field,
    STATE(171), 1,
      sym_double_enquoted_identifier,
    STATE(172), 1,
      sym_identifier,
  [393] = 2,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(97), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [405] = 2,
    ACTIONS(103), 1,
      anon_sym_LBRACK,
    ACTIONS(101), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [417] = 7,
    ACTIONS(74), 1,
      aux_sym_identifier_token1,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      aux_sym_enum_definition_repeat1,
    STATE(86), 1,
      sym_enum_field,
    STATE(171), 1,
      sym_double_enquoted_identifier,
    STATE(172), 1,
      sym_identifier,
  [439] = 1,
    ACTIONS(107), 7,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_RPAREN,
      aux_sym_identifier_token1,
      anon_sym_DQUOTE,
  [449] = 1,
    ACTIONS(109), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [458] = 1,
    ACTIONS(111), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [467] = 1,
    ACTIONS(113), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [476] = 1,
    ACTIONS(115), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [485] = 1,
    ACTIONS(117), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [494] = 3,
    STATE(95), 1,
      sym_relationship_setting_definition,
    STATE(213), 1,
      sym_relationship_event,
    ACTIONS(119), 4,
      anon_sym_delete,
      anon_sym_on_delete,
      anon_sym_update,
      anon_sym_on_update,
  [507] = 1,
    ACTIONS(121), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [516] = 1,
    ACTIONS(123), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [525] = 3,
    STATE(169), 1,
      sym_relationship_setting_definition,
    STATE(213), 1,
      sym_relationship_event,
    ACTIONS(119), 4,
      anon_sym_delete,
      anon_sym_on_delete,
      anon_sym_update,
      anon_sym_on_update,
  [538] = 1,
    ACTIONS(125), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [547] = 1,
    ACTIONS(127), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [556] = 1,
    ACTIONS(129), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [565] = 1,
    ACTIONS(131), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [574] = 1,
    ACTIONS(133), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [583] = 1,
    ACTIONS(135), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [592] = 1,
    ACTIONS(137), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [601] = 1,
    ACTIONS(139), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [610] = 1,
    ACTIONS(141), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [619] = 3,
    STATE(120), 1,
      sym_relationship_setting_definition,
    STATE(213), 1,
      sym_relationship_event,
    ACTIONS(119), 4,
      anon_sym_delete,
      anon_sym_on_delete,
      anon_sym_update,
      anon_sym_on_update,
  [632] = 2,
    STATE(141), 1,
      sym_relationship_action,
    ACTIONS(143), 5,
      anon_sym_cascade,
      anon_sym_restrict,
      anon_sym_setnull,
      anon_sym_setdefault,
      anon_sym_noaction,
  [643] = 1,
    ACTIONS(145), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [652] = 1,
    ACTIONS(147), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [661] = 1,
    ACTIONS(149), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [670] = 1,
    ACTIONS(151), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [679] = 1,
    ACTIONS(153), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [688] = 1,
    ACTIONS(155), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [697] = 1,
    ACTIONS(157), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [706] = 1,
    ACTIONS(159), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [715] = 1,
    ACTIONS(161), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [724] = 1,
    ACTIONS(163), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [733] = 3,
    ACTIONS(167), 1,
      anon_sym_LT,
    STATE(79), 1,
      sym_relationship_symbol,
    ACTIONS(165), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [745] = 3,
    ACTIONS(167), 1,
      anon_sym_LT,
    STATE(89), 1,
      sym_relationship_symbol,
    ACTIONS(165), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [757] = 3,
    ACTIONS(167), 1,
      anon_sym_LT,
    STATE(83), 1,
      sym_relationship_symbol,
    ACTIONS(165), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [769] = 4,
    ACTIONS(169), 1,
      anon_sym_RBRACE,
    ACTIONS(171), 1,
      sym_database_type,
    ACTIONS(174), 1,
      sym_Note,
    STATE(55), 2,
      sym_project_property_definition2,
      aux_sym_project_definition_repeat1,
  [783] = 4,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
    ACTIONS(179), 1,
      sym_database_type,
    ACTIONS(181), 1,
      sym_Note,
    STATE(55), 2,
      sym_project_property_definition2,
      aux_sym_project_definition_repeat1,
  [797] = 4,
    ACTIONS(185), 1,
      anon_sym_name,
    ACTIONS(187), 1,
      anon_sym_type,
    STATE(209), 1,
      sym_index_setting,
    ACTIONS(183), 2,
      anon_sym_pk,
      anon_sym_unique,
  [811] = 4,
    ACTIONS(179), 1,
      sym_database_type,
    ACTIONS(181), 1,
      sym_Note,
    ACTIONS(189), 1,
      anon_sym_RBRACE,
    STATE(56), 2,
      sym_project_property_definition2,
      aux_sym_project_definition_repeat1,
  [825] = 3,
    ACTIONS(167), 1,
      anon_sym_LT,
    STATE(87), 1,
      sym_relationship_symbol,
    ACTIONS(165), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [837] = 3,
    ACTIONS(167), 1,
      anon_sym_LT,
    STATE(74), 1,
      sym_relationship_symbol,
    ACTIONS(165), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [849] = 3,
    ACTIONS(191), 1,
      sym__identifier2,
    STATE(218), 1,
      sym_column_type_ref_item,
    STATE(82), 3,
      sym__column_type,
      sym_column_type_basic,
      sym_column_type_ref,
  [861] = 3,
    ACTIONS(195), 1,
      aux_sym_identifier_token1,
    ACTIONS(193), 2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
    STATE(62), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [873] = 3,
    ACTIONS(200), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(70), 1,
      aux_sym_note_value_mutliline_repeat1,
    ACTIONS(198), 2,
      anon_sym_LF,
      aux_sym_note_value_mutliline_token1,
  [884] = 2,
    ACTIONS(202), 1,
      anon_sym_RBRACE,
    ACTIONS(204), 3,
      sym_indexes,
      aux_sym_identifier_token1,
      sym_Note,
  [893] = 2,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
    ACTIONS(208), 3,
      sym_indexes,
      aux_sym_identifier_token1,
      sym_Note,
  [902] = 3,
    ACTIONS(210), 1,
      anon_sym_SQUOTE,
    ACTIONS(212), 1,
      aux_sym_identifier_token1,
    STATE(62), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [913] = 4,
    ACTIONS(214), 1,
      aux_sym_identifier_token1,
    STATE(198), 1,
      sym_table_name,
    STATE(242), 1,
      sym__hidden_identifier,
    STATE(243), 1,
      sym_relationship_definition_side,
  [926] = 4,
    ACTIONS(214), 1,
      aux_sym_identifier_token1,
    STATE(198), 1,
      sym_table_name,
    STATE(200), 1,
      sym_relationship_definition_side,
    STATE(242), 1,
      sym__hidden_identifier,
  [939] = 3,
    ACTIONS(212), 1,
      aux_sym_identifier_token1,
    ACTIONS(216), 1,
      anon_sym_SQUOTE,
    STATE(66), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [950] = 3,
    ACTIONS(221), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(70), 1,
      aux_sym_note_value_mutliline_repeat1,
    ACTIONS(218), 2,
      anon_sym_LF,
      aux_sym_note_value_mutliline_token1,
  [961] = 1,
    ACTIONS(223), 4,
      anon_sym_RBRACE,
      sym_database_type,
      anon_sym_RBRACK,
      sym_Note,
  [968] = 4,
    ACTIONS(214), 1,
      aux_sym_identifier_token1,
    STATE(192), 1,
      sym_relationship_definition_side,
    STATE(198), 1,
      sym_table_name,
    STATE(242), 1,
      sym__hidden_identifier,
  [981] = 2,
    ACTIONS(225), 1,
      anon_sym_RBRACE,
    ACTIONS(227), 3,
      sym_indexes,
      aux_sym_identifier_token1,
      sym_Note,
  [990] = 4,
    ACTIONS(214), 1,
      aux_sym_identifier_token1,
    STATE(19), 1,
      sym_relationship_definition_side,
    STATE(242), 1,
      sym__hidden_identifier,
    STATE(253), 1,
      sym_table_name,
  [1003] = 2,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    ACTIONS(231), 3,
      sym_indexes,
      aux_sym_identifier_token1,
      sym_Note,
  [1012] = 4,
    ACTIONS(214), 1,
      aux_sym_identifier_token1,
    STATE(198), 1,
      sym_table_name,
    STATE(230), 1,
      sym_relationship_definition_side,
    STATE(242), 1,
      sym__hidden_identifier,
  [1025] = 3,
    ACTIONS(212), 1,
      aux_sym_identifier_token1,
    ACTIONS(233), 1,
      anon_sym_SQUOTE,
    STATE(62), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [1036] = 1,
    ACTIONS(235), 4,
      anon_sym_RBRACE,
      sym_database_type,
      anon_sym_RBRACK,
      sym_Note,
  [1043] = 4,
    ACTIONS(214), 1,
      aux_sym_identifier_token1,
    STATE(146), 1,
      sym_relationship_definition_side,
    STATE(242), 1,
      sym__hidden_identifier,
    STATE(256), 1,
      sym_table_name,
  [1056] = 3,
    ACTIONS(212), 1,
      aux_sym_identifier_token1,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    STATE(90), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [1067] = 3,
    ACTIONS(212), 1,
      aux_sym_identifier_token1,
    ACTIONS(237), 1,
      anon_sym_BQUOTE,
    STATE(84), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [1078] = 4,
    ACTIONS(239), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      anon_sym_LF,
    STATE(73), 1,
      sym__newline,
    STATE(75), 1,
      sym_column_settings,
  [1091] = 4,
    ACTIONS(214), 1,
      aux_sym_identifier_token1,
    STATE(18), 1,
      sym_relationship_definition_side,
    STATE(242), 1,
      sym__hidden_identifier,
    STATE(253), 1,
      sym_table_name,
  [1104] = 3,
    ACTIONS(212), 1,
      aux_sym_identifier_token1,
    ACTIONS(243), 1,
      anon_sym_BQUOTE,
    STATE(62), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [1115] = 3,
    ACTIONS(212), 1,
      aux_sym_identifier_token1,
    ACTIONS(245), 1,
      anon_sym_SQUOTE,
    STATE(77), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [1126] = 4,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    ACTIONS(249), 1,
      anon_sym_LF,
    STATE(108), 1,
      sym__newline,
    STATE(142), 1,
      sym_note_setting_standalone,
  [1139] = 4,
    ACTIONS(214), 1,
      aux_sym_identifier_token1,
    STATE(133), 1,
      sym_relationship_definition_side,
    STATE(242), 1,
      sym__hidden_identifier,
    STATE(253), 1,
      sym_table_name,
  [1152] = 3,
    STATE(63), 1,
      aux_sym_note_value_mutliline_repeat1,
    STATE(211), 1,
      sym_note_value_mutliline,
    ACTIONS(251), 2,
      anon_sym_LF,
      aux_sym_note_value_mutliline_token1,
  [1163] = 4,
    ACTIONS(214), 1,
      aux_sym_identifier_token1,
    STATE(140), 1,
      sym_relationship_definition_side,
    STATE(242), 1,
      sym__hidden_identifier,
    STATE(256), 1,
      sym_table_name,
  [1176] = 3,
    ACTIONS(212), 1,
      aux_sym_identifier_token1,
    ACTIONS(243), 1,
      anon_sym_SQUOTE,
    STATE(62), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [1187] = 1,
    ACTIONS(253), 3,
      anon_sym_RBRACE,
      sym_database_type,
      sym_Note,
  [1193] = 3,
    ACTIONS(255), 1,
      aux_sym_identifier_token1,
    STATE(254), 1,
      sym__hidden_identifier,
    STATE(255), 1,
      sym_table_alias,
  [1203] = 1,
    ACTIONS(58), 3,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_identifier_token1,
  [1209] = 3,
    ACTIONS(257), 1,
      anon_sym_COMMA,
    ACTIONS(259), 1,
      anon_sym_RPAREN,
    STATE(122), 1,
      aux_sym_index_definition_composite_repeat1,
  [1219] = 3,
    ACTIONS(261), 1,
      anon_sym_COMMA,
    ACTIONS(263), 1,
      anon_sym_RBRACK,
    STATE(112), 1,
      aux_sym_relationship_definition_short_repeat1,
  [1229] = 3,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    ACTIONS(268), 1,
      anon_sym_RBRACK,
    STATE(96), 1,
      aux_sym_relationship_definition_short_repeat1,
  [1239] = 3,
    ACTIONS(270), 1,
      anon_sym_RBRACE,
    ACTIONS(272), 1,
      sym_Note,
    STATE(195), 1,
      sym_note_standalone,
  [1249] = 3,
    ACTIONS(274), 1,
      aux_sym_identifier_token1,
    STATE(251), 1,
      sym_column_name,
    STATE(252), 1,
      sym__hidden_identifier,
  [1259] = 3,
    ACTIONS(276), 1,
      anon_sym_COMMA,
    ACTIONS(278), 1,
      anon_sym_RBRACK,
    STATE(104), 1,
      aux_sym_column_settings_repeat1,
  [1269] = 3,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_LF,
    STATE(183), 1,
      sym_index_settings,
  [1279] = 3,
    ACTIONS(212), 1,
      aux_sym_identifier_token1,
    STATE(94), 1,
      sym_index_column,
    STATE(124), 1,
      sym_identifier,
  [1289] = 3,
    ACTIONS(284), 1,
      anon_sym_COMMA,
    ACTIONS(287), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      aux_sym_index_definition_composite_repeat1,
  [1299] = 3,
    ACTIONS(272), 1,
      sym_Note,
    ACTIONS(289), 1,
      anon_sym_RBRACE,
    STATE(216), 1,
      sym_note_standalone,
  [1309] = 3,
    ACTIONS(276), 1,
      anon_sym_COMMA,
    ACTIONS(291), 1,
      anon_sym_RBRACK,
    STATE(116), 1,
      aux_sym_column_settings_repeat1,
  [1319] = 3,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    ACTIONS(295), 1,
      aux_sym_identifier_token1,
    STATE(164), 1,
      sym_identifier,
  [1329] = 3,
    ACTIONS(261), 1,
      anon_sym_COMMA,
    ACTIONS(297), 1,
      anon_sym_RBRACK,
    STATE(96), 1,
      aux_sym_relationship_definition_short_repeat1,
  [1339] = 3,
    ACTIONS(295), 1,
      aux_sym_identifier_token1,
    STATE(188), 1,
      sym_identifier,
    STATE(189), 1,
      sym_project_name,
  [1349] = 1,
    ACTIONS(89), 3,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
      anon_sym_DQUOTE,
  [1355] = 3,
    ACTIONS(299), 1,
      aux_sym_identifier_token1,
    STATE(11), 1,
      sym__hidden_identifier,
    STATE(12), 1,
      sym_column_name,
  [1365] = 3,
    ACTIONS(295), 1,
      aux_sym_identifier_token1,
    STATE(187), 1,
      sym_identifier,
    STATE(191), 1,
      sym_enum_name,
  [1375] = 1,
    ACTIONS(301), 3,
      anon_sym_RBRACE,
      sym_database_type,
      sym_Note,
  [1381] = 3,
    ACTIONS(261), 1,
      anon_sym_COMMA,
    ACTIONS(303), 1,
      anon_sym_RBRACK,
    STATE(96), 1,
      aux_sym_relationship_definition_short_repeat1,
  [1391] = 3,
    ACTIONS(305), 1,
      aux_sym_identifier_token1,
    STATE(182), 1,
      sym__hidden_identifier,
    STATE(185), 1,
      sym_table_name,
  [1401] = 3,
    ACTIONS(272), 1,
      sym_Note,
    ACTIONS(307), 1,
      anon_sym_RBRACE,
    STATE(181), 1,
      sym_note_standalone,
  [1411] = 3,
    ACTIONS(309), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      anon_sym_LF,
    ACTIONS(313), 1,
      sym__dot,
  [1421] = 3,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    ACTIONS(318), 1,
      anon_sym_RBRACK,
    STATE(116), 1,
      aux_sym_column_settings_repeat1,
  [1431] = 3,
    ACTIONS(212), 1,
      aux_sym_identifier_token1,
    STATE(124), 1,
      sym_identifier,
    STATE(144), 1,
      sym_index_column,
  [1441] = 3,
    ACTIONS(272), 1,
      sym_Note,
    ACTIONS(320), 1,
      anon_sym_RBRACE,
    STATE(226), 1,
      sym_note_standalone,
  [1451] = 1,
    ACTIONS(322), 3,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
      anon_sym_DQUOTE,
  [1457] = 3,
    ACTIONS(261), 1,
      anon_sym_COMMA,
    ACTIONS(324), 1,
      anon_sym_RBRACK,
    STATE(106), 1,
      aux_sym_relationship_definition_short_repeat1,
  [1467] = 3,
    ACTIONS(326), 1,
      aux_sym_identifier_token1,
    STATE(248), 1,
      sym__hidden_identifier,
    STATE(250), 1,
      sym_column_name,
  [1477] = 3,
    ACTIONS(257), 1,
      anon_sym_COMMA,
    ACTIONS(328), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      aux_sym_index_definition_composite_repeat1,
  [1487] = 2,
    ACTIONS(330), 1,
      sym__identifier2,
    STATE(163), 1,
      sym_column_type_ref_item,
  [1494] = 1,
    ACTIONS(332), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1499] = 2,
    ACTIONS(334), 1,
      anon_sym_COLON,
    ACTIONS(336), 1,
      sym__space,
  [1506] = 1,
    ACTIONS(338), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1511] = 1,
    ACTIONS(340), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1516] = 2,
    ACTIONS(342), 1,
      anon_sym_LBRACK,
    ACTIONS(344), 1,
      anon_sym_LF,
  [1523] = 2,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    STATE(158), 1,
      sym_enquoted_identifier_multi,
  [1530] = 2,
    ACTIONS(348), 1,
      anon_sym_LF,
    STATE(8), 1,
      sym__newline,
  [1537] = 2,
    ACTIONS(212), 1,
      aux_sym_identifier_token1,
    STATE(239), 1,
      sym_identifier,
  [1544] = 2,
    ACTIONS(107), 1,
      anon_sym_LF,
    ACTIONS(350), 1,
      anon_sym_LBRACK,
  [1551] = 1,
    ACTIONS(352), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1556] = 2,
    ACTIONS(354), 1,
      anon_sym_LF,
    STATE(58), 1,
      sym__newline,
  [1563] = 1,
    ACTIONS(318), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1568] = 2,
    ACTIONS(356), 1,
      anon_sym_LBRACK,
    ACTIONS(358), 1,
      anon_sym_LF,
  [1575] = 2,
    ACTIONS(360), 1,
      anon_sym_LF,
    STATE(129), 1,
      sym__newline,
  [1582] = 1,
    ACTIONS(362), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1587] = 2,
    ACTIONS(364), 1,
      anon_sym_LF,
    STATE(13), 1,
      sym__newline,
  [1594] = 2,
    ACTIONS(366), 1,
      anon_sym_LF,
    STATE(212), 1,
      sym__newline,
  [1601] = 1,
    ACTIONS(368), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1606] = 2,
    ACTIONS(370), 1,
      anon_sym_LF,
    STATE(119), 1,
      sym__newline,
  [1613] = 1,
    ACTIONS(372), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1618] = 1,
    ACTIONS(374), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1623] = 2,
    ACTIONS(107), 1,
      sym__space,
    ACTIONS(350), 1,
      anon_sym_COLON,
  [1630] = 2,
    ACTIONS(376), 1,
      anon_sym_LF,
    STATE(179), 1,
      sym__newline,
  [1637] = 2,
    ACTIONS(378), 1,
      anon_sym_COLON,
    ACTIONS(380), 1,
      sym__space,
  [1644] = 2,
    ACTIONS(382), 1,
      anon_sym_LBRACE,
    ACTIONS(384), 1,
      sym_as,
  [1651] = 2,
    ACTIONS(386), 1,
      anon_sym_LF,
    STATE(7), 1,
      sym__newline,
  [1658] = 2,
    ACTIONS(388), 1,
      anon_sym_SQUOTE,
    STATE(238), 1,
      sym_enquoted_identifier,
  [1665] = 1,
    ACTIONS(390), 2,
      anon_sym_RBRACE,
      sym_Note,
  [1670] = 2,
    ACTIONS(392), 1,
      anon_sym_LBRACK,
    ACTIONS(394), 1,
      anon_sym_LF,
  [1677] = 2,
    ACTIONS(396), 1,
      anon_sym_LF,
    STATE(93), 1,
      sym__newline,
  [1684] = 2,
    ACTIONS(212), 1,
      aux_sym_identifier_token1,
    STATE(234), 1,
      sym_identifier,
  [1691] = 2,
    ACTIONS(398), 1,
      anon_sym_LBRACK,
    ACTIONS(400), 1,
      anon_sym_LF,
  [1698] = 2,
    ACTIONS(332), 1,
      anon_sym_LF,
    ACTIONS(402), 1,
      anon_sym_LBRACK,
  [1705] = 2,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    STATE(138), 1,
      sym_enquoted_identifier_multi2,
  [1712] = 2,
    ACTIONS(406), 1,
      anon_sym_LF,
    STATE(186), 1,
      sym__newline,
  [1719] = 2,
    ACTIONS(408), 1,
      anon_sym_LF,
    STATE(16), 1,
      sym__newline,
  [1726] = 1,
    ACTIONS(410), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1731] = 2,
    ACTIONS(412), 1,
      anon_sym_SQUOTE,
    STATE(219), 1,
      sym_enquoted_identifier_multi,
  [1738] = 2,
    ACTIONS(313), 1,
      anon_sym_LBRACK,
    ACTIONS(414), 1,
      anon_sym_LF,
  [1745] = 2,
    ACTIONS(416), 1,
      anon_sym_LBRACK,
    ACTIONS(418), 1,
      anon_sym_LF,
  [1752] = 2,
    ACTIONS(420), 1,
      anon_sym_COLON,
    ACTIONS(422), 1,
      sym__space,
  [1759] = 2,
    ACTIONS(424), 1,
      anon_sym_LF,
    STATE(72), 1,
      sym__newline,
  [1766] = 1,
    ACTIONS(426), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1771] = 2,
    ACTIONS(428), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(111), 1,
      sym_note_standalone_multiline,
  [1778] = 2,
    ACTIONS(412), 1,
      anon_sym_SQUOTE,
    STATE(197), 1,
      sym_enquoted_identifier_multi,
  [1785] = 1,
    ACTIONS(268), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1790] = 2,
    ACTIONS(412), 1,
      anon_sym_SQUOTE,
    STATE(111), 1,
      sym_enquoted_identifier_multi,
  [1797] = 2,
    ACTIONS(430), 1,
      anon_sym_LBRACK,
    ACTIONS(432), 1,
      anon_sym_LF,
  [1804] = 2,
    ACTIONS(434), 1,
      anon_sym_LBRACK,
    ACTIONS(436), 1,
      anon_sym_LF,
  [1811] = 2,
    ACTIONS(212), 1,
      aux_sym_identifier_token1,
    STATE(223), 1,
      sym_identifier,
  [1818] = 1,
    ACTIONS(438), 2,
      anon_sym_RBRACE,
      sym_Note,
  [1823] = 2,
    ACTIONS(440), 1,
      anon_sym_SQUOTE,
    ACTIONS(442), 1,
      anon_sym_BQUOTE,
  [1830] = 2,
    ACTIONS(444), 1,
      anon_sym_LF,
    STATE(76), 1,
      sym__newline,
  [1837] = 1,
    ACTIONS(446), 1,
      anon_sym_COLON,
  [1841] = 1,
    ACTIONS(448), 1,
      anon_sym_COLON,
  [1845] = 1,
    ACTIONS(450), 1,
      anon_sym_RBRACE,
  [1849] = 1,
    ACTIONS(452), 1,
      anon_sym_RBRACE,
  [1853] = 1,
    ACTIONS(454), 1,
      anon_sym_RBRACE,
  [1857] = 1,
    ACTIONS(456), 1,
      sym__space,
  [1861] = 1,
    ACTIONS(458), 1,
      anon_sym_LF,
  [1865] = 1,
    ACTIONS(460), 1,
      anon_sym_COLON,
  [1869] = 1,
    ACTIONS(462), 1,
      sym__space,
  [1873] = 1,
    ACTIONS(464), 1,
      anon_sym_RBRACE,
  [1877] = 1,
    ACTIONS(466), 1,
      sym__space,
  [1881] = 1,
    ACTIONS(468), 1,
      sym__space,
  [1885] = 1,
    ACTIONS(470), 1,
      sym__space,
  [1889] = 1,
    ACTIONS(472), 1,
      sym__space,
  [1893] = 1,
    ACTIONS(474), 1,
      sym__space,
  [1897] = 1,
    ACTIONS(476), 1,
      sym__space,
  [1901] = 1,
    ACTIONS(478), 1,
      anon_sym_LBRACE,
  [1905] = 1,
    ACTIONS(480), 1,
      anon_sym_LBRACE,
  [1909] = 1,
    ACTIONS(482), 1,
      anon_sym_RBRACE,
  [1913] = 1,
    ACTIONS(484), 1,
      sym__space,
  [1917] = 1,
    ACTIONS(486), 1,
      anon_sym_RBRACK,
  [1921] = 1,
    ACTIONS(488), 1,
      sym__dot,
  [1925] = 1,
    ACTIONS(490), 1,
      sym__space,
  [1929] = 1,
    ACTIONS(492), 1,
      sym__space,
  [1933] = 1,
    ACTIONS(494), 1,
      sym__space,
  [1937] = 1,
    ACTIONS(496), 1,
      sym__space,
  [1941] = 1,
    ACTIONS(498), 1,
      anon_sym_RBRACE,
  [1945] = 1,
    ACTIONS(500), 1,
      anon_sym_LBRACE,
  [1949] = 1,
    ACTIONS(502), 1,
      sym__space,
  [1953] = 1,
    ACTIONS(504), 1,
      anon_sym_RBRACK,
  [1957] = 1,
    ACTIONS(506), 1,
      anon_sym_COLON,
  [1961] = 1,
    ACTIONS(508), 1,
      anon_sym_COLON,
  [1965] = 1,
    ACTIONS(510), 1,
      anon_sym_RBRACK,
  [1969] = 1,
    ACTIONS(512), 1,
      anon_sym_RBRACE,
  [1973] = 1,
    ACTIONS(514), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [1977] = 1,
    ACTIONS(516), 1,
      anon_sym_RBRACE,
  [1981] = 1,
    ACTIONS(518), 1,
      anon_sym_COLON,
  [1985] = 1,
    ACTIONS(520), 1,
      anon_sym_COLON,
  [1989] = 1,
    ACTIONS(522), 1,
      anon_sym_COLON,
  [1993] = 1,
    ACTIONS(524), 1,
      anon_sym_RBRACE,
  [1997] = 1,
    ACTIONS(526), 1,
      sym_ident_inside,
  [2001] = 1,
    ACTIONS(528), 1,
      sym__dot,
  [2005] = 1,
    ACTIONS(530), 1,
      anon_sym_RBRACE,
  [2009] = 1,
    ACTIONS(532), 1,
      anon_sym_LF,
  [2013] = 1,
    ACTIONS(534), 1,
      ts_builtin_sym_end,
  [2017] = 1,
    ACTIONS(536), 1,
      anon_sym_note,
  [2021] = 1,
    ACTIONS(538), 1,
      anon_sym_DQUOTE,
  [2025] = 1,
    ACTIONS(540), 1,
      anon_sym_RBRACE,
  [2029] = 1,
    ACTIONS(542), 1,
      sym__space,
  [2033] = 1,
    ACTIONS(544), 1,
      anon_sym_RBRACE,
  [2037] = 1,
    ACTIONS(546), 1,
      anon_sym_LF,
  [2041] = 1,
    ACTIONS(548), 1,
      anon_sym_LBRACE,
  [2045] = 1,
    ACTIONS(550), 1,
      anon_sym_LBRACE,
  [2049] = 1,
    ACTIONS(552), 1,
      sym__space,
  [2053] = 1,
    ACTIONS(554), 1,
      anon_sym_LBRACE,
  [2057] = 1,
    ACTIONS(556), 1,
      anon_sym_SQUOTE,
  [2061] = 1,
    ACTIONS(558), 1,
      anon_sym_RBRACE,
  [2065] = 1,
    ACTIONS(560), 1,
      anon_sym_RBRACK,
  [2069] = 1,
    ACTIONS(562), 1,
      sym__space,
  [2073] = 1,
    ACTIONS(564), 1,
      sym__space,
  [2077] = 1,
    ACTIONS(566), 1,
      anon_sym_COLON,
  [2081] = 1,
    ACTIONS(568), 1,
      anon_sym_RBRACK,
  [2085] = 1,
    ACTIONS(570), 1,
      anon_sym_SQUOTE,
  [2089] = 1,
    ACTIONS(572), 1,
      anon_sym_RBRACK,
  [2093] = 1,
    ACTIONS(574), 1,
      anon_sym_COLON,
  [2097] = 1,
    ACTIONS(456), 1,
      sym__dot,
  [2101] = 1,
    ACTIONS(576), 1,
      sym__space,
  [2105] = 1,
    ACTIONS(578), 1,
      aux_sym_identifier_token1,
  [2109] = 1,
    ACTIONS(580), 1,
      sym__space,
  [2113] = 1,
    ACTIONS(235), 1,
      anon_sym_LF,
  [2117] = 1,
    ACTIONS(223), 1,
      anon_sym_LF,
  [2121] = 1,
    ACTIONS(66), 1,
      sym__space,
  [2125] = 1,
    ACTIONS(582), 1,
      sym__space,
  [2129] = 1,
    ACTIONS(68), 1,
      sym__space,
  [2133] = 1,
    ACTIONS(68), 1,
      anon_sym_LF,
  [2137] = 1,
    ACTIONS(66), 1,
      anon_sym_LF,
  [2141] = 1,
    ACTIONS(584), 1,
      sym__dot,
  [2145] = 1,
    ACTIONS(586), 1,
      sym__space,
  [2149] = 1,
    ACTIONS(588), 1,
      sym__space,
  [2153] = 1,
    ACTIONS(590), 1,
      sym__dot,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 54,
  [SMALL_STATE(5)] = 82,
  [SMALL_STATE(6)] = 110,
  [SMALL_STATE(7)] = 139,
  [SMALL_STATE(8)] = 168,
  [SMALL_STATE(9)] = 197,
  [SMALL_STATE(10)] = 226,
  [SMALL_STATE(11)] = 252,
  [SMALL_STATE(12)] = 264,
  [SMALL_STATE(13)] = 276,
  [SMALL_STATE(14)] = 302,
  [SMALL_STATE(15)] = 328,
  [SMALL_STATE(16)] = 349,
  [SMALL_STATE(17)] = 371,
  [SMALL_STATE(18)] = 393,
  [SMALL_STATE(19)] = 405,
  [SMALL_STATE(20)] = 417,
  [SMALL_STATE(21)] = 439,
  [SMALL_STATE(22)] = 449,
  [SMALL_STATE(23)] = 458,
  [SMALL_STATE(24)] = 467,
  [SMALL_STATE(25)] = 476,
  [SMALL_STATE(26)] = 485,
  [SMALL_STATE(27)] = 494,
  [SMALL_STATE(28)] = 507,
  [SMALL_STATE(29)] = 516,
  [SMALL_STATE(30)] = 525,
  [SMALL_STATE(31)] = 538,
  [SMALL_STATE(32)] = 547,
  [SMALL_STATE(33)] = 556,
  [SMALL_STATE(34)] = 565,
  [SMALL_STATE(35)] = 574,
  [SMALL_STATE(36)] = 583,
  [SMALL_STATE(37)] = 592,
  [SMALL_STATE(38)] = 601,
  [SMALL_STATE(39)] = 610,
  [SMALL_STATE(40)] = 619,
  [SMALL_STATE(41)] = 632,
  [SMALL_STATE(42)] = 643,
  [SMALL_STATE(43)] = 652,
  [SMALL_STATE(44)] = 661,
  [SMALL_STATE(45)] = 670,
  [SMALL_STATE(46)] = 679,
  [SMALL_STATE(47)] = 688,
  [SMALL_STATE(48)] = 697,
  [SMALL_STATE(49)] = 706,
  [SMALL_STATE(50)] = 715,
  [SMALL_STATE(51)] = 724,
  [SMALL_STATE(52)] = 733,
  [SMALL_STATE(53)] = 745,
  [SMALL_STATE(54)] = 757,
  [SMALL_STATE(55)] = 769,
  [SMALL_STATE(56)] = 783,
  [SMALL_STATE(57)] = 797,
  [SMALL_STATE(58)] = 811,
  [SMALL_STATE(59)] = 825,
  [SMALL_STATE(60)] = 837,
  [SMALL_STATE(61)] = 849,
  [SMALL_STATE(62)] = 861,
  [SMALL_STATE(63)] = 873,
  [SMALL_STATE(64)] = 884,
  [SMALL_STATE(65)] = 893,
  [SMALL_STATE(66)] = 902,
  [SMALL_STATE(67)] = 913,
  [SMALL_STATE(68)] = 926,
  [SMALL_STATE(69)] = 939,
  [SMALL_STATE(70)] = 950,
  [SMALL_STATE(71)] = 961,
  [SMALL_STATE(72)] = 968,
  [SMALL_STATE(73)] = 981,
  [SMALL_STATE(74)] = 990,
  [SMALL_STATE(75)] = 1003,
  [SMALL_STATE(76)] = 1012,
  [SMALL_STATE(77)] = 1025,
  [SMALL_STATE(78)] = 1036,
  [SMALL_STATE(79)] = 1043,
  [SMALL_STATE(80)] = 1056,
  [SMALL_STATE(81)] = 1067,
  [SMALL_STATE(82)] = 1078,
  [SMALL_STATE(83)] = 1091,
  [SMALL_STATE(84)] = 1104,
  [SMALL_STATE(85)] = 1115,
  [SMALL_STATE(86)] = 1126,
  [SMALL_STATE(87)] = 1139,
  [SMALL_STATE(88)] = 1152,
  [SMALL_STATE(89)] = 1163,
  [SMALL_STATE(90)] = 1176,
  [SMALL_STATE(91)] = 1187,
  [SMALL_STATE(92)] = 1193,
  [SMALL_STATE(93)] = 1203,
  [SMALL_STATE(94)] = 1209,
  [SMALL_STATE(95)] = 1219,
  [SMALL_STATE(96)] = 1229,
  [SMALL_STATE(97)] = 1239,
  [SMALL_STATE(98)] = 1249,
  [SMALL_STATE(99)] = 1259,
  [SMALL_STATE(100)] = 1269,
  [SMALL_STATE(101)] = 1279,
  [SMALL_STATE(102)] = 1289,
  [SMALL_STATE(103)] = 1299,
  [SMALL_STATE(104)] = 1309,
  [SMALL_STATE(105)] = 1319,
  [SMALL_STATE(106)] = 1329,
  [SMALL_STATE(107)] = 1339,
  [SMALL_STATE(108)] = 1349,
  [SMALL_STATE(109)] = 1355,
  [SMALL_STATE(110)] = 1365,
  [SMALL_STATE(111)] = 1375,
  [SMALL_STATE(112)] = 1381,
  [SMALL_STATE(113)] = 1391,
  [SMALL_STATE(114)] = 1401,
  [SMALL_STATE(115)] = 1411,
  [SMALL_STATE(116)] = 1421,
  [SMALL_STATE(117)] = 1431,
  [SMALL_STATE(118)] = 1441,
  [SMALL_STATE(119)] = 1451,
  [SMALL_STATE(120)] = 1457,
  [SMALL_STATE(121)] = 1467,
  [SMALL_STATE(122)] = 1477,
  [SMALL_STATE(123)] = 1487,
  [SMALL_STATE(124)] = 1494,
  [SMALL_STATE(125)] = 1499,
  [SMALL_STATE(126)] = 1506,
  [SMALL_STATE(127)] = 1511,
  [SMALL_STATE(128)] = 1516,
  [SMALL_STATE(129)] = 1523,
  [SMALL_STATE(130)] = 1530,
  [SMALL_STATE(131)] = 1537,
  [SMALL_STATE(132)] = 1544,
  [SMALL_STATE(133)] = 1551,
  [SMALL_STATE(134)] = 1556,
  [SMALL_STATE(135)] = 1563,
  [SMALL_STATE(136)] = 1568,
  [SMALL_STATE(137)] = 1575,
  [SMALL_STATE(138)] = 1582,
  [SMALL_STATE(139)] = 1587,
  [SMALL_STATE(140)] = 1594,
  [SMALL_STATE(141)] = 1601,
  [SMALL_STATE(142)] = 1606,
  [SMALL_STATE(143)] = 1613,
  [SMALL_STATE(144)] = 1618,
  [SMALL_STATE(145)] = 1623,
  [SMALL_STATE(146)] = 1630,
  [SMALL_STATE(147)] = 1637,
  [SMALL_STATE(148)] = 1644,
  [SMALL_STATE(149)] = 1651,
  [SMALL_STATE(150)] = 1658,
  [SMALL_STATE(151)] = 1665,
  [SMALL_STATE(152)] = 1670,
  [SMALL_STATE(153)] = 1677,
  [SMALL_STATE(154)] = 1684,
  [SMALL_STATE(155)] = 1691,
  [SMALL_STATE(156)] = 1698,
  [SMALL_STATE(157)] = 1705,
  [SMALL_STATE(158)] = 1712,
  [SMALL_STATE(159)] = 1719,
  [SMALL_STATE(160)] = 1726,
  [SMALL_STATE(161)] = 1731,
  [SMALL_STATE(162)] = 1738,
  [SMALL_STATE(163)] = 1745,
  [SMALL_STATE(164)] = 1752,
  [SMALL_STATE(165)] = 1759,
  [SMALL_STATE(166)] = 1766,
  [SMALL_STATE(167)] = 1771,
  [SMALL_STATE(168)] = 1778,
  [SMALL_STATE(169)] = 1785,
  [SMALL_STATE(170)] = 1790,
  [SMALL_STATE(171)] = 1797,
  [SMALL_STATE(172)] = 1804,
  [SMALL_STATE(173)] = 1811,
  [SMALL_STATE(174)] = 1818,
  [SMALL_STATE(175)] = 1823,
  [SMALL_STATE(176)] = 1830,
  [SMALL_STATE(177)] = 1837,
  [SMALL_STATE(178)] = 1841,
  [SMALL_STATE(179)] = 1845,
  [SMALL_STATE(180)] = 1849,
  [SMALL_STATE(181)] = 1853,
  [SMALL_STATE(182)] = 1857,
  [SMALL_STATE(183)] = 1861,
  [SMALL_STATE(184)] = 1865,
  [SMALL_STATE(185)] = 1869,
  [SMALL_STATE(186)] = 1873,
  [SMALL_STATE(187)] = 1877,
  [SMALL_STATE(188)] = 1881,
  [SMALL_STATE(189)] = 1885,
  [SMALL_STATE(190)] = 1889,
  [SMALL_STATE(191)] = 1893,
  [SMALL_STATE(192)] = 1897,
  [SMALL_STATE(193)] = 1901,
  [SMALL_STATE(194)] = 1905,
  [SMALL_STATE(195)] = 1909,
  [SMALL_STATE(196)] = 1913,
  [SMALL_STATE(197)] = 1917,
  [SMALL_STATE(198)] = 1921,
  [SMALL_STATE(199)] = 1925,
  [SMALL_STATE(200)] = 1929,
  [SMALL_STATE(201)] = 1933,
  [SMALL_STATE(202)] = 1937,
  [SMALL_STATE(203)] = 1941,
  [SMALL_STATE(204)] = 1945,
  [SMALL_STATE(205)] = 1949,
  [SMALL_STATE(206)] = 1953,
  [SMALL_STATE(207)] = 1957,
  [SMALL_STATE(208)] = 1961,
  [SMALL_STATE(209)] = 1965,
  [SMALL_STATE(210)] = 1969,
  [SMALL_STATE(211)] = 1973,
  [SMALL_STATE(212)] = 1977,
  [SMALL_STATE(213)] = 1981,
  [SMALL_STATE(214)] = 1985,
  [SMALL_STATE(215)] = 1989,
  [SMALL_STATE(216)] = 1993,
  [SMALL_STATE(217)] = 1997,
  [SMALL_STATE(218)] = 2001,
  [SMALL_STATE(219)] = 2005,
  [SMALL_STATE(220)] = 2009,
  [SMALL_STATE(221)] = 2013,
  [SMALL_STATE(222)] = 2017,
  [SMALL_STATE(223)] = 2021,
  [SMALL_STATE(224)] = 2025,
  [SMALL_STATE(225)] = 2029,
  [SMALL_STATE(226)] = 2033,
  [SMALL_STATE(227)] = 2037,
  [SMALL_STATE(228)] = 2041,
  [SMALL_STATE(229)] = 2045,
  [SMALL_STATE(230)] = 2049,
  [SMALL_STATE(231)] = 2053,
  [SMALL_STATE(232)] = 2057,
  [SMALL_STATE(233)] = 2061,
  [SMALL_STATE(234)] = 2065,
  [SMALL_STATE(235)] = 2069,
  [SMALL_STATE(236)] = 2073,
  [SMALL_STATE(237)] = 2077,
  [SMALL_STATE(238)] = 2081,
  [SMALL_STATE(239)] = 2085,
  [SMALL_STATE(240)] = 2089,
  [SMALL_STATE(241)] = 2093,
  [SMALL_STATE(242)] = 2097,
  [SMALL_STATE(243)] = 2101,
  [SMALL_STATE(244)] = 2105,
  [SMALL_STATE(245)] = 2109,
  [SMALL_STATE(246)] = 2113,
  [SMALL_STATE(247)] = 2117,
  [SMALL_STATE(248)] = 2121,
  [SMALL_STATE(249)] = 2125,
  [SMALL_STATE(250)] = 2129,
  [SMALL_STATE(251)] = 2133,
  [SMALL_STATE(252)] = 2137,
  [SMALL_STATE(253)] = 2141,
  [SMALL_STATE(254)] = 2145,
  [SMALL_STATE(255)] = 2149,
  [SMALL_STATE(256)] = 2153,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(205),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(249),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(245),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_indexes_definition_repeat1, 2, 0, 0),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_indexes_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_indexes_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_name, 1, 0, 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_side, 3, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_definition_repeat1, 2, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_definition_repeat1, 2, 0, 0),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(248),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_definition_repeat1, 2, 0, 0),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(173),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 9, 0, 16),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 7, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 8, 0, 12),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_long, 12, 0, 16),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 11, 0, 24),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 11, 0, 23),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 8, 0, 10),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_long, 10, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 10, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 10, 0, 20),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 10, 0, 19),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 12, 0, 27),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 12, 0, 28),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 12, 0, 29),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 7, 0, 6),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 8, 0, 6),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 8, 0, 11),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 9, 0, 15),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 12, 0, 16),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 11, 0, 25),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 7, 0, 5),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 13, 0, 31),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 11, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 13, 0, 16),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_definition, 8, 0, 9),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 9, 0, 13),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_definition, 7, 0, 4),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 9, 0, 14),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_project_definition_repeat1, 2, 0, 0),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_project_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(241),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_project_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(237),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_setting_default_repeat1, 2, 0, 0),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_setting_default_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_value_mutliline, 1, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 4, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_settings, 4, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 3, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_settings, 3, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_note_value_mutliline_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_note_value_mutliline_repeat1, 2, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enquoted_identifier_multi, 3, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 4, 0, 18),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definition, 4, 0, 18),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 4, 0, 17),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definition, 4, 0, 17),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enquoted_identifier_multi, 2, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_standalone_multiline, 3, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relationship_definition_short_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relationship_definition_short_repeat1, 2, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_definition, 1, 0, 0),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_definition_composite_repeat1, 2, 0, 33), SHIFT_REPEAT(117),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_definition_composite_repeat1, 2, 0, 33),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_property_definition2, 3, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_type_basic, 1, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_type_basic, 1, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_type_ref_item, 1, 0, 0),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_settings_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_settings_repeat1, 2, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_definition_repeat1, 3, 0, 0),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column, 1, 0, 0),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_setting_default, 5, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enquoted_identifier_multi2, 3, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_definition_composite, 3, 0, 30),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_definition_composite, 3, 0, 30),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_inline, 4, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_enquoted_identifier, 3, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_enquoted_identifier, 3, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_setting, 3, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_setting_definition, 4, 0, 0),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_action, 1, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_definition_composite_repeat1, 2, 0, 30),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indexes_definition, 5, 0, 0),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_definition_composite, 4, 0, 32),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_definition_composite, 4, 0, 32),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_definition_single, 1, 0, 21),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_definition_single, 1, 0, 21),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_column, 1, 0, 0),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 1, 0, 0),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_type_ref_item, 1, 0, 0),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_type_ref, 3, 0, 22),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_type_ref, 3, 0, 22),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_setting_default, 4, 0, 0),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 1, 0, 8),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 1, 0, 8),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 1, 0, 7),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 1, 0, 7),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indexes_definition, 6, 0, 0),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 1, 0, 1),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_definition, 2, 0, 26),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1, 0, 0),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_name, 1, 0, 0),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_name, 1, 0, 0),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_setting, 1, 0, 0),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_standalone, 7, 0, 0),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_event, 1, 0, 0),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_standalone, 3, 0, 0),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_setting_standalone, 6, 0, 0),
  [534] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_settings, 3, 0, 0),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_setting, 3, 0, 0),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_setting, 4, 0, 0),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enquoted_identifier, 3, 0, 0),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_symbol, 1, 0, 0),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_alias, 1, 0, 2),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
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
