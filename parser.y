%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define YYSTYPE char*
#define YYERROR_VERBOSE 1
#define DEBUG

int wrapRet = 1;

int yylex(void);

void yyerror(const char *str) {
    printf("%s", str);
}

int main();
%}

%token INCLUDE HEADER LIBRARY
%token CHAR DOUBLE FLOAT INT LONG UNSIGNED SHORT SIGNED STRUCT AUTO CONST VOID
%token STRING_VALUE CHAR_VALUE INT_VALUE FLOAT_VALUE
%token COLON DOT COMMA SEMICOLON
%token IF FOR DO WHILE ELSE
%token LBRACE RBRACE LCBRACE RCBRACE LSBRACE RSBRACE LABRACE RABRACE
%token STAR AMPERSAND HASH
%token EQUAL EXCLAMATION VBAR QMARK ARROW
%token PLUS MINUS SLASH PERCENT
%token GOTO CONTINUE BREAK RETURN SIZEOF STATIC TYPEDEF UNION VOLATILE
%token ID OTHER

%start input

%%
input:
    | include
    | func_declaration
    | struct_declaration
    | error
    | input input
;

include:
    HASH INCLUDE LIBRARY
    | HASH INCLUDE HEADER
;

struct_declaration:
    STRUCT ID LCBRACE struct_field_list RCBRACE SEMICOLON
;

struct_field_list:
    type_name SEMICOLON
    | initialization SEMICOLON
    | struct_field_list struct_field_list
;

struct_field:
    ID DOT ID
;

type:
    CHAR
    | SIGNED CHAR
    | UNSIGNED CHAR
    | SHORT
    | UNSIGNED SHORT
    | INT
    | UNSIGNED INT
    | LONG
    | UNSIGNED LONG
    | LONG LONG
    | UNSIGNED LONG LONG
    | FLOAT
    | DOUBLE
    | AUTO
    | array
    | STRUCT ID
;

type_name:
    type ID;

func_declaration:
    func_def
    | func_def bracket_body
;

func_def:
    VOID ID LBRACE RBRACE
    | type_name ID LBRACE RBRACE
    | type_name LBRACE func_args_list_def RBRACE
    | VOID LBRACE func_args_list_def RBRACE
;

func_args_list_def:
    | type func_arg
    | func_args_list_def COMMA func_args_list_def
;

func_call:
    ID LBRACE RBRACE
    | ID LBRACE func_args_list_call RBRACE
;

func_args_list_call:
    | func_arg
    | func_args_list_call COMMA func_args_list_call
;

func_arg:
    expression_value
;

while_iteration:
    WHILE LBRACE logical_expression RBRACE
;

do_while:
    DO expression_declaration_or_bracket_body WHILE LBRACE logical_expression RBRACE
;

if_else:
    IF LBRACE logical_expression RBRACE expression_declaration_or_bracket_body
    | IF LBRACE logical_expression RBRACE expression_declaration_or_bracket_body ELSE expression_declaration_or_bracket_body
    | IF LBRACE logical_expression RBRACE expression_declaration_or_bracket_body ELSE if_else
;

for_iteration:
    FOR LBRACE for_initialization SEMICOLON logical_expression RBRACE
    | FOR LBRACE for_initialization SEMICOLON logical_expression SEMICOLON for_expression_list RBRACE
;

for_initialization:
    expression_value
    | initialization
;

for_expression_list:
    expression
    | for_expression_list COMMA expression
;

iteration:
    while_iteration bracket_body
    | if_else
    | for_iteration bracket_body
    | do_while
;

expression:
    arithmetic_expression
    | logical_expression
    | initialization
    | type_name
    | conditional_expression
    | func_call
    | iteration
    | jump_statement
    | assignment
;

expression_declaration:
    expression SEMICOLON
;

expression_declaration_list:
    expression_declaration
    | expression_declaration_list expression_declaration
;

bracket_body:
    LCBRACE expression_declaration_list RCBRACE
    | LCBRACE RCBRACE
;

expression_declaration_or_bracket_body:
    bracket_body
    | expression_declaration
;

logical_expression:
    value
    | EXCLAMATION logical_expression
    | LBRACE logical_expression RBRACE
    | logical_expression logical_operator logical_expression
    | logical_expression comparison_operator logical_expression
;

arithmetic_expression:
    value
    | LBRACE arithmetic_expression RBRACE
    | arithmetic_expression arithmetic_operator arithmetic_expression
;

jump_statement:
    GOTO ID
    | CONTINUE
    | BREAK
    | RETURN
    | RETURN expression_value
;

logical_operator:
    AMPERSAND AMPERSAND
    | VBAR VBAR
;

arithmetic_operator:
    STAR
    | PLUS
    | MINUS
    | SLASH
    | PERCENT
;

comparison_operator:
    LABRACE
    | RABRACE
    | EQUAL EQUAL
    | EXCLAMATION EQUAL
    | LABRACE EQUAL
    | RABRACE EQUAL
;

array:
    type STAR
    | ID STAR
    | array STAR
;

conditional_expression:
    logical_expression QMARK expression_value COLON expression_value
;

initialization:
    type_name EQUAL expression_value
;

assignment:
    variable_or_field EQUAL expression_value;

expression_value:
    value
    | expression
;

value:
    variable_or_field
    | star_variable
    | ampersand_variable
    | STRING_VALUE
    | CHAR_VALUE
    | INT_VALUE
    | FLOAT_VALUE
;


variable_or_field:
    ID
    | struct_field
;

star_variable:
    STAR variable_or_field
    | STAR star_variable
;

ampersand_variable:
    AMPERSAND variable_or_field
    | AMPERSAND ampersand_variable
;

%%

int main()
{
    yyparse();
    return 0;
}