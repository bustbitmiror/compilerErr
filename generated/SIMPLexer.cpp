
// Generated from SIMP.g4 by ANTLR 4.13.1


#include "SIMPLexer.h"


using namespace antlr4;

using namespace antlrcpptest;


using namespace antlr4;

namespace {

struct SIMPLexerStaticData final {
  SIMPLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  SIMPLexerStaticData(const SIMPLexerStaticData&) = delete;
  SIMPLexerStaticData(SIMPLexerStaticData&&) = delete;
  SIMPLexerStaticData& operator=(const SIMPLexerStaticData&) = delete;
  SIMPLexerStaticData& operator=(SIMPLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag simplexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
SIMPLexerStaticData *simplexerLexerStaticData = nullptr;

void simplexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (simplexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(simplexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<SIMPLexerStaticData>(
    std::vector<std::string>{
      "KeywordMain", "KeywordBreak", "KeywordDo", "KeywordElse", "KeywordEnd", 
      "KeywordFor", "KeywordFunction", "KeywordIf", "KeywordIn", "KeywordLet", 
      "KeywordOf", "KeywordThen", "KeywordTo", "KeywordType", "KeywordVar", 
      "KeywordWhile", "KeywordEndif", "KeywordBegin", "KeywordEnddo", "KeywordReturn", 
      "KeywordInt", "KeywordFloat", "BinOpPlus", "BinOpMinus", "BinOpTimes", 
      "BinOpDivide", "BinOpPower", "BinOpEq", "BinOpNeq", "BinOpLt", "BinOpGt", 
      "BinOpLeq", "BinOpGeq", "BinOpAnd", "BinOpOr", "OpAssign", "Equals", 
      "Colon", "Semicolon", "Comma", "LParen", "RParen", "LBracket", "RBracket", 
      "ID", "IntLit", "FloatLit", "Comment", "Whitespace"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'main'", "'break'", "'do'", "'else'", "'end'", "'for'", "'function'", 
      "'if'", "'in'", "'let'", "'of'", "'then'", "'to'", "'type'", "'var'", 
      "'while'", "'endif'", "'begin'", "'enddo'", "'return'", "'int'", "'float'", 
      "'+'", "'-'", "'*'", "'/'", "'**'", "'=='", "'!='", "'<'", "'>'", 
      "'<='", "'>='", "'&'", "'|'", "':='", "'='", "':'", "';'", "','", 
      "'('", "')'", "'['", "']'"
    },
    std::vector<std::string>{
      "", "KeywordMain", "KeywordBreak", "KeywordDo", "KeywordElse", "KeywordEnd", 
      "KeywordFor", "KeywordFunction", "KeywordIf", "KeywordIn", "KeywordLet", 
      "KeywordOf", "KeywordThen", "KeywordTo", "KeywordType", "KeywordVar", 
      "KeywordWhile", "KeywordEndif", "KeywordBegin", "KeywordEnddo", "KeywordReturn", 
      "KeywordInt", "KeywordFloat", "BinOpPlus", "BinOpMinus", "BinOpTimes", 
      "BinOpDivide", "BinOpPower", "BinOpEq", "BinOpNeq", "BinOpLt", "BinOpGt", 
      "BinOpLeq", "BinOpGeq", "BinOpAnd", "BinOpOr", "OpAssign", "Equals", 
      "Colon", "Semicolon", "Comma", "LParen", "RParen", "LBracket", "RBracket", 
      "ID", "IntLit", "FloatLit", "Comment", "Whitespace"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,49,306,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,
  	7,42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,1,0,
  	1,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,
  	3,1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,
  	1,7,1,7,1,7,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,10,1,10,1,10,1,11,1,11,1,11,
  	1,11,1,11,1,12,1,12,1,12,1,13,1,13,1,13,1,13,1,13,1,14,1,14,1,14,1,14,
  	1,15,1,15,1,15,1,15,1,15,1,15,1,16,1,16,1,16,1,16,1,16,1,16,1,17,1,17,
  	1,17,1,17,1,17,1,17,1,18,1,18,1,18,1,18,1,18,1,18,1,19,1,19,1,19,1,19,
  	1,19,1,19,1,19,1,20,1,20,1,20,1,20,1,21,1,21,1,21,1,21,1,21,1,21,1,22,
  	1,22,1,23,1,23,1,24,1,24,1,25,1,25,1,26,1,26,1,26,1,27,1,27,1,27,1,28,
  	1,28,1,28,1,29,1,29,1,30,1,30,1,31,1,31,1,31,1,32,1,32,1,32,1,33,1,33,
  	1,34,1,34,1,35,1,35,1,35,1,36,1,36,1,37,1,37,1,38,1,38,1,39,1,39,1,40,
  	1,40,1,41,1,41,1,42,1,42,1,43,1,43,1,44,1,44,5,44,259,8,44,10,44,12,44,
  	262,9,44,1,45,1,45,1,45,5,45,267,8,45,10,45,12,45,270,9,45,3,45,272,8,
  	45,1,46,4,46,275,8,46,11,46,12,46,276,1,46,1,46,5,46,281,8,46,10,46,12,
  	46,284,9,46,1,47,1,47,1,47,1,47,5,47,290,8,47,10,47,12,47,293,9,47,1,
  	47,1,47,1,47,1,47,1,47,1,48,4,48,301,8,48,11,48,12,48,302,1,48,1,48,1,
  	291,0,49,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,
  	13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,43,22,45,23,47,24,
  	49,25,51,26,53,27,55,28,57,29,59,30,61,31,63,32,65,33,67,34,69,35,71,
  	36,73,37,75,38,77,39,79,40,81,41,83,42,85,43,87,44,89,45,91,46,93,47,
  	95,48,97,49,1,0,5,2,0,65,90,97,122,4,0,48,57,65,90,95,95,97,122,1,0,49,
  	57,1,0,48,57,3,0,9,10,13,13,32,32,312,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,
  	0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,
  	17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,
  	0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,
  	0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,
  	49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,
  	0,0,0,0,61,1,0,0,0,0,63,1,0,0,0,0,65,1,0,0,0,0,67,1,0,0,0,0,69,1,0,0,
  	0,0,71,1,0,0,0,0,73,1,0,0,0,0,75,1,0,0,0,0,77,1,0,0,0,0,79,1,0,0,0,0,
  	81,1,0,0,0,0,83,1,0,0,0,0,85,1,0,0,0,0,87,1,0,0,0,0,89,1,0,0,0,0,91,1,
  	0,0,0,0,93,1,0,0,0,0,95,1,0,0,0,0,97,1,0,0,0,1,99,1,0,0,0,3,104,1,0,0,
  	0,5,110,1,0,0,0,7,113,1,0,0,0,9,118,1,0,0,0,11,122,1,0,0,0,13,126,1,0,
  	0,0,15,135,1,0,0,0,17,138,1,0,0,0,19,141,1,0,0,0,21,145,1,0,0,0,23,148,
  	1,0,0,0,25,153,1,0,0,0,27,156,1,0,0,0,29,161,1,0,0,0,31,165,1,0,0,0,33,
  	171,1,0,0,0,35,177,1,0,0,0,37,183,1,0,0,0,39,189,1,0,0,0,41,196,1,0,0,
  	0,43,200,1,0,0,0,45,206,1,0,0,0,47,208,1,0,0,0,49,210,1,0,0,0,51,212,
  	1,0,0,0,53,214,1,0,0,0,55,217,1,0,0,0,57,220,1,0,0,0,59,223,1,0,0,0,61,
  	225,1,0,0,0,63,227,1,0,0,0,65,230,1,0,0,0,67,233,1,0,0,0,69,235,1,0,0,
  	0,71,237,1,0,0,0,73,240,1,0,0,0,75,242,1,0,0,0,77,244,1,0,0,0,79,246,
  	1,0,0,0,81,248,1,0,0,0,83,250,1,0,0,0,85,252,1,0,0,0,87,254,1,0,0,0,89,
  	256,1,0,0,0,91,271,1,0,0,0,93,274,1,0,0,0,95,285,1,0,0,0,97,300,1,0,0,
  	0,99,100,5,109,0,0,100,101,5,97,0,0,101,102,5,105,0,0,102,103,5,110,0,
  	0,103,2,1,0,0,0,104,105,5,98,0,0,105,106,5,114,0,0,106,107,5,101,0,0,
  	107,108,5,97,0,0,108,109,5,107,0,0,109,4,1,0,0,0,110,111,5,100,0,0,111,
  	112,5,111,0,0,112,6,1,0,0,0,113,114,5,101,0,0,114,115,5,108,0,0,115,116,
  	5,115,0,0,116,117,5,101,0,0,117,8,1,0,0,0,118,119,5,101,0,0,119,120,5,
  	110,0,0,120,121,5,100,0,0,121,10,1,0,0,0,122,123,5,102,0,0,123,124,5,
  	111,0,0,124,125,5,114,0,0,125,12,1,0,0,0,126,127,5,102,0,0,127,128,5,
  	117,0,0,128,129,5,110,0,0,129,130,5,99,0,0,130,131,5,116,0,0,131,132,
  	5,105,0,0,132,133,5,111,0,0,133,134,5,110,0,0,134,14,1,0,0,0,135,136,
  	5,105,0,0,136,137,5,102,0,0,137,16,1,0,0,0,138,139,5,105,0,0,139,140,
  	5,110,0,0,140,18,1,0,0,0,141,142,5,108,0,0,142,143,5,101,0,0,143,144,
  	5,116,0,0,144,20,1,0,0,0,145,146,5,111,0,0,146,147,5,102,0,0,147,22,1,
  	0,0,0,148,149,5,116,0,0,149,150,5,104,0,0,150,151,5,101,0,0,151,152,5,
  	110,0,0,152,24,1,0,0,0,153,154,5,116,0,0,154,155,5,111,0,0,155,26,1,0,
  	0,0,156,157,5,116,0,0,157,158,5,121,0,0,158,159,5,112,0,0,159,160,5,101,
  	0,0,160,28,1,0,0,0,161,162,5,118,0,0,162,163,5,97,0,0,163,164,5,114,0,
  	0,164,30,1,0,0,0,165,166,5,119,0,0,166,167,5,104,0,0,167,168,5,105,0,
  	0,168,169,5,108,0,0,169,170,5,101,0,0,170,32,1,0,0,0,171,172,5,101,0,
  	0,172,173,5,110,0,0,173,174,5,100,0,0,174,175,5,105,0,0,175,176,5,102,
  	0,0,176,34,1,0,0,0,177,178,5,98,0,0,178,179,5,101,0,0,179,180,5,103,0,
  	0,180,181,5,105,0,0,181,182,5,110,0,0,182,36,1,0,0,0,183,184,5,101,0,
  	0,184,185,5,110,0,0,185,186,5,100,0,0,186,187,5,100,0,0,187,188,5,111,
  	0,0,188,38,1,0,0,0,189,190,5,114,0,0,190,191,5,101,0,0,191,192,5,116,
  	0,0,192,193,5,117,0,0,193,194,5,114,0,0,194,195,5,110,0,0,195,40,1,0,
  	0,0,196,197,5,105,0,0,197,198,5,110,0,0,198,199,5,116,0,0,199,42,1,0,
  	0,0,200,201,5,102,0,0,201,202,5,108,0,0,202,203,5,111,0,0,203,204,5,97,
  	0,0,204,205,5,116,0,0,205,44,1,0,0,0,206,207,5,43,0,0,207,46,1,0,0,0,
  	208,209,5,45,0,0,209,48,1,0,0,0,210,211,5,42,0,0,211,50,1,0,0,0,212,213,
  	5,47,0,0,213,52,1,0,0,0,214,215,5,42,0,0,215,216,5,42,0,0,216,54,1,0,
  	0,0,217,218,5,61,0,0,218,219,5,61,0,0,219,56,1,0,0,0,220,221,5,33,0,0,
  	221,222,5,61,0,0,222,58,1,0,0,0,223,224,5,60,0,0,224,60,1,0,0,0,225,226,
  	5,62,0,0,226,62,1,0,0,0,227,228,5,60,0,0,228,229,5,61,0,0,229,64,1,0,
  	0,0,230,231,5,62,0,0,231,232,5,61,0,0,232,66,1,0,0,0,233,234,5,38,0,0,
  	234,68,1,0,0,0,235,236,5,124,0,0,236,70,1,0,0,0,237,238,5,58,0,0,238,
  	239,5,61,0,0,239,72,1,0,0,0,240,241,5,61,0,0,241,74,1,0,0,0,242,243,5,
  	58,0,0,243,76,1,0,0,0,244,245,5,59,0,0,245,78,1,0,0,0,246,247,5,44,0,
  	0,247,80,1,0,0,0,248,249,5,40,0,0,249,82,1,0,0,0,250,251,5,41,0,0,251,
  	84,1,0,0,0,252,253,5,91,0,0,253,86,1,0,0,0,254,255,5,93,0,0,255,88,1,
  	0,0,0,256,260,7,0,0,0,257,259,7,1,0,0,258,257,1,0,0,0,259,262,1,0,0,0,
  	260,258,1,0,0,0,260,261,1,0,0,0,261,90,1,0,0,0,262,260,1,0,0,0,263,272,
  	5,48,0,0,264,268,7,2,0,0,265,267,7,3,0,0,266,265,1,0,0,0,267,270,1,0,
  	0,0,268,266,1,0,0,0,268,269,1,0,0,0,269,272,1,0,0,0,270,268,1,0,0,0,271,
  	263,1,0,0,0,271,264,1,0,0,0,272,92,1,0,0,0,273,275,7,3,0,0,274,273,1,
  	0,0,0,275,276,1,0,0,0,276,274,1,0,0,0,276,277,1,0,0,0,277,278,1,0,0,0,
  	278,282,5,46,0,0,279,281,7,3,0,0,280,279,1,0,0,0,281,284,1,0,0,0,282,
  	280,1,0,0,0,282,283,1,0,0,0,283,94,1,0,0,0,284,282,1,0,0,0,285,286,5,
  	47,0,0,286,287,5,42,0,0,287,291,1,0,0,0,288,290,9,0,0,0,289,288,1,0,0,
  	0,290,293,1,0,0,0,291,292,1,0,0,0,291,289,1,0,0,0,292,294,1,0,0,0,293,
  	291,1,0,0,0,294,295,5,42,0,0,295,296,5,47,0,0,296,297,1,0,0,0,297,298,
  	6,47,0,0,298,96,1,0,0,0,299,301,7,4,0,0,300,299,1,0,0,0,301,302,1,0,0,
  	0,302,300,1,0,0,0,302,303,1,0,0,0,303,304,1,0,0,0,304,305,6,48,0,0,305,
  	98,1,0,0,0,8,0,260,268,271,276,282,291,302,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  simplexerLexerStaticData = staticData.release();
}

}

SIMPLexer::SIMPLexer(CharStream *input) : Lexer(input) {
  SIMPLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *simplexerLexerStaticData->atn, simplexerLexerStaticData->decisionToDFA, simplexerLexerStaticData->sharedContextCache);
}

SIMPLexer::~SIMPLexer() {
  delete _interpreter;
}

std::string SIMPLexer::getGrammarFileName() const {
  return "SIMP.g4";
}

const std::vector<std::string>& SIMPLexer::getRuleNames() const {
  return simplexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& SIMPLexer::getChannelNames() const {
  return simplexerLexerStaticData->channelNames;
}

const std::vector<std::string>& SIMPLexer::getModeNames() const {
  return simplexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& SIMPLexer::getVocabulary() const {
  return simplexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView SIMPLexer::getSerializedATN() const {
  return simplexerLexerStaticData->serializedATN;
}

const atn::ATN& SIMPLexer::getATN() const {
  return *simplexerLexerStaticData->atn;
}




void SIMPLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  simplexerLexerInitialize();
#else
  ::antlr4::internal::call_once(simplexerLexerOnceFlag, simplexerLexerInitialize);
#endif
}