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
    SPCHAR = 312,
    SYMBOL = 313
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 15 "Parser.y" /* yacc.c:355  */

	char* object;
	char* value;

#line 183 "Parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 200 "Parser.tab.c" /* yacc.c:358  */

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
#define YYLAST   1185

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  184
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  322

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   313

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
      55,    56,    57,    58
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    58,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    69,    70,    73,    74,    77,    78,    81,    82,    83,
      84,    85,    88,    89,    92,    93,    94,    97,    98,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     114,   115,   116,   117,   118,   119,   122,   123,   126,   127,
     128,   129,   130,   131,   132,   135,   136,   137,   138,   139,
     142,   143,   144,   145,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   160,   161,   162,   163,   164,   165,
     168,   169,   172,   173,   174,   175,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   192,   193,
     194,   195,   196,   199,   200,   201,   202,   203,   204,   205,
     206,   209,   210,   211,   212,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   243,
     244,   245,   246,   247,   248,   249,   250,   253,   254,   255,
     256,   257,   258,   259,   260,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   277,   278,   281,
     282,   285,   286,   287,   288,   289,   290,   291,   292,   295,
     296,   297,   298,   299,   300
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
  "THOP", "THCL", "TDOP", "TDCL", "BR", "COMMENT", "SPCHAR", "SYMBOL",
  "$accept", "st", "head", "title", "body", "misc", "consume", "miscph",
  "consumeph", "flow", "phraseopen", "phrases", "phr", "fontph", "atagph",
  "gtph", "list", "listitem", "div", "dl", "dt", "dd", "caption", "table",
  "tr", "th", "td", "figure", "figcap", "img", "atag", "font", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,   313
};
# endif

#define YYPACT_NINF -246

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-246)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      49,    13,    26,    70,    40,  -246,    52,   491,    17,    77,
    -246,  -246,    75,    84,  -246,     0,    93,  -246,   301,   135,
    -246,    11,   558,    59,    -8,   148,   536,   372,   239,  -246,
    -246,  -246,   958,    86,  -246,    98,  -246,  -246,   105,  -246,
    -246,  -246,    90,  -246,   958,   310,    21,     6,  -246,  -246,
     319,  -246,    99,   301,   958,   224,   100,  -246,   584,    95,
    -246,   958,    96,  -246,   104,  -246,  -246,   106,   958,  -246,
     958,   610,   869,  -246,   958,   636,    78,  -246,   558,   958,
     677,  1002,  -246,   958,   718,   426,   503,  -246,  -246,  -246,
    -246,  -246,  -246,  -246,  -246,   940,   367,   107,  -246,   443,
     108,  -246,   112,   940,  -246,   958,   310,  -246,   958,   113,
    -246,   301,   958,   958,   958,   115,   118,  -246,   958,    59,
     121,   124,  -246,  -246,   117,   148,   958,   610,  -246,  -246,
     119,   736,   958,   636,   102,  -246,   128,   114,   122,   558,
     958,   677,  -246,   569,   110,    45,   562,   777,   795,   551,
     126,   718,   997,  -246,   940,  -246,  -246,   997,   146,   154,
     147,   670,   153,  -246,  -246,  -246,   958,   167,  -246,  -246,
    -246,   958,   836,  -246,  -246,   854,   958,  -246,  -246,  -246,
     148,  -246,   958,   150,  -246,   895,   958,   917,   159,   958,
     149,  -246,   152,   569,   569,   958,   426,   426,   729,   788,
     142,   137,   850,   143,   155,   569,   958,   161,   997,  -246,
    -246,   659,   951,  -246,  -246,  -246,   958,  -246,   958,   177,
     958,   180,  -246,  -246,  -246,   958,   958,   176,  -246,   992,
     172,   179,   917,  1013,  -246,   958,   958,   569,  -246,   181,
    -246,   426,   777,  1019,  1028,  1033,   795,  1046,  1055,  1067,
     569,  -246,   958,  -246,   201,  -246,   974,   193,  -246,  -246,
     958,  -246,   958,  -246,  -246,   958,   917,  1072,  1077,   677,
     185,   917,  -246,  -246,   958,  -246,  -246,   777,   777,  1088,
     426,  1100,  -246,   795,   795,  1111,   426,  1116,  -246,  -246,
    -246,  -246,  -246,  -246,  -246,  -246,   917,   917,  1127,  -246,
     677,  -246,  -246,  -246,  -246,   777,  -246,   426,  -246,  -246,
     795,  -246,   426,  -246,  -246,   917,  -246,  -246,  -246,  -246,
    -246,  -246
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     2,     0,     0,     0,     4,     0,     0,     0,     0,
       1,     3,     0,     0,    12,     0,     0,    16,     0,     0,
      19,     0,     0,     0,     0,     0,     0,     0,     0,    18,
      17,    21,    33,     0,     6,     0,    10,     5,     0,     9,
      13,    23,     0,    11,    42,     0,     0,     0,    24,    28,
       0,    29,     0,     0,    67,     0,     0,    30,     0,     0,
      38,    82,     0,    34,     0,   170,    20,     0,     0,    39,
      75,     0,     0,    31,   159,     0,     0,    37,     0,    86,
       0,     0,    35,   123,     0,     0,     0,    36,    32,    15,
       8,     7,    14,    22,    41,    48,     0,     0,    46,     0,
       0,    25,     0,     0,    26,    45,     0,    27,    43,     0,
      66,     0,    68,    65,   176,     0,     0,    83,    85,     0,
       0,     0,    78,    81,     0,     0,    77,     0,   164,   168,
       0,     0,   158,     0,     0,    90,     0,     0,     0,     0,
      87,     0,   124,   112,     0,     0,   125,     0,     0,     0,
       0,     0,    51,    50,    52,    49,    62,     0,     0,     0,
       0,     0,     0,    44,    47,    40,    71,     0,    69,    64,
     173,   175,     0,    84,   169,     0,   181,    80,    74,    79,
       0,   167,   156,     0,   163,     0,    88,     0,     0,    94,
       0,    91,     0,   114,   111,   115,     0,     0,   129,   139,
       0,     0,   147,     0,     0,   126,   120,     0,    54,    53,
      61,     0,     0,    59,    57,    70,    73,   172,   178,     0,
     179,     0,   184,    76,   161,   157,   155,     0,    92,   105,
       0,   101,     0,     0,    95,    89,    96,   113,   116,     0,
     133,     0,     0,   141,   140,   127,     0,   149,   148,   128,
     130,   122,   117,    63,     0,    55,     0,     0,    72,   177,
     174,   182,   180,   162,   160,   166,     0,   109,   103,     0,
      98,     0,    93,    97,   119,   134,   143,     0,     0,   142,
       0,   131,   151,     0,     0,   150,     0,   132,   118,    60,
      58,    56,   171,   183,   165,   106,     0,     0,   107,   102,
       0,    99,   121,   145,   144,     0,   135,     0,   153,   152,
       0,   136,     0,   110,   104,     0,   100,   146,   137,   154,
     138,   108
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -246,  -246,   226,  -246,    12,   206,   295,   -48,   -16,    -7,
     -49,   -11,   131,  -246,  -246,  -246,  -102,   116,   -73,  -246,
    -130,  -222,    81,  -246,  -184,  -236,  -245,  -246,   127,   130,
    -246,  -246
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     8,    16,     9,    32,   149,    49,    50,   230,
      51,    52,    98,   104,   101,    57,    73,   125,    63,    82,
     138,   231,   145,    87,   150,   201,   204,    77,   131,    66,
      60,    69
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      33,   282,   107,    55,   109,   134,   276,   107,    56,    40,
     270,   192,   239,   240,    67,    62,    13,     4,    20,    76,
      35,    68,    34,   178,    38,    88,    23,     7,   102,    96,
      58,     5,     6,    59,    97,   103,     7,    94,   308,   309,
      99,   303,   304,   100,   295,    11,     6,   110,   107,   301,
       7,   115,     1,     2,   117,    29,    30,   275,    31,    14,
      15,   121,   167,   122,   124,   319,   190,   128,   130,   317,
      10,    62,   135,   137,   313,   314,   142,   144,   223,   152,
      37,    64,    36,   157,   153,     7,    65,   161,   158,    39,
      96,   195,   162,   321,   196,    97,   306,    89,   163,    92,
      43,   165,   311,    90,   107,   168,   169,   170,    20,   107,
      91,   173,   108,   107,   132,   133,    23,   113,   116,   179,
     124,   118,   155,   318,   183,   184,   130,   119,   320,   120,
     166,   159,    62,   191,   137,   160,   171,   172,   208,   299,
     200,   203,   186,   209,   144,    29,    30,    53,    31,    45,
     175,   177,    54,    20,   176,    46,   188,   181,   194,   215,
     107,    23,   189,    47,   217,   219,    20,   210,   221,   222,
     316,   187,   206,   211,    23,   224,   212,    20,   227,   228,
      70,    71,   234,   214,   216,    23,   225,   245,   238,   235,
      29,    30,   236,    31,   244,   157,   256,   248,   260,   251,
     254,   257,   232,    29,    30,   249,    31,   252,   107,   258,
     262,   259,   265,   261,    29,    30,   268,    31,   263,   264,
     269,    41,   289,   291,    48,    48,   300,   274,   272,   273,
      12,    41,   207,    41,    41,   200,   111,   164,   106,   203,
       0,   112,    20,   180,    46,   288,     0,     0,    93,   174,
      23,    48,    47,   292,     0,   293,    48,    20,   294,    48,
     185,    48,   137,     0,     0,    23,     0,   302,     0,     0,
     200,   200,     0,     0,     0,     0,   203,   203,    93,    29,
      30,     0,    31,     0,     0,    83,    84,    93,    85,     0,
       0,    41,    93,   137,    29,    30,     0,    31,   200,     0,
       0,    48,    48,   203,     0,    48,     0,     0,     0,    48,
      42,     0,    48,     0,    44,    45,     0,    48,     0,    20,
      72,    46,    81,    86,    45,    95,     0,    23,    20,    47,
      46,    41,   105,   106,     0,     0,    23,    20,    47,    46,
       0,     0,     0,     0,     0,    23,     0,    47,     0,    41,
       0,     0,    41,     0,     0,    93,    29,    30,    48,    31,
      48,     0,     0,    48,     0,    29,    30,    48,    31,     0,
       0,     0,     0,     0,    29,    30,     0,    31,     0,     0,
       0,   106,   154,     0,     0,    20,    41,    46,     0,     0,
      20,     0,     0,    23,    41,    47,    78,     0,    23,    93,
      41,     0,    41,    41,    93,    41,     0,     0,    41,     0,
       0,    41,    79,    80,    48,     0,     0,    48,    48,     0,
      72,     0,    29,    30,     0,    31,     0,    29,    30,     0,
      31,     0,     0,     0,     0,    41,     0,     0,   193,    93,
       0,   198,     0,    93,    20,     0,     0,    41,     0,    93,
      41,    41,    23,    93,    41,    41,    93,    45,     0,     0,
       0,    20,    48,    46,   156,     0,     0,     0,     0,    23,
       0,    47,     0,    93,    41,    72,   146,   147,     0,   148,
       0,    29,    30,   233,    31,    93,    41,    93,     0,   237,
       0,    93,    41,    93,   243,     0,     0,   247,    29,    30,
     250,    31,    17,    18,    93,     0,     0,    19,     0,    20,
       0,    21,     0,    41,     0,    22,     0,    23,    41,    24,
       0,    20,    25,     0,   267,     0,    26,     0,     0,    23,
      27,     0,     0,     0,     0,     0,    28,     0,     0,   279,
     281,     0,     0,   285,   287,     0,    29,    30,    18,    31,
     151,     0,    19,     0,    20,     0,    21,     0,    29,    30,
      22,    31,    23,   298,    24,     0,     0,    25,     0,    20,
      18,    26,    74,    75,    19,    27,    20,    23,    21,     0,
      20,    28,    22,    61,    23,     0,    24,    20,    23,    25,
       0,    29,    30,    26,    31,    23,    18,    27,     0,     0,
      19,   205,    20,    28,    21,   114,    29,    30,    22,    31,
      23,   197,    24,    29,    30,    25,    31,    29,    30,    26,
      31,     0,    18,    27,    29,    30,    19,    31,    20,    28,
      21,     0,     0,     0,    22,     0,    23,     0,    24,    29,
      30,    25,    31,     0,   123,    26,     0,     0,    18,    27,
       0,     0,    19,     0,    20,    28,    21,     0,     0,     0,
      22,     0,    23,     0,    24,    29,    30,    25,    31,     0,
       0,    26,     0,    45,   129,    27,     0,    20,     0,    46,
     253,    28,     0,     0,   106,    23,     0,    47,    20,    18,
      46,    29,    30,    19,    31,    20,    23,    21,    47,     0,
     213,    22,     0,    23,     0,    24,     0,     0,    25,     0,
       0,     0,    26,     0,    29,    30,    27,    31,     0,   136,
       0,     0,    28,     0,     0,    29,    30,     0,    31,     0,
      18,     0,    29,    30,    19,    31,    20,     0,    21,     0,
       0,     0,    22,     0,    23,     0,    24,    20,    18,    25,
       0,     0,    19,    26,    20,    23,    21,    27,     0,     0,
      22,     0,    23,    28,    24,     0,   143,    25,     0,     0,
       0,    26,   182,    29,    30,    27,    31,     0,   241,     0,
       0,    28,     0,     0,    29,    30,     0,    31,     0,    18,
       0,    29,    30,    19,    31,    20,     0,    21,     0,     0,
       0,    22,     0,    23,     0,    24,    20,    18,    25,     0,
       0,    19,    26,    20,    23,    21,    27,     0,     0,    22,
       0,    23,    28,    24,     0,     0,    25,     0,     0,   199,
      26,     0,    29,    30,    27,    31,     0,     0,     0,   242,
      28,     0,     0,    29,    30,     0,    31,     0,    18,   202,
      29,    30,    19,    31,    20,     0,    21,   218,     0,     0,
      22,     0,    23,     0,    24,     0,    18,    25,    20,     0,
      19,    26,    20,     0,    21,    27,    23,     0,    22,     0,
      23,    28,    24,     0,   220,    25,     0,    20,     0,    26,
       0,    29,    30,    27,    31,    23,     0,     0,     0,    28,
       0,   126,   127,   246,     0,    29,    30,    18,    31,    29,
      30,    19,    31,    20,     0,    21,     0,     0,     0,    22,
       0,    23,     0,    24,    29,    30,    25,    31,     0,    18,
      26,   226,     0,    19,    27,    20,     0,    21,     0,     0,
      28,    22,     0,    23,     0,    24,     0,     0,    25,     0,
      29,    30,    26,    31,    45,     0,    27,     0,    20,     0,
      46,   229,    28,     0,     0,    45,    23,     0,    47,    20,
      18,    46,    29,    30,    19,    31,    20,    23,    21,    47,
       0,   255,    22,     0,    23,     0,    24,     0,   106,    25,
       0,     0,    20,    26,    46,    29,    30,    27,    31,     0,
      23,     0,    47,    28,   290,     0,    29,    30,     0,    31,
      20,   106,     0,    29,    30,    20,    31,    46,    23,     0,
      20,     0,     0,    23,     0,    47,   139,     0,    23,    29,
      30,    20,    31,     0,     0,   266,     0,    20,     0,    23,
       0,     0,   140,   141,     0,    23,    20,    29,    30,     0,
      31,    20,    29,    30,    23,    31,   271,    29,    30,    23,
      31,     0,     0,     0,    20,     0,     0,     0,    29,    30,
     277,    31,    23,    20,    29,    30,     0,    31,     0,   278,
       0,    23,   280,    29,    30,    20,    31,     0,    29,    30,
      20,    31,     0,    23,     0,    20,     0,     0,    23,   283,
       0,    29,    30,    23,    31,     0,    20,     0,   284,     0,
      29,    30,     0,    31,    23,   296,   286,     0,    20,     0,
     297,     0,    29,    30,     0,    31,    23,    29,    30,    20,
      31,     0,    29,    30,    20,    31,     0,    23,     0,   305,
       0,     0,    23,    29,    30,    20,    31,     0,     0,   307,
       0,     0,     0,    23,     0,    29,    30,     0,    31,     0,
       0,     0,     0,     0,   310,   312,    29,    30,     0,    31,
     315,    29,    30,     0,    31,     0,     0,     0,     0,     0,
       0,     0,    29,    30,     0,    31
};

static const yytype_int16 yycheck[] =
{
       7,   246,    50,    19,    53,    78,   242,    55,    19,     9,
     232,   141,   196,   197,    22,    22,     4,     4,    18,    26,
       8,    29,     5,   125,    12,    32,    26,    10,    22,    45,
      19,     5,     6,    22,    45,    29,    10,    44,   283,   284,
      19,   277,   278,    22,   266,     5,     6,    54,    96,   271,
      10,    58,     3,     4,    61,    55,    56,   241,    58,     7,
       8,    68,   111,    70,    71,   310,   139,    74,    75,   305,
       0,    78,    79,    80,   296,   297,    83,    84,   180,    95,
       5,    22,     5,    99,    95,    10,    27,   103,    99,     5,
     106,    46,   103,   315,    49,   106,   280,    11,   105,     9,
       7,   108,   286,     5,   152,   112,   113,   114,    18,   157,
       5,   118,    13,   161,    36,    37,    26,    17,    23,   126,
     127,    25,    15,   307,   131,   132,   133,    23,   312,    23,
      17,    23,   139,   140,   141,    23,    21,    19,   154,   269,
     147,   148,    40,   154,   151,    55,    56,    12,    58,    14,
      29,    34,    17,    18,    30,    20,    42,    38,    48,   166,
     208,    26,    40,    28,   171,   172,    18,    21,   175,   176,
     300,    43,    46,    19,    26,   182,    29,    18,   185,   186,
      32,    33,   189,    30,    17,    26,    36,    50,   195,    40,
      55,    56,    40,    58,    52,   211,   212,    54,    21,   206,
     211,   212,    43,    55,    56,    50,    58,    46,   256,   216,
      30,   218,    36,   220,    55,    56,    44,    58,   225,   226,
      41,    15,    21,    30,    18,    19,    41,    46,   235,   236,
       4,    25,   151,    27,    28,   242,    12,   106,    14,   246,
      -1,    17,    18,   127,    20,   252,    -1,    -1,    42,   119,
      26,    45,    28,   260,    -1,   262,    50,    18,   265,    53,
     133,    55,   269,    -1,    -1,    26,    -1,   274,    -1,    -1,
     277,   278,    -1,    -1,    -1,    -1,   283,   284,    72,    55,
      56,    -1,    58,    -1,    -1,    46,    47,    81,    49,    -1,
      -1,    85,    86,   300,    55,    56,    -1,    58,   305,    -1,
      -1,    95,    96,   310,    -1,    99,    -1,    -1,    -1,   103,
      15,    -1,   106,    -1,    13,    14,    -1,   111,    -1,    18,
      25,    20,    27,    28,    14,    15,    -1,    26,    18,    28,
      20,   125,    13,    14,    -1,    -1,    26,    18,    28,    20,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    28,    -1,   143,
      -1,    -1,   146,    -1,    -1,   149,    55,    56,   152,    58,
     154,    -1,    -1,   157,    -1,    55,    56,   161,    58,    -1,
      -1,    -1,    -1,    -1,    55,    56,    -1,    58,    -1,    -1,
      -1,    14,    15,    -1,    -1,    18,   180,    20,    -1,    -1,
      18,    -1,    -1,    26,   188,    28,    24,    -1,    26,   193,
     194,    -1,   196,   197,   198,   199,    -1,    -1,   202,    -1,
      -1,   205,    40,    41,   208,    -1,    -1,   211,   212,    -1,
     125,    -1,    55,    56,    -1,    58,    -1,    55,    56,    -1,
      58,    -1,    -1,    -1,    -1,   229,    -1,    -1,   143,   233,
      -1,   146,    -1,   237,    18,    -1,    -1,   241,    -1,   243,
     244,   245,    26,   247,   248,   249,   250,    14,    -1,    -1,
      -1,    18,   256,    20,    21,    -1,    -1,    -1,    -1,    26,
      -1,    28,    -1,   267,   268,   180,    50,    51,    -1,    53,
      -1,    55,    56,   188,    58,   279,   280,   281,    -1,   194,
      -1,   285,   286,   287,   199,    -1,    -1,   202,    55,    56,
     205,    58,    11,    12,   298,    -1,    -1,    16,    -1,    18,
      -1,    20,    -1,   307,    -1,    24,    -1,    26,   312,    28,
      -1,    18,    31,    -1,   229,    -1,    35,    -1,    -1,    26,
      39,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,   244,
     245,    -1,    -1,   248,   249,    -1,    55,    56,    12,    58,
      47,    -1,    16,    -1,    18,    -1,    20,    -1,    55,    56,
      24,    58,    26,   268,    28,    -1,    -1,    31,    -1,    18,
      12,    35,    36,    37,    16,    39,    18,    26,    20,    -1,
      18,    45,    24,    25,    26,    -1,    28,    18,    26,    31,
      -1,    55,    56,    35,    58,    26,    12,    39,    -1,    -1,
      16,    50,    18,    45,    20,    21,    55,    56,    24,    58,
      26,    49,    28,    55,    56,    31,    58,    55,    56,    35,
      58,    -1,    12,    39,    55,    56,    16,    58,    18,    45,
      20,    -1,    -1,    -1,    24,    -1,    26,    -1,    28,    55,
      56,    31,    58,    -1,    34,    35,    -1,    -1,    12,    39,
      -1,    -1,    16,    -1,    18,    45,    20,    -1,    -1,    -1,
      24,    -1,    26,    -1,    28,    55,    56,    31,    58,    -1,
      -1,    35,    -1,    14,    38,    39,    -1,    18,    -1,    20,
      21,    45,    -1,    -1,    14,    26,    -1,    28,    18,    12,
      20,    55,    56,    16,    58,    18,    26,    20,    28,    -1,
      30,    24,    -1,    26,    -1,    28,    -1,    -1,    31,    -1,
      -1,    -1,    35,    -1,    55,    56,    39,    58,    -1,    42,
      -1,    -1,    45,    -1,    -1,    55,    56,    -1,    58,    -1,
      12,    -1,    55,    56,    16,    58,    18,    -1,    20,    -1,
      -1,    -1,    24,    -1,    26,    -1,    28,    18,    12,    31,
      -1,    -1,    16,    35,    18,    26,    20,    39,    -1,    -1,
      24,    -1,    26,    45,    28,    -1,    48,    31,    -1,    -1,
      -1,    35,    36,    55,    56,    39,    58,    -1,    49,    -1,
      -1,    45,    -1,    -1,    55,    56,    -1,    58,    -1,    12,
      -1,    55,    56,    16,    58,    18,    -1,    20,    -1,    -1,
      -1,    24,    -1,    26,    -1,    28,    18,    12,    31,    -1,
      -1,    16,    35,    18,    26,    20,    39,    -1,    -1,    24,
      -1,    26,    45,    28,    -1,    -1,    31,    -1,    -1,    52,
      35,    -1,    55,    56,    39,    58,    -1,    -1,    -1,    51,
      45,    -1,    -1,    55,    56,    -1,    58,    -1,    12,    54,
      55,    56,    16,    58,    18,    -1,    20,    21,    -1,    -1,
      24,    -1,    26,    -1,    28,    -1,    12,    31,    18,    -1,
      16,    35,    18,    -1,    20,    39,    26,    -1,    24,    -1,
      26,    45,    28,    -1,    30,    31,    -1,    18,    -1,    35,
      -1,    55,    56,    39,    58,    26,    -1,    -1,    -1,    45,
      -1,    32,    33,    53,    -1,    55,    56,    12,    58,    55,
      56,    16,    58,    18,    -1,    20,    -1,    -1,    -1,    24,
      -1,    26,    -1,    28,    55,    56,    31,    58,    -1,    12,
      35,    36,    -1,    16,    39,    18,    -1,    20,    -1,    -1,
      45,    24,    -1,    26,    -1,    28,    -1,    -1,    31,    -1,
      55,    56,    35,    58,    14,    -1,    39,    -1,    18,    -1,
      20,    44,    45,    -1,    -1,    14,    26,    -1,    28,    18,
      12,    20,    55,    56,    16,    58,    18,    26,    20,    28,
      -1,    30,    24,    -1,    26,    -1,    28,    -1,    14,    31,
      -1,    -1,    18,    35,    20,    55,    56,    39,    58,    -1,
      26,    -1,    28,    45,    30,    -1,    55,    56,    -1,    58,
      18,    14,    -1,    55,    56,    18,    58,    20,    26,    -1,
      18,    -1,    -1,    26,    -1,    28,    24,    -1,    26,    55,
      56,    18,    58,    -1,    -1,    43,    -1,    18,    -1,    26,
      -1,    -1,    40,    41,    -1,    26,    18,    55,    56,    -1,
      58,    18,    55,    56,    26,    58,    43,    55,    56,    26,
      58,    -1,    -1,    -1,    18,    -1,    -1,    -1,    55,    56,
      51,    58,    26,    18,    55,    56,    -1,    58,    -1,    51,
      -1,    26,    49,    55,    56,    18,    58,    -1,    55,    56,
      18,    58,    -1,    26,    -1,    18,    -1,    -1,    26,    53,
      -1,    55,    56,    26,    58,    -1,    18,    -1,    53,    -1,
      55,    56,    -1,    58,    26,    43,    49,    -1,    18,    -1,
      43,    -1,    55,    56,    -1,    58,    26,    55,    56,    18,
      58,    -1,    55,    56,    18,    58,    -1,    26,    -1,    51,
      -1,    -1,    26,    55,    56,    18,    58,    -1,    -1,    49,
      -1,    -1,    -1,    26,    -1,    55,    56,    -1,    58,    -1,
      -1,    -1,    -1,    -1,    53,    49,    55,    56,    -1,    58,
      43,    55,    56,    -1,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    -1,    58
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,    60,     4,     5,     6,    10,    61,    63,
       0,     5,    61,    63,     7,     8,    62,    11,    12,    16,
      18,    20,    24,    26,    28,    31,    35,    39,    45,    55,
      56,    58,    64,    68,     5,    63,     5,     5,    63,     5,
       9,    64,    65,     7,    13,    14,    20,    28,    64,    66,
      67,    69,    70,    12,    17,    67,    70,    74,    19,    22,
      89,    25,    68,    77,    22,    27,    88,    22,    29,    90,
      32,    33,    65,    75,    36,    37,    68,    86,    24,    40,
      41,    65,    78,    46,    47,    49,    65,    82,    68,    11,
       5,     5,     9,    64,    68,    15,    67,    70,    71,    19,
      22,    73,    22,    29,    72,    13,    14,    66,    13,    69,
      68,    12,    17,    17,    21,    68,    23,    68,    25,    23,
      23,    68,    68,    34,    68,    76,    32,    33,    68,    38,
      68,    87,    36,    37,    77,    68,    42,    68,    79,    24,
      40,    41,    68,    48,    68,    81,    50,    51,    53,    65,
      83,    47,    67,    70,    15,    15,    21,    67,    70,    23,
      23,    67,    70,    68,    71,    68,    17,    69,    68,    68,
      68,    21,    19,    68,    88,    29,    30,    34,    75,    68,
      76,    38,    36,    68,    68,    87,    40,    43,    42,    40,
      77,    68,    79,    65,    48,    46,    49,    49,    65,    52,
      68,    84,    54,    68,    85,    50,    46,    81,    67,    70,
      21,    19,    29,    30,    30,    68,    17,    68,    21,    68,
      30,    68,    68,    75,    68,    36,    36,    68,    68,    44,
      68,    80,    43,    65,    68,    40,    40,    65,    68,    83,
      83,    49,    51,    65,    52,    50,    53,    65,    54,    50,
      65,    68,    46,    21,    70,    30,    67,    70,    68,    68,
      21,    68,    30,    68,    68,    36,    43,    65,    44,    41,
      80,    43,    68,    68,    46,    83,    84,    51,    51,    65,
      49,    65,    85,    53,    53,    65,    49,    65,    68,    21,
      30,    30,    68,    68,    68,    80,    43,    43,    65,    79,
      41,    80,    68,    84,    84,    51,    83,    49,    85,    85,
      53,    83,    49,    80,    80,    43,    79,    84,    83,    85,
      83,    80
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    59,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    61,    61,    62,    62,    63,    63,    64,    64,    64,
      64,    64,    65,    65,    66,    66,    66,    67,    67,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      69,    69,    69,    69,    69,    69,    70,    70,    71,    71,
      71,    71,    71,    71,    71,    72,    72,    72,    72,    72,
      73,    73,    73,    73,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    75,    75,    75,    75,    75,    75,
      76,    76,    77,    77,    77,    77,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    79,    79,
      79,    79,    79,    80,    80,    80,    80,    80,    80,    80,
      80,    81,    81,    81,    81,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    84,
      84,    84,    84,    84,    84,    84,    84,    85,    85,    85,
      85,    85,    85,    85,    85,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    87,    87,    88,
      88,    89,    89,    89,    89,    89,    89,    89,    89,    90,
      90,    90,    90,    90,    90
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     2,     4,     3,     5,     4,     4,
       3,     3,     2,     2,     3,     3,     2,     1,     1,     1,
       2,     1,     2,     1,     1,     2,     2,     2,     1,     2,
       2,     2,     2,     1,     2,     2,     2,     2,     2,     2,
       3,     2,     1,     2,     3,     2,     2,     3,     1,     2,
       2,     2,     2,     3,     3,     4,     5,     3,     5,     3,
       5,     3,     2,     4,     3,     2,     2,     1,     2,     3,
       4,     3,     5,     4,     3,     1,     4,     2,     2,     3,
       2,     1,     1,     2,     3,     2,     1,     2,     3,     4,
       2,     3,     4,     5,     3,     4,     4,     5,     4,     5,
       6,     3,     5,     2,     4,     1,     3,     3,     5,     2,
       4,     2,     1,     3,     2,     3,     4,     4,     5,     5,
       3,     6,     4,     1,     2,     1,     2,     3,     3,     2,
       3,     4,     4,     3,     4,     5,     5,     6,     6,     1,
       2,     2,     3,     3,     4,     4,     5,     1,     2,     2,
       3,     3,     4,     4,     5,     4,     3,     4,     2,     1,
       5,     4,     5,     3,     2,     6,     5,     2,     1,     3,
       1,     6,     4,     3,     5,     3,     2,     5,     4,     4,
       5,     3,     5,     6,     4
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
#line 58 "Parser.y" /* yacc.c:1646  */
    { cout<<(yyvsp[0].value)<<endl; }
#line 1678 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 59 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); cout<<concat(p,(yyvsp[0].value))<<endl; }
#line 1684 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 60 "Parser.y" /* yacc.c:1646  */
    { cout<<concat((yyvsp[-1].value),(yyvsp[0].value))<<endl; }
#line 1690 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 61 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*y=concat(p,(yyvsp[-1].value)); cout<<concat(y,(yyvsp[0].value))<<endl; }
#line 1696 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 62 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); cout<<concat(p,(yyvsp[0].value))<<endl; }
#line 1702 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 63 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*y=concat(p,(yyvsp[-2].value)),*x=concat(y,(yyvsp[-1].value)); cout<<concat(x,(yyvsp[0].value))<<endl;}
#line 1708 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 64 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*y=concat(p,(yyvsp[-1].value)); cout<<concat(y,(yyvsp[0].value))<<endl; }
#line 1714 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 65 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*y=concat(p,(yyvsp[-1].value)); cout<<concat(y,(yyvsp[0].value))<<endl; }
#line 1720 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 66 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); cout<<concat(p,(yyvsp[0].value))<<endl; }
#line 1726 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 69 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 1732 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 70 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1738 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 73 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1744 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 74 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 1750 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 77 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 1756 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 78 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1762 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 81 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 1768 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 82 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 1774 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 83 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 1780 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 84 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1786 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 85 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 1792 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 88 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1798 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 89 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 1804 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 92 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 1810 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 93 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1816 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 94 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1822 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 97 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1828 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 98 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 1834 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 101 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1840 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 102 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1846 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 103 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1852 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 104 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1858 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 105 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value);}
#line 1864 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 106 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1870 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 107 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1876 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 108 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1882 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 109 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1888 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 110 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1894 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 111 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1900 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 114 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 1906 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 115 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1912 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 116 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=(yyvsp[0].value); }
#line 1918 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 117 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1924 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 118 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 1930 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 119 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1936 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 122 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1942 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 123 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 1948 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 126 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 1954 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 127 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1960 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 128 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1966 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 129 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1972 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 130 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1978 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 131 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 1984 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 132 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 1990 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 135 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 1996 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 136 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2002 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 137 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2008 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 138 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2014 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 139 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2020 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 142 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2026 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 143 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2032 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 144 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2038 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 145 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2044 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 148 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2050 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 149 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2056 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 150 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2062 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 151 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2068 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 152 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2074 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 153 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2080 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 154 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value)); (yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2086 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 155 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2092 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 156 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value));}
#line 2098 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 157 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value)); (yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2104 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 160 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2110 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 161 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2116 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 162 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value)); (yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2122 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 163 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2128 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 164 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2134 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 165 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2140 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 168 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2146 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 169 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2152 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 172 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2158 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 173 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2164 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 174 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2170 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 175 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2176 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 178 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2182 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 179 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2188 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 180 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2194 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 181 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value)); (yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2200 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 182 "Parser.y" /* yacc.c:1646  */
    {concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2206 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 183 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2212 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 184 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value)); (yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2218 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 185 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2224 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 186 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2230 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 187 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value)); (yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2236 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 188 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value)); (yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2242 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 189 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2248 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 192 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value)); (yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2254 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 193 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2260 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 194 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-5].value),(yyvsp[-4].value)),*x=concat(p,(yyvsp[-3].value)),*y=concat(x,(yyvsp[-2].value)),*z=concat(y,(yyvsp[-1].value)); (yyval.value)=concat(z,(yyvsp[0].value)); }
#line 2266 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 195 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2272 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 196 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2278 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 199 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2284 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 200 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value)); (yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2290 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 201 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2296 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 202 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2302 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 203 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2308 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 204 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2314 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 205 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2320 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 206 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2326 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 209 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2332 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 210 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2338 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 211 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2344 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 212 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2350 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 215 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2356 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 216 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2362 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 217 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2368 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 218 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2374 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 219 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2380 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 220 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2386 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 221 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-5].value),(yyvsp[-4].value)),*x=concat(p,(yyvsp[-3].value)),*y=concat(x,(yyvsp[-2].value)),*z=concat(y,(yyvsp[-1].value)); (yyval.value)=concat(z,(yyvsp[0].value)); }
#line 2392 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 222 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2398 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 223 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2404 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 224 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2410 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 227 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2416 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 228 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2422 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 229 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2428 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 230 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2434 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 231 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2440 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 232 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2446 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 233 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2452 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 234 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2458 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 235 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2464 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 236 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2470 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 237 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2476 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 238 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2482 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 239 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-5].value),(yyvsp[-4].value)),*x=concat(p,(yyvsp[-3].value)),*y=concat(x,(yyvsp[-2].value)),*z=concat(y,(yyvsp[-1].value)); (yyval.value)=concat(z,(yyvsp[0].value)); }
#line 2488 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 240 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-5].value),(yyvsp[-4].value)),*x=concat(p,(yyvsp[-3].value)),*y=concat(x,(yyvsp[-2].value)),*z=concat(y,(yyvsp[-1].value)); (yyval.value)=concat(z,(yyvsp[0].value)); }
#line 2494 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 243 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2500 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 244 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2506 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 245 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2512 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 246 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2518 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 247 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2524 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 248 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2530 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 249 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2536 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 250 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2542 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 253 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2548 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 254 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2554 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 255 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2560 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 256 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2566 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 257 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2572 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 258 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2578 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 259 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2584 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 260 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2590 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 263 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2596 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 264 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2602 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 265 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2608 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 266 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2614 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 267 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2620 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 268 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2626 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 269 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2632 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 270 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2638 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 271 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2644 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 272 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2650 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 273 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-5].value),(yyvsp[-4].value)),*x=concat(p,(yyvsp[-3].value)),*y=concat(x,(yyvsp[-2].value)),*z=concat(y,(yyvsp[-1].value)); (yyval.value)=concat(z,(yyvsp[0].value)); }
#line 2656 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 274 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2662 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 277 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2668 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 278 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2674 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 281 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2680 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 282 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2686 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 285 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-5].value),(yyvsp[-4].value)),*x=concat(p,(yyvsp[-3].value)),*y=concat(x,(yyvsp[-2].value)),*z=concat(y,(yyvsp[-1].value)); (yyval.value)=concat(z,(yyvsp[0].value)); }
#line 2692 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 286 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2698 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 287 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2704 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 288 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2710 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 289 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2716 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 290 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2722 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 291 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2728 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 292 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2734 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 295 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2740 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 296 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2746 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 297 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2752 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 298 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2758 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 299 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-5].value),(yyvsp[-4].value)),*x=concat(p,(yyvsp[-3].value)),*y=concat(x,(yyvsp[-2].value)),*z=concat(y,(yyvsp[-1].value)); (yyval.value)=concat(z,(yyvsp[0].value)); }
#line 2764 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 300 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2770 "Parser.tab.c" /* yacc.c:1646  */
    break;


#line 2774 "Parser.tab.c" /* yacc.c:1646  */
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
#line 303 "Parser.y" /* yacc.c:1906  */

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
