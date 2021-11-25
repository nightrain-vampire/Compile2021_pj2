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
%token <a> PROGRAM IS BEGIN_1 VAR END WRITE SEMI COLON COMMA ASSIGNOP Lbracket Rbracket ID TYPE ADD MINUS STAR DIVISON REAL DO BY ARRAY AND ELSE ELSEIF DIV READ TYPENAME
%token <a> LSbracket RSbracket SPOT OF PROCEDURE
%token <a> NOT MOD OR RECORD
%token <a> BIGGER SMALLER EQUAL NSMALLER NBIGGER SQUARE Llimit Rlimit LHbracket RHbracket
%token <a> RETURN EXIT FOR LOOP WHILE IF THEN TO
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
%type <a> type-decl
%type <a> type-decl-closure
%type <a> type
%type <a> component
%type <a> component-closure
%type <a> procedure-decl
%type <a> procedure-decl2
%type <a> procedure-decl-closure
%type <a> formal-params
%type <a> fp-section
%type <a> fp-section-closure
%type <a> actual-params
%type <a> expression-closure
%type <a> array-value
%type <a> array2
%type <a> array-values
%type <a> array-closure
%type <a> comp-values
%type <a> comp-closure
%type <a> expression2
%type <a> statement-closure
%type <a> by-expression

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
  | TYPE type-decl type-decl-closure declaration {$$=newast("declaration",4,$1,$2,$3,$4);}
  | PROCEDURE procedure-decl procedure-decl-closure declaration {$$=newast("declaration",4,$1,$2,$3,$4);}
  ;

var-decl: {$$=newast("var-decl",0,-1);}
  | error {yyclearin; yyerror("float error", cols); yyerrok;} 
  | ID ID-closure var-decl2 ASSIGNOP expression {$$=newast("var-decl",5,$1,$2,$3,$4,$5);}
  ;

var-decl2: {$$=newast("var-decl2",0,-1);}
  | COLON TYPENAME {$$=newast("var-decl2",2,$1,$2);}
  | COLON ID {$$=newast("var-decl2",2,$1,$2);}
  ;

ID-closure: {$$=newast("ID-closure",0,-1);}
  | COMMA ID ID-closure {$$=newast("ID-closure",3,$1,$2,$3);}
  ;

expression: INTEGER {$$=newast("integer", 1, $1);} 
  | FLOAT {$$=newast("real", 1, $1);}
  | unary-op expression {$$=newast("expression",2,$1,$2);}
  | expression binary-op expression {$$=newast("expression",3,$1,$2,$3);}
  | lvalue {$$=newast("expression",1,$1);}
  | Lbracket expression Rbracket {$$=newast("expression",3,$1,$2,$3);}
  | ID actual-params {$$=newast("expression",2,$1,$2);}
  | ID comp-values {$$=newast("expression",2,$1,$2);}
  | ID array-values {$$=newast("expression",2,$1,$2);}
  ;

unary-op: ADD | MINUS | NOT {$$=newast("unary-op",1,$1);};

binary-op: ADD | MINUS | STAR | DIVISON | DIV | MOD | OR | AND | BIGGER | SMALLER | EQUAL | NSMALLER | NBIGGER | SQUARE {$$=newast("binary-op",1,$1);};

statement: {$$=newast("statement",0,-1);}
  | error WRITE{yyclearin; yyerror("statement error, lack semi or other error",cols); yyerrok;}
  | WRITE write-params SEMI statement {$$=newast("statement",4,$1,$2,$3,$4);}
  | READ Lbracket lvalue lvalue-closure Rbracket SEMI statement {$$=newast("statement",7,$1,$2,$3,$4,$5,$6,$7);}
  | lvalue ASSIGNOP expression SEMI statement {$$=newast("statement",5,$1,$2,$3,$4,$5);}
  | ID actual-params SEMI statement {$$=newast("statement",4,$1,$2,$3,$4);}
  | RETURN expression2 SEMI statement {$$=newast("statement",4,$1,$2,$3,$4);}
  | EXIT SEMI statement {$$=newast("statement",3,$1,$2,$3);}
  | FOR ID ASSIGNOP expression TO expression by-expression DO statement END SEMI statement {$$=newast("statement",12,$1,$2,$3,$4,$5,$6,$7,$8,$9,$10,$11,$12);}
  | LOOP statement END SEMI statement {$$=newast("statement",5,$1,$2,$3,$4,$5);}
  | WHILE expression DO statement END SEMI statement {$$=newast("statement",7,$1,$2,$3,$4,$5,$6,$7);}
  | IF expression THEN statement statement-closure expression2 END SEMI statement {$$=newast("statement",9,$1,$2,$3,$4,$5,$6,$7,$8,$9);}
  ;

by-expression: {$$=newast("by expression",0,-1);}
  | BY expression {$$=newast("by expression",2,$1,$2);}
  ;

expression2: {$$=newast("expression2",0,-1);}
  | expression {$$=newast("expression2",1,$1);}
  | ELSE statement {$$=newast("expression2",2,$1,$2);}
  ;

statement-closure: {$$=newast("statement-closure",0,-1);}
  | ELSEIF expression THEN statement statement-closure {$$=newast("statement-closure",5,$1,$2,$3,$4,$5);}
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

type-decl: ID IS type SEMI {$$=newast("type-decl",4,$1,$2,$3,$4);}
  ;

type-decl-closure: {$$=newast("type-decl-closure",0,-1);}
  | type-decl type-decl-closure {$$=newast("type-decl-closure",2,$1,$2);}
  ;

type: ID {$$=newast("type",1,$1);}
  | TYPENAME {$$=newast("type",1,$1);}
  | ARRAY OF type {$$=newast("type",3,$1,$2,$3);}
  | RECORD component component-closure END {$$=newast("type",4,$1,$2,$3,$4);}
  ;

component: ID COLON type SEMI {$$=newast("component",4,$1,$2,$3,$4);};

component-closure: {$$=newast("component-closure",0,-1);}
  | component component-closure {$$=newast("component-closure",2,$1,$2);}
  ;

procedure-decl-closure: {$$=newast("procedure-decl-closure",0,-1);}
  | procedure-decl procedure-decl-closure {$$=newast("procedure-decl-closure",2,$1,$2);}
  ;

procedure-decl: ID formal-params procedure-decl2 IS body SEMI {$$=newast("procedure-decl",6,$1,$2,$3,$4,$5,$6);};

procedure-decl2: {$$=newast("procedure-decl2",0,-1);}
  | COLON type {$$=newast("procedure-decl2",2,$1,$2);}
  ;

formal-params: Lbracket Rbracket {$$=newast("formal-params",2,$1,$2);}
  | Lbracket fp-section fp-section-closure Rbracket {$$=newast("formal-params",4,$1,$2,$3,$4);}
  ;

fp-section-closure: {$$=newast("fp-section-closure",0,-1);}
  | SEMI fp-section fp-section-closure {$$=newast("fp-section-closure",3,$1,$2,$3);}
  ;

fp-section: ID ID-closure COLON type {$$=newast("fp-section",4,$1,$2,$3,$4);};

actual-params: Lbracket Rbracket {$$=newast("actual-params",2,$1,$2);}
  | Lbracket expression expression-closure Rbracket {$$=newast("actual-params",4,$1,$2,$3,$4);}
  ;

expression-closure: {$$=newast("expression-closure",0,-1);}
  | COMMA expression expression-closure {$$=newast("expression-closure",3,$1,$2,$3);}
  ;

array-value: array2 expression {$$=newast("array-value",2,$1,$2);};

array2: {$$=newast("array-value",0,-1);}
  | expression OF {$$=newast("array-value",2,$1,$2);}
  ;

array-values: Llimit array-value array-closure Rlimit {$$=newast("array-values",4,$1,$2,$3,$4);};

array-closure: {$$=newast("array-closure",0,-1);}
  | COMMA array-value array-closure {$$=newast("array-closure",3,$1,$2,$3);}
  ;

comp-values: LHbracket ID ASSIGNOP expression comp-closure RHbracket {$$=newast("comp-values",6,$1,$2,$3,$4,$5,$6);};

comp-closure: {$$=newast("comp-closure",0,-1);}
  | SEMI ID ASSIGNOP expression comp-closure {$$=newast("comp-closure",5,$1,$2,$3,$4,$5);}
  ;

%%