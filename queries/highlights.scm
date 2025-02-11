; Keywords
[
  "lambda"
  "match-lambda"
  "defun"
  "defmacro"
  "export"
  "all"
  "from"
  "rename"
  "import"
  "module-alias"
  "defmodule"
  "let"
  "let*"
  "let-function"
  "letrec-function"
  "let-macro"
  "if"
  "case"
  "cond"
  "when"
] @keyword

; Operators
"?=" @operator

; Constants
(integer) @number
(float) @float
(character) @character
(list_string) @string
(binary_string) @string

; Comments
(comment) @comment

; Functions
(defun name: (symbol) @function)
(defmacro name: (symbol) @function.macro)
(function name: (symbol) @function)

; Variables
(binding) @variable
(parameters (binding) @variable.parameter)

; Modules
(module name: (symbol) @module)
(module_alias_item module: (symbol) @module)
(import_from module: (symbol) @module)
(import_rename module: (symbol) @module)

; Delimiters
["(" ")" "[" "]"] @punctuation.bracket
