%{
#include<unistd.h>
#include<stdio.h>   
#include "gramtree.h"
#include "lex.c"
%}

%union{
struct ast* a;
double d;
}
%token <a> INTEGER FLOAT STRING
%token <a> PROGRAM IS BEGIN_1 VAR END WRITE SEMI COLON COMMA ASSIGNOP Lbracket Rbracket ID TYPE ADD MINUS STAR DIVISON REAL DO BY ARRAY AND ELSE ELSEIF DIV
%token <a> EOL
%type <a> body
%type <a> declaration
%type <a> var-decl
%type <a> statement
%type <a> ID-closure
%type <a> write-params
%type <a> write-expr
%type <a> write-expr-closure
%type <a> unary-op
%type <a> binary-op
%type <a> expression

%type <a> root

%start root

%%
root:
  | PROGRAM IS SEMI {$$=newast("root",3,$1,$2,$3);printf("打印syntax tree:\n");eval($$,0);printf("syntax tree打印完毕!\n\n");} 
  | PROGRAM IS body SEMI{$$=newast("root",4,$1,$2,$3,$4);printf("打印syntax tree:\n");eval($$,0);printf("syntax tree打印完毕!\n\n");}
  ;
body: 
  | declaration BEGIN_1 statement END {$$=newast("body",4,$1,$2,$3,$4);}
  ;
declaration: VAR var-decl SEMI {$$=newast("declaration",3,$1,$2,$3);}
  | VAR var-decl SEMI declaration {$$=newast("declaration",4,$1,$2,$3,$4);}
  ;
var-decl: ID COLON TYPE ASSIGNOP expression SEMI {$$=newast("var-decl",6,$1,$2,$3,$4,$5,$6);}
  | ID ID-closure COLON TYPE ASSIGNOP expression SEMI {$$=newast("var-decl",7,$1,$2,$3,$4,$5,$6,$7);}
  ;
ID-closure: 
  | COMMA ID ID-closure {$$=newast("ID-closure",3,$1,$2,$3);}
  ;
expression: INTEGER {$$=newast("integer", 1, $1);} 
  | FLOAT {$$=newast("real", 1, $1);}
  | ID {$$=newast("ID", 1, $1);}
  | unary-op expression {$$=newast("expression",2,$1,$2);}
  | expression binary-op expression {$$=newast("expression",3,$1,$2,$3);}
  ;
unary-op: ADD | MINUS {$$=newast("unary-op",1,$1);};
binary-op: ADD | MINUS | STAR | DIVISON {$$=newast("binary-op",1,$1);};
statement: WRITE write-params SEMI {$$=newast("statement",3,$1,$2,$3);};
write-params: Lbracket write-expr write-expr-closure Rbracket {$$=newast("write-params",4,$1,$2,$3,$4);}
  | Lbracket Rbracket {$$=newast("write-params",2,$1,$2);}
  ;
write-expr: STRING {$$=newast("write-expr",1,$1);}
  | expression {$$=newast("write-expr",1,$1);}
  ;
write-expr-closure: 
  | COMMA write-expr write-expr-closure {$$=newast("write-expr-closure",3,$1,$2,$3);}
  ;
%%