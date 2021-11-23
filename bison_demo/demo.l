%{
#include "stdio.h"
#include "stdlib.h"
#include "yacc.h"
int tokens_num = 0;
int cols = 1;
int rows = 1;
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
OF OF
RECORD RECORD
PROCEDURE PROCEDURE
TYPE TYPE
NOT NOT
MOD MOD
OR OR
RETURN RETURN
EXIT EXIT
FOR FOR
LOOP LOOP
WHILE WHILE
IF IF
THEN THEN
TO TO

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
LHbracket \{
RHbracket \}

BIGGER >
SMALLER <
EQUAL =
NSMALLER >=
NBIGGER <=
SQUARE <>

Llimit \[<
Rlimit >\]

INTEGER [1-9]+[0-9]*|0 
FLOAT   [0-9]+\.[0-9]* 

SPACE [ \t\r]*
EOL \n

WS              [ \t]+
NEW_LINE        [\n]
LETTER		    [A-Z]|[a-z]
DIGIT           [0-9]
STRING          \"[^\"^\n]*\"
TYPENAME        (INTEGER)|(REAL)
ID		        {LETTER}+({LETTER}|{DIGIT})*
UN_STRING       \"[^\"^\n]*\n

%x COMMENT

%%
{WS}                    {cols += yyleng;}
{SPACE}                 {}
{EOL}                   {}
{TYPENAME}              {yylval.a=newast("TYPENAME",0,yylineno);  return TYPENAME;}
{SEMI}                  {yylval.a=newast("SEMI",0,yylineno);  return SEMI;}
{COLON}                 {yylval.a=newast("COLON",0,yylineno);  return COLON;}
{COMMA}                 {yylval.a=newast("COMMA",0,yylineno);  return COMMA;}
{ASSIGNOP}              {yylval.a=newast("ASSIGNOP",0,yylineno);  return ASSIGNOP;}
{Lbracket}                    {yylval.a=newast("Lbracket",0,yylineno);  return Lbracket;}
{Rbracket}                     {yylval.a=newast("Rbracket",0,yylineno);  return Rbracket;}
{ADD}                     {yylval.a=newast("ADD",0,yylineno);  return ADD;}
{MINUS}                   {yylval.a=newast("MINUS",0,yylineno);  return MINUS;}
{STAR}                     {yylval.a=newast("STAR",0,yylineno);  return STAR;}
{DIVISON}                     {yylval.a=newast("DIVISON",0,yylineno);  return DIVISON;}
{PROGRAM}                 {yylval.a=newast("PROGRAM",0,yylineno);  return PROGRAM;}
{IS}                      {yylval.a=newast("IS",0,yylineno);  return IS;}
{AND}                     {yylval.a=newast("AND",0,yylineno);  return AND;}
{ARRAY}                   {yylval.a=newast("ARRAY",0,yylineno);  return ARRAY;}
{BEGIN_1}                   {yylval.a=newast("BEGIN_1",0,yylineno);  return BEGIN_1;}
{BY}                      {yylval.a=newast("BY",0,yylineno);  return BY;}
{DIV}                     {yylval.a=newast("DIV",0,yylineno);  return DIV;}
{DO}                      {yylval.a=newast("DO",0,yylineno);  return DO;}
{ELSE}                    {yylval.a=newast("ELSE",0,yylineno);  return ELSE;}
{ELSEIF}                  {yylval.a=newast("ELSEIF",0,yylineno);  return ELSEIF;}
{VAR}                     {yylval.a=newast("VAR",0,yylineno);  return VAR;}
{END}                     {yylval.a=newast("END",0,yylineno);  return END;}
{WRITE}                   {yylval.a=newast("WRITE",0,yylineno);  return WRITE;} 
{STRING}                  {yylval.a=newast("STRING",0,yylineno);  return STRING;}
{INTEGER}			      {yylval.a=newast("INTEGER",0,yylineno);  return INTEGER;}
{FLOAT}			      {yylval.a=newast("FLOAT",0,yylineno);  return FLOAT;}
{READ}                    {yylval.a=newast("READ",0,yylineno); return READ;}
{LSbracket}               {yylval.a=newast("LSbracket",0,yylineno); return LSbracket;}
{RSbracket}               {yylval.a=newast("RSbracket",0,yylineno); return RSbracket;}
{SPOT}                    {yylval.a=newast("SPOT",0,yylineno); return SPOT;}
{OF}                      {yylval.a=newast("OF",0,yylineno); return OF;}
{RECORD}                  {yylval.a=newast("RECORD",0,yylineno); return RECORD;}
{PROCEDURE}               {yylval.a=newast("PROCEDURE",0,yylineno); return PROCEDURE;}
{TYPE}                    {yylval.a=newast("TYPE",0,yylineno); return TYPE;}
{NOT}                     {yylval.a=newast("NOT",0,yylineno); return NOT;}
{MOD}                     {yylval.a=newast("MOD",0,yylineno); return MOD;}
{OR}                     {yylval.a=newast("OR",0,yylineno); return OR;}
{BIGGER}                     {yylval.a=newast("BIGGER",0,yylineno); return BIGGER;}
{SMALLER}                     {yylval.a=newast("SMALLER",0,yylineno); return SMALLER;}
{EQUAL}                     {yylval.a=newast("EQUAL",0,yylineno); return EQUAL;}
{NSMALLER}                     {yylval.a=newast("NSMALLER",0,yylineno); return NSMALLER;}
{NBIGGER}                     {yylval.a=newast("NBIGGER",0,yylineno); return NBIGGER;}
{SQUARE}                     {yylval.a=newast("SQUARE",0,yylineno); return SQUARE;}
{Llimit}                     {yylval.a=newast("Llimit",0,yylineno); return Llimit;}
{Rlimit}                     {yylval.a=newast("Rlimit",0,yylineno); return Rlimit;}
{LHbracket}                     {yylval.a=newast("LHbracket",0,yylineno); return LHbracket;}
{RHbracket}                     {yylval.a=newast("RHbracket",0,yylineno); return RHbracket;}
{RETURN}                     {yylval.a=newast("RETURN",0,yylineno); return RETURN;}
{EXIT}                     {yylval.a=newast("EXIT",0,yylineno); return EXIT;}
{FOR}                     {yylval.a=newast("FOR",0,yylineno); return FOR;}
{LOOP}                     {yylval.a=newast("LOOP",0,yylineno); return LOOP;}
{WHILE}                     {yylval.a=newast("WHILE",0,yylineno); return WHILE;}
{IF}                     {yylval.a=newast("IF",0,yylineno); return IF;}
{THEN}                     {yylval.a=newast("THEN",0,yylineno); return THEN;}
{TO}                     {yylval.a=newast("TO",0,yylineno); return TO;}
{ID}                      {yylval.a=newast("ID",0,yylineno);  return ID;}

"(*"                   {BEGIN COMMENT;}
<COMMENT>\n            {} 
<COMMENT>"*)"          {BEGIN INITIAL;}
<COMMENT>.             {}

%%
int yywrap()
{
    return 1;
}
