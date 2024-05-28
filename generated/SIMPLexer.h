
// Generated from SIMP.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"


namespace antlrcpptest {


class  SIMPLexer : public antlr4::Lexer {
public:
  enum {
    KeywordMain = 1, KeywordBreak = 2, KeywordDo = 3, KeywordElse = 4, KeywordEnd = 5, 
    KeywordFor = 6, KeywordFunction = 7, KeywordIf = 8, KeywordIn = 9, KeywordLet = 10, 
    KeywordOf = 11, KeywordThen = 12, KeywordTo = 13, KeywordDownto = 14, 
    KeywordType = 15, KeywordVar = 16, KeywordWhile = 17, KeywordEndif = 18, 
    KeywordBegin = 19, KeywordEnddo = 20, KeywordReturn = 21, KeywordInt = 22, 
    KeywordFloat = 23, KeywordWrite = 24, BinOpPlus = 25, BinOpMinus = 26, 
    BinOpTimes = 27, BinOpDivide = 28, BinOpEq = 29, BinOpNeq = 30, BinOpLt = 31, 
    BinOpGt = 32, BinOpLeq = 33, BinOpGeq = 34, BinOpAnd = 35, BinOpOr = 36, 
    OpAssign = 37, Equals = 38, Colon = 39, Semicolon = 40, Comma = 41, 
    LParen = 42, RParen = 43, LBracket = 44, RBracket = 45, ID = 46, IntLit = 47, 
    FloatLit = 48, Comment = 49, Whitespace = 50
  };

  explicit SIMPLexer(antlr4::CharStream *input);

  ~SIMPLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

}  // namespace antlrcpptest
