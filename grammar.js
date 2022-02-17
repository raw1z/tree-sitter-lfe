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
        $.map,
        $.lambda,
        $.defun,
        $.defmacro,
        $.module
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
      token(
        seq(
          '#"',
          repeat(/[^"\\]/),
          repeat(seq("\\", /./, repeat(/[^"\\]/))),
          '"'
        )
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

    list: ($) =>
      choice(seq("(", repeat($._form), ")"), seq("[", repeat($._form), "]")),

    tuple: ($) => seq("#(", repeat($._form), ")"),

    map_pair: ($) => seq(field("key", $.symbol), field("value", $._form)),

    map: ($) => seq("#M(", repeat($.map_pair), ")"),

    function_argument: ($) => field("name", $.symbol),

    function_parameters: ($) => seq("(", repeat($.function_argument), ")"),

    function_body: ($) => repeat1($._form),

    function_pattern: ($) =>
      seq(
        "(",
        field("parameters", $.function_parameters),
        field("body", $.function_body),
        ")"
      ),

    lambda: ($) =>
      seq(
        "(",
        "lambda",
        field("parameters", $.function_parameters),
        field("body", $.function_body),
        ")"
      ),

    defun: ($) =>
      seq(
        "(",
        "defun",
        choice(
          seq(
            field("name", $.symbol),
            field("parameters", $.function_parameters),
            field("body", $.function_body)
          ),
          seq(
            field("name", $.symbol),
            optional($.list_string),
            field(
              "patterns",
              alias(repeat1($.function_pattern), $.function_patterns)
            )
          )
        ),
        ")"
      ),

    defmacro: ($) =>
      seq(
        "(",
        "defmacro",
        choice(
          seq(
            field("name", $.symbol),
            field("parameters", $.function_parameters),
            field("body", $.function_body)
          ),
          seq(
            field("name", $.symbol),
            optional($.list_string),
            field(
              "patterns",
              alias(repeat1($.function_pattern), $.function_patterns)
            )
          )
        ),
        ")"
      ),

    function_with_arity: ($) =>
      seq("(", field("name", $.symbol), field("arity", $.integer), ")"),

    module_exports: ($) =>
      seq("(", "export", choice("all", repeat1($.function_with_arity)), ")"),

    module_import_from_functions: ($) => repeat1($.function_with_arity),

    module_import_from: ($) =>
      seq(
        "(",
        "from",
        field("module", $.symbol),
        field("functions", $.module_import_from_functions),
        ")"
      ),

    module_import_rename_alias: ($) =>
      seq(
        "(",
        field("function", $.function_with_arity),
        field("alias", $.symbol),
        ")"
      ),

    module_import_rename_aliases: ($) => repeat1($.module_import_rename_alias),

    module_import_rename: ($) =>
      seq(
        "(",
        "rename",
        field("module", $.symbol),
        field("aliases", $.module_import_rename_aliases),
        ")"
      ),

    module_import: ($) =>
      seq(choice($.module_import_from, $.module_import_rename)),

    module_imports: ($) => seq("(", "import", repeat1($.module_import), ")"),

    module_alias_item: ($) =>
      seq("(", field("module", $.symbol), field("alias", $.symbol), ")"),

    module_alias: ($) =>
      seq("(", "module-alias", repeat1($.module_alias_item), ")"),

    module: ($) =>
      seq(
        "(",
        "defmodule",
        field("name", $.symbol),
        field("documentation", optional($.list_string)),
        field("exports", repeat($.module_exports)),
        field("imports", repeat($.module_imports)),
        field("alias", optional($.module_alias)),
        repeat($.list),
        ")"
      ),
  },
});
