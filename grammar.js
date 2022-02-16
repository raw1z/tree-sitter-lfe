const SIGN = /[+-]/;
const UINT = /[0-9]+/;

module.exports = grammar({
  name: "lfe",

  word: ($) => $.symbol,

  extras: ($) => [$._whitespace, $.comment],

  rules: {
    source: ($) => repeat($._form),

    comment: (_) =>
      token(choice(seq(";", /.*\n?/), seq("#|", repeat(/[^(#|)]/), "#|"))),

    _whitespace: (_) => token(repeat1(/\s/)),

    _form: ($) =>
      choice(
        $.integer,
        $.float,
        $.character,
        $.list_string,
        $.binary,
        $.delimited_symbol,
        $.symbol,
        $.list,
        $.tuple,
        $.map
      ),

    float: (_) => {
      return token(
        seq(
          optional(SIGN),
          UINT,
          seq(".", UINT),
          optional(seq("e", optional(SIGN), UINT))
        )
      );
    },

    integer: (_) => {
      const bases = choice(
        "#2r",
        "#3r",
        "#4r",
        "#5r",
        "#6r",
        "#7r",
        "#8r",
        "#9r",
        "#10r",
        "#11r",
        "#12r",
        "#13r",
        "#14r",
        "#15r",
        "#16r",
        "#17r",
        "#18r",
        "#19r",
        "#20r",
        "#21r",
        "#22r",
        "#23r",
        "#24r",
        "#25r",
        "#26r",
        "#27r",
        "#28r",
        "#29r",
        "#30r",
        "#31r",
        "#32r",
        "#33r",
        "#34r",
        "#35r",
        "#36r"
      );
      const explicitBase = seq(bases, /[0-9a-zA-Z]+/);
      const decimal = seq(optional("#d"), optional(SIGN), UINT);
      const binary = seq("#", choice("b", "*"), optional(SIGN), /[01]+/);
      const octal = seq("#o", optional(SIGN), /[0-7]+/);
      const hexadecimal = seq("#x", optional(SIGN), /[0-9a-fA-F]+/);
      return token(choice(explicitBase, decimal, binary, octal, hexadecimal));
    },

    character: (_) =>
      token(choice(seq("#\\", /[^"\\]/), seq("#\\x", /[0-9a-fA-F]+/, ";"))),

    list_string: (_) =>
      token(
        seq(
          '"',
          repeat(/[^"\\]/),
          repeat(seq("\\", /./, repeat(/[^"\\]/))),
          '"'
        )
      ),

    binary_string: (_) =>
      seq(
        '#"',
        repeat(/[^"\\]/),
        repeat(seq("\\", /./, repeat(/[^"\\]/))),
        '"'
      ),

    binary_size: ($) => seq("(", "size", $.integer, ")"),

    binary_type: (_) =>
      choice(
        "integer",
        "float",
        "binary",
        "bytes",
        "bitstring",
        "bits",
        "utf8",
        "utf16",
        "utf32"
      ),

    binary_signedness: (_) => choice("signed", "unsigned"),

    binary_endianess: (_) => choice("big-endian", "little-endian", "native"),

    binary_segment: ($) =>
      choice(
        seq(
          '"',
          repeat(/[^"()\\]/),
          repeat(seq("\\", /./, repeat(/[^"()\\]/))),
          '"'
        ),
        choice($.integer, $.float),
        seq(
          "(",
          choice($.integer, $.float, $.binary_string),
          repeat(
            choice(
              $.binary_size,
              $.binary_type,
              $.binary_signedness,
              $.binary_endianess
            )
          ),
          ")"
        )
      ),

    binary: ($) => {
      return choice($.binary_string, seq("#B(", repeat($.binary_segment), ")"));
    },

    delimited_symbol: () => {
      const charsInRange0To255 = repeat(/[0-9a-zA-Z\s]/);
      return token(
        seq(
          "|",
          charsInRange0To255,
          repeat(seq("\\|", charsInRange0To255)),
          "|"
        )
      );
    },

    symbol: () => {
      const symbolTail = /[^\s\n\v\f\r(){}\[\]";]*/;
      const symbolHead = /[^\s\n\v\f\r(){}\[\]";|',#]/;
      return token(seq(symbolHead, symbolTail));
    },

    _paren_list: ($) =>
      seq(field("open", "("), repeat($._form), field("close", ")")),

    _square_bracket_list: ($) =>
      seq(field("open", "["), repeat($._form), field("close", "]")),

    list: ($) => choice($._paren_list, $._square_bracket_list),

    tuple: ($) => seq("#", $._paren_list),

    map_pair: ($) => seq(field("key", $.symbol), field("value", $._form)),

    map: ($) => seq("#M(", repeat($.map_pair), ")"),
  },
});
