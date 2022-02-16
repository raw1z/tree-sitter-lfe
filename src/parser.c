#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 94
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 60
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 6

enum {
  sym_symbol = 1,
  sym_comment = 2,
  sym__whitespace = 3,
  sym_float = 4,
  sym_integer = 5,
  sym_character = 6,
  sym_list_string = 7,
  anon_sym_POUND_DQUOTE = 8,
  aux_sym_binary_string_token1 = 9,
  anon_sym_BSLASH = 10,
  aux_sym_binary_string_token2 = 11,
  anon_sym_DQUOTE = 12,
  anon_sym_LPAREN = 13,
  anon_sym_size = 14,
  anon_sym_RPAREN = 15,
  anon_sym_integer = 16,
  anon_sym_float = 17,
  anon_sym_binary = 18,
  anon_sym_bytes = 19,
  anon_sym_bitstring = 20,
  anon_sym_bits = 21,
  anon_sym_utf8 = 22,
  anon_sym_utf16 = 23,
  anon_sym_utf32 = 24,
  anon_sym_signed = 25,
  anon_sym_unsigned = 26,
  anon_sym_big_DASHendian = 27,
  anon_sym_little_DASHendian = 28,
  anon_sym_native = 29,
  aux_sym_binary_segment_token1 = 30,
  anon_sym_POUNDB_LPAREN = 31,
  sym_delimited_symbol = 32,
  anon_sym_LBRACK = 33,
  anon_sym_RBRACK = 34,
  anon_sym_POUND = 35,
  anon_sym_POUNDM_LPAREN = 36,
  sym_source = 37,
  sym__form = 38,
  sym_binary_string = 39,
  sym_binary_size = 40,
  sym_binary_type = 41,
  sym_binary_signedness = 42,
  sym_binary_endianess = 43,
  sym_binary_segment = 44,
  sym_binary = 45,
  sym__paren_list = 46,
  sym__square_bracket_list = 47,
  sym_list = 48,
  sym_tuple = 49,
  sym_map_pair = 50,
  sym_map = 51,
  aux_sym_source_repeat1 = 52,
  aux_sym_binary_string_repeat1 = 53,
  aux_sym_binary_string_repeat2 = 54,
  aux_sym_binary_segment_repeat1 = 55,
  aux_sym_binary_segment_repeat2 = 56,
  aux_sym_binary_segment_repeat3 = 57,
  aux_sym_binary_repeat1 = 58,
  aux_sym_map_repeat1 = 59,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_symbol] = "symbol",
  [sym_comment] = "comment",
  [sym__whitespace] = "_whitespace",
  [sym_float] = "float",
  [sym_integer] = "integer",
  [sym_character] = "character",
  [sym_list_string] = "list_string",
  [anon_sym_POUND_DQUOTE] = "#\"",
  [aux_sym_binary_string_token1] = "binary_string_token1",
  [anon_sym_BSLASH] = "\\",
  [aux_sym_binary_string_token2] = "binary_string_token2",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_LPAREN] = "(",
  [anon_sym_size] = "size",
  [anon_sym_RPAREN] = ")",
  [anon_sym_integer] = "integer",
  [anon_sym_float] = "float",
  [anon_sym_binary] = "binary",
  [anon_sym_bytes] = "bytes",
  [anon_sym_bitstring] = "bitstring",
  [anon_sym_bits] = "bits",
  [anon_sym_utf8] = "utf8",
  [anon_sym_utf16] = "utf16",
  [anon_sym_utf32] = "utf32",
  [anon_sym_signed] = "signed",
  [anon_sym_unsigned] = "unsigned",
  [anon_sym_big_DASHendian] = "big-endian",
  [anon_sym_little_DASHendian] = "little-endian",
  [anon_sym_native] = "native",
  [aux_sym_binary_segment_token1] = "binary_segment_token1",
  [anon_sym_POUNDB_LPAREN] = "#B(",
  [sym_delimited_symbol] = "delimited_symbol",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_POUND] = "#",
  [anon_sym_POUNDM_LPAREN] = "#M(",
  [sym_source] = "source",
  [sym__form] = "_form",
  [sym_binary_string] = "binary_string",
  [sym_binary_size] = "binary_size",
  [sym_binary_type] = "binary_type",
  [sym_binary_signedness] = "binary_signedness",
  [sym_binary_endianess] = "binary_endianess",
  [sym_binary_segment] = "binary_segment",
  [sym_binary] = "binary",
  [sym__paren_list] = "_paren_list",
  [sym__square_bracket_list] = "_square_bracket_list",
  [sym_list] = "list",
  [sym_tuple] = "tuple",
  [sym_map_pair] = "map_pair",
  [sym_map] = "map",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_binary_string_repeat1] = "binary_string_repeat1",
  [aux_sym_binary_string_repeat2] = "binary_string_repeat2",
  [aux_sym_binary_segment_repeat1] = "binary_segment_repeat1",
  [aux_sym_binary_segment_repeat2] = "binary_segment_repeat2",
  [aux_sym_binary_segment_repeat3] = "binary_segment_repeat3",
  [aux_sym_binary_repeat1] = "binary_repeat1",
  [aux_sym_map_repeat1] = "map_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_symbol] = sym_symbol,
  [sym_comment] = sym_comment,
  [sym__whitespace] = sym__whitespace,
  [sym_float] = sym_float,
  [sym_integer] = sym_integer,
  [sym_character] = sym_character,
  [sym_list_string] = sym_list_string,
  [anon_sym_POUND_DQUOTE] = anon_sym_POUND_DQUOTE,
  [aux_sym_binary_string_token1] = aux_sym_binary_string_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym_binary_string_token2] = aux_sym_binary_string_token2,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_size] = anon_sym_size,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_integer] = anon_sym_integer,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_binary] = anon_sym_binary,
  [anon_sym_bytes] = anon_sym_bytes,
  [anon_sym_bitstring] = anon_sym_bitstring,
  [anon_sym_bits] = anon_sym_bits,
  [anon_sym_utf8] = anon_sym_utf8,
  [anon_sym_utf16] = anon_sym_utf16,
  [anon_sym_utf32] = anon_sym_utf32,
  [anon_sym_signed] = anon_sym_signed,
  [anon_sym_unsigned] = anon_sym_unsigned,
  [anon_sym_big_DASHendian] = anon_sym_big_DASHendian,
  [anon_sym_little_DASHendian] = anon_sym_little_DASHendian,
  [anon_sym_native] = anon_sym_native,
  [aux_sym_binary_segment_token1] = aux_sym_binary_segment_token1,
  [anon_sym_POUNDB_LPAREN] = anon_sym_POUNDB_LPAREN,
  [sym_delimited_symbol] = sym_delimited_symbol,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_POUNDM_LPAREN] = anon_sym_POUNDM_LPAREN,
  [sym_source] = sym_source,
  [sym__form] = sym__form,
  [sym_binary_string] = sym_binary_string,
  [sym_binary_size] = sym_binary_size,
  [sym_binary_type] = sym_binary_type,
  [sym_binary_signedness] = sym_binary_signedness,
  [sym_binary_endianess] = sym_binary_endianess,
  [sym_binary_segment] = sym_binary_segment,
  [sym_binary] = sym_binary,
  [sym__paren_list] = sym__paren_list,
  [sym__square_bracket_list] = sym__square_bracket_list,
  [sym_list] = sym_list,
  [sym_tuple] = sym_tuple,
  [sym_map_pair] = sym_map_pair,
  [sym_map] = sym_map,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_binary_string_repeat1] = aux_sym_binary_string_repeat1,
  [aux_sym_binary_string_repeat2] = aux_sym_binary_string_repeat2,
  [aux_sym_binary_segment_repeat1] = aux_sym_binary_segment_repeat1,
  [aux_sym_binary_segment_repeat2] = aux_sym_binary_segment_repeat2,
  [aux_sym_binary_segment_repeat3] = aux_sym_binary_segment_repeat3,
  [aux_sym_binary_repeat1] = aux_sym_binary_repeat1,
  [aux_sym_map_repeat1] = aux_sym_map_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_character] = {
    .visible = true,
    .named = true,
  },
  [sym_list_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_binary_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_binary_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_size] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_integer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_binary] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bitstring] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bits] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_utf8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_utf16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_utf32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_signed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unsigned] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_big_DASHendian] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_little_DASHendian] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_native] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_binary_segment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUNDB_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_delimited_symbol] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDM_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym__form] = {
    .visible = false,
    .named = true,
  },
  [sym_binary_string] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_size] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_type] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_signedness] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_endianess] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_segment] = {
    .visible = true,
    .named = true,
  },
  [sym_binary] = {
    .visible = true,
    .named = true,
  },
  [sym__paren_list] = {
    .visible = false,
    .named = true,
  },
  [sym__square_bracket_list] = {
    .visible = false,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym_map_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_map] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binary_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binary_string_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binary_segment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binary_segment_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binary_segment_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binary_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_map_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_close = 1,
  field_key = 2,
  field_open = 3,
  field_value = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_close] = "close",
  [field_key] = "key",
  [field_open] = "open",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 2},
  [5] = {.index = 8, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_close, 0, .inherited = true},
    {field_open, 0, .inherited = true},
  [2] =
    {field_close, 1},
    {field_open, 0},
  [4] =
    {field_close, 1, .inherited = true},
    {field_open, 1, .inherited = true},
  [6] =
    {field_close, 2},
    {field_open, 0},
  [8] =
    {field_key, 0},
    {field_value, 1},
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
  [8] = 7,
  [9] = 9,
  [10] = 10,
  [11] = 6,
  [12] = 10,
  [13] = 13,
  [14] = 9,
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
  [38] = 35,
  [39] = 37,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 42,
  [46] = 46,
  [47] = 47,
  [48] = 47,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 55,
  [58] = 58,
  [59] = 53,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 66,
  [68] = 68,
  [69] = 64,
  [70] = 29,
  [71] = 25,
  [72] = 23,
  [73] = 26,
  [74] = 27,
  [75] = 3,
  [76] = 33,
  [77] = 24,
  [78] = 31,
  [79] = 28,
  [80] = 2,
  [81] = 81,
  [82] = 4,
  [83] = 32,
  [84] = 30,
  [85] = 81,
  [86] = 34,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
};

static inline bool sym_symbol_character_set_1(int32_t c) {
  return (c < ';'
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : c <= '\r')
      : (c <= ' ' || (c < '('
        ? c == '"'
        : c <= ')')))
    : (c <= ';' || (c < '{'
      ? (c < ']'
        ? c == '['
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(38);
      if (lookahead == '\n') ADVANCE(41);
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead == ']') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == '\'' ||
          lookahead == ',' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(57);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(41);
      if (lookahead == '#') ADVANCE(63);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(60);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '#') ADVANCE(58);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '#') ADVANCE(68);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(67);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(56);
      if (lookahead == '*' ||
          lookahead == 'b') ADVANCE(23);
      if (lookahead == '1') ADVANCE(12);
      if (lookahead == '2') ADVANCE(13);
      if (lookahead == '3') ADVANCE(14);
      if (lookahead == '4') ADVANCE(17);
      if (lookahead == '5') ADVANCE(17);
      if (lookahead == '6') ADVANCE(17);
      if (lookahead == '7') ADVANCE(17);
      if (lookahead == '8') ADVANCE(17);
      if (lookahead == '9') ADVANCE(17);
      if (lookahead == 'd') ADVANCE(24);
      if (lookahead == 'o') ADVANCE(25);
      if (lookahead == 'x') ADVANCE(26);
      if (lookahead == '|') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '|') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != 11 &&
          lookahead != '\f' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(75);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(69);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(80);
      END_STATE();
    case 12:
      if (lookahead == '0') ADVANCE(17);
      if (lookahead == '1') ADVANCE(17);
      if (lookahead == '2') ADVANCE(17);
      if (lookahead == '3') ADVANCE(17);
      if (lookahead == '4') ADVANCE(17);
      if (lookahead == '5') ADVANCE(17);
      if (lookahead == '6') ADVANCE(17);
      if (lookahead == '7') ADVANCE(17);
      if (lookahead == '8') ADVANCE(17);
      if (lookahead == '9') ADVANCE(17);
      END_STATE();
    case 13:
      if (lookahead == '0') ADVANCE(17);
      if (lookahead == '1') ADVANCE(17);
      if (lookahead == '2') ADVANCE(17);
      if (lookahead == '3') ADVANCE(17);
      if (lookahead == '4') ADVANCE(17);
      if (lookahead == '5') ADVANCE(17);
      if (lookahead == '6') ADVANCE(17);
      if (lookahead == '7') ADVANCE(17);
      if (lookahead == '8') ADVANCE(17);
      if (lookahead == '9') ADVANCE(17);
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 14:
      if (lookahead == '0') ADVANCE(17);
      if (lookahead == '1') ADVANCE(17);
      if (lookahead == '2') ADVANCE(17);
      if (lookahead == '3') ADVANCE(17);
      if (lookahead == '4') ADVANCE(17);
      if (lookahead == '5') ADVANCE(17);
      if (lookahead == '6') ADVANCE(17);
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 15:
      if (lookahead == ';') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == '|') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 18:
      if (lookahead == 'x') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(53);
      END_STATE();
    case 19:
      if (lookahead == '|') ADVANCE(7);
      END_STATE();
    case 20:
      if (lookahead == '|') ADVANCE(39);
      END_STATE();
    case 21:
      if (lookahead == '|') ADVANCE(16);
      END_STATE();
    case 22:
      if (lookahead == '*' ||
          lookahead == 'b') ADVANCE(23);
      if (lookahead == '1') ADVANCE(12);
      if (lookahead == '2') ADVANCE(13);
      if (lookahead == '3') ADVANCE(14);
      if (lookahead == '4') ADVANCE(17);
      if (lookahead == '5') ADVANCE(17);
      if (lookahead == '6') ADVANCE(17);
      if (lookahead == '7') ADVANCE(17);
      if (lookahead == '8') ADVANCE(17);
      if (lookahead == '9') ADVANCE(17);
      if (lookahead == 'd') ADVANCE(24);
      if (lookahead == 'o') ADVANCE(25);
      if (lookahead == 'x') ADVANCE(26);
      if (lookahead == '|') ADVANCE(7);
      END_STATE();
    case 23:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(28);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(48);
      END_STATE();
    case 24:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 25:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(49);
      END_STATE();
    case 26:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 27:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 28:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(48);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(49);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 36:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 37:
      if (eof) ADVANCE(38);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(78);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(77);
      if (lookahead == '|') ADVANCE(16);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != 11 &&
          lookahead != '\f' &&
          lookahead != '\'' &&
          lookahead != ',' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(75);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'e') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'e') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_list_string);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_POUND_DQUOTE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_binary_string_token1);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_binary_string_token1);
      if (lookahead == '|') ADVANCE(7);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_binary_string_token1);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_binary_string_token2);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_binary_string_token2);
      if (lookahead == '|') ADVANCE(7);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_binary_segment_token1);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_binary_segment_token1);
      if (lookahead == '|') ADVANCE(7);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_POUNDB_LPAREN);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_delimited_symbol);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_symbol);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '"') ADVANCE(56);
      if (lookahead == '*' ||
          lookahead == 'b') ADVANCE(23);
      if (lookahead == '1') ADVANCE(12);
      if (lookahead == '2') ADVANCE(13);
      if (lookahead == '3') ADVANCE(14);
      if (lookahead == '4') ADVANCE(17);
      if (lookahead == '5') ADVANCE(17);
      if (lookahead == '6') ADVANCE(17);
      if (lookahead == '7') ADVANCE(17);
      if (lookahead == '8') ADVANCE(17);
      if (lookahead == '9') ADVANCE(17);
      if (lookahead == 'B') ADVANCE(10);
      if (lookahead == 'M') ADVANCE(11);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'd') ADVANCE(24);
      if (lookahead == 'o') ADVANCE(25);
      if (lookahead == 'x') ADVANCE(26);
      if (lookahead == '|') ADVANCE(7);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '|') ADVANCE(7);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_POUNDM_LPAREN);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'b') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(2);
      if (lookahead == 'i') ADVANCE(3);
      if (lookahead == 'l') ADVANCE(4);
      if (lookahead == 'n') ADVANCE(5);
      if (lookahead == 's') ADVANCE(6);
      if (lookahead == 'u') ADVANCE(7);
      END_STATE();
    case 1:
      if (lookahead == 'i') ADVANCE(8);
      if (lookahead == 'y') ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 3:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 6:
      if (lookahead == 'i') ADVANCE(14);
      END_STATE();
    case 7:
      if (lookahead == 'n') ADVANCE(15);
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == 'g') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 9:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 11:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 12:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 13:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 14:
      if (lookahead == 'g') ADVANCE(25);
      if (lookahead == 'z') ADVANCE(26);
      END_STATE();
    case 15:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 16:
      if (lookahead == 'f') ADVANCE(28);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(29);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 19:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 28:
      if (lookahead == '1') ADVANCE(40);
      if (lookahead == '3') ADVANCE(41);
      if (lookahead == '8') ADVANCE(42);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_bits);
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 32:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 34:
      if (lookahead == 'g') ADVANCE(48);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 36:
      if (lookahead == 'v') ADVANCE(50);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_size);
      END_STATE();
    case 39:
      if (lookahead == 'g') ADVANCE(52);
      END_STATE();
    case 40:
      if (lookahead == '6') ADVANCE(53);
      END_STATE();
    case 41:
      if (lookahead == '2') ADVANCE(54);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_utf8);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 44:
      if (lookahead == 'y') ADVANCE(56);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_utf16);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_utf32);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(63);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_binary);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(66);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_native);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_signed);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(71);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 69:
      if (lookahead == 'g') ADVANCE(73);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_bitstring);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(76);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_big_DASHendian);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_little_DASHendian);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 37},
  [2] = {.lex_state = 37},
  [3] = {.lex_state = 37},
  [4] = {.lex_state = 37},
  [5] = {.lex_state = 37},
  [6] = {.lex_state = 37},
  [7] = {.lex_state = 37},
  [8] = {.lex_state = 37},
  [9] = {.lex_state = 37},
  [10] = {.lex_state = 37},
  [11] = {.lex_state = 37},
  [12] = {.lex_state = 37},
  [13] = {.lex_state = 37},
  [14] = {.lex_state = 37},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 37},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 37},
  [24] = {.lex_state = 37},
  [25] = {.lex_state = 37},
  [26] = {.lex_state = 37},
  [27] = {.lex_state = 37},
  [28] = {.lex_state = 37},
  [29] = {.lex_state = 37},
  [30] = {.lex_state = 37},
  [31] = {.lex_state = 37},
  [32] = {.lex_state = 37},
  [33] = {.lex_state = 37},
  [34] = {.lex_state = 37},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 9},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 9},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 9},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 9},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 9},
  [72] = {.lex_state = 9},
  [73] = {.lex_state = 9},
  [74] = {.lex_state = 9},
  [75] = {.lex_state = 9},
  [76] = {.lex_state = 9},
  [77] = {.lex_state = 9},
  [78] = {.lex_state = 9},
  [79] = {.lex_state = 9},
  [80] = {.lex_state = 9},
  [81] = {.lex_state = 37},
  [82] = {.lex_state = 9},
  [83] = {.lex_state = 9},
  [84] = {.lex_state = 9},
  [85] = {.lex_state = 37},
  [86] = {.lex_state = 9},
  [87] = {.lex_state = 9},
  [88] = {.lex_state = 8},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 37},
  [93] = {.lex_state = 9},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_symbol] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_binary_string_token1] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [aux_sym_binary_string_token2] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_size] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_integer] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_binary] = ACTIONS(1),
    [anon_sym_bytes] = ACTIONS(1),
    [anon_sym_bitstring] = ACTIONS(1),
    [anon_sym_bits] = ACTIONS(1),
    [anon_sym_utf8] = ACTIONS(1),
    [anon_sym_utf16] = ACTIONS(1),
    [anon_sym_utf32] = ACTIONS(1),
    [anon_sym_signed] = ACTIONS(1),
    [anon_sym_unsigned] = ACTIONS(1),
    [anon_sym_big_DASHendian] = ACTIONS(1),
    [anon_sym_little_DASHendian] = ACTIONS(1),
    [anon_sym_native] = ACTIONS(1),
    [aux_sym_binary_segment_token1] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(90),
    [sym__form] = STATE(13),
    [sym_binary_string] = STATE(25),
    [sym_binary] = STATE(13),
    [sym__paren_list] = STATE(30),
    [sym__square_bracket_list] = STATE(32),
    [sym_list] = STATE(13),
    [sym_tuple] = STATE(13),
    [sym_map] = STATE(13),
    [aux_sym_source_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
    [sym_float] = ACTIONS(7),
    [sym_integer] = ACTIONS(7),
    [sym_character] = ACTIONS(9),
    [sym_list_string] = ACTIONS(9),
    [anon_sym_POUND_DQUOTE] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_POUNDB_LPAREN] = ACTIONS(15),
    [sym_delimited_symbol] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_POUNDM_LPAREN] = ACTIONS(21),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym_symbol] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
    [sym_float] = ACTIONS(25),
    [sym_integer] = ACTIONS(25),
    [sym_character] = ACTIONS(23),
    [sym_list_string] = ACTIONS(23),
    [anon_sym_POUND_DQUOTE] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(23),
    [anon_sym_integer] = ACTIONS(25),
    [anon_sym_float] = ACTIONS(25),
    [anon_sym_binary] = ACTIONS(25),
    [anon_sym_bytes] = ACTIONS(25),
    [anon_sym_bitstring] = ACTIONS(25),
    [anon_sym_bits] = ACTIONS(25),
    [anon_sym_utf8] = ACTIONS(25),
    [anon_sym_utf16] = ACTIONS(25),
    [anon_sym_utf32] = ACTIONS(25),
    [anon_sym_signed] = ACTIONS(25),
    [anon_sym_unsigned] = ACTIONS(25),
    [anon_sym_big_DASHendian] = ACTIONS(25),
    [anon_sym_little_DASHendian] = ACTIONS(25),
    [anon_sym_native] = ACTIONS(25),
    [anon_sym_POUNDB_LPAREN] = ACTIONS(23),
    [sym_delimited_symbol] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_RBRACK] = ACTIONS(23),
    [anon_sym_POUND] = ACTIONS(25),
    [anon_sym_POUNDM_LPAREN] = ACTIONS(23),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym_symbol] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
    [sym_float] = ACTIONS(29),
    [sym_integer] = ACTIONS(29),
    [sym_character] = ACTIONS(27),
    [sym_list_string] = ACTIONS(27),
    [anon_sym_POUND_DQUOTE] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(27),
    [anon_sym_integer] = ACTIONS(29),
    [anon_sym_float] = ACTIONS(29),
    [anon_sym_binary] = ACTIONS(29),
    [anon_sym_bytes] = ACTIONS(29),
    [anon_sym_bitstring] = ACTIONS(29),
    [anon_sym_bits] = ACTIONS(29),
    [anon_sym_utf8] = ACTIONS(29),
    [anon_sym_utf16] = ACTIONS(29),
    [anon_sym_utf32] = ACTIONS(29),
    [anon_sym_signed] = ACTIONS(29),
    [anon_sym_unsigned] = ACTIONS(29),
    [anon_sym_big_DASHendian] = ACTIONS(29),
    [anon_sym_little_DASHendian] = ACTIONS(29),
    [anon_sym_native] = ACTIONS(29),
    [anon_sym_POUNDB_LPAREN] = ACTIONS(27),
    [sym_delimited_symbol] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_POUNDM_LPAREN] = ACTIONS(27),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(31),
    [sym_symbol] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
    [sym_float] = ACTIONS(33),
    [sym_integer] = ACTIONS(33),
    [sym_character] = ACTIONS(31),
    [sym_list_string] = ACTIONS(31),
    [anon_sym_POUND_DQUOTE] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(31),
    [anon_sym_integer] = ACTIONS(33),
    [anon_sym_float] = ACTIONS(33),
    [anon_sym_binary] = ACTIONS(33),
    [anon_sym_bytes] = ACTIONS(33),
    [anon_sym_bitstring] = ACTIONS(33),
    [anon_sym_bits] = ACTIONS(33),
    [anon_sym_utf8] = ACTIONS(33),
    [anon_sym_utf16] = ACTIONS(33),
    [anon_sym_utf32] = ACTIONS(33),
    [anon_sym_signed] = ACTIONS(33),
    [anon_sym_unsigned] = ACTIONS(33),
    [anon_sym_big_DASHendian] = ACTIONS(33),
    [anon_sym_little_DASHendian] = ACTIONS(33),
    [anon_sym_native] = ACTIONS(33),
    [anon_sym_POUNDB_LPAREN] = ACTIONS(31),
    [sym_delimited_symbol] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_RBRACK] = ACTIONS(31),
    [anon_sym_POUND] = ACTIONS(33),
    [anon_sym_POUNDM_LPAREN] = ACTIONS(31),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(43), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(46), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_POUNDB_LPAREN,
    ACTIONS(52), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      anon_sym_POUND,
    ACTIONS(58), 1,
      anon_sym_POUNDM_LPAREN,
    STATE(25), 1,
      sym_binary_string,
    STATE(30), 1,
      sym__paren_list,
    STATE(32), 1,
      sym__square_bracket_list,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(35), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(37), 3,
      sym_float,
      sym_integer,
      sym_symbol,
    ACTIONS(40), 3,
      sym_character,
      sym_list_string,
      sym_delimited_symbol,
    STATE(5), 6,
      sym__form,
      sym_binary,
      sym_list,
      sym_tuple,
      sym_map,
      aux_sym_source_repeat1,
  [55] = 14,
    ACTIONS(11), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_POUNDB_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_POUNDM_LPAREN,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      sym_binary_string,
    STATE(30), 1,
      sym__paren_list,
    STATE(32), 1,
      sym__square_bracket_list,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(61), 3,
      sym_float,
      sym_integer,
      sym_symbol,
    ACTIONS(63), 3,
      sym_character,
      sym_list_string,
      sym_delimited_symbol,
    STATE(5), 6,
      sym__form,
      sym_binary,
      sym_list,
      sym_tuple,
      sym_map,
      aux_sym_source_repeat1,
  [108] = 14,
    ACTIONS(11), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_POUNDB_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_POUNDM_LPAREN,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      sym_binary_string,
    STATE(30), 1,
      sym__paren_list,
    STATE(32), 1,
      sym__square_bracket_list,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(67), 3,
      sym_float,
      sym_integer,
      sym_symbol,
    ACTIONS(69), 3,
      sym_character,
      sym_list_string,
      sym_delimited_symbol,
    STATE(6), 6,
      sym__form,
      sym_binary,
      sym_list,
      sym_tuple,
      sym_map,
      aux_sym_source_repeat1,
  [161] = 14,
    ACTIONS(11), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_POUNDB_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_POUNDM_LPAREN,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      sym_binary_string,
    STATE(30), 1,
      sym__paren_list,
    STATE(32), 1,
      sym__square_bracket_list,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(73), 3,
      sym_float,
      sym_integer,
      sym_symbol,
    ACTIONS(75), 3,
      sym_character,
      sym_list_string,
      sym_delimited_symbol,
    STATE(11), 6,
      sym__form,
      sym_binary,
      sym_list,
      sym_tuple,
      sym_map,
      aux_sym_source_repeat1,
  [214] = 14,
    ACTIONS(11), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_POUNDB_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_POUNDM_LPAREN,
    ACTIONS(83), 1,
      anon_sym_RBRACK,
    STATE(25), 1,
      sym_binary_string,
    STATE(30), 1,
      sym__paren_list,
    STATE(32), 1,
      sym__square_bracket_list,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(79), 3,
      sym_float,
      sym_integer,
      sym_symbol,
    ACTIONS(81), 3,
      sym_character,
      sym_list_string,
      sym_delimited_symbol,
    STATE(12), 6,
      sym__form,
      sym_binary,
      sym_list,
      sym_tuple,
      sym_map,
      aux_sym_source_repeat1,
  [267] = 14,
    ACTIONS(11), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_POUNDB_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_POUNDM_LPAREN,
    ACTIONS(85), 1,
      anon_sym_RBRACK,
    STATE(25), 1,
      sym_binary_string,
    STATE(30), 1,
      sym__paren_list,
    STATE(32), 1,
      sym__square_bracket_list,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(61), 3,
      sym_float,
      sym_integer,
      sym_symbol,
    ACTIONS(63), 3,
      sym_character,
      sym_list_string,
      sym_delimited_symbol,
    STATE(5), 6,
      sym__form,
      sym_binary,
      sym_list,
      sym_tuple,
      sym_map,
      aux_sym_source_repeat1,
  [320] = 14,
    ACTIONS(11), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_POUNDB_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_POUNDM_LPAREN,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      sym_binary_string,
    STATE(30), 1,
      sym__paren_list,
    STATE(32), 1,
      sym__square_bracket_list,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(61), 3,
      sym_float,
      sym_integer,
      sym_symbol,
    ACTIONS(63), 3,
      sym_character,
      sym_list_string,
      sym_delimited_symbol,
    STATE(5), 6,
      sym__form,
      sym_binary,
      sym_list,
      sym_tuple,
      sym_map,
      aux_sym_source_repeat1,
  [373] = 14,
    ACTIONS(11), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_POUNDB_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_POUNDM_LPAREN,
    ACTIONS(89), 1,
      anon_sym_RBRACK,
    STATE(25), 1,
      sym_binary_string,
    STATE(30), 1,
      sym__paren_list,
    STATE(32), 1,
      sym__square_bracket_list,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(61), 3,
      sym_float,
      sym_integer,
      sym_symbol,
    ACTIONS(63), 3,
      sym_character,
      sym_list_string,
      sym_delimited_symbol,
    STATE(5), 6,
      sym__form,
      sym_binary,
      sym_list,
      sym_tuple,
      sym_map,
      aux_sym_source_repeat1,
  [426] = 14,
    ACTIONS(11), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_POUNDB_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_POUNDM_LPAREN,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    STATE(25), 1,
      sym_binary_string,
    STATE(30), 1,
      sym__paren_list,
    STATE(32), 1,
      sym__square_bracket_list,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(61), 3,
      sym_float,
      sym_integer,
      sym_symbol,
    ACTIONS(63), 3,
      sym_character,
      sym_list_string,
      sym_delimited_symbol,
    STATE(5), 6,
      sym__form,
      sym_binary,
      sym_list,
      sym_tuple,
      sym_map,
      aux_sym_source_repeat1,
  [479] = 14,
    ACTIONS(11), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_POUNDB_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_POUNDM_LPAREN,
    ACTIONS(97), 1,
      anon_sym_RBRACK,
    STATE(25), 1,
      sym_binary_string,
    STATE(30), 1,
      sym__paren_list,
    STATE(32), 1,
      sym__square_bracket_list,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(93), 3,
      sym_float,
      sym_integer,
      sym_symbol,
    ACTIONS(95), 3,
      sym_character,
      sym_list_string,
      sym_delimited_symbol,
    STATE(10), 6,
      sym__form,
      sym_binary,
      sym_list,
      sym_tuple,
      sym_map,
      aux_sym_source_repeat1,
  [532] = 8,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
    ACTIONS(105), 1,
      anon_sym_bits,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(107), 2,
      anon_sym_signed,
      anon_sym_unsigned,
    ACTIONS(109), 3,
      anon_sym_big_DASHendian,
      anon_sym_little_DASHendian,
      anon_sym_native,
    STATE(16), 5,
      sym_binary_size,
      sym_binary_type,
      sym_binary_signedness,
      sym_binary_endianess,
      aux_sym_binary_segment_repeat3,
    ACTIONS(103), 8,
      anon_sym_integer,
      anon_sym_float,
      anon_sym_binary,
      anon_sym_bytes,
      anon_sym_bitstring,
      anon_sym_utf8,
      anon_sym_utf16,
      anon_sym_utf32,
  [572] = 8,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_bits,
    ACTIONS(111), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(107), 2,
      anon_sym_signed,
      anon_sym_unsigned,
    ACTIONS(109), 3,
      anon_sym_big_DASHendian,
      anon_sym_little_DASHendian,
      anon_sym_native,
    STATE(17), 5,
      sym_binary_size,
      sym_binary_type,
      sym_binary_signedness,
      sym_binary_endianess,
      aux_sym_binary_segment_repeat3,
    ACTIONS(103), 8,
      anon_sym_integer,
      anon_sym_float,
      anon_sym_binary,
      anon_sym_bytes,
      anon_sym_bitstring,
      anon_sym_utf8,
      anon_sym_utf16,
      anon_sym_utf32,
  [612] = 8,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(116), 1,
      anon_sym_RPAREN,
    ACTIONS(121), 1,
      anon_sym_bits,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(124), 2,
      anon_sym_signed,
      anon_sym_unsigned,
    ACTIONS(127), 3,
      anon_sym_big_DASHendian,
      anon_sym_little_DASHendian,
      anon_sym_native,
    STATE(17), 5,
      sym_binary_size,
      sym_binary_type,
      sym_binary_signedness,
      sym_binary_endianess,
      aux_sym_binary_segment_repeat3,
    ACTIONS(118), 8,
      anon_sym_integer,
      anon_sym_float,
      anon_sym_binary,
      anon_sym_bytes,
      anon_sym_bitstring,
      anon_sym_utf8,
      anon_sym_utf16,
      anon_sym_utf32,
  [652] = 13,
    ACTIONS(134), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      anon_sym_POUNDB_LPAREN,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_POUND,
    ACTIONS(144), 1,
      anon_sym_POUNDM_LPAREN,
    STATE(71), 1,
      sym_binary_string,
    STATE(83), 1,
      sym__square_bracket_list,
    STATE(84), 1,
      sym__paren_list,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(130), 3,
      sym_float,
      sym_integer,
      sym_symbol,
    ACTIONS(132), 3,
      sym_character,
      sym_list_string,
      sym_delimited_symbol,
    STATE(87), 5,
      sym__form,
      sym_binary,
      sym_list,
      sym_tuple,
      sym_map,
  [701] = 3,
    ACTIONS(148), 1,
      anon_sym_bits,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(146), 15,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_integer,
      anon_sym_float,
      anon_sym_binary,
      anon_sym_bytes,
      anon_sym_bitstring,
      anon_sym_utf8,
      anon_sym_utf16,
      anon_sym_utf32,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_big_DASHendian,
      anon_sym_little_DASHendian,
      anon_sym_native,
  [726] = 3,
    ACTIONS(152), 1,
      anon_sym_bits,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(150), 15,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_integer,
      anon_sym_float,
      anon_sym_binary,
      anon_sym_bytes,
      anon_sym_bitstring,
      anon_sym_utf8,
      anon_sym_utf16,
      anon_sym_utf32,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_big_DASHendian,
      anon_sym_little_DASHendian,
      anon_sym_native,
  [751] = 3,
    ACTIONS(156), 1,
      anon_sym_bits,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(154), 15,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_integer,
      anon_sym_float,
      anon_sym_binary,
      anon_sym_bytes,
      anon_sym_bitstring,
      anon_sym_utf8,
      anon_sym_utf16,
      anon_sym_utf32,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_big_DASHendian,
      anon_sym_little_DASHendian,
      anon_sym_native,
  [776] = 3,
    ACTIONS(160), 1,
      anon_sym_bits,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(158), 15,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_integer,
      anon_sym_float,
      anon_sym_binary,
      anon_sym_bytes,
      anon_sym_bitstring,
      anon_sym_utf8,
      anon_sym_utf16,
      anon_sym_utf32,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_big_DASHendian,
      anon_sym_little_DASHendian,
      anon_sym_native,
  [801] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(164), 4,
      sym_float,
      sym_integer,
      sym_symbol,
      anon_sym_POUND,
    ACTIONS(162), 11,
      ts_builtin_sym_end,
      sym_character,
      sym_list_string,
      anon_sym_POUND_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_POUNDB_LPAREN,
      sym_delimited_symbol,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUNDM_LPAREN,
  [825] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(168), 4,
      sym_float,
      sym_integer,
      sym_symbol,
      anon_sym_POUND,
    ACTIONS(166), 11,
      ts_builtin_sym_end,
      sym_character,
      sym_list_string,
      anon_sym_POUND_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_POUNDB_LPAREN,
      sym_delimited_symbol,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUNDM_LPAREN,
  [849] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(172), 4,
      sym_float,
      sym_integer,
      sym_symbol,
      anon_sym_POUND,
    ACTIONS(170), 11,
      ts_builtin_sym_end,
      sym_character,
      sym_list_string,
      anon_sym_POUND_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_POUNDB_LPAREN,
      sym_delimited_symbol,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUNDM_LPAREN,
  [873] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(176), 4,
      sym_float,
      sym_integer,
      sym_symbol,
      anon_sym_POUND,
    ACTIONS(174), 11,
      ts_builtin_sym_end,
      sym_character,
      sym_list_string,
      anon_sym_POUND_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_POUNDB_LPAREN,
      sym_delimited_symbol,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUNDM_LPAREN,
  [897] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(180), 4,
      sym_float,
      sym_integer,
      sym_symbol,
      anon_sym_POUND,
    ACTIONS(178), 11,
      ts_builtin_sym_end,
      sym_character,
      sym_list_string,
      anon_sym_POUND_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_POUNDB_LPAREN,
      sym_delimited_symbol,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUNDM_LPAREN,
  [921] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(184), 4,
      sym_float,
      sym_integer,
      sym_symbol,
      anon_sym_POUND,
    ACTIONS(182), 11,
      ts_builtin_sym_end,
      sym_character,
      sym_list_string,
      anon_sym_POUND_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_POUNDB_LPAREN,
      sym_delimited_symbol,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUNDM_LPAREN,
  [945] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(188), 4,
      sym_float,
      sym_integer,
      sym_symbol,
      anon_sym_POUND,
    ACTIONS(186), 11,
      ts_builtin_sym_end,
      sym_character,
      sym_list_string,
      anon_sym_POUND_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_POUNDB_LPAREN,
      sym_delimited_symbol,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUNDM_LPAREN,
  [969] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(192), 4,
      sym_float,
      sym_integer,
      sym_symbol,
      anon_sym_POUND,
    ACTIONS(190), 11,
      ts_builtin_sym_end,
      sym_character,
      sym_list_string,
      anon_sym_POUND_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_POUNDB_LPAREN,
      sym_delimited_symbol,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUNDM_LPAREN,
  [993] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(196), 4,
      sym_float,
      sym_integer,
      sym_symbol,
      anon_sym_POUND,
    ACTIONS(194), 11,
      ts_builtin_sym_end,
      sym_character,
      sym_list_string,
      anon_sym_POUND_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_POUNDB_LPAREN,
      sym_delimited_symbol,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUNDM_LPAREN,
  [1017] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(192), 4,
      sym_float,
      sym_integer,
      sym_symbol,
      anon_sym_POUND,
    ACTIONS(190), 11,
      ts_builtin_sym_end,
      sym_character,
      sym_list_string,
      anon_sym_POUND_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_POUNDB_LPAREN,
      sym_delimited_symbol,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUNDM_LPAREN,
  [1041] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(200), 4,
      sym_float,
      sym_integer,
      sym_symbol,
      anon_sym_POUND,
    ACTIONS(198), 11,
      ts_builtin_sym_end,
      sym_character,
      sym_list_string,
      anon_sym_POUND_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_POUNDB_LPAREN,
      sym_delimited_symbol,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUNDM_LPAREN,
  [1065] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(204), 4,
      sym_float,
      sym_integer,
      sym_symbol,
      anon_sym_POUND,
    ACTIONS(202), 11,
      ts_builtin_sym_end,
      sym_character,
      sym_list_string,
      anon_sym_POUND_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_POUNDB_LPAREN,
      sym_delimited_symbol,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUNDM_LPAREN,
  [1089] = 7,
    ACTIONS(206), 1,
      sym_float,
    ACTIONS(208), 1,
      sym_integer,
    ACTIONS(210), 1,
      anon_sym_DQUOTE,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    ACTIONS(214), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(36), 2,
      sym_binary_segment,
      aux_sym_binary_repeat1,
  [1113] = 7,
    ACTIONS(216), 1,
      sym_float,
    ACTIONS(219), 1,
      sym_integer,
    ACTIONS(222), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(36), 2,
      sym_binary_segment,
      aux_sym_binary_repeat1,
  [1137] = 7,
    ACTIONS(206), 1,
      sym_float,
    ACTIONS(208), 1,
      sym_integer,
    ACTIONS(210), 1,
      anon_sym_DQUOTE,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    ACTIONS(230), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(38), 2,
      sym_binary_segment,
      aux_sym_binary_repeat1,
  [1161] = 7,
    ACTIONS(206), 1,
      sym_float,
    ACTIONS(208), 1,
      sym_integer,
    ACTIONS(210), 1,
      anon_sym_DQUOTE,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(36), 2,
      sym_binary_segment,
      aux_sym_binary_repeat1,
  [1185] = 7,
    ACTIONS(206), 1,
      sym_float,
    ACTIONS(208), 1,
      sym_integer,
    ACTIONS(210), 1,
      anon_sym_DQUOTE,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(35), 2,
      sym_binary_segment,
      aux_sym_binary_repeat1,
  [1209] = 3,
    ACTIONS(238), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(236), 4,
      sym_float,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1223] = 3,
    ACTIONS(242), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(240), 4,
      sym_float,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1237] = 6,
    ACTIONS(244), 1,
      aux_sym_binary_string_token1,
    ACTIONS(246), 1,
      anon_sym_BSLASH,
    ACTIONS(248), 1,
      anon_sym_DQUOTE,
    STATE(61), 1,
      aux_sym_binary_string_repeat1,
    STATE(69), 1,
      aux_sym_binary_string_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1257] = 3,
    ACTIONS(252), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(250), 4,
      sym_float,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1271] = 6,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(254), 1,
      anon_sym_BSLASH,
    ACTIONS(256), 1,
      aux_sym_binary_segment_token1,
    STATE(52), 1,
      aux_sym_binary_segment_repeat1,
    STATE(62), 1,
      aux_sym_binary_segment_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1291] = 6,
    ACTIONS(244), 1,
      aux_sym_binary_string_token1,
    ACTIONS(246), 1,
      anon_sym_BSLASH,
    ACTIONS(258), 1,
      anon_sym_DQUOTE,
    STATE(61), 1,
      aux_sym_binary_string_repeat1,
    STATE(64), 1,
      aux_sym_binary_string_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1311] = 6,
    ACTIONS(254), 1,
      anon_sym_BSLASH,
    ACTIONS(260), 1,
      anon_sym_DQUOTE,
    ACTIONS(262), 1,
      aux_sym_binary_segment_token1,
    STATE(44), 1,
      aux_sym_binary_segment_repeat1,
    STATE(65), 1,
      aux_sym_binary_segment_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1331] = 6,
    ACTIONS(246), 1,
      anon_sym_BSLASH,
    ACTIONS(264), 1,
      aux_sym_binary_string_token1,
    ACTIONS(266), 1,
      anon_sym_DQUOTE,
    STATE(45), 1,
      aux_sym_binary_string_repeat1,
    STATE(66), 1,
      aux_sym_binary_string_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1351] = 6,
    ACTIONS(246), 1,
      anon_sym_BSLASH,
    ACTIONS(268), 1,
      aux_sym_binary_string_token1,
    ACTIONS(270), 1,
      anon_sym_DQUOTE,
    STATE(42), 1,
      aux_sym_binary_string_repeat1,
    STATE(67), 1,
      aux_sym_binary_string_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1371] = 3,
    ACTIONS(274), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(272), 4,
      sym_float,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1385] = 4,
    ACTIONS(276), 1,
      sym_symbol,
    ACTIONS(279), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(50), 2,
      sym_map_pair,
      aux_sym_map_repeat1,
  [1400] = 4,
    ACTIONS(283), 1,
      aux_sym_binary_segment_token1,
    STATE(56), 1,
      aux_sym_binary_segment_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(281), 2,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
  [1415] = 4,
    ACTIONS(287), 1,
      aux_sym_binary_segment_token1,
    STATE(52), 1,
      aux_sym_binary_segment_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(285), 2,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
  [1430] = 4,
    ACTIONS(290), 1,
      sym_symbol,
    ACTIONS(292), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(50), 2,
      sym_map_pair,
      aux_sym_map_repeat1,
  [1445] = 4,
    ACTIONS(244), 1,
      aux_sym_binary_string_token1,
    STATE(61), 1,
      aux_sym_binary_string_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(294), 2,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
  [1460] = 4,
    ACTIONS(290), 1,
      sym_symbol,
    ACTIONS(296), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(59), 2,
      sym_map_pair,
      aux_sym_map_repeat1,
  [1475] = 4,
    ACTIONS(256), 1,
      aux_sym_binary_segment_token1,
    STATE(52), 1,
      aux_sym_binary_segment_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(298), 2,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
  [1490] = 4,
    ACTIONS(290), 1,
      sym_symbol,
    ACTIONS(300), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(53), 2,
      sym_map_pair,
      aux_sym_map_repeat1,
  [1505] = 5,
    ACTIONS(11), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(302), 1,
      sym_float,
    ACTIONS(304), 1,
      sym_integer,
    STATE(15), 1,
      sym_binary_string,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1522] = 4,
    ACTIONS(290), 1,
      sym_symbol,
    ACTIONS(306), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(50), 2,
      sym_map_pair,
      aux_sym_map_repeat1,
  [1537] = 4,
    ACTIONS(308), 1,
      aux_sym_binary_string_token1,
    STATE(54), 1,
      aux_sym_binary_string_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(310), 2,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
  [1552] = 4,
    ACTIONS(312), 1,
      aux_sym_binary_string_token1,
    STATE(61), 1,
      aux_sym_binary_string_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(315), 2,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
  [1567] = 4,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(254), 1,
      anon_sym_BSLASH,
    STATE(63), 1,
      aux_sym_binary_segment_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1581] = 4,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(317), 1,
      anon_sym_BSLASH,
    STATE(63), 1,
      aux_sym_binary_segment_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1595] = 4,
    ACTIONS(246), 1,
      anon_sym_BSLASH,
    ACTIONS(320), 1,
      anon_sym_DQUOTE,
    STATE(68), 1,
      aux_sym_binary_string_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1609] = 4,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(254), 1,
      anon_sym_BSLASH,
    STATE(63), 1,
      aux_sym_binary_segment_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1623] = 4,
    ACTIONS(246), 1,
      anon_sym_BSLASH,
    ACTIONS(258), 1,
      anon_sym_DQUOTE,
    STATE(68), 1,
      aux_sym_binary_string_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1637] = 4,
    ACTIONS(246), 1,
      anon_sym_BSLASH,
    ACTIONS(248), 1,
      anon_sym_DQUOTE,
    STATE(68), 1,
      aux_sym_binary_string_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1651] = 4,
    ACTIONS(310), 1,
      anon_sym_DQUOTE,
    ACTIONS(322), 1,
      anon_sym_BSLASH,
    STATE(68), 1,
      aux_sym_binary_string_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1665] = 4,
    ACTIONS(246), 1,
      anon_sym_BSLASH,
    ACTIONS(325), 1,
      anon_sym_DQUOTE,
    STATE(68), 1,
      aux_sym_binary_string_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1679] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(186), 2,
      anon_sym_RPAREN,
      sym_symbol,
  [1688] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(170), 2,
      anon_sym_RPAREN,
      sym_symbol,
  [1697] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(162), 2,
      anon_sym_RPAREN,
      sym_symbol,
  [1706] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(174), 2,
      anon_sym_RPAREN,
      sym_symbol,
  [1715] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(178), 2,
      anon_sym_RPAREN,
      sym_symbol,
  [1724] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(27), 2,
      anon_sym_RPAREN,
      sym_symbol,
  [1733] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(198), 2,
      anon_sym_RPAREN,
      sym_symbol,
  [1742] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(166), 2,
      anon_sym_RPAREN,
      sym_symbol,
  [1751] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(194), 2,
      anon_sym_RPAREN,
      sym_symbol,
  [1760] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(182), 2,
      anon_sym_RPAREN,
      sym_symbol,
  [1769] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_RPAREN,
      sym_symbol,
  [1778] = 3,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym__paren_list,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1789] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(31), 2,
      anon_sym_RPAREN,
      sym_symbol,
  [1798] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(190), 2,
      anon_sym_RPAREN,
      sym_symbol,
  [1807] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(190), 2,
      anon_sym_RPAREN,
      sym_symbol,
  [1816] = 3,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    STATE(73), 1,
      sym__paren_list,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1827] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(202), 2,
      anon_sym_RPAREN,
      sym_symbol,
  [1836] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(327), 2,
      anon_sym_RPAREN,
      sym_symbol,
  [1845] = 2,
    ACTIONS(329), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1853] = 2,
    ACTIONS(331), 1,
      aux_sym_binary_string_token2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1861] = 2,
    ACTIONS(333), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1869] = 2,
    ACTIONS(335), 1,
      aux_sym_binary_string_token2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1877] = 2,
    ACTIONS(337), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1885] = 2,
    ACTIONS(339), 1,
      anon_sym_size,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 55,
  [SMALL_STATE(7)] = 108,
  [SMALL_STATE(8)] = 161,
  [SMALL_STATE(9)] = 214,
  [SMALL_STATE(10)] = 267,
  [SMALL_STATE(11)] = 320,
  [SMALL_STATE(12)] = 373,
  [SMALL_STATE(13)] = 426,
  [SMALL_STATE(14)] = 479,
  [SMALL_STATE(15)] = 532,
  [SMALL_STATE(16)] = 572,
  [SMALL_STATE(17)] = 612,
  [SMALL_STATE(18)] = 652,
  [SMALL_STATE(19)] = 701,
  [SMALL_STATE(20)] = 726,
  [SMALL_STATE(21)] = 751,
  [SMALL_STATE(22)] = 776,
  [SMALL_STATE(23)] = 801,
  [SMALL_STATE(24)] = 825,
  [SMALL_STATE(25)] = 849,
  [SMALL_STATE(26)] = 873,
  [SMALL_STATE(27)] = 897,
  [SMALL_STATE(28)] = 921,
  [SMALL_STATE(29)] = 945,
  [SMALL_STATE(30)] = 969,
  [SMALL_STATE(31)] = 993,
  [SMALL_STATE(32)] = 1017,
  [SMALL_STATE(33)] = 1041,
  [SMALL_STATE(34)] = 1065,
  [SMALL_STATE(35)] = 1089,
  [SMALL_STATE(36)] = 1113,
  [SMALL_STATE(37)] = 1137,
  [SMALL_STATE(38)] = 1161,
  [SMALL_STATE(39)] = 1185,
  [SMALL_STATE(40)] = 1209,
  [SMALL_STATE(41)] = 1223,
  [SMALL_STATE(42)] = 1237,
  [SMALL_STATE(43)] = 1257,
  [SMALL_STATE(44)] = 1271,
  [SMALL_STATE(45)] = 1291,
  [SMALL_STATE(46)] = 1311,
  [SMALL_STATE(47)] = 1331,
  [SMALL_STATE(48)] = 1351,
  [SMALL_STATE(49)] = 1371,
  [SMALL_STATE(50)] = 1385,
  [SMALL_STATE(51)] = 1400,
  [SMALL_STATE(52)] = 1415,
  [SMALL_STATE(53)] = 1430,
  [SMALL_STATE(54)] = 1445,
  [SMALL_STATE(55)] = 1460,
  [SMALL_STATE(56)] = 1475,
  [SMALL_STATE(57)] = 1490,
  [SMALL_STATE(58)] = 1505,
  [SMALL_STATE(59)] = 1522,
  [SMALL_STATE(60)] = 1537,
  [SMALL_STATE(61)] = 1552,
  [SMALL_STATE(62)] = 1567,
  [SMALL_STATE(63)] = 1581,
  [SMALL_STATE(64)] = 1595,
  [SMALL_STATE(65)] = 1609,
  [SMALL_STATE(66)] = 1623,
  [SMALL_STATE(67)] = 1637,
  [SMALL_STATE(68)] = 1651,
  [SMALL_STATE(69)] = 1665,
  [SMALL_STATE(70)] = 1679,
  [SMALL_STATE(71)] = 1688,
  [SMALL_STATE(72)] = 1697,
  [SMALL_STATE(73)] = 1706,
  [SMALL_STATE(74)] = 1715,
  [SMALL_STATE(75)] = 1724,
  [SMALL_STATE(76)] = 1733,
  [SMALL_STATE(77)] = 1742,
  [SMALL_STATE(78)] = 1751,
  [SMALL_STATE(79)] = 1760,
  [SMALL_STATE(80)] = 1769,
  [SMALL_STATE(81)] = 1778,
  [SMALL_STATE(82)] = 1789,
  [SMALL_STATE(83)] = 1798,
  [SMALL_STATE(84)] = 1807,
  [SMALL_STATE(85)] = 1816,
  [SMALL_STATE(86)] = 1827,
  [SMALL_STATE(87)] = 1836,
  [SMALL_STATE(88)] = 1845,
  [SMALL_STATE(89)] = 1853,
  [SMALL_STATE(90)] = 1861,
  [SMALL_STATE(91)] = 1869,
  [SMALL_STATE(92)] = 1877,
  [SMALL_STATE(93)] = 1885,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 4),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 4),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 3),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 2),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(5),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(5),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(48),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(7),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(39),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(9),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(81),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(55),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binary_segment_repeat3, 2), SHIFT_REPEAT(93),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binary_segment_repeat3, 2),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binary_segment_repeat3, 2), SHIFT_REPEAT(20),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binary_segment_repeat3, 2), SHIFT_REPEAT(20),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binary_segment_repeat3, 2), SHIFT_REPEAT(22),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binary_segment_repeat3, 2), SHIFT_REPEAT(21),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_size, 4),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_size, 4),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_type, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_type, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_endianess, 1),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_endianess, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_signedness, 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_signedness, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__square_bracket_list, 2, .production_id = 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__square_bracket_list, 2, .production_id = 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 3),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary, 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 1),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2, .production_id = 3),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 2, .production_id = 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 3),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 1, .production_id = 1),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 1, .production_id = 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__square_bracket_list, 3, .production_id = 4),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__square_bracket_list, 3, .production_id = 4),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paren_list, 3, .production_id = 4),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__paren_list, 3, .production_id = 4),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paren_list, 2, .production_id = 2),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__paren_list, 2, .production_id = 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binary_repeat1, 2), SHIFT_REPEAT(41),
  [219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binary_repeat1, 2), SHIFT_REPEAT(41),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binary_repeat1, 2), SHIFT_REPEAT(46),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binary_repeat1, 2), SHIFT_REPEAT(58),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binary_repeat1, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_segment, 4),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_segment, 4),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_segment, 1),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_segment, 1),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_segment, 2),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_segment, 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_segment, 3),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_segment, 3),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2), SHIFT_REPEAT(18),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binary_segment_repeat2, 2),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binary_segment_repeat1, 2),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binary_segment_repeat1, 2), SHIFT_REPEAT(52),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binary_string_repeat2, 3),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binary_segment_repeat2, 3),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binary_string_repeat2, 2),
  [312] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binary_string_repeat1, 2), SHIFT_REPEAT(61),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binary_string_repeat1, 2),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binary_segment_repeat2, 2), SHIFT_REPEAT(91),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binary_string_repeat2, 2), SHIFT_REPEAT(89),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_pair, 2, .production_id = 5),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [333] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_lfe(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_symbol,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
