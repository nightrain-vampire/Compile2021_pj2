%{
#include <iostream>
using namespace std;

#include "lex.c"
void yyerror(const char* msg) {
  cerr << msg << endl;
}
%}

%union {
    double floatval;
    int intval;
    char *strval;
    int subtok;
}
%token <strval> STRING PROGRAM IS BEGIN END VAR WRITE SEMI COLON COMMA INITIAL Lbracket Rbracket INTEGER REAL ID TYPE T_EOF UTSTRING

// %token <strval> STRING
// %token <strval> PROGRAM
// %token <strval> IS
// %token <strval> BEGIN
// %token <strval> END
// %token <strval> VAR
// %token <strval> WRITE
// %token <strval> SEMI
// %token <strval> COLON 
// %token <strval> COMMA
// %token <strval> INITIAL
// %token <strval> Lbracket
// %token <strval> Rbracket
// %token <int> INTEGER
// %token <floatval> REAL
// %token <strval> ID
// %token <strval> TYPE
// %token <strval> T_EOF
// %token <strval> UTSTRING


%type <strval> root
%type <strval> body
%type <strval> declaration
%type <strval> type-decl
%type <strval> var-decl
%type <strval> procedure-decl
%type <strval> formal-params
%type <strval> fp-section
%type <strval> statement
%type <strval> ID-closure
%type <strval> write-params
%type <strval> write-expr
%type <strval> write-expr-closure
%type <strval> unary-op
%type <strval> binary-op
%type <strval> expression

%start root


// %%
// calc:
//   | calc exp EOL { cout << "= " << $2 << endl; }
//   ;
// exp: factor
//   | exp ADD factor { $$ = $1 + $3; }
//   | exp SUB factor { $$ = $1 - $3; }
//   ;
// factor: term
//   | factor MUL term { $$ = $1 * $3; }
//   | factor DIV term { $$ = $1 / $3; }
//   ;
// term: NUMBER
//   | OP exp CP { $$ = $2; }
//   ;
// %%

%%
root:
  | PROGRAM IS body SEMI { cout<< "PROGRAM IS\n\t" << $3 << "\n;" << endl;}
  ;
body: 
  | declaration BEGIN statement END {$$ = $1 + "BEGIN" + $3 + "END";}
  ;
declaration: 
  | VAR var-decl SEMI {$$ = "VAR" + $2 + ";";}
  ;
var-decl:
  | ID ID-closure COLON TYPE INITIAL expression SEMI {$$ = $1 + $2 + $3 + $4 + $5 + $6 + ";";}
  ;
ID-closure: 
  | COMMA ID ID-closure {$$ = $1 + $2 + $3;}
  ;
expression: unary-op expression {$$ = $1 + $2;}
  | expression binary-op expression {$$ = $1 + $2 + $3;}
  ;
unary-op: "+" | "-" ;
binary-op: "+" | "-" | "*" | "/" ;
statement: WRITE write-params SEMI {$$ = "WRITE" + $2 + ";";};
write-params: Lbracket write-expr write-expr-closure Rbracket {$$ = "(" + write-expr + $3 + ")";}
  | Lbracket Rbracket {$$ = "()";}
  ;
write-expr: STRING 
  | expression
  ;
write-expr-closure: 
  | COMMA write-expr write-expr-closure
  ;
%%
