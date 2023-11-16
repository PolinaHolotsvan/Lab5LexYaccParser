
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INCLUDE = 258,
     HEADER = 259,
     LIBRARY = 260,
     CHAR = 261,
     DOUBLE = 262,
     FLOAT = 263,
     INT = 264,
     LONG = 265,
     UNSIGNED = 266,
     SHORT = 267,
     SIGNED = 268,
     STRUCT = 269,
     AUTO = 270,
     CONST = 271,
     VOID = 272,
     STRING_VALUE = 273,
     CHAR_VALUE = 274,
     INT_VALUE = 275,
     FLOAT_VALUE = 276,
     COLON = 277,
     DOT = 278,
     COMMA = 279,
     SEMICOLON = 280,
     IF = 281,
     FOR = 282,
     DO = 283,
     WHILE = 284,
     ELSE = 285,
     LBRACE = 286,
     RBRACE = 287,
     LCBRACE = 288,
     RCBRACE = 289,
     LSBRACE = 290,
     RSBRACE = 291,
     LABRACE = 292,
     RABRACE = 293,
     STAR = 294,
     AMPERSAND = 295,
     HASH = 296,
     EQUAL = 297,
     EXCLAMATION = 298,
     VBAR = 299,
     QMARK = 300,
     ARROW = 301,
     PLUS = 302,
     MINUS = 303,
     SLASH = 304,
     PERCENT = 305,
     GOTO = 306,
     CONTINUE = 307,
     BREAK = 308,
     RETURN = 309,
     SIZEOF = 310,
     STATIC = 311,
     TYPEDEF = 312,
     UNION = 313,
     VOLATILE = 314,
     ID = 315,
     OTHER = 316
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


