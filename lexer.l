%{
    #include <stdio.h>

    #define YYSTYPE char*
    #include "parser.tab.h"
%}

identifier      [_a-zA-Z][_a-zA-Z0-9]*
number          [0-9]
alphabet        [a-zA-Z]
comment         "//".*|"/*".*"*/"

string_value    """.*"""
char_value      '{number}|{alphabet}'
int_value       [1-9]{number}*|{number}
float_value     {number}+"."{number}*|{number}*"."{number}+|{int_value}

header          """.*".h""""
library          "<".*".h"">"
%%
\n\r|\r\n|\n|\r ; //skip empty line

{comment}       ; //skip comment

"char"          {  return CHAR; }
"double"        {  return DOUBLE; }
"float"         {  return FLOAT; }
"int"           {  return INT; }
"long"          {  return LONG; }
"unsigned"      {  return UNSIGNED; }
"short"         {  return SHORT; }
"signed"        {  return SIGNED; }
"auto"          {  return AUTO; }
"const"         {  return CONST; }
"void"          {  return VOID; }

"include"       {  return INCLUDE; }
"struct"        {  return STRUCT; }
"break"         {  return BREAK; }
"continue"      {  return CONTINUE; }
"do"            {  return DO; }
"else"          {  return ELSE; }
"for"           {  return FOR; }
"if"            {  return IF; }
"while"         {  return WHILE; }
"goto"          {  return GOTO; }
"return"        {  return RETURN; }
"sizeof"        {  return SIZEOF; }
"static"        {  return STATIC; }
"typedef"       {  return TYPEDEF; }
"union"         {  return UNION; }
"volatile"      {  return VOLATILE; }

":"             {  return COLON; }
"."             {  return DOT; }
","             {  return COMMA; }
";"             {  return SEMICOLON; }

"("             {  return LBRACE; }
")"             {  return RBRACE; }
"{"             {  return LCBRACE; }
"}"             {  return RCBRACE; }
"["             {  return LSBRACE; }
"]"             {  return RSBRACE; }
"<"             {  return LABRACE; }
">"             {  return RABRACE; }

"*"             {  return STAR; }
"&"             {  return AMPERSAND; }
"#"             {  return HASH; }

"="             {  return EQUAL; }
"!"             {  return EXCLAMATION; }
"|"             {  return VBAR; }
"?"             {  return QMARK; }
"->"            {  return ARROW; }

"+"             {  return PLUS; }
"-"             {  return MINUS; }
"/"             {  return SLASH; }
"%"             {  return PERCENT; }


{string_value}  {  return STRING_VALUE; }
{char_value}    {  return CHAR_VALUE; }
{int_value}     {  return INT_VALUE; }
{float_value}   {  return FLOAT_VALUE; }

{header}        {  return HEADER; }
{library}       {  return LIBRARY; }

[ \t\n]+        ; // skip whitespaces
{identifier}    {  return ID; }
.               {  return OTHER; }

%%

int yywrap() {
    return 1;
}
