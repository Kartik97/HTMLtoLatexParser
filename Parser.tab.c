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
#define YYLAST   772

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  151
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
       0,    57,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    68,    70,    74,    75,    78,    79,    82,    83,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   102,   103,   106,   107,   108,   109,   110,
     111,   112,   113,   116,   117,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   134,   135,   136,
     137,   140,   141,   142,   143,   146,   147,   148,   149,   152,
     153,   154,   155,   156,   157,   158,   159,   162,   163,   164,
     165,   166,   167,   168,   169,   172,   173,   174,   175,   176,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   204,   205,   208,   209,   212,   213,   216,
     217,   218,   221,   222,   225,   226,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   241,   242,   245,   246,
     247,   248,   249,   250,   253,   254,   255,   256,   259,   260,
     261,   262
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
  "st", "head", "title", "text", "body", "flow", "misc", "table",
  "caption", "tr", "th", "td", "div", "atag", "gtph", "phraseopen",
  "phrases", "phrasecom", "img", "fontsub", "font", "list", "listitem",
  "figure", "figcap", "dl", "dt", "dd", YY_NULLPTR
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

#define YYPACT_NINF -223

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-223)))

#define YYTABLE_NINF -99

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     122,     8,   145,    14,   155,  -223,   162,   221,    55,    19,
    -223,  -223,   113,    35,  -223,    11,    43,  -223,   691,   267,
    -223,    85,   342,    -6,   -12,   160,   301,     3,    65,  -223,
    -223,    40,    56,   671,  -223,    66,  -223,  -223,    80,  -223,
    -223,    23,  -223,   671,   455,    70,    -6,   -12,   716,     0,
    -223,  -223,    73,   141,   159,   691,   671,  -223,   686,    -9,
     141,   388,    77,  -223,   671,    53,  -223,    87,  -223,   671,
    -223,   671,  -223,   406,  -223,   671,   440,   166,  -223,   342,
     671,   474,  -223,   671,   508,    91,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,   141,   102,    98,   141,   141,   199,
     141,   671,   596,    -6,   -12,   141,  -223,   141,   128,  -223,
     671,   691,   671,   135,   143,  -223,   671,    -6,  -223,  -223,
    -223,   120,   160,  -223,  -223,   129,   526,   671,   440,   131,
    -223,   139,   132,   138,  -223,  -223,   142,    90,   149,   560,
     578,   133,   153,   141,   141,   707,   141,   141,  -223,  -223,
     141,   350,   141,   141,   141,   671,  -223,   187,  -223,   671,
     619,  -223,  -223,  -223,  -223,  -223,   671,   171,  -223,   173,
     671,   637,   175,   671,  -223,   671,    91,    91,   169,   178,
     184,   170,   181,   186,   194,   560,   578,   671,   141,  -223,
     360,   141,   141,   141,   141,  -223,   671,  -223,   671,   223,
    -223,   671,   671,  -223,   203,   204,   209,   637,  -223,  -223,
     207,  -223,   560,   210,   214,   578,   205,   216,    91,   217,
     219,  -223,  -223,   141,  -223,  -223,   671,  -223,  -223,   637,
     227,   474,   230,   671,  -223,   560,    91,  -223,   578,    91,
    -223,   224,   225,  -223,  -223,   637,  -223,   474,  -223,  -223,
    -223,  -223,  -223,    91,    91,  -223,  -223,  -223,  -223
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     2,     0,     0,     0,     4,     0,     0,     0,     0,
       1,     3,     0,     0,    12,     0,     0,    18,     0,     0,
      16,     0,     0,     0,     0,     0,     0,     0,     0,    34,
      33,    32,     0,    31,     6,     0,    10,     5,     0,     9,
      13,     0,    11,    87,     0,     0,     0,     0,     0,   100,
     113,    19,     0,   101,    88,     0,    80,    20,     0,   101,
      98,     0,     0,    21,    65,     0,    22,     0,   116,    23,
      25,   117,   123,     0,    26,   130,     0,     0,    27,     0,
     138,     0,    28,    41,     0,     0,    29,    15,    17,    30,
       8,     7,    14,    86,    93,     0,     0,    99,    97,     0,
     112,    89,     0,     0,     0,    95,   114,   110,     0,    78,
      79,     0,    74,     0,     0,    66,    68,     0,    24,   118,
     125,     0,     0,   135,   137,     0,     0,   129,     0,     0,
     141,     0,     0,     0,    42,    44,     0,     0,    45,     0,
       0,     0,     0,   105,    92,     0,   111,   109,   121,    85,
      91,     0,    94,    96,   107,    82,    77,     0,    71,    73,
       0,    67,   115,   124,   122,   136,   127,     0,   134,     0,
     139,     0,     0,   140,    43,    35,     0,     0,    57,     0,
       0,    61,     0,     0,    51,     0,     0,    37,   104,   119,
       0,   103,    90,   106,   108,    81,    84,    70,    76,     0,
     132,   128,   126,   142,   150,     0,   146,     0,   143,    38,
       0,    48,     0,    58,    46,     0,    62,    47,     0,     0,
       0,    40,   120,   102,    83,    75,    72,   133,   131,     0,
     148,     0,   144,    36,    59,     0,     0,    63,     0,     0,
      54,    52,    53,    69,   151,     0,   147,     0,    39,    60,
      49,    64,    50,     0,     0,   149,   145,    55,    56
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -223,  -223,   268,  -223,   -13,    84,    -7,   157,  -223,  -223,
     -96,  -174,  -185,   196,  -223,  -223,   -48,   -11,   -15,   -33,
    -223,     4,   156,  -223,  -223,   152,  -223,  -222,  -132
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     8,    16,    31,     9,   179,    33,    86,   137,
     142,   180,   183,    66,    63,    57,    51,    52,    53,    69,
      70,   105,    74,   122,    78,   126,    82,   133,   206
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      32,   220,    41,   111,    59,    49,    49,   108,    58,   246,
      45,   219,     4,    97,    10,    65,    67,    48,    87,    77,
      40,    68,    54,    60,    36,   256,    89,    79,    71,    20,
     237,    49,    92,    95,   100,    49,    93,    99,   234,   107,
      39,    87,    49,    80,    81,   107,    29,    30,    60,   109,
      42,    98,    60,   251,   113,    29,    30,   115,    87,    54,
      34,   249,   118,   157,   119,     7,   121,    88,   123,   125,
     152,    90,    65,   130,   132,   232,   134,   136,   116,   143,
     210,   211,   146,   147,   162,    91,   101,   102,    13,    49,
     154,   151,    35,    96,   149,    45,    38,   244,    49,   103,
     114,   104,    48,   156,    61,   158,    60,    62,   153,   161,
     117,    83,    84,   255,    85,    54,   102,   144,    37,   167,
     168,   125,   240,     7,    45,     1,     2,   145,   103,   188,
     104,    48,    49,   182,   190,   191,   175,   193,   194,   176,
     250,   138,   139,   252,   140,   155,    29,    30,   195,    60,
       5,     6,   197,   199,   163,     7,   159,   257,   258,   200,
      11,     6,   160,   203,   205,     7,   208,   165,   209,    14,
      15,   170,   -98,   -98,   172,    50,    50,   223,   173,   182,
     221,   -98,   171,   184,   185,   -98,   186,   -98,   -98,   224,
     174,   225,    72,    73,   227,   228,    29,    30,   177,   187,
     205,    50,   127,   128,   196,    50,    50,   201,   182,   202,
     106,    50,    50,   102,    29,    30,   106,    50,   207,   243,
     212,    45,   205,   215,   132,   103,   248,   104,    48,   148,
     213,   182,    17,    18,   214,   216,   217,    19,   205,    20,
     132,    21,   141,   218,   226,    22,   229,    23,   230,    24,
     231,    50,    25,   233,    50,    50,    26,   106,   238,    50,
      27,   235,    50,   236,   106,   239,    28,   241,    50,   242,
     245,   247,    12,   253,   254,   129,    29,    30,   164,    55,
     169,    44,     0,     0,    56,    20,     0,     0,     0,    45,
       0,     0,     0,    46,     0,    47,    48,     0,     0,     0,
     106,    50,    50,   106,   106,     0,     0,    50,     0,    50,
      50,   106,     0,    18,     0,     0,     0,    19,     0,    20,
       0,    21,    29,    30,     0,    22,     0,    23,     0,    24,
       0,     0,    25,   141,   141,     0,    26,    75,    76,     0,
      27,     0,     0,     0,     0,   106,    28,     0,   106,    50,
     106,   106,     0,     0,    18,     0,    29,    30,    19,     0,
      20,     0,    21,     0,   102,   192,    22,    64,    23,     0,
      24,     0,    45,    25,   102,   141,   103,    26,   104,    48,
     106,    27,    45,     0,     0,     0,   103,    28,   104,    48,
     222,     0,     0,   141,     0,     0,   141,    29,    30,     0,
      18,     0,     0,     0,    19,     0,    20,     0,    21,   112,
     141,   141,    22,     0,    23,     0,    24,     0,    18,    25,
       0,     0,    19,    26,    20,     0,    21,    27,     0,     0,
      22,     0,    23,    28,    24,     0,     0,    25,     0,     0,
     120,    26,     0,    29,    30,    27,     0,     0,     0,     0,
       0,    28,    18,     0,     0,     0,    19,     0,    20,     0,
      21,    29,    30,     0,    22,     0,    23,     0,    24,    44,
      94,    25,     0,    20,     0,    26,     0,    45,   124,    27,
       0,    46,     0,    47,    48,    28,    18,     0,     0,     0,
      19,     0,    20,     0,    21,    29,    30,     0,    22,     0,
      23,     0,    24,     0,     0,    25,     0,     0,     0,    26,
      29,    30,     0,    27,     0,     0,   131,     0,     0,    28,
      18,     0,     0,     0,    19,     0,    20,     0,    21,    29,
      30,     0,    22,     0,    23,     0,    24,     0,    18,    25,
       0,     0,    19,    26,    20,     0,    21,    27,     0,     0,
      22,     0,    23,    28,    24,     0,   135,    25,     0,     0,
       0,    26,   166,    29,    30,    27,     0,     0,     0,     0,
       0,    28,    18,     0,     0,     0,    19,     0,    20,     0,
      21,    29,    30,     0,    22,     0,    23,     0,    24,     0,
      18,    25,     0,     0,    19,    26,    20,     0,    21,    27,
       0,     0,    22,     0,    23,    28,    24,     0,     0,    25,
      44,   150,   178,    26,    20,    29,    30,    27,    45,     0,
       0,     0,    46,    28,    47,    48,     0,     0,     0,     0,
       0,    18,   181,    29,    30,    19,     0,    20,     0,    21,
     198,     0,     0,    22,     0,    23,     0,    24,     0,    18,
      25,    29,    30,    19,    26,    20,     0,    21,    27,     0,
       0,    22,     0,    23,    28,    24,     0,     0,    25,     0,
       0,     0,    26,     0,    29,    30,    27,     0,     0,     0,
       0,   204,    28,    18,     0,     0,     0,    19,     0,    20,
       0,    21,    29,    30,     0,    22,     0,    23,     0,    24,
     102,     0,    25,   110,    43,    44,    26,     0,    45,    20,
      27,     0,   103,    45,   104,    48,    28,    46,     0,    47,
      48,    44,     0,     0,     0,    20,    29,    30,     0,    45,
      44,     0,     0,    46,    20,    47,    48,   189,    45,     0,
       0,     0,    46,     0,    47,    48,    29,    30,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    29,    30,     0,     0,     0,     0,     0,     0,
       0,    29,    30
};

static const yytype_int16 yycheck[] =
{
       7,   186,    15,    12,    19,    18,    19,    55,    19,   231,
      22,   185,     4,    46,     0,    22,    22,    29,    18,    26,
       9,    27,    18,    19,     5,   247,    33,    24,    24,    18,
     215,    44,     9,    44,    49,    48,    43,    48,   212,    54,
       5,    18,    55,    40,    41,    60,    55,    56,    44,    56,
       7,    47,    48,   238,    61,    55,    56,    64,    18,    55,
       5,   235,    69,   111,    71,    10,    73,    11,    75,    76,
     103,     5,    79,    80,    81,   207,    83,    84,    25,    94,
     176,   177,    97,    98,   117,     5,    13,    14,     4,   102,
     105,   102,     8,    23,   101,    22,    12,   229,   111,    26,
      23,    28,    29,   110,    19,   112,   102,    22,   104,   116,
      23,    46,    47,   245,    49,   111,    14,    15,     5,   126,
     127,   128,   218,    10,    22,     3,     4,    29,    26,   144,
      28,    29,   145,   140,   145,   150,    46,   152,   153,    49,
     236,    50,    51,   239,    53,    17,    55,    56,   155,   145,
       5,     6,   159,   160,    34,    10,    21,   253,   254,   166,
       5,     6,    19,   170,   171,    10,   173,    38,   175,     7,
       8,    40,    13,    14,    42,    18,    19,   192,    40,   186,
     187,    22,    43,    50,    51,    26,    53,    28,    29,   196,
      48,   198,    32,    33,   201,   202,    55,    56,    49,    46,
     207,    44,    36,    37,    17,    48,    49,    36,   215,    36,
      53,    54,    55,    14,    55,    56,    59,    60,    43,   226,
      51,    22,   229,    53,   231,    26,   233,    28,    29,    30,
      52,   238,    11,    12,    50,    54,    50,    16,   245,    18,
     247,    20,    85,    49,    21,    24,    43,    26,    44,    28,
      41,    94,    31,    46,    97,    98,    35,   100,    53,   102,
      39,    51,   105,    49,   107,    49,    45,    50,   111,    50,
      43,    41,     4,    49,    49,    79,    55,    56,   122,    12,
     128,    14,    -1,    -1,    17,    18,    -1,    -1,    -1,    22,
      -1,    -1,    -1,    26,    -1,    28,    29,    -1,    -1,    -1,
     143,   144,   145,   146,   147,    -1,    -1,   150,    -1,   152,
     153,   154,    -1,    12,    -1,    -1,    -1,    16,    -1,    18,
      -1,    20,    55,    56,    -1,    24,    -1,    26,    -1,    28,
      -1,    -1,    31,   176,   177,    -1,    35,    36,    37,    -1,
      39,    -1,    -1,    -1,    -1,   188,    45,    -1,   191,   192,
     193,   194,    -1,    -1,    12,    -1,    55,    56,    16,    -1,
      18,    -1,    20,    -1,    14,    15,    24,    25,    26,    -1,
      28,    -1,    22,    31,    14,   218,    26,    35,    28,    29,
     223,    39,    22,    -1,    -1,    -1,    26,    45,    28,    29,
      30,    -1,    -1,   236,    -1,    -1,   239,    55,    56,    -1,
      12,    -1,    -1,    -1,    16,    -1,    18,    -1,    20,    21,
     253,   254,    24,    -1,    26,    -1,    28,    -1,    12,    31,
      -1,    -1,    16,    35,    18,    -1,    20,    39,    -1,    -1,
      24,    -1,    26,    45,    28,    -1,    -1,    31,    -1,    -1,
      34,    35,    -1,    55,    56,    39,    -1,    -1,    -1,    -1,
      -1,    45,    12,    -1,    -1,    -1,    16,    -1,    18,    -1,
      20,    55,    56,    -1,    24,    -1,    26,    -1,    28,    14,
      15,    31,    -1,    18,    -1,    35,    -1,    22,    38,    39,
      -1,    26,    -1,    28,    29,    45,    12,    -1,    -1,    -1,
      16,    -1,    18,    -1,    20,    55,    56,    -1,    24,    -1,
      26,    -1,    28,    -1,    -1,    31,    -1,    -1,    -1,    35,
      55,    56,    -1,    39,    -1,    -1,    42,    -1,    -1,    45,
      12,    -1,    -1,    -1,    16,    -1,    18,    -1,    20,    55,
      56,    -1,    24,    -1,    26,    -1,    28,    -1,    12,    31,
      -1,    -1,    16,    35,    18,    -1,    20,    39,    -1,    -1,
      24,    -1,    26,    45,    28,    -1,    48,    31,    -1,    -1,
      -1,    35,    36,    55,    56,    39,    -1,    -1,    -1,    -1,
      -1,    45,    12,    -1,    -1,    -1,    16,    -1,    18,    -1,
      20,    55,    56,    -1,    24,    -1,    26,    -1,    28,    -1,
      12,    31,    -1,    -1,    16,    35,    18,    -1,    20,    39,
      -1,    -1,    24,    -1,    26,    45,    28,    -1,    -1,    31,
      14,    15,    52,    35,    18,    55,    56,    39,    22,    -1,
      -1,    -1,    26,    45,    28,    29,    -1,    -1,    -1,    -1,
      -1,    12,    54,    55,    56,    16,    -1,    18,    -1,    20,
      21,    -1,    -1,    24,    -1,    26,    -1,    28,    -1,    12,
      31,    55,    56,    16,    35,    18,    -1,    20,    39,    -1,
      -1,    24,    -1,    26,    45,    28,    -1,    -1,    31,    -1,
      -1,    -1,    35,    -1,    55,    56,    39,    -1,    -1,    -1,
      -1,    44,    45,    12,    -1,    -1,    -1,    16,    -1,    18,
      -1,    20,    55,    56,    -1,    24,    -1,    26,    -1,    28,
      14,    -1,    31,    17,    13,    14,    35,    -1,    22,    18,
      39,    -1,    26,    22,    28,    29,    45,    26,    -1,    28,
      29,    14,    -1,    -1,    -1,    18,    55,    56,    -1,    22,
      14,    -1,    -1,    26,    18,    28,    29,    30,    22,    -1,
      -1,    -1,    26,    -1,    28,    29,    55,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,    59,     4,     5,     6,    10,    60,    63,
       0,     5,    60,    63,     7,     8,    61,    11,    12,    16,
      18,    20,    24,    26,    28,    31,    35,    39,    45,    55,
      56,    62,    64,    65,     5,    63,     5,     5,    63,     5,
       9,    62,     7,    13,    14,    22,    26,    28,    29,    62,
      65,    74,    75,    76,    79,    12,    17,    73,    75,    76,
      79,    19,    22,    72,    25,    64,    71,    22,    27,    77,
      78,    79,    32,    33,    80,    36,    37,    64,    82,    24,
      40,    41,    84,    46,    47,    49,    66,    18,    11,    64,
       5,     5,     9,    64,    15,    75,    23,    77,    79,    75,
      76,    13,    14,    26,    28,    79,    65,    76,    74,    64,
      17,    12,    21,    64,    23,    64,    25,    23,    64,    64,
      34,    64,    81,    64,    38,    64,    83,    36,    37,    71,
      64,    42,    64,    85,    64,    48,    64,    67,    50,    51,
      53,    65,    68,    76,    15,    29,    76,    76,    30,    64,
      15,    75,    77,    79,    76,    17,    64,    74,    64,    21,
      19,    64,    77,    34,    80,    38,    36,    64,    64,    83,
      40,    43,    42,    40,    48,    46,    49,    49,    52,    64,
      69,    54,    64,    70,    50,    51,    53,    46,    76,    30,
      75,    76,    15,    76,    76,    64,    17,    64,    21,    64,
      64,    36,    36,    64,    44,    64,    86,    43,    64,    64,
      68,    68,    51,    52,    50,    53,    54,    50,    49,    69,
      70,    64,    30,    76,    64,    64,    21,    64,    64,    43,
      44,    41,    86,    46,    69,    51,    49,    70,    53,    49,
      68,    50,    50,    64,    86,    43,    85,    41,    64,    69,
      68,    70,    68,    49,    49,    86,    85,    68,    68
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    60,    60,    61,    61,    62,    62,    63,    63,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    65,    65,    66,    66,    66,    66,    66,
      66,    66,    66,    67,    67,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    69,    69,    69,
      69,    70,    70,    70,    70,    71,    71,    71,    71,    72,
      72,    72,    72,    72,    72,    72,    72,    73,    73,    73,
      73,    73,    73,    73,    73,    74,    74,    74,    74,    74,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    76,    76,    77,    77,    78,    78,    79,
      79,    79,    80,    80,    81,    81,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    83,    83,    84,    84,
      84,    84,    84,    84,    85,    85,    85,    85,    86,    86,
      86,    86
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     2,     4,     3,     5,     4,     4,
       3,     3,     2,     2,     3,     2,     1,     3,     2,     2,
       2,     2,     2,     2,     3,     2,     2,     2,     2,     2,
       2,     1,     1,     1,     1,     3,     5,     3,     4,     6,
       4,     1,     2,     2,     1,     1,     3,     3,     3,     5,
       5,     2,     4,     4,     4,     6,     6,     1,     2,     3,
       4,     1,     2,     3,     4,     1,     2,     3,     2,     6,
       4,     3,     5,     3,     2,     5,     4,     3,     2,     2,
       1,     4,     3,     5,     4,     3,     2,     1,     1,     2,
       4,     3,     3,     2,     3,     2,     3,     2,     1,     2,
       1,     1,     5,     4,     4,     3,     4,     3,     4,     3,
       2,     3,     2,     1,     2,     3,     1,     1,     2,     4,
       5,     3,     3,     1,     2,     1,     4,     3,     4,     2,
       1,     5,     4,     5,     3,     2,     2,     1,     1,     3,
       3,     2,     4,     4,     4,     6,     3,     5,     2,     4,
       1,     3
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
#line 57 "Parser.y" /* yacc.c:1646  */
    { cout<<(yyvsp[0].value); }
#line 1563 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 58 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[-1].value)<<" "<<(yyvsp[0].value); }
#line 1569 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 59 "Parser.y" /* yacc.c:1646  */
    { cout<<(yyvsp[-1].value)<<" "<<(yyvsp[0].value); }
#line 1575 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 60 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-3].value)<<" "<<(yyvsp[-2].value)<<" "<<(yyvsp[0].value); }
#line 1581 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 61 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[0].value); }
#line 1587 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 62 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-4].value)<<" "<<(yyvsp[-3].value)<<" "<<(yyvsp[0].value); }
#line 1593 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 63 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-3].value)<<" "<<(yyvsp[0].value); }
#line 1599 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 64 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-3].value)<<" "<<(yyvsp[-2].value)<<" "<<(yyvsp[0].value); }
#line 1605 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 65 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[0].value); }
#line 1611 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 68 "Parser.y" /* yacc.c:1646  */
    {
				cout<<(yyvsp[-2].value)<<" "<<(yyvsp[0].value); }
#line 1618 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 70 "Parser.y" /* yacc.c:1646  */
    {
			cout<<(yyvsp[-1].value)<<" "<<(yyvsp[0].value); }
#line 1625 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 74 "Parser.y" /* yacc.c:1646  */
    { cout<<(yyvsp[-1].value)<<" "<<(yyvsp[0].value); }
#line 1631 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 75 "Parser.y" /* yacc.c:1646  */
    { cout<<(yyvsp[-2].value)<<" "<<(yyvsp[0].value); }
#line 1637 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 78 "Parser.y" /* yacc.c:1646  */
    { cout<<(yyvsp[0].value); }
#line 1643 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 79 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[0].value)<<" "; }
#line 1649 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 82 "Parser.y" /* yacc.c:1646  */
    { cout<<(yyvsp[-2].value)<<" "<<(yyvsp[0].value); }
#line 1655 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 83 "Parser.y" /* yacc.c:1646  */
    { cout<<(yyvsp[-1].value)<<" "<<(yyvsp[0].value); }
#line 1661 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 86 "Parser.y" /* yacc.c:1646  */
    { cout<<(yyvsp[-1].value); }
#line 1667 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 87 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-1].value); }
#line 1673 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 88 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-1].value); }
#line 1679 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 89 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-1].value); }
#line 1685 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 90 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-1].value); }
#line 1691 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 91 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value); }
#line 1697 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 92 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-1].value); }
#line 1703 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 93 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-1].value); }
#line 1709 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 94 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-1].value); }
#line 1715 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 95 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-1].value); }
#line 1721 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 96 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-1].value); }
#line 1727 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 97 "Parser.y" /* yacc.c:1646  */
    {}
#line 1733 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 98 "Parser.y" /* yacc.c:1646  */
    {}
#line 1739 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 99 "Parser.y" /* yacc.c:1646  */
    {}
#line 1745 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 102 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[0].value); }
#line 1751 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 103 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[0].value); }
#line 1757 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 106 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value); }
#line 1763 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 107 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-4].value)<<" "<<(yyvsp[-2].value)<<" "<<(yyvsp[0].value); }
#line 1769 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 108 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[0].value); }
#line 1775 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 109 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-3].value); }
#line 1781 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 110 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-5].value)<<" "<<(yyvsp[-3].value)<<" "<<(yyvsp[-1].value); }
#line 1787 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 111 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-3].value)<<" "<<(yyvsp[-1].value); }
#line 1793 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 112 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[0].value); }
#line 1799 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 113 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-1].value); }
#line 1805 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 116 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[0].value); }
#line 1811 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 117 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[0].value); }
#line 1817 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 120 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[0].value); }
#line 1823 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 121 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[0].value); }
#line 1829 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 122 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[0].value); }
#line 1835 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 123 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[-1].value); }
#line 1841 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 124 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-4].value)<<" "<<(yyvsp[-2].value)<<" "<<(yyvsp[-1].value); }
#line 1847 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 125 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-4].value)<<" "<<(yyvsp[-2].value)<<" "<<(yyvsp[-1].value); }
#line 1853 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 126 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[0].value); }
#line 1859 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 127 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[0].value); }
#line 1865 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 128 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[0].value); }
#line 1871 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 129 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[-1].value); }
#line 1877 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 130 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-4].value)<<" "<<(yyvsp[-2].value)<<" "<<(yyvsp[-1].value); }
#line 1883 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 131 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-4].value)<<" "<<(yyvsp[-2].value)<<" "<<(yyvsp[-1].value); }
#line 1889 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 134 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[0].value); }
#line 1895 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 135 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[0].value); }
#line 1901 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 136 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[-1].value); }
#line 1907 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 137 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[-1].value); }
#line 1913 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 140 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[0].value); }
#line 1919 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 141 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[0].value); }
#line 1925 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 142 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[-1].value); }
#line 1931 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 143 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[-1].value); }
#line 1937 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 146 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[0].value); }
#line 1943 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 147 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-1].value); }
#line 1949 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 148 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-1].value); }
#line 1955 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 149 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[0].value); }
#line 1961 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 152 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-5].value)<<" "<<(yyvsp[-4].value)<<" "<<(yyvsp[-3].value)<<" "<<(yyvsp[-1].value);}
#line 1967 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 153 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-3].value)<<" "<<(yyvsp[-1].value); }
#line 1973 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 154 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[-1].value)<<" "; }
#line 1979 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 155 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-4].value)<<" "<<(yyvsp[-3].value)<<" "<<(yyvsp[-2].value)<<" "<<(yyvsp[0].value); }
#line 1985 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 156 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[0].value); }
#line 1991 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 157 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-1].value)<<" "<<(yyvsp[0].value); }
#line 1997 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 158 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-4].value)<<" "<<(yyvsp[-3].value)<<" "<<(yyvsp[-2].value)<<" "<<(yyvsp[-1].value);}
#line 2003 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 159 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-3].value)<<" "<<(yyvsp[-2].value)<<" "<<(yyvsp[-1].value)<<" "<<(yyvsp[0].value); }
#line 2009 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 162 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-1].value); }
#line 2015 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 163 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-1].value); }
#line 2021 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 164 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[0].value); }
#line 2027 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 165 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[0].value); }
#line 2033 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 166 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-3].value)<<" "<<(yyvsp[-1].value); }
#line 2039 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 167 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[0].value); }
#line 2045 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 168 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-3].value)<<" "<<(yyvsp[-1].value); }
#line 2051 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 169 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[0].value); }
#line 2057 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 172 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-1].value); }
#line 2063 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 173 "Parser.y" /* yacc.c:1646  */
    { cout<<(yyvsp[-1].value); }
#line 2069 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 174 "Parser.y" /* yacc.c:1646  */
    { cout<<(yyvsp[0].value); }
#line 2075 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 175 "Parser.y" /* yacc.c:1646  */
    {}
#line 2081 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 176 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[0].value); }
#line 2087 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 179 "Parser.y" /* yacc.c:1646  */
    { cout<<(yyvsp[-2].value)<<" "<<(yyvsp[0].value); }
#line 2093 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 180 "Parser.y" /* yacc.c:1646  */
    { cout<<(yyvsp[-1].value)<<" "<<(yyvsp[0].value); }
#line 2099 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 181 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[0].value); }
#line 2105 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 182 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-1].value)<<" "<<(yyvsp[0].value); }
#line 2111 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 183 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-1].value); }
#line 2117 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 184 "Parser.y" /* yacc.c:1646  */
    {}
#line 2123 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 185 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-1].value); }
#line 2129 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 186 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-1].value); }
#line 2135 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 187 "Parser.y" /* yacc.c:1646  */
    {}
#line 2141 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 188 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-1].value); }
#line 2147 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 189 "Parser.y" /* yacc.c:1646  */
    {}
#line 2153 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 190 "Parser.y" /* yacc.c:1646  */
    {}
#line 2159 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 191 "Parser.y" /* yacc.c:1646  */
    { cout<<(yyvsp[-3].value)<<" "<<(yyvsp[-1].value); }
#line 2165 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 192 "Parser.y" /* yacc.c:1646  */
    { cout<<(yyvsp[-2].value)<<" "<<(yyvsp[-1].value); }
#line 2171 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 193 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-3].value)<<" "<<(yyvsp[-1].value); }
#line 2177 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 194 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[-1].value); }
#line 2183 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 195 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value); }
#line 2189 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 196 "Parser.y" /* yacc.c:1646  */
    {}
#line 2195 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 197 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value); }
#line 2201 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 198 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value); }
#line 2207 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 199 "Parser.y" /* yacc.c:1646  */
    {}
#line 2213 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 200 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value); }
#line 2219 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 201 "Parser.y" /* yacc.c:1646  */
    {}
#line 2225 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 204 "Parser.y" /* yacc.c:1646  */
    {}
#line 2231 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 205 "Parser.y" /* yacc.c:1646  */
    {}
#line 2237 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 208 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[-1].value); }
#line 2243 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 209 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[0].value); }
#line 2249 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 212 "Parser.y" /* yacc.c:1646  */
    {}
#line 2255 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 213 "Parser.y" /* yacc.c:1646  */
    {}
#line 2261 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 216 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-3].value)<<" "<<(yyvsp[-2].value)<<" "<<(yyvsp[-1].value)<<" "<<(yyvsp[0].value);}
#line 2267 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 217 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-4].value)<<" "<<(yyvsp[-3].value)<<" "<<(yyvsp[-2].value)<<" "<<(yyvsp[0].value);}
#line 2273 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 218 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[0].value); }
#line 2279 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 221 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value); }
#line 2285 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 222 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[0].value); }
#line 2291 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 225 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[0].value); }
#line 2297 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 226 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[0].value); }
#line 2303 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 229 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[0].value); }
#line 2309 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 230 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[0].value); }
#line 2315 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 231 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-3].value)<<" "<<(yyvsp[0].value); }
#line 2321 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 232 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[0].value); }
#line 2327 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 233 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[0].value); }
#line 2333 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 234 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-3].value)<<" "<<(yyvsp[-1].value); }
#line 2339 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 235 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-3].value)<<" "<<(yyvsp[-1].value); }
#line 2345 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 236 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-4].value)<<" "<<(yyvsp[-1].value); }
#line 2351 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 237 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-1].value); }
#line 2357 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 238 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-1].value); }
#line 2363 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 241 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[0].value); }
#line 2369 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 242 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[0].value); }
#line 2375 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 245 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[0].value); }
#line 2381 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 246 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[0].value); }
#line 2387 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 247 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[0].value); }
#line 2393 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 248 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-1].value); }
#line 2399 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 249 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-3].value)<<" "<<(yyvsp[-1].value); }
#line 2405 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 250 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-3].value)<<" "<<(yyvsp[-1].value); }
#line 2411 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 253 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[-1].value); }
#line 2417 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 254 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-4].value)<<" "<<(yyvsp[-3].value)<<" "<<(yyvsp[-1].value); }
#line 2423 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 255 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[-1].value); }
#line 2429 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 256 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-4].value)<<" "<<(yyvsp[-3].value)<<" "<<(yyvsp[-1].value); }
#line 2435 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 259 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[0].value); }
#line 2441 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 260 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[-1].value); }
#line 2447 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 261 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[0].value); }
#line 2453 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 262 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[-1].value); }
#line 2459 "Parser.tab.c" /* yacc.c:1646  */
    break;


#line 2463 "Parser.tab.c" /* yacc.c:1646  */
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
#line 265 "Parser.y" /* yacc.c:1906  */

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
