const commonlist = require("tree-sitter-commonlisp/grammar");

module.exports = grammar(commonlist, {
  name: "lfe",
});
