
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
      "simpProgram", "declSegment", "typeDeclList", "varDeclList", "funcDeclList", 
      "typeDecl", "type", "typeId", "varDecl", "idList", "optionalInit", 
      "funcDecl", "paramList", "retType", "param", "stmtList", "stmt", "letStmt", 
      "returnStmt", "breakStmt", "forStmt", "whileStmt", "assignStmt", "rValue", 
      "rcallStmt", "callStmt", "ifStmt", "ifStmtTail", "expr", "orTerm", 
      "andTerm", "leTerm", "geTerm", "ltTerm", "gtTerm", "neTerm", "eqTerm", 
      "subTerm", "addTerm", "divTerm", "mulTerm", "powTerm", "parnTerm", 
      "constant", "exprList", "lvalue"
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
  	4,1,49,404,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,2,44,7,44,2,45,7,45,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,
  	1,1,1,1,1,1,1,2,5,2,106,8,2,10,2,12,2,109,9,2,1,3,5,3,112,8,3,10,3,12,
  	3,115,9,3,1,4,5,4,118,8,4,10,4,12,4,121,9,4,1,5,1,5,1,5,1,5,1,5,1,5,1,
  	6,1,6,3,6,131,8,6,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,9,1,9,1,9,5,9,
  	145,8,9,10,9,12,9,148,9,9,1,10,1,10,1,10,3,10,153,8,10,1,11,1,11,1,11,
  	1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,12,1,12,1,12,1,12,5,12,170,
  	8,12,10,12,12,12,173,9,12,3,12,175,8,12,1,13,1,13,1,13,1,14,1,14,1,14,
  	1,14,1,15,1,15,5,15,186,8,15,10,15,12,15,189,9,15,1,16,1,16,1,16,1,16,
  	1,16,1,16,1,16,1,16,1,16,3,16,200,8,16,1,17,1,17,1,17,1,17,1,17,1,17,
  	1,17,1,18,1,18,1,18,1,18,1,19,1,19,1,19,1,20,1,20,1,20,1,20,1,20,1,20,
  	1,20,1,20,1,20,1,20,1,20,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,22,1,22,
  	1,22,1,22,1,23,1,23,1,23,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,25,
  	1,25,1,25,1,25,1,25,1,25,1,26,1,26,1,26,1,26,1,26,1,26,1,27,1,27,1,27,
  	1,27,1,27,1,27,1,27,3,27,268,8,27,1,28,1,28,1,29,1,29,1,29,5,29,275,8,
  	29,10,29,12,29,278,9,29,1,30,1,30,1,30,5,30,283,8,30,10,30,12,30,286,
  	9,30,1,31,1,31,1,31,5,31,291,8,31,10,31,12,31,294,9,31,1,32,1,32,1,32,
  	5,32,299,8,32,10,32,12,32,302,9,32,1,33,1,33,1,33,5,33,307,8,33,10,33,
  	12,33,310,9,33,1,34,1,34,1,34,5,34,315,8,34,10,34,12,34,318,9,34,1,35,
  	1,35,1,35,5,35,323,8,35,10,35,12,35,326,9,35,1,36,1,36,1,36,5,36,331,
  	8,36,10,36,12,36,334,9,36,1,37,1,37,1,37,5,37,339,8,37,10,37,12,37,342,
  	9,37,1,38,1,38,1,38,5,38,347,8,38,10,38,12,38,350,9,38,1,39,1,39,1,39,
  	5,39,355,8,39,10,39,12,39,358,9,39,1,40,1,40,1,40,5,40,363,8,40,10,40,
  	12,40,366,9,40,1,41,1,41,1,41,5,41,371,8,41,10,41,12,41,374,9,41,1,42,
  	1,42,1,42,1,42,1,42,1,42,3,42,382,8,42,1,43,1,43,1,44,1,44,1,44,1,44,
  	5,44,390,8,44,10,44,12,44,393,9,44,3,44,395,8,44,1,45,1,45,1,45,1,45,
  	1,45,3,45,402,8,45,1,45,0,0,46,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,
  	30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,62,64,66,68,70,72,74,
  	76,78,80,82,84,86,88,90,0,2,1,0,21,22,1,0,46,47,393,0,92,1,0,0,0,2,100,
  	1,0,0,0,4,107,1,0,0,0,6,113,1,0,0,0,8,119,1,0,0,0,10,122,1,0,0,0,12,130,
  	1,0,0,0,14,132,1,0,0,0,16,134,1,0,0,0,18,141,1,0,0,0,20,152,1,0,0,0,22,
  	154,1,0,0,0,24,174,1,0,0,0,26,176,1,0,0,0,28,179,1,0,0,0,30,183,1,0,0,
  	0,32,199,1,0,0,0,34,201,1,0,0,0,36,208,1,0,0,0,38,212,1,0,0,0,40,215,
  	1,0,0,0,42,226,1,0,0,0,44,233,1,0,0,0,46,237,1,0,0,0,48,240,1,0,0,0,50,
  	248,1,0,0,0,52,254,1,0,0,0,54,267,1,0,0,0,56,269,1,0,0,0,58,271,1,0,0,
  	0,60,279,1,0,0,0,62,287,1,0,0,0,64,295,1,0,0,0,66,303,1,0,0,0,68,311,
  	1,0,0,0,70,319,1,0,0,0,72,327,1,0,0,0,74,335,1,0,0,0,76,343,1,0,0,0,78,
  	351,1,0,0,0,80,359,1,0,0,0,82,367,1,0,0,0,84,381,1,0,0,0,86,383,1,0,0,
  	0,88,394,1,0,0,0,90,396,1,0,0,0,92,93,5,1,0,0,93,94,5,10,0,0,94,95,3,
  	2,1,0,95,96,5,9,0,0,96,97,5,18,0,0,97,98,3,30,15,0,98,99,5,5,0,0,99,1,
  	1,0,0,0,100,101,3,4,2,0,101,102,3,6,3,0,102,103,3,8,4,0,103,3,1,0,0,0,
  	104,106,3,10,5,0,105,104,1,0,0,0,106,109,1,0,0,0,107,105,1,0,0,0,107,
  	108,1,0,0,0,108,5,1,0,0,0,109,107,1,0,0,0,110,112,3,16,8,0,111,110,1,
  	0,0,0,112,115,1,0,0,0,113,111,1,0,0,0,113,114,1,0,0,0,114,7,1,0,0,0,115,
  	113,1,0,0,0,116,118,3,22,11,0,117,116,1,0,0,0,118,121,1,0,0,0,119,117,
  	1,0,0,0,119,120,1,0,0,0,120,9,1,0,0,0,121,119,1,0,0,0,122,123,5,14,0,
  	0,123,124,5,45,0,0,124,125,5,37,0,0,125,126,3,12,6,0,126,127,5,39,0,0,
  	127,11,1,0,0,0,128,131,3,14,7,0,129,131,5,45,0,0,130,128,1,0,0,0,130,
  	129,1,0,0,0,131,13,1,0,0,0,132,133,7,0,0,0,133,15,1,0,0,0,134,135,5,15,
  	0,0,135,136,3,18,9,0,136,137,5,38,0,0,137,138,3,12,6,0,138,139,3,20,10,
  	0,139,140,5,39,0,0,140,17,1,0,0,0,141,146,5,45,0,0,142,143,5,40,0,0,143,
  	145,5,45,0,0,144,142,1,0,0,0,145,148,1,0,0,0,146,144,1,0,0,0,146,147,
  	1,0,0,0,147,19,1,0,0,0,148,146,1,0,0,0,149,153,1,0,0,0,150,151,5,36,0,
  	0,151,153,3,86,43,0,152,149,1,0,0,0,152,150,1,0,0,0,153,21,1,0,0,0,154,
  	155,5,7,0,0,155,156,5,45,0,0,156,157,5,41,0,0,157,158,3,24,12,0,158,159,
  	5,42,0,0,159,160,3,26,13,0,160,161,5,18,0,0,161,162,3,30,15,0,162,163,
  	5,5,0,0,163,164,5,39,0,0,164,23,1,0,0,0,165,175,1,0,0,0,166,171,3,28,
  	14,0,167,168,5,40,0,0,168,170,3,28,14,0,169,167,1,0,0,0,170,173,1,0,0,
  	0,171,169,1,0,0,0,171,172,1,0,0,0,172,175,1,0,0,0,173,171,1,0,0,0,174,
  	165,1,0,0,0,174,166,1,0,0,0,175,25,1,0,0,0,176,177,5,38,0,0,177,178,3,
  	12,6,0,178,27,1,0,0,0,179,180,5,45,0,0,180,181,5,38,0,0,181,182,3,12,
  	6,0,182,29,1,0,0,0,183,187,3,32,16,0,184,186,3,32,16,0,185,184,1,0,0,
  	0,186,189,1,0,0,0,187,185,1,0,0,0,187,188,1,0,0,0,188,31,1,0,0,0,189,
  	187,1,0,0,0,190,200,3,52,26,0,191,200,3,44,22,0,192,200,3,48,24,0,193,
  	200,3,50,25,0,194,200,3,42,21,0,195,200,3,40,20,0,196,200,3,38,19,0,197,
  	200,3,36,18,0,198,200,3,34,17,0,199,190,1,0,0,0,199,191,1,0,0,0,199,192,
  	1,0,0,0,199,193,1,0,0,0,199,194,1,0,0,0,199,195,1,0,0,0,199,196,1,0,0,
  	0,199,197,1,0,0,0,199,198,1,0,0,0,200,33,1,0,0,0,201,202,5,10,0,0,202,
  	203,3,2,1,0,203,204,5,9,0,0,204,205,3,30,15,0,205,206,5,5,0,0,206,207,
  	5,39,0,0,207,35,1,0,0,0,208,209,5,20,0,0,209,210,3,56,28,0,210,211,5,
  	39,0,0,211,37,1,0,0,0,212,213,5,2,0,0,213,214,5,39,0,0,214,39,1,0,0,0,
  	215,216,5,6,0,0,216,217,5,45,0,0,217,218,5,36,0,0,218,219,3,56,28,0,219,
  	220,5,13,0,0,220,221,3,56,28,0,221,222,5,3,0,0,222,223,3,30,15,0,223,
  	224,5,19,0,0,224,225,5,39,0,0,225,41,1,0,0,0,226,227,5,16,0,0,227,228,
  	3,56,28,0,228,229,5,3,0,0,229,230,3,30,15,0,230,231,5,19,0,0,231,232,
  	5,39,0,0,232,43,1,0,0,0,233,234,3,90,45,0,234,235,5,36,0,0,235,236,3,
  	46,23,0,236,45,1,0,0,0,237,238,3,56,28,0,238,239,5,39,0,0,239,47,1,0,
  	0,0,240,241,5,45,0,0,241,242,5,36,0,0,242,243,5,45,0,0,243,244,5,41,0,
  	0,244,245,3,88,44,0,245,246,5,42,0,0,246,247,5,39,0,0,247,49,1,0,0,0,
  	248,249,5,45,0,0,249,250,5,41,0,0,250,251,3,88,44,0,251,252,5,42,0,0,
  	252,253,5,39,0,0,253,51,1,0,0,0,254,255,5,8,0,0,255,256,3,56,28,0,256,
  	257,5,12,0,0,257,258,3,30,15,0,258,259,3,54,27,0,259,53,1,0,0,0,260,261,
  	5,17,0,0,261,268,5,39,0,0,262,263,5,4,0,0,263,264,3,30,15,0,264,265,5,
  	17,0,0,265,266,5,39,0,0,266,268,1,0,0,0,267,260,1,0,0,0,267,262,1,0,0,
  	0,268,55,1,0,0,0,269,270,3,58,29,0,270,57,1,0,0,0,271,276,3,60,30,0,272,
  	273,5,35,0,0,273,275,3,60,30,0,274,272,1,0,0,0,275,278,1,0,0,0,276,274,
  	1,0,0,0,276,277,1,0,0,0,277,59,1,0,0,0,278,276,1,0,0,0,279,284,3,62,31,
  	0,280,281,5,34,0,0,281,283,3,62,31,0,282,280,1,0,0,0,283,286,1,0,0,0,
  	284,282,1,0,0,0,284,285,1,0,0,0,285,61,1,0,0,0,286,284,1,0,0,0,287,292,
  	3,64,32,0,288,289,5,32,0,0,289,291,3,64,32,0,290,288,1,0,0,0,291,294,
  	1,0,0,0,292,290,1,0,0,0,292,293,1,0,0,0,293,63,1,0,0,0,294,292,1,0,0,
  	0,295,300,3,66,33,0,296,297,5,33,0,0,297,299,3,66,33,0,298,296,1,0,0,
  	0,299,302,1,0,0,0,300,298,1,0,0,0,300,301,1,0,0,0,301,65,1,0,0,0,302,
  	300,1,0,0,0,303,308,3,68,34,0,304,305,5,30,0,0,305,307,3,68,34,0,306,
  	304,1,0,0,0,307,310,1,0,0,0,308,306,1,0,0,0,308,309,1,0,0,0,309,67,1,
  	0,0,0,310,308,1,0,0,0,311,316,3,70,35,0,312,313,5,31,0,0,313,315,3,70,
  	35,0,314,312,1,0,0,0,315,318,1,0,0,0,316,314,1,0,0,0,316,317,1,0,0,0,
  	317,69,1,0,0,0,318,316,1,0,0,0,319,324,3,72,36,0,320,321,5,29,0,0,321,
  	323,3,72,36,0,322,320,1,0,0,0,323,326,1,0,0,0,324,322,1,0,0,0,324,325,
  	1,0,0,0,325,71,1,0,0,0,326,324,1,0,0,0,327,332,3,74,37,0,328,329,5,28,
  	0,0,329,331,3,74,37,0,330,328,1,0,0,0,331,334,1,0,0,0,332,330,1,0,0,0,
  	332,333,1,0,0,0,333,73,1,0,0,0,334,332,1,0,0,0,335,340,3,76,38,0,336,
  	337,5,24,0,0,337,339,3,76,38,0,338,336,1,0,0,0,339,342,1,0,0,0,340,338,
  	1,0,0,0,340,341,1,0,0,0,341,75,1,0,0,0,342,340,1,0,0,0,343,348,3,78,39,
  	0,344,345,5,23,0,0,345,347,3,78,39,0,346,344,1,0,0,0,347,350,1,0,0,0,
  	348,346,1,0,0,0,348,349,1,0,0,0,349,77,1,0,0,0,350,348,1,0,0,0,351,356,
  	3,80,40,0,352,353,5,26,0,0,353,355,3,80,40,0,354,352,1,0,0,0,355,358,
  	1,0,0,0,356,354,1,0,0,0,356,357,1,0,0,0,357,79,1,0,0,0,358,356,1,0,0,
  	0,359,364,3,82,41,0,360,361,5,25,0,0,361,363,3,82,41,0,362,360,1,0,0,
  	0,363,366,1,0,0,0,364,362,1,0,0,0,364,365,1,0,0,0,365,81,1,0,0,0,366,
  	364,1,0,0,0,367,372,3,84,42,0,368,369,5,27,0,0,369,371,3,84,42,0,370,
  	368,1,0,0,0,371,374,1,0,0,0,372,370,1,0,0,0,372,373,1,0,0,0,373,83,1,
  	0,0,0,374,372,1,0,0,0,375,376,5,41,0,0,376,377,3,56,28,0,377,378,5,42,
  	0,0,378,382,1,0,0,0,379,382,3,90,45,0,380,382,3,86,43,0,381,375,1,0,0,
  	0,381,379,1,0,0,0,381,380,1,0,0,0,382,85,1,0,0,0,383,384,7,1,0,0,384,
  	87,1,0,0,0,385,395,1,0,0,0,386,391,3,56,28,0,387,388,5,40,0,0,388,390,
  	3,56,28,0,389,387,1,0,0,0,390,393,1,0,0,0,391,389,1,0,0,0,391,392,1,0,
  	0,0,392,395,1,0,0,0,393,391,1,0,0,0,394,385,1,0,0,0,394,386,1,0,0,0,395,
  	89,1,0,0,0,396,401,5,45,0,0,397,398,5,43,0,0,398,399,3,56,28,0,399,400,
  	5,44,0,0,400,402,1,0,0,0,401,397,1,0,0,0,401,402,1,0,0,0,402,91,1,0,0,
  	0,28,107,113,119,130,146,152,171,174,187,199,267,276,284,292,300,308,
  	316,324,332,340,348,356,364,372,381,391,394,401
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
    setState(92);
    match(SIMPParser::KeywordMain);
    setState(93);
    match(SIMPParser::KeywordLet);
    setState(94);
    declSegment();
    setState(95);
    match(SIMPParser::KeywordIn);
    setState(96);
    match(SIMPParser::KeywordBegin);
    setState(97);
    stmtList();
    setState(98);
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

SIMPParser::TypeDeclListContext* SIMPParser::DeclSegmentContext::typeDeclList() {
  return getRuleContext<SIMPParser::TypeDeclListContext>(0);
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
    setState(100);
    typeDeclList();
    setState(101);
    varDeclList();
    setState(102);
    funcDeclList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeDeclListContext ------------------------------------------------------------------

SIMPParser::TypeDeclListContext::TypeDeclListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SIMPParser::TypeDeclContext *> SIMPParser::TypeDeclListContext::typeDecl() {
  return getRuleContexts<SIMPParser::TypeDeclContext>();
}

SIMPParser::TypeDeclContext* SIMPParser::TypeDeclListContext::typeDecl(size_t i) {
  return getRuleContext<SIMPParser::TypeDeclContext>(i);
}


size_t SIMPParser::TypeDeclListContext::getRuleIndex() const {
  return SIMPParser::RuleTypeDeclList;
}

void SIMPParser::TypeDeclListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeDeclList(this);
}

void SIMPParser::TypeDeclListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeDeclList(this);
}


std::any SIMPParser::TypeDeclListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SIMPVisitor*>(visitor))
    return parserVisitor->visitTypeDeclList(this);
  else
    return visitor->visitChildren(this);
}

SIMPParser::TypeDeclListContext* SIMPParser::typeDeclList() {
  TypeDeclListContext *_localctx = _tracker.createInstance<TypeDeclListContext>(_ctx, getState());
  enterRule(_localctx, 4, SIMPParser::RuleTypeDeclList);
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
    setState(107);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SIMPParser::KeywordType) {
      setState(104);
      typeDecl();
      setState(109);
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
  enterRule(_localctx, 6, SIMPParser::RuleVarDeclList);
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
    setState(113);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SIMPParser::KeywordVar) {
      setState(110);
      varDecl();
      setState(115);
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
  enterRule(_localctx, 8, SIMPParser::RuleFuncDeclList);
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
    setState(119);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SIMPParser::KeywordFunction) {
      setState(116);
      funcDecl();
      setState(121);
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

//----------------- TypeDeclContext ------------------------------------------------------------------

SIMPParser::TypeDeclContext::TypeDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SIMPParser::TypeDeclContext::KeywordType() {
  return getToken(SIMPParser::KeywordType, 0);
}

tree::TerminalNode* SIMPParser::TypeDeclContext::ID() {
  return getToken(SIMPParser::ID, 0);
}

tree::TerminalNode* SIMPParser::TypeDeclContext::Equals() {
  return getToken(SIMPParser::Equals, 0);
}

SIMPParser::TypeContext* SIMPParser::TypeDeclContext::type() {
  return getRuleContext<SIMPParser::TypeContext>(0);
}

tree::TerminalNode* SIMPParser::TypeDeclContext::Semicolon() {
  return getToken(SIMPParser::Semicolon, 0);
}


size_t SIMPParser::TypeDeclContext::getRuleIndex() const {
  return SIMPParser::RuleTypeDecl;
}

void SIMPParser::TypeDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeDecl(this);
}

void SIMPParser::TypeDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeDecl(this);
}


std::any SIMPParser::TypeDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SIMPVisitor*>(visitor))
    return parserVisitor->visitTypeDecl(this);
  else
    return visitor->visitChildren(this);
}

SIMPParser::TypeDeclContext* SIMPParser::typeDecl() {
  TypeDeclContext *_localctx = _tracker.createInstance<TypeDeclContext>(_ctx, getState());
  enterRule(_localctx, 10, SIMPParser::RuleTypeDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(122);
    match(SIMPParser::KeywordType);
    setState(123);
    match(SIMPParser::ID);
    setState(124);
    match(SIMPParser::Equals);
    setState(125);
    type();
    setState(126);
    match(SIMPParser::Semicolon);
   
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
  enterRule(_localctx, 12, SIMPParser::RuleType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(130);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SIMPParser::KeywordInt:
      case SIMPParser::KeywordFloat: {
        enterOuterAlt(_localctx, 1);
        setState(128);
        typeId();
        break;
      }

      case SIMPParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(129);
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
  enterRule(_localctx, 14, SIMPParser::RuleTypeId);
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
    setState(132);
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
  enterRule(_localctx, 16, SIMPParser::RuleVarDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(134);
    match(SIMPParser::KeywordVar);
    setState(135);
    idList();
    setState(136);
    match(SIMPParser::Colon);
    setState(137);
    type();
    setState(138);
    optionalInit();
    setState(139);
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
  enterRule(_localctx, 18, SIMPParser::RuleIdList);
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
    setState(141);
    match(SIMPParser::ID);
    setState(146);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SIMPParser::Comma) {
      setState(142);
      match(SIMPParser::Comma);
      setState(143);
      match(SIMPParser::ID);
      setState(148);
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
  enterRule(_localctx, 20, SIMPParser::RuleOptionalInit);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(152);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SIMPParser::Semicolon: {
        enterOuterAlt(_localctx, 1);

        break;
      }

      case SIMPParser::OpAssign: {
        enterOuterAlt(_localctx, 2);
        setState(150);
        match(SIMPParser::OpAssign);
        setState(151);
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
  enterRule(_localctx, 22, SIMPParser::RuleFuncDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(154);
    match(SIMPParser::KeywordFunction);
    setState(155);
    match(SIMPParser::ID);
    setState(156);
    match(SIMPParser::LParen);
    setState(157);
    paramList();
    setState(158);
    match(SIMPParser::RParen);
    setState(159);
    retType();
    setState(160);
    match(SIMPParser::KeywordBegin);
    setState(161);
    stmtList();
    setState(162);
    match(SIMPParser::KeywordEnd);
    setState(163);
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
  enterRule(_localctx, 24, SIMPParser::RuleParamList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(174);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SIMPParser::RParen: {
        enterOuterAlt(_localctx, 1);

        break;
      }

      case SIMPParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(166);
        param();
        setState(171);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == SIMPParser::Comma) {
          setState(167);
          match(SIMPParser::Comma);
          setState(168);
          param();
          setState(173);
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
  enterRule(_localctx, 26, SIMPParser::RuleRetType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(176);
    match(SIMPParser::Colon);
    setState(177);
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
  enterRule(_localctx, 28, SIMPParser::RuleParam);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(179);
    match(SIMPParser::ID);
    setState(180);
    match(SIMPParser::Colon);
    setState(181);
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
  enterRule(_localctx, 30, SIMPParser::RuleStmtList);
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
    setState(183);
    stmt();
    setState(187);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 35184373204292) != 0)) {
      setState(184);
      stmt();
      setState(189);
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
  enterRule(_localctx, 32, SIMPParser::RuleStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(199);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(190);
      ifStmt();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(191);
      assignStmt();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(192);
      rcallStmt();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(193);
      callStmt();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(194);
      whileStmt();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(195);
      forStmt();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(196);
      breakStmt();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(197);
      returnStmt();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(198);
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
  enterRule(_localctx, 34, SIMPParser::RuleLetStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(201);
    match(SIMPParser::KeywordLet);
    setState(202);
    declSegment();
    setState(203);
    match(SIMPParser::KeywordIn);
    setState(204);
    stmtList();
    setState(205);
    match(SIMPParser::KeywordEnd);
    setState(206);
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
  enterRule(_localctx, 36, SIMPParser::RuleReturnStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(208);
    match(SIMPParser::KeywordReturn);
    setState(209);
    expr();
    setState(210);
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
  enterRule(_localctx, 38, SIMPParser::RuleBreakStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(212);
    match(SIMPParser::KeywordBreak);
    setState(213);
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
  enterRule(_localctx, 40, SIMPParser::RuleForStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(215);
    match(SIMPParser::KeywordFor);
    setState(216);
    match(SIMPParser::ID);
    setState(217);
    match(SIMPParser::OpAssign);
    setState(218);
    expr();
    setState(219);
    match(SIMPParser::KeywordTo);
    setState(220);
    expr();
    setState(221);
    match(SIMPParser::KeywordDo);
    setState(222);
    stmtList();
    setState(223);
    match(SIMPParser::KeywordEnddo);
    setState(224);
    match(SIMPParser::Semicolon);
   
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
  enterRule(_localctx, 42, SIMPParser::RuleWhileStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(226);
    match(SIMPParser::KeywordWhile);
    setState(227);
    expr();
    setState(228);
    match(SIMPParser::KeywordDo);
    setState(229);
    stmtList();
    setState(230);
    match(SIMPParser::KeywordEnddo);
    setState(231);
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
  enterRule(_localctx, 44, SIMPParser::RuleAssignStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(233);
    lvalue();
    setState(234);
    match(SIMPParser::OpAssign);
    setState(235);
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
  enterRule(_localctx, 46, SIMPParser::RuleRValue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(237);
    expr();
    setState(238);
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
  enterRule(_localctx, 48, SIMPParser::RuleRcallStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(240);
    match(SIMPParser::ID);
    setState(241);
    match(SIMPParser::OpAssign);
    setState(242);
    match(SIMPParser::ID);
    setState(243);
    match(SIMPParser::LParen);
    setState(244);
    exprList();
    setState(245);
    match(SIMPParser::RParen);
    setState(246);
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
  enterRule(_localctx, 50, SIMPParser::RuleCallStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(248);
    match(SIMPParser::ID);
    setState(249);
    match(SIMPParser::LParen);
    setState(250);
    exprList();
    setState(251);
    match(SIMPParser::RParen);
    setState(252);
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
  enterRule(_localctx, 52, SIMPParser::RuleIfStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(254);
    match(SIMPParser::KeywordIf);
    setState(255);
    expr();
    setState(256);
    match(SIMPParser::KeywordThen);
    setState(257);
    stmtList();
    setState(258);
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
  enterRule(_localctx, 54, SIMPParser::RuleIfStmtTail);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(267);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SIMPParser::KeywordEndif: {
        enterOuterAlt(_localctx, 1);
        setState(260);
        match(SIMPParser::KeywordEndif);
        setState(261);
        match(SIMPParser::Semicolon);
        break;
      }

      case SIMPParser::KeywordElse: {
        enterOuterAlt(_localctx, 2);
        setState(262);
        match(SIMPParser::KeywordElse);
        setState(263);
        stmtList();
        setState(264);
        match(SIMPParser::KeywordEndif);
        setState(265);
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

SIMPParser::OrTermContext* SIMPParser::ExprContext::orTerm() {
  return getRuleContext<SIMPParser::OrTermContext>(0);
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
  enterRule(_localctx, 56, SIMPParser::RuleExpr);

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
    orTerm();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OrTermContext ------------------------------------------------------------------

SIMPParser::OrTermContext::OrTermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SIMPParser::AndTermContext *> SIMPParser::OrTermContext::andTerm() {
  return getRuleContexts<SIMPParser::AndTermContext>();
}

SIMPParser::AndTermContext* SIMPParser::OrTermContext::andTerm(size_t i) {
  return getRuleContext<SIMPParser::AndTermContext>(i);
}

std::vector<tree::TerminalNode *> SIMPParser::OrTermContext::BinOpOr() {
  return getTokens(SIMPParser::BinOpOr);
}

tree::TerminalNode* SIMPParser::OrTermContext::BinOpOr(size_t i) {
  return getToken(SIMPParser::BinOpOr, i);
}


size_t SIMPParser::OrTermContext::getRuleIndex() const {
  return SIMPParser::RuleOrTerm;
}

void SIMPParser::OrTermContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOrTerm(this);
}

void SIMPParser::OrTermContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOrTerm(this);
}


std::any SIMPParser::OrTermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SIMPVisitor*>(visitor))
    return parserVisitor->visitOrTerm(this);
  else
    return visitor->visitChildren(this);
}

SIMPParser::OrTermContext* SIMPParser::orTerm() {
  OrTermContext *_localctx = _tracker.createInstance<OrTermContext>(_ctx, getState());
  enterRule(_localctx, 58, SIMPParser::RuleOrTerm);
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
    setState(271);
    andTerm();
    setState(276);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SIMPParser::BinOpOr) {
      setState(272);
      match(SIMPParser::BinOpOr);
      setState(273);
      andTerm();
      setState(278);
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

//----------------- AndTermContext ------------------------------------------------------------------

SIMPParser::AndTermContext::AndTermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SIMPParser::LeTermContext *> SIMPParser::AndTermContext::leTerm() {
  return getRuleContexts<SIMPParser::LeTermContext>();
}

SIMPParser::LeTermContext* SIMPParser::AndTermContext::leTerm(size_t i) {
  return getRuleContext<SIMPParser::LeTermContext>(i);
}

std::vector<tree::TerminalNode *> SIMPParser::AndTermContext::BinOpAnd() {
  return getTokens(SIMPParser::BinOpAnd);
}

tree::TerminalNode* SIMPParser::AndTermContext::BinOpAnd(size_t i) {
  return getToken(SIMPParser::BinOpAnd, i);
}


size_t SIMPParser::AndTermContext::getRuleIndex() const {
  return SIMPParser::RuleAndTerm;
}

void SIMPParser::AndTermContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAndTerm(this);
}

void SIMPParser::AndTermContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAndTerm(this);
}


std::any SIMPParser::AndTermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SIMPVisitor*>(visitor))
    return parserVisitor->visitAndTerm(this);
  else
    return visitor->visitChildren(this);
}

SIMPParser::AndTermContext* SIMPParser::andTerm() {
  AndTermContext *_localctx = _tracker.createInstance<AndTermContext>(_ctx, getState());
  enterRule(_localctx, 60, SIMPParser::RuleAndTerm);
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
    setState(279);
    leTerm();
    setState(284);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SIMPParser::BinOpAnd) {
      setState(280);
      match(SIMPParser::BinOpAnd);
      setState(281);
      leTerm();
      setState(286);
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
  enterRule(_localctx, 62, SIMPParser::RuleLeTerm);
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
    setState(287);
    geTerm();
    setState(292);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SIMPParser::BinOpLeq) {
      setState(288);
      match(SIMPParser::BinOpLeq);
      setState(289);
      geTerm();
      setState(294);
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
  enterRule(_localctx, 64, SIMPParser::RuleGeTerm);
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
    setState(295);
    ltTerm();
    setState(300);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SIMPParser::BinOpGeq) {
      setState(296);
      match(SIMPParser::BinOpGeq);
      setState(297);
      ltTerm();
      setState(302);
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
  enterRule(_localctx, 66, SIMPParser::RuleLtTerm);
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
    setState(303);
    gtTerm();
    setState(308);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SIMPParser::BinOpLt) {
      setState(304);
      match(SIMPParser::BinOpLt);
      setState(305);
      gtTerm();
      setState(310);
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
  enterRule(_localctx, 68, SIMPParser::RuleGtTerm);
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
    setState(311);
    neTerm();
    setState(316);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SIMPParser::BinOpGt) {
      setState(312);
      match(SIMPParser::BinOpGt);
      setState(313);
      neTerm();
      setState(318);
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
  enterRule(_localctx, 70, SIMPParser::RuleNeTerm);
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
    setState(319);
    eqTerm();
    setState(324);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SIMPParser::BinOpNeq) {
      setState(320);
      match(SIMPParser::BinOpNeq);
      setState(321);
      eqTerm();
      setState(326);
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
  enterRule(_localctx, 72, SIMPParser::RuleEqTerm);
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
    setState(327);
    subTerm();
    setState(332);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SIMPParser::BinOpEq) {
      setState(328);
      match(SIMPParser::BinOpEq);
      setState(329);
      subTerm();
      setState(334);
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
  enterRule(_localctx, 74, SIMPParser::RuleSubTerm);
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
    setState(335);
    addTerm();
    setState(340);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SIMPParser::BinOpMinus) {
      setState(336);
      match(SIMPParser::BinOpMinus);
      setState(337);
      addTerm();
      setState(342);
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
  enterRule(_localctx, 76, SIMPParser::RuleAddTerm);
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
    setState(343);
    divTerm();
    setState(348);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SIMPParser::BinOpPlus) {
      setState(344);
      match(SIMPParser::BinOpPlus);
      setState(345);
      divTerm();
      setState(350);
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
  enterRule(_localctx, 78, SIMPParser::RuleDivTerm);
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
    setState(351);
    mulTerm();
    setState(356);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SIMPParser::BinOpDivide) {
      setState(352);
      match(SIMPParser::BinOpDivide);
      setState(353);
      mulTerm();
      setState(358);
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

std::vector<SIMPParser::PowTermContext *> SIMPParser::MulTermContext::powTerm() {
  return getRuleContexts<SIMPParser::PowTermContext>();
}

SIMPParser::PowTermContext* SIMPParser::MulTermContext::powTerm(size_t i) {
  return getRuleContext<SIMPParser::PowTermContext>(i);
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
  enterRule(_localctx, 80, SIMPParser::RuleMulTerm);
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
    setState(359);
    powTerm();
    setState(364);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SIMPParser::BinOpTimes) {
      setState(360);
      match(SIMPParser::BinOpTimes);
      setState(361);
      powTerm();
      setState(366);
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

//----------------- PowTermContext ------------------------------------------------------------------

SIMPParser::PowTermContext::PowTermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SIMPParser::ParnTermContext *> SIMPParser::PowTermContext::parnTerm() {
  return getRuleContexts<SIMPParser::ParnTermContext>();
}

SIMPParser::ParnTermContext* SIMPParser::PowTermContext::parnTerm(size_t i) {
  return getRuleContext<SIMPParser::ParnTermContext>(i);
}

std::vector<tree::TerminalNode *> SIMPParser::PowTermContext::BinOpPower() {
  return getTokens(SIMPParser::BinOpPower);
}

tree::TerminalNode* SIMPParser::PowTermContext::BinOpPower(size_t i) {
  return getToken(SIMPParser::BinOpPower, i);
}


size_t SIMPParser::PowTermContext::getRuleIndex() const {
  return SIMPParser::RulePowTerm;
}

void SIMPParser::PowTermContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPowTerm(this);
}

void SIMPParser::PowTermContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SIMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPowTerm(this);
}


std::any SIMPParser::PowTermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SIMPVisitor*>(visitor))
    return parserVisitor->visitPowTerm(this);
  else
    return visitor->visitChildren(this);
}

SIMPParser::PowTermContext* SIMPParser::powTerm() {
  PowTermContext *_localctx = _tracker.createInstance<PowTermContext>(_ctx, getState());
  enterRule(_localctx, 82, SIMPParser::RulePowTerm);
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
    setState(367);
    parnTerm();
    setState(372);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SIMPParser::BinOpPower) {
      setState(368);
      match(SIMPParser::BinOpPower);
      setState(369);
      parnTerm();
      setState(374);
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
  enterRule(_localctx, 84, SIMPParser::RuleParnTerm);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(381);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SIMPParser::LParen: {
        enterOuterAlt(_localctx, 1);
        setState(375);
        match(SIMPParser::LParen);
        setState(376);
        expr();
        setState(377);
        match(SIMPParser::RParen);
        break;
      }

      case SIMPParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(379);
        lvalue();
        break;
      }

      case SIMPParser::IntLit:
      case SIMPParser::FloatLit: {
        enterOuterAlt(_localctx, 3);
        setState(380);
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
  enterRule(_localctx, 86, SIMPParser::RuleConstant);
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
    setState(383);
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
  enterRule(_localctx, 88, SIMPParser::RuleExprList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(394);
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
        setState(386);
        expr();
        setState(391);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == SIMPParser::Comma) {
          setState(387);
          match(SIMPParser::Comma);
          setState(388);
          expr();
          setState(393);
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
  enterRule(_localctx, 90, SIMPParser::RuleLvalue);
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
    setState(396);
    match(SIMPParser::ID);
    setState(401);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SIMPParser::LBracket) {
      setState(397);
      match(SIMPParser::LBracket);
      setState(398);
      expr();
      setState(399);
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
