/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "Parser.y" /* yacc.c:339  */

#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>

using namespace std;
int i=0;

extern int yylex();
extern void yyerror(const char*);
char* concat(char *s1,char *s2);

#line 79 "Parser.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "Parser.tab.h".  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    DOCTYPE = 258,
    HTMLOP = 259,
    HTMLCL = 260,
    HEADOP = 261,
    HEADCL = 262,
    TITLEOP = 263,
    TITLECL = 264,
    BODYOP = 265,
    BODYCL = 266,
    BPHRASEOP = 267,
    BPHRASECL = 268,
    PHRASEOP = 269,
    PHRASECL = 270,
    GTPHOP = 271,
    GTPHCL = 272,
    TEXT = 273,
    AOPOP = 274,
    AOP = 275,
    ACL = 276,
    ATTRIBUTE = 277,
    ATTRIBUTEVAL = 278,
    DIVOP = 279,
    DIVCL = 280,
    IMGOP = 281,
    IMGCL = 282,
    FONTOP = 283,
    FONTOOP = 284,
    FONTCL = 285,
    LOP = 286,
    LCL = 287,
    LIOP = 288,
    LICL = 289,
    FIGOP = 290,
    FIGCL = 291,
    FIGCAPOP = 292,
    FIGCAPCL = 293,
    DLOP = 294,
    DLCL = 295,
    DTOP = 296,
    DTCL = 297,
    DDOP = 298,
    DDCL = 299,
    TABOP = 300,
    TABCL = 301,
    CAPOP = 302,
    CAPCL = 303,
    TROP = 304,
    TRCL = 305,
    THOP = 306,
    THCL = 307,
    TDOP = 308,
    TDCL = 309,
    BR = 310,
    COMMENT = 311,
    SPCHAR = 312
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 15 "Parser.y" /* yacc.c:355  */

	char* object;
	char* value;

#line 182 "Parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 199 "Parser.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   826

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  152
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  259

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   312

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      55,    56,    57
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    59,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    70,    71,    74,    75,    78,    79,    82,    83,    84,
      85,    88,    89,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   103,   104,   105,   106,   107,   108,   111,   112,
     115,   116,   117,   118,   119,   120,   121,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   137,   138,   139,   140,
     141,   142,   145,   146,   149,   150,   151,   152,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     169,   170,   171,   172,   173,   176,   177,   178,   179,   180,
     181,   182,   183,   186,   187,   188,   189,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   220,   221,   222,   223,   224,   225,   226,   227,   230,
     231,   232,   233,   234,   235,   236,   237,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   254,
     255,   258,   259
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DOCTYPE", "HTMLOP", "HTMLCL", "HEADOP",
  "HEADCL", "TITLEOP", "TITLECL", "BODYOP", "BODYCL", "BPHRASEOP",
  "BPHRASECL", "PHRASEOP", "PHRASECL", "GTPHOP", "GTPHCL", "TEXT", "AOPOP",
  "AOP", "ACL", "ATTRIBUTE", "ATTRIBUTEVAL", "DIVOP", "DIVCL", "IMGOP",
  "IMGCL", "FONTOP", "FONTOOP", "FONTCL", "LOP", "LCL", "LIOP", "LICL",
  "FIGOP", "FIGCL", "FIGCAPOP", "FIGCAPCL", "DLOP", "DLCL", "DTOP", "DTCL",
  "DDOP", "DDCL", "TABOP", "TABCL", "CAPOP", "CAPCL", "TROP", "TRCL",
  "THOP", "THCL", "TDOP", "TDCL", "BR", "COMMENT", "SPCHAR", "$accept",
  "st", "head", "title", "body", "misc", "consume", "flow", "phraseopen",
  "phrases", "phr", "gtph", "list", "listitem", "div", "dl", "dt", "dd",
  "caption", "table", "tr", "th", "td", "figure", "figcap", "img", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312
};
# endif

#define YYPACT_NINF -191

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-191)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      16,     8,    32,    10,   129,  -191,    95,   112,    18,    28,
    -191,  -191,    75,    34,  -191,     6,    42,  -191,   100,   146,
    -191,   445,   -11,   295,   241,    65,   321,  -191,  -191,   689,
      56,  -191,    69,  -191,  -191,    71,  -191,  -191,  -191,    17,
    -191,   689,   208,   181,  -191,    77,   100,   689,   159,    61,
    -191,   689,    57,  -191,    64,  -191,  -191,   689,   481,   485,
    -191,   689,   507,    74,  -191,   445,   689,   423,   426,  -191,
     689,   535,   290,   213,  -191,  -191,  -191,  -191,  -191,  -191,
    -191,  -191,   128,   277,    82,  -191,   689,   208,   689,    67,
    -191,   100,  -191,   689,  -191,   689,   -11,  -191,  -191,    58,
     295,   689,   481,  -191,  -191,    66,   553,   689,   507,    85,
    -191,    86,    89,    92,   445,   689,   423,  -191,   606,    97,
      -1,   546,   581,   599,   531,    87,   535,   280,  -191,   128,
    -191,  -191,  -191,  -191,   689,   131,  -191,  -191,  -191,  -191,
    -191,  -191,   295,  -191,   689,    81,  -191,   633,   689,   655,
     362,   689,   109,  -191,   113,   606,   606,   689,   290,   290,
     592,   488,   107,   102,   640,   108,   115,   606,   689,   132,
     280,  -191,  -191,   689,  -191,  -191,   689,   689,   138,  -191,
     666,   137,   134,   655,   680,  -191,   689,   689,   606,  -191,
     136,  -191,   290,   581,   686,   699,   712,   599,   721,   725,
     714,   606,  -191,   689,  -191,  -191,  -191,   689,   655,   730,
     739,   423,   147,   655,  -191,  -191,   689,  -191,  -191,   581,
     581,   746,   290,   734,  -191,   599,   599,   753,   290,   766,
    -191,  -191,  -191,   655,   655,   770,  -191,   423,  -191,  -191,
    -191,  -191,   581,  -191,   290,  -191,  -191,   599,  -191,   290,
    -191,  -191,   655,  -191,  -191,  -191,  -191,  -191,  -191
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     2,     0,     0,     0,     4,     0,     0,     0,     0,
       1,     3,     0,     0,    12,     0,     0,    16,     0,     0,
      19,     0,     0,     0,     0,     0,     0,    18,    17,    27,
       0,     6,     0,    10,     5,     0,     9,    13,    22,     0,
      11,    34,     0,     0,    23,     0,     0,    50,     0,     0,
      24,    64,     0,    28,     0,   152,    20,    57,     0,     0,
      25,   141,     0,     0,    31,     0,    68,     0,     0,    29,
     105,     0,     0,     0,    30,    26,    15,     8,     7,    14,
      21,    33,    40,     0,     0,    38,    37,     0,    35,     0,
      48,     0,    51,    49,    65,    67,     0,    60,    63,     0,
       0,    59,     0,   146,   150,     0,     0,   140,     0,     0,
      72,     0,     0,     0,     0,    69,     0,   106,    94,     0,
       0,   107,     0,     0,     0,     0,     0,    43,    42,    44,
      41,    36,    39,    32,    53,     0,    47,    66,   151,    62,
      56,    61,     0,   149,   138,     0,   145,     0,    70,     0,
       0,    76,     0,    73,     0,    96,    93,    97,     0,     0,
     111,   121,     0,     0,   129,     0,     0,   108,   102,     0,
      46,    45,    52,    55,    58,   143,   139,   137,     0,    74,
      87,     0,    83,     0,     0,    77,    71,    78,    95,    98,
       0,   115,     0,     0,   123,   122,   109,     0,   131,   130,
     110,   112,   104,    99,    54,   144,   142,   148,     0,    91,
      85,     0,    80,     0,    75,    79,   101,   116,   125,     0,
       0,   124,     0,   113,   133,     0,     0,   132,     0,   114,
     100,   147,    88,     0,     0,    89,    84,     0,    81,   103,
     127,   126,     0,   117,     0,   135,   134,     0,   118,     0,
      92,    86,     0,    82,   128,   119,   136,   120,    90
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -191,  -191,   183,  -191,     1,   202,   292,    -7,   -25,   -17,
     104,  -191,   -73,    90,   -61,  -191,  -115,  -177,    63,  -191,
    -151,  -190,  -179,  -191,    98,   101
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     8,    16,     9,    29,   124,   181,    44,    45,
      85,    50,    60,   100,    53,    69,   113,   182,   120,    74,
     125,   163,   166,    64,   106,    56
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      30,   154,    49,   218,   109,    13,   212,   190,   191,    32,
      10,    54,     4,    35,    52,    37,    55,    63,   224,     1,
       2,    89,    75,    31,    20,    84,    79,   140,     7,   240,
     241,   232,    22,    33,    81,    20,   238,     5,     6,    36,
      90,   217,     7,    22,    94,   157,   245,   246,   158,    40,
      97,    99,   254,   152,   103,   105,   250,   251,    52,   110,
     112,    27,    28,   117,   119,   128,   135,    76,   256,   174,
      84,   243,    27,    28,    77,   258,    78,   248,    93,   131,
      34,   133,    95,    20,   134,     7,   136,    96,   137,    65,
      88,    22,   139,   255,   141,    99,   236,   130,   257,   145,
     146,   105,    14,    15,   143,    66,    67,    52,   153,   112,
     107,   108,   171,    41,    42,   162,   165,   176,    20,   119,
      27,    28,   253,    17,    18,   148,    22,   172,    19,   149,
      20,   150,   151,   168,    11,     6,    21,   175,    22,     7,
     178,   179,    42,    23,   185,   156,    20,    24,   173,   186,
     189,    25,   196,   187,    22,    27,    28,    26,    46,   195,
      42,   202,   199,    47,    20,   200,   204,    27,    28,   205,
     206,    91,    22,    87,   207,   211,    92,    20,   203,   214,
     215,   210,   216,    27,    28,    22,   162,    12,   237,   169,
     165,   132,   142,     0,    86,    87,   230,   138,     0,    20,
     231,    27,    28,     0,   112,     0,   147,    22,     0,   239,
       0,     0,   162,   162,    27,    28,     0,    38,   165,   165,
      38,    38,    42,    82,     0,    38,    20,    38,    38,     0,
     112,    20,     0,     0,    22,   162,    27,    28,     0,    22,
     165,    80,     0,     0,    38,    80,     0,     0,    38,     0,
      80,     0,     0,    18,     0,     0,     0,    19,     0,    20,
     126,    80,     0,    27,    28,    21,     0,    22,    27,    28,
      80,     0,    23,     0,    38,    80,    24,    61,    62,     0,
      25,     0,     0,     0,    38,    80,    26,     0,     0,    38,
       0,    87,   129,    38,    87,    20,    27,    28,    20,     0,
       0,     0,    38,    22,     0,     0,    22,    39,    20,     0,
      43,    48,     0,    20,     0,    59,    22,    68,    73,     0,
      38,    22,     0,    38,     0,     0,    80,    57,    58,    80,
       0,    38,    27,    28,    83,    27,    28,     0,    43,    20,
     121,   122,     0,   123,    38,    27,    28,    22,     0,     0,
      27,    28,    38,     0,     0,     0,     0,    80,    38,     0,
      38,    38,    80,    38,     0,     0,    38,    70,    71,    38,
      72,     0,    80,     0,   127,     0,    27,    28,     0,    83,
      20,     0,    38,    43,     0,     0,    80,     0,    22,     0,
      80,     0,    59,     0,    38,     0,    80,    38,    38,     0,
      80,    38,    38,    80,     0,   183,     0,     0,     0,     0,
     155,    80,    38,   160,     0,     0,     0,    27,    28,     0,
       0,   170,     0,    80,    38,    80,     0,     0,     0,    80,
      38,    80,     0,     0,    59,    18,     0,    80,     0,    19,
       0,    20,   184,     0,    20,     0,    38,    21,   188,    22,
     114,    38,    22,   194,    23,     0,   198,    18,    24,   201,
       0,    19,    25,    20,     0,   111,   115,   116,    26,    21,
      51,    22,   209,     0,     0,     0,    23,     0,    27,    28,
      24,    27,    28,     0,    25,     0,     0,   221,   223,     0,
      26,   227,   229,    18,     0,     0,     0,    19,     0,    20,
      27,    28,   235,    20,     0,    21,    20,    22,     0,     0,
       0,    22,    23,     0,    22,    98,    24,   101,   102,    18,
      25,     0,     0,    19,     0,    20,    26,     0,     0,     0,
       0,    21,     0,    22,     0,     0,    27,    28,    23,   193,
      27,    28,    24,    27,    28,   104,    25,    18,     0,    20,
       0,    19,    26,    20,     0,     0,     0,    22,     0,    21,
       0,    22,    27,    28,    20,    18,    23,     0,     0,    19,
      24,    20,    22,     0,    25,     0,     0,    21,     0,    22,
      26,   167,     0,   118,    23,     0,    27,    28,    24,   144,
      27,    28,    25,    18,     0,   159,     0,    19,    26,    20,
       0,    27,    28,     0,     0,    21,     0,    22,    27,    28,
      20,    18,    23,     0,     0,    19,    24,    20,    22,     0,
      25,     0,     0,    21,    20,    22,    26,     0,     0,     0,
      23,     0,    22,   161,    24,     0,    27,    28,    25,     0,
       0,   192,     0,     0,    26,    18,     0,    27,    28,    19,
       0,    20,     0,   164,    27,    28,     0,    21,    20,    22,
       0,    27,    28,     0,    23,     0,    22,    18,    24,   177,
       0,    19,    25,    20,     0,     0,     0,     0,    26,    21,
       0,    22,     0,     0,    20,     0,    23,     0,    27,    28,
      24,     0,    22,   197,    25,    27,    28,     0,    20,   180,
      26,    18,     0,     0,    20,    19,    22,    20,     0,   208,
      27,    28,    22,    21,     0,    22,     0,    20,     0,     0,
      23,    27,    28,   213,    24,    22,     0,     0,    25,     0,
      20,     0,    20,     0,    26,    27,    28,   219,    22,    20,
      22,    27,    28,    20,    27,    28,     0,    22,    20,     0,
     220,    22,    20,     0,    27,    28,    22,    20,     0,     0,
      22,   222,     0,   228,    20,    22,     0,    27,    28,    27,
      28,    20,    22,   233,   225,     0,    27,    28,   226,    22,
      27,    28,   234,   244,    20,    27,    28,     0,    20,    27,
      28,     0,    22,     0,    27,    28,    22,   242,     0,     0,
       0,    27,    28,     0,     0,     0,   247,     0,    27,    28,
       0,     0,     0,   252,     0,   249,     0,     0,     0,     0,
       0,    27,    28,     0,     0,    27,    28
};

static const yytype_int16 yycheck[] =
{
       7,   116,    19,   193,    65,     4,   183,   158,   159,     8,
       0,    22,     4,    12,    21,     9,    27,    24,   197,     3,
       4,    46,    29,     5,    18,    42,     9,   100,    10,   219,
     220,   208,    26,     5,    41,    18,   213,     5,     6,     5,
      47,   192,    10,    26,    51,    46,   225,   226,    49,     7,
      57,    58,   242,   114,    61,    62,   233,   234,    65,    66,
      67,    55,    56,    70,    71,    82,    91,    11,   247,   142,
      87,   222,    55,    56,     5,   252,     5,   228,    17,    86,
       5,    88,    25,    18,    17,    10,    93,    23,    95,    24,
      13,    26,    34,   244,   101,   102,   211,    15,   249,   106,
     107,   108,     7,     8,    38,    40,    41,   114,   115,   116,
      36,    37,   129,    13,    14,   122,   123,    36,    18,   126,
      55,    56,   237,    11,    12,    40,    26,   134,    16,    43,
      18,    42,    40,    46,     5,     6,    24,   144,    26,    10,
     147,   148,    14,    31,   151,    48,    18,    35,    17,    40,
     157,    39,    50,    40,    26,    55,    56,    45,    12,    52,
      14,   168,    54,    17,    18,    50,   173,    55,    56,   176,
     177,    12,    26,    14,    36,    41,    17,    18,    46,   186,
     187,    44,    46,    55,    56,    26,   193,     4,    41,   126,
     197,    87,   102,    -1,    13,    14,   203,    96,    -1,    18,
     207,    55,    56,    -1,   211,    -1,   108,    26,    -1,   216,
      -1,    -1,   219,   220,    55,    56,    -1,    15,   225,   226,
      18,    19,    14,    15,    -1,    23,    18,    25,    26,    -1,
     237,    18,    -1,    -1,    26,   242,    55,    56,    -1,    26,
     247,    39,    -1,    -1,    42,    43,    -1,    -1,    46,    -1,
      48,    -1,    -1,    12,    -1,    -1,    -1,    16,    -1,    18,
      47,    59,    -1,    55,    56,    24,    -1,    26,    55,    56,
      68,    -1,    31,    -1,    72,    73,    35,    36,    37,    -1,
      39,    -1,    -1,    -1,    82,    83,    45,    -1,    -1,    87,
      -1,    14,    15,    91,    14,    18,    55,    56,    18,    -1,
      -1,    -1,   100,    26,    -1,    -1,    26,    15,    18,    -1,
      18,    19,    -1,    18,    -1,    23,    26,    25,    26,    -1,
     118,    26,    -1,   121,    -1,    -1,   124,    32,    33,   127,
      -1,   129,    55,    56,    42,    55,    56,    -1,    46,    18,
      50,    51,    -1,    53,   142,    55,    56,    26,    -1,    -1,
      55,    56,   150,    -1,    -1,    -1,    -1,   155,   156,    -1,
     158,   159,   160,   161,    -1,    -1,   164,    46,    47,   167,
      49,    -1,   170,    -1,    82,    -1,    55,    56,    -1,    87,
      18,    -1,   180,    91,    -1,    -1,   184,    -1,    26,    -1,
     188,    -1,   100,    -1,   192,    -1,   194,   195,   196,    -1,
     198,   199,   200,   201,    -1,    43,    -1,    -1,    -1,    -1,
     118,   209,   210,   121,    -1,    -1,    -1,    55,    56,    -1,
      -1,   129,    -1,   221,   222,   223,    -1,    -1,    -1,   227,
     228,   229,    -1,    -1,   142,    12,    -1,   235,    -1,    16,
      -1,    18,   150,    -1,    18,    -1,   244,    24,   156,    26,
      24,   249,    26,   161,    31,    -1,   164,    12,    35,   167,
      -1,    16,    39,    18,    -1,    42,    40,    41,    45,    24,
      25,    26,   180,    -1,    -1,    -1,    31,    -1,    55,    56,
      35,    55,    56,    -1,    39,    -1,    -1,   195,   196,    -1,
      45,   199,   200,    12,    -1,    -1,    -1,    16,    -1,    18,
      55,    56,   210,    18,    -1,    24,    18,    26,    -1,    -1,
      -1,    26,    31,    -1,    26,    34,    35,    32,    33,    12,
      39,    -1,    -1,    16,    -1,    18,    45,    -1,    -1,    -1,
      -1,    24,    -1,    26,    -1,    -1,    55,    56,    31,    51,
      55,    56,    35,    55,    56,    38,    39,    12,    -1,    18,
      -1,    16,    45,    18,    -1,    -1,    -1,    26,    -1,    24,
      -1,    26,    55,    56,    18,    12,    31,    -1,    -1,    16,
      35,    18,    26,    -1,    39,    -1,    -1,    24,    -1,    26,
      45,    50,    -1,    48,    31,    -1,    55,    56,    35,    36,
      55,    56,    39,    12,    -1,    49,    -1,    16,    45,    18,
      -1,    55,    56,    -1,    -1,    24,    -1,    26,    55,    56,
      18,    12,    31,    -1,    -1,    16,    35,    18,    26,    -1,
      39,    -1,    -1,    24,    18,    26,    45,    -1,    -1,    -1,
      31,    -1,    26,    52,    35,    -1,    55,    56,    39,    -1,
      -1,    49,    -1,    -1,    45,    12,    -1,    55,    56,    16,
      -1,    18,    -1,    54,    55,    56,    -1,    24,    18,    26,
      -1,    55,    56,    -1,    31,    -1,    26,    12,    35,    36,
      -1,    16,    39,    18,    -1,    -1,    -1,    -1,    45,    24,
      -1,    26,    -1,    -1,    18,    -1,    31,    -1,    55,    56,
      35,    -1,    26,    53,    39,    55,    56,    -1,    18,    44,
      45,    12,    -1,    -1,    18,    16,    26,    18,    -1,    43,
      55,    56,    26,    24,    -1,    26,    -1,    18,    -1,    -1,
      31,    55,    56,    43,    35,    26,    -1,    -1,    39,    -1,
      18,    -1,    18,    -1,    45,    55,    56,    51,    26,    18,
      26,    55,    56,    18,    55,    56,    -1,    26,    18,    -1,
      51,    26,    18,    -1,    55,    56,    26,    18,    -1,    -1,
      26,    49,    -1,    49,    18,    26,    -1,    55,    56,    55,
      56,    18,    26,    43,    53,    -1,    55,    56,    53,    26,
      55,    56,    43,    49,    18,    55,    56,    -1,    18,    55,
      56,    -1,    26,    -1,    55,    56,    26,    51,    -1,    -1,
      -1,    55,    56,    -1,    -1,    -1,    53,    -1,    55,    56,
      -1,    -1,    -1,    43,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    55,    56,    -1,    -1,    55,    56
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,    59,     4,     5,     6,    10,    60,    62,
       0,     5,    60,    62,     7,     8,    61,    11,    12,    16,
      18,    24,    26,    31,    35,    39,    45,    55,    56,    63,
      65,     5,    62,     5,     5,    62,     5,     9,    63,    64,
       7,    13,    14,    64,    66,    67,    12,    17,    64,    67,
      69,    25,    65,    72,    22,    27,    83,    32,    33,    64,
      70,    36,    37,    65,    81,    24,    40,    41,    64,    73,
      46,    47,    49,    64,    77,    65,    11,     5,     5,     9,
      63,    65,    15,    64,    67,    68,    13,    14,    13,    66,
      65,    12,    17,    17,    65,    25,    23,    65,    34,    65,
      71,    32,    33,    65,    38,    65,    82,    36,    37,    72,
      65,    42,    65,    74,    24,    40,    41,    65,    48,    65,
      76,    50,    51,    53,    64,    78,    47,    64,    67,    15,
      15,    65,    68,    65,    17,    66,    65,    65,    83,    34,
      70,    65,    71,    38,    36,    65,    65,    82,    40,    43,
      42,    40,    72,    65,    74,    64,    48,    46,    49,    49,
      64,    52,    65,    79,    54,    65,    80,    50,    46,    76,
      64,    67,    65,    17,    70,    65,    36,    36,    65,    65,
      44,    65,    75,    43,    64,    65,    40,    40,    64,    65,
      78,    78,    49,    51,    64,    52,    50,    53,    64,    54,
      50,    64,    65,    46,    65,    65,    65,    36,    43,    64,
      44,    41,    75,    43,    65,    65,    46,    78,    79,    51,
      51,    64,    49,    64,    80,    53,    53,    64,    49,    64,
      65,    65,    75,    43,    43,    64,    74,    41,    75,    65,
      79,    79,    51,    78,    49,    80,    80,    53,    78,    49,
      75,    75,    43,    74,    79,    78,    80,    78,    75
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    60,    60,    61,    61,    62,    62,    63,    63,    63,
      63,    64,    64,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    66,    66,    66,    66,    66,    66,    67,    67,
      68,    68,    68,    68,    68,    68,    68,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    70,    70,    70,    70,
      70,    70,    71,    71,    72,    72,    72,    72,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      74,    74,    74,    74,    74,    75,    75,    75,    75,    75,
      75,    75,    75,    76,    76,    76,    76,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    79,    79,    79,    79,    79,    79,    79,    79,    80,
      80,    80,    80,    80,    80,    80,    80,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    82,
      82,    83,    83
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     2,     4,     3,     5,     4,     4,
       3,     3,     2,     2,     3,     3,     2,     1,     1,     1,
       2,     2,     1,     2,     2,     2,     2,     1,     2,     2,
       2,     2,     3,     2,     1,     2,     3,     2,     2,     3,
       1,     2,     2,     2,     2,     3,     3,     3,     2,     2,
       1,     2,     4,     3,     5,     4,     3,     1,     4,     2,
       2,     3,     2,     1,     1,     2,     3,     2,     1,     2,
       3,     4,     2,     3,     4,     5,     3,     4,     4,     5,
       4,     5,     6,     3,     5,     2,     4,     1,     3,     3,
       5,     2,     4,     2,     1,     3,     2,     3,     4,     4,
       5,     5,     3,     6,     4,     1,     2,     1,     2,     3,
       3,     2,     3,     4,     4,     3,     4,     5,     5,     6,
       6,     1,     2,     2,     3,     3,     4,     4,     5,     1,
       2,     2,     3,     3,     4,     4,     5,     4,     3,     4,
       2,     1,     5,     4,     5,     3,     2,     6,     5,     2,
       1,     3,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 59 "Parser.y" /* yacc.c:1646  */
    { cout<<(yyvsp[0].value)<<endl; }
#line 1572 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 60 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); cout<<concat(p,(yyvsp[0].value))<<endl; }
#line 1578 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 61 "Parser.y" /* yacc.c:1646  */
    { cout<<concat((yyvsp[-1].value),(yyvsp[0].value))<<endl; }
#line 1584 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 62 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*y=concat(p,(yyvsp[-1].value)); cout<<concat(y,(yyvsp[0].value))<<endl; }
#line 1590 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 63 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); cout<<concat(p,(yyvsp[0].value))<<endl; }
#line 1596 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 64 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*y=concat(p,(yyvsp[-2].value)),*x=concat(y,(yyvsp[-1].value)); cout<<concat(x,(yyvsp[0].value))<<endl;}
#line 1602 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 65 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*y=concat(p,(yyvsp[-1].value)); cout<<concat(y,(yyvsp[0].value))<<endl; }
#line 1608 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 66 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*y=concat(p,(yyvsp[-1].value)); cout<<concat(y,(yyvsp[0].value))<<endl; }
#line 1614 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 67 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); cout<<concat(p,(yyvsp[0].value))<<endl; }
#line 1620 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 70 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 1626 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 71 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1632 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 74 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1638 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 75 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 1644 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 78 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 1650 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 79 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1656 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 82 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 1662 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 83 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 1668 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 84 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 1674 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 85 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=strcat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1680 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 88 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1686 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 89 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 1692 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 92 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1698 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 93 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1704 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 94 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1710 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 95 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1716 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 96 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value);}
#line 1722 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 97 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1728 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 98 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1734 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 99 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1740 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 100 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1746 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 103 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 1752 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 104 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1758 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 105 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=(yyvsp[0].value); }
#line 1764 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 106 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1770 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 107 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-2].value),(yyvsp[-1].value)); }
#line 1776 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 108 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=(yyvsp[-1].value); }
#line 1782 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 111 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1788 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 112 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 1794 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 115 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 1800 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 116 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1806 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 117 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1812 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 118 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1818 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 119 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1824 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 120 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 1830 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 121 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 1836 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 126 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 1842 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 127 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1848 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 128 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1854 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 129 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 1860 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 130 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1866 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 131 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value)); (yyval.value)=concat(x,(yyvsp[0].value)); }
#line 1872 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 132 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 1878 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 133 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value));}
#line 1884 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 134 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value)); (yyval.value)=concat(x,(yyvsp[0].value)); }
#line 1890 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 137 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 1896 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 138 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 1902 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 139 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value)); (yyval.value)=concat(x,(yyvsp[0].value)); }
#line 1908 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 140 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1914 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 141 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1920 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 142 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 1926 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 145 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1932 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 146 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 1938 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 149 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 1944 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 150 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1950 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 151 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 1956 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 152 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1962 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 155 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 1968 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 156 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1974 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 157 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 1980 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 158 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value)); (yyval.value)=concat(x,(yyvsp[0].value)); }
#line 1986 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 159 "Parser.y" /* yacc.c:1646  */
    {concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1992 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 160 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 1998 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 161 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value)); (yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2004 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 162 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2010 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 163 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2016 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 164 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value)); (yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2022 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 165 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value)); (yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2028 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 166 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2034 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 169 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value)); (yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2040 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 170 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2046 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 171 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-5].value),(yyvsp[-4].value)),*x=concat(p,(yyvsp[-3].value)),*y=concat(x,(yyvsp[-2].value)),*z=concat(y,(yyvsp[-1].value)); (yyval.value)=concat(z,(yyvsp[0].value)); }
#line 2052 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 172 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2058 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 173 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2064 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 176 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2070 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 177 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value)); (yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2076 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 178 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2082 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 179 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2088 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 180 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2094 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 181 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2100 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 182 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2106 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 183 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2112 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 186 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2118 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 187 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2124 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 188 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2130 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 189 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2136 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 192 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2142 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 193 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2148 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 194 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2154 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 195 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2160 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 196 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2166 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 197 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2172 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 198 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-5].value),(yyvsp[-4].value)),*x=concat(p,(yyvsp[-3].value)),*y=concat(x,(yyvsp[-2].value)),*z=concat(y,(yyvsp[-1].value)); (yyval.value)=concat(z,(yyvsp[0].value)); }
#line 2178 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 199 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2184 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 200 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2190 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 201 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2196 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 204 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2202 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 205 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2208 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 206 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2214 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 207 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2220 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 208 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2226 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 209 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2232 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 210 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2238 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 211 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2244 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 212 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2250 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 213 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2256 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 214 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2262 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 215 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2268 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 216 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-5].value),(yyvsp[-4].value)),*x=concat(p,(yyvsp[-3].value)),*y=concat(x,(yyvsp[-2].value)),*z=concat(y,(yyvsp[-1].value)); (yyval.value)=concat(z,(yyvsp[0].value)); }
#line 2274 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 217 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-5].value),(yyvsp[-4].value)),*x=concat(p,(yyvsp[-3].value)),*y=concat(x,(yyvsp[-2].value)),*z=concat(y,(yyvsp[-1].value)); (yyval.value)=concat(z,(yyvsp[0].value)); }
#line 2280 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 220 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2286 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 221 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2292 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 222 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2298 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 223 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2304 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 224 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2310 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 225 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2316 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 226 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2322 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 227 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2328 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 230 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2334 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 231 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2340 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 232 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2346 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 233 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2352 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 234 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2358 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 235 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2364 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 236 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2370 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 237 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2376 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 240 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2382 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 241 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2388 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 242 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2394 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 243 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2400 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 244 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2406 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 245 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2412 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 246 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2418 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 247 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2424 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 248 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2430 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 249 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2436 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 250 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-5].value),(yyvsp[-4].value)),*x=concat(p,(yyvsp[-3].value)),*y=concat(x,(yyvsp[-2].value)),*z=concat(y,(yyvsp[-1].value)); (yyval.value)=concat(z,(yyvsp[0].value)); }
#line 2442 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 251 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2448 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 254 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2454 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 255 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2460 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 258 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2466 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 259 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2472 "Parser.tab.c" /* yacc.c:1646  */
    break;


#line 2476 "Parser.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 262 "Parser.y" /* yacc.c:1906  */

void yyerror(const char *msg){
	printf("%s\n",msg);
}

int main(int argc,char **argv){
	extern FILE *yyin;
	if(argc >= 2){
		if(!(yyin = fopen(argv[1],"r"))){
			printf("File Error");
			return 0;
		}
	}
	yyparse();
	return 0;
}  
char* concat(char *s1,char *s2){
	char *p = (char *)malloc(1+strlen(s1)+strlen(s2));
	strcat(p,s1);
	strcat(p,s2);
	return p;	
}
