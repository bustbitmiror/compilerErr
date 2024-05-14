
// Generated from SIMP.g4 by ANTLR 4.13.1


#include "SIMPListener.h"
#include "SIMPVisitor.h"

#include "SIMPParser.h"


using namespace antlrcpp;
using namespace antlrcpptest;

using namespace antlr4;

namespace {

struct SIMPParserStaticData final {
  SIMPParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  SIMPParserStaticData(const SIMPParserStaticData&) = delete;
  SIMPParserStaticData(SIMPParserStaticData&&) = delete;
  SIMPParserStaticData& operator=(const SIMPParserStaticData&) = delete;
  SIMPParserStaticData& operator=(SIMPParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag simpParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
SIMPParserStaticData *simpParserStaticData = nullptr;

void simpParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (simpParserStaticData != nullptr) {
    return;
  }
#else
  assert(simpParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<SIMPParserStaticData>(
    std::vector<std::string>{
      "simpProgram", "declSegment", "varDeclList", "funcDeclList", "type", 
      "typeId", "varDecl", "idList", "optionalInit", "funcDecl", "paramList", 
      "retType", "param", "stmtList", "stmt", "letStmt", "returnStmt", "breakStmt", 
      "forStmt", "whileStmt", "assignStmt", "rValue", "rcallStmt", "callStmt", 
      "ifStmt", "ifStmtTail", "expr", "leTerm", "geTerm", "ltTerm", "gtTerm", 
      "neTerm", "eqTerm", "subTerm", "addTerm", "divTerm", "mulTerm", "parnTerm", 
      "constant", "exprList", "lvalue"
    },
    std::vector<std::string>{
      "", "'main'", "'break'", "'do'", "'else'", "'end'", "'for'", "'function'", 
      "'if'", "'in'", "'let'", "'of'", "'then'", "'to'", "'downto'", "'type'", 
      "'var'", "'while'", "'endif'", "'begin'", "'enddo'", "'return'", "'int'", 
      "'float'", "'+'", "'-'", "'*'", "'/'", "'=='", "'!='", "'<'", "'>'", 
      "'<='", "'>='", "'&'", "'|'", "':='", "'='", "':'", "';'", "','", 
      "'('", "')'", "'['", "']'"
    },
    std::vector<std::string>{
      "", "KeywordMain", "KeywordBreak", "KeywordDo", "KeywordElse", "KeywordEnd", 
      "KeywordFor", "KeywordFunction", "KeywordIf", "KeywordIn", "KeywordLet", 
      "KeywordOf", "KeywordThen", "KeywordTo", "KeywordDownto", "KeywordType", 
      "KeywordVar", "KeywordWhile", "KeywordEndif", "KeywordBegin", "KeywordEnddo", 
      "KeywordReturn", "KeywordInt", "KeywordFloat", "BinOpPlus", "BinOpMinus", 
      "BinOpTimes", "BinOpDivide", "BinOpEq", "BinOpNeq", "BinOpLt", "BinOpGt", 
      "BinOpLeq", "BinOpGeq", "BinOpAnd", "BinOpOr", "OpAssign", "Equals", 
      "Colon", "Semicolon", "Comma", "LParen", "RParen", "LBracket", "RBracket", 
      "ID", "IntLit", "FloatLit", "Comment", "Whitespace"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,49,370,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,1,0,1,0,1,0,1,0,
  	1,0,1,0,1,0,1,0,1,1,1,1,1,1,1,2,5,2,95,8,2,10,2,12,2,98,9,2,1,3,5,3,101,
  	8,3,10,3,12,3,104,9,3,1,4,1,4,3,4,108,8,4,1,5,1,5,1,6,1,6,1,6,1,6,1,6,
  	1,6,1,6,1,7,1,7,1,7,5,7,122,8,7,10,7,12,7,125,9,7,1,8,1,8,1,8,3,8,130,
  	8,8,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,10,1,10,1,10,1,10,5,
  	10,147,8,10,10,10,12,10,150,9,10,3,10,152,8,10,1,11,1,11,1,11,1,12,1,
  	12,1,12,1,12,1,13,1,13,5,13,163,8,13,10,13,12,13,166,9,13,1,14,1,14,1,
  	14,1,14,1,14,1,14,1,14,1,14,1,14,3,14,177,8,14,1,15,1,15,1,15,1,15,1,
  	15,1,15,1,15,1,16,1,16,1,16,1,16,1,17,1,17,1,17,1,18,1,18,1,18,1,18,1,
  	18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,
  	18,1,18,1,18,1,18,3,18,215,8,18,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,
  	20,1,20,1,20,1,20,1,21,1,21,1,21,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,
  	22,1,23,1,23,1,23,1,23,1,23,1,23,1,24,1,24,1,24,1,24,1,24,1,24,1,25,1,
  	25,1,25,1,25,1,25,1,25,1,25,3,25,258,8,25,1,26,1,26,1,27,1,27,1,27,5,
  	27,265,8,27,10,27,12,27,268,9,27,1,28,1,28,1,28,5,28,273,8,28,10,28,12,
  	28,276,9,28,1,29,1,29,1,29,5,29,281,8,29,10,29,12,29,284,9,29,1,30,1,
  	30,1,30,5,30,289,8,30,10,30,12,30,292,9,30,1,31,1,31,1,31,5,31,297,8,
  	31,10,31,12,31,300,9,31,1,32,1,32,1,32,5,32,305,8,32,10,32,12,32,308,
  	9,32,1,33,1,33,1,33,5,33,313,8,33,10,33,12,33,316,9,33,1,34,1,34,1,34,
  	5,34,321,8,34,10,34,12,34,324,9,34,1,35,1,35,1,35,5,35,329,8,35,10,35,
  	12,35,332,9,35,1,36,1,36,1,36,5,36,337,8,36,10,36,12,36,340,9,36,1,37,
  	1,37,1,37,1,37,1,37,1,37,3,37,348,8,37,1,38,1,38,1,39,1,39,1,39,1,39,
  	5,39,356,8,39,10,39,12,39,359,9,39,3,39,361,8,39,1,40,1,40,1,40,1,40,
  	1,40,3,40,368,8,40,1,40,0,0,41,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,
  	30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,62,64,66,68,70,72,74,
  	76,78,80,0,2,1,0,22,23,1,0,46,47,361,0,82,1,0,0,0,2,90,1,0,0,0,4,96,1,
  	0,0,0,6,102,1,0,0,0,8,107,1,0,0,0,10,109,1,0,0,0,12,111,1,0,0,0,14,118,
  	1,0,0,0,16,129,1,0,0,0,18,131,1,0,0,0,20,151,1,0,0,0,22,153,1,0,0,0,24,
  	156,1,0,0,0,26,160,1,0,0,0,28,176,1,0,0,0,30,178,1,0,0,0,32,185,1,0,0,
  	0,34,189,1,0,0,0,36,214,1,0,0,0,38,216,1,0,0,0,40,223,1,0,0,0,42,227,
  	1,0,0,0,44,230,1,0,0,0,46,238,1,0,0,0,48,244,1,0,0,0,50,257,1,0,0,0,52,
  	259,1,0,0,0,54,261,1,0,0,0,56,269,1,0,0,0,58,277,1,0,0,0,60,285,1,0,0,
  	0,62,293,1,0,0,0,64,301,1,0,0,0,66,309,1,0,0,0,68,317,1,0,0,0,70,325,
  	1,0,0,0,72,333,1,0,0,0,74,347,1,0,0,0,76,349,1,0,0,0,78,360,1,0,0,0,80,
  	362,1,0,0,0,82,83,5,1,0,0,83,84,5,10,0,0,84,85,3,2,1,0,85,86,5,9,0,0,
  	86,87,5,19,0,0,87,88,3,26,13,0,88,89,5,5,0,0,89,1,1,0,0,0,90,91,3,4,2,
  	0,91,92,3,6,3,0,92,3,1,0,0,0,93,95,3,12,6,0,94,93,1,0,0,0,95,98,1,0,0,
  	0,96,94,1,0,0,0,96,97,1,0,0,0,97,5,1,0,0,0,98,96,1,0,0,0,99,101,3,18,
  	9,0,100,99,1,0,0,0,101,104,1,0,0,0,102,100,1,0,0,0,102,103,1,0,0,0,103,
  	7,1,0,0,0,104,102,1,0,0,0,105,108,3,10,5,0,106,108,5,45,0,0,107,105,1,
  	0,0,0,107,106,1,0,0,0,108,9,1,0,0,0,109,110,7,0,0,0,110,11,1,0,0,0,111,
  	112,5,16,0,0,112,113,3,14,7,0,113,114,5,38,0,0,114,115,3,8,4,0,115,116,
  	3,16,8,0,116,117,5,39,0,0,117,13,1,0,0,0,118,123,5,45,0,0,119,120,5,40,
  	0,0,120,122,5,45,0,0,121,119,1,0,0,0,122,125,1,0,0,0,123,121,1,0,0,0,
  	123,124,1,0,0,0,124,15,1,0,0,0,125,123,1,0,0,0,126,130,1,0,0,0,127,128,
  	5,36,0,0,128,130,3,76,38,0,129,126,1,0,0,0,129,127,1,0,0,0,130,17,1,0,
  	0,0,131,132,5,7,0,0,132,133,5,45,0,0,133,134,5,41,0,0,134,135,3,20,10,
  	0,135,136,5,42,0,0,136,137,3,22,11,0,137,138,5,19,0,0,138,139,3,26,13,
  	0,139,140,5,5,0,0,140,141,5,39,0,0,141,19,1,0,0,0,142,152,1,0,0,0,143,
  	148,3,24,12,0,144,145,5,40,0,0,145,147,3,24,12,0,146,144,1,0,0,0,147,
  	150,1,0,0,0,148,146,1,0,0,0,148,149,1,0,0,0,149,152,1,0,0,0,150,148,1,
  	0,0,0,151,142,1,0,0,0,151,143,1,0,0,0,152,21,1,0,0,0,153,154,5,38,0,0,
  	154,155,3,8,4,0,155,23,1,0,0,0,156,157,5,45,0,0,157,158,5,38,0,0,158,
  	159,3,8,4,0,159,25,1,0,0,0,160,164,3,28,14,0,161,163,3,28,14,0,162,161,
  	1,0,0,0,163,166,1,0,0,0,164,162,1,0,0,0,164,165,1,0,0,0,165,27,1,0,0,
  	0,166,164,1,0,0,0,167,177,3,48,24,0,168,177,3,40,20,0,169,177,3,44,22,
  	0,170,177,3,46,23,0,171,177,3,38,19,0,172,177,3,36,18,0,173,177,3,34,
  	17,0,174,177,3,32,16,0,175,177,3,30,15,0,176,167,1,0,0,0,176,168,1,0,
  	0,0,176,169,1,0,0,0,176,170,1,0,0,0,176,171,1,0,0,0,176,172,1,0,0,0,176,
  	173,1,0,0,0,176,174,1,0,0,0,176,175,1,0,0,0,177,29,1,0,0,0,178,179,5,
  	10,0,0,179,180,3,2,1,0,180,181,5,9,0,0,181,182,3,26,13,0,182,183,5,5,
  	0,0,183,184,5,39,0,0,184,31,1,0,0,0,185,186,5,21,0,0,186,187,3,52,26,
  	0,187,188,5,39,0,0,188,33,1,0,0,0,189,190,5,2,0,0,190,191,5,39,0,0,191,
  	35,1,0,0,0,192,193,5,6,0,0,193,194,5,45,0,0,194,195,5,36,0,0,195,196,
  	3,52,26,0,196,197,5,13,0,0,197,198,3,52,26,0,198,199,5,3,0,0,199,200,
  	3,26,13,0,200,201,5,20,0,0,201,202,5,39,0,0,202,215,1,0,0,0,203,204,5,
  	6,0,0,204,205,5,45,0,0,205,206,5,36,0,0,206,207,3,52,26,0,207,208,5,14,
  	0,0,208,209,3,52,26,0,209,210,5,3,0,0,210,211,3,26,13,0,211,212,5,20,
  	0,0,212,213,5,39,0,0,213,215,1,0,0,0,214,192,1,0,0,0,214,203,1,0,0,0,
  	215,37,1,0,0,0,216,217,5,17,0,0,217,218,3,52,26,0,218,219,5,3,0,0,219,
  	220,3,26,13,0,220,221,5,20,0,0,221,222,5,39,0,0,222,39,1,0,0,0,223,224,
  	3,80,40,0,224,225,5,36,0,0,225,226,3,42,21,0,226,41,1,0,0,0,227,228,3,
  	52,26,0,228,229,5,39,0,0,229,43,1,0,0,0,230,231,5,45,0,0,231,232,5,36,
  	0,0,232,233,5,45,0,0,233,234,5,41,0,0,234,235,3,78,39,0,235,236,5,42,
  	0,0,236,237,5,39,0,0,237,45,1,0,0,0,238,239,5,45,0,0,239,240,5,41,0,0,
  	240,241,3,78,39,0,241,242,5,42,0,0,242,243,5,39,0,0,243,47,1,0,0,0,244,
  	245,5,8,0,0,245,246,3,52,26,0,246,247,5,12,0,0,247,248,3,26,13,0,248,
  	249,3,50,25,0,249,49,1,0,0,0,250,251,5,18,0,0,251,258,5,39,0,0,252,253,
  	5,4,0,0,253,254,3,26,13,0,254,255,5,18,0,0,255,256,5,39,0,0,256,258,1,
  	0,0,0,257,250,1,0,0,0,257,252,1,0,0,0,258,51,1,0,0,0,259,260,3,54,27,
  	0,260,53,1,0,0,0,261,266,3,56,28,0,262,263,5,32,0,0,263,265,3,56,28,0,
  	264,262,1,0,0,0,265,268,1,0,0,0,266,264,1,0,0,0,266,267,1,0,0,0,267,55,
  	1,0,0,0,268,266,1,0,0,0,269,274,3,58,29,0,270,271,5,33,0,0,271,273,3,
  	58,29,0,272,270,1,0,0,0,273,276,1,0,0,0,274,272,1,0,0,0,274,275,1,0,0,
  	0,275,57,1,0,0,0,276,274,1,0,0,0,277,282,3,60,30,0,278,279,5,30,0,0,279,
  	281,3,60,30,0,280,278,1,0,0,0,281,284,1,0,0,0,282,280,1,0,0,0,282,283,
  	1,0,0,0,283,59,1,0,0,0,284,282,1,0,0,0,285,290,3,62,31,0,286,287,5,31,
  	0,0,287,289,3,62,31,0,288,286,1,0,0,0,289,292,1,0,0,0,290,288,1,0,0,0,
  	290,291,1,0,0,0,291,61,1,0,0,0,292,290,1,0,0,0,293,298,3,64,32,0,294,
  	295,5,29,0,0,295,297,3,64,32,0,296,294,1,0,0,0,297,300,1,0,0,0,298,296,
  	1,0,0,0,298,299,1,0,0,0,299,63,1,0,0,0,300,298,1,0,0,0,301,306,3,66,33,
  	0,302,303,5,28,0,0,303,305,3,66,33,0,304,302,1,0,0,0,305,308,1,0,0,0,
  	306,304,1,0,0,0,306,307,1,0,0,0,307,65,1,0,0,0,308,306,1,0,0,0,309,314,
  	3,68,34,0,310,311,5,25,0,0,311,313,3,68,34,0,312,310,1,0,0,0,313,316,
  	1,0,0,0,314,312,1,0,0,0,314,315,1,0,0,0,315,67,1,0,0,0,316,314,1,0,0,
  	0,317,322,3,70,35,0,318,319,5,24,0,0,319,321,3,70,35,0,320,318,1,0,0,
  	0,321,324,1,0,0,0,322,320,1,0,0,0,322,323,1,0,0,0,323,69,1,0,0,0,324,
  	322,1,0,0,0,325,330,3,72,36,0,326,327,5,27,0,0,327,329,3,72,36,0,328,
  	326,1,0,0,0,329,332,1,0,0,0,330,328,1,0,0,0,330,331,1,0,0,0,331,71,1,
  	0,0,0,332,330,1,0,0,0,333,338,3,74,37,0,334,335,5,26,0,0,335,337,3,74,
  	37,0,336,334,1,0,0,0,337,340,1,0,0,0,338,336,1,0,0,0,338,339,1,0,0,0,
  	339,73,1,0,0,0,340,338,1,0,0,0,341,342,5,41,0,0,342,343,3,52,26,0,343,
  	344,5,42,0,0,344,348,1,0,0,0,345,348,3,80,40,0,346,348,3,76,38,0,347,
  	341,1,0,0,0,347,345,1,0,0,0,347,346,1,0,0,0,348,75,1,0,0,0,349,350,7,
  	1,0,0,350,77,1,0,0,0,351,361,1,0,0,0,352,357,3,52,26,0,353,354,5,40,0,
  	0,354,356,3,52,26,0,355,353,1,0,0,0,356,359,1,0,0,0,357,355,1,0,0,0,357,
  	358,1,0,0,0,358,361,1,0,0,0,359,357,1,0,0,0,360,351,1,0,0,0,360,352,1,
  	0,0,0,361,79,1,0,0,0,362,367,5,45,0,0,363,364,5,43,0,0,364,365,3,52,26,
  	0,365,366,5,44,0,0,366,368,1,0,0,0,367,363,1,0,0,0,367,368,1,0,0,0,368,
  	81,1,0,0,0,25,96,102,107,123,129,148,151,164,176,214,257,266,274,282,
  	290,298,306,314,322,330,338,347,357,360,367
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  simpParserStaticData = staticData.release();
}

}

SIMPParser::SIMPParser(TokenStream *input) : SIMPParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

SIMPParser::SIMPParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  SIMPParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *simpParserStaticData->atn, simpParserStaticData->decisionToDFA, simpParserStaticData->sharedContextCache, options);
}

SIMPParser::~SIMPParser() {
  delete _interpreter;
}

const atn::ATN& SIMPParser::getATN() const {
  return *simpParserStaticData->atn;
}

std::string SIMPParser::getGrammarFileName() const {
  return "SIMP.g4";
}

const std::vector<std::string>& SIMPParser::getRuleNames() const {
  return simpParserStaticData->ruleNames;
}

const dfa::Vocabulary& SIMPParser::getVocabulary() const {
  return simpParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView SIMPParser::getSerializedATN() const {
  return simpParserStaticData->serializedATN;
}


//----------------- SimpProgramContext ------------------------------------------------------------------

SIMPParser::SimpProgramContext::SimpProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SIMPParser::SimpProgramContext::KeywordMain() {
  return getToken(SIMPParser::KeywordMain, 0);
}

tree::TerminalNode* SIMPParser::SimpProgramContext::KeywordLet() {
  return getToken(SIMPParser::KeywordLet, 0);
}

SIMPParser::DeclSegmentContext* SIMPParser::SimpProgramContext::declSegment() {
  return getRuleContext<SIMPParser::DeclSegmentContext>(0);
}

tree::TerminalNode* SIMPParser::SimpProgramContext::KeywordIn() {
  return getToken(SIMPParser::KeywordIn, 0);
}

tree::TerminalNode* SIMPParser::SimpProgramContext::KeywordBegin() {
  return getToken(SIMPParser::KeywordBegin, 0);
}

SIMPParser::StmtListContext* SIMPParser::SimpProgramContext::stmtList() {
  return getRuleContext<SIMPParser::StmtListContext>(0);
}

tree::TerminalNode* SIMPParser::SimpProgramContext::KeywordEnd() {
  return getToken(SIMPParser::KeywordEnd, 0);
}


size_t SIMPParser::SimpProgramContext::getRuleIndex() const {
  return SIMPParser::RuleSimpProgram;
}

void SIMPParser::SimpProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimpProgram(this);
}

void SIMPParser::SimpProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimpProgram(this);
}


std::any SIMPParser::SimpProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SIMPVisitor*>(visitor))
    return parserVisitor->visitSimpProgram(this);
  else
    return visitor->visitChildren(this);
}

SIMPParser::SimpProgramContext* SIMPParser::simpProgram() {
  SimpProgramContext *_localctx = _tracker.createInstance<SimpProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, SIMPParser::RuleSimpProgram);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(82);
    match(SIMPParser::KeywordMain);
    setState(83);
    match(SIMPParser::KeywordLet);
    setState(84);
    declSegment();
    setState(85);
    match(SIMPParser::KeywordIn);
    setState(86);
    match(SIMPParser::KeywordBegin);
    setState(87);
    stmtList();
    setState(88);
    match(SIMPParser::KeywordEnd);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclSegmentContext ------------------------------------------------------------------

SIMPParser::DeclSegmentContext::DeclSegmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SIMPParser::VarDeclListContext* SIMPParser::DeclSegmentContext::varDeclList() {
  return getRuleContext<SIMPParser::VarDeclListContext>(0);
}

SIMPParser::FuncDeclListContext* SIMPParser::DeclSegmentContext::funcDeclList() {
  return getRuleContext<SIMPParser::FuncDeclListContext>(0);
}


size_t SIMPParser::DeclSegmentContext::getRuleIndex() const {
  return SIMPParser::RuleDeclSegment;
}

void SIMPParser::DeclSegmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclSegment(this);
}

void SIMPParser::DeclSegmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclSegment(this);
}


std::any SIMPParser::DeclSegmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SIMPVisitor*>(visitor))
    return parserVisitor->visitDeclSegment(this);
  else
    return visitor->visitChildren(this);
}

SIMPParser::DeclSegmentContext* SIMPParser::declSegment() {
  DeclSegmentContext *_localctx = _tracker.createInstance<DeclSegmentContext>(_ctx, getState());
  enterRule(_localctx, 2, SIMPParser::RuleDeclSegment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(90);
    varDeclList();
    setState(91);
    funcDeclList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarDeclListContext ------------------------------------------------------------------

SIMPParser::VarDeclListContext::VarDeclListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SIMPParser::VarDeclContext *> SIMPParser::VarDeclListContext::varDecl() {
  return getRuleContexts<SIMPParser::VarDeclContext>();
}

SIMPParser::VarDeclContext* SIMPParser::VarDeclListContext::varDecl(size_t i) {
  return getRuleContext<SIMPParser::VarDeclContext>(i);
}


size_t SIMPParser::VarDeclListContext::getRuleIndex() const {
  return SIMPParser::RuleVarDeclList;
}

void SIMPParser::VarDeclListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarDeclList(this);
}

void SIMPParser::VarDeclListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarDeclList(this);
}


std::any SIMPParser::VarDeclListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SIMPVisitor*>(visitor))
    return parserVisitor->visitVarDeclList(this);
  else
    return visitor->visitChildren(this);
}

SIMPParser::VarDeclListContext* SIMPParser::varDeclList() {
  VarDeclListContext *_localctx = _tracker.createInstance<VarDeclListContext>(_ctx, getState());
  enterRule(_localctx, 4, SIMPParser::RuleVarDeclList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(96);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SIMPParser::KeywordVar) {
      setState(93);
      varDecl();
      setState(98);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncDeclListContext ------------------------------------------------------------------

SIMPParser::FuncDeclListContext::FuncDeclListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SIMPParser::FuncDeclContext *> SIMPParser::FuncDeclListContext::funcDecl() {
  return getRuleContexts<SIMPParser::FuncDeclContext>();
}

SIMPParser::FuncDeclContext* SIMPParser::FuncDeclListContext::funcDecl(size_t i) {
  return getRuleContext<SIMPParser::FuncDeclContext>(i);
}


size_t SIMPParser::FuncDeclListContext::getRuleIndex() const {
  return SIMPParser::RuleFuncDeclList;
}

void SIMPParser::FuncDeclListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncDeclList(this);
}

void SIMPParser::FuncDeclListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncDeclList(this);
}


std::any SIMPParser::FuncDeclListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SIMPVisitor*>(visitor))
    return parserVisitor->visitFuncDeclList(this);
  else
    return visitor->visitChildren(this);
}

SIMPParser::FuncDeclListContext* SIMPParser::funcDeclList() {
  FuncDeclListContext *_localctx = _tracker.createInstance<FuncDeclListContext>(_ctx, getState());
  enterRule(_localctx, 6, SIMPParser::RuleFuncDeclList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(102);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SIMPParser::KeywordFunction) {
      setState(99);
      funcDecl();
      setState(104);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

SIMPParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SIMPParser::TypeIdContext* SIMPParser::TypeContext::typeId() {
  return getRuleContext<SIMPParser::TypeIdContext>(0);
}

tree::TerminalNode* SIMPParser::TypeContext::ID() {
  return getToken(SIMPParser::ID, 0);
}


size_t SIMPParser::TypeContext::getRuleIndex() const {
  return SIMPParser::RuleType;
}

void SIMPParser::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void SIMPParser::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}


std::any SIMPParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SIMPVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

SIMPParser::TypeContext* SIMPParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 8, SIMPParser::RuleType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(107);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SIMPParser::KeywordInt:
      case SIMPParser::KeywordFloat: {
        enterOuterAlt(_localctx, 1);
        setState(105);
        typeId();
        break;
      }

      case SIMPParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(106);
        match(SIMPParser::ID);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeIdContext ------------------------------------------------------------------

SIMPParser::TypeIdContext::TypeIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SIMPParser::TypeIdContext::KeywordInt() {
  return getToken(SIMPParser::KeywordInt, 0);
}

tree::TerminalNode* SIMPParser::TypeIdContext::KeywordFloat() {
  return getToken(SIMPParser::KeywordFloat, 0);
}


size_t SIMPParser::TypeIdContext::getRuleIndex() const {
  return SIMPParser::RuleTypeId;
}

void SIMPParser::TypeIdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeId(this);
}

void SIMPParser::TypeIdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeId(this);
}


std::any SIMPParser::TypeIdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SIMPVisitor*>(visitor))
    return parserVisitor->visitTypeId(this);
  else
    return visitor->visitChildren(this);
}

SIMPParser::TypeIdContext* SIMPParser::typeId() {
  TypeIdContext *_localctx = _tracker.createInstance<TypeIdContext>(_ctx, getState());
  enterRule(_localctx, 10, SIMPParser::RuleTypeId);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(109);
    _la = _input->LA(1);
    if (!(_la == SIMPParser::KeywordInt

    || _la == SIMPParser::KeywordFloat)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarDeclContext ------------------------------------------------------------------

SIMPParser::VarDeclContext::VarDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SIMPParser::VarDeclContext::KeywordVar() {
  return getToken(SIMPParser::KeywordVar, 0);
}

SIMPParser::IdListContext* SIMPParser::VarDeclContext::idList() {
  return getRuleContext<SIMPParser::IdListContext>(0);
}

tree::TerminalNode* SIMPParser::VarDeclContext::Colon() {
  return getToken(SIMPParser::Colon, 0);
}

SIMPParser::TypeContext* SIMPParser::VarDeclContext::type() {
  return getRuleContext<SIMPParser::TypeContext>(0);
}

SIMPParser::OptionalInitContext* SIMPParser::VarDeclContext::optionalInit() {
  return getRuleContext<SIMPParser::OptionalInitContext>(0);
}

tree::TerminalNode* SIMPParser::VarDeclContext::Semicolon() {
  return getToken(SIMPParser::Semicolon, 0);
}


size_t SIMPParser::VarDeclContext::getRuleIndex() const {
  return SIMPParser::RuleVarDecl;
}

void SIMPParser::VarDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarDecl(this);
}

void SIMPParser::VarDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarDecl(this);
}


std::any SIMPParser::VarDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SIMPVisitor*>(visitor))
    return parserVisitor->visitVarDecl(this);
  else
    return visitor->visitChildren(this);
}

SIMPParser::VarDeclContext* SIMPParser::varDecl() {
  VarDeclContext *_localctx = _tracker.createInstance<VarDeclContext>(_ctx, getState());
  enterRule(_localctx, 12, SIMPParser::RuleVarDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(111);
    match(SIMPParser::KeywordVar);
    setState(112);
    idList();
    setState(113);
    match(SIMPParser::Colon);
    setState(114);
    type();
    setState(115);
    optionalInit();
    setState(116);
    match(SIMPParser::Semicolon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdListContext ------------------------------------------------------------------

SIMPParser::IdListContext::IdListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SIMPParser::IdListContext::ID() {
  return getTokens(SIMPParser::ID);
}

tree::TerminalNode* SIMPParser::IdListContext::ID(size_t i) {
  return getToken(SIMPParser::ID, i);
}

std::vector<tree::TerminalNode *> SIMPParser::IdListContext::Comma() {
  return getTokens(SIMPParser::Comma);
}

tree::TerminalNode* SIMPParser::IdListContext::Comma(size_t i) {
  return getToken(SIMPParser::Comma, i);
}


size_t SIMPParser::IdListContext::getRuleIndex() const {
  return SIMPParser::RuleIdList;
}

void SIMPParser::IdListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdList(this);
}

void SIMPParser::IdListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdList(this);
}


std::any SIMPParser::IdListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SIMPVisitor*>(visitor))
    return parserVisitor->visitIdList(this);
  else
    return visitor->visitChildren(this);
}

SIMPParser::IdListContext* SIMPParser::idList() {
  IdListContext *_localctx = _tracker.createInstance<IdListContext>(_ctx, getState());
  enterRule(_localctx, 14, SIMPParser::RuleIdList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(118);
    match(SIMPParser::ID);
    setState(123);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SIMPParser::Comma) {
      setState(119);
      match(SIMPParser::Comma);
      setState(120);
      match(SIMPParser::ID);
      setState(125);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OptionalInitContext ------------------------------------------------------------------

SIMPParser::OptionalInitContext::OptionalInitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SIMPParser::OptionalInitContext::OpAssign() {
  return getToken(SIMPParser::OpAssign, 0);
}

SIMPParser::ConstantContext* SIMPParser::OptionalInitContext::constant() {
  return getRuleContext<SIMPParser::ConstantContext>(0);
}


size_t SIMPParser::OptionalInitContext::getRuleIndex() const {
  return SIMPParser::RuleOptionalInit;
}

void SIMPParser::OptionalInitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOptionalInit(this);
}

void SIMPParser::OptionalInitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOptionalInit(this);
}


std::any SIMPParser::OptionalInitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SIMPVisitor*>(visitor))
    return parserVisitor->visitOptionalInit(this);
  else
    return visitor->visitChildren(this);
}

SIMPParser::OptionalInitContext* SIMPParser::optionalInit() {
  OptionalInitContext *_localctx = _tracker.createInstance<OptionalInitContext>(_ctx, getState());
  enterRule(_localctx, 16, SIMPParser::RuleOptionalInit);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(129);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SIMPParser::Semicolon: {
        enterOuterAlt(_localctx, 1);

        break;
      }

      case SIMPParser::OpAssign: {
        enterOuterAlt(_localctx, 2);
        setState(127);
        match(SIMPParser::OpAssign);
        setState(128);
        constant();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncDeclContext ------------------------------------------------------------------

SIMPParser::FuncDeclContext::FuncDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SIMPParser::FuncDeclContext::KeywordFunction() {
  return getToken(SIMPParser::KeywordFunction, 0);
}

tree::TerminalNode* SIMPParser::FuncDeclContext::ID() {
  return getToken(SIMPParser::ID, 0);
}

tree::TerminalNode* SIMPParser::FuncDeclContext::LParen() {
  return getToken(SIMPParser::LParen, 0);
}

SIMPParser::ParamListContext* SIMPParser::FuncDeclContext::paramList() {
  return getRuleContext<SIMPParser::ParamListContext>(0);
}

tree::TerminalNode* SIMPParser::FuncDeclContext::RParen() {
  return getToken(SIMPParser::RParen, 0);
}

SIMPParser::RetTypeContext* SIMPParser::FuncDeclContext::retType() {
  return getRuleContext<SIMPParser::RetTypeContext>(0);
}

tree::TerminalNode* SIMPParser::FuncDeclContext::KeywordBegin() {
  return getToken(SIMPParser::KeywordBegin, 0);
}

SIMPParser::StmtListContext* SIMPParser::FuncDeclContext::stmtList() {
  return getRuleContext<SIMPParser::StmtListContext>(0);
}

tree::TerminalNode* SIMPParser::FuncDeclContext::KeywordEnd() {
  return getToken(SIMPParser::KeywordEnd, 0);
}

tree::TerminalNode* SIMPParser::FuncDeclContext::Semicolon() {
  return getToken(SIMPParser::Semicolon, 0);
}


size_t SIMPParser::FuncDeclContext::getRuleIndex() const {
  return SIMPParser::RuleFuncDecl;
}

void SIMPParser::FuncDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncDecl(this);
}

void SIMPParser::FuncDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncDecl(this);
}


std::any SIMPParser::FuncDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SIMPVisitor*>(visitor))
    return parserVisitor->visitFuncDecl(this);
  else
    return visitor->visitChildren(this);
}

SIMPParser::FuncDeclContext* SIMPParser::funcDecl() {
  FuncDeclContext *_localctx = _tracker.createInstance<FuncDeclContext>(_ctx, getState());
  enterRule(_localctx, 18, SIMPParser::RuleFuncDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(131);
    match(SIMPParser::KeywordFunction);
    setState(132);
    match(SIMPParser::ID);
    setState(133);
    match(SIMPParser::LParen);
    setState(134);
    paramList();
    setState(135);
    match(SIMPParser::RParen);
    setState(136);
    retType();
    setState(137);
    match(SIMPParser::KeywordBegin);
    setState(138);
    stmtList();
    setState(139);
    match(SIMPParser::KeywordEnd);
    setState(140);
    match(SIMPParser::Semicolon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamListContext ------------------------------------------------------------------

SIMPParser::ParamListContext::ParamListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SIMPParser::ParamContext *> SIMPParser::ParamListContext::param() {
  return getRuleContexts<SIMPParser::ParamContext>();
}

SIMPParser::ParamContext* SIMPParser::ParamListContext::param(size_t i) {
  return getRuleContext<SIMPParser::ParamContext>(i);
}

std::vector<tree::TerminalNode *> SIMPParser::ParamListContext::Comma() {
  return getTokens(SIMPParser::Comma);
}

tree::TerminalNode* SIMPParser::ParamListContext::Comma(size_t i) {
  return getToken(SIMPParser::Comma, i);
}


size_t SIMPParser::ParamListContext::getRuleIndex() const {
  return SIMPParser::RuleParamList;
}

void SIMPParser::ParamListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParamList(this);
}

void SIMPParser::ParamListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParamList(this);
}


std::any SIMPParser::ParamListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SIMPVisitor*>(visitor))
    return parserVisitor->visitParamList(this);
  else
    return visitor->visitChildren(this);
}

SIMPParser::ParamListContext* SIMPParser::paramList() {
  ParamListContext *_localctx = _tracker.createInstance<ParamListContext>(_ctx, getState());
  enterRule(_localctx, 20, SIMPParser::RuleParamList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(151);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SIMPParser::RParen: {
        enterOuterAlt(_localctx, 1);

        break;
      }

      case SIMPParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(143);
        param();
        setState(148);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == SIMPParser::Comma) {
          setState(144);
          match(SIMPParser::Comma);
          setState(145);
          param();
          setState(150);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RetTypeContext ------------------------------------------------------------------

SIMPParser::RetTypeContext::RetTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SIMPParser::RetTypeContext::Colon() {
  return getToken(SIMPParser::Colon, 0);
}

SIMPParser::TypeContext* SIMPParser::RetTypeContext::type() {
  return getRuleContext<SIMPParser::TypeContext>(0);
}


size_t SIMPParser::RetTypeContext::getRuleIndex() const {
  return SIMPParser::RuleRetType;
}

void SIMPParser::RetTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRetType(this);
}

void SIMPParser::RetTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRetType(this);
}


std::any SIMPParser::RetTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SIMPVisitor*>(visitor))
    return parserVisitor->visitRetType(this);
  else
    return visitor->visitChildren(this);
}

SIMPParser::RetTypeContext* SIMPParser::retType() {
  RetTypeContext *_localctx = _tracker.createInstance<RetTypeContext>(_ctx, getState());
  enterRule(_localctx, 22, SIMPParser::RuleRetType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(153);
    match(SIMPParser::Colon);
    setState(154);
    type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamContext ------------------------------------------------------------------

SIMPParser::ParamContext::ParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SIMPParser::ParamContext::ID() {
  return getToken(SIMPParser::ID, 0);
}

tree::TerminalNode* SIMPParser::ParamContext::Colon() {
  return getToken(SIMPParser::Colon, 0);
}

SIMPParser::TypeContext* SIMPParser::ParamContext::type() {
  return getRuleContext<SIMPParser::TypeContext>(0);
}


size_t SIMPParser::ParamContext::getRuleIndex() const {
  return SIMPParser::RuleParam;
}

void SIMPParser::ParamContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParam(this);
}

void SIMPParser::ParamContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParam(this);
}


std::any SIMPParser::ParamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SIMPVisitor*>(visitor))
    return parserVisitor->visitParam(this);
  else
    return visitor->visitChildren(this);
}

SIMPParser::ParamContext* SIMPParser::param() {
  ParamContext *_localctx = _tracker.createInstance<ParamContext>(_ctx, getState());
  enterRule(_localctx, 24, SIMPParser::RuleParam);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(156);
    match(SIMPParser::ID);
    setState(157);
    match(SIMPParser::Colon);
    setState(158);
    type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtListContext ------------------------------------------------------------------

SIMPParser::StmtListContext::StmtListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SIMPParser::StmtContext *> SIMPParser::StmtListContext::stmt() {
  return getRuleContexts<SIMPParser::StmtContext>();
}

SIMPParser::StmtContext* SIMPParser::StmtListContext::stmt(size_t i) {
  return getRuleContext<SIMPParser::StmtContext>(i);
}


size_t SIMPParser::StmtListContext::getRuleIndex() const {
  return SIMPParser::RuleStmtList;
}

void SIMPParser::StmtListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStmtList(this);
}

void SIMPParser::StmtListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStmtList(this);
}


std::any SIMPParser::StmtListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SIMPVisitor*>(visitor))
    return parserVisitor->visitStmtList(this);
  else
    return visitor->visitChildren(this);
}

SIMPParser::StmtListContext* SIMPParser::stmtList() {
  StmtListContext *_localctx = _tracker.createInstance<StmtListContext>(_ctx, getState());
  enterRule(_localctx, 26, SIMPParser::RuleStmtList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(160);
    stmt();
    setState(164);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 35184374318404) != 0)) {
      setState(161);
      stmt();
      setState(166);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtContext ------------------------------------------------------------------

SIMPParser::StmtContext::StmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SIMPParser::IfStmtContext* SIMPParser::StmtContext::ifStmt() {
  return getRuleContext<SIMPParser::IfStmtContext>(0);
}

SIMPParser::AssignStmtContext* SIMPParser::StmtContext::assignStmt() {
  return getRuleContext<SIMPParser::AssignStmtContext>(0);
}

SIMPParser::RcallStmtContext* SIMPParser::StmtContext::rcallStmt() {
  return getRuleContext<SIMPParser::RcallStmtContext>(0);
}

SIMPParser::CallStmtContext* SIMPParser::StmtContext::callStmt() {
  return getRuleContext<SIMPParser::CallStmtContext>(0);
}

SIMPParser::WhileStmtContext* SIMPParser::StmtContext::whileStmt() {
  return getRuleContext<SIMPParser::WhileStmtContext>(0);
}

SIMPParser::ForStmtContext* SIMPParser::StmtContext::forStmt() {
  return getRuleContext<SIMPParser::ForStmtContext>(0);
}

SIMPParser::BreakStmtContext* SIMPParser::StmtContext::breakStmt() {
  return getRuleContext<SIMPParser::BreakStmtContext>(0);
}

SIMPParser::ReturnStmtContext* SIMPParser::StmtContext::returnStmt() {
  return getRuleContext<SIMPParser::ReturnStmtContext>(0);
}

SIMPParser::LetStmtContext* SIMPParser::StmtContext::letStmt() {
  return getRuleContext<SIMPParser::LetStmtContext>(0);
}


size_t SIMPParser::StmtContext::getRuleIndex() const {
  return SIMPParser::RuleStmt;
}

void SIMPParser::StmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStmt(this);
}

void SIMPParser::StmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStmt(this);
}


std::any SIMPParser::StmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SIMPVisitor*>(visitor))
    return parserVisitor->visitStmt(this);
  else
    return visitor->visitChildren(this);
}

SIMPParser::StmtContext* SIMPParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 28, SIMPParser::RuleStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(176);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(167);
      ifStmt();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(168);
      assignStmt();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(169);
      rcallStmt();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(170);
      callStmt();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(171);
      whileStmt();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(172);
      forStmt();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(173);
      breakStmt();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(174);
      returnStmt();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(175);
      letStmt();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LetStmtContext ------------------------------------------------------------------

SIMPParser::LetStmtContext::LetStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SIMPParser::LetStmtContext::KeywordLet() {
  return getToken(SIMPParser::KeywordLet, 0);
}

SIMPParser::DeclSegmentContext* SIMPParser::LetStmtContext::declSegment() {
  return getRuleContext<SIMPParser::DeclSegmentContext>(0);
}

tree::TerminalNode* SIMPParser::LetStmtContext::KeywordIn() {
  return getToken(SIMPParser::KeywordIn, 0);
}

SIMPParser::StmtListContext* SIMPParser::LetStmtContext::stmtList() {
  return getRuleContext<SIMPParser::StmtListContext>(0);
}

tree::TerminalNode* SIMPParser::LetStmtContext::KeywordEnd() {
  return getToken(SIMPParser::KeywordEnd, 0);
}

tree::TerminalNode* SIMPParser::LetStmtContext::Semicolon() {
  return getToken(SIMPParser::Semicolon, 0);
}


size_t SIMPParser::LetStmtContext::getRuleIndex() const {
  return SIMPParser::RuleLetStmt;
}

void SIMPParser::LetStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLetStmt(this);
}

void SIMPParser::LetStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLetStmt(this);
}


std::any SIMPParser::LetStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SIMPVisitor*>(visitor))
    return parserVisitor->visitLetStmt(this);
  else
    return visitor->visitChildren(this);
}

SIMPParser::LetStmtContext* SIMPParser::letStmt() {
  LetStmtContext *_localctx = _tracker.createInstance<LetStmtContext>(_ctx, getState());
  enterRule(_localctx, 30, SIMPParser::RuleLetStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(178);
    match(SIMPParser::KeywordLet);
    setState(179);
    declSegment();
    setState(180);
    match(SIMPParser::KeywordIn);
    setState(181);
    stmtList();
    setState(182);
    match(SIMPParser::KeywordEnd);
    setState(183);
    match(SIMPParser::Semicolon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnStmtContext ------------------------------------------------------------------

SIMPParser::ReturnStmtContext::ReturnStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SIMPParser::ReturnStmtContext::KeywordReturn() {
  return getToken(SIMPParser::KeywordReturn, 0);
}

SIMPParser::ExprContext* SIMPParser::ReturnStmtContext::expr() {
  return getRuleContext<SIMPParser::ExprContext>(0);
}

tree::TerminalNode* SIMPParser::ReturnStmtContext::Semicolon() {
  return getToken(SIMPParser::Semicolon, 0);
}


size_t SIMPParser::ReturnStmtContext::getRuleIndex() const {
  return SIMPParser::RuleReturnStmt;
}

void SIMPParser::ReturnStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnStmt(this);
}

void SIMPParser::ReturnStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnStmt(this);
}


std::any SIMPParser::ReturnStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SIMPVisitor*>(visitor))
    return parserVisitor->visitReturnStmt(this);
  else
    return visitor->visitChildren(this);
}

SIMPParser::ReturnStmtContext* SIMPParser::returnStmt() {
  ReturnStmtContext *_localctx = _tracker.createInstance<ReturnStmtContext>(_ctx, getState());
  enterRule(_localctx, 32, SIMPParser::RuleReturnStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(185);
    match(SIMPParser::KeywordReturn);
    setState(186);
    expr();
    setState(187);
    match(SIMPParser::Semicolon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BreakStmtContext ------------------------------------------------------------------

SIMPParser::BreakStmtContext::BreakStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SIMPParser::BreakStmtContext::KeywordBreak() {
  return getToken(SIMPParser::KeywordBreak, 0);
}

tree::TerminalNode* SIMPParser::BreakStmtContext::Semicolon() {
  return getToken(SIMPParser::Semicolon, 0);
}


size_t SIMPParser::BreakStmtContext::getRuleIndex() const {
  return SIMPParser::RuleBreakStmt;
}

void SIMPParser::BreakStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBreakStmt(this);
}

void SIMPParser::BreakStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBreakStmt(this);
}


std::any SIMPParser::BreakStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SIMPVisitor*>(visitor))
    return parserVisitor->visitBreakStmt(this);
  else
    return visitor->visitChildren(this);
}

SIMPParser::BreakStmtContext* SIMPParser::breakStmt() {
  BreakStmtContext *_localctx = _tracker.createInstance<BreakStmtContext>(_ctx, getState());
  enterRule(_localctx, 34, SIMPParser::RuleBreakStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(189);
    match(SIMPParser::KeywordBreak);
    setState(190);
    match(SIMPParser::Semicolon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForStmtContext ------------------------------------------------------------------

SIMPParser::ForStmtContext::ForStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SIMPParser::ForStmtContext::KeywordFor() {
  return getToken(SIMPParser::KeywordFor, 0);
}

tree::TerminalNode* SIMPParser::ForStmtContext::ID() {
  return getToken(SIMPParser::ID, 0);
}

tree::TerminalNode* SIMPParser::ForStmtContext::OpAssign() {
  return getToken(SIMPParser::OpAssign, 0);
}

std::vector<SIMPParser::ExprContext *> SIMPParser::ForStmtContext::expr() {
  return getRuleContexts<SIMPParser::ExprContext>();
}

SIMPParser::ExprContext* SIMPParser::ForStmtContext::expr(size_t i) {
  return getRuleContext<SIMPParser::ExprContext>(i);
}

tree::TerminalNode* SIMPParser::ForStmtContext::KeywordTo() {
  return getToken(SIMPParser::KeywordTo, 0);
}

tree::TerminalNode* SIMPParser::ForStmtContext::KeywordDo() {
  return getToken(SIMPParser::KeywordDo, 0);
}

SIMPParser::StmtListContext* SIMPParser::ForStmtContext::stmtList() {
  return getRuleContext<SIMPParser::StmtListContext>(0);
}

tree::TerminalNode* SIMPParser::ForStmtContext::KeywordEnddo() {
  return getToken(SIMPParser::KeywordEnddo, 0);
}

tree::TerminalNode* SIMPParser::ForStmtContext::Semicolon() {
  return getToken(SIMPParser::Semicolon, 0);
}

tree::TerminalNode* SIMPParser::ForStmtContext::KeywordDownto() {
  return getToken(SIMPParser::KeywordDownto, 0);
}


size_t SIMPParser::ForStmtContext::getRuleIndex() const {
  return SIMPParser::RuleForStmt;
}

void SIMPParser::ForStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForStmt(this);
}

void SIMPParser::ForStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForStmt(this);
}


std::any SIMPParser::ForStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SIMPVisitor*>(visitor))
    return parserVisitor->visitForStmt(this);
  else
    return visitor->visitChildren(this);
}

SIMPParser::ForStmtContext* SIMPParser::forStmt() {
  ForStmtContext *_localctx = _tracker.createInstance<ForStmtContext>(_ctx, getState());
  enterRule(_localctx, 36, SIMPParser::RuleForStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(214);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(192);
      match(SIMPParser::KeywordFor);
      setState(193);
      match(SIMPParser::ID);
      setState(194);
      match(SIMPParser::OpAssign);
      setState(195);
      expr();
      setState(196);
      match(SIMPParser::KeywordTo);
      setState(197);
      expr();
      setState(198);
      match(SIMPParser::KeywordDo);
      setState(199);
      stmtList();
      setState(200);
      match(SIMPParser::KeywordEnddo);
      setState(201);
      match(SIMPParser::Semicolon);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(203);
      match(SIMPParser::KeywordFor);
      setState(204);
      match(SIMPParser::ID);
      setState(205);
      match(SIMPParser::OpAssign);
      setState(206);
      expr();
      setState(207);
      match(SIMPParser::KeywordDownto);
      setState(208);
      expr();
      setState(209);
      match(SIMPParser::KeywordDo);
      setState(210);
      stmtList();
      setState(211);
      match(SIMPParser::KeywordEnddo);
      setState(212);
      match(SIMPParser::Semicolon);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileStmtContext ------------------------------------------------------------------

SIMPParser::WhileStmtContext::WhileStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SIMPParser::WhileStmtContext::KeywordWhile() {
  return getToken(SIMPParser::KeywordWhile, 0);
}

SIMPParser::ExprContext* SIMPParser::WhileStmtContext::expr() {
  return getRuleContext<SIMPParser::ExprContext>(0);
}

tree::TerminalNode* SIMPParser::WhileStmtContext::KeywordDo() {
  return getToken(SIMPParser::KeywordDo, 0);
}

SIMPParser::StmtListContext* SIMPParser::WhileStmtContext::stmtList() {
  return getRuleContext<SIMPParser::StmtListContext>(0);
}

tree::TerminalNode* SIMPParser::WhileStmtContext::KeywordEnddo() {
  return getToken(SIMPParser::KeywordEnddo, 0);
}

tree::TerminalNode* SIMPParser::WhileStmtContext::Semicolon() {
  return getToken(SIMPParser::Semicolon, 0);
}


size_t SIMPParser::WhileStmtContext::getRuleIndex() const {
  return SIMPParser::RuleWhileStmt;
}

void SIMPParser::WhileStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileStmt(this);
}

void SIMPParser::WhileStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileStmt(this);
}


std::any SIMPParser::WhileStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SIMPVisitor*>(visitor))
    return parserVisitor->visitWhileStmt(this);
  else
    return visitor->visitChildren(this);
}

SIMPParser::WhileStmtContext* SIMPParser::whileStmt() {
  WhileStmtContext *_localctx = _tracker.createInstance<WhileStmtContext>(_ctx, getState());
  enterRule(_localctx, 38, SIMPParser::RuleWhileStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(216);
    match(SIMPParser::KeywordWhile);
    setState(217);
    expr();
    setState(218);
    match(SIMPParser::KeywordDo);
    setState(219);
    stmtList();
    setState(220);
    match(SIMPParser::KeywordEnddo);
    setState(221);
    match(SIMPParser::Semicolon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignStmtContext ------------------------------------------------------------------

SIMPParser::AssignStmtContext::AssignStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SIMPParser::LvalueContext* SIMPParser::AssignStmtContext::lvalue() {
  return getRuleContext<SIMPParser::LvalueContext>(0);
}

tree::TerminalNode* SIMPParser::AssignStmtContext::OpAssign() {
  return getToken(SIMPParser::OpAssign, 0);
}

SIMPParser::RValueContext* SIMPParser::AssignStmtContext::rValue() {
  return getRuleContext<SIMPParser::RValueContext>(0);
}


size_t SIMPParser::AssignStmtContext::getRuleIndex() const {
  return SIMPParser::RuleAssignStmt;
}

void SIMPParser::AssignStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignStmt(this);
}

void SIMPParser::AssignStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignStmt(this);
}


std::any SIMPParser::AssignStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SIMPVisitor*>(visitor))
    return parserVisitor->visitAssignStmt(this);
  else
    return visitor->visitChildren(this);
}

SIMPParser::AssignStmtContext* SIMPParser::assignStmt() {
  AssignStmtContext *_localctx = _tracker.createInstance<AssignStmtContext>(_ctx, getState());
  enterRule(_localctx, 40, SIMPParser::RuleAssignStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(223);
    lvalue();
    setState(224);
    match(SIMPParser::OpAssign);
    setState(225);
    rValue();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RValueContext ------------------------------------------------------------------

SIMPParser::RValueContext::RValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SIMPParser::ExprContext* SIMPParser::RValueContext::expr() {
  return getRuleContext<SIMPParser::ExprContext>(0);
}

tree::TerminalNode* SIMPParser::RValueContext::Semicolon() {
  return getToken(SIMPParser::Semicolon, 0);
}


size_t SIMPParser::RValueContext::getRuleIndex() const {
  return SIMPParser::RuleRValue;
}

void SIMPParser::RValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRValue(this);
}

void SIMPParser::RValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRValue(this);
}


std::any SIMPParser::RValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SIMPVisitor*>(visitor))
    return parserVisitor->visitRValue(this);
  else
    return visitor->visitChildren(this);
}

SIMPParser::RValueContext* SIMPParser::rValue() {
  RValueContext *_localctx = _tracker.createInstance<RValueContext>(_ctx, getState());
  enterRule(_localctx, 42, SIMPParser::RuleRValue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(227);
    expr();
    setState(228);
    match(SIMPParser::Semicolon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RcallStmtContext ------------------------------------------------------------------

SIMPParser::RcallStmtContext::RcallStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SIMPParser::RcallStmtContext::ID() {
  return getTokens(SIMPParser::ID);
}

tree::TerminalNode* SIMPParser::RcallStmtContext::ID(size_t i) {
  return getToken(SIMPParser::ID, i);
}

tree::TerminalNode* SIMPParser::RcallStmtContext::OpAssign() {
  return getToken(SIMPParser::OpAssign, 0);
}

tree::TerminalNode* SIMPParser::RcallStmtContext::LParen() {
  return getToken(SIMPParser::LParen, 0);
}

SIMPParser::ExprListContext* SIMPParser::RcallStmtContext::exprList() {
  return getRuleContext<SIMPParser::ExprListContext>(0);
}

tree::TerminalNode* SIMPParser::RcallStmtContext::RParen() {
  return getToken(SIMPParser::RParen, 0);
}

tree::TerminalNode* SIMPParser::RcallStmtContext::Semicolon() {
  return getToken(SIMPParser::Semicolon, 0);
}


size_t SIMPParser::RcallStmtContext::getRuleIndex() const {
  return SIMPParser::RuleRcallStmt;
}

void SIMPParser::RcallStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRcallStmt(this);
}

void SIMPParser::RcallStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRcallStmt(this);
}


std::any SIMPParser::RcallStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SIMPVisitor*>(visitor))
    return parserVisitor->visitRcallStmt(this);
  else
    return visitor->visitChildren(this);
}

SIMPParser::RcallStmtContext* SIMPParser::rcallStmt() {
  RcallStmtContext *_localctx = _tracker.createInstance<RcallStmtContext>(_ctx, getState());
  enterRule(_localctx, 44, SIMPParser::RuleRcallStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(230);
    match(SIMPParser::ID);
    setState(231);
    match(SIMPParser::OpAssign);
    setState(232);
    match(SIMPParser::ID);
    setState(233);
    match(SIMPParser::LParen);
    setState(234);
    exprList();
    setState(235);
    match(SIMPParser::RParen);
    setState(236);
    match(SIMPParser::Semicolon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CallStmtContext ------------------------------------------------------------------

SIMPParser::CallStmtContext::CallStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SIMPParser::CallStmtContext::ID() {
  return getToken(SIMPParser::ID, 0);
}

tree::TerminalNode* SIMPParser::CallStmtContext::LParen() {
  return getToken(SIMPParser::LParen, 0);
}

SIMPParser::ExprListContext* SIMPParser::CallStmtContext::exprList() {
  return getRuleContext<SIMPParser::ExprListContext>(0);
}

tree::TerminalNode* SIMPParser::CallStmtContext::RParen() {
  return getToken(SIMPParser::RParen, 0);
}

tree::TerminalNode* SIMPParser::CallStmtContext::Semicolon() {
  return getToken(SIMPParser::Semicolon, 0);
}


size_t SIMPParser::CallStmtContext::getRuleIndex() const {
  return SIMPParser::RuleCallStmt;
}

void SIMPParser::CallStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCallStmt(this);
}

void SIMPParser::CallStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCallStmt(this);
}


std::any SIMPParser::CallStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SIMPVisitor*>(visitor))
    return parserVisitor->visitCallStmt(this);
  else
    return visitor->visitChildren(this);
}

SIMPParser::CallStmtContext* SIMPParser::callStmt() {
  CallStmtContext *_localctx = _tracker.createInstance<CallStmtContext>(_ctx, getState());
  enterRule(_localctx, 46, SIMPParser::RuleCallStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(238);
    match(SIMPParser::ID);
    setState(239);
    match(SIMPParser::LParen);
    setState(240);
    exprList();
    setState(241);
    match(SIMPParser::RParen);
    setState(242);
    match(SIMPParser::Semicolon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStmtContext ------------------------------------------------------------------

SIMPParser::IfStmtContext::IfStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SIMPParser::IfStmtContext::KeywordIf() {
  return getToken(SIMPParser::KeywordIf, 0);
}

SIMPParser::ExprContext* SIMPParser::IfStmtContext::expr() {
  return getRuleContext<SIMPParser::ExprContext>(0);
}

tree::TerminalNode* SIMPParser::IfStmtContext::KeywordThen() {
  return getToken(SIMPParser::KeywordThen, 0);
}

SIMPParser::StmtListContext* SIMPParser::IfStmtContext::stmtList() {
  return getRuleContext<SIMPParser::StmtListContext>(0);
}

SIMPParser::IfStmtTailContext* SIMPParser::IfStmtContext::ifStmtTail() {
  return getRuleContext<SIMPParser::IfStmtTailContext>(0);
}


size_t SIMPParser::IfStmtContext::getRuleIndex() const {
  return SIMPParser::RuleIfStmt;
}

void SIMPParser::IfStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStmt(this);
}

void SIMPParser::IfStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStmt(this);
}


std::any SIMPParser::IfStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SIMPVisitor*>(visitor))
    return parserVisitor->visitIfStmt(this);
  else
    return visitor->visitChildren(this);
}

SIMPParser::IfStmtContext* SIMPParser::ifStmt() {
  IfStmtContext *_localctx = _tracker.createInstance<IfStmtContext>(_ctx, getState());
  enterRule(_localctx, 48, SIMPParser::RuleIfStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(244);
    match(SIMPParser::KeywordIf);
    setState(245);
    expr();
    setState(246);
    match(SIMPParser::KeywordThen);
    setState(247);
    stmtList();
    setState(248);
    ifStmtTail();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStmtTailContext ------------------------------------------------------------------

SIMPParser::IfStmtTailContext::IfStmtTailContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SIMPParser::IfStmtTailContext::KeywordEndif() {
  return getToken(SIMPParser::KeywordEndif, 0);
}

tree::TerminalNode* SIMPParser::IfStmtTailContext::Semicolon() {
  return getToken(SIMPParser::Semicolon, 0);
}

tree::TerminalNode* SIMPParser::IfStmtTailContext::KeywordElse() {
  return getToken(SIMPParser::KeywordElse, 0);
}

SIMPParser::StmtListContext* SIMPParser::IfStmtTailContext::stmtList() {
  return getRuleContext<SIMPParser::StmtListContext>(0);
}


size_t SIMPParser::IfStmtTailContext::getRuleIndex() const {
  return SIMPParser::RuleIfStmtTail;
}

void SIMPParser::IfStmtTailContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStmtTail(this);
}

void SIMPParser::IfStmtTailContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStmtTail(this);
}


std::any SIMPParser::IfStmtTailContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SIMPVisitor*>(visitor))
    return parserVisitor->visitIfStmtTail(this);
  else
    return visitor->visitChildren(this);
}

SIMPParser::IfStmtTailContext* SIMPParser::ifStmtTail() {
  IfStmtTailContext *_localctx = _tracker.createInstance<IfStmtTailContext>(_ctx, getState());
  enterRule(_localctx, 50, SIMPParser::RuleIfStmtTail);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(257);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SIMPParser::KeywordEndif: {
        enterOuterAlt(_localctx, 1);
        setState(250);
        match(SIMPParser::KeywordEndif);
        setState(251);
        match(SIMPParser::Semicolon);
        break;
      }

      case SIMPParser::KeywordElse: {
        enterOuterAlt(_localctx, 2);
        setState(252);
        match(SIMPParser::KeywordElse);
        setState(253);
        stmtList();
        setState(254);
        match(SIMPParser::KeywordEndif);
        setState(255);
        match(SIMPParser::Semicolon);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

SIMPParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SIMPParser::LeTermContext* SIMPParser::ExprContext::leTerm() {
  return getRuleContext<SIMPParser::LeTermContext>(0);
}


size_t SIMPParser::ExprContext::getRuleIndex() const {
  return SIMPParser::RuleExpr;
}

void SIMPParser::ExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr(this);
}

void SIMPParser::ExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr(this);
}


std::any SIMPParser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SIMPVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}

SIMPParser::ExprContext* SIMPParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 52, SIMPParser::RuleExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(259);
    leTerm();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LeTermContext ------------------------------------------------------------------

SIMPParser::LeTermContext::LeTermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SIMPParser::GeTermContext *> SIMPParser::LeTermContext::geTerm() {
  return getRuleContexts<SIMPParser::GeTermContext>();
}

SIMPParser::GeTermContext* SIMPParser::LeTermContext::geTerm(size_t i) {
  return getRuleContext<SIMPParser::GeTermContext>(i);
}

std::vector<tree::TerminalNode *> SIMPParser::LeTermContext::BinOpLeq() {
  return getTokens(SIMPParser::BinOpLeq);
}

tree::TerminalNode* SIMPParser::LeTermContext::BinOpLeq(size_t i) {
  return getToken(SIMPParser::BinOpLeq, i);
}


size_t SIMPParser::LeTermContext::getRuleIndex() const {
  return SIMPParser::RuleLeTerm;
}

void SIMPParser::LeTermContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLeTerm(this);
}

void SIMPParser::LeTermContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLeTerm(this);
}


std::any SIMPParser::LeTermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SIMPVisitor*>(visitor))
    return parserVisitor->visitLeTerm(this);
  else
    return visitor->visitChildren(this);
}

SIMPParser::LeTermContext* SIMPParser::leTerm() {
  LeTermContext *_localctx = _tracker.createInstance<LeTermContext>(_ctx, getState());
  enterRule(_localctx, 54, SIMPParser::RuleLeTerm);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(261);
    geTerm();
    setState(266);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SIMPParser::BinOpLeq) {
      setState(262);
      match(SIMPParser::BinOpLeq);
      setState(263);
      geTerm();
      setState(268);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GeTermContext ------------------------------------------------------------------

SIMPParser::GeTermContext::GeTermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SIMPParser::LtTermContext *> SIMPParser::GeTermContext::ltTerm() {
  return getRuleContexts<SIMPParser::LtTermContext>();
}

SIMPParser::LtTermContext* SIMPParser::GeTermContext::ltTerm(size_t i) {
  return getRuleContext<SIMPParser::LtTermContext>(i);
}

std::vector<tree::TerminalNode *> SIMPParser::GeTermContext::BinOpGeq() {
  return getTokens(SIMPParser::BinOpGeq);
}

tree::TerminalNode* SIMPParser::GeTermContext::BinOpGeq(size_t i) {
  return getToken(SIMPParser::BinOpGeq, i);
}


size_t SIMPParser::GeTermContext::getRuleIndex() const {
  return SIMPParser::RuleGeTerm;
}

void SIMPParser::GeTermContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGeTerm(this);
}

void SIMPParser::GeTermContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGeTerm(this);
}


std::any SIMPParser::GeTermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SIMPVisitor*>(visitor))
    return parserVisitor->visitGeTerm(this);
  else
    return visitor->visitChildren(this);
}

SIMPParser::GeTermContext* SIMPParser::geTerm() {
  GeTermContext *_localctx = _tracker.createInstance<GeTermContext>(_ctx, getState());
  enterRule(_localctx, 56, SIMPParser::RuleGeTerm);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(269);
    ltTerm();
    setState(274);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SIMPParser::BinOpGeq) {
      setState(270);
      match(SIMPParser::BinOpGeq);
      setState(271);
      ltTerm();
      setState(276);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LtTermContext ------------------------------------------------------------------

SIMPParser::LtTermContext::LtTermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SIMPParser::GtTermContext *> SIMPParser::LtTermContext::gtTerm() {
  return getRuleContexts<SIMPParser::GtTermContext>();
}

SIMPParser::GtTermContext* SIMPParser::LtTermContext::gtTerm(size_t i) {
  return getRuleContext<SIMPParser::GtTermContext>(i);
}

std::vector<tree::TerminalNode *> SIMPParser::LtTermContext::BinOpLt() {
  return getTokens(SIMPParser::BinOpLt);
}

tree::TerminalNode* SIMPParser::LtTermContext::BinOpLt(size_t i) {
  return getToken(SIMPParser::BinOpLt, i);
}


size_t SIMPParser::LtTermContext::getRuleIndex() const {
  return SIMPParser::RuleLtTerm;
}

void SIMPParser::LtTermContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLtTerm(this);
}

void SIMPParser::LtTermContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLtTerm(this);
}


std::any SIMPParser::LtTermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SIMPVisitor*>(visitor))
    return parserVisitor->visitLtTerm(this);
  else
    return visitor->visitChildren(this);
}

SIMPParser::LtTermContext* SIMPParser::ltTerm() {
  LtTermContext *_localctx = _tracker.createInstance<LtTermContext>(_ctx, getState());
  enterRule(_localctx, 58, SIMPParser::RuleLtTerm);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(277);
    gtTerm();
    setState(282);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SIMPParser::BinOpLt) {
      setState(278);
      match(SIMPParser::BinOpLt);
      setState(279);
      gtTerm();
      setState(284);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GtTermContext ------------------------------------------------------------------

SIMPParser::GtTermContext::GtTermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SIMPParser::NeTermContext *> SIMPParser::GtTermContext::neTerm() {
  return getRuleContexts<SIMPParser::NeTermContext>();
}

SIMPParser::NeTermContext* SIMPParser::GtTermContext::neTerm(size_t i) {
  return getRuleContext<SIMPParser::NeTermContext>(i);
}

std::vector<tree::TerminalNode *> SIMPParser::GtTermContext::BinOpGt() {
  return getTokens(SIMPParser::BinOpGt);
}

tree::TerminalNode* SIMPParser::GtTermContext::BinOpGt(size_t i) {
  return getToken(SIMPParser::BinOpGt, i);
}


size_t SIMPParser::GtTermContext::getRuleIndex() const {
  return SIMPParser::RuleGtTerm;
}

void SIMPParser::GtTermContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGtTerm(this);
}

void SIMPParser::GtTermContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGtTerm(this);
}


std::any SIMPParser::GtTermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SIMPVisitor*>(visitor))
    return parserVisitor->visitGtTerm(this);
  else
    return visitor->visitChildren(this);
}

SIMPParser::GtTermContext* SIMPParser::gtTerm() {
  GtTermContext *_localctx = _tracker.createInstance<GtTermContext>(_ctx, getState());
  enterRule(_localctx, 60, SIMPParser::RuleGtTerm);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(285);
    neTerm();
    setState(290);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SIMPParser::BinOpGt) {
      setState(286);
      match(SIMPParser::BinOpGt);
      setState(287);
      neTerm();
      setState(292);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NeTermContext ------------------------------------------------------------------

SIMPParser::NeTermContext::NeTermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SIMPParser::EqTermContext *> SIMPParser::NeTermContext::eqTerm() {
  return getRuleContexts<SIMPParser::EqTermContext>();
}

SIMPParser::EqTermContext* SIMPParser::NeTermContext::eqTerm(size_t i) {
  return getRuleContext<SIMPParser::EqTermContext>(i);
}

std::vector<tree::TerminalNode *> SIMPParser::NeTermContext::BinOpNeq() {
  return getTokens(SIMPParser::BinOpNeq);
}

tree::TerminalNode* SIMPParser::NeTermContext::BinOpNeq(size_t i) {
  return getToken(SIMPParser::BinOpNeq, i);
}


size_t SIMPParser::NeTermContext::getRuleIndex() const {
  return SIMPParser::RuleNeTerm;
}

void SIMPParser::NeTermContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNeTerm(this);
}

void SIMPParser::NeTermContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNeTerm(this);
}


std::any SIMPParser::NeTermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SIMPVisitor*>(visitor))
    return parserVisitor->visitNeTerm(this);
  else
    return visitor->visitChildren(this);
}

SIMPParser::NeTermContext* SIMPParser::neTerm() {
  NeTermContext *_localctx = _tracker.createInstance<NeTermContext>(_ctx, getState());
  enterRule(_localctx, 62, SIMPParser::RuleNeTerm);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(293);
    eqTerm();
    setState(298);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SIMPParser::BinOpNeq) {
      setState(294);
      match(SIMPParser::BinOpNeq);
      setState(295);
      eqTerm();
      setState(300);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EqTermContext ------------------------------------------------------------------

SIMPParser::EqTermContext::EqTermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SIMPParser::SubTermContext *> SIMPParser::EqTermContext::subTerm() {
  return getRuleContexts<SIMPParser::SubTermContext>();
}

SIMPParser::SubTermContext* SIMPParser::EqTermContext::subTerm(size_t i) {
  return getRuleContext<SIMPParser::SubTermContext>(i);
}

std::vector<tree::TerminalNode *> SIMPParser::EqTermContext::BinOpEq() {
  return getTokens(SIMPParser::BinOpEq);
}

tree::TerminalNode* SIMPParser::EqTermContext::BinOpEq(size_t i) {
  return getToken(SIMPParser::BinOpEq, i);
}


size_t SIMPParser::EqTermContext::getRuleIndex() const {
  return SIMPParser::RuleEqTerm;
}

void SIMPParser::EqTermContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEqTerm(this);
}

void SIMPParser::EqTermContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEqTerm(this);
}


std::any SIMPParser::EqTermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SIMPVisitor*>(visitor))
    return parserVisitor->visitEqTerm(this);
  else
    return visitor->visitChildren(this);
}

SIMPParser::EqTermContext* SIMPParser::eqTerm() {
  EqTermContext *_localctx = _tracker.createInstance<EqTermContext>(_ctx, getState());
  enterRule(_localctx, 64, SIMPParser::RuleEqTerm);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(301);
    subTerm();
    setState(306);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SIMPParser::BinOpEq) {
      setState(302);
      match(SIMPParser::BinOpEq);
      setState(303);
      subTerm();
      setState(308);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubTermContext ------------------------------------------------------------------

SIMPParser::SubTermContext::SubTermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SIMPParser::AddTermContext *> SIMPParser::SubTermContext::addTerm() {
  return getRuleContexts<SIMPParser::AddTermContext>();
}

SIMPParser::AddTermContext* SIMPParser::SubTermContext::addTerm(size_t i) {
  return getRuleContext<SIMPParser::AddTermContext>(i);
}

std::vector<tree::TerminalNode *> SIMPParser::SubTermContext::BinOpMinus() {
  return getTokens(SIMPParser::BinOpMinus);
}

tree::TerminalNode* SIMPParser::SubTermContext::BinOpMinus(size_t i) {
  return getToken(SIMPParser::BinOpMinus, i);
}


size_t SIMPParser::SubTermContext::getRuleIndex() const {
  return SIMPParser::RuleSubTerm;
}

void SIMPParser::SubTermContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubTerm(this);
}

void SIMPParser::SubTermContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubTerm(this);
}


std::any SIMPParser::SubTermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SIMPVisitor*>(visitor))
    return parserVisitor->visitSubTerm(this);
  else
    return visitor->visitChildren(this);
}

SIMPParser::SubTermContext* SIMPParser::subTerm() {
  SubTermContext *_localctx = _tracker.createInstance<SubTermContext>(_ctx, getState());
  enterRule(_localctx, 66, SIMPParser::RuleSubTerm);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(309);
    addTerm();
    setState(314);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SIMPParser::BinOpMinus) {
      setState(310);
      match(SIMPParser::BinOpMinus);
      setState(311);
      addTerm();
      setState(316);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddTermContext ------------------------------------------------------------------

SIMPParser::AddTermContext::AddTermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SIMPParser::DivTermContext *> SIMPParser::AddTermContext::divTerm() {
  return getRuleContexts<SIMPParser::DivTermContext>();
}

SIMPParser::DivTermContext* SIMPParser::AddTermContext::divTerm(size_t i) {
  return getRuleContext<SIMPParser::DivTermContext>(i);
}

std::vector<tree::TerminalNode *> SIMPParser::AddTermContext::BinOpPlus() {
  return getTokens(SIMPParser::BinOpPlus);
}

tree::TerminalNode* SIMPParser::AddTermContext::BinOpPlus(size_t i) {
  return getToken(SIMPParser::BinOpPlus, i);
}


size_t SIMPParser::AddTermContext::getRuleIndex() const {
  return SIMPParser::RuleAddTerm;
}

void SIMPParser::AddTermContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddTerm(this);
}

void SIMPParser::AddTermContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddTerm(this);
}


std::any SIMPParser::AddTermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SIMPVisitor*>(visitor))
    return parserVisitor->visitAddTerm(this);
  else
    return visitor->visitChildren(this);
}

SIMPParser::AddTermContext* SIMPParser::addTerm() {
  AddTermContext *_localctx = _tracker.createInstance<AddTermContext>(_ctx, getState());
  enterRule(_localctx, 68, SIMPParser::RuleAddTerm);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(317);
    divTerm();
    setState(322);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SIMPParser::BinOpPlus) {
      setState(318);
      match(SIMPParser::BinOpPlus);
      setState(319);
      divTerm();
      setState(324);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DivTermContext ------------------------------------------------------------------

SIMPParser::DivTermContext::DivTermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SIMPParser::MulTermContext *> SIMPParser::DivTermContext::mulTerm() {
  return getRuleContexts<SIMPParser::MulTermContext>();
}

SIMPParser::MulTermContext* SIMPParser::DivTermContext::mulTerm(size_t i) {
  return getRuleContext<SIMPParser::MulTermContext>(i);
}

std::vector<tree::TerminalNode *> SIMPParser::DivTermContext::BinOpDivide() {
  return getTokens(SIMPParser::BinOpDivide);
}

tree::TerminalNode* SIMPParser::DivTermContext::BinOpDivide(size_t i) {
  return getToken(SIMPParser::BinOpDivide, i);
}


size_t SIMPParser::DivTermContext::getRuleIndex() const {
  return SIMPParser::RuleDivTerm;
}

void SIMPParser::DivTermContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDivTerm(this);
}

void SIMPParser::DivTermContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDivTerm(this);
}


std::any SIMPParser::DivTermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SIMPVisitor*>(visitor))
    return parserVisitor->visitDivTerm(this);
  else
    return visitor->visitChildren(this);
}

SIMPParser::DivTermContext* SIMPParser::divTerm() {
  DivTermContext *_localctx = _tracker.createInstance<DivTermContext>(_ctx, getState());
  enterRule(_localctx, 70, SIMPParser::RuleDivTerm);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(325);
    mulTerm();
    setState(330);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SIMPParser::BinOpDivide) {
      setState(326);
      match(SIMPParser::BinOpDivide);
      setState(327);
      mulTerm();
      setState(332);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MulTermContext ------------------------------------------------------------------

SIMPParser::MulTermContext::MulTermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SIMPParser::ParnTermContext *> SIMPParser::MulTermContext::parnTerm() {
  return getRuleContexts<SIMPParser::ParnTermContext>();
}

SIMPParser::ParnTermContext* SIMPParser::MulTermContext::parnTerm(size_t i) {
  return getRuleContext<SIMPParser::ParnTermContext>(i);
}

std::vector<tree::TerminalNode *> SIMPParser::MulTermContext::BinOpTimes() {
  return getTokens(SIMPParser::BinOpTimes);
}

tree::TerminalNode* SIMPParser::MulTermContext::BinOpTimes(size_t i) {
  return getToken(SIMPParser::BinOpTimes, i);
}


size_t SIMPParser::MulTermContext::getRuleIndex() const {
  return SIMPParser::RuleMulTerm;
}

void SIMPParser::MulTermContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMulTerm(this);
}

void SIMPParser::MulTermContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMulTerm(this);
}


std::any SIMPParser::MulTermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SIMPVisitor*>(visitor))
    return parserVisitor->visitMulTerm(this);
  else
    return visitor->visitChildren(this);
}

SIMPParser::MulTermContext* SIMPParser::mulTerm() {
  MulTermContext *_localctx = _tracker.createInstance<MulTermContext>(_ctx, getState());
  enterRule(_localctx, 72, SIMPParser::RuleMulTerm);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(333);
    parnTerm();
    setState(338);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SIMPParser::BinOpTimes) {
      setState(334);
      match(SIMPParser::BinOpTimes);
      setState(335);
      parnTerm();
      setState(340);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParnTermContext ------------------------------------------------------------------

SIMPParser::ParnTermContext::ParnTermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SIMPParser::ParnTermContext::LParen() {
  return getToken(SIMPParser::LParen, 0);
}

SIMPParser::ExprContext* SIMPParser::ParnTermContext::expr() {
  return getRuleContext<SIMPParser::ExprContext>(0);
}

tree::TerminalNode* SIMPParser::ParnTermContext::RParen() {
  return getToken(SIMPParser::RParen, 0);
}

SIMPParser::LvalueContext* SIMPParser::ParnTermContext::lvalue() {
  return getRuleContext<SIMPParser::LvalueContext>(0);
}

SIMPParser::ConstantContext* SIMPParser::ParnTermContext::constant() {
  return getRuleContext<SIMPParser::ConstantContext>(0);
}


size_t SIMPParser::ParnTermContext::getRuleIndex() const {
  return SIMPParser::RuleParnTerm;
}

void SIMPParser::ParnTermContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParnTerm(this);
}

void SIMPParser::ParnTermContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParnTerm(this);
}


std::any SIMPParser::ParnTermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SIMPVisitor*>(visitor))
    return parserVisitor->visitParnTerm(this);
  else
    return visitor->visitChildren(this);
}

SIMPParser::ParnTermContext* SIMPParser::parnTerm() {
  ParnTermContext *_localctx = _tracker.createInstance<ParnTermContext>(_ctx, getState());
  enterRule(_localctx, 74, SIMPParser::RuleParnTerm);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(347);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SIMPParser::LParen: {
        enterOuterAlt(_localctx, 1);
        setState(341);
        match(SIMPParser::LParen);
        setState(342);
        expr();
        setState(343);
        match(SIMPParser::RParen);
        break;
      }

      case SIMPParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(345);
        lvalue();
        break;
      }

      case SIMPParser::IntLit:
      case SIMPParser::FloatLit: {
        enterOuterAlt(_localctx, 3);
        setState(346);
        constant();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantContext ------------------------------------------------------------------

SIMPParser::ConstantContext::ConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SIMPParser::ConstantContext::IntLit() {
  return getToken(SIMPParser::IntLit, 0);
}

tree::TerminalNode* SIMPParser::ConstantContext::FloatLit() {
  return getToken(SIMPParser::FloatLit, 0);
}


size_t SIMPParser::ConstantContext::getRuleIndex() const {
  return SIMPParser::RuleConstant;
}

void SIMPParser::ConstantContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstant(this);
}

void SIMPParser::ConstantContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstant(this);
}


std::any SIMPParser::ConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SIMPVisitor*>(visitor))
    return parserVisitor->visitConstant(this);
  else
    return visitor->visitChildren(this);
}

SIMPParser::ConstantContext* SIMPParser::constant() {
  ConstantContext *_localctx = _tracker.createInstance<ConstantContext>(_ctx, getState());
  enterRule(_localctx, 76, SIMPParser::RuleConstant);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(349);
    _la = _input->LA(1);
    if (!(_la == SIMPParser::IntLit

    || _la == SIMPParser::FloatLit)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprListContext ------------------------------------------------------------------

SIMPParser::ExprListContext::ExprListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SIMPParser::ExprContext *> SIMPParser::ExprListContext::expr() {
  return getRuleContexts<SIMPParser::ExprContext>();
}

SIMPParser::ExprContext* SIMPParser::ExprListContext::expr(size_t i) {
  return getRuleContext<SIMPParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> SIMPParser::ExprListContext::Comma() {
  return getTokens(SIMPParser::Comma);
}

tree::TerminalNode* SIMPParser::ExprListContext::Comma(size_t i) {
  return getToken(SIMPParser::Comma, i);
}


size_t SIMPParser::ExprListContext::getRuleIndex() const {
  return SIMPParser::RuleExprList;
}

void SIMPParser::ExprListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExprList(this);
}

void SIMPParser::ExprListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExprList(this);
}


std::any SIMPParser::ExprListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SIMPVisitor*>(visitor))
    return parserVisitor->visitExprList(this);
  else
    return visitor->visitChildren(this);
}

SIMPParser::ExprListContext* SIMPParser::exprList() {
  ExprListContext *_localctx = _tracker.createInstance<ExprListContext>(_ctx, getState());
  enterRule(_localctx, 78, SIMPParser::RuleExprList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(360);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SIMPParser::RParen: {
        enterOuterAlt(_localctx, 1);

        break;
      }

      case SIMPParser::LParen:
      case SIMPParser::ID:
      case SIMPParser::IntLit:
      case SIMPParser::FloatLit: {
        enterOuterAlt(_localctx, 2);
        setState(352);
        expr();
        setState(357);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == SIMPParser::Comma) {
          setState(353);
          match(SIMPParser::Comma);
          setState(354);
          expr();
          setState(359);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LvalueContext ------------------------------------------------------------------

SIMPParser::LvalueContext::LvalueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SIMPParser::LvalueContext::ID() {
  return getToken(SIMPParser::ID, 0);
}

tree::TerminalNode* SIMPParser::LvalueContext::LBracket() {
  return getToken(SIMPParser::LBracket, 0);
}

SIMPParser::ExprContext* SIMPParser::LvalueContext::expr() {
  return getRuleContext<SIMPParser::ExprContext>(0);
}

tree::TerminalNode* SIMPParser::LvalueContext::RBracket() {
  return getToken(SIMPParser::RBracket, 0);
}


size_t SIMPParser::LvalueContext::getRuleIndex() const {
  return SIMPParser::RuleLvalue;
}

void SIMPParser::LvalueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLvalue(this);
}

void SIMPParser::LvalueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLvalue(this);
}


std::any SIMPParser::LvalueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SIMPVisitor*>(visitor))
    return parserVisitor->visitLvalue(this);
  else
    return visitor->visitChildren(this);
}

SIMPParser::LvalueContext* SIMPParser::lvalue() {
  LvalueContext *_localctx = _tracker.createInstance<LvalueContext>(_ctx, getState());
  enterRule(_localctx, 80, SIMPParser::RuleLvalue);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(362);
    match(SIMPParser::ID);
    setState(367);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SIMPParser::LBracket) {
      setState(363);
      match(SIMPParser::LBracket);
      setState(364);
      expr();
      setState(365);
      match(SIMPParser::RBracket);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void SIMPParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  simpParserInitialize();
#else
  ::antlr4::internal::call_once(simpParserOnceFlag, simpParserInitialize);
#endif
}
