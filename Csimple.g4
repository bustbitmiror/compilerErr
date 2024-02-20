grammar Csimple;


cProgram : Main Let DeclSegment In LeftBrace StmtList RightBrace;

DeclSegment: VarDeclList FuncDeclList;

//typeDeclList: typeDecl*;

VarDeclList: VarDecl*;

FuncDeclList: FuncDecl*;

//typeDecl: KeywordType ID Equals Type Semi;
Type: TypeId
    | ID;
TypeId: Int | Float;

VarDecl: Type IdList OptionalInit Semi;
IdList: ID (Comma ID)*;
OptionalInit: | Assign Constant;

FuncDecl: RetType ID LeftParen ParamList RightParen LeftBrace StmtList RightBrace;
ParamList: | Param (Comma Param)*;

RetType: Type;
Param: Type ID;

StmtList: Stmt (Stmt)*;
Stmt: IfStmt
    | AssignStmt
    | RcallStmt
    | CallStmt
    | WhileStmt
    | ForStmt
    | BreakStmt
    | ReturnStmt
    | LetStmt;

LetStmt: Let DeclSegment In StmtList;
ReturnStmt: Return Expr Semi;
BreakStmt: Break Semi;
ForStmt: For LeftParen ID Assign Expr To Expr RightParen LeftBrace StmtList RightBrace;
WhileStmt: While LeftParen Expr RightParen LeftBrace StmtList RightBrace;
AssignStmt: Lvalue Assign RValue;
RValue: Expr Semi;
RcallStmt: ID Assign ID LeftParen ExprList RightParen Semi;
CallStmt: ID LeftParen ExprList RightParen Semi;

IfStmt: If LeftParen Expr RightParen LeftBrace StmtList IfStmtTail;
IfStmtTail: RightBrace
    | RightBrace Else LeftBrace StmtList RightBrace;

Expr: OrTerm;

OrTerm: AndTerm (Or AndTerm)*;
AndTerm: LeTerm (And LeTerm)*;
LeTerm: GeTerm (LessEqual GeTerm)*;
GeTerm: LtTerm (GreaterEqual LtTerm)*;
LtTerm: GtTerm (Less GtTerm)*;
GtTerm: NeTerm (Greater NeTerm)*;
NeTerm: EqTerm (NotEq EqTerm)*;
EqTerm: SubTerm (Equal SubTerm)*;
SubTerm: AddTerm (Minus AddTerm)*;
AddTerm: DivTerm(Plus DivTerm)*;
DivTerm: MulTerm (Div MulTerm)*;
MulTerm: PowTerm (Star PowTerm)*;
PowTerm: ParnTerm (Power ParnTerm)*;

ParnTerm: (LeftParen Expr RightParen) | Lvalue | Constant;

Constant: IntLit | FloatLit;

ExprList: | Expr (Comma Expr)*;

Lvalue: ID (LeftBracket Expr RightBracket)?;

To
    : 'to'
    ;
In
    : 'in'
    ;
Let
    : 'let'
    ;
Main 
    : 'main'
    ;
Break
    : 'break'
    ;
Char
    : 'char'
    ;
Const
    : 'const'
    ;
Continue
    : 'continue'
    ;
Else
    : 'else'
    ;
Float
    : 'float'
    ;
For
    : 'for'
    ;
If
    : 'if'
    ;
Int
    : 'int'
    ;
Return
    : 'return'
    ;
Void
    : 'void'
    ;
While
    : 'while'
    ;
Do
    : 'do'
    ;
Bool
    : 'bool'
    ;


LeftParen
    : '('
    ;
RightParen
    : ')'
    ;
LeftBracket
    : '['
    ;
RightBracket
    : ']'
    ;
LeftBrace
    : '{'
    ;
RightBrace
    : '}'
    ;

Less
    : '<'
    ;
LessEqual
    : '<='
    ;
Greater
    : '>'
    ;
GreaterEqual
    : '>='
    ;
Plus
    : '+'
    ;
Minus
    : '-'
    ;
Star
    : '*'
    ;
Div
    : '/'
    ;
Mod
    : '%'
    ;
Power
    : '**'
    ;
And
    : '&'
    ;
Or
    : '|'
    ;
NotEq
    : '!='
    ;
Equal
    : '=='
    ;

//Colon
//    : ':'
//    ;

Semi
    : ';'
    ;

Comma
    : ','
    ;

Assign
    : '='
    ;

Dot
    : '.'
    ;


ID : [A-Za-z][A-Za-z0-9_]* ;
IntLit : '0' | [1-9][0-9]* ;
FloatLit : [0-9]+ '.' [0-9]* ;


Whitespace
    : [ \t]+ -> channel(HIDDEN)
    ;

BlockComment
    : '/*' .*? '*/' -> channel(HIDDEN)
    ;

LineComment
    : '//' ~[\r\n]* -> channel(HIDDEN)
    ;