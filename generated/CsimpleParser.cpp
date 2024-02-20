
// Generated from Csimple.g4 by ANTLR 4.13.1


#include "CsimpleListener.h"
#include "CsimpleVisitor.h"

#include "CsimpleParser.h"


using namespace antlrcpp;
using namespace antlrcpptest;

using namespace antlr4;

namespace {

struct CsimpleParserStaticData final {
  CsimpleParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  CsimpleParserStaticData(const CsimpleParserStaticData&) = delete;
  CsimpleParserStaticData(CsimpleParserStaticData&&) = delete;
  CsimpleParserStaticData& operator=(const CsimpleParserStaticData&) = delete;
  CsimpleParserStaticData& operator=(CsimpleParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag csimpleParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
CsimpleParserStaticData *csimpleParserStaticData = nullptr;

void csimpleParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (csimpleParserStaticData != nullptr) {
    return;
  }
#else
  assert(csimpleParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<CsimpleParserStaticData>(
    std::vector<std::string>{
      "cProgram"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "'to'", "'in'", "'let'", "'main'", 
      "'break'", "'char'", "'const'", "'continue'", "'else'", "'float'", 
      "'for'", "'if'", "'int'", "'return'", "'void'", "'while'", "'do'", 
      "'bool'", "'('", "')'", "'['", "']'", "'{'", "'}'", "'<'", "'<='", 
      "'>'", "'>='", "'+'", "'-'", "'*'", "'/'", "'%'", "'**'", "'&'", "'|'", 
      "'!='", "'=='", "';'", "','", "'='", "'.'"
    },
    std::vector<std::string>{
      "", "DeclSegment", "VarDeclList", "FuncDeclList", "Type", "TypeId", 
      "VarDecl", "IdList", "OptionalInit", "FuncDecl", "ParamList", "RetType", 
      "Param", "StmtList", "Stmt", "LetStmt", "ReturnStmt", "BreakStmt", 
      "ForStmt", "WhileStmt", "AssignStmt", "RValue", "RcallStmt", "CallStmt", 
      "IfStmt", "IfStmtTail", "Expr", "OrTerm", "AndTerm", "LeTerm", "GeTerm", 
      "LtTerm", "GtTerm", "NeTerm", "EqTerm", "SubTerm", "AddTerm", "DivTerm", 
      "MulTerm", "PowTerm", "ParnTerm", "Constant", "ExprList", "Lvalue", 
      "To", "In", "Let", "Main", "Break", "Char", "Const", "Continue", "Else", 
      "Float", "For", "If", "Int", "Return", "Void", "While", "Do", "Bool", 
      "LeftParen", "RightParen", "LeftBracket", "RightBracket", "LeftBrace", 
      "RightBrace", "Less", "LessEqual", "Greater", "GreaterEqual", "Plus", 
      "Minus", "Star", "Div", "Mod", "Power", "And", "Or", "NotEq", "Equal", 
      "Semi", "Comma", "Assign", "Dot", "ID", "IntLit", "FloatLit", "Whitespace", 
      "BlockComment", "LineComment"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,91,11,2,0,7,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,0,0,1,0,0,0,9,0,
  	2,1,0,0,0,2,3,5,47,0,0,3,4,5,46,0,0,4,5,5,1,0,0,5,6,5,45,0,0,6,7,5,66,
  	0,0,7,8,5,13,0,0,8,9,5,67,0,0,9,1,1,0,0,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  csimpleParserStaticData = staticData.release();
}

}

CsimpleParser::CsimpleParser(TokenStream *input) : CsimpleParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

CsimpleParser::CsimpleParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  CsimpleParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *csimpleParserStaticData->atn, csimpleParserStaticData->decisionToDFA, csimpleParserStaticData->sharedContextCache, options);
}

CsimpleParser::~CsimpleParser() {
  delete _interpreter;
}

const atn::ATN& CsimpleParser::getATN() const {
  return *csimpleParserStaticData->atn;
}

std::string CsimpleParser::getGrammarFileName() const {
  return "Csimple.g4";
}

const std::vector<std::string>& CsimpleParser::getRuleNames() const {
  return csimpleParserStaticData->ruleNames;
}

const dfa::Vocabulary& CsimpleParser::getVocabulary() const {
  return csimpleParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView CsimpleParser::getSerializedATN() const {
  return csimpleParserStaticData->serializedATN;
}


//----------------- CProgramContext ------------------------------------------------------------------

CsimpleParser::CProgramContext::CProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CsimpleParser::CProgramContext::Main() {
  return getToken(CsimpleParser::Main, 0);
}

tree::TerminalNode* CsimpleParser::CProgramContext::Let() {
  return getToken(CsimpleParser::Let, 0);
}

tree::TerminalNode* CsimpleParser::CProgramContext::DeclSegment() {
  return getToken(CsimpleParser::DeclSegment, 0);
}

tree::TerminalNode* CsimpleParser::CProgramContext::In() {
  return getToken(CsimpleParser::In, 0);
}

tree::TerminalNode* CsimpleParser::CProgramContext::LeftBrace() {
  return getToken(CsimpleParser::LeftBrace, 0);
}

tree::TerminalNode* CsimpleParser::CProgramContext::StmtList() {
  return getToken(CsimpleParser::StmtList, 0);
}

tree::TerminalNode* CsimpleParser::CProgramContext::RightBrace() {
  return getToken(CsimpleParser::RightBrace, 0);
}


size_t CsimpleParser::CProgramContext::getRuleIndex() const {
  return CsimpleParser::RuleCProgram;
}

void CsimpleParser::CProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CsimpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCProgram(this);
}

void CsimpleParser::CProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CsimpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCProgram(this);
}


std::any CsimpleParser::CProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CsimpleVisitor*>(visitor))
    return parserVisitor->visitCProgram(this);
  else
    return visitor->visitChildren(this);
}

CsimpleParser::CProgramContext* CsimpleParser::cProgram() {
  CProgramContext *_localctx = _tracker.createInstance<CProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, CsimpleParser::RuleCProgram);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2);
    match(CsimpleParser::Main);
    setState(3);
    match(CsimpleParser::Let);
    setState(4);
    match(CsimpleParser::DeclSegment);
    setState(5);
    match(CsimpleParser::In);
    setState(6);
    match(CsimpleParser::LeftBrace);
    setState(7);
    match(CsimpleParser::StmtList);
    setState(8);
    match(CsimpleParser::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void CsimpleParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  csimpleParserInitialize();
#else
  ::antlr4::internal::call_once(csimpleParserOnceFlag, csimpleParserInitialize);
#endif
}
