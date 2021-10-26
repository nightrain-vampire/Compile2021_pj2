%{
#include "yacc.h"
#include "iostream"
#include "string"

using namespace std;
int tokens_num = 0;
int cols = 1;
int rows = 1;
%}
%option     nounput
%option     noyywrap

DIGIT       [0-9]
INTEGER     {DIGIT}+
REAL        {DIGIT}+"."{DIGIT}*
WS          [ \t]+
NEW_LINE        [\n]
LETTER		    [A-Z]|[a-z]
STRING          \"[^\"^\n]*\"
TYPE            (INTEGER)|(REAL)
ID		        {LETTER}+({LETTER}|{DIGIT})*
UN_STRING       \"[^\"^\n]*\n

%x COMMENT

%%
{WS}                    {cols += yyleng;}
<INITIAL><<EOF>>        return T_EOF;
{NEW_LINE}              {rows++; cols = 1;}
{UN_STRING}             {cols = 1;      return UTSTRING;}
{STRING}                {tokens_num++;  return STRING;}
{INTEGER}			    {tokens_num++;  return INTEGER;}
";"                     {tokens_num++;  return SEMI;}
":"                     {tokens_num++;  return COLON;}
","                     {tokens_num++;  return COMMA;}
":="                    {tokens_num++;  return INITIAL;}
"("                     {tokens_num++;  return Lbracket;}
")"                     {tokens_num++;  return Rbracket;}
{TYPE}                  {tokens_num++;  return TYPE;}
PROGRAM                 {tokens_num++;  return PROGRAM;}
IS                      {tokens_num++;  return IS;}
VAR                     {tokens_num++;  return VAR;}
BEGIN                   {tokens_num++;  return BEGIN;}
END                     {tokens_num++;  return END;}
WRITE                   {tokens_num++;  return WfRITE;}
{REAL} 	                {tokens_num++;  return REAL;}
{ID}                    {tokens_num++;  return ID;}
.                       {return BADCHAR;}


"(*"                   {BEGIN COMMENT; }
<COMMENT>\n            {rows++; } 
<COMMENT>"*)"          {BEGIN INITIAL; }
<COMMENT>.             {yyleng;}
<COMMENT><<EOF>>       return C_EOF;
%%
