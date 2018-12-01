#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 118
#define SYMBOL_COUNT 146
#define ALIAS_COUNT 0
#define TOKEN_COUNT 96
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_hscale = 1,
  anon_sym_arcgradient = 2,
  sym_size_option_key = 3,
  sym_string_option_key = 4,
  anon_sym_wordwraparcs = 5,
  anon_sym_wordwrapentities = 6,
  anon_sym_wordwrapboxes = 7,
  sym_boolean_entity_attribute_key = 8,
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
  anon_sym_msc = 71,
  anon_sym_xu = 72,
  sym_curly_bracket_open = 73,
  sym_curly_bracket_close = 74,
  sym_square_bracket_open = 75,
  sym_square_bracket_close = 76,
  sym_equals = 77,
  sym_comma = 78,
  sym_colon = 79,
  sym_semicolon = 80,
  sym__dot = 81,
  sym__identifier = 82,
  sym__cardinal = 83,
  anon_sym_DQUOTE = 84,
  anon_sym_auto = 85,
  anon_sym_true = 86,
  anon_sym_false = 87,
  anon_sym_on = 88,
  anon_sym_off = 89,
  anon_sym_0 = 90,
  anon_sym_1 = 91,
  aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH = 92,
  anon_sym_STAR = 93,
  anon_sym_DQUOTE_STAR_DQUOTE = 94,
  sym_comment = 95,
  sym_sequence_chart = 96,
  sym_options = 97,
  sym_option = 98,
  sym__numerical_option = 99,
  sym_numerical_option_key = 100,
  sym__size_option = 101,
  sym__string_option = 102,
  sym__boolean_option = 103,
  sym_boolean_option_key = 104,
  sym_entities = 105,
  sym_entity = 106,
  sym_entity_attributes = 107,
  sym_entity_attribute = 108,
  sym__boolean_entity_attribute = 109,
  sym__string_entity_attribute = 110,
  sym_string_entity_attribute_key = 111,
  sym_arcs = 112,
  sym_arc = 113,
  sym__dual_arc = 114,
  sym_forward_arrow = 115,
  sym_backward_arrow = 116,
  sym_bidirectional_arrow = 117,
  sym_box = 118,
  sym_single_arc = 119,
  sym__inline_expression_arc = 120,
  sym_inline_expression_token = 121,
  sym_inline_expression = 122,
  sym_start_token = 123,
  sym_entity_identifier = 124,
  sym__numberlike = 125,
  sym_number = 126,
  sym__number = 127,
  sym__real = 128,
  sym_numberlike_string = 129,
  sym__sizelike = 130,
  sym_size = 131,
  sym__size = 132,
  sym_sizelike_string = 133,
  sym__booleanlike = 134,
  sym_boolean = 135,
  sym__boolean = 136,
  sym_booleanlike_string = 137,
  sym_string = 138,
  sym__quoted_string = 139,
  sym_entity_wildcard = 140,
  aux_sym_options_repeat1 = 141,
  aux_sym_entities_repeat1 = 142,
  aux_sym_entity_attributes_repeat1 = 143,
  aux_sym_arcs_repeat1 = 144,
  aux_sym_arcs_repeat2 = 145,
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
  [sym_boolean_entity_attribute_key] = "boolean_entity_attribute_key",
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
  [sym__cardinal] = "_cardinal",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_auto] = "auto",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_on] = "on",
  [anon_sym_off] = "off",
  [anon_sym_0] = "0",
  [anon_sym_1] = "1",
  [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH] = "/[^\"]*/",
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
  [sym_start_token] = "start_token",
  [sym_entity_identifier] = "entity_identifier",
  [sym__numberlike] = "_numberlike",
  [sym_number] = "number",
  [sym__number] = "_number",
  [sym__real] = "_real",
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
  [sym__quoted_string] = "_quoted_string",
  [sym_entity_wildcard] = "entity_wildcard",
  [aux_sym_options_repeat1] = "options_repeat1",
  [aux_sym_entities_repeat1] = "entities_repeat1",
  [aux_sym_entity_attributes_repeat1] = "entity_attributes_repeat1",
  [aux_sym_arcs_repeat1] = "arcs_repeat1",
  [aux_sym_arcs_repeat2] = "arcs_repeat2",
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
  [sym_boolean_entity_attribute_key] = {
    .visible = true,
    .named = true,
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
  [sym__cardinal] = {
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
  [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH] = {
    .visible = false,
    .named = false,
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
  [sym_start_token] = {
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
  [sym__real] = {
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
  [sym__quoted_string] = {
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
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(17);
      if (lookahead == '0')
        ADVANCE(21);
      if (lookahead == '1')
        ADVANCE(23);
      if (lookahead == ':')
        ADVANCE(24);
      if (lookahead == ';')
        ADVANCE(27);
      if (lookahead == '<')
        ADVANCE(28);
      if (lookahead == '=')
        ADVANCE(41);
      if (lookahead == '>')
        ADVANCE(45);
      if (lookahead == 'X')
        ADVANCE(47);
      if (lookahead == '[')
        ADVANCE(49);
      if (lookahead == ']')
        ADVANCE(50);
      if (lookahead == 'a')
        ADVANCE(51);
      if (lookahead == 'b')
        ADVANCE(115);
      if (lookahead == 'c')
        ADVANCE(122);
      if (lookahead == 'e')
        ADVANCE(137);
      if (lookahead == 'f')
        ADVANCE(143);
      if (lookahead == 'h')
        ADVANCE(148);
      if (lookahead == 'i')
        ADVANCE(154);
      if (lookahead == 'l')
        ADVANCE(164);
      if (lookahead == 'm')
        ADVANCE(182);
      if (lookahead == 'n')
        ADVANCE(185);
      if (lookahead == 'o')
        ADVANCE(191);
      if (lookahead == 'p')
        ADVANCE(197);
      if (lookahead == 'r')
        ADVANCE(200);
      if (lookahead == 's')
        ADVANCE(206);
      if (lookahead == 't')
        ADVANCE(214);
      if (lookahead == 'u')
        ADVANCE(241);
      if (lookahead == 'w')
        ADVANCE(244);
      if (lookahead == 'x')
        ADVANCE(281);
      if (lookahead == '{')
        ADVANCE(284);
      if (lookahead == '|')
        ADVANCE(285);
      if (lookahead == '}')
        ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('2' <= lookahead && lookahead <= '9'))
        ADVANCE(22);
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
      ACCEPT_TOKEN(sym__dot);
      if (lookahead == '.')
        ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.')
        ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 17:
      if (lookahead == '*')
        ADVANCE(18);
      if (lookahead == '/')
        ADVANCE(5);
      END_STATE();
    case 18:
      if (lookahead == '*')
        ADVANCE(19);
      if (lookahead != 0)
        ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '*')
        ADVANCE(19);
      if (lookahead == '/')
        ADVANCE(20);
      if (lookahead != 0)
        ADVANCE(18);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__cardinal);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_1);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(22);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_colon);
      if (lookahead == ':')
        ADVANCE(25);
      if (lookahead == '>')
        ADVANCE(26);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_COLON_GT);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_semicolon);
      END_STATE();
    case 28:
      if (lookahead == '-')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(39);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      if (lookahead == '>')
        ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LT_DASH_GT);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      if (lookahead == '>')
        ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LT_COLON_GT);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=')
        ADVANCE(34);
      if (lookahead == '>')
        ADVANCE(37);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      if (lookahead == '>')
        ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == '>')
        ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ_GT_GT);
      END_STATE();
    case 37:
      if (lookahead == '>')
        ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LT_LT_GT_GT);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead == '>')
        ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_equals);
      if (lookahead == '=')
        ADVANCE(42);
      if (lookahead == '>')
        ADVANCE(43);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      if (lookahead == '>')
        ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_EQ_GT_GT);
      END_STATE();
    case 45:
      if (lookahead == '>')
        ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 47:
      if (lookahead == '-')
        ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_X_DASH);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_square_bracket_open);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_square_bracket_close);
      END_STATE();
    case 51:
      if (lookahead == 'b')
        ADVANCE(52);
      if (lookahead == 'c')
        ADVANCE(55);
      if (lookahead == 'l')
        ADVANCE(64);
      if (lookahead == 'r')
        ADVANCE(66);
      if (lookahead == 's')
        ADVANCE(107);
      if (lookahead == 'u')
        ADVANCE(112);
      END_STATE();
    case 52:
      if (lookahead == 'o')
        ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == 'x')
        ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_abox);
      END_STATE();
    case 55:
      if (lookahead == 't')
        ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == 'i')
        ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == 'v')
        ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == 'a')
        ADVANCE(59);
      END_STATE();
    case 59:
      if (lookahead == 't')
        ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == 'i')
        ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == 'o')
        ADVANCE(62);
      END_STATE();
    case 62:
      if (lookahead == 'n')
        ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_boolean_entity_attribute_key);
      END_STATE();
    case 64:
      if (lookahead == 't')
        ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_alt);
      END_STATE();
    case 66:
      if (lookahead == 'c')
        ADVANCE(67);
      END_STATE();
    case 67:
      if (lookahead == 'g')
        ADVANCE(68);
      if (lookahead == 'l')
        ADVANCE(76);
      if (lookahead == 't')
        ADVANCE(87);
      END_STATE();
    case 68:
      if (lookahead == 'r')
        ADVANCE(69);
      END_STATE();
    case 69:
      if (lookahead == 'a')
        ADVANCE(70);
      END_STATE();
    case 70:
      if (lookahead == 'd')
        ADVANCE(71);
      END_STATE();
    case 71:
      if (lookahead == 'i')
        ADVANCE(72);
      END_STATE();
    case 72:
      if (lookahead == 'e')
        ADVANCE(73);
      END_STATE();
    case 73:
      if (lookahead == 'n')
        ADVANCE(74);
      END_STATE();
    case 74:
      if (lookahead == 't')
        ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_arcgradient);
      END_STATE();
    case 76:
      if (lookahead == 'i')
        ADVANCE(77);
      END_STATE();
    case 77:
      if (lookahead == 'n')
        ADVANCE(78);
      END_STATE();
    case 78:
      if (lookahead == 'e')
        ADVANCE(79);
      END_STATE();
    case 79:
      if (lookahead == 'c')
        ADVANCE(80);
      END_STATE();
    case 80:
      if (lookahead == 'o')
        ADVANCE(81);
      END_STATE();
    case 81:
      if (lookahead == 'l')
        ADVANCE(82);
      END_STATE();
    case 82:
      if (lookahead == 'o')
        ADVANCE(83);
      END_STATE();
    case 83:
      if (lookahead == 'r')
        ADVANCE(84);
      if (lookahead == 'u')
        ADVANCE(85);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_arclinecolor);
      END_STATE();
    case 85:
      if (lookahead == 'r')
        ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_arclinecolour);
      END_STATE();
    case 87:
      if (lookahead == 'e')
        ADVANCE(88);
      END_STATE();
    case 88:
      if (lookahead == 'x')
        ADVANCE(89);
      END_STATE();
    case 89:
      if (lookahead == 't')
        ADVANCE(90);
      END_STATE();
    case 90:
      if (lookahead == 'b')
        ADVANCE(91);
      if (lookahead == 'c')
        ADVANCE(100);
      END_STATE();
    case 91:
      if (lookahead == 'g')
        ADVANCE(92);
      END_STATE();
    case 92:
      if (lookahead == 'c')
        ADVANCE(93);
      END_STATE();
    case 93:
      if (lookahead == 'o')
        ADVANCE(94);
      END_STATE();
    case 94:
      if (lookahead == 'l')
        ADVANCE(95);
      END_STATE();
    case 95:
      if (lookahead == 'o')
        ADVANCE(96);
      END_STATE();
    case 96:
      if (lookahead == 'r')
        ADVANCE(97);
      if (lookahead == 'u')
        ADVANCE(98);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_arctextbgcolor);
      END_STATE();
    case 98:
      if (lookahead == 'r')
        ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_arctextbgcolour);
      END_STATE();
    case 100:
      if (lookahead == 'o')
        ADVANCE(101);
      END_STATE();
    case 101:
      if (lookahead == 'l')
        ADVANCE(102);
      END_STATE();
    case 102:
      if (lookahead == 'o')
        ADVANCE(103);
      END_STATE();
    case 103:
      if (lookahead == 'r')
        ADVANCE(104);
      if (lookahead == 'u')
        ADVANCE(105);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_arctextcolor);
      END_STATE();
    case 105:
      if (lookahead == 'r')
        ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_arctextcolour);
      END_STATE();
    case 107:
      if (lookahead == 's')
        ADVANCE(108);
      END_STATE();
    case 108:
      if (lookahead == 'e')
        ADVANCE(109);
      END_STATE();
    case 109:
      if (lookahead == 'r')
        ADVANCE(110);
      END_STATE();
    case 110:
      if (lookahead == 't')
        ADVANCE(111);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 112:
      if (lookahead == 't')
        ADVANCE(113);
      END_STATE();
    case 113:
      if (lookahead == 'o')
        ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_auto);
      END_STATE();
    case 115:
      if (lookahead == 'o')
        ADVANCE(116);
      if (lookahead == 'r')
        ADVANCE(118);
      END_STATE();
    case 116:
      if (lookahead == 'x')
        ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_box);
      END_STATE();
    case 118:
      if (lookahead == 'e')
        ADVANCE(119);
      END_STATE();
    case 119:
      if (lookahead == 'a')
        ADVANCE(120);
      END_STATE();
    case 120:
      if (lookahead == 'k')
        ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 122:
      if (lookahead == 'o')
        ADVANCE(123);
      if (lookahead == 'r')
        ADVANCE(130);
      END_STATE();
    case 123:
      if (lookahead == 'n')
        ADVANCE(124);
      END_STATE();
    case 124:
      if (lookahead == 's')
        ADVANCE(125);
      END_STATE();
    case 125:
      if (lookahead == 'i')
        ADVANCE(126);
      END_STATE();
    case 126:
      if (lookahead == 'd')
        ADVANCE(127);
      END_STATE();
    case 127:
      if (lookahead == 'e')
        ADVANCE(128);
      END_STATE();
    case 128:
      if (lookahead == 'r')
        ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_consider);
      END_STATE();
    case 130:
      if (lookahead == 'i')
        ADVANCE(131);
      END_STATE();
    case 131:
      if (lookahead == 't')
        ADVANCE(132);
      END_STATE();
    case 132:
      if (lookahead == 'i')
        ADVANCE(133);
      END_STATE();
    case 133:
      if (lookahead == 'c')
        ADVANCE(134);
      END_STATE();
    case 134:
      if (lookahead == 'a')
        ADVANCE(135);
      END_STATE();
    case 135:
      if (lookahead == 'l')
        ADVANCE(136);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_critical);
      END_STATE();
    case 137:
      if (lookahead == 'l')
        ADVANCE(138);
      if (lookahead == 'x')
        ADVANCE(141);
      END_STATE();
    case 138:
      if (lookahead == 's')
        ADVANCE(139);
      END_STATE();
    case 139:
      if (lookahead == 'e')
        ADVANCE(140);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 141:
      if (lookahead == 'c')
        ADVANCE(142);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_exc);
      END_STATE();
    case 143:
      if (lookahead == 'a')
        ADVANCE(144);
      END_STATE();
    case 144:
      if (lookahead == 'l')
        ADVANCE(145);
      END_STATE();
    case 145:
      if (lookahead == 's')
        ADVANCE(146);
      END_STATE();
    case 146:
      if (lookahead == 'e')
        ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 148:
      if (lookahead == 's')
        ADVANCE(149);
      END_STATE();
    case 149:
      if (lookahead == 'c')
        ADVANCE(150);
      END_STATE();
    case 150:
      if (lookahead == 'a')
        ADVANCE(151);
      END_STATE();
    case 151:
      if (lookahead == 'l')
        ADVANCE(152);
      END_STATE();
    case 152:
      if (lookahead == 'e')
        ADVANCE(153);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_hscale);
      END_STATE();
    case 154:
      if (lookahead == 'd')
        ADVANCE(155);
      if (lookahead == 'g')
        ADVANCE(159);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_id);
      if (lookahead == 'u')
        ADVANCE(156);
      END_STATE();
    case 156:
      if (lookahead == 'r')
        ADVANCE(157);
      END_STATE();
    case 157:
      if (lookahead == 'l')
        ADVANCE(158);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_idurl);
      END_STATE();
    case 159:
      if (lookahead == 'n')
        ADVANCE(160);
      END_STATE();
    case 160:
      if (lookahead == 'o')
        ADVANCE(161);
      END_STATE();
    case 161:
      if (lookahead == 'r')
        ADVANCE(162);
      END_STATE();
    case 162:
      if (lookahead == 'e')
        ADVANCE(163);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_ignore);
      END_STATE();
    case 164:
      if (lookahead == 'a')
        ADVANCE(165);
      if (lookahead == 'i')
        ADVANCE(169);
      if (lookahead == 'o')
        ADVANCE(179);
      END_STATE();
    case 165:
      if (lookahead == 'b')
        ADVANCE(166);
      END_STATE();
    case 166:
      if (lookahead == 'e')
        ADVANCE(167);
      END_STATE();
    case 167:
      if (lookahead == 'l')
        ADVANCE(168);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 169:
      if (lookahead == 'n')
        ADVANCE(170);
      END_STATE();
    case 170:
      if (lookahead == 'e')
        ADVANCE(171);
      END_STATE();
    case 171:
      if (lookahead == 'c')
        ADVANCE(172);
      END_STATE();
    case 172:
      if (lookahead == 'o')
        ADVANCE(173);
      END_STATE();
    case 173:
      if (lookahead == 'l')
        ADVANCE(174);
      END_STATE();
    case 174:
      if (lookahead == 'o')
        ADVANCE(175);
      END_STATE();
    case 175:
      if (lookahead == 'r')
        ADVANCE(176);
      if (lookahead == 'u')
        ADVANCE(177);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_linecolor);
      END_STATE();
    case 177:
      if (lookahead == 'r')
        ADVANCE(178);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_linecolour);
      END_STATE();
    case 179:
      if (lookahead == 'o')
        ADVANCE(180);
      END_STATE();
    case 180:
      if (lookahead == 'p')
        ADVANCE(181);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_loop);
      END_STATE();
    case 182:
      if (lookahead == 's')
        ADVANCE(183);
      END_STATE();
    case 183:
      if (lookahead == 'c')
        ADVANCE(184);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_msc);
      END_STATE();
    case 185:
      if (lookahead == 'e')
        ADVANCE(186);
      if (lookahead == 'o')
        ADVANCE(188);
      END_STATE();
    case 186:
      if (lookahead == 'g')
        ADVANCE(187);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_neg);
      END_STATE();
    case 188:
      if (lookahead == 't')
        ADVANCE(189);
      END_STATE();
    case 189:
      if (lookahead == 'e')
        ADVANCE(190);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 191:
      if (lookahead == 'f')
        ADVANCE(192);
      if (lookahead == 'n')
        ADVANCE(194);
      if (lookahead == 'p')
        ADVANCE(195);
      END_STATE();
    case 192:
      if (lookahead == 'f')
        ADVANCE(193);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 195:
      if (lookahead == 't')
        ADVANCE(196);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_opt);
      END_STATE();
    case 197:
      if (lookahead == 'a')
        ADVANCE(198);
      END_STATE();
    case 198:
      if (lookahead == 'r')
        ADVANCE(199);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_par);
      END_STATE();
    case 200:
      if (lookahead == 'b')
        ADVANCE(201);
      if (lookahead == 'e')
        ADVANCE(204);
      END_STATE();
    case 201:
      if (lookahead == 'o')
        ADVANCE(202);
      END_STATE();
    case 202:
      if (lookahead == 'x')
        ADVANCE(203);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_rbox);
      END_STATE();
    case 204:
      if (lookahead == 'f')
        ADVANCE(205);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 206:
      if (lookahead == 'e')
        ADVANCE(207);
      if (lookahead == 't')
        ADVANCE(209);
      END_STATE();
    case 207:
      if (lookahead == 'q')
        ADVANCE(208);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_seq);
      END_STATE();
    case 209:
      if (lookahead == 'r')
        ADVANCE(210);
      END_STATE();
    case 210:
      if (lookahead == 'i')
        ADVANCE(211);
      END_STATE();
    case 211:
      if (lookahead == 'c')
        ADVANCE(212);
      END_STATE();
    case 212:
      if (lookahead == 't')
        ADVANCE(213);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_strict);
      END_STATE();
    case 214:
      if (lookahead == 'e')
        ADVANCE(215);
      if (lookahead == 'i')
        ADVANCE(234);
      if (lookahead == 'r')
        ADVANCE(238);
      END_STATE();
    case 215:
      if (lookahead == 'x')
        ADVANCE(216);
      END_STATE();
    case 216:
      if (lookahead == 't')
        ADVANCE(217);
      END_STATE();
    case 217:
      if (lookahead == 'b')
        ADVANCE(218);
      if (lookahead == 'c')
        ADVANCE(227);
      END_STATE();
    case 218:
      if (lookahead == 'g')
        ADVANCE(219);
      END_STATE();
    case 219:
      if (lookahead == 'c')
        ADVANCE(220);
      END_STATE();
    case 220:
      if (lookahead == 'o')
        ADVANCE(221);
      END_STATE();
    case 221:
      if (lookahead == 'l')
        ADVANCE(222);
      END_STATE();
    case 222:
      if (lookahead == 'o')
        ADVANCE(223);
      END_STATE();
    case 223:
      if (lookahead == 'r')
        ADVANCE(224);
      if (lookahead == 'u')
        ADVANCE(225);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_textbgcolor);
      END_STATE();
    case 225:
      if (lookahead == 'r')
        ADVANCE(226);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_textbgcolour);
      END_STATE();
    case 227:
      if (lookahead == 'o')
        ADVANCE(228);
      END_STATE();
    case 228:
      if (lookahead == 'l')
        ADVANCE(229);
      END_STATE();
    case 229:
      if (lookahead == 'o')
        ADVANCE(230);
      END_STATE();
    case 230:
      if (lookahead == 'r')
        ADVANCE(231);
      if (lookahead == 'u')
        ADVANCE(232);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_textcolor);
      END_STATE();
    case 232:
      if (lookahead == 'r')
        ADVANCE(233);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_textcolour);
      END_STATE();
    case 234:
      if (lookahead == 't')
        ADVANCE(235);
      END_STATE();
    case 235:
      if (lookahead == 'l')
        ADVANCE(236);
      END_STATE();
    case 236:
      if (lookahead == 'e')
        ADVANCE(237);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_title);
      END_STATE();
    case 238:
      if (lookahead == 'u')
        ADVANCE(239);
      END_STATE();
    case 239:
      if (lookahead == 'e')
        ADVANCE(240);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 241:
      if (lookahead == 'r')
        ADVANCE(242);
      END_STATE();
    case 242:
      if (lookahead == 'l')
        ADVANCE(243);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_url);
      END_STATE();
    case 244:
      if (lookahead == 'a')
        ADVANCE(245);
      if (lookahead == 'i')
        ADVANCE(253);
      if (lookahead == 'o')
        ADVANCE(257);
      END_STATE();
    case 245:
      if (lookahead == 't')
        ADVANCE(246);
      END_STATE();
    case 246:
      if (lookahead == 'e')
        ADVANCE(247);
      END_STATE();
    case 247:
      if (lookahead == 'r')
        ADVANCE(248);
      END_STATE();
    case 248:
      if (lookahead == 'm')
        ADVANCE(249);
      END_STATE();
    case 249:
      if (lookahead == 'a')
        ADVANCE(250);
      END_STATE();
    case 250:
      if (lookahead == 'r')
        ADVANCE(251);
      END_STATE();
    case 251:
      if (lookahead == 'k')
        ADVANCE(252);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_string_option_key);
      END_STATE();
    case 253:
      if (lookahead == 'd')
        ADVANCE(254);
      END_STATE();
    case 254:
      if (lookahead == 't')
        ADVANCE(255);
      END_STATE();
    case 255:
      if (lookahead == 'h')
        ADVANCE(256);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_size_option_key);
      END_STATE();
    case 257:
      if (lookahead == 'r')
        ADVANCE(258);
      END_STATE();
    case 258:
      if (lookahead == 'd')
        ADVANCE(259);
      END_STATE();
    case 259:
      if (lookahead == 'w')
        ADVANCE(260);
      END_STATE();
    case 260:
      if (lookahead == 'r')
        ADVANCE(261);
      END_STATE();
    case 261:
      if (lookahead == 'a')
        ADVANCE(262);
      END_STATE();
    case 262:
      if (lookahead == 'p')
        ADVANCE(263);
      END_STATE();
    case 263:
      if (lookahead == 'a')
        ADVANCE(264);
      if (lookahead == 'b')
        ADVANCE(268);
      if (lookahead == 'e')
        ADVANCE(273);
      END_STATE();
    case 264:
      if (lookahead == 'r')
        ADVANCE(265);
      END_STATE();
    case 265:
      if (lookahead == 'c')
        ADVANCE(266);
      END_STATE();
    case 266:
      if (lookahead == 's')
        ADVANCE(267);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_wordwraparcs);
      END_STATE();
    case 268:
      if (lookahead == 'o')
        ADVANCE(269);
      END_STATE();
    case 269:
      if (lookahead == 'x')
        ADVANCE(270);
      END_STATE();
    case 270:
      if (lookahead == 'e')
        ADVANCE(271);
      END_STATE();
    case 271:
      if (lookahead == 's')
        ADVANCE(272);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_wordwrapboxes);
      END_STATE();
    case 273:
      if (lookahead == 'n')
        ADVANCE(274);
      END_STATE();
    case 274:
      if (lookahead == 't')
        ADVANCE(275);
      END_STATE();
    case 275:
      if (lookahead == 'i')
        ADVANCE(276);
      END_STATE();
    case 276:
      if (lookahead == 't')
        ADVANCE(277);
      END_STATE();
    case 277:
      if (lookahead == 'i')
        ADVANCE(278);
      END_STATE();
    case 278:
      if (lookahead == 'e')
        ADVANCE(279);
      END_STATE();
    case 279:
      if (lookahead == 's')
        ADVANCE(280);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_wordwrapentities);
      END_STATE();
    case 281:
      if (lookahead == '-')
        ADVANCE(282);
      if (lookahead == 'u')
        ADVANCE(283);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_x_DASH);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_xu);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_curly_bracket_open);
      END_STATE();
    case 285:
      if (lookahead == '|')
        ADVANCE(286);
      END_STATE();
    case 286:
      if (lookahead == '|')
        ADVANCE(287);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE_PIPE);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_curly_bracket_close);
      END_STATE();
    case 289:
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(17);
      if (lookahead == 'm')
        ADVANCE(182);
      if (lookahead == 'x')
        ADVANCE(290);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(289);
      END_STATE();
    case 290:
      if (lookahead == 'u')
        ADVANCE(283);
      END_STATE();
    case 291:
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(17);
      if (lookahead == '{')
        ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(291);
      END_STATE();
    case 292:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(292);
      END_STATE();
    case 293:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(294);
      if (lookahead == '*')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(295);
      if (lookahead == '.')
        ADVANCE(297);
      if (lookahead == '/')
        ADVANCE(301);
      if (lookahead == 'a')
        ADVANCE(302);
      if (lookahead == 'h')
        ADVANCE(313);
      if (lookahead == 'w')
        ADVANCE(319);
      if (lookahead == '|')
        ADVANCE(356);
      if (lookahead == '}')
        ADVANCE(359);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(293);
      if (lookahead != 0 &&
          (lookahead < ',' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(300);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\"' ||
          lookahead == '*' ||
          lookahead == ',' ||
          lookahead == '-' ||
          (':' <= lookahead && lookahead <= '>') ||
          lookahead == '[' ||
          lookahead == '{')
        ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(294);
      END_STATE();
    case 295:
      if (lookahead == '-')
        ADVANCE(296);
      END_STATE();
    case 296:
      if (lookahead == '-')
        ADVANCE(10);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '.')
        ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          (lookahead < ',' || lookahead > '.') &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '.')
        ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          (lookahead < ',' || lookahead > '.') &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '*')
        ADVANCE(18);
      if (lookahead == '/')
        ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g')
        ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd')
        ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i')
        ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n')
        ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't')
        ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_arcgradient);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's')
        ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l')
        ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_hscale);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(320);
      if (lookahead == 'i')
        ADVANCE(328);
      if (lookahead == 'o')
        ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't')
        ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm')
        ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'k')
        ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_string_option_key);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd')
        ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't')
        ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h')
        ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_size_option_key);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd')
        ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'w')
        ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p')
        ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(339);
      if (lookahead == 'b')
        ADVANCE(343);
      if (lookahead == 'e')
        ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's')
        ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_wordwraparcs);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o')
        ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x')
        ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's')
        ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_wordwrapboxes);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n')
        ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't')
        ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i')
        ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't')
        ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i')
        ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's')
        ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_wordwrapentities);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '|')
        ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{' &&
          lookahead != '|')
        ADVANCE(300);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '|')
        ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{' &&
          lookahead != '|')
        ADVANCE(300);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE_PIPE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_curly_bracket_close);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 360:
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '/')
        ADVANCE(17);
      if (lookahead == '=')
        ADVANCE(361);
      if (lookahead == ']')
        ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(360);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_equals);
      END_STATE();
    case 362:
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(363);
      if (lookahead == '.')
        ADVANCE(365);
      if (lookahead == '/')
        ADVANCE(17);
      if (lookahead == ':')
        ADVANCE(367);
      if (lookahead == ';')
        ADVANCE(27);
      if (lookahead == '<')
        ADVANCE(28);
      if (lookahead == '=')
        ADVANCE(368);
      if (lookahead == '>')
        ADVANCE(45);
      if (lookahead == 'X')
        ADVANCE(47);
      if (lookahead == '[')
        ADVANCE(49);
      if (lookahead == 'a')
        ADVANCE(369);
      if (lookahead == 'b')
        ADVANCE(115);
      if (lookahead == 'c')
        ADVANCE(122);
      if (lookahead == 'e')
        ADVANCE(137);
      if (lookahead == 'i')
        ADVANCE(370);
      if (lookahead == 'l')
        ADVANCE(371);
      if (lookahead == 'n')
        ADVANCE(185);
      if (lookahead == 'o')
        ADVANCE(372);
      if (lookahead == 'p')
        ADVANCE(197);
      if (lookahead == 'r')
        ADVANCE(200);
      if (lookahead == 's')
        ADVANCE(206);
      if (lookahead == 'x')
        ADVANCE(373);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(362);
      END_STATE();
    case 363:
      if (lookahead == '-')
        ADVANCE(364);
      if (lookahead == '>')
        ADVANCE(11);
      if (lookahead == 'X')
        ADVANCE(12);
      if (lookahead == 'x')
        ADVANCE(13);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 365:
      if (lookahead == '.')
        ADVANCE(366);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 367:
      if (lookahead == ':')
        ADVANCE(25);
      if (lookahead == '>')
        ADVANCE(26);
      END_STATE();
    case 368:
      if (lookahead == '=')
        ADVANCE(42);
      if (lookahead == '>')
        ADVANCE(43);
      END_STATE();
    case 369:
      if (lookahead == 'b')
        ADVANCE(52);
      if (lookahead == 'l')
        ADVANCE(64);
      if (lookahead == 's')
        ADVANCE(107);
      END_STATE();
    case 370:
      if (lookahead == 'g')
        ADVANCE(159);
      END_STATE();
    case 371:
      if (lookahead == 'o')
        ADVANCE(179);
      END_STATE();
    case 372:
      if (lookahead == 'p')
        ADVANCE(195);
      END_STATE();
    case 373:
      if (lookahead == '-')
        ADVANCE(282);
      END_STATE();
    case 374:
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(363);
      if (lookahead == '.')
        ADVANCE(365);
      if (lookahead == '/')
        ADVANCE(17);
      if (lookahead == ':')
        ADVANCE(367);
      if (lookahead == ';')
        ADVANCE(27);
      if (lookahead == '<')
        ADVANCE(28);
      if (lookahead == '=')
        ADVANCE(368);
      if (lookahead == '>')
        ADVANCE(45);
      if (lookahead == 'X')
        ADVANCE(47);
      if (lookahead == '[')
        ADVANCE(49);
      if (lookahead == 'a')
        ADVANCE(369);
      if (lookahead == 'b')
        ADVANCE(115);
      if (lookahead == 'c')
        ADVANCE(122);
      if (lookahead == 'e')
        ADVANCE(137);
      if (lookahead == 'i')
        ADVANCE(370);
      if (lookahead == 'l')
        ADVANCE(371);
      if (lookahead == 'n')
        ADVANCE(185);
      if (lookahead == 'o')
        ADVANCE(372);
      if (lookahead == 'p')
        ADVANCE(197);
      if (lookahead == 'r')
        ADVANCE(200);
      if (lookahead == 's')
        ADVANCE(206);
      if (lookahead == 'x')
        ADVANCE(373);
      if (lookahead == '{')
        ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(374);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '#')
        ADVANCE(376);
      if (lookahead == '/')
        ADVANCE(378);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '#')
        ADVANCE(377);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '\n')
        ADVANCE(377);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(376);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(377);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '*')
        ADVANCE(379);
      if (lookahead == '/')
        ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(377);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '\"')
        ADVANCE(18);
      if (lookahead == '*')
        ADVANCE(380);
      if (lookahead != 0)
        ADVANCE(379);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '\"')
        ADVANCE(18);
      if (lookahead == '*')
        ADVANCE(380);
      if (lookahead == '/')
        ADVANCE(377);
      if (lookahead != 0)
        ADVANCE(379);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '#')
        ADVANCE(376);
      if (lookahead == '/')
        ADVANCE(378);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '#')
        ADVANCE(377);
      END_STATE();
    case 382:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(294);
      if (lookahead == '*')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(295);
      if (lookahead == '.')
        ADVANCE(297);
      if (lookahead == '/')
        ADVANCE(301);
      if (lookahead == '|')
        ADVANCE(356);
      if (lookahead == '}')
        ADVANCE(359);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(382);
      if (lookahead != 0 &&
          (lookahead < ',' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(300);
      END_STATE();
    case 383:
      if (lookahead == '\"')
        ADVANCE(384);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(17);
      if (lookahead == 'a')
        ADVANCE(385);
      if (lookahead == 'h')
        ADVANCE(148);
      if (lookahead == 'w')
        ADVANCE(244);
      if (lookahead == '}')
        ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(383);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 385:
      if (lookahead == 'r')
        ADVANCE(386);
      END_STATE();
    case 386:
      if (lookahead == 'c')
        ADVANCE(387);
      END_STATE();
    case 387:
      if (lookahead == 'g')
        ADVANCE(68);
      END_STATE();
    case 388:
      if (lookahead == '\"')
        ADVANCE(384);
      if (lookahead == '#')
        ADVANCE(294);
      if (lookahead == '/')
        ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(388);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 389:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(294);
      if (lookahead == '*')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(295);
      if (lookahead == '.')
        ADVANCE(297);
      if (lookahead == '/')
        ADVANCE(301);
      if (lookahead == '|')
        ADVANCE(356);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(389);
      if (lookahead != 0 &&
          (lookahead < ',' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{' &&
          lookahead != '|')
        ADVANCE(300);
      END_STATE();
    case 390:
      if (lookahead == '\"')
        ADVANCE(384);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(17);
      if (lookahead == 'a')
        ADVANCE(391);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(390);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(22);
      END_STATE();
    case 391:
      if (lookahead == 'u')
        ADVANCE(112);
      END_STATE();
    case 392:
      if (lookahead == '\"')
        ADVANCE(384);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(17);
      if (lookahead == '0')
        ADVANCE(393);
      if (lookahead == '1')
        ADVANCE(394);
      if (lookahead == 'f')
        ADVANCE(143);
      if (lookahead == 'o')
        ADVANCE(395);
      if (lookahead == 't')
        ADVANCE(396);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(392);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 395:
      if (lookahead == 'f')
        ADVANCE(192);
      if (lookahead == 'n')
        ADVANCE(194);
      END_STATE();
    case 396:
      if (lookahead == 'r')
        ADVANCE(238);
      END_STATE();
    case 397:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(294);
      if (lookahead == '*')
        ADVANCE(6);
      if (lookahead == '/')
        ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(397);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(300);
      END_STATE();
    case 398:
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(17);
      if (lookahead == ']')
        ADVANCE(50);
      if (lookahead == 'a')
        ADVANCE(399);
      if (lookahead == 'i')
        ADVANCE(402);
      if (lookahead == 'l')
        ADVANCE(403);
      if (lookahead == 't')
        ADVANCE(404);
      if (lookahead == 'u')
        ADVANCE(241);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(398);
      END_STATE();
    case 399:
      if (lookahead == 'c')
        ADVANCE(55);
      if (lookahead == 'r')
        ADVANCE(400);
      END_STATE();
    case 400:
      if (lookahead == 'c')
        ADVANCE(401);
      END_STATE();
    case 401:
      if (lookahead == 'l')
        ADVANCE(76);
      if (lookahead == 't')
        ADVANCE(87);
      END_STATE();
    case 402:
      if (lookahead == 'd')
        ADVANCE(155);
      END_STATE();
    case 403:
      if (lookahead == 'a')
        ADVANCE(165);
      if (lookahead == 'i')
        ADVANCE(169);
      END_STATE();
    case 404:
      if (lookahead == 'e')
        ADVANCE(215);
      if (lookahead == 'i')
        ADVANCE(234);
      END_STATE();
    case 405:
      if (lookahead == '\"')
        ADVANCE(384);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '.')
        ADVANCE(406);
      if (lookahead == '/')
        ADVANCE(17);
      if (lookahead == ';')
        ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(405);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__dot);
      END_STATE();
    case 407:
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '/')
        ADVANCE(17);
      if (lookahead == ';')
        ADVANCE(27);
      if (lookahead == ']')
        ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(407);
      END_STATE();
    case 408:
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(363);
      if (lookahead == '.')
        ADVANCE(365);
      if (lookahead == '/')
        ADVANCE(17);
      if (lookahead == ':')
        ADVANCE(367);
      if (lookahead == ';')
        ADVANCE(27);
      if (lookahead == '<')
        ADVANCE(28);
      if (lookahead == '=')
        ADVANCE(368);
      if (lookahead == '>')
        ADVANCE(45);
      if (lookahead == 'X')
        ADVANCE(47);
      if (lookahead == '[')
        ADVANCE(49);
      if (lookahead == ']')
        ADVANCE(50);
      if (lookahead == 'a')
        ADVANCE(369);
      if (lookahead == 'b')
        ADVANCE(115);
      if (lookahead == 'c')
        ADVANCE(122);
      if (lookahead == 'e')
        ADVANCE(137);
      if (lookahead == 'i')
        ADVANCE(370);
      if (lookahead == 'l')
        ADVANCE(371);
      if (lookahead == 'n')
        ADVANCE(185);
      if (lookahead == 'o')
        ADVANCE(372);
      if (lookahead == 'p')
        ADVANCE(197);
      if (lookahead == 'r')
        ADVANCE(200);
      if (lookahead == 's')
        ADVANCE(206);
      if (lookahead == 'x')
        ADVANCE(373);
      if (lookahead == '{')
        ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(408);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 289},
  [2] = {.lex_state = 291},
  [3] = {.lex_state = 292},
  [4] = {.lex_state = 291},
  [5] = {.lex_state = 293},
  [6] = {.lex_state = 360},
  [7] = {.lex_state = 360},
  [8] = {.lex_state = 360},
  [9] = {.lex_state = 360},
  [10] = {.lex_state = 362},
  [11] = {.lex_state = 362},
  [12] = {.lex_state = 292},
  [13] = {.lex_state = 374},
  [14] = {.lex_state = 375},
  [15] = {.lex_state = 362},
  [16] = {.lex_state = 382},
  [17] = {.lex_state = 362},
  [18] = {.lex_state = 362},
  [19] = {.lex_state = 360},
  [20] = {.lex_state = 360},
  [21] = {.lex_state = 382},
  [22] = {.lex_state = 362},
  [23] = {.lex_state = 383},
  [24] = {.lex_state = 362},
  [25] = {.lex_state = 362},
  [26] = {.lex_state = 362},
  [27] = {.lex_state = 383},
  [28] = {.lex_state = 388},
  [29] = {.lex_state = 389},
  [30] = {.lex_state = 382},
  [31] = {.lex_state = 390},
  [32] = {.lex_state = 383},
  [33] = {.lex_state = 383},
  [34] = {.lex_state = 292},
  [35] = {.lex_state = 382},
  [36] = {.lex_state = 383},
  [37] = {.lex_state = 383},
  [38] = {.lex_state = 382},
  [39] = {.lex_state = 390},
  [40] = {.lex_state = 392},
  [41] = {.lex_state = 362},
  [42] = {.lex_state = 388},
  [43] = {.lex_state = 382},
  [44] = {.lex_state = 389},
  [45] = {.lex_state = 382},
  [46] = {.lex_state = 397},
  [47] = {.lex_state = 388},
  [48] = {.lex_state = 397},
  [49] = {.lex_state = 388},
  [50] = {.lex_state = 388},
  [51] = {.lex_state = 398},
  [52] = {.lex_state = 362},
  [53] = {.lex_state = 397},
  [54] = {.lex_state = 388},
  [55] = {.lex_state = 388},
  [56] = {.lex_state = 362},
  [57] = {.lex_state = 383},
  [58] = {.lex_state = 362},
  [59] = {.lex_state = 362},
  [60] = {.lex_state = 388},
  [61] = {.lex_state = 362},
  [62] = {.lex_state = 389},
  [63] = {.lex_state = 382},
  [64] = {.lex_state = 405},
  [65] = {.lex_state = 390},
  [66] = {.lex_state = 362},
  [67] = {.lex_state = 362},
  [68] = {.lex_state = 362},
  [69] = {.lex_state = 407},
  [70] = {.lex_state = 408},
  [71] = {.lex_state = 292},
  [72] = {.lex_state = 383},
  [73] = {.lex_state = 390},
  [74] = {.lex_state = 362},
  [75] = {.lex_state = 362},
  [76] = {.lex_state = 392},
  [77] = {.lex_state = 362},
  [78] = {.lex_state = 407},
  [79] = {.lex_state = 360},
  [80] = {.lex_state = 360},
  [81] = {.lex_state = 362},
  [82] = {.lex_state = 360},
  [83] = {.lex_state = 360},
  [84] = {.lex_state = 360},
  [85] = {.lex_state = 398},
  [86] = {.lex_state = 362},
  [87] = {.lex_state = 291},
  [88] = {.lex_state = 382},
  [89] = {.lex_state = 360},
  [90] = {.lex_state = 382},
  [91] = {.lex_state = 360},
  [92] = {.lex_state = 382},
  [93] = {.lex_state = 360},
  [94] = {.lex_state = 390},
  [95] = {.lex_state = 383},
  [96] = {.lex_state = 292},
  [97] = {.lex_state = 383},
  [98] = {.lex_state = 383},
  [99] = {.lex_state = 392},
  [100] = {.lex_state = 362},
  [101] = {.lex_state = 398},
  [102] = {.lex_state = 383},
  [103] = {.lex_state = 360},
  [104] = {.lex_state = 398},
  [105] = {.lex_state = 382},
  [106] = {.lex_state = 362},
  [107] = {.lex_state = 405},
  [108] = {.lex_state = 362},
  [109] = {.lex_state = 362},
  [110] = {.lex_state = 407},
  [111] = {.lex_state = 360},
  [112] = {.lex_state = 360},
  [113] = {.lex_state = 362},
  [114] = {.lex_state = 360},
  [115] = {.lex_state = 362},
  [116] = {.lex_state = 383},
  [117] = {.lex_state = 362},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_hscale] = ACTIONS(1),
    [anon_sym_arcgradient] = ACTIONS(1),
    [sym_size_option_key] = ACTIONS(1),
    [sym_string_option_key] = ACTIONS(1),
    [anon_sym_wordwraparcs] = ACTIONS(1),
    [anon_sym_wordwrapentities] = ACTIONS(1),
    [anon_sym_wordwrapboxes] = ACTIONS(1),
    [sym_boolean_entity_attribute_key] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [anon_sym_idurl] = ACTIONS(1),
    [anon_sym_id] = ACTIONS(3),
    [anon_sym_url] = ACTIONS(1),
    [anon_sym_linecolor] = ACTIONS(1),
    [anon_sym_linecolour] = ACTIONS(1),
    [anon_sym_textcolor] = ACTIONS(1),
    [anon_sym_textcolour] = ACTIONS(1),
    [anon_sym_textbgcolor] = ACTIONS(1),
    [anon_sym_textbgcolour] = ACTIONS(1),
    [anon_sym_arclinecolor] = ACTIONS(1),
    [anon_sym_arclinecolour] = ACTIONS(1),
    [anon_sym_arctextcolor] = ACTIONS(1),
    [anon_sym_arctextcolour] = ACTIONS(1),
    [anon_sym_arctextbgcolor] = ACTIONS(1),
    [anon_sym_arctextbgcolour] = ACTIONS(1),
    [anon_sym_title] = ACTIONS(1),
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
    [anon_sym_note] = ACTIONS(1),
    [anon_sym_abox] = ACTIONS(1),
    [anon_sym_rbox] = ACTIONS(1),
    [anon_sym_box] = ACTIONS(1),
    [anon_sym_PIPE_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [sym_comment_arc] = ACTIONS(1),
    [anon_sym_alt] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_opt] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_par] = ACTIONS(1),
    [anon_sym_seq] = ACTIONS(1),
    [anon_sym_strict] = ACTIONS(1),
    [anon_sym_neg] = ACTIONS(1),
    [anon_sym_critical] = ACTIONS(1),
    [anon_sym_ignore] = ACTIONS(1),
    [anon_sym_consider] = ACTIONS(1),
    [anon_sym_assert] = ACTIONS(1),
    [anon_sym_loop] = ACTIONS(1),
    [anon_sym_ref] = ACTIONS(1),
    [anon_sym_exc] = ACTIONS(1),
    [anon_sym_msc] = ACTIONS(1),
    [anon_sym_xu] = ACTIONS(1),
    [sym_curly_bracket_open] = ACTIONS(1),
    [sym_curly_bracket_close] = ACTIONS(1),
    [sym_square_bracket_open] = ACTIONS(1),
    [sym_square_bracket_close] = ACTIONS(1),
    [sym_equals] = ACTIONS(3),
    [sym_comma] = ACTIONS(1),
    [sym_colon] = ACTIONS(3),
    [sym_semicolon] = ACTIONS(1),
    [sym__dot] = ACTIONS(3),
    [sym__cardinal] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(3),
    [anon_sym_auto] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_off] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(3),
    [anon_sym_1] = ACTIONS(3),
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
    [sym__inline_expression_arc] = STATE(11),
    [sym_entity_identifier] = STATE(25),
    [sym__quoted_string] = STATE(13),
    [sym_entity_wildcard] = STATE(26),
    [aux_sym_options_repeat1] = STATE(27),
    [aux_sym_entities_repeat1] = STATE(28),
    [aux_sym_arcs_repeat1] = STATE(29),
    [aux_sym_arcs_repeat2] = STATE(30),
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
    [sym_comment] = ACTIONS(35),
  },
  [6] = {
    [sym_equals] = ACTIONS(37),
    [sym_comment] = ACTIONS(7),
  },
  [7] = {
    [sym_equals] = ACTIONS(39),
    [sym_comment] = ACTIONS(7),
  },
  [8] = {
    [sym_equals] = ACTIONS(41),
    [sym_comment] = ACTIONS(7),
  },
  [9] = {
    [sym_equals] = ACTIONS(43),
    [sym_comment] = ACTIONS(7),
  },
  [10] = {
    [sym_comma] = ACTIONS(45),
    [sym_semicolon] = ACTIONS(45),
    [sym_comment] = ACTIONS(7),
  },
  [11] = {
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
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH] = ACTIONS(55),
    [sym_comment] = ACTIONS(35),
  },
  [15] = {
    [anon_sym_LT_DASH] = ACTIONS(57),
    [anon_sym_LT_EQ] = ACTIONS(57),
    [anon_sym_LT_COLON] = ACTIONS(57),
    [anon_sym_LT_LT_EQ] = ACTIONS(57),
    [anon_sym_LT_LT] = ACTIONS(59),
    [anon_sym_x_DASH] = ACTIONS(57),
    [anon_sym_X_DASH] = ACTIONS(57),
    [sym_comma] = ACTIONS(57),
    [sym_semicolon] = ACTIONS(57),
    [sym_comment] = ACTIONS(7),
  },
  [16] = {
    [sym_entities] = STATE(35),
    [sym_entity] = STATE(22),
    [sym_arcs] = STATE(36),
    [sym_arc] = STATE(24),
    [sym__dual_arc] = STATE(11),
    [sym_single_arc] = STATE(11),
    [sym__inline_expression_arc] = STATE(11),
    [sym_entity_identifier] = STATE(25),
    [sym__quoted_string] = STATE(13),
    [sym_entity_wildcard] = STATE(26),
    [aux_sym_entities_repeat1] = STATE(28),
    [aux_sym_arcs_repeat1] = STATE(29),
    [aux_sym_arcs_repeat2] = STATE(30),
    [anon_sym_PIPE_PIPE_PIPE] = ACTIONS(23),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(23),
    [sym_comment_arc] = ACTIONS(25),
    [sym_curly_bracket_close] = ACTIONS(61),
    [sym__identifier] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_DQUOTE_STAR_DQUOTE] = ACTIONS(33),
    [sym_comment] = ACTIONS(35),
  },
  [17] = {
    [sym_comma] = ACTIONS(63),
    [sym_semicolon] = ACTIONS(65),
    [sym_comment] = ACTIONS(7),
  },
  [18] = {
    [sym_comma] = ACTIONS(67),
    [sym_semicolon] = ACTIONS(67),
    [sym_comment] = ACTIONS(7),
  },
  [19] = {
    [sym_equals] = ACTIONS(69),
    [sym_comment] = ACTIONS(7),
  },
  [20] = {
    [sym_equals] = ACTIONS(71),
    [sym_comment] = ACTIONS(7),
  },
  [21] = {
    [sym_arcs] = STATE(36),
    [sym_arc] = STATE(24),
    [sym__dual_arc] = STATE(11),
    [sym_single_arc] = STATE(11),
    [sym__inline_expression_arc] = STATE(11),
    [sym_entity_identifier] = STATE(41),
    [sym__quoted_string] = STATE(13),
    [sym_entity_wildcard] = STATE(26),
    [aux_sym_arcs_repeat1] = STATE(29),
    [aux_sym_arcs_repeat2] = STATE(30),
    [anon_sym_PIPE_PIPE_PIPE] = ACTIONS(23),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(23),
    [sym_comment_arc] = ACTIONS(25),
    [sym_curly_bracket_close] = ACTIONS(61),
    [sym__identifier] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_DQUOTE_STAR_DQUOTE] = ACTIONS(33),
    [sym_comment] = ACTIONS(35),
  },
  [22] = {
    [sym_comma] = ACTIONS(73),
    [sym_semicolon] = ACTIONS(75),
    [sym_comment] = ACTIONS(7),
  },
  [23] = {
    [sym_curly_bracket_close] = ACTIONS(77),
    [sym_comment] = ACTIONS(7),
  },
  [24] = {
    [sym_comma] = ACTIONS(79),
    [sym_semicolon] = ACTIONS(81),
    [sym_comment] = ACTIONS(7),
  },
  [25] = {
    [sym_entity_attributes] = STATE(52),
    [sym_forward_arrow] = STATE(53),
    [sym_backward_arrow] = STATE(54),
    [sym_bidirectional_arrow] = STATE(53),
    [sym_box] = STATE(54),
    [sym_inline_expression_token] = STATE(55),
    [anon_sym_DASH_GT] = ACTIONS(83),
    [anon_sym_EQ_GT] = ACTIONS(85),
    [anon_sym_COLON_GT] = ACTIONS(83),
    [anon_sym_EQ_GT_GT] = ACTIONS(83),
    [anon_sym_GT_GT] = ACTIONS(83),
    [anon_sym_DASHx] = ACTIONS(83),
    [anon_sym_DASHX] = ACTIONS(83),
    [anon_sym_LT_DASH] = ACTIONS(87),
    [anon_sym_LT_EQ] = ACTIONS(87),
    [anon_sym_LT_COLON] = ACTIONS(87),
    [anon_sym_LT_LT_EQ] = ACTIONS(87),
    [anon_sym_LT_LT] = ACTIONS(87),
    [anon_sym_x_DASH] = ACTIONS(89),
    [anon_sym_X_DASH] = ACTIONS(89),
    [anon_sym_LT_DASH_GT] = ACTIONS(91),
    [anon_sym_LT_EQ_GT] = ACTIONS(91),
    [anon_sym_LT_COLON_GT] = ACTIONS(91),
    [anon_sym_LT_LT_EQ_GT_GT] = ACTIONS(91),
    [anon_sym_LT_LT_GT_GT] = ACTIONS(91),
    [anon_sym_DASH_DASH] = ACTIONS(91),
    [anon_sym_EQ_EQ] = ACTIONS(91),
    [anon_sym_COLON_COLON] = ACTIONS(91),
    [anon_sym_DOT_DOT] = ACTIONS(91),
    [anon_sym_note] = ACTIONS(93),
    [anon_sym_abox] = ACTIONS(93),
    [anon_sym_rbox] = ACTIONS(93),
    [anon_sym_box] = ACTIONS(93),
    [anon_sym_alt] = ACTIONS(95),
    [anon_sym_else] = ACTIONS(95),
    [anon_sym_opt] = ACTIONS(95),
    [anon_sym_break] = ACTIONS(95),
    [anon_sym_par] = ACTIONS(95),
    [anon_sym_seq] = ACTIONS(95),
    [anon_sym_strict] = ACTIONS(95),
    [anon_sym_neg] = ACTIONS(95),
    [anon_sym_critical] = ACTIONS(95),
    [anon_sym_ignore] = ACTIONS(95),
    [anon_sym_consider] = ACTIONS(95),
    [anon_sym_assert] = ACTIONS(95),
    [anon_sym_loop] = ACTIONS(95),
    [anon_sym_ref] = ACTIONS(95),
    [anon_sym_exc] = ACTIONS(95),
    [sym_square_bracket_open] = ACTIONS(97),
    [sym_comma] = ACTIONS(99),
    [sym_semicolon] = ACTIONS(99),
    [sym_comment] = ACTIONS(7),
  },
  [26] = {
    [sym_backward_arrow] = STATE(54),
    [anon_sym_LT_DASH] = ACTIONS(89),
    [anon_sym_LT_EQ] = ACTIONS(89),
    [anon_sym_LT_COLON] = ACTIONS(89),
    [anon_sym_LT_LT_EQ] = ACTIONS(89),
    [anon_sym_LT_LT] = ACTIONS(87),
    [anon_sym_x_DASH] = ACTIONS(89),
    [anon_sym_X_DASH] = ACTIONS(89),
    [sym_comment] = ACTIONS(7),
  },
  [27] = {
    [sym_option] = STATE(56),
    [sym__numerical_option] = STATE(18),
    [sym_numerical_option_key] = STATE(19),
    [sym__size_option] = STATE(18),
    [sym__string_option] = STATE(18),
    [sym__boolean_option] = STATE(18),
    [sym_boolean_option_key] = STATE(20),
    [aux_sym_options_repeat1] = STATE(57),
    [anon_sym_hscale] = ACTIONS(101),
    [anon_sym_arcgradient] = ACTIONS(101),
    [sym_size_option_key] = ACTIONS(103),
    [sym_string_option_key] = ACTIONS(105),
    [anon_sym_wordwraparcs] = ACTIONS(107),
    [anon_sym_wordwrapentities] = ACTIONS(107),
    [anon_sym_wordwrapboxes] = ACTIONS(107),
    [sym_comment] = ACTIONS(7),
  },
  [28] = {
    [sym_entity] = STATE(58),
    [sym_entity_identifier] = STATE(59),
    [sym__quoted_string] = STATE(13),
    [aux_sym_entities_repeat1] = STATE(60),
    [sym__identifier] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [sym_comment] = ACTIONS(35),
  },
  [29] = {
    [sym_arc] = STATE(61),
    [sym__dual_arc] = STATE(11),
    [sym_single_arc] = STATE(11),
    [sym__inline_expression_arc] = STATE(11),
    [sym_entity_identifier] = STATE(41),
    [sym__quoted_string] = STATE(13),
    [sym_entity_wildcard] = STATE(26),
    [aux_sym_arcs_repeat1] = STATE(62),
    [anon_sym_PIPE_PIPE_PIPE] = ACTIONS(23),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(23),
    [sym_comment_arc] = ACTIONS(25),
    [sym__identifier] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_DQUOTE_STAR_DQUOTE] = ACTIONS(33),
    [sym_comment] = ACTIONS(35),
  },
  [30] = {
    [sym_arc] = STATE(24),
    [sym__dual_arc] = STATE(11),
    [sym_single_arc] = STATE(11),
    [sym__inline_expression_arc] = STATE(11),
    [sym_entity_identifier] = STATE(41),
    [sym__quoted_string] = STATE(13),
    [sym_entity_wildcard] = STATE(26),
    [aux_sym_arcs_repeat1] = STATE(29),
    [aux_sym_arcs_repeat2] = STATE(63),
    [anon_sym_PIPE_PIPE_PIPE] = ACTIONS(23),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(23),
    [sym_comment_arc] = ACTIONS(25),
    [sym_curly_bracket_close] = ACTIONS(111),
    [sym__identifier] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_DQUOTE_STAR_DQUOTE] = ACTIONS(33),
    [sym_comment] = ACTIONS(35),
  },
  [31] = {
    [sym__number] = STATE(67),
    [sym__real] = STATE(67),
    [sym__sizelike] = STATE(66),
    [sym_size] = STATE(66),
    [sym__size] = STATE(67),
    [sym_sizelike_string] = STATE(66),
    [sym__cardinal] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [anon_sym_auto] = ACTIONS(117),
    [sym_comment] = ACTIONS(7),
  },
  [32] = {
    [sym_string] = STATE(68),
    [sym__quoted_string] = STATE(69),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [sym_comment] = ACTIONS(7),
  },
  [33] = {
    [anon_sym_DQUOTE] = ACTIONS(119),
    [sym_comment] = ACTIONS(7),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(121),
    [sym_comment] = ACTIONS(7),
  },
  [35] = {
    [sym_arcs] = STATE(72),
    [sym_arc] = STATE(24),
    [sym__dual_arc] = STATE(11),
    [sym_single_arc] = STATE(11),
    [sym__inline_expression_arc] = STATE(11),
    [sym_entity_identifier] = STATE(41),
    [sym__quoted_string] = STATE(13),
    [sym_entity_wildcard] = STATE(26),
    [aux_sym_arcs_repeat1] = STATE(29),
    [aux_sym_arcs_repeat2] = STATE(30),
    [anon_sym_PIPE_PIPE_PIPE] = ACTIONS(23),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(23),
    [sym_comment_arc] = ACTIONS(25),
    [sym_curly_bracket_close] = ACTIONS(123),
    [sym__identifier] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_DQUOTE_STAR_DQUOTE] = ACTIONS(33),
    [sym_comment] = ACTIONS(35),
  },
  [36] = {
    [sym_curly_bracket_close] = ACTIONS(125),
    [sym_comment] = ACTIONS(7),
  },
  [37] = {
    [anon_sym_hscale] = ACTIONS(127),
    [anon_sym_arcgradient] = ACTIONS(127),
    [sym_size_option_key] = ACTIONS(127),
    [sym_string_option_key] = ACTIONS(127),
    [anon_sym_wordwraparcs] = ACTIONS(127),
    [anon_sym_wordwrapentities] = ACTIONS(127),
    [anon_sym_wordwrapboxes] = ACTIONS(127),
    [sym_comment] = ACTIONS(7),
  },
  [38] = {
    [anon_sym_PIPE_PIPE_PIPE] = ACTIONS(129),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(129),
    [sym_comment_arc] = ACTIONS(131),
    [sym_curly_bracket_close] = ACTIONS(129),
    [sym__identifier] = ACTIONS(129),
    [anon_sym_DQUOTE] = ACTIONS(129),
    [anon_sym_STAR] = ACTIONS(131),
    [anon_sym_DQUOTE_STAR_DQUOTE] = ACTIONS(131),
    [sym_comment] = ACTIONS(35),
  },
  [39] = {
    [sym__numberlike] = STATE(74),
    [sym_number] = STATE(74),
    [sym__number] = STATE(75),
    [sym__real] = STATE(75),
    [sym_numberlike_string] = STATE(74),
    [sym__cardinal] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [sym_comment] = ACTIONS(7),
  },
  [40] = {
    [sym__booleanlike] = STATE(77),
    [sym_boolean] = STATE(77),
    [sym__boolean] = STATE(78),
    [sym_booleanlike_string] = STATE(77),
    [anon_sym_DQUOTE] = ACTIONS(135),
    [anon_sym_true] = ACTIONS(137),
    [anon_sym_false] = ACTIONS(137),
    [anon_sym_on] = ACTIONS(137),
    [anon_sym_off] = ACTIONS(137),
    [anon_sym_0] = ACTIONS(137),
    [anon_sym_1] = ACTIONS(137),
    [sym_comment] = ACTIONS(7),
  },
  [41] = {
    [sym_forward_arrow] = STATE(53),
    [sym_backward_arrow] = STATE(54),
    [sym_bidirectional_arrow] = STATE(53),
    [sym_box] = STATE(54),
    [sym_inline_expression_token] = STATE(55),
    [anon_sym_DASH_GT] = ACTIONS(83),
    [anon_sym_EQ_GT] = ACTIONS(85),
    [anon_sym_COLON_GT] = ACTIONS(83),
    [anon_sym_EQ_GT_GT] = ACTIONS(83),
    [anon_sym_GT_GT] = ACTIONS(83),
    [anon_sym_DASHx] = ACTIONS(83),
    [anon_sym_DASHX] = ACTIONS(83),
    [anon_sym_LT_DASH] = ACTIONS(87),
    [anon_sym_LT_EQ] = ACTIONS(87),
    [anon_sym_LT_COLON] = ACTIONS(87),
    [anon_sym_LT_LT_EQ] = ACTIONS(87),
    [anon_sym_LT_LT] = ACTIONS(87),
    [anon_sym_x_DASH] = ACTIONS(89),
    [anon_sym_X_DASH] = ACTIONS(89),
    [anon_sym_LT_DASH_GT] = ACTIONS(91),
    [anon_sym_LT_EQ_GT] = ACTIONS(91),
    [anon_sym_LT_COLON_GT] = ACTIONS(91),
    [anon_sym_LT_LT_EQ_GT_GT] = ACTIONS(91),
    [anon_sym_LT_LT_GT_GT] = ACTIONS(91),
    [anon_sym_DASH_DASH] = ACTIONS(91),
    [anon_sym_EQ_EQ] = ACTIONS(91),
    [anon_sym_COLON_COLON] = ACTIONS(91),
    [anon_sym_DOT_DOT] = ACTIONS(91),
    [anon_sym_note] = ACTIONS(93),
    [anon_sym_abox] = ACTIONS(93),
    [anon_sym_rbox] = ACTIONS(93),
    [anon_sym_box] = ACTIONS(93),
    [anon_sym_alt] = ACTIONS(95),
    [anon_sym_else] = ACTIONS(95),
    [anon_sym_opt] = ACTIONS(95),
    [anon_sym_break] = ACTIONS(95),
    [anon_sym_par] = ACTIONS(95),
    [anon_sym_seq] = ACTIONS(95),
    [anon_sym_strict] = ACTIONS(95),
    [anon_sym_neg] = ACTIONS(95),
    [anon_sym_critical] = ACTIONS(95),
    [anon_sym_ignore] = ACTIONS(95),
    [anon_sym_consider] = ACTIONS(95),
    [anon_sym_assert] = ACTIONS(95),
    [anon_sym_loop] = ACTIONS(95),
    [anon_sym_ref] = ACTIONS(95),
    [anon_sym_exc] = ACTIONS(95),
    [sym_comment] = ACTIONS(7),
  },
  [42] = {
    [sym__identifier] = ACTIONS(139),
    [anon_sym_DQUOTE] = ACTIONS(141),
    [sym_comment] = ACTIONS(35),
  },
  [43] = {
    [anon_sym_PIPE_PIPE_PIPE] = ACTIONS(143),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(143),
    [sym_comment_arc] = ACTIONS(145),
    [sym_curly_bracket_close] = ACTIONS(143),
    [sym__identifier] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [anon_sym_STAR] = ACTIONS(145),
    [anon_sym_DQUOTE_STAR_DQUOTE] = ACTIONS(145),
    [sym_comment] = ACTIONS(35),
  },
  [44] = {
    [anon_sym_PIPE_PIPE_PIPE] = ACTIONS(147),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(147),
    [sym_comment_arc] = ACTIONS(149),
    [sym__identifier] = ACTIONS(147),
    [anon_sym_DQUOTE] = ACTIONS(147),
    [anon_sym_STAR] = ACTIONS(149),
    [anon_sym_DQUOTE_STAR_DQUOTE] = ACTIONS(149),
    [sym_comment] = ACTIONS(35),
  },
  [45] = {
    [anon_sym_PIPE_PIPE_PIPE] = ACTIONS(151),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(151),
    [sym_comment_arc] = ACTIONS(153),
    [sym_curly_bracket_close] = ACTIONS(151),
    [sym__identifier] = ACTIONS(151),
    [anon_sym_DQUOTE] = ACTIONS(151),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_DQUOTE_STAR_DQUOTE] = ACTIONS(153),
    [sym_comment] = ACTIONS(35),
  },
  [46] = {
    [sym__identifier] = ACTIONS(155),
    [anon_sym_DQUOTE] = ACTIONS(155),
    [anon_sym_STAR] = ACTIONS(157),
    [anon_sym_DQUOTE_STAR_DQUOTE] = ACTIONS(157),
    [sym_comment] = ACTIONS(35),
  },
  [47] = {
    [sym__identifier] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(161),
    [sym_comment] = ACTIONS(35),
  },
  [48] = {
    [sym__identifier] = ACTIONS(163),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [anon_sym_STAR] = ACTIONS(165),
    [anon_sym_DQUOTE_STAR_DQUOTE] = ACTIONS(165),
    [sym_comment] = ACTIONS(35),
  },
  [49] = {
    [sym__identifier] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [sym_comment] = ACTIONS(35),
  },
  [50] = {
    [sym__identifier] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [sym_comment] = ACTIONS(35),
  },
  [51] = {
    [sym_entity_attribute] = STATE(82),
    [sym__boolean_entity_attribute] = STATE(83),
    [sym__string_entity_attribute] = STATE(83),
    [sym_string_entity_attribute_key] = STATE(84),
    [aux_sym_entity_attributes_repeat1] = STATE(85),
    [sym_boolean_entity_attribute_key] = ACTIONS(175),
    [anon_sym_label] = ACTIONS(177),
    [anon_sym_idurl] = ACTIONS(177),
    [anon_sym_id] = ACTIONS(179),
    [anon_sym_url] = ACTIONS(177),
    [anon_sym_linecolor] = ACTIONS(177),
    [anon_sym_linecolour] = ACTIONS(177),
    [anon_sym_textcolor] = ACTIONS(177),
    [anon_sym_textcolour] = ACTIONS(177),
    [anon_sym_textbgcolor] = ACTIONS(177),
    [anon_sym_textbgcolour] = ACTIONS(177),
    [anon_sym_arclinecolor] = ACTIONS(177),
    [anon_sym_arclinecolour] = ACTIONS(177),
    [anon_sym_arctextcolor] = ACTIONS(177),
    [anon_sym_arctextcolour] = ACTIONS(177),
    [anon_sym_arctextbgcolor] = ACTIONS(177),
    [anon_sym_arctextbgcolour] = ACTIONS(177),
    [anon_sym_title] = ACTIONS(177),
    [sym_square_bracket_close] = ACTIONS(181),
    [sym_comment] = ACTIONS(7),
  },
  [52] = {
    [sym_comma] = ACTIONS(183),
    [sym_semicolon] = ACTIONS(183),
    [sym_comment] = ACTIONS(7),
  },
  [53] = {
    [sym_entity_identifier] = STATE(86),
    [sym__quoted_string] = STATE(13),
    [sym_entity_wildcard] = STATE(86),
    [sym__identifier] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_DQUOTE_STAR_DQUOTE] = ACTIONS(33),
    [sym_comment] = ACTIONS(35),
  },
  [54] = {
    [sym_entity_identifier] = STATE(86),
    [sym__quoted_string] = STATE(13),
    [sym__identifier] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [sym_comment] = ACTIONS(35),
  },
  [55] = {
    [sym_entity_identifier] = STATE(87),
    [sym__quoted_string] = STATE(13),
    [sym__identifier] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [sym_comment] = ACTIONS(35),
  },
  [56] = {
    [sym_comma] = ACTIONS(63),
    [sym_semicolon] = ACTIONS(185),
    [sym_comment] = ACTIONS(7),
  },
  [57] = {
    [sym_option] = STATE(89),
    [sym__numerical_option] = STATE(18),
    [sym_numerical_option_key] = STATE(19),
    [sym__size_option] = STATE(18),
    [sym__string_option] = STATE(18),
    [sym__boolean_option] = STATE(18),
    [sym_boolean_option_key] = STATE(20),
    [aux_sym_options_repeat1] = STATE(57),
    [anon_sym_hscale] = ACTIONS(187),
    [anon_sym_arcgradient] = ACTIONS(187),
    [sym_size_option_key] = ACTIONS(190),
    [sym_string_option_key] = ACTIONS(193),
    [anon_sym_wordwraparcs] = ACTIONS(196),
    [anon_sym_wordwrapentities] = ACTIONS(196),
    [anon_sym_wordwrapboxes] = ACTIONS(196),
    [sym_comment] = ACTIONS(7),
  },
  [58] = {
    [sym_comma] = ACTIONS(73),
    [sym_semicolon] = ACTIONS(199),
    [sym_comment] = ACTIONS(7),
  },
  [59] = {
    [sym_entity_attributes] = STATE(52),
    [sym_square_bracket_open] = ACTIONS(97),
    [sym_comma] = ACTIONS(99),
    [sym_semicolon] = ACTIONS(99),
    [sym_comment] = ACTIONS(7),
  },
  [60] = {
    [sym_entity] = STATE(91),
    [sym_entity_identifier] = STATE(59),
    [sym__quoted_string] = STATE(13),
    [aux_sym_entities_repeat1] = STATE(60),
    [sym__identifier] = ACTIONS(201),
    [anon_sym_DQUOTE] = ACTIONS(204),
    [sym_comment] = ACTIONS(35),
  },
  [61] = {
    [sym_comma] = ACTIONS(79),
    [sym_semicolon] = ACTIONS(207),
    [sym_comment] = ACTIONS(7),
  },
  [62] = {
    [sym_arc] = STATE(93),
    [sym__dual_arc] = STATE(11),
    [sym_single_arc] = STATE(11),
    [sym__inline_expression_arc] = STATE(11),
    [sym_entity_identifier] = STATE(41),
    [sym__quoted_string] = STATE(13),
    [sym_entity_wildcard] = STATE(26),
    [aux_sym_arcs_repeat1] = STATE(62),
    [anon_sym_PIPE_PIPE_PIPE] = ACTIONS(209),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(209),
    [sym_comment_arc] = ACTIONS(212),
    [sym__identifier] = ACTIONS(215),
    [anon_sym_DQUOTE] = ACTIONS(218),
    [anon_sym_STAR] = ACTIONS(221),
    [anon_sym_DQUOTE_STAR_DQUOTE] = ACTIONS(221),
    [sym_comment] = ACTIONS(35),
  },
  [63] = {
    [sym_arc] = STATE(24),
    [sym__dual_arc] = STATE(11),
    [sym_single_arc] = STATE(11),
    [sym__inline_expression_arc] = STATE(11),
    [sym_entity_identifier] = STATE(41),
    [sym__quoted_string] = STATE(13),
    [sym_entity_wildcard] = STATE(26),
    [aux_sym_arcs_repeat1] = STATE(29),
    [aux_sym_arcs_repeat2] = STATE(63),
    [anon_sym_PIPE_PIPE_PIPE] = ACTIONS(224),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(224),
    [sym_comment_arc] = ACTIONS(227),
    [sym_curly_bracket_close] = ACTIONS(151),
    [sym__identifier] = ACTIONS(230),
    [anon_sym_DQUOTE] = ACTIONS(233),
    [anon_sym_STAR] = ACTIONS(236),
    [anon_sym_DQUOTE_STAR_DQUOTE] = ACTIONS(236),
    [sym_comment] = ACTIONS(35),
  },
  [64] = {
    [sym_comma] = ACTIONS(239),
    [sym_semicolon] = ACTIONS(239),
    [sym__dot] = ACTIONS(241),
    [anon_sym_DQUOTE] = ACTIONS(239),
    [sym_comment] = ACTIONS(7),
  },
  [65] = {
    [sym__number] = STATE(95),
    [sym__real] = STATE(95),
    [sym__size] = STATE(95),
    [sym__cardinal] = ACTIONS(113),
    [anon_sym_auto] = ACTIONS(243),
    [sym_comment] = ACTIONS(7),
  },
  [66] = {
    [sym_comma] = ACTIONS(245),
    [sym_semicolon] = ACTIONS(245),
    [sym_comment] = ACTIONS(7),
  },
  [67] = {
    [sym_comma] = ACTIONS(247),
    [sym_semicolon] = ACTIONS(247),
    [sym_comment] = ACTIONS(7),
  },
  [68] = {
    [sym_comma] = ACTIONS(249),
    [sym_semicolon] = ACTIONS(249),
    [sym_comment] = ACTIONS(7),
  },
  [69] = {
    [sym_square_bracket_close] = ACTIONS(251),
    [sym_comma] = ACTIONS(251),
    [sym_semicolon] = ACTIONS(251),
    [sym_comment] = ACTIONS(7),
  },
  [70] = {
    [anon_sym_DASH_GT] = ACTIONS(253),
    [anon_sym_EQ_GT] = ACTIONS(255),
    [anon_sym_COLON_GT] = ACTIONS(253),
    [anon_sym_EQ_GT_GT] = ACTIONS(253),
    [anon_sym_GT_GT] = ACTIONS(253),
    [anon_sym_DASHx] = ACTIONS(253),
    [anon_sym_DASHX] = ACTIONS(253),
    [anon_sym_LT_DASH] = ACTIONS(255),
    [anon_sym_LT_EQ] = ACTIONS(255),
    [anon_sym_LT_COLON] = ACTIONS(255),
    [anon_sym_LT_LT_EQ] = ACTIONS(255),
    [anon_sym_LT_LT] = ACTIONS(255),
    [anon_sym_x_DASH] = ACTIONS(253),
    [anon_sym_X_DASH] = ACTIONS(253),
    [anon_sym_LT_DASH_GT] = ACTIONS(253),
    [anon_sym_LT_EQ_GT] = ACTIONS(253),
    [anon_sym_LT_COLON_GT] = ACTIONS(253),
    [anon_sym_LT_LT_EQ_GT_GT] = ACTIONS(253),
    [anon_sym_LT_LT_GT_GT] = ACTIONS(253),
    [anon_sym_DASH_DASH] = ACTIONS(253),
    [anon_sym_EQ_EQ] = ACTIONS(253),
    [anon_sym_COLON_COLON] = ACTIONS(253),
    [anon_sym_DOT_DOT] = ACTIONS(253),
    [anon_sym_note] = ACTIONS(253),
    [anon_sym_abox] = ACTIONS(253),
    [anon_sym_rbox] = ACTIONS(253),
    [anon_sym_box] = ACTIONS(253),
    [anon_sym_alt] = ACTIONS(253),
    [anon_sym_else] = ACTIONS(253),
    [anon_sym_opt] = ACTIONS(253),
    [anon_sym_break] = ACTIONS(253),
    [anon_sym_par] = ACTIONS(253),
    [anon_sym_seq] = ACTIONS(253),
    [anon_sym_strict] = ACTIONS(253),
    [anon_sym_neg] = ACTIONS(253),
    [anon_sym_critical] = ACTIONS(253),
    [anon_sym_ignore] = ACTIONS(253),
    [anon_sym_consider] = ACTIONS(253),
    [anon_sym_assert] = ACTIONS(253),
    [anon_sym_loop] = ACTIONS(253),
    [anon_sym_ref] = ACTIONS(253),
    [anon_sym_exc] = ACTIONS(253),
    [sym_curly_bracket_open] = ACTIONS(253),
    [sym_square_bracket_open] = ACTIONS(253),
    [sym_square_bracket_close] = ACTIONS(253),
    [sym_comma] = ACTIONS(253),
    [sym_semicolon] = ACTIONS(253),
    [sym_comment] = ACTIONS(7),
  },
  [71] = {
    [ts_builtin_sym_end] = ACTIONS(257),
    [sym_comment] = ACTIONS(7),
  },
  [72] = {
    [sym_curly_bracket_close] = ACTIONS(259),
    [sym_comment] = ACTIONS(7),
  },
  [73] = {
    [sym__number] = STATE(97),
    [sym__real] = STATE(97),
    [sym__cardinal] = ACTIONS(113),
    [sym_comment] = ACTIONS(7),
  },
  [74] = {
    [sym_comma] = ACTIONS(261),
    [sym_semicolon] = ACTIONS(261),
    [sym_comment] = ACTIONS(7),
  },
  [75] = {
    [sym_comma] = ACTIONS(263),
    [sym_semicolon] = ACTIONS(263),
    [sym_comment] = ACTIONS(7),
  },
  [76] = {
    [sym__boolean] = STATE(98),
    [anon_sym_true] = ACTIONS(265),
    [anon_sym_false] = ACTIONS(265),
    [anon_sym_on] = ACTIONS(265),
    [anon_sym_off] = ACTIONS(265),
    [anon_sym_0] = ACTIONS(265),
    [anon_sym_1] = ACTIONS(265),
    [sym_comment] = ACTIONS(7),
  },
  [77] = {
    [sym_comma] = ACTIONS(267),
    [sym_semicolon] = ACTIONS(267),
    [sym_comment] = ACTIONS(7),
  },
  [78] = {
    [sym_square_bracket_close] = ACTIONS(269),
    [sym_comma] = ACTIONS(269),
    [sym_semicolon] = ACTIONS(269),
    [sym_comment] = ACTIONS(7),
  },
  [79] = {
    [sym_square_bracket_close] = ACTIONS(271),
    [sym_equals] = ACTIONS(273),
    [sym_comma] = ACTIONS(271),
    [sym_comment] = ACTIONS(7),
  },
  [80] = {
    [sym_equals] = ACTIONS(275),
    [sym_comment] = ACTIONS(7),
  },
  [81] = {
    [sym_comma] = ACTIONS(277),
    [sym_semicolon] = ACTIONS(277),
    [sym_comment] = ACTIONS(7),
  },
  [82] = {
    [sym_square_bracket_close] = ACTIONS(279),
    [sym_comma] = ACTIONS(281),
    [sym_comment] = ACTIONS(7),
  },
  [83] = {
    [sym_square_bracket_close] = ACTIONS(283),
    [sym_comma] = ACTIONS(283),
    [sym_comment] = ACTIONS(7),
  },
  [84] = {
    [sym_equals] = ACTIONS(285),
    [sym_comment] = ACTIONS(7),
  },
  [85] = {
    [sym_entity_attribute] = STATE(103),
    [sym__boolean_entity_attribute] = STATE(83),
    [sym__string_entity_attribute] = STATE(83),
    [sym_string_entity_attribute_key] = STATE(84),
    [aux_sym_entity_attributes_repeat1] = STATE(104),
    [sym_boolean_entity_attribute_key] = ACTIONS(175),
    [anon_sym_label] = ACTIONS(177),
    [anon_sym_idurl] = ACTIONS(177),
    [anon_sym_id] = ACTIONS(179),
    [anon_sym_url] = ACTIONS(177),
    [anon_sym_linecolor] = ACTIONS(177),
    [anon_sym_linecolour] = ACTIONS(177),
    [anon_sym_textcolor] = ACTIONS(177),
    [anon_sym_textcolour] = ACTIONS(177),
    [anon_sym_textbgcolor] = ACTIONS(177),
    [anon_sym_textbgcolour] = ACTIONS(177),
    [anon_sym_arclinecolor] = ACTIONS(177),
    [anon_sym_arclinecolour] = ACTIONS(177),
    [anon_sym_arctextcolor] = ACTIONS(177),
    [anon_sym_arctextcolour] = ACTIONS(177),
    [anon_sym_arctextbgcolor] = ACTIONS(177),
    [anon_sym_arctextbgcolour] = ACTIONS(177),
    [anon_sym_title] = ACTIONS(177),
    [sym_comment] = ACTIONS(7),
  },
  [86] = {
    [sym_comma] = ACTIONS(287),
    [sym_semicolon] = ACTIONS(287),
    [sym_comment] = ACTIONS(7),
  },
  [87] = {
    [sym_inline_expression] = STATE(106),
    [sym_curly_bracket_open] = ACTIONS(289),
    [sym_comment] = ACTIONS(7),
  },
  [88] = {
    [anon_sym_PIPE_PIPE_PIPE] = ACTIONS(291),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(291),
    [sym_comment_arc] = ACTIONS(293),
    [sym_curly_bracket_close] = ACTIONS(291),
    [sym__identifier] = ACTIONS(291),
    [anon_sym_DQUOTE] = ACTIONS(291),
    [anon_sym_STAR] = ACTIONS(293),
    [anon_sym_DQUOTE_STAR_DQUOTE] = ACTIONS(293),
    [sym_comment] = ACTIONS(35),
  },
  [89] = {
    [sym_comma] = ACTIONS(63),
    [sym_comment] = ACTIONS(7),
  },
  [90] = {
    [anon_sym_PIPE_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(295),
    [sym_comment_arc] = ACTIONS(297),
    [sym_curly_bracket_close] = ACTIONS(295),
    [sym__identifier] = ACTIONS(295),
    [anon_sym_DQUOTE] = ACTIONS(295),
    [anon_sym_STAR] = ACTIONS(297),
    [anon_sym_DQUOTE_STAR_DQUOTE] = ACTIONS(297),
    [sym_comment] = ACTIONS(35),
  },
  [91] = {
    [sym_comma] = ACTIONS(73),
    [sym_comment] = ACTIONS(7),
  },
  [92] = {
    [anon_sym_PIPE_PIPE_PIPE] = ACTIONS(299),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(299),
    [sym_comment_arc] = ACTIONS(301),
    [sym_curly_bracket_close] = ACTIONS(299),
    [sym__identifier] = ACTIONS(299),
    [anon_sym_DQUOTE] = ACTIONS(299),
    [anon_sym_STAR] = ACTIONS(301),
    [anon_sym_DQUOTE_STAR_DQUOTE] = ACTIONS(301),
    [sym_comment] = ACTIONS(35),
  },
  [93] = {
    [sym_comma] = ACTIONS(79),
    [sym_comment] = ACTIONS(7),
  },
  [94] = {
    [sym__cardinal] = ACTIONS(303),
    [sym_comment] = ACTIONS(7),
  },
  [95] = {
    [anon_sym_DQUOTE] = ACTIONS(305),
    [sym_comment] = ACTIONS(7),
  },
  [96] = {
    [ts_builtin_sym_end] = ACTIONS(307),
    [sym_comment] = ACTIONS(7),
  },
  [97] = {
    [anon_sym_DQUOTE] = ACTIONS(309),
    [sym_comment] = ACTIONS(7),
  },
  [98] = {
    [anon_sym_DQUOTE] = ACTIONS(311),
    [sym_comment] = ACTIONS(7),
  },
  [99] = {
    [sym__booleanlike] = STATE(111),
    [sym_boolean] = STATE(111),
    [sym__boolean] = STATE(78),
    [sym_booleanlike_string] = STATE(111),
    [anon_sym_DQUOTE] = ACTIONS(135),
    [anon_sym_true] = ACTIONS(137),
    [anon_sym_false] = ACTIONS(137),
    [anon_sym_on] = ACTIONS(137),
    [anon_sym_off] = ACTIONS(137),
    [anon_sym_0] = ACTIONS(137),
    [anon_sym_1] = ACTIONS(137),
    [sym_comment] = ACTIONS(7),
  },
  [100] = {
    [sym_comma] = ACTIONS(313),
    [sym_semicolon] = ACTIONS(313),
    [sym_comment] = ACTIONS(7),
  },
  [101] = {
    [sym_boolean_entity_attribute_key] = ACTIONS(315),
    [anon_sym_label] = ACTIONS(315),
    [anon_sym_idurl] = ACTIONS(315),
    [anon_sym_id] = ACTIONS(317),
    [anon_sym_url] = ACTIONS(315),
    [anon_sym_linecolor] = ACTIONS(315),
    [anon_sym_linecolour] = ACTIONS(315),
    [anon_sym_textcolor] = ACTIONS(315),
    [anon_sym_textcolour] = ACTIONS(315),
    [anon_sym_textbgcolor] = ACTIONS(315),
    [anon_sym_textbgcolour] = ACTIONS(315),
    [anon_sym_arclinecolor] = ACTIONS(315),
    [anon_sym_arclinecolour] = ACTIONS(315),
    [anon_sym_arctextcolor] = ACTIONS(315),
    [anon_sym_arctextcolour] = ACTIONS(315),
    [anon_sym_arctextbgcolor] = ACTIONS(315),
    [anon_sym_arctextbgcolour] = ACTIONS(315),
    [anon_sym_title] = ACTIONS(315),
    [sym_comment] = ACTIONS(7),
  },
  [102] = {
    [sym_string] = STATE(112),
    [sym__quoted_string] = STATE(69),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [sym_comment] = ACTIONS(7),
  },
  [103] = {
    [sym_square_bracket_close] = ACTIONS(319),
    [sym_comma] = ACTIONS(281),
    [sym_comment] = ACTIONS(7),
  },
  [104] = {
    [sym_entity_attribute] = STATE(114),
    [sym__boolean_entity_attribute] = STATE(83),
    [sym__string_entity_attribute] = STATE(83),
    [sym_string_entity_attribute_key] = STATE(84),
    [aux_sym_entity_attributes_repeat1] = STATE(104),
    [sym_boolean_entity_attribute_key] = ACTIONS(321),
    [anon_sym_label] = ACTIONS(324),
    [anon_sym_idurl] = ACTIONS(324),
    [anon_sym_id] = ACTIONS(327),
    [anon_sym_url] = ACTIONS(324),
    [anon_sym_linecolor] = ACTIONS(324),
    [anon_sym_linecolour] = ACTIONS(324),
    [anon_sym_textcolor] = ACTIONS(324),
    [anon_sym_textcolour] = ACTIONS(324),
    [anon_sym_textbgcolor] = ACTIONS(324),
    [anon_sym_textbgcolour] = ACTIONS(324),
    [anon_sym_arclinecolor] = ACTIONS(324),
    [anon_sym_arclinecolour] = ACTIONS(324),
    [anon_sym_arctextcolor] = ACTIONS(324),
    [anon_sym_arctextcolour] = ACTIONS(324),
    [anon_sym_arctextbgcolor] = ACTIONS(324),
    [anon_sym_arctextbgcolour] = ACTIONS(324),
    [anon_sym_title] = ACTIONS(324),
    [sym_comment] = ACTIONS(7),
  },
  [105] = {
    [sym_arcs] = STATE(116),
    [sym_arc] = STATE(24),
    [sym__dual_arc] = STATE(11),
    [sym_single_arc] = STATE(11),
    [sym__inline_expression_arc] = STATE(11),
    [sym_entity_identifier] = STATE(41),
    [sym__quoted_string] = STATE(13),
    [sym_entity_wildcard] = STATE(26),
    [aux_sym_arcs_repeat1] = STATE(29),
    [aux_sym_arcs_repeat2] = STATE(30),
    [anon_sym_PIPE_PIPE_PIPE] = ACTIONS(23),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(23),
    [sym_comment_arc] = ACTIONS(25),
    [sym_curly_bracket_close] = ACTIONS(330),
    [sym__identifier] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_DQUOTE_STAR_DQUOTE] = ACTIONS(33),
    [sym_comment] = ACTIONS(35),
  },
  [106] = {
    [sym_comma] = ACTIONS(332),
    [sym_semicolon] = ACTIONS(332),
    [sym_comment] = ACTIONS(7),
  },
  [107] = {
    [sym_comma] = ACTIONS(334),
    [sym_semicolon] = ACTIONS(334),
    [anon_sym_DQUOTE] = ACTIONS(334),
    [sym_comment] = ACTIONS(7),
  },
  [108] = {
    [sym_comma] = ACTIONS(336),
    [sym_semicolon] = ACTIONS(336),
    [sym_comment] = ACTIONS(7),
  },
  [109] = {
    [sym_comma] = ACTIONS(338),
    [sym_semicolon] = ACTIONS(338),
    [sym_comment] = ACTIONS(7),
  },
  [110] = {
    [sym_square_bracket_close] = ACTIONS(340),
    [sym_comma] = ACTIONS(340),
    [sym_semicolon] = ACTIONS(340),
    [sym_comment] = ACTIONS(7),
  },
  [111] = {
    [sym_square_bracket_close] = ACTIONS(342),
    [sym_comma] = ACTIONS(342),
    [sym_comment] = ACTIONS(7),
  },
  [112] = {
    [sym_square_bracket_close] = ACTIONS(344),
    [sym_comma] = ACTIONS(344),
    [sym_comment] = ACTIONS(7),
  },
  [113] = {
    [sym_comma] = ACTIONS(346),
    [sym_semicolon] = ACTIONS(346),
    [sym_comment] = ACTIONS(7),
  },
  [114] = {
    [sym_comma] = ACTIONS(281),
    [sym_comment] = ACTIONS(7),
  },
  [115] = {
    [sym_comma] = ACTIONS(348),
    [sym_semicolon] = ACTIONS(348),
    [sym_comment] = ACTIONS(7),
  },
  [116] = {
    [sym_curly_bracket_close] = ACTIONS(350),
    [sym_comment] = ACTIONS(7),
  },
  [117] = {
    [sym_comma] = ACTIONS(352),
    [sym_semicolon] = ACTIONS(352),
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
  [23] = {.count = 1, .reusable = false}, SHIFT(10),
  [25] = {.count = 1, .reusable = true}, SHIFT(11),
  [27] = {.count = 1, .reusable = false}, SHIFT(12),
  [29] = {.count = 1, .reusable = false}, SHIFT(13),
  [31] = {.count = 1, .reusable = false}, SHIFT(14),
  [33] = {.count = 1, .reusable = true}, SHIFT(15),
  [35] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym_numerical_option_key, 1),
  [39] = {.count = 1, .reusable = true}, SHIFT(31),
  [41] = {.count = 1, .reusable = true}, SHIFT(32),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym_boolean_option_key, 1),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_single_arc, 1),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_arc, 1),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym_sequence_chart, 3),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_entity_identifier, 1),
  [53] = {.count = 1, .reusable = false}, REDUCE(sym_entity_identifier, 1),
  [55] = {.count = 1, .reusable = false}, SHIFT(33),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_entity_wildcard, 1),
  [59] = {.count = 1, .reusable = false}, REDUCE(sym_entity_wildcard, 1),
  [61] = {.count = 1, .reusable = false}, SHIFT(34),
  [63] = {.count = 1, .reusable = true}, SHIFT(37),
  [65] = {.count = 1, .reusable = true}, SHIFT(38),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym_option, 1),
  [69] = {.count = 1, .reusable = true}, SHIFT(39),
  [71] = {.count = 1, .reusable = true}, SHIFT(40),
  [73] = {.count = 1, .reusable = true}, SHIFT(42),
  [75] = {.count = 1, .reusable = true}, SHIFT(43),
  [77] = {.count = 1, .reusable = true}, SHIFT(34),
  [79] = {.count = 1, .reusable = true}, SHIFT(44),
  [81] = {.count = 1, .reusable = true}, SHIFT(45),
  [83] = {.count = 1, .reusable = true}, SHIFT(46),
  [85] = {.count = 1, .reusable = false}, SHIFT(46),
  [87] = {.count = 1, .reusable = false}, SHIFT(47),
  [89] = {.count = 1, .reusable = true}, SHIFT(47),
  [91] = {.count = 1, .reusable = true}, SHIFT(48),
  [93] = {.count = 1, .reusable = true}, SHIFT(49),
  [95] = {.count = 1, .reusable = true}, SHIFT(50),
  [97] = {.count = 1, .reusable = true}, SHIFT(51),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym_entity, 1),
  [101] = {.count = 1, .reusable = true}, SHIFT(6),
  [103] = {.count = 1, .reusable = true}, SHIFT(7),
  [105] = {.count = 1, .reusable = true}, SHIFT(8),
  [107] = {.count = 1, .reusable = true}, SHIFT(9),
  [109] = {.count = 1, .reusable = true}, SHIFT(14),
  [111] = {.count = 1, .reusable = false}, REDUCE(sym_arcs, 1),
  [113] = {.count = 1, .reusable = true}, SHIFT(64),
  [115] = {.count = 1, .reusable = true}, SHIFT(65),
  [117] = {.count = 1, .reusable = true}, SHIFT(67),
  [119] = {.count = 1, .reusable = true}, SHIFT(70),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym_sequence_chart, 4),
  [123] = {.count = 1, .reusable = false}, SHIFT(71),
  [125] = {.count = 1, .reusable = true}, SHIFT(71),
  [127] = {.count = 1, .reusable = true}, REDUCE(aux_sym_options_repeat1, 2),
  [129] = {.count = 1, .reusable = false}, REDUCE(sym_options, 2),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym_options, 2),
  [133] = {.count = 1, .reusable = true}, SHIFT(73),
  [135] = {.count = 1, .reusable = true}, SHIFT(76),
  [137] = {.count = 1, .reusable = true}, SHIFT(78),
  [139] = {.count = 1, .reusable = false}, REDUCE(aux_sym_entities_repeat1, 2),
  [141] = {.count = 1, .reusable = true}, REDUCE(aux_sym_entities_repeat1, 2),
  [143] = {.count = 1, .reusable = false}, REDUCE(sym_entities, 2),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym_entities, 2),
  [147] = {.count = 1, .reusable = false}, REDUCE(aux_sym_arcs_repeat1, 2),
  [149] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arcs_repeat1, 2),
  [151] = {.count = 1, .reusable = false}, REDUCE(aux_sym_arcs_repeat2, 2),
  [153] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arcs_repeat2, 2),
  [155] = {.count = 1, .reusable = false}, REDUCE(sym_forward_arrow, 1),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym_forward_arrow, 1),
  [159] = {.count = 1, .reusable = false}, REDUCE(sym_backward_arrow, 1),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_backward_arrow, 1),
  [163] = {.count = 1, .reusable = false}, REDUCE(sym_bidirectional_arrow, 1),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_bidirectional_arrow, 1),
  [167] = {.count = 1, .reusable = false}, REDUCE(sym_box, 1),
  [169] = {.count = 1, .reusable = true}, REDUCE(sym_box, 1),
  [171] = {.count = 1, .reusable = false}, REDUCE(sym_inline_expression_token, 1),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym_inline_expression_token, 1),
  [175] = {.count = 1, .reusable = true}, SHIFT(79),
  [177] = {.count = 1, .reusable = true}, SHIFT(80),
  [179] = {.count = 1, .reusable = false}, SHIFT(80),
  [181] = {.count = 1, .reusable = true}, SHIFT(81),
  [183] = {.count = 1, .reusable = true}, REDUCE(sym_entity, 2),
  [185] = {.count = 1, .reusable = true}, SHIFT(88),
  [187] = {.count = 2, .reusable = true}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(6),
  [190] = {.count = 2, .reusable = true}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(7),
  [193] = {.count = 2, .reusable = true}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(8),
  [196] = {.count = 2, .reusable = true}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(9),
  [199] = {.count = 1, .reusable = true}, SHIFT(90),
  [201] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entities_repeat1, 2), SHIFT_REPEAT(13),
  [204] = {.count = 2, .reusable = true}, REDUCE(aux_sym_entities_repeat1, 2), SHIFT_REPEAT(14),
  [207] = {.count = 1, .reusable = true}, SHIFT(92),
  [209] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arcs_repeat1, 2), SHIFT_REPEAT(10),
  [212] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arcs_repeat1, 2), SHIFT_REPEAT(11),
  [215] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arcs_repeat1, 2), SHIFT_REPEAT(13),
  [218] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arcs_repeat1, 2), SHIFT_REPEAT(14),
  [221] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arcs_repeat1, 2), SHIFT_REPEAT(15),
  [224] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arcs_repeat2, 2), SHIFT_REPEAT(10),
  [227] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arcs_repeat2, 2), SHIFT_REPEAT(11),
  [230] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arcs_repeat2, 2), SHIFT_REPEAT(13),
  [233] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arcs_repeat2, 2), SHIFT_REPEAT(14),
  [236] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arcs_repeat2, 2), SHIFT_REPEAT(15),
  [239] = {.count = 1, .reusable = true}, REDUCE(sym__number, 1),
  [241] = {.count = 1, .reusable = true}, SHIFT(94),
  [243] = {.count = 1, .reusable = true}, SHIFT(95),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym__size_option, 3),
  [247] = {.count = 1, .reusable = true}, REDUCE(sym_size, 1),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym__string_option, 3),
  [251] = {.count = 1, .reusable = true}, REDUCE(sym_string, 1),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym__quoted_string, 3),
  [255] = {.count = 1, .reusable = false}, REDUCE(sym__quoted_string, 3),
  [257] = {.count = 1, .reusable = true}, REDUCE(sym_sequence_chart, 5),
  [259] = {.count = 1, .reusable = true}, SHIFT(96),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym__numerical_option, 3),
  [263] = {.count = 1, .reusable = true}, REDUCE(sym_number, 1),
  [265] = {.count = 1, .reusable = true}, SHIFT(98),
  [267] = {.count = 1, .reusable = true}, REDUCE(sym__boolean_option, 3),
  [269] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 1),
  [271] = {.count = 1, .reusable = true}, REDUCE(sym__boolean_entity_attribute, 1),
  [273] = {.count = 1, .reusable = true}, SHIFT(99),
  [275] = {.count = 1, .reusable = true}, REDUCE(sym_string_entity_attribute_key, 1),
  [277] = {.count = 1, .reusable = true}, REDUCE(sym_entity_attributes, 2),
  [279] = {.count = 1, .reusable = true}, SHIFT(100),
  [281] = {.count = 1, .reusable = true}, SHIFT(101),
  [283] = {.count = 1, .reusable = true}, REDUCE(sym_entity_attribute, 1),
  [285] = {.count = 1, .reusable = true}, SHIFT(102),
  [287] = {.count = 1, .reusable = true}, REDUCE(sym__dual_arc, 3),
  [289] = {.count = 1, .reusable = true}, SHIFT(105),
  [291] = {.count = 1, .reusable = false}, REDUCE(sym_options, 3),
  [293] = {.count = 1, .reusable = true}, REDUCE(sym_options, 3),
  [295] = {.count = 1, .reusable = false}, REDUCE(sym_entities, 3),
  [297] = {.count = 1, .reusable = true}, REDUCE(sym_entities, 3),
  [299] = {.count = 1, .reusable = false}, REDUCE(aux_sym_arcs_repeat2, 3),
  [301] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arcs_repeat2, 3),
  [303] = {.count = 1, .reusable = true}, SHIFT(107),
  [305] = {.count = 1, .reusable = true}, SHIFT(108),
  [307] = {.count = 1, .reusable = true}, REDUCE(sym_sequence_chart, 6),
  [309] = {.count = 1, .reusable = true}, SHIFT(109),
  [311] = {.count = 1, .reusable = true}, SHIFT(110),
  [313] = {.count = 1, .reusable = true}, REDUCE(sym_entity_attributes, 3),
  [315] = {.count = 1, .reusable = true}, REDUCE(aux_sym_entity_attributes_repeat1, 2),
  [317] = {.count = 1, .reusable = false}, REDUCE(aux_sym_entity_attributes_repeat1, 2),
  [319] = {.count = 1, .reusable = true}, SHIFT(113),
  [321] = {.count = 2, .reusable = true}, REDUCE(aux_sym_entity_attributes_repeat1, 2), SHIFT_REPEAT(79),
  [324] = {.count = 2, .reusable = true}, REDUCE(aux_sym_entity_attributes_repeat1, 2), SHIFT_REPEAT(80),
  [327] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entity_attributes_repeat1, 2), SHIFT_REPEAT(80),
  [330] = {.count = 1, .reusable = false}, SHIFT(115),
  [332] = {.count = 1, .reusable = true}, REDUCE(sym__inline_expression_arc, 4),
  [334] = {.count = 1, .reusable = true}, REDUCE(sym__real, 3),
  [336] = {.count = 1, .reusable = true}, REDUCE(sym_sizelike_string, 3),
  [338] = {.count = 1, .reusable = true}, REDUCE(sym_numberlike_string, 3),
  [340] = {.count = 1, .reusable = true}, REDUCE(sym_booleanlike_string, 3),
  [342] = {.count = 1, .reusable = true}, REDUCE(sym__boolean_entity_attribute, 3),
  [344] = {.count = 1, .reusable = true}, REDUCE(sym__string_entity_attribute, 3),
  [346] = {.count = 1, .reusable = true}, REDUCE(sym_entity_attributes, 4),
  [348] = {.count = 1, .reusable = true}, REDUCE(sym_inline_expression, 2),
  [350] = {.count = 1, .reusable = true}, SHIFT(117),
  [352] = {.count = 1, .reusable = true}, REDUCE(sym_inline_expression, 3),
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
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
