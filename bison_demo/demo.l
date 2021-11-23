%{
#include "stdio.h"
#include "stdlib.h"
#include "yacc.h"
int tokens_num = 0;
int cols = 1;
%}
%option yylineno

PROGRAM PROGRAM
IS IS
AND AND
ARRAY ARRAY
BY BY
DIV DIV
DO DO
ELSE ELSE
ELSEIF ELSEIF
VAR VAR
BEGIN_1 BEGIN
END END
WRITE WRITE 
READ READ

SEMI ;
COMMA ,
COLON :
ASSIGNOP :=
STAR \*
DIVISON \/
ADD \+
MINUS -
Lbracket \(
Rbracket \)
LSbracket \[
RSbracket \]
SPOT \.

INTEGER [1-9]+[0-9]*|0 
FLOAT   [0-9]+\.[0-9]* 

SPACE [ \t\r]*
EOL \n

WS              [ \t]+
NEW_LINE        [\n]
LETTER		    [A-Z]|[a-z]
DIGIT           [0-9]
STRING          \"[^\"^\n]*\"
TYPE            (INTEGER)|(REAL)
ID		        {LETTER}+({LETTER}|{DIGIT})*
UN_STRING       \"[^\"^\n]*\n

%x COMMENT

%%
{WS}                    {cols += yyleng;}
{SPACE}                 {cols += yyleng;}
{EOL}                   {cols = 0;}
{TYPE}                  {yylval.a=newast("TYPE",0,yylineno, cols); cols += yyleng; return TYPE;}
{SEMI}                  {yylval.a=newast("SEMI",0,yylineno, cols); cols += yyleng; return SEMI;}
{COLON}                 {yylval.a=newast("COLON",0,yylineno, cols); cols += yyleng; return COLON;}
{COMMA}                 {yylval.a=newast("COMMA",0,yylineno, cols); cols += yyleng; return COMMA;}
{ASSIGNOP}              {yylval.a=newast("ASSIGNOP",0,yylineno, cols); cols += yyleng; return ASSIGNOP;}
{Lbracket}                    {yylval.a=newast("Lbracket",0,yylineno, cols); cols += yyleng; return Lbracket;}
{Rbracket}                     {yylval.a=newast("Rbracket",0,yylineno, cols); cols += yyleng; return Rbracket;}
{ADD}                     {yylval.a=newast("ADD",0,yylineno, cols); cols += yyleng; return ADD;}
{MINUS}                   {yylval.a=newast("MINUS",0,yylineno, cols); cols += yyleng; return MINUS;}
{STAR}                     {yylval.a=newast("STAR",0,yylineno, cols); cols += yyleng; return STAR;}
{DIVISON}                     {yylval.a=newast("DIVISON",0,yylineno, cols); cols += yyleng; return DIVISON;}
{PROGRAM}                 {yylval.a=newast("PROGRAM",0,yylineno, cols); cols += yyleng; return PROGRAM;}
{IS}                      {yylval.a=newast("IS",0,yylineno, cols); cols += yyleng; return IS;}
{AND}                     {yylval.a=newast("AND",0,yylineno, cols); cols += yyleng; return AND;}
{ARRAY}                   {yylval.a=newast("ARRAY",0,yylineno, cols); cols += yyleng; return ARRAY;}
{BEGIN_1}                   {yylval.a=newast("BEGIN_1",0,yylineno, cols); cols += yyleng; return BEGIN_1;}
{BY}                      {yylval.a=newast("BY",0,yylineno, cols);  cols += yyleng; return BY;}
{DIV}                     {yylval.a=newast("DIV",0,yylineno, cols); cols += yyleng; return DIV;}
{DO}                      {yylval.a=newast("DO",0,yylineno, cols); cols += yyleng; return DO;}
{ELSE}                    {yylval.a=newast("ELSE",0,yylineno, cols); cols += yyleng; return ELSE;}
{ELSEIF}                  {yylval.a=newast("ELSEIF",0,yylineno, cols); cols += yyleng; return ELSEIF;}
{VAR}                     {yylval.a=newast("VAR",0,yylineno, cols); cols += yyleng; return VAR;}
{END}                     {yylval.a=newast("END",0,yylineno, cols); cols += yyleng; return END;}
{WRITE}                   {yylval.a=newast("WRITE",0,yylineno, cols); cols += yyleng; return WRITE;}
{READ}                     {yylval.a=newast("READ",0,yylineno, cols); cols += yyleng; return READ;}
{STRING}                  {yylval.a=newast("STRING",0,yylineno, cols); cols += yyleng; return STRING;}
{INTEGER}			      {yylval.a=newast("INTEGER",0,yylineno, cols); cols += yyleng; return INTEGER;}
{FLOAT}			      {yylval.a=newast("FLOAT",0,yylineno, cols); cols += yyleng; return FLOAT;}
{ID}                      {yylval.a=newast("ID",0,yylineno, cols); cols += yyleng; return ID;}

"(*"                   {BEGIN COMMENT;}
<COMMENT>\n            {} 
<COMMENT>"*)"          {BEGIN INITIAL;}
<COMMENT>.             {}

%%
int yywrap()
{
    return 1;
}
