
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "parser.y"

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


/* Line 189 of yacc.c  */
#line 94 "parser.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


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


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 197 "parser.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  34
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   607

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  125
/* YYNRULES -- Number of states.  */
#define YYNSTATES  204

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   316

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     6,     8,    10,    12,    15,    19,
      23,    30,    33,    36,    39,    43,    45,    48,    51,    53,
      56,    58,    61,    63,    66,    69,    73,    75,    77,    79,
      81,    83,    86,    89,    91,    94,    99,   104,   109,   114,
     115,   118,   122,   126,   131,   132,   134,   138,   140,   145,
     152,   158,   166,   174,   181,   190,   192,   194,   196,   200,
     203,   205,   208,   210,   212,   214,   216,   218,   220,   222,
     224,   226,   228,   231,   233,   236,   240,   243,   245,   247,
     249,   252,   256,   260,   264,   266,   270,   274,   277,   279,
     281,   283,   286,   289,   292,   294,   296,   298,   300,   302,
     304,   306,   309,   312,   315,   318,   321,   324,   327,   333,
     337,   341,   343,   345,   347,   349,   351,   353,   355,   357,
     359,   361,   363,   366,   369,   372
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      63,     0,    -1,    -1,    64,    -1,    70,    -1,    65,    -1,
       1,    -1,    63,    63,    -1,    41,     3,     5,    -1,    41,
       3,     4,    -1,    14,    60,    33,    66,    34,    25,    -1,
      69,    25,    -1,    96,    25,    -1,    66,    66,    -1,    60,
      23,    60,    -1,     6,    -1,    13,     6,    -1,    11,     6,
      -1,    12,    -1,    11,    12,    -1,     9,    -1,    11,     9,
      -1,    10,    -1,    11,    10,    -1,    10,    10,    -1,    11,
      10,    10,    -1,     8,    -1,     7,    -1,    15,    -1,    94,
      -1,    60,    -1,    14,    60,    -1,    68,    60,    -1,    71,
      -1,    71,    86,    -1,    17,    60,    31,    32,    -1,    69,
      60,    31,    32,    -1,    69,    31,    72,    32,    -1,    17,
      31,    72,    32,    -1,    -1,    68,    75,    -1,    72,    24,
      72,    -1,    60,    31,    32,    -1,    60,    31,    74,    32,
      -1,    -1,    75,    -1,    74,    24,    74,    -1,    98,    -1,
      29,    31,    88,    32,    -1,    28,    87,    29,    31,    88,
      32,    -1,    26,    31,    88,    32,    87,    -1,    26,    31,
      88,    32,    87,    30,    87,    -1,    26,    31,    88,    32,
      87,    30,    78,    -1,    27,    31,    80,    25,    88,    32,
      -1,    27,    31,    80,    25,    88,    25,    81,    32,    -1,
      98,    -1,    96,    -1,    83,    -1,    81,    24,    83,    -1,
      76,    86,    -1,    78,    -1,    79,    86,    -1,    77,    -1,
      89,    -1,    88,    -1,    96,    -1,    69,    -1,    95,    -1,
      73,    -1,    82,    -1,    90,    -1,    97,    -1,    83,    25,
      -1,    84,    -1,    85,    84,    -1,    33,    85,    34,    -1,
      33,    34,    -1,    86,    -1,    84,    -1,    99,    -1,    43,
      88,    -1,    31,    88,    32,    -1,    88,    91,    88,    -1,
      88,    93,    88,    -1,    99,    -1,    31,    89,    32,    -1,
      89,    92,    89,    -1,    51,    60,    -1,    52,    -1,    53,
      -1,    54,    -1,    54,    98,    -1,    40,    40,    -1,    44,
      44,    -1,    39,    -1,    47,    -1,    48,    -1,    49,    -1,
      50,    -1,    37,    -1,    38,    -1,    42,    42,    -1,    43,
      42,    -1,    37,    42,    -1,    38,    42,    -1,    68,    39,
      -1,    60,    39,    -1,    94,    39,    -1,    88,    45,    98,
      22,    98,    -1,    69,    42,    98,    -1,   100,    42,    98,
      -1,    99,    -1,    83,    -1,   100,    -1,   101,    -1,   102,
      -1,    18,    -1,    19,    -1,    20,    -1,    21,    -1,    60,
      -1,    67,    -1,    39,   100,    -1,    39,   101,    -1,    40,
     100,    -1,    40,   102,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    36,    36,    37,    38,    39,    40,    41,    45,    46,
      50,    54,    55,    56,    60,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    84,    87,    88,    92,    93,    94,    95,    98,
      99,   100,   104,   105,   108,   109,   110,   114,   118,   122,
     126,   127,   128,   132,   133,   137,   138,   142,   143,   147,
     148,   149,   150,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   166,   170,   171,   175,   176,   180,   181,   185,
     186,   187,   188,   189,   193,   194,   195,   199,   200,   201,
     202,   203,   207,   208,   212,   213,   214,   215,   216,   220,
     221,   222,   223,   224,   225,   229,   230,   231,   235,   239,
     243,   246,   247,   251,   252,   253,   254,   255,   256,   257,
     262,   263,   267,   268,   272,   273
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INCLUDE", "HEADER", "LIBRARY", "CHAR",
  "DOUBLE", "FLOAT", "INT", "LONG", "UNSIGNED", "SHORT", "SIGNED",
  "STRUCT", "AUTO", "CONST", "VOID", "STRING_VALUE", "CHAR_VALUE",
  "INT_VALUE", "FLOAT_VALUE", "COLON", "DOT", "COMMA", "SEMICOLON", "IF",
  "FOR", "DO", "WHILE", "ELSE", "LBRACE", "RBRACE", "LCBRACE", "RCBRACE",
  "LSBRACE", "RSBRACE", "LABRACE", "RABRACE", "STAR", "AMPERSAND", "HASH",
  "EQUAL", "EXCLAMATION", "VBAR", "QMARK", "ARROW", "PLUS", "MINUS",
  "SLASH", "PERCENT", "GOTO", "CONTINUE", "BREAK", "RETURN", "SIZEOF",
  "STATIC", "TYPEDEF", "UNION", "VOLATILE", "ID", "OTHER", "$accept",
  "input", "include", "struct_declaration", "struct_field_list",
  "struct_field", "type", "type_name", "func_declaration", "func_def",
  "func_args_list_def", "func_call", "func_args_list_call", "func_arg",
  "while_iteration", "do_while", "if_else", "for_iteration",
  "for_initialization", "for_expression_list", "iteration", "expression",
  "expression_declaration", "expression_declaration_list", "bracket_body",
  "expression_declaration_or_bracket_body", "logical_expression",
  "arithmetic_expression", "jump_statement", "logical_operator",
  "arithmetic_operator", "comparison_operator", "array",
  "conditional_expression", "initialization", "assignment",
  "expression_value", "value", "variable_or_field", "star_variable",
  "ampersand_variable", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    62,    63,    63,    63,    63,    63,    63,    64,    64,
      65,    66,    66,    66,    67,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    69,    70,    70,    71,    71,    71,    71,    72,
      72,    72,    73,    73,    74,    74,    74,    75,    76,    77,
      78,    78,    78,    79,    79,    80,    80,    81,    81,    82,
      82,    82,    82,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    84,    85,    85,    86,    86,    87,    87,    88,
      88,    88,    88,    88,    89,    89,    89,    90,    90,    90,
      90,    90,    91,    91,    92,    92,    92,    92,    92,    93,
      93,    93,    93,    93,    93,    94,    94,    94,    95,    96,
      97,    98,    98,    99,    99,    99,    99,    99,    99,    99,
     100,   100,   101,   101,   102,   102
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     1,     1,     1,     2,     3,     3,
       6,     2,     2,     2,     3,     1,     2,     2,     1,     2,
       1,     2,     1,     2,     2,     3,     1,     1,     1,     1,
       1,     2,     2,     1,     2,     4,     4,     4,     4,     0,
       2,     3,     3,     4,     0,     1,     3,     1,     4,     6,
       5,     7,     7,     6,     8,     1,     1,     1,     3,     2,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     2,     3,     2,     1,     1,     1,
       2,     3,     3,     3,     1,     3,     3,     2,     1,     1,
       1,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     2,     2,     2,     5,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     6,    15,    27,    26,    20,    22,     0,    18,     0,
       0,    28,     0,     0,    30,     0,     3,     5,     0,     0,
       4,    33,    29,    24,    17,    21,    23,    19,    16,    31,
      39,     0,     0,   106,     1,     0,   105,    32,    39,     0,
       0,    34,   107,    25,     0,     0,     0,     0,     0,     9,
       8,     0,     0,   116,   117,   118,   119,     0,     0,     0,
       0,     0,    76,     0,     0,     0,     0,    88,    89,    90,
     120,   121,    66,    68,     0,    62,    60,     0,    69,     0,
      73,     0,    64,    63,    70,    67,    65,    71,    79,   113,
     114,   115,     0,     0,     0,    31,   105,    40,   112,    47,
      79,    39,    38,    35,    37,    36,     0,     0,    78,    77,
       0,     0,   120,     0,     0,   113,   122,   123,   124,   125,
       0,    80,    79,    87,    91,     0,    44,     0,    59,    61,
      72,    75,    74,    99,   100,     0,     0,     0,     0,     0,
       0,     0,    94,    95,    96,    97,    98,     0,     0,     0,
      13,    11,    12,    41,     0,     0,    56,    55,     0,     0,
      81,    85,    14,    42,     0,    45,   109,   103,   104,    92,
     101,   102,    93,     0,    82,    83,     0,    86,    84,   110,
      10,     0,     0,     0,    48,    44,    43,     0,    50,     0,
       0,    46,   108,     0,     0,    53,    49,    52,    51,     0,
      57,     0,    54,    58
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    35,    16,    17,   150,    71,    18,    72,    20,    21,
      47,    73,   164,   165,    74,    75,    76,    77,   155,   199,
      78,    98,   108,    81,   109,   110,    82,    83,    84,   140,
     147,   141,    22,    85,    86,    87,    99,   100,    89,    90,
      91
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -154
static const yytype_int16 yypact[] =
{
     159,  -154,  -154,  -154,  -154,  -154,    49,   187,  -154,    61,
       8,  -154,    -4,    71,    36,   177,  -154,  -154,   -21,    -2,
    -154,    44,    39,  -154,  -154,  -154,    74,  -154,  -154,    53,
     535,    65,    60,  -154,  -154,   159,  -154,  -154,   535,    67,
     195,  -154,  -154,  -154,   535,    27,   415,     0,    59,  -154,
    -154,    11,    70,  -154,  -154,  -154,  -154,    68,    81,   250,
      91,   533,  -154,    -9,   -27,   547,    32,  -154,  -154,   470,
       3,  -154,    83,  -154,    44,  -154,  -154,    44,  -154,   102,
    -154,   305,   474,    56,  -154,  -154,  -154,  -154,    98,    86,
    -154,  -154,   525,     6,   109,  -154,    -9,  -154,  -154,  -154,
      98,   535,  -154,  -154,  -154,  -154,   547,   470,  -154,  -154,
     106,   547,   115,   254,   193,  -154,  -154,  -154,  -154,  -154,
     547,    76,  -154,  -154,  -154,    79,   360,   470,  -154,  -154,
    -154,  -154,  -154,   107,   110,   100,   113,   116,   118,   470,
     547,   547,  -154,  -154,  -154,  -154,  -154,    90,   470,   138,
     535,  -154,  -154,   151,   309,   154,  -154,  -154,   149,   364,
    -154,  -154,  -154,  -154,    14,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,   160,    76,    76,    90,    56,  -154,  -154,
    -154,   250,   547,   547,  -154,   470,  -154,   470,   165,   537,
     419,   157,  -154,   250,   470,  -154,  -154,  -154,  -154,    30,
    -154,   470,  -154,  -154
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -154,   198,  -154,  -154,   167,  -154,   -18,     1,  -154,  -154,
     -31,  -154,    35,   166,  -154,  -154,    24,  -154,  -154,  -154,
    -154,   -37,   -32,  -154,     2,  -153,   -51,   -50,  -154,  -154,
    -154,  -154,  -154,  -154,   -35,  -154,   -54,   -40,   -59,   -46,
     163
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -85
static const yytype_int16 yytable[] =
{
      88,    19,   115,    79,   116,   118,   115,    51,    80,    94,
     113,   114,    46,    64,   121,   124,    19,   117,    36,    88,
      46,    88,    79,    41,   101,   122,   125,    30,   188,    38,
      63,   151,   102,   112,   126,   101,    19,   116,   185,    37,
     198,    88,    33,   104,    79,    93,   186,   115,   127,   132,
     117,   112,   115,   157,   201,   154,    31,    94,    39,    23,
     159,   115,   202,   -30,    49,    50,   122,    28,    29,   113,
     153,   122,   156,   166,    32,    33,   128,    40,    42,   129,
     122,   115,   115,    46,    43,   173,    44,    95,   115,   174,
     175,   103,   123,    93,   179,   142,    48,   177,    52,   106,
     122,   122,   105,   143,   144,   145,   146,   178,    53,    54,
      55,    56,   107,   133,   134,    94,   135,   115,   136,   137,
     138,   176,   111,   115,   115,   127,   114,   130,   148,    63,
      64,   189,   190,   192,   152,   158,   178,   -84,   125,   162,
     169,    88,   122,   122,    79,   -84,   -84,   -84,   -84,   167,
     112,    93,   168,    88,    88,   170,    79,   200,   171,    -2,
       1,    88,   172,   180,   203,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,   101,    12,    34,     1,   182,
     183,   185,   187,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    24,    12,   193,    25,    26,    15,    27,
      13,     2,     3,     4,     5,     6,     7,     8,     9,    45,
      11,    92,    97,    53,    54,    55,    56,   197,    13,    14,
     191,    57,    58,    59,    60,   161,    61,   119,     0,    62,
       0,     0,   142,     0,    63,    64,     0,    14,    65,     0,
     143,   144,   145,   146,     0,     0,    66,    67,    68,    69,
       0,     0,     0,     0,     0,    70,     2,     3,     4,     5,
       6,     7,     8,     9,    45,    11,     0,     0,    53,    54,
      55,    56,     0,     0,     0,     0,    57,    58,    59,    60,
       0,    61,     0,    40,     0,     0,   160,     0,     0,    63,
      64,   133,   134,    65,   135,     0,   136,   137,   138,     0,
       0,    66,    67,    68,    69,     0,     0,     0,     0,     0,
      70,     2,     3,     4,     5,     6,     7,     8,     9,    45,
      11,     0,     0,    53,    54,    55,    56,     0,     0,     0,
       0,    57,    58,    59,    60,     0,    61,     0,     0,   131,
       0,   181,     0,     0,    63,    64,   133,   134,    65,   135,
       0,   136,   137,   138,     0,     0,    66,    67,    68,    69,
       0,     0,     0,     0,     0,    70,     2,     3,     4,     5,
       6,     7,     8,     9,    45,    11,     0,     0,    53,    54,
      55,    56,     0,     0,     0,     0,    57,    58,    59,    60,
       0,    61,   163,     0,     0,     0,   184,     0,     0,    63,
      64,   133,   134,    65,   135,     0,   136,   137,   138,     0,
       0,    66,    67,    68,    69,     0,     0,     0,     0,     0,
      70,     2,     3,     4,     5,     6,     7,     8,     9,    45,
      11,     0,     0,    53,    54,    55,    56,     0,     0,     0,
       0,    57,    58,    59,    60,     0,    61,     0,     0,     0,
       0,   196,     0,     0,    96,    64,   133,   134,    65,   135,
       0,   136,   137,   138,     0,     0,    66,    67,    68,    69,
       0,     0,     0,     0,     0,    70,     2,     3,     4,     5,
       6,     7,     8,     9,    45,    11,     0,     0,    53,    54,
      55,    56,     0,     0,     0,     0,    57,    58,    59,    60,
       0,    61,     0,     0,     0,     0,     0,     0,     0,    63,
      64,   133,   134,    65,   135,     0,   136,   137,   138,   139,
       0,    66,    67,    68,    69,     0,     0,     0,     0,     0,
      70,     2,     3,     4,     5,     6,     7,     8,     9,    45,
      11,     2,     3,     4,     5,     6,     7,     8,     9,    45,
      11,    53,    54,    55,    56,     0,     0,     0,     0,   149,
       0,     0,   194,     0,    61,    53,    54,    55,    56,   195,
       0,     0,    63,    64,   133,   134,    65,   135,   120,   136,
     137,   138,     0,     0,     0,    14,    63,    64,     0,     0,
      65,     0,     0,   112,     0,    14,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   112
};

static const yytype_int16 yycheck[] =
{
      40,     0,    61,    40,    63,    64,    65,    38,    40,    44,
      61,    61,    30,    40,    65,    69,    15,    63,    39,    59,
      38,    61,    59,    21,    24,    65,    23,    31,   181,    31,
      39,    25,    32,    60,    31,    24,    35,    96,    24,    60,
     193,    81,    39,    32,    81,    44,    32,   106,    42,    81,
      96,    60,   111,   107,    24,   106,    60,    92,    60,    10,
     111,   120,    32,    60,     4,     5,   106,     6,    60,   120,
     101,   111,   107,   127,     3,    39,    74,    33,    39,    77,
     120,   140,   141,   101,    10,   139,    33,    60,   147,   140,
     141,    32,    60,    92,   148,    39,    31,   147,    31,    31,
     140,   141,    32,    47,    48,    49,    50,   147,    18,    19,
      20,    21,    31,    37,    38,   150,    40,   176,    42,    43,
      44,    31,    31,   182,   183,    42,   176,    25,    42,    39,
      40,   182,   183,   187,    25,    29,   176,    39,    23,    60,
      40,   181,   182,   183,   181,    47,    48,    49,    50,    42,
      60,   150,    42,   193,   194,    42,   193,   194,    42,     0,
       1,   201,    44,    25,   201,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    24,    17,     0,     1,    25,
      31,    24,    22,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,     6,    17,    30,     9,    10,     0,    12,
      41,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    44,    46,    18,    19,    20,    21,   193,    41,    60,
     185,    26,    27,    28,    29,    32,    31,    64,    -1,    34,
      -1,    -1,    39,    -1,    39,    40,    -1,    60,    43,    -1,
      47,    48,    49,    50,    -1,    -1,    51,    52,    53,    54,
      -1,    -1,    -1,    -1,    -1,    60,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    -1,    -1,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    26,    27,    28,    29,
      -1,    31,    -1,    33,    -1,    -1,    32,    -1,    -1,    39,
      40,    37,    38,    43,    40,    -1,    42,    43,    44,    -1,
      -1,    51,    52,    53,    54,    -1,    -1,    -1,    -1,    -1,
      60,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    -1,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    -1,    31,    -1,    -1,    34,
      -1,    32,    -1,    -1,    39,    40,    37,    38,    43,    40,
      -1,    42,    43,    44,    -1,    -1,    51,    52,    53,    54,
      -1,    -1,    -1,    -1,    -1,    60,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    -1,    -1,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    26,    27,    28,    29,
      -1,    31,    32,    -1,    -1,    -1,    32,    -1,    -1,    39,
      40,    37,    38,    43,    40,    -1,    42,    43,    44,    -1,
      -1,    51,    52,    53,    54,    -1,    -1,    -1,    -1,    -1,
      60,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    -1,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    -1,    31,    -1,    -1,    -1,
      -1,    32,    -1,    -1,    39,    40,    37,    38,    43,    40,
      -1,    42,    43,    44,    -1,    -1,    51,    52,    53,    54,
      -1,    -1,    -1,    -1,    -1,    60,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    -1,    -1,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    26,    27,    28,    29,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      40,    37,    38,    43,    40,    -1,    42,    43,    44,    45,
      -1,    51,    52,    53,    54,    -1,    -1,    -1,    -1,    -1,
      60,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    25,    -1,    31,    18,    19,    20,    21,    32,
      -1,    -1,    39,    40,    37,    38,    43,    40,    31,    42,
      43,    44,    -1,    -1,    -1,    60,    39,    40,    -1,    -1,
      43,    -1,    -1,    60,    -1,    60,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    60
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    17,    41,    60,    63,    64,    65,    68,    69,
      70,    71,    94,    10,     6,     9,    10,    12,     6,    60,
      31,    60,     3,    39,     0,    63,    39,    60,    31,    60,
      33,    86,    39,    10,    33,    14,    68,    72,    31,     4,
       5,    72,    31,    18,    19,    20,    21,    26,    27,    28,
      29,    31,    34,    39,    40,    43,    51,    52,    53,    54,
      60,    67,    69,    73,    76,    77,    78,    79,    82,    83,
      84,    85,    88,    89,    90,    95,    96,    97,    99,   100,
     101,   102,    66,    69,    96,    60,    39,    75,    83,    98,
      99,    24,    32,    32,    32,    32,    31,    31,    84,    86,
      87,    31,    60,    88,    89,   100,   100,   101,   100,   102,
      31,    88,    99,    60,    98,    23,    31,    42,    86,    86,
      25,    34,    84,    37,    38,    40,    42,    43,    44,    45,
      91,    93,    39,    47,    48,    49,    50,    92,    42,    34,
      66,    25,    25,    72,    88,    80,    96,    98,    29,    88,
      32,    32,    60,    32,    74,    75,    98,    42,    42,    40,
      42,    42,    44,    98,    88,    88,    31,    89,    99,    98,
      25,    32,    25,    31,    32,    24,    32,    22,    87,    88,
      88,    74,    98,    30,    25,    32,    32,    78,    87,    81,
      83,    24,    32,    83
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
      

/* Line 1455 of yacc.c  */
#line 1678 "parser.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 276 "parser.y"


int main()
{
    yyparse();
    return 0;
}
