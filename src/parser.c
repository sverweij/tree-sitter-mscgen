#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 148
#define SYMBOL_COUNT 163
#define ALIAS_COUNT 2
#define TOKEN_COUNT 102
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  anon_sym_hscale = 1,
  anon_sym_arcgradient = 2,
  sym_size_option_key = 3,
  sym_string_option_key = 4,
  anon_sym_wordwraparcs = 5,
  anon_sym_wordwrapentities = 6,
  anon_sym_wordwrapboxes = 7,
  anon_sym_activation = 8,
  anon_sym_label = 9,
  anon_sym_idurl = 10,
  anon_sym_id = 11,
  anon_sym_url = 12,
  anon_sym_linecolor = 13,
  anon_sym_linecolour = 14,
  anon_sym_textcolor = 15,
  anon_sym_textcolour = 16,
  anon_sym_textbgcolor = 17,
  anon_sym_textbgcolour = 18,
  anon_sym_arclinecolor = 19,
  anon_sym_arclinecolour = 20,
  anon_sym_arctextcolor = 21,
  anon_sym_arctextcolour = 22,
  anon_sym_arctextbgcolor = 23,
  anon_sym_arctextbgcolour = 24,
  anon_sym_title = 25,
  anon_sym_DASH_GT = 26,
  anon_sym_EQ_GT = 27,
  anon_sym_COLON_GT = 28,
  anon_sym_EQ_GT_GT = 29,
  anon_sym_GT_GT = 30,
  anon_sym_DASHx = 31,
  anon_sym_DASHX = 32,
  anon_sym_LT_DASH = 33,
  anon_sym_LT_EQ = 34,
  anon_sym_LT_COLON = 35,
  anon_sym_LT_LT_EQ = 36,
  anon_sym_LT_LT = 37,
  anon_sym_x_DASH = 38,
  anon_sym_X_DASH = 39,
  anon_sym_LT_DASH_GT = 40,
  anon_sym_LT_EQ_GT = 41,
  anon_sym_LT_COLON_GT = 42,
  anon_sym_LT_LT_EQ_GT_GT = 43,
  anon_sym_LT_LT_GT_GT = 44,
  anon_sym_DASH_DASH = 45,
  anon_sym_EQ_EQ = 46,
  anon_sym_COLON_COLON = 47,
  anon_sym_DOT_DOT = 48,
  anon_sym_note = 49,
  anon_sym_abox = 50,
  anon_sym_rbox = 51,
  anon_sym_box = 52,
  anon_sym_PIPE_PIPE_PIPE = 53,
  anon_sym_DOT_DOT_DOT = 54,
  sym_comment_arc = 55,
  anon_sym_alt = 56,
  anon_sym_else = 57,
  anon_sym_opt = 58,
  anon_sym_break = 59,
  anon_sym_par = 60,
  anon_sym_seq = 61,
  anon_sym_strict = 62,
  anon_sym_neg = 63,
  anon_sym_critical = 64,
  anon_sym_ignore = 65,
  anon_sym_consider = 66,
  anon_sym_assert = 67,
  anon_sym_loop = 68,
  anon_sym_ref = 69,
  anon_sym_exc = 70,
  anon_sym_activate = 71,
  anon_sym_deactivate = 72,
  sym_number_arc_attribute_key = 73,
  anon_sym_msc = 74,
  anon_sym_xu = 75,
  sym_curly_bracket_open = 76,
  sym_curly_bracket_close = 77,
  sym_square_bracket_open = 78,
  sym_square_bracket_close = 79,
  sym_equals = 80,
  sym_comma = 81,
  sym_colon = 82,
  sym_semicolon = 83,
  sym__dot = 84,
  sym__identifier = 85,
  sym__integer = 86,
  sym__real = 87,
  anon_sym_DQUOTE = 88,
  anon_sym_auto = 89,
  anon_sym_true = 90,
  anon_sym_false = 91,
  anon_sym_on = 92,
  anon_sym_off = 93,
  anon_sym_0 = 94,
  anon_sym_1 = 95,
  aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH = 96,
  anon_sym_BSLASH_DQUOTE = 97,
  sym_escape_sequence = 98,
  anon_sym_STAR = 99,
  anon_sym_DQUOTE_STAR_DQUOTE = 100,
  sym_comment = 101,
  sym_sequence_chart = 102,
  sym_options = 103,
  sym_option = 104,
  sym__numerical_option = 105,
  sym_numerical_option_key = 106,
  sym__size_option = 107,
  sym__string_option = 108,
  sym__boolean_option = 109,
  sym_boolean_option_key = 110,
  sym_entities = 111,
  sym_entity = 112,
  sym_entity_attributes = 113,
  sym_entity_attribute = 114,
  sym__boolean_entity_attribute = 115,
  sym_boolean_entity_attribute_key = 116,
  sym__string_entity_attribute = 117,
  sym_string_entity_attribute_key = 118,
  sym_arcs = 119,
  sym_arc = 120,
  sym__dual_arc = 121,
  sym_forward_arrow = 122,
  sym_backward_arrow = 123,
  sym_bidirectional_arrow = 124,
  sym_box = 125,
  sym_single_arc = 126,
  sym__inline_expression_arc = 127,
  sym_inline_expression_token = 128,
  sym_inline_expression = 129,
  sym_arc_attributes = 130,
  sym_arc_attribute = 131,
  sym__string_arc_attribute = 132,
  sym_string_arc_attribute_key = 133,
  sym__boolean_arc_attribute = 134,
  sym_boolean_arc_attribute_key = 135,
  sym_value_only_arc_attribute_key = 136,
  sym__number_arc_attribute = 137,
  sym_start_token = 138,
  sym_identifier = 139,
  sym_entity_identifier = 140,
  sym__numberlike = 141,
  sym_number = 142,
  sym__number = 143,
  sym_numberlike_string = 144,
  sym__sizelike = 145,
  sym_size = 146,
  sym__size = 147,
  sym_sizelike_string = 148,
  sym__booleanlike = 149,
  sym_boolean = 150,
  sym__boolean = 151,
  sym_booleanlike_string = 152,
  sym_string = 153,
  sym__string = 154,
  sym_entity_wildcard = 155,
  aux_sym_options_repeat1 = 156,
  aux_sym_entities_repeat1 = 157,
  aux_sym_entity_attributes_repeat1 = 158,
  aux_sym_arcs_repeat1 = 159,
  aux_sym_arcs_repeat2 = 160,
  aux_sym_arc_attributes_repeat1 = 161,
  aux_sym__string_repeat1 = 162,
  anon_alias_sym_string = 163,
  alias_sym_string = 164,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_hscale] = "hscale",
  [anon_sym_arcgradient] = "arcgradient",
  [sym_size_option_key] = "size_option_key",
  [sym_string_option_key] = "string_option_key",
  [anon_sym_wordwraparcs] = "wordwraparcs",
  [anon_sym_wordwrapentities] = "wordwrapentities",
  [anon_sym_wordwrapboxes] = "wordwrapboxes",
  [anon_sym_activation] = "activation",
  [anon_sym_label] = "label",
  [anon_sym_idurl] = "idurl",
  [anon_sym_id] = "id",
  [anon_sym_url] = "url",
  [anon_sym_linecolor] = "linecolor",
  [anon_sym_linecolour] = "linecolour",
  [anon_sym_textcolor] = "textcolor",
  [anon_sym_textcolour] = "textcolour",
  [anon_sym_textbgcolor] = "textbgcolor",
  [anon_sym_textbgcolour] = "textbgcolour",
  [anon_sym_arclinecolor] = "arclinecolor",
  [anon_sym_arclinecolour] = "arclinecolour",
  [anon_sym_arctextcolor] = "arctextcolor",
  [anon_sym_arctextcolour] = "arctextcolour",
  [anon_sym_arctextbgcolor] = "arctextbgcolor",
  [anon_sym_arctextbgcolour] = "arctextbgcolour",
  [anon_sym_title] = "title",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_COLON_GT] = ":>",
  [anon_sym_EQ_GT_GT] = "=>>",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_DASHx] = "-x",
  [anon_sym_DASHX] = "-X",
  [anon_sym_LT_DASH] = "<-",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_LT_COLON] = "<:",
  [anon_sym_LT_LT_EQ] = "<<=",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_x_DASH] = "x-",
  [anon_sym_X_DASH] = "X-",
  [anon_sym_LT_DASH_GT] = "<->",
  [anon_sym_LT_EQ_GT] = "<=>",
  [anon_sym_LT_COLON_GT] = "<:>",
  [anon_sym_LT_LT_EQ_GT_GT] = "<<=>>",
  [anon_sym_LT_LT_GT_GT] = "<<>>",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_note] = "note",
  [anon_sym_abox] = "abox",
  [anon_sym_rbox] = "rbox",
  [anon_sym_box] = "box",
  [anon_sym_PIPE_PIPE_PIPE] = "|||",
  [anon_sym_DOT_DOT_DOT] = "...",
  [sym_comment_arc] = "comment_arc",
  [anon_sym_alt] = "alt",
  [anon_sym_else] = "else",
  [anon_sym_opt] = "opt",
  [anon_sym_break] = "break",
  [anon_sym_par] = "par",
  [anon_sym_seq] = "seq",
  [anon_sym_strict] = "strict",
  [anon_sym_neg] = "neg",
  [anon_sym_critical] = "critical",
  [anon_sym_ignore] = "ignore",
  [anon_sym_consider] = "consider",
  [anon_sym_assert] = "assert",
  [anon_sym_loop] = "loop",
  [anon_sym_ref] = "ref",
  [anon_sym_exc] = "exc",
  [anon_sym_activate] = "activate",
  [anon_sym_deactivate] = "deactivate",
  [sym_number_arc_attribute_key] = "number_arc_attribute_key",
  [anon_sym_msc] = "msc",
  [anon_sym_xu] = "xu",
  [sym_curly_bracket_open] = "curly_bracket_open",
  [sym_curly_bracket_close] = "curly_bracket_close",
  [sym_square_bracket_open] = "square_bracket_open",
  [sym_square_bracket_close] = "square_bracket_close",
  [sym_equals] = "equals",
  [sym_comma] = "comma",
  [sym_colon] = "colon",
  [sym_semicolon] = "semicolon",
  [sym__dot] = "_dot",
  [sym__identifier] = "_identifier",
  [sym__integer] = "_integer",
  [sym__real] = "_real",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_auto] = "auto",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_on] = "on",
  [anon_sym_off] = "off",
  [anon_sym_0] = "0",
  [anon_sym_1] = "1",
  [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = "/[^\"]/",
  [anon_sym_BSLASH_DQUOTE] = "\\\"",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_STAR] = "*",
  [anon_sym_DQUOTE_STAR_DQUOTE] = "\"*\"",
  [sym_comment] = "comment",
  [sym_sequence_chart] = "sequence_chart",
  [sym_options] = "options",
  [sym_option] = "option",
  [sym__numerical_option] = "_numerical_option",
  [sym_numerical_option_key] = "numerical_option_key",
  [sym__size_option] = "_size_option",
  [sym__string_option] = "_string_option",
  [sym__boolean_option] = "_boolean_option",
  [sym_boolean_option_key] = "boolean_option_key",
  [sym_entities] = "entities",
  [sym_entity] = "entity",
  [sym_entity_attributes] = "entity_attributes",
  [sym_entity_attribute] = "entity_attribute",
  [sym__boolean_entity_attribute] = "_boolean_entity_attribute",
  [sym_boolean_entity_attribute_key] = "boolean_entity_attribute_key",
  [sym__string_entity_attribute] = "_string_entity_attribute",
  [sym_string_entity_attribute_key] = "string_entity_attribute_key",
  [sym_arcs] = "arcs",
  [sym_arc] = "arc",
  [sym__dual_arc] = "_dual_arc",
  [sym_forward_arrow] = "forward_arrow",
  [sym_backward_arrow] = "backward_arrow",
  [sym_bidirectional_arrow] = "bidirectional_arrow",
  [sym_box] = "box",
  [sym_single_arc] = "single_arc",
  [sym__inline_expression_arc] = "_inline_expression_arc",
  [sym_inline_expression_token] = "inline_expression_token",
  [sym_inline_expression] = "inline_expression",
  [sym_arc_attributes] = "arc_attributes",
  [sym_arc_attribute] = "arc_attribute",
  [sym__string_arc_attribute] = "_string_arc_attribute",
  [sym_string_arc_attribute_key] = "string_arc_attribute_key",
  [sym__boolean_arc_attribute] = "_boolean_arc_attribute",
  [sym_boolean_arc_attribute_key] = "boolean_arc_attribute_key",
  [sym_value_only_arc_attribute_key] = "value_only_arc_attribute_key",
  [sym__number_arc_attribute] = "_number_arc_attribute",
  [sym_start_token] = "start_token",
  [sym_identifier] = "identifier",
  [sym_entity_identifier] = "entity_identifier",
  [sym__numberlike] = "_numberlike",
  [sym_number] = "number",
  [sym__number] = "_number",
  [sym_numberlike_string] = "numberlike_string",
  [sym__sizelike] = "_sizelike",
  [sym_size] = "size",
  [sym__size] = "_size",
  [sym_sizelike_string] = "sizelike_string",
  [sym__booleanlike] = "_booleanlike",
  [sym_boolean] = "boolean",
  [sym__boolean] = "_boolean",
  [sym_booleanlike_string] = "booleanlike_string",
  [sym_string] = "string",
  [sym__string] = "_string",
  [sym_entity_wildcard] = "entity_wildcard",
  [aux_sym_options_repeat1] = "options_repeat1",
  [aux_sym_entities_repeat1] = "entities_repeat1",
  [aux_sym_entity_attributes_repeat1] = "entity_attributes_repeat1",
  [aux_sym_arcs_repeat1] = "arcs_repeat1",
  [aux_sym_arcs_repeat2] = "arcs_repeat2",
  [aux_sym_arc_attributes_repeat1] = "arc_attributes_repeat1",
  [aux_sym__string_repeat1] = "_string_repeat1",
  [anon_alias_sym_string] = "string",
  [alias_sym_string] = "string",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_hscale] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_arcgradient] = {
    .visible = true,
    .named = false,
  },
  [sym_size_option_key] = {
    .visible = true,
    .named = true,
  },
  [sym_string_option_key] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_wordwraparcs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wordwrapentities] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wordwrapboxes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_activation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_label] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_idurl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_id] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_url] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_linecolor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_linecolour] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_textcolor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_textcolour] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_textbgcolor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_textbgcolour] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_arclinecolor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_arclinecolour] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_arctextcolor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_arctextcolour] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_arctextbgcolor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_arctextbgcolour] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_title] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASHx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASHX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_X_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_COLON_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT_EQ_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_note] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_abox] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rbox] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_box] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_comment_arc] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_alt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_opt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_par] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_seq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_strict] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_neg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_critical] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ignore] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_consider] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_assert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_loop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ref] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_activate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deactivate] = {
    .visible = true,
    .named = false,
  },
  [sym_number_arc_attribute_key] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_msc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xu] = {
    .visible = true,
    .named = false,
  },
  [sym_curly_bracket_open] = {
    .visible = true,
    .named = true,
  },
  [sym_curly_bracket_close] = {
    .visible = true,
    .named = true,
  },
  [sym_square_bracket_open] = {
    .visible = true,
    .named = true,
  },
  [sym_square_bracket_close] = {
    .visible = true,
    .named = true,
  },
  [sym_equals] = {
    .visible = true,
    .named = true,
  },
  [sym_comma] = {
    .visible = true,
    .named = true,
  },
  [sym_colon] = {
    .visible = true,
    .named = true,
  },
  [sym_semicolon] = {
    .visible = true,
    .named = true,
  },
  [sym__dot] = {
    .visible = false,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__integer] = {
    .visible = false,
    .named = true,
  },
  [sym__real] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_auto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_off] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE_STAR_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_chart] = {
    .visible = true,
    .named = true,
  },
  [sym_options] = {
    .visible = true,
    .named = true,
  },
  [sym_option] = {
    .visible = true,
    .named = true,
  },
  [sym__numerical_option] = {
    .visible = false,
    .named = true,
  },
  [sym_numerical_option_key] = {
    .visible = true,
    .named = true,
  },
  [sym__size_option] = {
    .visible = false,
    .named = true,
  },
  [sym__string_option] = {
    .visible = false,
    .named = true,
  },
  [sym__boolean_option] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean_option_key] = {
    .visible = true,
    .named = true,
  },
  [sym_entities] = {
    .visible = true,
    .named = true,
  },
  [sym_entity] = {
    .visible = true,
    .named = true,
  },
  [sym_entity_attributes] = {
    .visible = true,
    .named = true,
  },
  [sym_entity_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__boolean_entity_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean_entity_attribute_key] = {
    .visible = true,
    .named = true,
  },
  [sym__string_entity_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym_string_entity_attribute_key] = {
    .visible = true,
    .named = true,
  },
  [sym_arcs] = {
    .visible = true,
    .named = true,
  },
  [sym_arc] = {
    .visible = true,
    .named = true,
  },
  [sym__dual_arc] = {
    .visible = false,
    .named = true,
  },
  [sym_forward_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_backward_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_bidirectional_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_box] = {
    .visible = true,
    .named = true,
  },
  [sym_single_arc] = {
    .visible = true,
    .named = true,
  },
  [sym__inline_expression_arc] = {
    .visible = false,
    .named = true,
  },
  [sym_inline_expression_token] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_arc_attributes] = {
    .visible = true,
    .named = true,
  },
  [sym_arc_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__string_arc_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym_string_arc_attribute_key] = {
    .visible = true,
    .named = true,
  },
  [sym__boolean_arc_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean_arc_attribute_key] = {
    .visible = true,
    .named = true,
  },
  [sym_value_only_arc_attribute_key] = {
    .visible = true,
    .named = true,
  },
  [sym__number_arc_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym_start_token] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_entity_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__numberlike] = {
    .visible = false,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [sym_numberlike_string] = {
    .visible = true,
    .named = true,
  },
  [sym__sizelike] = {
    .visible = false,
    .named = true,
  },
  [sym_size] = {
    .visible = true,
    .named = true,
  },
  [sym__size] = {
    .visible = false,
    .named = true,
  },
  [sym_sizelike_string] = {
    .visible = true,
    .named = true,
  },
  [sym__booleanlike] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym__boolean] = {
    .visible = false,
    .named = true,
  },
  [sym_booleanlike_string] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__string] = {
    .visible = false,
    .named = true,
  },
  [sym_entity_wildcard] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_options_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_entities_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_entity_attributes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arcs_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arcs_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arc_attributes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_string] = {
    .visible = true,
    .named = false,
  },
  [alias_sym_string] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[3][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [2] = anon_alias_sym_string,
  },
  [2] = {
    [2] = alias_sym_string,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '*')
        ADVANCE(6);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(8);
      if (lookahead == '.')
        ADVANCE(17);
      if (lookahead == '/')
        ADVANCE(20);
      if (lookahead == '0')
        ADVANCE(24);
      if (lookahead == '1')
        ADVANCE(27);
      if (lookahead == ':')
        ADVANCE(28);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(45);
      if (lookahead == '>')
        ADVANCE(49);
      if (lookahead == 'X')
        ADVANCE(51);
      if (lookahead == '[')
        ADVANCE(53);
      if (lookahead == '\\')
        ADVANCE(54);
      if (lookahead == ']')
        ADVANCE(56);
      if (lookahead == 'a')
        ADVANCE(57);
      if (lookahead == 'b')
        ADVANCE(126);
      if (lookahead == 'c')
        ADVANCE(133);
      if (lookahead == 'd')
        ADVANCE(148);
      if (lookahead == 'e')
        ADVANCE(158);
      if (lookahead == 'f')
        ADVANCE(164);
      if (lookahead == 'h')
        ADVANCE(169);
      if (lookahead == 'i')
        ADVANCE(175);
      if (lookahead == 'l')
        ADVANCE(185);
      if (lookahead == 'm')
        ADVANCE(203);
      if (lookahead == 'n')
        ADVANCE(206);
      if (lookahead == 'o')
        ADVANCE(212);
      if (lookahead == 'p')
        ADVANCE(218);
      if (lookahead == 'r')
        ADVANCE(221);
      if (lookahead == 's')
        ADVANCE(227);
      if (lookahead == 't')
        ADVANCE(235);
      if (lookahead == 'u')
        ADVANCE(262);
      if (lookahead == 'w')
        ADVANCE(265);
      if (lookahead == 'x')
        ADVANCE(302);
      if (lookahead == '{')
        ADVANCE(305);
      if (lookahead == '|')
        ADVANCE(306);
      if (lookahead == '}')
        ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(310);
      if (('2' <= lookahead && lookahead <= '9'))
        ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '*')
        ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '\"')
        ADVANCE(4);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_DQUOTE_STAR_DQUOTE);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(5);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 8:
      if (lookahead == '-')
        ADVANCE(9);
      if (lookahead == '>')
        ADVANCE(11);
      if (lookahead == 'X')
        ADVANCE(12);
      if (lookahead == 'x')
        ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(14);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == '-')
        ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_comment_arc);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_DASHX);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DASHx);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == '.')
        ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(14);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__real);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__dot);
      if (lookahead == '.')
        ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.')
        ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 20:
      if (lookahead == '*')
        ADVANCE(21);
      if (lookahead == '/')
        ADVANCE(5);
      END_STATE();
    case 21:
      if (lookahead == '*')
        ADVANCE(22);
      if (lookahead != 0)
        ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '*')
        ADVANCE(22);
      if (lookahead == '/')
        ADVANCE(23);
      if (lookahead != 0)
        ADVANCE(21);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '.')
        ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '.')
        ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '.')
        ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_colon);
      if (lookahead == ':')
        ADVANCE(29);
      if (lookahead == '>')
        ADVANCE(30);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_COLON_GT);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_semicolon);
      END_STATE();
    case 32:
      if (lookahead == '-')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(35);
      if (lookahead == '<')
        ADVANCE(37);
      if (lookahead == '=')
        ADVANCE(43);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      if (lookahead == '>')
        ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LT_DASH_GT);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      if (lookahead == '>')
        ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LT_COLON_GT);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=')
        ADVANCE(38);
      if (lookahead == '>')
        ADVANCE(41);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      if (lookahead == '>')
        ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == '>')
        ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ_GT_GT);
      END_STATE();
    case 41:
      if (lookahead == '>')
        ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LT_LT_GT_GT);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead == '>')
        ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_equals);
      if (lookahead == '=')
        ADVANCE(46);
      if (lookahead == '>')
        ADVANCE(47);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      if (lookahead == '>')
        ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_EQ_GT_GT);
      END_STATE();
    case 49:
      if (lookahead == '>')
        ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-')
        ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_X_DASH);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_square_bracket_open);
      END_STATE();
    case 54:
      if (lookahead == '\"')
        ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_square_bracket_close);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b')
        ADVANCE(58);
      if (lookahead == 'c')
        ADVANCE(61);
      if (lookahead == 'l')
        ADVANCE(71);
      if (lookahead == 'r')
        ADVANCE(73);
      if (lookahead == 's')
        ADVANCE(118);
      if (lookahead == 'u')
        ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o')
        ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x')
        ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_abox);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't')
        ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i')
        ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v')
        ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't')
        ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(67);
      if (lookahead == 'i')
        ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_activate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o')
        ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n')
        ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_activation);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't')
        ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_alt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g')
        ADVANCE(75);
      if (lookahead == 'l')
        ADVANCE(83);
      if (lookahead == 's')
        ADVANCE(94);
      if (lookahead == 't')
        ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd')
        ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i')
        ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n')
        ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't')
        ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_arcgradient);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i')
        ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n')
        ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o')
        ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l')
        ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o')
        ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(91);
      if (lookahead == 'u')
        ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_arclinecolor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_arclinecolour);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'k')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i')
        ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p')
        ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_number_arc_attribute_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't')
        ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b')
        ADVANCE(102);
      if (lookahead == 'c')
        ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g')
        ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o')
        ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l')
        ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o')
        ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(108);
      if (lookahead == 'u')
        ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_arctextbgcolor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_arctextbgcolour);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o')
        ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l')
        ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o')
        ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(115);
      if (lookahead == 'u')
        ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_arctextcolor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_arctextcolour);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's')
        ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't')
        ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_assert);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't')
        ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o')
        ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_auto);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o')
        ADVANCE(127);
      if (lookahead == 'r')
        ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x')
        ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'k')
        ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_break);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o')
        ADVANCE(134);
      if (lookahead == 'r')
        ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n')
        ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's')
        ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i')
        ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd')
        ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_consider);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i')
        ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't')
        ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i')
        ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l')
        ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_critical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't')
        ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i')
        ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v')
        ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't')
        ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_deactivate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l')
        ADVANCE(159);
      if (lookahead == 'x')
        ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's')
        ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_exc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l')
        ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's')
        ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's')
        ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l')
        ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_hscale);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd')
        ADVANCE(176);
      if (lookahead == 'g')
        ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_id);
      if (lookahead == 'u')
        ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l')
        ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_idurl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n')
        ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o')
        ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_ignore);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(186);
      if (lookahead == 'i')
        ADVANCE(190);
      if (lookahead == 'o')
        ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b')
        ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l')
        ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n')
        ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o')
        ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l')
        ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o')
        ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(197);
      if (lookahead == 'u')
        ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_linecolor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_linecolour);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o')
        ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p')
        ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_loop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's')
        ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_msc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(207);
      if (lookahead == 'o')
        ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g')
        ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_neg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't')
        ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_note);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f')
        ADVANCE(213);
      if (lookahead == 'n')
        ADVANCE(215);
      if (lookahead == 'p')
        ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f')
        ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_off);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_on);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't')
        ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_opt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_par);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b')
        ADVANCE(222);
      if (lookahead == 'e')
        ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o')
        ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x')
        ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_rbox);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f')
        ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_ref);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(228);
      if (lookahead == 't')
        ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'q')
        ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_seq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i')
        ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't')
        ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_strict);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(236);
      if (lookahead == 'i')
        ADVANCE(255);
      if (lookahead == 'r')
        ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x')
        ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't')
        ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b')
        ADVANCE(239);
      if (lookahead == 'c')
        ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g')
        ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o')
        ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l')
        ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o')
        ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(245);
      if (lookahead == 'u')
        ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_textbgcolor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_textbgcolour);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o')
        ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l')
        ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o')
        ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(252);
      if (lookahead == 'u')
        ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_textcolor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_textcolour);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't')
        ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l')
        ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_title);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u')
        ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_url);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(266);
      if (lookahead == 'i')
        ADVANCE(274);
      if (lookahead == 'o')
        ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm')
        ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'k')
        ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_string_option_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd')
        ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't')
        ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_size_option_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd')
        ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'w')
        ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p')
        ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(285);
      if (lookahead == 'b')
        ADVANCE(289);
      if (lookahead == 'e')
        ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's')
        ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_wordwraparcs);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o')
        ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x')
        ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's')
        ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_wordwrapboxes);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n')
        ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't')
        ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i')
        ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't')
        ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i')
        ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's')
        ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_wordwrapentities);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-')
        ADVANCE(303);
      if (lookahead == 'u')
        ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_x_DASH);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_xu);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_curly_bracket_open);
      END_STATE();
    case 306:
      if (lookahead == '|')
        ADVANCE(307);
      END_STATE();
    case 307:
      if (lookahead == '|')
        ADVANCE(308);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE_PIPE);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_curly_bracket_close);
      END_STATE();
    case 310:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '*')
        ADVANCE(6);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(8);
      if (lookahead == '.')
        ADVANCE(17);
      if (lookahead == '/')
        ADVANCE(20);
      if (lookahead == '0')
        ADVANCE(24);
      if (lookahead == '1')
        ADVANCE(27);
      if (lookahead == ':')
        ADVANCE(28);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(45);
      if (lookahead == '>')
        ADVANCE(49);
      if (lookahead == 'X')
        ADVANCE(51);
      if (lookahead == '[')
        ADVANCE(53);
      if (lookahead == '\\')
        ADVANCE(311);
      if (lookahead == ']')
        ADVANCE(56);
      if (lookahead == 'a')
        ADVANCE(57);
      if (lookahead == 'b')
        ADVANCE(126);
      if (lookahead == 'c')
        ADVANCE(133);
      if (lookahead == 'd')
        ADVANCE(148);
      if (lookahead == 'e')
        ADVANCE(158);
      if (lookahead == 'f')
        ADVANCE(164);
      if (lookahead == 'h')
        ADVANCE(169);
      if (lookahead == 'i')
        ADVANCE(175);
      if (lookahead == 'l')
        ADVANCE(185);
      if (lookahead == 'm')
        ADVANCE(203);
      if (lookahead == 'n')
        ADVANCE(206);
      if (lookahead == 'o')
        ADVANCE(212);
      if (lookahead == 'p')
        ADVANCE(218);
      if (lookahead == 'r')
        ADVANCE(221);
      if (lookahead == 's')
        ADVANCE(227);
      if (lookahead == 't')
        ADVANCE(235);
      if (lookahead == 'u')
        ADVANCE(262);
      if (lookahead == 'w')
        ADVANCE(265);
      if (lookahead == 'x')
        ADVANCE(302);
      if (lookahead == '{')
        ADVANCE(305);
      if (lookahead == '|')
        ADVANCE(306);
      if (lookahead == '}')
        ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(310);
      if (('2' <= lookahead && lookahead <= '9'))
        ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 311:
      if (lookahead == '\"')
        ADVANCE(312);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 313:
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(20);
      if (lookahead == 'm')
        ADVANCE(314);
      if (lookahead == 'x')
        ADVANCE(317);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(313);
      END_STATE();
    case 314:
      if (lookahead == 's')
        ADVANCE(315);
      END_STATE();
    case 315:
      if (lookahead == 'c')
        ADVANCE(316);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_msc);
      END_STATE();
    case 317:
      if (lookahead == 'u')
        ADVANCE(318);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_xu);
      END_STATE();
    case 319:
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(20);
      if (lookahead == '[')
        ADVANCE(53);
      if (lookahead == '{')
        ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(319);
      END_STATE();
    case 320:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(320);
      END_STATE();
    case 321:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '*')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(322);
      if (lookahead == '.')
        ADVANCE(324);
      if (lookahead == '/')
        ADVANCE(20);
      if (lookahead == 'a')
        ADVANCE(326);
      if (lookahead == 'h')
        ADVANCE(169);
      if (lookahead == 'w')
        ADVANCE(265);
      if (lookahead == '|')
        ADVANCE(306);
      if (lookahead == '}')
        ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 322:
      if (lookahead == '-')
        ADVANCE(323);
      END_STATE();
    case 323:
      if (lookahead == '-')
        ADVANCE(10);
      END_STATE();
    case 324:
      if (lookahead == '.')
        ADVANCE(325);
      END_STATE();
    case 325:
      if (lookahead == '.')
        ADVANCE(19);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g')
        ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 329:
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '/')
        ADVANCE(20);
      if (lookahead == '=')
        ADVANCE(330);
      if (lookahead == ']')
        ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(329);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_equals);
      END_STATE();
    case 331:
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == '.')
        ADVANCE(334);
      if (lookahead == '/')
        ADVANCE(20);
      if (lookahead == ':')
        ADVANCE(336);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(337);
      if (lookahead == '>')
        ADVANCE(49);
      if (lookahead == 'X')
        ADVANCE(338);
      if (lookahead == '[')
        ADVANCE(53);
      if (lookahead == 'a')
        ADVANCE(339);
      if (lookahead == 'b')
        ADVANCE(350);
      if (lookahead == 'c')
        ADVANCE(357);
      if (lookahead == 'e')
        ADVANCE(372);
      if (lookahead == 'i')
        ADVANCE(378);
      if (lookahead == 'l')
        ADVANCE(384);
      if (lookahead == 'n')
        ADVANCE(388);
      if (lookahead == 'o')
        ADVANCE(394);
      if (lookahead == 'p')
        ADVANCE(397);
      if (lookahead == 'r')
        ADVANCE(400);
      if (lookahead == 's')
        ADVANCE(406);
      if (lookahead == 'x')
        ADVANCE(414);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(331);
      END_STATE();
    case 332:
      if (lookahead == '-')
        ADVANCE(333);
      if (lookahead == '>')
        ADVANCE(11);
      if (lookahead == 'X')
        ADVANCE(12);
      if (lookahead == 'x')
        ADVANCE(13);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 334:
      if (lookahead == '.')
        ADVANCE(335);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 336:
      if (lookahead == ':')
        ADVANCE(29);
      if (lookahead == '>')
        ADVANCE(30);
      END_STATE();
    case 337:
      if (lookahead == '=')
        ADVANCE(46);
      if (lookahead == '>')
        ADVANCE(47);
      END_STATE();
    case 338:
      if (lookahead == '-')
        ADVANCE(52);
      END_STATE();
    case 339:
      if (lookahead == 'b')
        ADVANCE(340);
      if (lookahead == 'l')
        ADVANCE(343);
      if (lookahead == 's')
        ADVANCE(345);
      END_STATE();
    case 340:
      if (lookahead == 'o')
        ADVANCE(341);
      END_STATE();
    case 341:
      if (lookahead == 'x')
        ADVANCE(342);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_abox);
      END_STATE();
    case 343:
      if (lookahead == 't')
        ADVANCE(344);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_alt);
      END_STATE();
    case 345:
      if (lookahead == 's')
        ADVANCE(346);
      END_STATE();
    case 346:
      if (lookahead == 'e')
        ADVANCE(347);
      END_STATE();
    case 347:
      if (lookahead == 'r')
        ADVANCE(348);
      END_STATE();
    case 348:
      if (lookahead == 't')
        ADVANCE(349);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 350:
      if (lookahead == 'o')
        ADVANCE(351);
      if (lookahead == 'r')
        ADVANCE(353);
      END_STATE();
    case 351:
      if (lookahead == 'x')
        ADVANCE(352);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_box);
      END_STATE();
    case 353:
      if (lookahead == 'e')
        ADVANCE(354);
      END_STATE();
    case 354:
      if (lookahead == 'a')
        ADVANCE(355);
      END_STATE();
    case 355:
      if (lookahead == 'k')
        ADVANCE(356);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 357:
      if (lookahead == 'o')
        ADVANCE(358);
      if (lookahead == 'r')
        ADVANCE(365);
      END_STATE();
    case 358:
      if (lookahead == 'n')
        ADVANCE(359);
      END_STATE();
    case 359:
      if (lookahead == 's')
        ADVANCE(360);
      END_STATE();
    case 360:
      if (lookahead == 'i')
        ADVANCE(361);
      END_STATE();
    case 361:
      if (lookahead == 'd')
        ADVANCE(362);
      END_STATE();
    case 362:
      if (lookahead == 'e')
        ADVANCE(363);
      END_STATE();
    case 363:
      if (lookahead == 'r')
        ADVANCE(364);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_consider);
      END_STATE();
    case 365:
      if (lookahead == 'i')
        ADVANCE(366);
      END_STATE();
    case 366:
      if (lookahead == 't')
        ADVANCE(367);
      END_STATE();
    case 367:
      if (lookahead == 'i')
        ADVANCE(368);
      END_STATE();
    case 368:
      if (lookahead == 'c')
        ADVANCE(369);
      END_STATE();
    case 369:
      if (lookahead == 'a')
        ADVANCE(370);
      END_STATE();
    case 370:
      if (lookahead == 'l')
        ADVANCE(371);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_critical);
      END_STATE();
    case 372:
      if (lookahead == 'l')
        ADVANCE(373);
      if (lookahead == 'x')
        ADVANCE(376);
      END_STATE();
    case 373:
      if (lookahead == 's')
        ADVANCE(374);
      END_STATE();
    case 374:
      if (lookahead == 'e')
        ADVANCE(375);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 376:
      if (lookahead == 'c')
        ADVANCE(377);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_exc);
      END_STATE();
    case 378:
      if (lookahead == 'g')
        ADVANCE(379);
      END_STATE();
    case 379:
      if (lookahead == 'n')
        ADVANCE(380);
      END_STATE();
    case 380:
      if (lookahead == 'o')
        ADVANCE(381);
      END_STATE();
    case 381:
      if (lookahead == 'r')
        ADVANCE(382);
      END_STATE();
    case 382:
      if (lookahead == 'e')
        ADVANCE(383);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_ignore);
      END_STATE();
    case 384:
      if (lookahead == 'o')
        ADVANCE(385);
      END_STATE();
    case 385:
      if (lookahead == 'o')
        ADVANCE(386);
      END_STATE();
    case 386:
      if (lookahead == 'p')
        ADVANCE(387);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_loop);
      END_STATE();
    case 388:
      if (lookahead == 'e')
        ADVANCE(389);
      if (lookahead == 'o')
        ADVANCE(391);
      END_STATE();
    case 389:
      if (lookahead == 'g')
        ADVANCE(390);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_neg);
      END_STATE();
    case 391:
      if (lookahead == 't')
        ADVANCE(392);
      END_STATE();
    case 392:
      if (lookahead == 'e')
        ADVANCE(393);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 394:
      if (lookahead == 'p')
        ADVANCE(395);
      END_STATE();
    case 395:
      if (lookahead == 't')
        ADVANCE(396);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_opt);
      END_STATE();
    case 397:
      if (lookahead == 'a')
        ADVANCE(398);
      END_STATE();
    case 398:
      if (lookahead == 'r')
        ADVANCE(399);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_par);
      END_STATE();
    case 400:
      if (lookahead == 'b')
        ADVANCE(401);
      if (lookahead == 'e')
        ADVANCE(404);
      END_STATE();
    case 401:
      if (lookahead == 'o')
        ADVANCE(402);
      END_STATE();
    case 402:
      if (lookahead == 'x')
        ADVANCE(403);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_rbox);
      END_STATE();
    case 404:
      if (lookahead == 'f')
        ADVANCE(405);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 406:
      if (lookahead == 'e')
        ADVANCE(407);
      if (lookahead == 't')
        ADVANCE(409);
      END_STATE();
    case 407:
      if (lookahead == 'q')
        ADVANCE(408);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_seq);
      END_STATE();
    case 409:
      if (lookahead == 'r')
        ADVANCE(410);
      END_STATE();
    case 410:
      if (lookahead == 'i')
        ADVANCE(411);
      END_STATE();
    case 411:
      if (lookahead == 'c')
        ADVANCE(412);
      END_STATE();
    case 412:
      if (lookahead == 't')
        ADVANCE(413);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_strict);
      END_STATE();
    case 414:
      if (lookahead == '-')
        ADVANCE(303);
      END_STATE();
    case 415:
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == '.')
        ADVANCE(334);
      if (lookahead == '/')
        ADVANCE(20);
      if (lookahead == ':')
        ADVANCE(336);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(337);
      if (lookahead == '>')
        ADVANCE(49);
      if (lookahead == 'X')
        ADVANCE(338);
      if (lookahead == '[')
        ADVANCE(53);
      if (lookahead == 'a')
        ADVANCE(339);
      if (lookahead == 'b')
        ADVANCE(350);
      if (lookahead == 'c')
        ADVANCE(357);
      if (lookahead == 'e')
        ADVANCE(372);
      if (lookahead == 'i')
        ADVANCE(378);
      if (lookahead == 'l')
        ADVANCE(384);
      if (lookahead == 'n')
        ADVANCE(388);
      if (lookahead == 'o')
        ADVANCE(394);
      if (lookahead == 'p')
        ADVANCE(397);
      if (lookahead == 'r')
        ADVANCE(400);
      if (lookahead == 's')
        ADVANCE(406);
      if (lookahead == 'x')
        ADVANCE(414);
      if (lookahead == '{')
        ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(415);
      END_STATE();
    case 416:
      if (lookahead == '\"')
        ADVANCE(417);
      if (lookahead == '#')
        ADVANCE(418);
      if (lookahead == '/')
        ADVANCE(419);
      if (lookahead == '\\')
        ADVANCE(420);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(418);
      if (lookahead != 0)
        ADVANCE(418);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if (lookahead == '*')
        ADVANCE(21);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if (lookahead == '\"')
        ADVANCE(312);
      END_STATE();
    case 421:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '*')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(322);
      if (lookahead == '.')
        ADVANCE(324);
      if (lookahead == '/')
        ADVANCE(20);
      if (lookahead == '|')
        ADVANCE(306);
      if (lookahead == '}')
        ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 422:
      if (lookahead == '\"')
        ADVANCE(417);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 423:
      if (lookahead == '\"')
        ADVANCE(417);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(424);
      if (lookahead == '/')
        ADVANCE(20);
      if (lookahead == 'a')
        ADVANCE(425);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(423);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(14);
      END_STATE();
    case 424:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(14);
      END_STATE();
    case 425:
      if (lookahead == 'u')
        ADVANCE(426);
      END_STATE();
    case 426:
      if (lookahead == 't')
        ADVANCE(427);
      END_STATE();
    case 427:
      if (lookahead == 'o')
        ADVANCE(428);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_auto);
      END_STATE();
    case 429:
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(20);
      if (lookahead == ']')
        ADVANCE(56);
      if (lookahead == 'a')
        ADVANCE(430);
      if (lookahead == 'd')
        ADVANCE(447);
      if (lookahead == 'i')
        ADVANCE(457);
      if (lookahead == 'l')
        ADVANCE(462);
      if (lookahead == 't')
        ADVANCE(477);
      if (lookahead == 'u')
        ADVANCE(501);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(429);
      END_STATE();
    case 430:
      if (lookahead == 'c')
        ADVANCE(431);
      if (lookahead == 'r')
        ADVANCE(441);
      END_STATE();
    case 431:
      if (lookahead == 't')
        ADVANCE(432);
      END_STATE();
    case 432:
      if (lookahead == 'i')
        ADVANCE(433);
      END_STATE();
    case 433:
      if (lookahead == 'v')
        ADVANCE(434);
      END_STATE();
    case 434:
      if (lookahead == 'a')
        ADVANCE(435);
      END_STATE();
    case 435:
      if (lookahead == 't')
        ADVANCE(436);
      END_STATE();
    case 436:
      if (lookahead == 'e')
        ADVANCE(437);
      if (lookahead == 'i')
        ADVANCE(438);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_activate);
      END_STATE();
    case 438:
      if (lookahead == 'o')
        ADVANCE(439);
      END_STATE();
    case 439:
      if (lookahead == 'n')
        ADVANCE(440);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_activation);
      END_STATE();
    case 441:
      if (lookahead == 'c')
        ADVANCE(442);
      END_STATE();
    case 442:
      if (lookahead == 's')
        ADVANCE(443);
      END_STATE();
    case 443:
      if (lookahead == 'k')
        ADVANCE(444);
      END_STATE();
    case 444:
      if (lookahead == 'i')
        ADVANCE(445);
      END_STATE();
    case 445:
      if (lookahead == 'p')
        ADVANCE(446);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_number_arc_attribute_key);
      END_STATE();
    case 447:
      if (lookahead == 'e')
        ADVANCE(448);
      END_STATE();
    case 448:
      if (lookahead == 'a')
        ADVANCE(449);
      END_STATE();
    case 449:
      if (lookahead == 'c')
        ADVANCE(450);
      END_STATE();
    case 450:
      if (lookahead == 't')
        ADVANCE(451);
      END_STATE();
    case 451:
      if (lookahead == 'i')
        ADVANCE(452);
      END_STATE();
    case 452:
      if (lookahead == 'v')
        ADVANCE(453);
      END_STATE();
    case 453:
      if (lookahead == 'a')
        ADVANCE(454);
      END_STATE();
    case 454:
      if (lookahead == 't')
        ADVANCE(455);
      END_STATE();
    case 455:
      if (lookahead == 'e')
        ADVANCE(456);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_deactivate);
      END_STATE();
    case 457:
      if (lookahead == 'd')
        ADVANCE(458);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_id);
      if (lookahead == 'u')
        ADVANCE(459);
      END_STATE();
    case 459:
      if (lookahead == 'r')
        ADVANCE(460);
      END_STATE();
    case 460:
      if (lookahead == 'l')
        ADVANCE(461);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_idurl);
      END_STATE();
    case 462:
      if (lookahead == 'a')
        ADVANCE(463);
      if (lookahead == 'i')
        ADVANCE(467);
      END_STATE();
    case 463:
      if (lookahead == 'b')
        ADVANCE(464);
      END_STATE();
    case 464:
      if (lookahead == 'e')
        ADVANCE(465);
      END_STATE();
    case 465:
      if (lookahead == 'l')
        ADVANCE(466);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 467:
      if (lookahead == 'n')
        ADVANCE(468);
      END_STATE();
    case 468:
      if (lookahead == 'e')
        ADVANCE(469);
      END_STATE();
    case 469:
      if (lookahead == 'c')
        ADVANCE(470);
      END_STATE();
    case 470:
      if (lookahead == 'o')
        ADVANCE(471);
      END_STATE();
    case 471:
      if (lookahead == 'l')
        ADVANCE(472);
      END_STATE();
    case 472:
      if (lookahead == 'o')
        ADVANCE(473);
      END_STATE();
    case 473:
      if (lookahead == 'r')
        ADVANCE(474);
      if (lookahead == 'u')
        ADVANCE(475);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_linecolor);
      END_STATE();
    case 475:
      if (lookahead == 'r')
        ADVANCE(476);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_linecolour);
      END_STATE();
    case 477:
      if (lookahead == 'e')
        ADVANCE(478);
      if (lookahead == 'i')
        ADVANCE(497);
      END_STATE();
    case 478:
      if (lookahead == 'x')
        ADVANCE(479);
      END_STATE();
    case 479:
      if (lookahead == 't')
        ADVANCE(480);
      END_STATE();
    case 480:
      if (lookahead == 'b')
        ADVANCE(481);
      if (lookahead == 'c')
        ADVANCE(490);
      END_STATE();
    case 481:
      if (lookahead == 'g')
        ADVANCE(482);
      END_STATE();
    case 482:
      if (lookahead == 'c')
        ADVANCE(483);
      END_STATE();
    case 483:
      if (lookahead == 'o')
        ADVANCE(484);
      END_STATE();
    case 484:
      if (lookahead == 'l')
        ADVANCE(485);
      END_STATE();
    case 485:
      if (lookahead == 'o')
        ADVANCE(486);
      END_STATE();
    case 486:
      if (lookahead == 'r')
        ADVANCE(487);
      if (lookahead == 'u')
        ADVANCE(488);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_textbgcolor);
      END_STATE();
    case 488:
      if (lookahead == 'r')
        ADVANCE(489);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_textbgcolour);
      END_STATE();
    case 490:
      if (lookahead == 'o')
        ADVANCE(491);
      END_STATE();
    case 491:
      if (lookahead == 'l')
        ADVANCE(492);
      END_STATE();
    case 492:
      if (lookahead == 'o')
        ADVANCE(493);
      END_STATE();
    case 493:
      if (lookahead == 'r')
        ADVANCE(494);
      if (lookahead == 'u')
        ADVANCE(495);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_textcolor);
      END_STATE();
    case 495:
      if (lookahead == 'r')
        ADVANCE(496);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_textcolour);
      END_STATE();
    case 497:
      if (lookahead == 't')
        ADVANCE(498);
      END_STATE();
    case 498:
      if (lookahead == 'l')
        ADVANCE(499);
      END_STATE();
    case 499:
      if (lookahead == 'e')
        ADVANCE(500);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_title);
      END_STATE();
    case 501:
      if (lookahead == 'r')
        ADVANCE(502);
      END_STATE();
    case 502:
      if (lookahead == 'l')
        ADVANCE(503);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_url);
      END_STATE();
    case 504:
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == '.')
        ADVANCE(334);
      if (lookahead == '/')
        ADVANCE(20);
      if (lookahead == ':')
        ADVANCE(336);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(337);
      if (lookahead == '>')
        ADVANCE(49);
      if (lookahead == 'X')
        ADVANCE(338);
      if (lookahead == '[')
        ADVANCE(53);
      if (lookahead == ']')
        ADVANCE(56);
      if (lookahead == 'a')
        ADVANCE(339);
      if (lookahead == 'b')
        ADVANCE(350);
      if (lookahead == 'c')
        ADVANCE(357);
      if (lookahead == 'e')
        ADVANCE(372);
      if (lookahead == 'i')
        ADVANCE(378);
      if (lookahead == 'l')
        ADVANCE(384);
      if (lookahead == 'n')
        ADVANCE(388);
      if (lookahead == 'o')
        ADVANCE(394);
      if (lookahead == 'p')
        ADVANCE(397);
      if (lookahead == 'r')
        ADVANCE(400);
      if (lookahead == 's')
        ADVANCE(406);
      if (lookahead == 'x')
        ADVANCE(414);
      if (lookahead == '{')
        ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(504);
      END_STATE();
    case 505:
      if (lookahead == '\"')
        ADVANCE(417);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(20);
      if (lookahead == '0')
        ADVANCE(506);
      if (lookahead == '1')
        ADVANCE(507);
      if (lookahead == 'f')
        ADVANCE(508);
      if (lookahead == 'o')
        ADVANCE(513);
      if (lookahead == 't')
        ADVANCE(517);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(505);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 508:
      if (lookahead == 'a')
        ADVANCE(509);
      END_STATE();
    case 509:
      if (lookahead == 'l')
        ADVANCE(510);
      END_STATE();
    case 510:
      if (lookahead == 's')
        ADVANCE(511);
      END_STATE();
    case 511:
      if (lookahead == 'e')
        ADVANCE(512);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 513:
      if (lookahead == 'f')
        ADVANCE(514);
      if (lookahead == 'n')
        ADVANCE(516);
      END_STATE();
    case 514:
      if (lookahead == 'f')
        ADVANCE(515);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 517:
      if (lookahead == 'r')
        ADVANCE(518);
      END_STATE();
    case 518:
      if (lookahead == 'u')
        ADVANCE(519);
      END_STATE();
    case 519:
      if (lookahead == 'e')
        ADVANCE(520);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 521:
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(20);
      if (lookahead == ']')
        ADVANCE(56);
      if (lookahead == 'a')
        ADVANCE(522);
      if (lookahead == 'i')
        ADVANCE(457);
      if (lookahead == 'l')
        ADVANCE(462);
      if (lookahead == 't')
        ADVANCE(477);
      if (lookahead == 'u')
        ADVANCE(501);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(521);
      END_STATE();
    case 522:
      if (lookahead == 'c')
        ADVANCE(523);
      if (lookahead == 'r')
        ADVANCE(529);
      END_STATE();
    case 523:
      if (lookahead == 't')
        ADVANCE(524);
      END_STATE();
    case 524:
      if (lookahead == 'i')
        ADVANCE(525);
      END_STATE();
    case 525:
      if (lookahead == 'v')
        ADVANCE(526);
      END_STATE();
    case 526:
      if (lookahead == 'a')
        ADVANCE(527);
      END_STATE();
    case 527:
      if (lookahead == 't')
        ADVANCE(528);
      END_STATE();
    case 528:
      if (lookahead == 'i')
        ADVANCE(438);
      END_STATE();
    case 529:
      if (lookahead == 'c')
        ADVANCE(530);
      END_STATE();
    case 530:
      if (lookahead == 'l')
        ADVANCE(531);
      if (lookahead == 't')
        ADVANCE(542);
      END_STATE();
    case 531:
      if (lookahead == 'i')
        ADVANCE(532);
      END_STATE();
    case 532:
      if (lookahead == 'n')
        ADVANCE(533);
      END_STATE();
    case 533:
      if (lookahead == 'e')
        ADVANCE(534);
      END_STATE();
    case 534:
      if (lookahead == 'c')
        ADVANCE(535);
      END_STATE();
    case 535:
      if (lookahead == 'o')
        ADVANCE(536);
      END_STATE();
    case 536:
      if (lookahead == 'l')
        ADVANCE(537);
      END_STATE();
    case 537:
      if (lookahead == 'o')
        ADVANCE(538);
      END_STATE();
    case 538:
      if (lookahead == 'r')
        ADVANCE(539);
      if (lookahead == 'u')
        ADVANCE(540);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_arclinecolor);
      END_STATE();
    case 540:
      if (lookahead == 'r')
        ADVANCE(541);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_arclinecolour);
      END_STATE();
    case 542:
      if (lookahead == 'e')
        ADVANCE(543);
      END_STATE();
    case 543:
      if (lookahead == 'x')
        ADVANCE(544);
      END_STATE();
    case 544:
      if (lookahead == 't')
        ADVANCE(545);
      END_STATE();
    case 545:
      if (lookahead == 'b')
        ADVANCE(546);
      if (lookahead == 'c')
        ADVANCE(555);
      END_STATE();
    case 546:
      if (lookahead == 'g')
        ADVANCE(547);
      END_STATE();
    case 547:
      if (lookahead == 'c')
        ADVANCE(548);
      END_STATE();
    case 548:
      if (lookahead == 'o')
        ADVANCE(549);
      END_STATE();
    case 549:
      if (lookahead == 'l')
        ADVANCE(550);
      END_STATE();
    case 550:
      if (lookahead == 'o')
        ADVANCE(551);
      END_STATE();
    case 551:
      if (lookahead == 'r')
        ADVANCE(552);
      if (lookahead == 'u')
        ADVANCE(553);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_arctextbgcolor);
      END_STATE();
    case 553:
      if (lookahead == 'r')
        ADVANCE(554);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_arctextbgcolour);
      END_STATE();
    case 555:
      if (lookahead == 'o')
        ADVANCE(556);
      END_STATE();
    case 556:
      if (lookahead == 'l')
        ADVANCE(557);
      END_STATE();
    case 557:
      if (lookahead == 'o')
        ADVANCE(558);
      END_STATE();
    case 558:
      if (lookahead == 'r')
        ADVANCE(559);
      if (lookahead == 'u')
        ADVANCE(560);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_arctextcolor);
      END_STATE();
    case 560:
      if (lookahead == 'r')
        ADVANCE(561);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_arctextcolour);
      END_STATE();
    case 562:
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '/')
        ADVANCE(20);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == ']')
        ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(562);
      END_STATE();
    case 563:
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '/')
        ADVANCE(20);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '{')
        ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(563);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 313},
  [2] = {.lex_state = 319},
  [3] = {.lex_state = 320},
  [4] = {.lex_state = 319},
  [5] = {.lex_state = 321},
  [6] = {.lex_state = 329},
  [7] = {.lex_state = 329},
  [8] = {.lex_state = 329},
  [9] = {.lex_state = 329},
  [10] = {.lex_state = 331},
  [11] = {.lex_state = 331},
  [12] = {.lex_state = 320},
  [13] = {.lex_state = 415},
  [14] = {.lex_state = 416},
  [15] = {.lex_state = 331},
  [16] = {.lex_state = 421},
  [17] = {.lex_state = 331},
  [18] = {.lex_state = 331},
  [19] = {.lex_state = 329},
  [20] = {.lex_state = 329},
  [21] = {.lex_state = 421},
  [22] = {.lex_state = 331},
  [23] = {.lex_state = 321},
  [24] = {.lex_state = 331},
  [25] = {.lex_state = 331},
  [26] = {.lex_state = 331},
  [27] = {.lex_state = 331},
  [28] = {.lex_state = 321},
  [29] = {.lex_state = 422},
  [30] = {.lex_state = 421},
  [31] = {.lex_state = 421},
  [32] = {.lex_state = 423},
  [33] = {.lex_state = 422},
  [34] = {.lex_state = 429},
  [35] = {.lex_state = 331},
  [36] = {.lex_state = 504},
  [37] = {.lex_state = 416},
  [38] = {.lex_state = 320},
  [39] = {.lex_state = 421},
  [40] = {.lex_state = 321},
  [41] = {.lex_state = 321},
  [42] = {.lex_state = 421},
  [43] = {.lex_state = 423},
  [44] = {.lex_state = 505},
  [45] = {.lex_state = 331},
  [46] = {.lex_state = 422},
  [47] = {.lex_state = 421},
  [48] = {.lex_state = 421},
  [49] = {.lex_state = 421},
  [50] = {.lex_state = 421},
  [51] = {.lex_state = 422},
  [52] = {.lex_state = 421},
  [53] = {.lex_state = 422},
  [54] = {.lex_state = 422},
  [55] = {.lex_state = 521},
  [56] = {.lex_state = 331},
  [57] = {.lex_state = 421},
  [58] = {.lex_state = 422},
  [59] = {.lex_state = 422},
  [60] = {.lex_state = 331},
  [61] = {.lex_state = 321},
  [62] = {.lex_state = 331},
  [63] = {.lex_state = 331},
  [64] = {.lex_state = 422},
  [65] = {.lex_state = 331},
  [66] = {.lex_state = 421},
  [67] = {.lex_state = 421},
  [68] = {.lex_state = 423},
  [69] = {.lex_state = 331},
  [70] = {.lex_state = 331},
  [71] = {.lex_state = 331},
  [72] = {.lex_state = 562},
  [73] = {.lex_state = 329},
  [74] = {.lex_state = 329},
  [75] = {.lex_state = 329},
  [76] = {.lex_state = 329},
  [77] = {.lex_state = 563},
  [78] = {.lex_state = 329},
  [79] = {.lex_state = 329},
  [80] = {.lex_state = 329},
  [81] = {.lex_state = 329},
  [82] = {.lex_state = 429},
  [83] = {.lex_state = 504},
  [84] = {.lex_state = 416},
  [85] = {.lex_state = 320},
  [86] = {.lex_state = 321},
  [87] = {.lex_state = 423},
  [88] = {.lex_state = 331},
  [89] = {.lex_state = 562},
  [90] = {.lex_state = 505},
  [91] = {.lex_state = 331},
  [92] = {.lex_state = 562},
  [93] = {.lex_state = 329},
  [94] = {.lex_state = 329},
  [95] = {.lex_state = 331},
  [96] = {.lex_state = 329},
  [97] = {.lex_state = 329},
  [98] = {.lex_state = 329},
  [99] = {.lex_state = 329},
  [100] = {.lex_state = 521},
  [101] = {.lex_state = 331},
  [102] = {.lex_state = 319},
  [103] = {.lex_state = 421},
  [104] = {.lex_state = 329},
  [105] = {.lex_state = 421},
  [106] = {.lex_state = 329},
  [107] = {.lex_state = 421},
  [108] = {.lex_state = 329},
  [109] = {.lex_state = 422},
  [110] = {.lex_state = 423},
  [111] = {.lex_state = 563},
  [112] = {.lex_state = 429},
  [113] = {.lex_state = 422},
  [114] = {.lex_state = 505},
  [115] = {.lex_state = 329},
  [116] = {.lex_state = 429},
  [117] = {.lex_state = 320},
  [118] = {.lex_state = 422},
  [119] = {.lex_state = 422},
  [120] = {.lex_state = 331},
  [121] = {.lex_state = 521},
  [122] = {.lex_state = 505},
  [123] = {.lex_state = 422},
  [124] = {.lex_state = 329},
  [125] = {.lex_state = 521},
  [126] = {.lex_state = 421},
  [127] = {.lex_state = 331},
  [128] = {.lex_state = 319},
  [129] = {.lex_state = 331},
  [130] = {.lex_state = 329},
  [131] = {.lex_state = 329},
  [132] = {.lex_state = 329},
  [133] = {.lex_state = 329},
  [134] = {.lex_state = 329},
  [135] = {.lex_state = 563},
  [136] = {.lex_state = 329},
  [137] = {.lex_state = 562},
  [138] = {.lex_state = 562},
  [139] = {.lex_state = 329},
  [140] = {.lex_state = 329},
  [141] = {.lex_state = 329},
  [142] = {.lex_state = 331},
  [143] = {.lex_state = 329},
  [144] = {.lex_state = 331},
  [145] = {.lex_state = 321},
  [146] = {.lex_state = 331},
  [147] = {.lex_state = 331},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_hscale] = ACTIONS(3),
    [anon_sym_arcgradient] = ACTIONS(3),
    [sym_size_option_key] = ACTIONS(3),
    [sym_string_option_key] = ACTIONS(3),
    [anon_sym_wordwraparcs] = ACTIONS(3),
    [anon_sym_wordwrapentities] = ACTIONS(3),
    [anon_sym_wordwrapboxes] = ACTIONS(3),
    [anon_sym_activation] = ACTIONS(3),
    [anon_sym_label] = ACTIONS(3),
    [anon_sym_idurl] = ACTIONS(3),
    [anon_sym_id] = ACTIONS(3),
    [anon_sym_url] = ACTIONS(3),
    [anon_sym_linecolor] = ACTIONS(3),
    [anon_sym_linecolour] = ACTIONS(3),
    [anon_sym_textcolor] = ACTIONS(3),
    [anon_sym_textcolour] = ACTIONS(3),
    [anon_sym_textbgcolor] = ACTIONS(3),
    [anon_sym_textbgcolour] = ACTIONS(3),
    [anon_sym_arclinecolor] = ACTIONS(3),
    [anon_sym_arclinecolour] = ACTIONS(3),
    [anon_sym_arctextcolor] = ACTIONS(3),
    [anon_sym_arctextcolour] = ACTIONS(3),
    [anon_sym_arctextbgcolor] = ACTIONS(3),
    [anon_sym_arctextbgcolour] = ACTIONS(3),
    [anon_sym_title] = ACTIONS(3),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(3),
    [anon_sym_COLON_GT] = ACTIONS(1),
    [anon_sym_EQ_GT_GT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_DASHx] = ACTIONS(1),
    [anon_sym_DASHX] = ACTIONS(1),
    [anon_sym_LT_DASH] = ACTIONS(3),
    [anon_sym_LT_EQ] = ACTIONS(3),
    [anon_sym_LT_COLON] = ACTIONS(3),
    [anon_sym_LT_LT_EQ] = ACTIONS(3),
    [anon_sym_LT_LT] = ACTIONS(3),
    [anon_sym_x_DASH] = ACTIONS(1),
    [anon_sym_X_DASH] = ACTIONS(1),
    [anon_sym_LT_DASH_GT] = ACTIONS(1),
    [anon_sym_LT_EQ_GT] = ACTIONS(1),
    [anon_sym_LT_COLON_GT] = ACTIONS(1),
    [anon_sym_LT_LT_EQ_GT_GT] = ACTIONS(1),
    [anon_sym_LT_LT_GT_GT] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(3),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(3),
    [anon_sym_note] = ACTIONS(3),
    [anon_sym_abox] = ACTIONS(3),
    [anon_sym_rbox] = ACTIONS(3),
    [anon_sym_box] = ACTIONS(3),
    [anon_sym_PIPE_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [sym_comment_arc] = ACTIONS(1),
    [anon_sym_alt] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(3),
    [anon_sym_opt] = ACTIONS(3),
    [anon_sym_break] = ACTIONS(3),
    [anon_sym_par] = ACTIONS(3),
    [anon_sym_seq] = ACTIONS(3),
    [anon_sym_strict] = ACTIONS(3),
    [anon_sym_neg] = ACTIONS(3),
    [anon_sym_critical] = ACTIONS(3),
    [anon_sym_ignore] = ACTIONS(3),
    [anon_sym_consider] = ACTIONS(3),
    [anon_sym_assert] = ACTIONS(3),
    [anon_sym_loop] = ACTIONS(3),
    [anon_sym_ref] = ACTIONS(3),
    [anon_sym_exc] = ACTIONS(3),
    [anon_sym_activate] = ACTIONS(3),
    [anon_sym_deactivate] = ACTIONS(3),
    [sym_number_arc_attribute_key] = ACTIONS(3),
    [anon_sym_msc] = ACTIONS(3),
    [anon_sym_xu] = ACTIONS(3),
    [sym_curly_bracket_open] = ACTIONS(1),
    [sym_curly_bracket_close] = ACTIONS(1),
    [sym_square_bracket_open] = ACTIONS(1),
    [sym_square_bracket_close] = ACTIONS(1),
    [sym_equals] = ACTIONS(3),
    [sym_comma] = ACTIONS(1),
    [sym_colon] = ACTIONS(3),
    [sym_semicolon] = ACTIONS(1),
    [sym__dot] = ACTIONS(3),
    [sym__identifier] = ACTIONS(3),
    [sym__integer] = ACTIONS(3),
    [sym__real] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(3),
    [anon_sym_auto] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(3),
    [anon_sym_on] = ACTIONS(3),
    [anon_sym_off] = ACTIONS(3),
    [anon_sym_0] = ACTIONS(3),
    [anon_sym_1] = ACTIONS(3),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(3),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_DQUOTE_STAR_DQUOTE] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_sequence_chart] = STATE(3),
    [sym_start_token] = STATE(4),
    [anon_sym_msc] = ACTIONS(5),
    [anon_sym_xu] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
  },
  [2] = {
    [sym_curly_bracket_open] = ACTIONS(9),
    [sym_comment] = ACTIONS(7),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym_comment] = ACTIONS(7),
  },
  [4] = {
    [sym_curly_bracket_open] = ACTIONS(13),
    [sym_comment] = ACTIONS(7),
  },
  [5] = {
    [sym_options] = STATE(16),
    [sym_option] = STATE(17),
    [sym__numerical_option] = STATE(18),
    [sym_numerical_option_key] = STATE(19),
    [sym__size_option] = STATE(18),
    [sym__string_option] = STATE(18),
    [sym__boolean_option] = STATE(18),
    [sym_boolean_option_key] = STATE(20),
    [sym_entities] = STATE(21),
    [sym_entity] = STATE(22),
    [sym_arcs] = STATE(23),
    [sym_arc] = STATE(24),
    [sym__dual_arc] = STATE(11),
    [sym_single_arc] = STATE(11),
    [sym__inline_expression_arc] = STATE(25),
    [sym_entity_identifier] = STATE(26),
    [sym__string] = STATE(13),
    [sym_entity_wildcard] = STATE(27),
    [aux_sym_options_repeat1] = STATE(28),
    [aux_sym_entities_repeat1] = STATE(29),
    [aux_sym_arcs_repeat1] = STATE(30),
    [aux_sym_arcs_repeat2] = STATE(31),
    [anon_sym_hscale] = ACTIONS(15),
    [anon_sym_arcgradient] = ACTIONS(15),
    [sym_size_option_key] = ACTIONS(17),
    [sym_string_option_key] = ACTIONS(19),
    [anon_sym_wordwraparcs] = ACTIONS(21),
    [anon_sym_wordwrapentities] = ACTIONS(21),
    [anon_sym_wordwrapboxes] = ACTIONS(21),
    [anon_sym_PIPE_PIPE_PIPE] = ACTIONS(23),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(23),
    [sym_comment_arc] = ACTIONS(25),
    [sym_curly_bracket_close] = ACTIONS(27),
    [sym__identifier] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_DQUOTE_STAR_DQUOTE] = ACTIONS(33),
    [sym_comment] = ACTIONS(7),
  },
  [6] = {
    [sym_equals] = ACTIONS(35),
    [sym_comment] = ACTIONS(7),
  },
  [7] = {
    [sym_equals] = ACTIONS(37),
    [sym_comment] = ACTIONS(7),
  },
  [8] = {
    [sym_equals] = ACTIONS(39),
    [sym_comment] = ACTIONS(7),
  },
  [9] = {
    [sym_equals] = ACTIONS(41),
    [sym_comment] = ACTIONS(7),
  },
  [10] = {
    [sym_square_bracket_open] = ACTIONS(43),
    [sym_comma] = ACTIONS(43),
    [sym_semicolon] = ACTIONS(43),
    [sym_comment] = ACTIONS(7),
  },
  [11] = {
    [sym_arc_attributes] = STATE(35),
    [sym_square_bracket_open] = ACTIONS(45),
    [sym_comma] = ACTIONS(47),
    [sym_semicolon] = ACTIONS(47),
    [sym_comment] = ACTIONS(7),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(49),
    [sym_comment] = ACTIONS(7),
  },
  [13] = {
    [anon_sym_DASH_GT] = ACTIONS(51),
    [anon_sym_EQ_GT] = ACTIONS(53),
    [anon_sym_COLON_GT] = ACTIONS(51),
    [anon_sym_EQ_GT_GT] = ACTIONS(51),
    [anon_sym_GT_GT] = ACTIONS(51),
    [anon_sym_DASHx] = ACTIONS(51),
    [anon_sym_DASHX] = ACTIONS(51),
    [anon_sym_LT_DASH] = ACTIONS(53),
    [anon_sym_LT_EQ] = ACTIONS(53),
    [anon_sym_LT_COLON] = ACTIONS(53),
    [anon_sym_LT_LT_EQ] = ACTIONS(53),
    [anon_sym_LT_LT] = ACTIONS(53),
    [anon_sym_x_DASH] = ACTIONS(51),
    [anon_sym_X_DASH] = ACTIONS(51),
    [anon_sym_LT_DASH_GT] = ACTIONS(51),
    [anon_sym_LT_EQ_GT] = ACTIONS(51),
    [anon_sym_LT_COLON_GT] = ACTIONS(51),
    [anon_sym_LT_LT_EQ_GT_GT] = ACTIONS(51),
    [anon_sym_LT_LT_GT_GT] = ACTIONS(51),
    [anon_sym_DASH_DASH] = ACTIONS(51),
    [anon_sym_EQ_EQ] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(51),
    [anon_sym_DOT_DOT] = ACTIONS(51),
    [anon_sym_note] = ACTIONS(51),
    [anon_sym_abox] = ACTIONS(51),
    [anon_sym_rbox] = ACTIONS(51),
    [anon_sym_box] = ACTIONS(51),
    [anon_sym_alt] = ACTIONS(51),
    [anon_sym_else] = ACTIONS(51),
    [anon_sym_opt] = ACTIONS(51),
    [anon_sym_break] = ACTIONS(51),
    [anon_sym_par] = ACTIONS(51),
    [anon_sym_seq] = ACTIONS(51),
    [anon_sym_strict] = ACTIONS(51),
    [anon_sym_neg] = ACTIONS(51),
    [anon_sym_critical] = ACTIONS(51),
    [anon_sym_ignore] = ACTIONS(51),
    [anon_sym_consider] = ACTIONS(51),
    [anon_sym_assert] = ACTIONS(51),
    [anon_sym_loop] = ACTIONS(51),
    [anon_sym_ref] = ACTIONS(51),
    [anon_sym_exc] = ACTIONS(51),
    [sym_curly_bracket_open] = ACTIONS(51),
    [sym_square_bracket_open] = ACTIONS(51),
    [sym_comma] = ACTIONS(51),
    [sym_semicolon] = ACTIONS(51),
    [sym_comment] = ACTIONS(7),
  },
  [14] = {
    [aux_sym__string_repeat1] = STATE(37),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(57),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(57),
    [sym_comment] = ACTIONS(59),
  },
  [15] = {
    [anon_sym_LT_DASH] = ACTIONS(61),
    [anon_sym_LT_EQ] = ACTIONS(61),
    [anon_sym_LT_COLON] = ACTIONS(61),
    [anon_sym_LT_LT_EQ] = ACTIONS(61),
    [anon_sym_LT_LT] = ACTIONS(63),
    [anon_sym_x_DASH] = ACTIONS(61),
    [anon_sym_X_DASH] = ACTIONS(61),
    [sym_square_bracket_open] = ACTIONS(61),
    [sym_comma] = ACTIONS(61),
    [sym_semicolon] = ACTIONS(61),
    [sym_comment] = ACTIONS(7),
  },
  [16] = {
    [sym_entities] = STATE(39),
    [sym_entity] = STATE(22),
    [sym_arcs] = STATE(40),
    [sym_arc] = STATE(24),
    [sym__dual_arc] = STATE(11),
    [sym_single_arc] = STATE(11),
    [sym__inline_expression_arc] = STATE(25),
    [sym_entity_identifier] = STATE(26),
    [sym__string] = STATE(13),
    [sym_entity_wildcard] = STATE(27),
    [aux_sym_entities_repeat1] = STATE(29),
    [aux_sym_arcs_repeat1] = STATE(30),
    [aux_sym_arcs_repeat2] = STATE(31),
    [anon_sym_PIPE_PIPE_PIPE] = ACTIONS(23),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(23),
    [sym_comment_arc] = ACTIONS(25),
    [sym_curly_bracket_close] = ACTIONS(65),
    [sym__identifier] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_DQUOTE_STAR_DQUOTE] = ACTIONS(33),
    [sym_comment] = ACTIONS(7),
  },
  [17] = {
    [sym_comma] = ACTIONS(69),
    [sym_semicolon] = ACTIONS(71),
    [sym_comment] = ACTIONS(7),
  },
  [18] = {
    [sym_comma] = ACTIONS(73),
    [sym_semicolon] = ACTIONS(73),
    [sym_comment] = ACTIONS(7),
  },
  [19] = {
    [sym_equals] = ACTIONS(75),
    [sym_comment] = ACTIONS(7),
  },
  [20] = {
    [sym_equals] = ACTIONS(77),
    [sym_comment] = ACTIONS(7),
  },
  [21] = {
    [sym_arcs] = STATE(40),
    [sym_arc] = STATE(24),
    [sym__dual_arc] = STATE(11),
    [sym_single_arc] = STATE(11),
    [sym__inline_expression_arc] = STATE(25),
    [sym_entity_identifier] = STATE(45),
    [sym__string] = STATE(13),
    [sym_entity_wildcard] = STATE(27),
    [aux_sym_arcs_repeat1] = STATE(30),
    [aux_sym_arcs_repeat2] = STATE(31),
    [anon_sym_PIPE_PIPE_PIPE] = ACTIONS(23),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(23),
    [sym_comment_arc] = ACTIONS(25),
    [sym_curly_bracket_close] = ACTIONS(65),
    [sym__identifier] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_DQUOTE_STAR_DQUOTE] = ACTIONS(33),
    [sym_comment] = ACTIONS(7),
  },
  [22] = {
    [sym_comma] = ACTIONS(79),
    [sym_semicolon] = ACTIONS(81),
    [sym_comment] = ACTIONS(7),
  },
  [23] = {
    [sym_curly_bracket_close] = ACTIONS(65),
    [sym_comment] = ACTIONS(7),
  },
  [24] = {
    [sym_comma] = ACTIONS(83),
    [sym_semicolon] = ACTIONS(85),
    [sym_comment] = ACTIONS(7),
  },
  [25] = {
    [sym_comma] = ACTIONS(47),
    [sym_semicolon] = ACTIONS(47),
    [sym_comment] = ACTIONS(7),
  },
  [26] = {
    [sym_entity_attributes] = STATE(56),
    [sym_forward_arrow] = STATE(57),
    [sym_backward_arrow] = STATE(58),
    [sym_bidirectional_arrow] = STATE(57),
    [sym_box] = STATE(58),
    [sym_inline_expression_token] = STATE(59),
    [anon_sym_DASH_GT] = ACTIONS(87),
    [anon_sym_EQ_GT] = ACTIONS(89),
    [anon_sym_COLON_GT] = ACTIONS(87),
    [anon_sym_EQ_GT_GT] = ACTIONS(87),
    [anon_sym_GT_GT] = ACTIONS(87),
    [anon_sym_DASHx] = ACTIONS(87),
    [anon_sym_DASHX] = ACTIONS(87),
    [anon_sym_LT_DASH] = ACTIONS(91),
    [anon_sym_LT_EQ] = ACTIONS(91),
    [anon_sym_LT_COLON] = ACTIONS(91),
    [anon_sym_LT_LT_EQ] = ACTIONS(91),
    [anon_sym_LT_LT] = ACTIONS(91),
    [anon_sym_x_DASH] = ACTIONS(93),
    [anon_sym_X_DASH] = ACTIONS(93),
    [anon_sym_LT_DASH_GT] = ACTIONS(95),
    [anon_sym_LT_EQ_GT] = ACTIONS(95),
    [anon_sym_LT_COLON_GT] = ACTIONS(95),
    [anon_sym_LT_LT_EQ_GT_GT] = ACTIONS(95),
    [anon_sym_LT_LT_GT_GT] = ACTIONS(95),
    [anon_sym_DASH_DASH] = ACTIONS(95),
    [anon_sym_EQ_EQ] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(95),
    [anon_sym_DOT_DOT] = ACTIONS(95),
    [anon_sym_note] = ACTIONS(97),
    [anon_sym_abox] = ACTIONS(97),
    [anon_sym_rbox] = ACTIONS(97),
    [anon_sym_box] = ACTIONS(97),
    [anon_sym_alt] = ACTIONS(99),
    [anon_sym_else] = ACTIONS(99),
    [anon_sym_opt] = ACTIONS(99),
    [anon_sym_break] = ACTIONS(99),
    [anon_sym_par] = ACTIONS(99),
    [anon_sym_seq] = ACTIONS(99),
    [anon_sym_strict] = ACTIONS(99),
    [anon_sym_neg] = ACTIONS(99),
    [anon_sym_critical] = ACTIONS(99),
    [anon_sym_ignore] = ACTIONS(99),
    [anon_sym_consider] = ACTIONS(99),
    [anon_sym_assert] = ACTIONS(99),
    [anon_sym_loop] = ACTIONS(99),
    [anon_sym_ref] = ACTIONS(99),
    [anon_sym_exc] = ACTIONS(99),
    [sym_square_bracket_open] = ACTIONS(101),
    [sym_comma] = ACTIONS(103),
    [sym_semicolon] = ACTIONS(103),
    [sym_comment] = ACTIONS(7),
  },
  [27] = {
    [sym_backward_arrow] = STATE(58),
    [anon_sym_LT_DASH] = ACTIONS(93),
    [anon_sym_LT_EQ] = ACTIONS(93),
    [anon_sym_LT_COLON] = ACTIONS(93),
    [anon_sym_LT_LT_EQ] = ACTIONS(93),
    [anon_sym_LT_LT] = ACTIONS(91),
    [anon_sym_x_DASH] = ACTIONS(93),
    [anon_sym_X_DASH] = ACTIONS(93),
    [sym_comment] = ACTIONS(7),
  },
  [28] = {
    [sym_option] = STATE(60),
    [sym__numerical_option] = STATE(18),
    [sym_numerical_option_key] = STATE(19),
    [sym__size_option] = STATE(18),
    [sym__string_option] = STATE(18),
    [sym__boolean_option] = STATE(18),
    [sym_boolean_option_key] = STATE(20),
    [aux_sym_options_repeat1] = STATE(61),
    [anon_sym_hscale] = ACTIONS(105),
    [anon_sym_arcgradient] = ACTIONS(105),
    [sym_size_option_key] = ACTIONS(107),
    [sym_string_option_key] = ACTIONS(109),
    [anon_sym_wordwraparcs] = ACTIONS(111),
    [anon_sym_wordwrapentities] = ACTIONS(111),
    [anon_sym_wordwrapboxes] = ACTIONS(111),
    [sym_comment] = ACTIONS(7),
  },
  [29] = {
    [sym_entity] = STATE(62),
    [sym_entity_identifier] = STATE(63),
    [sym__string] = STATE(13),
    [aux_sym_entities_repeat1] = STATE(64),
    [sym__identifier] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [sym_comment] = ACTIONS(7),
  },
  [30] = {
    [sym_arc] = STATE(65),
    [sym__dual_arc] = STATE(11),
    [sym_single_arc] = STATE(11),
    [sym__inline_expression_arc] = STATE(25),
    [sym_entity_identifier] = STATE(45),
    [sym__string] = STATE(13),
    [sym_entity_wildcard] = STATE(27),
    [aux_sym_arcs_repeat1] = STATE(66),
    [anon_sym_PIPE_PIPE_PIPE] = ACTIONS(23),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(23),
    [sym_comment_arc] = ACTIONS(25),
    [sym__identifier] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_DQUOTE_STAR_DQUOTE] = ACTIONS(33),
    [sym_comment] = ACTIONS(7),
  },
  [31] = {
    [sym_arc] = STATE(24),
    [sym__dual_arc] = STATE(11),
    [sym_single_arc] = STATE(11),
    [sym__inline_expression_arc] = STATE(25),
    [sym_entity_identifier] = STATE(45),
    [sym__string] = STATE(13),
    [sym_entity_wildcard] = STATE(27),
    [aux_sym_arcs_repeat1] = STATE(30),
    [aux_sym_arcs_repeat2] = STATE(67),
    [anon_sym_PIPE_PIPE_PIPE] = ACTIONS(23),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(23),
    [sym_comment_arc] = ACTIONS(25),
    [sym_curly_bracket_close] = ACTIONS(115),
    [sym__identifier] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_DQUOTE_STAR_DQUOTE] = ACTIONS(33),
    [sym_comment] = ACTIONS(7),
  },
  [32] = {
    [sym__number] = STATE(70),
    [sym__sizelike] = STATE(69),
    [sym_size] = STATE(69),
    [sym__size] = STATE(70),
    [sym_sizelike_string] = STATE(69),
    [sym__integer] = ACTIONS(117),
    [sym__real] = ACTIONS(119),
    [anon_sym_DQUOTE] = ACTIONS(121),
    [anon_sym_auto] = ACTIONS(119),
    [sym_comment] = ACTIONS(7),
  },
  [33] = {
    [sym_string] = STATE(71),
    [sym__string] = STATE(72),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [sym_comment] = ACTIONS(7),
  },
  [34] = {
    [sym_arc_attribute] = STATE(78),
    [sym__string_arc_attribute] = STATE(79),
    [sym_string_arc_attribute_key] = STATE(80),
    [sym__boolean_arc_attribute] = STATE(79),
    [sym_boolean_arc_attribute_key] = STATE(81),
    [sym_value_only_arc_attribute_key] = STATE(79),
    [sym__number_arc_attribute] = STATE(79),
    [aux_sym_arc_attributes_repeat1] = STATE(82),
    [anon_sym_activation] = ACTIONS(123),
    [anon_sym_label] = ACTIONS(125),
    [anon_sym_idurl] = ACTIONS(125),
    [anon_sym_id] = ACTIONS(127),
    [anon_sym_url] = ACTIONS(125),
    [anon_sym_linecolor] = ACTIONS(125),
    [anon_sym_linecolour] = ACTIONS(125),
    [anon_sym_textcolor] = ACTIONS(125),
    [anon_sym_textcolour] = ACTIONS(125),
    [anon_sym_textbgcolor] = ACTIONS(125),
    [anon_sym_textbgcolour] = ACTIONS(125),
    [anon_sym_title] = ACTIONS(125),
    [anon_sym_activate] = ACTIONS(129),
    [anon_sym_deactivate] = ACTIONS(129),
    [sym_number_arc_attribute_key] = ACTIONS(131),
    [sym_square_bracket_close] = ACTIONS(133),
    [sym_comment] = ACTIONS(7),
  },
  [35] = {
    [sym_comma] = ACTIONS(135),
    [sym_semicolon] = ACTIONS(135),
    [sym_comment] = ACTIONS(7),
  },
  [36] = {
    [anon_sym_DASH_GT] = ACTIONS(137),
    [anon_sym_EQ_GT] = ACTIONS(139),
    [anon_sym_COLON_GT] = ACTIONS(137),
    [anon_sym_EQ_GT_GT] = ACTIONS(137),
    [anon_sym_GT_GT] = ACTIONS(137),
    [anon_sym_DASHx] = ACTIONS(137),
    [anon_sym_DASHX] = ACTIONS(137),
    [anon_sym_LT_DASH] = ACTIONS(139),
    [anon_sym_LT_EQ] = ACTIONS(139),
    [anon_sym_LT_COLON] = ACTIONS(139),
    [anon_sym_LT_LT_EQ] = ACTIONS(139),
    [anon_sym_LT_LT] = ACTIONS(139),
    [anon_sym_x_DASH] = ACTIONS(137),
    [anon_sym_X_DASH] = ACTIONS(137),
    [anon_sym_LT_DASH_GT] = ACTIONS(137),
    [anon_sym_LT_EQ_GT] = ACTIONS(137),
    [anon_sym_LT_COLON_GT] = ACTIONS(137),
    [anon_sym_LT_LT_EQ_GT_GT] = ACTIONS(137),
    [anon_sym_LT_LT_GT_GT] = ACTIONS(137),
    [anon_sym_DASH_DASH] = ACTIONS(137),
    [anon_sym_EQ_EQ] = ACTIONS(137),
    [anon_sym_COLON_COLON] = ACTIONS(137),
    [anon_sym_DOT_DOT] = ACTIONS(137),
    [anon_sym_note] = ACTIONS(137),
    [anon_sym_abox] = ACTIONS(137),
    [anon_sym_rbox] = ACTIONS(137),
    [anon_sym_box] = ACTIONS(137),
    [anon_sym_alt] = ACTIONS(137),
    [anon_sym_else] = ACTIONS(137),
    [anon_sym_opt] = ACTIONS(137),
    [anon_sym_break] = ACTIONS(137),
    [anon_sym_par] = ACTIONS(137),
    [anon_sym_seq] = ACTIONS(137),
    [anon_sym_strict] = ACTIONS(137),
    [anon_sym_neg] = ACTIONS(137),
    [anon_sym_critical] = ACTIONS(137),
    [anon_sym_ignore] = ACTIONS(137),
    [anon_sym_consider] = ACTIONS(137),
    [anon_sym_assert] = ACTIONS(137),
    [anon_sym_loop] = ACTIONS(137),
    [anon_sym_ref] = ACTIONS(137),
    [anon_sym_exc] = ACTIONS(137),
    [sym_curly_bracket_open] = ACTIONS(137),
    [sym_square_bracket_open] = ACTIONS(137),
    [sym_square_bracket_close] = ACTIONS(137),
    [sym_comma] = ACTIONS(137),
    [sym_semicolon] = ACTIONS(137),
    [sym_comment] = ACTIONS(7),
  },
  [37] = {
    [aux_sym__string_repeat1] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(141),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(143),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(143),
    [sym_comment] = ACTIONS(59),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(145),
    [sym_comment] = ACTIONS(7),
  },
  [39] = {
    [sym_arcs] = STATE(86),
    [sym_arc] = STATE(24),
    [sym__dual_arc] = STATE(11),
    [sym_single_arc] = STATE(11),
    [sym__inline_expression_arc] = STATE(25),
    [sym_entity_identifier] = STATE(45),
    [sym__string] = STATE(13),
    [sym_entity_wildcard] = STATE(27),
    [aux_sym_arcs_repeat1] = STATE(30),
    [aux_sym_arcs_repeat2] = STATE(31),
    [anon_sym_PIPE_PIPE_PIPE] = ACTIONS(23),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(23),
    [sym_comment_arc] = ACTIONS(25),
    [sym_curly_bracket_close] = ACTIONS(147),
    [sym__identifier] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_DQUOTE_STAR_DQUOTE] = ACTIONS(33),
    [sym_comment] = ACTIONS(7),
  },
  [40] = {
    [sym_curly_bracket_close] = ACTIONS(147),
    [sym_comment] = ACTIONS(7),
  },
  [41] = {
    [anon_sym_hscale] = ACTIONS(149),
    [anon_sym_arcgradient] = ACTIONS(149),
    [sym_size_option_key] = ACTIONS(149),
    [sym_string_option_key] = ACTIONS(149),
    [anon_sym_wordwraparcs] = ACTIONS(149),
    [anon_sym_wordwrapentities] = ACTIONS(149),
    [anon_sym_wordwrapboxes] = ACTIONS(149),
    [sym_comment] = ACTIONS(7),
  },
  [42] = {
    [anon_sym_PIPE_PIPE_PIPE] = ACTIONS(151),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(151),
    [sym_comment_arc] = ACTIONS(151),
    [sym_curly_bracket_close] = ACTIONS(151),
    [sym__identifier] = ACTIONS(151),
    [anon_sym_DQUOTE] = ACTIONS(153),
    [anon_sym_STAR] = ACTIONS(151),
    [anon_sym_DQUOTE_STAR_DQUOTE] = ACTIONS(151),
    [sym_comment] = ACTIONS(7),
  },
  [43] = {
    [sym__numberlike] = STATE(88),
    [sym_number] = STATE(88),
    [sym__number] = STATE(89),
    [sym_numberlike_string] = STATE(88),
    [sym__integer] = ACTIONS(155),
    [sym__real] = ACTIONS(157),
    [anon_sym_DQUOTE] = ACTIONS(159),
    [sym_comment] = ACTIONS(7),
  },
  [44] = {
    [sym__booleanlike] = STATE(91),
    [sym_boolean] = STATE(91),
    [sym__boolean] = STATE(92),
    [sym_booleanlike_string] = STATE(91),
    [anon_sym_DQUOTE] = ACTIONS(161),
    [anon_sym_true] = ACTIONS(163),
    [anon_sym_false] = ACTIONS(163),
    [anon_sym_on] = ACTIONS(163),
    [anon_sym_off] = ACTIONS(163),
    [anon_sym_0] = ACTIONS(163),
    [anon_sym_1] = ACTIONS(163),
    [sym_comment] = ACTIONS(7),
  },
  [45] = {
    [sym_forward_arrow] = STATE(57),
    [sym_backward_arrow] = STATE(58),
    [sym_bidirectional_arrow] = STATE(57),
    [sym_box] = STATE(58),
    [sym_inline_expression_token] = STATE(59),
    [anon_sym_DASH_GT] = ACTIONS(87),
    [anon_sym_EQ_GT] = ACTIONS(89),
    [anon_sym_COLON_GT] = ACTIONS(87),
    [anon_sym_EQ_GT_GT] = ACTIONS(87),
    [anon_sym_GT_GT] = ACTIONS(87),
    [anon_sym_DASHx] = ACTIONS(87),
    [anon_sym_DASHX] = ACTIONS(87),
    [anon_sym_LT_DASH] = ACTIONS(91),
    [anon_sym_LT_EQ] = ACTIONS(91),
    [anon_sym_LT_COLON] = ACTIONS(91),
    [anon_sym_LT_LT_EQ] = ACTIONS(91),
    [anon_sym_LT_LT] = ACTIONS(91),
    [anon_sym_x_DASH] = ACTIONS(93),
    [anon_sym_X_DASH] = ACTIONS(93),
    [anon_sym_LT_DASH_GT] = ACTIONS(95),
    [anon_sym_LT_EQ_GT] = ACTIONS(95),
    [anon_sym_LT_COLON_GT] = ACTIONS(95),
    [anon_sym_LT_LT_EQ_GT_GT] = ACTIONS(95),
    [anon_sym_LT_LT_GT_GT] = ACTIONS(95),
    [anon_sym_DASH_DASH] = ACTIONS(95),
    [anon_sym_EQ_EQ] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(95),
    [anon_sym_DOT_DOT] = ACTIONS(95),
    [anon_sym_note] = ACTIONS(97),
    [anon_sym_abox] = ACTIONS(97),
    [anon_sym_rbox] = ACTIONS(97),
    [anon_sym_box] = ACTIONS(97),
    [anon_sym_alt] = ACTIONS(99),
    [anon_sym_else] = ACTIONS(99),
    [anon_sym_opt] = ACTIONS(99),
    [anon_sym_break] = ACTIONS(99),
    [anon_sym_par] = ACTIONS(99),
    [anon_sym_seq] = ACTIONS(99),
    [anon_sym_strict] = ACTIONS(99),
    [anon_sym_neg] = ACTIONS(99),
    [anon_sym_critical] = ACTIONS(99),
    [anon_sym_ignore] = ACTIONS(99),
    [anon_sym_consider] = ACTIONS(99),
    [anon_sym_assert] = ACTIONS(99),
    [anon_sym_loop] = ACTIONS(99),
    [anon_sym_ref] = ACTIONS(99),
    [anon_sym_exc] = ACTIONS(99),
    [sym_comment] = ACTIONS(7),
  },
  [46] = {
    [sym__identifier] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [sym_comment] = ACTIONS(7),
  },
  [47] = {
    [anon_sym_PIPE_PIPE_PIPE] = ACTIONS(167),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(167),
    [sym_comment_arc] = ACTIONS(167),
    [sym_curly_bracket_close] = ACTIONS(167),
    [sym__identifier] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [anon_sym_STAR] = ACTIONS(167),
    [anon_sym_DQUOTE_STAR_DQUOTE] = ACTIONS(167),
    [sym_comment] = ACTIONS(7),
  },
  [48] = {
    [anon_sym_PIPE_PIPE_PIPE] = ACTIONS(171),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(171),
    [sym_comment_arc] = ACTIONS(171),
    [sym__identifier] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [anon_sym_STAR] = ACTIONS(171),
    [anon_sym_DQUOTE_STAR_DQUOTE] = ACTIONS(171),
    [sym_comment] = ACTIONS(7),
  },
  [49] = {
    [anon_sym_PIPE_PIPE_PIPE] = ACTIONS(175),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(175),
    [sym_comment_arc] = ACTIONS(175),
    [sym_curly_bracket_close] = ACTIONS(175),
    [sym__identifier] = ACTIONS(175),
    [anon_sym_DQUOTE] = ACTIONS(177),
    [anon_sym_STAR] = ACTIONS(175),
    [anon_sym_DQUOTE_STAR_DQUOTE] = ACTIONS(175),
    [sym_comment] = ACTIONS(7),
  },
  [50] = {
    [sym__identifier] = ACTIONS(179),
    [anon_sym_DQUOTE] = ACTIONS(181),
    [anon_sym_STAR] = ACTIONS(179),
    [anon_sym_DQUOTE_STAR_DQUOTE] = ACTIONS(179),
    [sym_comment] = ACTIONS(7),
  },
  [51] = {
    [sym__identifier] = ACTIONS(183),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [sym_comment] = ACTIONS(7),
  },
  [52] = {
    [sym__identifier] = ACTIONS(185),
    [anon_sym_DQUOTE] = ACTIONS(187),
    [anon_sym_STAR] = ACTIONS(185),
    [anon_sym_DQUOTE_STAR_DQUOTE] = ACTIONS(185),
    [sym_comment] = ACTIONS(7),
  },
  [53] = {
    [sym__identifier] = ACTIONS(189),
    [anon_sym_DQUOTE] = ACTIONS(189),
    [sym_comment] = ACTIONS(7),
  },
  [54] = {
    [sym__identifier] = ACTIONS(191),
    [anon_sym_DQUOTE] = ACTIONS(191),
    [sym_comment] = ACTIONS(7),
  },
  [55] = {
    [sym_entity_attribute] = STATE(96),
    [sym__boolean_entity_attribute] = STATE(97),
    [sym_boolean_entity_attribute_key] = STATE(98),
    [sym__string_entity_attribute] = STATE(97),
    [sym_string_entity_attribute_key] = STATE(99),
    [aux_sym_entity_attributes_repeat1] = STATE(100),
    [anon_sym_activation] = ACTIONS(193),
    [anon_sym_label] = ACTIONS(195),
    [anon_sym_idurl] = ACTIONS(195),
    [anon_sym_id] = ACTIONS(197),
    [anon_sym_url] = ACTIONS(195),
    [anon_sym_linecolor] = ACTIONS(195),
    [anon_sym_linecolour] = ACTIONS(195),
    [anon_sym_textcolor] = ACTIONS(195),
    [anon_sym_textcolour] = ACTIONS(195),
    [anon_sym_textbgcolor] = ACTIONS(195),
    [anon_sym_textbgcolour] = ACTIONS(195),
    [anon_sym_arclinecolor] = ACTIONS(195),
    [anon_sym_arclinecolour] = ACTIONS(195),
    [anon_sym_arctextcolor] = ACTIONS(195),
    [anon_sym_arctextcolour] = ACTIONS(195),
    [anon_sym_arctextbgcolor] = ACTIONS(195),
    [anon_sym_arctextbgcolour] = ACTIONS(195),
    [anon_sym_title] = ACTIONS(195),
    [sym_square_bracket_close] = ACTIONS(199),
    [sym_comment] = ACTIONS(7),
  },
  [56] = {
    [sym_comma] = ACTIONS(201),
    [sym_semicolon] = ACTIONS(201),
    [sym_comment] = ACTIONS(7),
  },
  [57] = {
    [sym_entity_identifier] = STATE(101),
    [sym__string] = STATE(13),
    [sym_entity_wildcard] = STATE(101),
    [sym__identifier] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_DQUOTE_STAR_DQUOTE] = ACTIONS(33),
    [sym_comment] = ACTIONS(7),
  },
  [58] = {
    [sym_entity_identifier] = STATE(101),
    [sym__string] = STATE(13),
    [sym__identifier] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [sym_comment] = ACTIONS(7),
  },
  [59] = {
    [sym_entity_identifier] = STATE(102),
    [sym__string] = STATE(13),
    [sym__identifier] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [sym_comment] = ACTIONS(7),
  },
  [60] = {
    [sym_comma] = ACTIONS(69),
    [sym_semicolon] = ACTIONS(203),
    [sym_comment] = ACTIONS(7),
  },
  [61] = {
    [sym_option] = STATE(104),
    [sym__numerical_option] = STATE(18),
    [sym_numerical_option_key] = STATE(19),
    [sym__size_option] = STATE(18),
    [sym__string_option] = STATE(18),
    [sym__boolean_option] = STATE(18),
    [sym_boolean_option_key] = STATE(20),
    [aux_sym_options_repeat1] = STATE(61),
    [anon_sym_hscale] = ACTIONS(205),
    [anon_sym_arcgradient] = ACTIONS(205),
    [sym_size_option_key] = ACTIONS(208),
    [sym_string_option_key] = ACTIONS(211),
    [anon_sym_wordwraparcs] = ACTIONS(214),
    [anon_sym_wordwrapentities] = ACTIONS(214),
    [anon_sym_wordwrapboxes] = ACTIONS(214),
    [sym_comment] = ACTIONS(7),
  },
  [62] = {
    [sym_comma] = ACTIONS(79),
    [sym_semicolon] = ACTIONS(217),
    [sym_comment] = ACTIONS(7),
  },
  [63] = {
    [sym_entity_attributes] = STATE(56),
    [sym_square_bracket_open] = ACTIONS(101),
    [sym_comma] = ACTIONS(103),
    [sym_semicolon] = ACTIONS(103),
    [sym_comment] = ACTIONS(7),
  },
  [64] = {
    [sym_entity] = STATE(106),
    [sym_entity_identifier] = STATE(63),
    [sym__string] = STATE(13),
    [aux_sym_entities_repeat1] = STATE(64),
    [sym__identifier] = ACTIONS(219),
    [anon_sym_DQUOTE] = ACTIONS(222),
    [sym_comment] = ACTIONS(7),
  },
  [65] = {
    [sym_comma] = ACTIONS(83),
    [sym_semicolon] = ACTIONS(225),
    [sym_comment] = ACTIONS(7),
  },
  [66] = {
    [sym_arc] = STATE(108),
    [sym__dual_arc] = STATE(11),
    [sym_single_arc] = STATE(11),
    [sym__inline_expression_arc] = STATE(25),
    [sym_entity_identifier] = STATE(45),
    [sym__string] = STATE(13),
    [sym_entity_wildcard] = STATE(27),
    [aux_sym_arcs_repeat1] = STATE(66),
    [anon_sym_PIPE_PIPE_PIPE] = ACTIONS(227),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(227),
    [sym_comment_arc] = ACTIONS(230),
    [sym__identifier] = ACTIONS(233),
    [anon_sym_DQUOTE] = ACTIONS(236),
    [anon_sym_STAR] = ACTIONS(239),
    [anon_sym_DQUOTE_STAR_DQUOTE] = ACTIONS(239),
    [sym_comment] = ACTIONS(7),
  },
  [67] = {
    [sym_arc] = STATE(24),
    [sym__dual_arc] = STATE(11),
    [sym_single_arc] = STATE(11),
    [sym__inline_expression_arc] = STATE(25),
    [sym_entity_identifier] = STATE(45),
    [sym__string] = STATE(13),
    [sym_entity_wildcard] = STATE(27),
    [aux_sym_arcs_repeat1] = STATE(30),
    [aux_sym_arcs_repeat2] = STATE(67),
    [anon_sym_PIPE_PIPE_PIPE] = ACTIONS(242),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(242),
    [sym_comment_arc] = ACTIONS(245),
    [sym_curly_bracket_close] = ACTIONS(175),
    [sym__identifier] = ACTIONS(248),
    [anon_sym_DQUOTE] = ACTIONS(251),
    [anon_sym_STAR] = ACTIONS(254),
    [anon_sym_DQUOTE_STAR_DQUOTE] = ACTIONS(254),
    [sym_comment] = ACTIONS(7),
  },
  [68] = {
    [sym__number] = STATE(109),
    [sym__size] = STATE(109),
    [sym__integer] = ACTIONS(257),
    [sym__real] = ACTIONS(259),
    [anon_sym_auto] = ACTIONS(259),
    [sym_comment] = ACTIONS(7),
  },
  [69] = {
    [sym_comma] = ACTIONS(261),
    [sym_semicolon] = ACTIONS(261),
    [sym_comment] = ACTIONS(7),
  },
  [70] = {
    [sym_comma] = ACTIONS(263),
    [sym_semicolon] = ACTIONS(263),
    [sym_comment] = ACTIONS(7),
  },
  [71] = {
    [sym_comma] = ACTIONS(265),
    [sym_semicolon] = ACTIONS(265),
    [sym_comment] = ACTIONS(7),
  },
  [72] = {
    [sym_square_bracket_close] = ACTIONS(267),
    [sym_comma] = ACTIONS(267),
    [sym_semicolon] = ACTIONS(267),
    [sym_comment] = ACTIONS(7),
  },
  [73] = {
    [sym_equals] = ACTIONS(269),
    [sym_comment] = ACTIONS(7),
  },
  [74] = {
    [sym_equals] = ACTIONS(271),
    [sym_comment] = ACTIONS(7),
  },
  [75] = {
    [sym_square_bracket_close] = ACTIONS(273),
    [sym_comma] = ACTIONS(273),
    [sym_comment] = ACTIONS(7),
  },
  [76] = {
    [sym_equals] = ACTIONS(275),
    [sym_comment] = ACTIONS(7),
  },
  [77] = {
    [sym_curly_bracket_open] = ACTIONS(277),
    [sym_comma] = ACTIONS(277),
    [sym_semicolon] = ACTIONS(277),
    [sym_comment] = ACTIONS(7),
  },
  [78] = {
    [sym_square_bracket_close] = ACTIONS(279),
    [sym_comma] = ACTIONS(281),
    [sym_comment] = ACTIONS(7),
  },
  [79] = {
    [sym_square_bracket_close] = ACTIONS(283),
    [sym_comma] = ACTIONS(283),
    [sym_comment] = ACTIONS(7),
  },
  [80] = {
    [sym_equals] = ACTIONS(285),
    [sym_comment] = ACTIONS(7),
  },
  [81] = {
    [sym_equals] = ACTIONS(287),
    [sym_comment] = ACTIONS(7),
  },
  [82] = {
    [sym_arc_attribute] = STATE(115),
    [sym__string_arc_attribute] = STATE(79),
    [sym_string_arc_attribute_key] = STATE(80),
    [sym__boolean_arc_attribute] = STATE(79),
    [sym_boolean_arc_attribute_key] = STATE(81),
    [sym_value_only_arc_attribute_key] = STATE(79),
    [sym__number_arc_attribute] = STATE(79),
    [aux_sym_arc_attributes_repeat1] = STATE(116),
    [anon_sym_activation] = ACTIONS(123),
    [anon_sym_label] = ACTIONS(125),
    [anon_sym_idurl] = ACTIONS(125),
    [anon_sym_id] = ACTIONS(127),
    [anon_sym_url] = ACTIONS(125),
    [anon_sym_linecolor] = ACTIONS(125),
    [anon_sym_linecolour] = ACTIONS(125),
    [anon_sym_textcolor] = ACTIONS(125),
    [anon_sym_textcolour] = ACTIONS(125),
    [anon_sym_textbgcolor] = ACTIONS(125),
    [anon_sym_textbgcolour] = ACTIONS(125),
    [anon_sym_title] = ACTIONS(125),
    [anon_sym_activate] = ACTIONS(129),
    [anon_sym_deactivate] = ACTIONS(129),
    [sym_number_arc_attribute_key] = ACTIONS(131),
    [sym_comment] = ACTIONS(7),
  },
  [83] = {
    [anon_sym_DASH_GT] = ACTIONS(289),
    [anon_sym_EQ_GT] = ACTIONS(291),
    [anon_sym_COLON_GT] = ACTIONS(289),
    [anon_sym_EQ_GT_GT] = ACTIONS(289),
    [anon_sym_GT_GT] = ACTIONS(289),
    [anon_sym_DASHx] = ACTIONS(289),
    [anon_sym_DASHX] = ACTIONS(289),
    [anon_sym_LT_DASH] = ACTIONS(291),
    [anon_sym_LT_EQ] = ACTIONS(291),
    [anon_sym_LT_COLON] = ACTIONS(291),
    [anon_sym_LT_LT_EQ] = ACTIONS(291),
    [anon_sym_LT_LT] = ACTIONS(291),
    [anon_sym_x_DASH] = ACTIONS(289),
    [anon_sym_X_DASH] = ACTIONS(289),
    [anon_sym_LT_DASH_GT] = ACTIONS(289),
    [anon_sym_LT_EQ_GT] = ACTIONS(289),
    [anon_sym_LT_COLON_GT] = ACTIONS(289),
    [anon_sym_LT_LT_EQ_GT_GT] = ACTIONS(289),
    [anon_sym_LT_LT_GT_GT] = ACTIONS(289),
    [anon_sym_DASH_DASH] = ACTIONS(289),
    [anon_sym_EQ_EQ] = ACTIONS(289),
    [anon_sym_COLON_COLON] = ACTIONS(289),
    [anon_sym_DOT_DOT] = ACTIONS(289),
    [anon_sym_note] = ACTIONS(289),
    [anon_sym_abox] = ACTIONS(289),
    [anon_sym_rbox] = ACTIONS(289),
    [anon_sym_box] = ACTIONS(289),
    [anon_sym_alt] = ACTIONS(289),
    [anon_sym_else] = ACTIONS(289),
    [anon_sym_opt] = ACTIONS(289),
    [anon_sym_break] = ACTIONS(289),
    [anon_sym_par] = ACTIONS(289),
    [anon_sym_seq] = ACTIONS(289),
    [anon_sym_strict] = ACTIONS(289),
    [anon_sym_neg] = ACTIONS(289),
    [anon_sym_critical] = ACTIONS(289),
    [anon_sym_ignore] = ACTIONS(289),
    [anon_sym_consider] = ACTIONS(289),
    [anon_sym_assert] = ACTIONS(289),
    [anon_sym_loop] = ACTIONS(289),
    [anon_sym_ref] = ACTIONS(289),
    [anon_sym_exc] = ACTIONS(289),
    [sym_curly_bracket_open] = ACTIONS(289),
    [sym_square_bracket_open] = ACTIONS(289),
    [sym_square_bracket_close] = ACTIONS(289),
    [sym_comma] = ACTIONS(289),
    [sym_semicolon] = ACTIONS(289),
    [sym_comment] = ACTIONS(7),
  },
  [84] = {
    [aux_sym__string_repeat1] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(293),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(295),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(295),
    [sym_comment] = ACTIONS(59),
  },
  [85] = {
    [ts_builtin_sym_end] = ACTIONS(298),
    [sym_comment] = ACTIONS(7),
  },
  [86] = {
    [sym_curly_bracket_close] = ACTIONS(300),
    [sym_comment] = ACTIONS(7),
  },
  [87] = {
    [sym__number] = STATE(118),
    [sym__integer] = ACTIONS(302),
    [sym__real] = ACTIONS(304),
    [sym_comment] = ACTIONS(7),
  },
  [88] = {
    [sym_comma] = ACTIONS(306),
    [sym_semicolon] = ACTIONS(306),
    [sym_comment] = ACTIONS(7),
  },
  [89] = {
    [sym_square_bracket_close] = ACTIONS(308),
    [sym_comma] = ACTIONS(308),
    [sym_semicolon] = ACTIONS(308),
    [sym_comment] = ACTIONS(7),
  },
  [90] = {
    [sym__boolean] = STATE(119),
    [anon_sym_true] = ACTIONS(310),
    [anon_sym_false] = ACTIONS(310),
    [anon_sym_on] = ACTIONS(310),
    [anon_sym_off] = ACTIONS(310),
    [anon_sym_0] = ACTIONS(310),
    [anon_sym_1] = ACTIONS(310),
    [sym_comment] = ACTIONS(7),
  },
  [91] = {
    [sym_comma] = ACTIONS(312),
    [sym_semicolon] = ACTIONS(312),
    [sym_comment] = ACTIONS(7),
  },
  [92] = {
    [sym_square_bracket_close] = ACTIONS(314),
    [sym_comma] = ACTIONS(314),
    [sym_semicolon] = ACTIONS(314),
    [sym_comment] = ACTIONS(7),
  },
  [93] = {
    [sym_square_bracket_close] = ACTIONS(316),
    [sym_equals] = ACTIONS(316),
    [sym_comma] = ACTIONS(316),
    [sym_comment] = ACTIONS(7),
  },
  [94] = {
    [sym_equals] = ACTIONS(318),
    [sym_comment] = ACTIONS(7),
  },
  [95] = {
    [sym_comma] = ACTIONS(320),
    [sym_semicolon] = ACTIONS(320),
    [sym_comment] = ACTIONS(7),
  },
  [96] = {
    [sym_square_bracket_close] = ACTIONS(322),
    [sym_comma] = ACTIONS(324),
    [sym_comment] = ACTIONS(7),
  },
  [97] = {
    [sym_square_bracket_close] = ACTIONS(326),
    [sym_comma] = ACTIONS(326),
    [sym_comment] = ACTIONS(7),
  },
  [98] = {
    [sym_square_bracket_close] = ACTIONS(328),
    [sym_equals] = ACTIONS(330),
    [sym_comma] = ACTIONS(328),
    [sym_comment] = ACTIONS(7),
  },
  [99] = {
    [sym_equals] = ACTIONS(332),
    [sym_comment] = ACTIONS(7),
  },
  [100] = {
    [sym_entity_attribute] = STATE(124),
    [sym__boolean_entity_attribute] = STATE(97),
    [sym_boolean_entity_attribute_key] = STATE(98),
    [sym__string_entity_attribute] = STATE(97),
    [sym_string_entity_attribute_key] = STATE(99),
    [aux_sym_entity_attributes_repeat1] = STATE(125),
    [anon_sym_activation] = ACTIONS(193),
    [anon_sym_label] = ACTIONS(195),
    [anon_sym_idurl] = ACTIONS(195),
    [anon_sym_id] = ACTIONS(197),
    [anon_sym_url] = ACTIONS(195),
    [anon_sym_linecolor] = ACTIONS(195),
    [anon_sym_linecolour] = ACTIONS(195),
    [anon_sym_textcolor] = ACTIONS(195),
    [anon_sym_textcolour] = ACTIONS(195),
    [anon_sym_textbgcolor] = ACTIONS(195),
    [anon_sym_textbgcolour] = ACTIONS(195),
    [anon_sym_arclinecolor] = ACTIONS(195),
    [anon_sym_arclinecolour] = ACTIONS(195),
    [anon_sym_arctextcolor] = ACTIONS(195),
    [anon_sym_arctextcolour] = ACTIONS(195),
    [anon_sym_arctextbgcolor] = ACTIONS(195),
    [anon_sym_arctextbgcolour] = ACTIONS(195),
    [anon_sym_title] = ACTIONS(195),
    [sym_comment] = ACTIONS(7),
  },
  [101] = {
    [sym_square_bracket_open] = ACTIONS(334),
    [sym_comma] = ACTIONS(334),
    [sym_semicolon] = ACTIONS(334),
    [sym_comment] = ACTIONS(7),
  },
  [102] = {
    [sym_inline_expression] = STATE(127),
    [sym_arc_attributes] = STATE(128),
    [sym_curly_bracket_open] = ACTIONS(336),
    [sym_square_bracket_open] = ACTIONS(45),
    [sym_comment] = ACTIONS(7),
  },
  [103] = {
    [anon_sym_PIPE_PIPE_PIPE] = ACTIONS(338),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(338),
    [sym_comment_arc] = ACTIONS(338),
    [sym_curly_bracket_close] = ACTIONS(338),
    [sym__identifier] = ACTIONS(338),
    [anon_sym_DQUOTE] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(338),
    [anon_sym_DQUOTE_STAR_DQUOTE] = ACTIONS(338),
    [sym_comment] = ACTIONS(7),
  },
  [104] = {
    [sym_comma] = ACTIONS(69),
    [sym_comment] = ACTIONS(7),
  },
  [105] = {
    [anon_sym_PIPE_PIPE_PIPE] = ACTIONS(342),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(342),
    [sym_comment_arc] = ACTIONS(342),
    [sym_curly_bracket_close] = ACTIONS(342),
    [sym__identifier] = ACTIONS(342),
    [anon_sym_DQUOTE] = ACTIONS(344),
    [anon_sym_STAR] = ACTIONS(342),
    [anon_sym_DQUOTE_STAR_DQUOTE] = ACTIONS(342),
    [sym_comment] = ACTIONS(7),
  },
  [106] = {
    [sym_comma] = ACTIONS(79),
    [sym_comment] = ACTIONS(7),
  },
  [107] = {
    [anon_sym_PIPE_PIPE_PIPE] = ACTIONS(346),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(346),
    [sym_comment_arc] = ACTIONS(346),
    [sym_curly_bracket_close] = ACTIONS(346),
    [sym__identifier] = ACTIONS(346),
    [anon_sym_DQUOTE] = ACTIONS(348),
    [anon_sym_STAR] = ACTIONS(346),
    [anon_sym_DQUOTE_STAR_DQUOTE] = ACTIONS(346),
    [sym_comment] = ACTIONS(7),
  },
  [108] = {
    [sym_comma] = ACTIONS(83),
    [sym_comment] = ACTIONS(7),
  },
  [109] = {
    [anon_sym_DQUOTE] = ACTIONS(350),
    [sym_comment] = ACTIONS(7),
  },
  [110] = {
    [sym__numberlike] = STATE(130),
    [sym_number] = STATE(130),
    [sym__number] = STATE(89),
    [sym_numberlike_string] = STATE(130),
    [sym__integer] = ACTIONS(155),
    [sym__real] = ACTIONS(157),
    [anon_sym_DQUOTE] = ACTIONS(159),
    [sym_comment] = ACTIONS(7),
  },
  [111] = {
    [sym_curly_bracket_open] = ACTIONS(352),
    [sym_comma] = ACTIONS(352),
    [sym_semicolon] = ACTIONS(352),
    [sym_comment] = ACTIONS(7),
  },
  [112] = {
    [anon_sym_activation] = ACTIONS(354),
    [anon_sym_label] = ACTIONS(354),
    [anon_sym_idurl] = ACTIONS(354),
    [anon_sym_id] = ACTIONS(356),
    [anon_sym_url] = ACTIONS(354),
    [anon_sym_linecolor] = ACTIONS(354),
    [anon_sym_linecolour] = ACTIONS(354),
    [anon_sym_textcolor] = ACTIONS(354),
    [anon_sym_textcolour] = ACTIONS(354),
    [anon_sym_textbgcolor] = ACTIONS(354),
    [anon_sym_textbgcolour] = ACTIONS(354),
    [anon_sym_title] = ACTIONS(354),
    [anon_sym_activate] = ACTIONS(354),
    [anon_sym_deactivate] = ACTIONS(354),
    [sym_number_arc_attribute_key] = ACTIONS(354),
    [sym_comment] = ACTIONS(7),
  },
  [113] = {
    [sym_identifier] = STATE(132),
    [sym_string] = STATE(133),
    [sym__string] = STATE(72),
    [sym__identifier] = ACTIONS(358),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [sym_comment] = ACTIONS(7),
  },
  [114] = {
    [sym__booleanlike] = STATE(134),
    [sym_boolean] = STATE(134),
    [sym__boolean] = STATE(92),
    [sym_booleanlike_string] = STATE(134),
    [anon_sym_DQUOTE] = ACTIONS(161),
    [anon_sym_true] = ACTIONS(163),
    [anon_sym_false] = ACTIONS(163),
    [anon_sym_on] = ACTIONS(163),
    [anon_sym_off] = ACTIONS(163),
    [anon_sym_0] = ACTIONS(163),
    [anon_sym_1] = ACTIONS(163),
    [sym_comment] = ACTIONS(7),
  },
  [115] = {
    [sym_square_bracket_close] = ACTIONS(360),
    [sym_comma] = ACTIONS(281),
    [sym_comment] = ACTIONS(7),
  },
  [116] = {
    [sym_arc_attribute] = STATE(136),
    [sym__string_arc_attribute] = STATE(79),
    [sym_string_arc_attribute_key] = STATE(80),
    [sym__boolean_arc_attribute] = STATE(79),
    [sym_boolean_arc_attribute_key] = STATE(81),
    [sym_value_only_arc_attribute_key] = STATE(79),
    [sym__number_arc_attribute] = STATE(79),
    [aux_sym_arc_attributes_repeat1] = STATE(116),
    [anon_sym_activation] = ACTIONS(362),
    [anon_sym_label] = ACTIONS(365),
    [anon_sym_idurl] = ACTIONS(365),
    [anon_sym_id] = ACTIONS(368),
    [anon_sym_url] = ACTIONS(365),
    [anon_sym_linecolor] = ACTIONS(365),
    [anon_sym_linecolour] = ACTIONS(365),
    [anon_sym_textcolor] = ACTIONS(365),
    [anon_sym_textcolour] = ACTIONS(365),
    [anon_sym_textbgcolor] = ACTIONS(365),
    [anon_sym_textbgcolour] = ACTIONS(365),
    [anon_sym_title] = ACTIONS(365),
    [anon_sym_activate] = ACTIONS(371),
    [anon_sym_deactivate] = ACTIONS(371),
    [sym_number_arc_attribute_key] = ACTIONS(374),
    [sym_comment] = ACTIONS(7),
  },
  [117] = {
    [ts_builtin_sym_end] = ACTIONS(377),
    [sym_comment] = ACTIONS(7),
  },
  [118] = {
    [anon_sym_DQUOTE] = ACTIONS(379),
    [sym_comment] = ACTIONS(7),
  },
  [119] = {
    [anon_sym_DQUOTE] = ACTIONS(381),
    [sym_comment] = ACTIONS(7),
  },
  [120] = {
    [sym_comma] = ACTIONS(383),
    [sym_semicolon] = ACTIONS(383),
    [sym_comment] = ACTIONS(7),
  },
  [121] = {
    [anon_sym_activation] = ACTIONS(385),
    [anon_sym_label] = ACTIONS(385),
    [anon_sym_idurl] = ACTIONS(385),
    [anon_sym_id] = ACTIONS(387),
    [anon_sym_url] = ACTIONS(385),
    [anon_sym_linecolor] = ACTIONS(385),
    [anon_sym_linecolour] = ACTIONS(385),
    [anon_sym_textcolor] = ACTIONS(385),
    [anon_sym_textcolour] = ACTIONS(385),
    [anon_sym_textbgcolor] = ACTIONS(385),
    [anon_sym_textbgcolour] = ACTIONS(385),
    [anon_sym_arclinecolor] = ACTIONS(385),
    [anon_sym_arclinecolour] = ACTIONS(385),
    [anon_sym_arctextcolor] = ACTIONS(385),
    [anon_sym_arctextcolour] = ACTIONS(385),
    [anon_sym_arctextbgcolor] = ACTIONS(385),
    [anon_sym_arctextbgcolour] = ACTIONS(385),
    [anon_sym_title] = ACTIONS(385),
    [sym_comment] = ACTIONS(7),
  },
  [122] = {
    [sym__booleanlike] = STATE(139),
    [sym_boolean] = STATE(139),
    [sym__boolean] = STATE(92),
    [sym_booleanlike_string] = STATE(139),
    [anon_sym_DQUOTE] = ACTIONS(161),
    [anon_sym_true] = ACTIONS(163),
    [anon_sym_false] = ACTIONS(163),
    [anon_sym_on] = ACTIONS(163),
    [anon_sym_off] = ACTIONS(163),
    [anon_sym_0] = ACTIONS(163),
    [anon_sym_1] = ACTIONS(163),
    [sym_comment] = ACTIONS(7),
  },
  [123] = {
    [sym_identifier] = STATE(140),
    [sym_string] = STATE(141),
    [sym__string] = STATE(72),
    [sym__identifier] = ACTIONS(358),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [sym_comment] = ACTIONS(7),
  },
  [124] = {
    [sym_square_bracket_close] = ACTIONS(389),
    [sym_comma] = ACTIONS(324),
    [sym_comment] = ACTIONS(7),
  },
  [125] = {
    [sym_entity_attribute] = STATE(143),
    [sym__boolean_entity_attribute] = STATE(97),
    [sym_boolean_entity_attribute_key] = STATE(98),
    [sym__string_entity_attribute] = STATE(97),
    [sym_string_entity_attribute_key] = STATE(99),
    [aux_sym_entity_attributes_repeat1] = STATE(125),
    [anon_sym_activation] = ACTIONS(391),
    [anon_sym_label] = ACTIONS(394),
    [anon_sym_idurl] = ACTIONS(394),
    [anon_sym_id] = ACTIONS(397),
    [anon_sym_url] = ACTIONS(394),
    [anon_sym_linecolor] = ACTIONS(394),
    [anon_sym_linecolour] = ACTIONS(394),
    [anon_sym_textcolor] = ACTIONS(394),
    [anon_sym_textcolour] = ACTIONS(394),
    [anon_sym_textbgcolor] = ACTIONS(394),
    [anon_sym_textbgcolour] = ACTIONS(394),
    [anon_sym_arclinecolor] = ACTIONS(394),
    [anon_sym_arclinecolour] = ACTIONS(394),
    [anon_sym_arctextcolor] = ACTIONS(394),
    [anon_sym_arctextcolour] = ACTIONS(394),
    [anon_sym_arctextbgcolor] = ACTIONS(394),
    [anon_sym_arctextbgcolour] = ACTIONS(394),
    [anon_sym_title] = ACTIONS(394),
    [sym_comment] = ACTIONS(7),
  },
  [126] = {
    [sym_arcs] = STATE(145),
    [sym_arc] = STATE(24),
    [sym__dual_arc] = STATE(11),
    [sym_single_arc] = STATE(11),
    [sym__inline_expression_arc] = STATE(25),
    [sym_entity_identifier] = STATE(45),
    [sym__string] = STATE(13),
    [sym_entity_wildcard] = STATE(27),
    [aux_sym_arcs_repeat1] = STATE(30),
    [aux_sym_arcs_repeat2] = STATE(31),
    [anon_sym_PIPE_PIPE_PIPE] = ACTIONS(23),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(23),
    [sym_comment_arc] = ACTIONS(25),
    [sym_curly_bracket_close] = ACTIONS(400),
    [sym__identifier] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_DQUOTE_STAR_DQUOTE] = ACTIONS(33),
    [sym_comment] = ACTIONS(7),
  },
  [127] = {
    [sym_comma] = ACTIONS(402),
    [sym_semicolon] = ACTIONS(402),
    [sym_comment] = ACTIONS(7),
  },
  [128] = {
    [sym_inline_expression] = STATE(146),
    [sym_curly_bracket_open] = ACTIONS(336),
    [sym_comment] = ACTIONS(7),
  },
  [129] = {
    [sym_comma] = ACTIONS(404),
    [sym_semicolon] = ACTIONS(404),
    [sym_comment] = ACTIONS(7),
  },
  [130] = {
    [sym_square_bracket_close] = ACTIONS(406),
    [sym_comma] = ACTIONS(406),
    [sym_comment] = ACTIONS(7),
  },
  [131] = {
    [sym_square_bracket_close] = ACTIONS(408),
    [sym_comma] = ACTIONS(408),
    [sym_comment] = ACTIONS(7),
  },
  [132] = {
    [sym_square_bracket_close] = ACTIONS(410),
    [sym_comma] = ACTIONS(410),
    [sym_comment] = ACTIONS(7),
  },
  [133] = {
    [sym_square_bracket_close] = ACTIONS(412),
    [sym_comma] = ACTIONS(412),
    [sym_comment] = ACTIONS(7),
  },
  [134] = {
    [sym_square_bracket_close] = ACTIONS(414),
    [sym_comma] = ACTIONS(414),
    [sym_comment] = ACTIONS(7),
  },
  [135] = {
    [sym_curly_bracket_open] = ACTIONS(416),
    [sym_comma] = ACTIONS(416),
    [sym_semicolon] = ACTIONS(416),
    [sym_comment] = ACTIONS(7),
  },
  [136] = {
    [sym_comma] = ACTIONS(281),
    [sym_comment] = ACTIONS(7),
  },
  [137] = {
    [sym_square_bracket_close] = ACTIONS(418),
    [sym_comma] = ACTIONS(418),
    [sym_semicolon] = ACTIONS(418),
    [sym_comment] = ACTIONS(7),
  },
  [138] = {
    [sym_square_bracket_close] = ACTIONS(420),
    [sym_comma] = ACTIONS(420),
    [sym_semicolon] = ACTIONS(420),
    [sym_comment] = ACTIONS(7),
  },
  [139] = {
    [sym_square_bracket_close] = ACTIONS(422),
    [sym_comma] = ACTIONS(422),
    [sym_comment] = ACTIONS(7),
  },
  [140] = {
    [sym_square_bracket_close] = ACTIONS(424),
    [sym_comma] = ACTIONS(424),
    [sym_comment] = ACTIONS(7),
  },
  [141] = {
    [sym_square_bracket_close] = ACTIONS(426),
    [sym_comma] = ACTIONS(426),
    [sym_comment] = ACTIONS(7),
  },
  [142] = {
    [sym_comma] = ACTIONS(428),
    [sym_semicolon] = ACTIONS(428),
    [sym_comment] = ACTIONS(7),
  },
  [143] = {
    [sym_comma] = ACTIONS(324),
    [sym_comment] = ACTIONS(7),
  },
  [144] = {
    [sym_comma] = ACTIONS(430),
    [sym_semicolon] = ACTIONS(430),
    [sym_comment] = ACTIONS(7),
  },
  [145] = {
    [sym_curly_bracket_close] = ACTIONS(432),
    [sym_comment] = ACTIONS(7),
  },
  [146] = {
    [sym_comma] = ACTIONS(434),
    [sym_semicolon] = ACTIONS(434),
    [sym_comment] = ACTIONS(7),
  },
  [147] = {
    [sym_comma] = ACTIONS(436),
    [sym_semicolon] = ACTIONS(436),
    [sym_comment] = ACTIONS(7),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [9] = {.count = 1, .reusable = true}, REDUCE(sym_start_token, 1),
  [11] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [13] = {.count = 1, .reusable = true}, SHIFT(5),
  [15] = {.count = 1, .reusable = false}, SHIFT(6),
  [17] = {.count = 1, .reusable = false}, SHIFT(7),
  [19] = {.count = 1, .reusable = false}, SHIFT(8),
  [21] = {.count = 1, .reusable = false}, SHIFT(9),
  [23] = {.count = 1, .reusable = true}, SHIFT(10),
  [25] = {.count = 1, .reusable = true}, SHIFT(11),
  [27] = {.count = 1, .reusable = true}, SHIFT(12),
  [29] = {.count = 1, .reusable = false}, SHIFT(13),
  [31] = {.count = 1, .reusable = false}, SHIFT(14),
  [33] = {.count = 1, .reusable = true}, SHIFT(15),
  [35] = {.count = 1, .reusable = true}, REDUCE(sym_numerical_option_key, 1),
  [37] = {.count = 1, .reusable = true}, SHIFT(32),
  [39] = {.count = 1, .reusable = true}, SHIFT(33),
  [41] = {.count = 1, .reusable = true}, REDUCE(sym_boolean_option_key, 1),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym_single_arc, 1),
  [45] = {.count = 1, .reusable = true}, SHIFT(34),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_arc, 1),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym_sequence_chart, 3),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_entity_identifier, 1),
  [53] = {.count = 1, .reusable = false}, REDUCE(sym_entity_identifier, 1),
  [55] = {.count = 1, .reusable = false}, SHIFT(36),
  [57] = {.count = 1, .reusable = false}, SHIFT(37),
  [59] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym_entity_wildcard, 1),
  [63] = {.count = 1, .reusable = false}, REDUCE(sym_entity_wildcard, 1),
  [65] = {.count = 1, .reusable = true}, SHIFT(38),
  [67] = {.count = 1, .reusable = true}, SHIFT(13),
  [69] = {.count = 1, .reusable = true}, SHIFT(41),
  [71] = {.count = 1, .reusable = true}, SHIFT(42),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_option, 1),
  [75] = {.count = 1, .reusable = true}, SHIFT(43),
  [77] = {.count = 1, .reusable = true}, SHIFT(44),
  [79] = {.count = 1, .reusable = true}, SHIFT(46),
  [81] = {.count = 1, .reusable = true}, SHIFT(47),
  [83] = {.count = 1, .reusable = true}, SHIFT(48),
  [85] = {.count = 1, .reusable = true}, SHIFT(49),
  [87] = {.count = 1, .reusable = true}, SHIFT(50),
  [89] = {.count = 1, .reusable = false}, SHIFT(50),
  [91] = {.count = 1, .reusable = false}, SHIFT(51),
  [93] = {.count = 1, .reusable = true}, SHIFT(51),
  [95] = {.count = 1, .reusable = true}, SHIFT(52),
  [97] = {.count = 1, .reusable = true}, SHIFT(53),
  [99] = {.count = 1, .reusable = true}, SHIFT(54),
  [101] = {.count = 1, .reusable = true}, SHIFT(55),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym_entity, 1),
  [105] = {.count = 1, .reusable = true}, SHIFT(6),
  [107] = {.count = 1, .reusable = true}, SHIFT(7),
  [109] = {.count = 1, .reusable = true}, SHIFT(8),
  [111] = {.count = 1, .reusable = true}, SHIFT(9),
  [113] = {.count = 1, .reusable = true}, SHIFT(14),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym_arcs, 1),
  [117] = {.count = 1, .reusable = false}, SHIFT(70),
  [119] = {.count = 1, .reusable = true}, SHIFT(70),
  [121] = {.count = 1, .reusable = true}, SHIFT(68),
  [123] = {.count = 1, .reusable = true}, SHIFT(73),
  [125] = {.count = 1, .reusable = true}, SHIFT(74),
  [127] = {.count = 1, .reusable = false}, SHIFT(74),
  [129] = {.count = 1, .reusable = true}, SHIFT(75),
  [131] = {.count = 1, .reusable = true}, SHIFT(76),
  [133] = {.count = 1, .reusable = true}, SHIFT(77),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym_arc, 2),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym__string, 2),
  [139] = {.count = 1, .reusable = false}, REDUCE(sym__string, 2),
  [141] = {.count = 1, .reusable = false}, SHIFT(83),
  [143] = {.count = 1, .reusable = false}, SHIFT(84),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym_sequence_chart, 4),
  [147] = {.count = 1, .reusable = true}, SHIFT(85),
  [149] = {.count = 1, .reusable = true}, REDUCE(aux_sym_options_repeat1, 2),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym_options, 2),
  [153] = {.count = 1, .reusable = false}, REDUCE(sym_options, 2),
  [155] = {.count = 1, .reusable = false}, SHIFT(89),
  [157] = {.count = 1, .reusable = true}, SHIFT(89),
  [159] = {.count = 1, .reusable = true}, SHIFT(87),
  [161] = {.count = 1, .reusable = true}, SHIFT(90),
  [163] = {.count = 1, .reusable = true}, SHIFT(92),
  [165] = {.count = 1, .reusable = true}, REDUCE(aux_sym_entities_repeat1, 2),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym_entities, 2),
  [169] = {.count = 1, .reusable = false}, REDUCE(sym_entities, 2),
  [171] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arcs_repeat1, 2),
  [173] = {.count = 1, .reusable = false}, REDUCE(aux_sym_arcs_repeat1, 2),
  [175] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arcs_repeat2, 2),
  [177] = {.count = 1, .reusable = false}, REDUCE(aux_sym_arcs_repeat2, 2),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym_forward_arrow, 1),
  [181] = {.count = 1, .reusable = false}, REDUCE(sym_forward_arrow, 1),
  [183] = {.count = 1, .reusable = true}, REDUCE(sym_backward_arrow, 1),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_bidirectional_arrow, 1),
  [187] = {.count = 1, .reusable = false}, REDUCE(sym_bidirectional_arrow, 1),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym_box, 1),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym_inline_expression_token, 1),
  [193] = {.count = 1, .reusable = true}, SHIFT(93),
  [195] = {.count = 1, .reusable = true}, SHIFT(94),
  [197] = {.count = 1, .reusable = false}, SHIFT(94),
  [199] = {.count = 1, .reusable = true}, SHIFT(95),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym_entity, 2),
  [203] = {.count = 1, .reusable = true}, SHIFT(103),
  [205] = {.count = 2, .reusable = true}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(6),
  [208] = {.count = 2, .reusable = true}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(7),
  [211] = {.count = 2, .reusable = true}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(8),
  [214] = {.count = 2, .reusable = true}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(9),
  [217] = {.count = 1, .reusable = true}, SHIFT(105),
  [219] = {.count = 2, .reusable = true}, REDUCE(aux_sym_entities_repeat1, 2), SHIFT_REPEAT(13),
  [222] = {.count = 2, .reusable = true}, REDUCE(aux_sym_entities_repeat1, 2), SHIFT_REPEAT(14),
  [225] = {.count = 1, .reusable = true}, SHIFT(107),
  [227] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arcs_repeat1, 2), SHIFT_REPEAT(10),
  [230] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arcs_repeat1, 2), SHIFT_REPEAT(11),
  [233] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arcs_repeat1, 2), SHIFT_REPEAT(13),
  [236] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arcs_repeat1, 2), SHIFT_REPEAT(14),
  [239] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arcs_repeat1, 2), SHIFT_REPEAT(15),
  [242] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arcs_repeat2, 2), SHIFT_REPEAT(10),
  [245] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arcs_repeat2, 2), SHIFT_REPEAT(11),
  [248] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arcs_repeat2, 2), SHIFT_REPEAT(13),
  [251] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arcs_repeat2, 2), SHIFT_REPEAT(14),
  [254] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arcs_repeat2, 2), SHIFT_REPEAT(15),
  [257] = {.count = 1, .reusable = false}, SHIFT(109),
  [259] = {.count = 1, .reusable = true}, SHIFT(109),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym__size_option, 3),
  [263] = {.count = 1, .reusable = true}, REDUCE(sym_size, 1),
  [265] = {.count = 1, .reusable = true}, REDUCE(sym__string_option, 3),
  [267] = {.count = 1, .reusable = true}, REDUCE(sym_string, 1),
  [269] = {.count = 1, .reusable = true}, REDUCE(sym_boolean_arc_attribute_key, 1),
  [271] = {.count = 1, .reusable = true}, REDUCE(sym_string_arc_attribute_key, 1),
  [273] = {.count = 1, .reusable = true}, REDUCE(sym_value_only_arc_attribute_key, 1),
  [275] = {.count = 1, .reusable = true}, SHIFT(110),
  [277] = {.count = 1, .reusable = true}, REDUCE(sym_arc_attributes, 2),
  [279] = {.count = 1, .reusable = true}, SHIFT(111),
  [281] = {.count = 1, .reusable = true}, SHIFT(112),
  [283] = {.count = 1, .reusable = true}, REDUCE(sym_arc_attribute, 1),
  [285] = {.count = 1, .reusable = true}, SHIFT(113),
  [287] = {.count = 1, .reusable = true}, SHIFT(114),
  [289] = {.count = 1, .reusable = true}, REDUCE(sym__string, 3),
  [291] = {.count = 1, .reusable = false}, REDUCE(sym__string, 3),
  [293] = {.count = 1, .reusable = false}, REDUCE(aux_sym__string_repeat1, 2),
  [295] = {.count = 2, .reusable = false}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(84),
  [298] = {.count = 1, .reusable = true}, REDUCE(sym_sequence_chart, 5),
  [300] = {.count = 1, .reusable = true}, SHIFT(117),
  [302] = {.count = 1, .reusable = false}, SHIFT(118),
  [304] = {.count = 1, .reusable = true}, SHIFT(118),
  [306] = {.count = 1, .reusable = true}, REDUCE(sym__numerical_option, 3),
  [308] = {.count = 1, .reusable = true}, REDUCE(sym_number, 1),
  [310] = {.count = 1, .reusable = true}, SHIFT(119),
  [312] = {.count = 1, .reusable = true}, REDUCE(sym__boolean_option, 3),
  [314] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 1),
  [316] = {.count = 1, .reusable = true}, REDUCE(sym_boolean_entity_attribute_key, 1),
  [318] = {.count = 1, .reusable = true}, REDUCE(sym_string_entity_attribute_key, 1),
  [320] = {.count = 1, .reusable = true}, REDUCE(sym_entity_attributes, 2),
  [322] = {.count = 1, .reusable = true}, SHIFT(120),
  [324] = {.count = 1, .reusable = true}, SHIFT(121),
  [326] = {.count = 1, .reusable = true}, REDUCE(sym_entity_attribute, 1),
  [328] = {.count = 1, .reusable = true}, REDUCE(sym__boolean_entity_attribute, 1),
  [330] = {.count = 1, .reusable = true}, SHIFT(122),
  [332] = {.count = 1, .reusable = true}, SHIFT(123),
  [334] = {.count = 1, .reusable = true}, REDUCE(sym__dual_arc, 3),
  [336] = {.count = 1, .reusable = true}, SHIFT(126),
  [338] = {.count = 1, .reusable = true}, REDUCE(sym_options, 3),
  [340] = {.count = 1, .reusable = false}, REDUCE(sym_options, 3),
  [342] = {.count = 1, .reusable = true}, REDUCE(sym_entities, 3),
  [344] = {.count = 1, .reusable = false}, REDUCE(sym_entities, 3),
  [346] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arcs_repeat2, 3),
  [348] = {.count = 1, .reusable = false}, REDUCE(aux_sym_arcs_repeat2, 3),
  [350] = {.count = 1, .reusable = true}, SHIFT(129),
  [352] = {.count = 1, .reusable = true}, REDUCE(sym_arc_attributes, 3),
  [354] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arc_attributes_repeat1, 2),
  [356] = {.count = 1, .reusable = false}, REDUCE(aux_sym_arc_attributes_repeat1, 2),
  [358] = {.count = 1, .reusable = true}, SHIFT(131),
  [360] = {.count = 1, .reusable = true}, SHIFT(135),
  [362] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arc_attributes_repeat1, 2), SHIFT_REPEAT(73),
  [365] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arc_attributes_repeat1, 2), SHIFT_REPEAT(74),
  [368] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arc_attributes_repeat1, 2), SHIFT_REPEAT(74),
  [371] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arc_attributes_repeat1, 2), SHIFT_REPEAT(75),
  [374] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arc_attributes_repeat1, 2), SHIFT_REPEAT(76),
  [377] = {.count = 1, .reusable = true}, REDUCE(sym_sequence_chart, 6),
  [379] = {.count = 1, .reusable = true}, SHIFT(137),
  [381] = {.count = 1, .reusable = true}, SHIFT(138),
  [383] = {.count = 1, .reusable = true}, REDUCE(sym_entity_attributes, 3),
  [385] = {.count = 1, .reusable = true}, REDUCE(aux_sym_entity_attributes_repeat1, 2),
  [387] = {.count = 1, .reusable = false}, REDUCE(aux_sym_entity_attributes_repeat1, 2),
  [389] = {.count = 1, .reusable = true}, SHIFT(142),
  [391] = {.count = 2, .reusable = true}, REDUCE(aux_sym_entity_attributes_repeat1, 2), SHIFT_REPEAT(93),
  [394] = {.count = 2, .reusable = true}, REDUCE(aux_sym_entity_attributes_repeat1, 2), SHIFT_REPEAT(94),
  [397] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entity_attributes_repeat1, 2), SHIFT_REPEAT(94),
  [400] = {.count = 1, .reusable = true}, SHIFT(144),
  [402] = {.count = 1, .reusable = true}, REDUCE(sym__inline_expression_arc, 4),
  [404] = {.count = 1, .reusable = true}, REDUCE(sym_sizelike_string, 3),
  [406] = {.count = 1, .reusable = true}, REDUCE(sym__number_arc_attribute, 3),
  [408] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 1),
  [410] = {.count = 1, .reusable = true}, REDUCE(sym__string_arc_attribute, 3, .alias_sequence_id = 1),
  [412] = {.count = 1, .reusable = true}, REDUCE(sym__string_arc_attribute, 3),
  [414] = {.count = 1, .reusable = true}, REDUCE(sym__boolean_arc_attribute, 3),
  [416] = {.count = 1, .reusable = true}, REDUCE(sym_arc_attributes, 4),
  [418] = {.count = 1, .reusable = true}, REDUCE(sym_numberlike_string, 3),
  [420] = {.count = 1, .reusable = true}, REDUCE(sym_booleanlike_string, 3),
  [422] = {.count = 1, .reusable = true}, REDUCE(sym__boolean_entity_attribute, 3),
  [424] = {.count = 1, .reusable = true}, REDUCE(sym__string_entity_attribute, 3, .alias_sequence_id = 2),
  [426] = {.count = 1, .reusable = true}, REDUCE(sym__string_entity_attribute, 3),
  [428] = {.count = 1, .reusable = true}, REDUCE(sym_entity_attributes, 4),
  [430] = {.count = 1, .reusable = true}, REDUCE(sym_inline_expression, 2),
  [432] = {.count = 1, .reusable = true}, SHIFT(147),
  [434] = {.count = 1, .reusable = true}, REDUCE(sym__inline_expression_arc, 5),
  [436] = {.count = 1, .reusable = true}, REDUCE(sym_inline_expression, 3),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_mscgen() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
