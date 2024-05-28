grammar SIMP;


simpProgram: KeywordMain KeywordLet declSegment KeywordIn KeywordBegin stmtList KeywordEnd;

declSegment: varDeclList funcDeclList;

varDeclList: varDecl*;

funcDeclList: funcDecl*;

type: typeId
    | ID;
typeId: KeywordInt | KeywordFloat;

varDecl: KeywordVar idList Colon type optionalInit Semicolon;
idList: ID (Comma ID)*;
optionalInit: | OpAssign constant;

funcDecl: KeywordFunction ID LParen paramList RParen retType KeywordBegin stmtList KeywordEnd Semicolon;
paramList: | param (Comma param)*;

retType: Colon type;
param: ID Colon type;

stmtList: stmt (stmt)*;
stmt: ifStmt
    | assignStmt
    | rcallStmt
    | callStmt
    | whileStmt
    | forStmt
    | breakStmt
    | returnStmt
    | letStmt
    | writeStmt;

letStmt: KeywordLet declSegment KeywordIn stmtList KeywordEnd Semicolon;
returnStmt: KeywordReturn expr Semicolon;
breakStmt: KeywordBreak Semicolon;
forStmt: KeywordFor ID OpAssign expr KeywordTo expr KeywordDo stmtList KeywordEnddo Semicolon 
    | KeywordFor ID OpAssign expr KeywordDownto expr KeywordDo stmtList KeywordEnddo Semicolon;
whileStmt: KeywordWhile expr KeywordDo stmtList KeywordEnddo Semicolon;
assignStmt: lvalue OpAssign rValue;
rValue: expr Semicolon;
rcallStmt: ID OpAssign ID LParen exprList RParen Semicolon;
callStmt: ID LParen exprList RParen Semicolon;

ifStmt: KeywordIf expr KeywordThen stmtList ifStmtTail;
ifStmtTail: KeywordEndif Semicolon
    | KeywordElse stmtList KeywordEndif Semicolon;
writeStmt: KeywordWrite expr Semicolon;

expr: leTerm;


leTerm: geTerm (BinOpLeq geTerm)*;
geTerm: ltTerm (BinOpGeq ltTerm)*;
ltTerm: gtTerm (BinOpLt gtTerm)*;
gtTerm: neTerm (BinOpGt neTerm)*;
neTerm: eqTerm (BinOpNeq eqTerm)*;
eqTerm: subTerm (BinOpEq subTerm)*;
subTerm: addTerm (BinOpMinus addTerm)*;
addTerm: divTerm(BinOpPlus divTerm)*;
divTerm: mulTerm (BinOpDivide mulTerm)*;
mulTerm: parnTerm (BinOpTimes parnTerm)*;


parnTerm: (LParen expr RParen) | lvalue | constant;

constant: IntLit | FloatLit;

exprList: | expr (Comma expr)*;

lvalue: ID (LBracket expr RBracket)?;

KeywordMain : 'main' ;
KeywordBreak : 'break' ;
KeywordDo : 'do' ;
KeywordElse : 'else' ;
KeywordEnd : 'end' ;
KeywordFor : 'for' ;
KeywordFunction : 'function' ;
KeywordIf : 'if' ;
KeywordIn : 'in' ;
KeywordLet : 'let' ;
KeywordOf : 'of' ;
KeywordThen : 'then' ;
KeywordTo : 'to' ;
KeywordDownto : 'downto';
KeywordVar : 'var' ;
KeywordWhile : 'while' ;
KeywordEndif : 'endif' ;
KeywordBegin : 'begin' ;
KeywordEnddo : 'enddo' ;
KeywordReturn : 'return' ;
KeywordInt : 'int';
KeywordFloat : 'float';
KeywordWrite : 'write';

BinOpPlus : '+';
BinOpMinus : '-';
BinOpTimes : '*';
BinOpDivide : '/';
BinOpEq : '==';
BinOpNeq : '!=';
BinOpLt : '<';
BinOpGt : '>';
BinOpLeq : '<=';
BinOpGeq : '>=';
BinOpAnd : '&';
BinOpOr : '|';

OpAssign : ':=' ;
Equals : '=' ;

Colon : ':' ;
Semicolon : ';' ;
Comma : ',' ;

LParen : '(' ;
RParen : ')' ;
LBracket : '[' ;
RBracket : ']' ;

ID : [A-Za-z][A-Za-z0-9_]* ;
IntLit : '0' | [1-9][0-9]* ;
FloatLit : [0-9]+ '.' [0-9]* ;

Comment : '/*' .*? '*/' -> skip ;
Whitespace : [ \t\r\n]+ -> skip ;
