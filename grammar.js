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
        $.atom,
        $.list,
        $.tuple,
        $.map,
        $.lambda,
        $.match_lambda,
        $.defun,
        $.defmacro,
        $.module,
        $.let
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

    _open: (_) => choice("(", "["),

    _close: (_) => choice(")", "]"),

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
      token(
        seq(
          '#"',
          repeat(/[^"\\]/),
          repeat(seq("\\", /./, repeat(/[^"\\]/))),
          '"'
        )
      ),

    binary_size: ($) =>
      seq($._open, alias("size", $.symbol), $.integer, $._close),

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
        alias(
          token(
            seq(
              '"',
              repeat(/[^"()\\]/),
              repeat(seq("\\", /./, repeat(/[^"()\\]/))),
              '"'
            )
          ),
          $.list_string
        ),
        choice($.integer, $.float),
        seq(
          $._open,
          choice($.integer, $.float, $.binary_string),
          repeat(
            choice(
              $.binary_size,
              $.binary_type,
              $.binary_signedness,
              $.binary_endianess
            )
          ),
          $._close
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

    atom: ($) => seq("'", alias(choice($.symbol, $.delimited_symbol), "sym")),

    list: ($) =>
      choice(
        seq(optional("'"), "(", repeat($._form), ")"),
        seq(optional("'"), "[", repeat($._form), "]")
      ),

    tuple: ($) => seq("#(", repeat($._form), ")"),

    map_pair: ($) => seq(field("key", $.symbol), field("value", $._form)),

    map: ($) => seq("#M(", repeat($.map_pair), ")"),

    binding: ($) => $.symbol,

    binding_clause: ($) => seq($._open, $.binding, $._form, $._close),

    parameters: ($) => seq($._open, repeat($.binding), $._close),

    body: ($) => repeat1($._form),

    guard: ($) => seq($._open, "when", repeat($._form), $._close),

    pattern_clause: ($) =>
      seq(
        $._open,
        alias($.list, $.pattern),
        optional($.guard),
        $.body,
        $._close
      ),

    lambda: ($) => seq($._open, "lambda", $.parameters, $.body, $._close),

    match_lambda: ($) =>
      seq(
        $._open,
        "match-lambda",
        alias(repeat1($.pattern_clause), $.patterns),
        $._close
      ),

    defun: ($) =>
      seq(
        $._open,
        "defun",
        choice(
          seq(field("name", $.symbol), $.parameters, $.body),
          seq(
            field("name", $.symbol),
            optional($.list_string),
            alias(repeat1($.pattern_clause), $.patterns)
          )
        ),
        $._close
      ),

    defmacro: ($) =>
      seq(
        $._open,
        "defmacro",
        choice(
          seq(field("name", $.symbol), $.parameters, $.body),
          seq(
            field("name", $.symbol),
            optional($.list_string),
            alias(repeat1($.pattern_clause), $.patterns)
          )
        ),
        $._close
      ),

    function: ($) =>
      seq(
        $._open,
        field("name", $.symbol),
        field("arity", $.integer),
        $._close
      ),

    exports: ($) =>
      seq($._open, "export", choice("all", repeat1($.function)), $._close),

    import_from_functions: ($) => repeat1($.function),

    import_from: ($) =>
      seq(
        $._open,
        "from",
        field("module", $.symbol),
        field("functions", $.import_from_functions),
        $._close
      ),

    import_alias: ($) =>
      seq(
        $._open,
        field("function", $.function),
        field("alias", $.symbol),
        $._close
      ),

    aliases: ($) => repeat1($.import_alias),

    import_rename: ($) =>
      seq($._open, "rename", field("module", $.symbol), $.aliases, $._close),

    import: ($) => seq(choice($.import_from, $.import_rename)),

    imports: ($) => seq($._open, "import", repeat1($.import), $._close),

    module_alias_item: ($) =>
      seq(
        $._open,
        field("module", $.symbol),
        field("alias", $.symbol),
        $._close
      ),

    module_alias: ($) =>
      seq($._open, "module-alias", repeat1($.module_alias_item), $._close),

    module: ($) =>
      seq(
        $._open,
        "defmodule",
        field("name", $.symbol),
        field("documentation", optional($.list_string)),
        repeat($.exports),
        repeat($.imports),
        field("alias", optional($.module_alias)),
        repeat($.list),
        $._close
      ),

    let: ($) =>
      seq(
        $._open,
        choice("let", "let*", "let-function", "letrec-function", "let-macro"),
        seq(
          $._open,
          repeat1(choice($.binding_clause, $.pattern_clause)),
          $._close
        ),
        alias(repeat1($._form), $.body),
        $._close
      ),
  },
});
