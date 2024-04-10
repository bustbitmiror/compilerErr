
// Generated from SIMP.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"


namespace antlrcpptest {


class  SIMPLexer : public antlr4::Lexer {
public:
  enum {
    KeywordMain = 1, KeywordBreak = 2, KeywordDo = 3, KeywordElse = 4, KeywordEnd = 5, 
    KeywordFor = 6, KeywordFunction = 7, KeywordIf = 8, KeywordIn = 9, KeywordLet = 10, 
    KeywordOf = 11, KeywordThen = 12, KeywordTo = 13, KeywordType = 14, 
    KeywordVar = 15, KeywordWhile = 16, KeywordEndif = 17, KeywordBegin = 18, 
    KeywordEnddo = 19, KeywordReturn = 20, KeywordInt = 21, KeywordFloat = 22, 
    BinOpPlus = 23, BinOpMinus = 24, BinOpTimes = 25, BinOpDivide = 26, 
    BinOpPower = 27, BinOpEq = 28, BinOpNeq = 29, BinOpLt = 30, BinOpGt = 31, 
    BinOpLeq = 32, BinOpGeq = 33, BinOpAnd = 34, BinOpOr = 35, OpAssign = 36, 
    Equals = 37, Colon = 38, Semicolon = 39, Comma = 40, LParen = 41, RParen = 42, 
    LBracket = 43, RBracket = 44, ID = 45, IntLit = 46, FloatLit = 47, Comment = 48, 
    Whitespace = 49
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
