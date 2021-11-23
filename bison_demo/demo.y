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
%token <a> PROGRAM IS BEGIN_1 VAR END WRITE SEMI COLON COMMA ASSIGNOP Lbracket Rbracket ID TYPE ADD MINUS STAR DIVISON REAL DO BY ARRAY AND ELSE ELSEIF DIV READ
%token <a> LSbracket RSbracket SPOT
%token <a> EOL
%type <a> body
%type <a> declaration
%type <a> var-decl
%type <a> var-decl2
%type <a> statement
%type <a> ID-closure
%type <a> write-params
%type <a> write-expr
%type <a> write-expr-closure
%type <a> unary-op
%type <a> binary-op
%type <a> expression
%type <a> lvalue
%type <a> lvalue-closure

%type <a> root


%%
 root: {$$=newast("root",0,-1);}
  | PROGRAM IS body SEMI{$$=newast("root",4,$1,$2,$3,$4);printf("打印syntax tree:\n");eval($$,0);printf("syntax tree打印完毕!\n\n");}
  ;

body: {$$=newast("body",0,-1);}
  | declaration BEGIN_1 statement END {$$=newast("body",4,$1,$2,$3,$4);}
  ;

declaration: {$$=newast("declaration",0,-1);}
  | VAR var-decl SEMI declaration {$$=newast("declaration",4,$1,$2,$3,$4);}
  | var-decl SEMI declaration {$$=newast("declaration",3,$1,$2,$3);}
  ;

var-decl: {$$=newast("var-decl",0,-1);}
  | ID ID-closure var-decl2 {$$=newast("var-decl",3,$1,$2,$3);}
  ;

var-decl2: COLON TYPE ASSIGNOP expression {$$=newast("var-decl2",4,$1,$2,$3,$4);}
  | ASSIGNOP expression {$$=newast("var-decl2",2,$1,$2);}
  ;

ID-closure: {$$=newast("ID-closure",0,-1);}
  | COMMA ID ID-closure {$$=newast("ID-closure",3,$1,$2,$3);}
  ;

expression: INTEGER {$$=newast("integer", 1, $1);} 
  | FLOAT {$$=newast("real", 1, $1);}
  | ID {$$=newast("ID", 1, $1);}
  | unary-op expression {$$=newast("expression",2,$1,$2);}
  | expression binary-op expression {$$=newast("expression",3,$1,$2,$3);}
  | lvalue {$$=newast("expression",1,$1);}
  | Lbracket expression Rbracket {$$=newast("expression",3,$1,$2,$3);}
  ;

unary-op: ADD | MINUS {$$=newast("unary-op",1,$1);};

binary-op: ADD | MINUS | STAR | DIVISON {$$=newast("binary-op",1,$1);};

statement: {$$=newast("statement",0,-1);}
  | WRITE write-params SEMI statement {$$=newast("statement",4,$1,$2,$3,$4);}
  | READ Lbracket lvalue lvalue-closure Rbracket SEMI statement {$$=newast("statement",7,$1,$2,$3,$4,$5,$6,$7);}
  | lvalue ASSIGNOP expression SEMI statement {$$=newast("statement",5,$1,$2,$3,$4,$5);}
  ;

write-params: Lbracket write-expr write-expr-closure Rbracket {$$=newast("write-params",4,$1,$2,$3,$4);}
  | Lbracket Rbracket {$$=newast("write-params",2,$1,$2);}
  ;

write-expr: STRING {$$=newast("write-expr",1,$1);}
  | expression {$$=newast("write-expr",1,$1);}
  ;

write-expr-closure: {$$=newast("write-expr-closure",0,-1);}
  | COMMA write-expr write-expr-closure {$$=newast("write-expr-closure",3,$1,$2,$3);}
  ;

lvalue-closure: {$$=newast("lvalue-closure",0,-1);}
  | COMMA lvalue lvalue-closure {$$=newast("lvalue-closure",3,$1,$2,$3);}
  ;

lvalue: ID {$$=newast("lvalue",1,$1);}
  | lvalue LSbracket expression RSbracket {$$=newast("lvalue",4,$1,$2,$3,$4);}
  | lvalue SPOT ID {$$=newast("lvalue",3,$1,$2,$3);}
  ;
%%