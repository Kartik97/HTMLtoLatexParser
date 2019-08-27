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
#define YYLAST   784

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  152
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  261

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
      97,    98,    99,   102,   103,   104,   107,   108,   109,   110,
     111,   112,   113,   114,   117,   118,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   135,   136,
     137,   138,   141,   142,   143,   144,   147,   148,   149,   150,
     153,   154,   155,   156,   157,   158,   159,   160,   163,   164,
     165,   166,   167,   168,   169,   170,   173,   174,   175,   176,
     177,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   205,   206,   209,   210,   213,   214,
     217,   218,   219,   222,   223,   226,   227,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   242,   243,   246,
     247,   248,   249,   250,   251,   254,   255,   256,   257,   260,
     261,   262,   263
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

#define YYPACT_NINF -218

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-218)))

#define YYTABLE_NINF -100

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      75,    17,    84,     7,   157,  -218,   164,   264,    55,    20,
    -218,  -218,    65,    24,  -218,     2,    51,  -218,   209,   130,
    -218,    97,   346,    82,    -5,   162,   305,     3,   152,  -218,
    -218,    49,    77,   675,  -218,    93,  -218,  -218,   101,  -218,
    -218,    32,  -218,   693,   459,    91,    82,    -5,   728,    -9,
      83,  -218,   161,   149,    73,   209,   693,  -218,   233,    26,
     149,   392,   107,  -218,   693,   118,  -218,   122,  -218,   693,
    -218,   693,  -218,   410,  -218,   693,   444,   180,  -218,   346,
     693,   478,  -218,   693,   512,   708,  -218,  -218,  -218,  -218,
    -218,  -218,  -218,  -218,  -218,   149,    98,   124,   149,   149,
     257,   149,  -218,   693,   600,    82,    -5,   149,    83,   149,
     140,  -218,   693,   209,   693,   139,   145,  -218,   693,    82,
    -218,  -218,  -218,   135,   162,  -218,  -218,   138,   530,   693,
     444,   133,  -218,   137,   142,   148,  -218,  -218,   144,   100,
     151,   564,   582,   179,   160,   149,   149,   711,   149,   149,
    -218,  -218,   149,   354,   149,   149,   149,   693,  -218,   192,
    -218,   693,   623,  -218,  -218,  -218,  -218,  -218,   693,   175,
    -218,   184,   693,   641,   172,   693,  -218,   693,   708,   708,
     174,   187,   186,   188,   189,   195,   197,   564,   582,   693,
     149,  -218,   364,   149,   149,   149,   149,  -218,   693,  -218,
     693,   227,  -218,   693,   693,  -218,   206,   207,   211,   641,
    -218,  -218,   210,  -218,   564,   202,   218,   582,   216,   221,
     708,   223,   224,  -218,  -218,   149,  -218,  -218,   693,  -218,
    -218,   641,   234,   478,   237,   693,  -218,   564,   708,  -218,
     582,   708,  -218,   232,   240,  -218,  -218,   641,  -218,   478,
    -218,  -218,  -218,  -218,  -218,   708,   708,  -218,  -218,  -218,
    -218
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     2,     0,     0,     0,     4,     0,     0,     0,     0,
       1,     3,     0,     0,    12,     0,     0,    18,     0,     0,
      16,     0,     0,     0,     0,     0,     0,     0,     0,    35,
      33,    32,     0,    31,     6,     0,    10,     5,     0,     9,
      13,     0,    11,    88,     0,     0,     0,     0,     0,   101,
     114,    19,     0,   102,    89,     0,    81,    20,     0,   102,
      99,     0,     0,    21,    66,     0,    22,     0,   117,    23,
      25,   118,   124,     0,    26,   131,     0,     0,    27,     0,
     139,     0,    28,    42,     0,     0,    29,    15,    17,    34,
      30,     8,     7,    14,    87,    94,     0,     0,   100,    98,
       0,   113,    34,    90,     0,     0,     0,    96,   115,   111,
       0,    79,    80,     0,    75,     0,     0,    67,    69,     0,
      24,   119,   126,     0,     0,   136,   138,     0,     0,   130,
       0,     0,   142,     0,     0,     0,    43,    45,     0,     0,
      46,     0,     0,     0,     0,   106,    93,     0,   112,   110,
     122,    86,    92,     0,    95,    97,   108,    83,    78,     0,
      72,    74,     0,    68,   116,   125,   123,   137,   128,     0,
     135,     0,   140,     0,     0,   141,    44,    36,     0,     0,
      58,     0,     0,    62,     0,     0,    52,     0,     0,    38,
     105,   120,     0,   104,    91,   107,   109,    82,    85,    71,
      77,     0,   133,   129,   127,   143,   151,     0,   147,     0,
     144,    39,     0,    49,     0,    59,    47,     0,    63,    48,
       0,     0,     0,    41,   121,   103,    84,    76,    73,   134,
     132,     0,   149,     0,   145,    37,    60,     0,     0,    64,
       0,     0,    55,    53,    54,    70,   152,     0,   148,     0,
      40,    61,    50,    65,    51,     0,     0,   150,   146,    56,
      57
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -218,  -218,   287,  -218,   -13,     6,    -7,   159,  -218,  -218,
    -123,  -174,  -187,   214,  -218,  -218,   -52,   -11,   -15,   -34,
    -218,     4,   170,  -218,  -218,   166,  -218,  -217,  -106
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     8,    16,    31,     9,   181,    33,    86,   139,
     144,   182,   185,    66,    63,    57,    51,    52,    53,    69,
      70,   107,    74,   124,    78,   128,    82,   135,   208
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      32,   222,    41,   110,    59,    49,    49,    10,    58,    87,
      13,    40,    98,   221,    35,    65,   248,    45,    38,    77,
      20,     4,    54,    60,    48,    36,    90,    79,    71,    39,
     239,    49,   258,    96,   101,    49,    94,   100,   113,   109,
     236,    93,    49,    80,    81,   109,    29,    30,    60,   111,
      87,    99,    60,   253,   115,   212,   213,   117,    42,    54,
      34,   159,   120,   251,   121,     7,   123,    87,   125,   127,
      37,   154,    65,   132,   134,     7,   136,   138,     1,     2,
     145,    29,    30,   148,   149,   164,   -99,   -99,    88,     5,
       6,    49,   156,   153,     7,   -99,   151,   242,    91,   -99,
      49,   -99,   -99,   234,    67,   158,    92,   160,    60,    68,
     155,   163,   104,   146,    97,   252,    61,    54,   254,    62,
      45,   169,   170,   127,   105,   246,   106,    48,    29,    30,
     116,   190,   259,   260,    49,   184,   192,   193,   102,   195,
     196,   257,    55,   118,    44,   119,   177,    56,    20,   178,
     197,    60,    45,   147,   199,   201,    46,   157,    47,    48,
     161,   202,    11,     6,   162,   205,   207,     7,   210,   165,
     211,    14,    15,   172,   103,   104,   167,    50,    50,   225,
     173,   184,   223,    45,   174,    29,    30,   105,   175,   106,
      48,   226,   176,   227,    72,    73,   229,   230,    83,    84,
     179,    85,   207,    50,    29,    30,   189,    50,    50,   198,
     184,   203,   108,    50,    50,   209,   129,   130,   108,    50,
     204,   245,    43,    44,   207,   214,   134,    20,   250,   186,
     187,    45,   188,   184,   102,    46,   216,    47,    48,   215,
     207,   217,   134,   218,   143,   219,   220,   104,   228,   231,
     112,   232,   233,   237,    50,    45,   235,    50,    50,   105,
     108,   106,    48,    50,    29,    30,    50,   238,   108,   240,
     241,   104,    50,   243,   244,    17,    18,   247,   249,    45,
      19,   255,    20,   105,    21,   106,    48,   150,    22,   256,
      23,    12,    24,   131,   166,    25,   171,     0,     0,    26,
       0,     0,     0,    27,   108,    50,    50,   108,   108,    28,
       0,    50,     0,    50,    50,   108,     0,    18,     0,    29,
      30,    19,     0,    20,     0,    21,     0,     0,     0,    22,
       0,    23,     0,    24,     0,     0,    25,   143,   143,     0,
      26,    75,    76,     0,    27,     0,     0,     0,     0,   108,
      28,     0,   108,    50,   108,   108,     0,     0,    18,     0,
      29,    30,    19,     0,    20,     0,    21,     0,   104,   194,
      22,    64,    23,     0,    24,     0,    45,    25,   104,   143,
     105,    26,   106,    48,   108,    27,    45,     0,     0,     0,
     105,    28,   106,    48,   224,     0,     0,   143,     0,     0,
     143,    29,    30,     0,    18,     0,     0,     0,    19,     0,
      20,     0,    21,   114,   143,   143,    22,     0,    23,     0,
      24,     0,    18,    25,     0,     0,    19,    26,    20,     0,
      21,    27,     0,     0,    22,     0,    23,    28,    24,     0,
       0,    25,     0,     0,   122,    26,     0,    29,    30,    27,
       0,     0,     0,     0,     0,    28,    18,     0,     0,     0,
      19,     0,    20,     0,    21,    29,    30,     0,    22,     0,
      23,     0,    24,    44,    95,    25,     0,    20,     0,    26,
       0,    45,   126,    27,     0,    46,     0,    47,    48,    28,
      18,     0,     0,     0,    19,     0,    20,     0,    21,    29,
      30,     0,    22,     0,    23,     0,    24,     0,     0,    25,
       0,     0,     0,    26,    29,    30,     0,    27,     0,     0,
     133,     0,     0,    28,    18,     0,     0,     0,    19,     0,
      20,     0,    21,    29,    30,     0,    22,     0,    23,     0,
      24,     0,    18,    25,     0,     0,    19,    26,    20,     0,
      21,    27,     0,     0,    22,     0,    23,    28,    24,     0,
     137,    25,     0,     0,     0,    26,   168,    29,    30,    27,
       0,     0,     0,     0,     0,    28,    18,     0,     0,     0,
      19,     0,    20,     0,    21,    29,    30,     0,    22,     0,
      23,     0,    24,     0,    18,    25,     0,     0,    19,    26,
      20,     0,    21,    27,     0,     0,    22,     0,    23,    28,
      24,     0,     0,    25,    44,   152,   180,    26,    20,    29,
      30,    27,    45,     0,     0,     0,    46,    28,    47,    48,
       0,     0,     0,     0,     0,    18,   183,    29,    30,    19,
       0,    20,     0,    21,   200,     0,     0,    22,     0,    23,
       0,    24,     0,    18,    25,    29,    30,    19,    26,    20,
       0,    21,    27,     0,     0,    22,     0,    23,    28,    24,
       0,     0,    25,     0,     0,     0,    26,     0,    29,    30,
      27,     0,     0,     0,     0,   206,    28,    18,     0,     0,
       0,    19,     0,    20,     0,    21,    29,    30,     0,    22,
       0,    23,     0,    24,     0,    18,    25,     0,     0,    19,
      26,    20,     0,    21,    27,     0,     0,    22,     0,    23,
      28,    24,     0,     0,    25,    44,     0,     0,    26,    20,
      89,    30,    27,    45,     0,     0,     0,    46,    28,    47,
      48,   191,    44,     0,     0,     0,    20,     0,    29,    30,
      45,     0,     0,     0,    46,     0,    47,    48,   140,   141,
       0,   142,     0,    29,    30,     0,    29,    30,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    29,    30
};

static const yytype_int16 yycheck[] =
{
       7,   188,    15,    55,    19,    18,    19,     0,    19,    18,
       4,     9,    46,   187,     8,    22,   233,    22,    12,    26,
      18,     4,    18,    19,    29,     5,    33,    24,    24,     5,
     217,    44,   249,    44,    49,    48,    43,    48,    12,    54,
     214,     9,    55,    40,    41,    60,    55,    56,    44,    56,
      18,    47,    48,   240,    61,   178,   179,    64,     7,    55,
       5,   113,    69,   237,    71,    10,    73,    18,    75,    76,
       5,   105,    79,    80,    81,    10,    83,    84,     3,     4,
      95,    55,    56,    98,    99,   119,    13,    14,    11,     5,
       6,   104,   107,   104,    10,    22,   103,   220,     5,    26,
     113,    28,    29,   209,    22,   112,     5,   114,   104,    27,
     106,   118,    14,    15,    23,   238,    19,   113,   241,    22,
      22,   128,   129,   130,    26,   231,    28,    29,    55,    56,
      23,   146,   255,   256,   147,   142,   147,   152,    55,   154,
     155,   247,    12,    25,    14,    23,    46,    17,    18,    49,
     157,   147,    22,    29,   161,   162,    26,    17,    28,    29,
      21,   168,     5,     6,    19,   172,   173,    10,   175,    34,
     177,     7,     8,    40,    13,    14,    38,    18,    19,   194,
      43,   188,   189,    22,    42,    55,    56,    26,    40,    28,
      29,   198,    48,   200,    32,    33,   203,   204,    46,    47,
      49,    49,   209,    44,    55,    56,    46,    48,    49,    17,
     217,    36,    53,    54,    55,    43,    36,    37,    59,    60,
      36,   228,    13,    14,   231,    51,   233,    18,   235,    50,
      51,    22,    53,   240,    55,    26,    50,    28,    29,    52,
     247,    53,   249,    54,    85,    50,    49,    14,    21,    43,
      17,    44,    41,    51,    95,    22,    46,    98,    99,    26,
     101,    28,    29,   104,    55,    56,   107,    49,   109,    53,
      49,    14,   113,    50,    50,    11,    12,    43,    41,    22,
      16,    49,    18,    26,    20,    28,    29,    30,    24,    49,
      26,     4,    28,    79,   124,    31,   130,    -1,    -1,    35,
      -1,    -1,    -1,    39,   145,   146,   147,   148,   149,    45,
      -1,   152,    -1,   154,   155,   156,    -1,    12,    -1,    55,
      56,    16,    -1,    18,    -1,    20,    -1,    -1,    -1,    24,
      -1,    26,    -1,    28,    -1,    -1,    31,   178,   179,    -1,
      35,    36,    37,    -1,    39,    -1,    -1,    -1,    -1,   190,
      45,    -1,   193,   194,   195,   196,    -1,    -1,    12,    -1,
      55,    56,    16,    -1,    18,    -1,    20,    -1,    14,    15,
      24,    25,    26,    -1,    28,    -1,    22,    31,    14,   220,
      26,    35,    28,    29,   225,    39,    22,    -1,    -1,    -1,
      26,    45,    28,    29,    30,    -1,    -1,   238,    -1,    -1,
     241,    55,    56,    -1,    12,    -1,    -1,    -1,    16,    -1,
      18,    -1,    20,    21,   255,   256,    24,    -1,    26,    -1,
      28,    -1,    12,    31,    -1,    -1,    16,    35,    18,    -1,
      20,    39,    -1,    -1,    24,    -1,    26,    45,    28,    -1,
      -1,    31,    -1,    -1,    34,    35,    -1,    55,    56,    39,
      -1,    -1,    -1,    -1,    -1,    45,    12,    -1,    -1,    -1,
      16,    -1,    18,    -1,    20,    55,    56,    -1,    24,    -1,
      26,    -1,    28,    14,    15,    31,    -1,    18,    -1,    35,
      -1,    22,    38,    39,    -1,    26,    -1,    28,    29,    45,
      12,    -1,    -1,    -1,    16,    -1,    18,    -1,    20,    55,
      56,    -1,    24,    -1,    26,    -1,    28,    -1,    -1,    31,
      -1,    -1,    -1,    35,    55,    56,    -1,    39,    -1,    -1,
      42,    -1,    -1,    45,    12,    -1,    -1,    -1,    16,    -1,
      18,    -1,    20,    55,    56,    -1,    24,    -1,    26,    -1,
      28,    -1,    12,    31,    -1,    -1,    16,    35,    18,    -1,
      20,    39,    -1,    -1,    24,    -1,    26,    45,    28,    -1,
      48,    31,    -1,    -1,    -1,    35,    36,    55,    56,    39,
      -1,    -1,    -1,    -1,    -1,    45,    12,    -1,    -1,    -1,
      16,    -1,    18,    -1,    20,    55,    56,    -1,    24,    -1,
      26,    -1,    28,    -1,    12,    31,    -1,    -1,    16,    35,
      18,    -1,    20,    39,    -1,    -1,    24,    -1,    26,    45,
      28,    -1,    -1,    31,    14,    15,    52,    35,    18,    55,
      56,    39,    22,    -1,    -1,    -1,    26,    45,    28,    29,
      -1,    -1,    -1,    -1,    -1,    12,    54,    55,    56,    16,
      -1,    18,    -1,    20,    21,    -1,    -1,    24,    -1,    26,
      -1,    28,    -1,    12,    31,    55,    56,    16,    35,    18,
      -1,    20,    39,    -1,    -1,    24,    -1,    26,    45,    28,
      -1,    -1,    31,    -1,    -1,    -1,    35,    -1,    55,    56,
      39,    -1,    -1,    -1,    -1,    44,    45,    12,    -1,    -1,
      -1,    16,    -1,    18,    -1,    20,    55,    56,    -1,    24,
      -1,    26,    -1,    28,    -1,    12,    31,    -1,    -1,    16,
      35,    18,    -1,    20,    39,    -1,    -1,    24,    -1,    26,
      45,    28,    -1,    -1,    31,    14,    -1,    -1,    35,    18,
      55,    56,    39,    22,    -1,    -1,    -1,    26,    45,    28,
      29,    30,    14,    -1,    -1,    -1,    18,    -1,    55,    56,
      22,    -1,    -1,    -1,    26,    -1,    28,    29,    50,    51,
      -1,    53,    -1,    55,    56,    -1,    55,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56
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
      40,    41,    84,    46,    47,    49,    66,    18,    11,    55,
      64,     5,     5,     9,    64,    15,    75,    23,    77,    79,
      75,    76,    55,    13,    14,    26,    28,    79,    65,    76,
      74,    64,    17,    12,    21,    64,    23,    64,    25,    23,
      64,    64,    34,    64,    81,    64,    38,    64,    83,    36,
      37,    71,    64,    42,    64,    85,    64,    48,    64,    67,
      50,    51,    53,    65,    68,    76,    15,    29,    76,    76,
      30,    64,    15,    75,    77,    79,    76,    17,    64,    74,
      64,    21,    19,    64,    77,    34,    80,    38,    36,    64,
      64,    83,    40,    43,    42,    40,    48,    46,    49,    49,
      52,    64,    69,    54,    64,    70,    50,    51,    53,    46,
      76,    30,    75,    76,    15,    76,    76,    64,    17,    64,
      21,    64,    64,    36,    36,    64,    44,    64,    86,    43,
      64,    64,    68,    68,    51,    52,    50,    53,    54,    50,
      49,    69,    70,    64,    30,    76,    64,    64,    21,    64,
      64,    43,    44,    41,    86,    46,    69,    51,    49,    70,
      53,    49,    68,    50,    50,    64,    86,    43,    85,    41,
      64,    69,    68,    70,    68,    49,    49,    86,    85,    68,
      68
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    60,    60,    61,    61,    62,    62,    63,    63,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    65,    65,    65,    66,    66,    66,    66,
      66,    66,    66,    66,    67,    67,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    69,    69,
      69,    69,    70,    70,    70,    70,    71,    71,    71,    71,
      72,    72,    72,    72,    72,    72,    72,    72,    73,    73,
      73,    73,    73,    73,    73,    73,    74,    74,    74,    74,
      74,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    76,    76,    77,    77,    78,    78,
      79,    79,    79,    80,    80,    81,    81,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    83,    83,    84,
      84,    84,    84,    84,    84,    85,    85,    85,    85,    86,
      86,    86,    86
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     2,     4,     3,     5,     4,     4,
       3,     3,     2,     2,     3,     2,     1,     3,     2,     2,
       2,     2,     2,     2,     3,     2,     2,     2,     2,     2,
       2,     1,     1,     1,     2,     1,     3,     5,     3,     4,
       6,     4,     1,     2,     2,     1,     1,     3,     3,     3,
       5,     5,     2,     4,     4,     4,     6,     6,     1,     2,
       3,     4,     1,     2,     3,     4,     1,     2,     3,     2,
       6,     4,     3,     5,     3,     2,     5,     4,     3,     2,
       2,     1,     4,     3,     5,     4,     3,     2,     1,     1,
       2,     4,     3,     3,     2,     3,     2,     3,     2,     1,
       2,     1,     1,     5,     4,     4,     3,     4,     3,     4,
       3,     2,     3,     2,     1,     2,     3,     1,     1,     2,
       4,     5,     3,     3,     1,     2,     1,     4,     3,     4,
       2,     1,     5,     4,     5,     3,     2,     2,     1,     1,
       3,     3,     2,     4,     4,     4,     6,     3,     5,     2,
       4,     1,     3
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
#line 1568 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 58 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[-1].value)<<" "<<(yyvsp[0].value); }
#line 1574 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 59 "Parser.y" /* yacc.c:1646  */
    { cout<<(yyvsp[-1].value)<<" "<<(yyvsp[0].value); }
#line 1580 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 60 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-3].value)<<" "<<(yyvsp[-2].value)<<" "<<(yyvsp[0].value); }
#line 1586 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 61 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[0].value); }
#line 1592 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 62 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-4].value)<<" "<<(yyvsp[-3].value)<<" "<<(yyvsp[0].value); }
#line 1598 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 63 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-3].value)<<" "<<(yyvsp[0].value); }
#line 1604 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 64 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-3].value)<<" "<<(yyvsp[-2].value)<<" "<<(yyvsp[0].value); }
#line 1610 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 65 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[0].value); }
#line 1616 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 68 "Parser.y" /* yacc.c:1646  */
    {
				cout<<(yyvsp[-2].value)<<" "<<(yyvsp[0].value); }
#line 1623 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 70 "Parser.y" /* yacc.c:1646  */
    {
			cout<<(yyvsp[-1].value)<<" "<<(yyvsp[0].value); }
#line 1630 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 74 "Parser.y" /* yacc.c:1646  */
    { cout<<(yyvsp[-1].value)<<" "<<(yyvsp[0].value); }
#line 1636 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 75 "Parser.y" /* yacc.c:1646  */
    { cout<<(yyvsp[-2].value)<<" "<<(yyvsp[0].value); }
#line 1642 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 78 "Parser.y" /* yacc.c:1646  */
    { cout<<(yyvsp[0].value); }
#line 1648 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 79 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[0].value)<<" "; }
#line 1654 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 82 "Parser.y" /* yacc.c:1646  */
    { cout<<(yyvsp[-2].value)<<" "<<(yyvsp[0].value); }
#line 1660 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 83 "Parser.y" /* yacc.c:1646  */
    { cout<<(yyvsp[-1].value)<<" "<<(yyvsp[0].value); }
#line 1666 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 86 "Parser.y" /* yacc.c:1646  */
    { cout<<(yyvsp[-1].value); }
#line 1672 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 87 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-1].value); }
#line 1678 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 88 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-1].value); }
#line 1684 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 89 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-1].value); }
#line 1690 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 90 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-1].value); }
#line 1696 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 91 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value); }
#line 1702 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 92 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-1].value); }
#line 1708 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 93 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-1].value); }
#line 1714 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 94 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-1].value); }
#line 1720 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 95 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-1].value); }
#line 1726 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 96 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-1].value); }
#line 1732 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 97 "Parser.y" /* yacc.c:1646  */
    {}
#line 1738 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 98 "Parser.y" /* yacc.c:1646  */
    {}
#line 1744 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 99 "Parser.y" /* yacc.c:1646  */
    {}
#line 1750 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 102 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[0].value); }
#line 1756 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 103 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[0].value); }
#line 1762 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 104 "Parser.y" /* yacc.c:1646  */
    {}
#line 1768 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 107 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value); }
#line 1774 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 108 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-4].value)<<" "<<(yyvsp[-2].value)<<" "<<(yyvsp[0].value); }
#line 1780 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 109 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[0].value); }
#line 1786 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 110 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-3].value); }
#line 1792 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 111 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-5].value)<<" "<<(yyvsp[-3].value)<<" "<<(yyvsp[-1].value); }
#line 1798 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 112 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-3].value)<<" "<<(yyvsp[-1].value); }
#line 1804 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 113 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[0].value); }
#line 1810 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 114 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-1].value); }
#line 1816 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 117 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[0].value); }
#line 1822 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 118 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[0].value); }
#line 1828 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 121 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[0].value); }
#line 1834 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 122 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[0].value); }
#line 1840 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 123 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[0].value); }
#line 1846 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 124 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[-1].value); }
#line 1852 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 125 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-4].value)<<" "<<(yyvsp[-2].value)<<" "<<(yyvsp[-1].value); }
#line 1858 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 126 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-4].value)<<" "<<(yyvsp[-2].value)<<" "<<(yyvsp[-1].value); }
#line 1864 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 127 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[0].value); }
#line 1870 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 128 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[0].value); }
#line 1876 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 129 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[0].value); }
#line 1882 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 130 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[-1].value); }
#line 1888 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 131 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-4].value)<<" "<<(yyvsp[-2].value)<<" "<<(yyvsp[-1].value); }
#line 1894 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 132 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-4].value)<<" "<<(yyvsp[-2].value)<<" "<<(yyvsp[-1].value); }
#line 1900 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 135 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[0].value); }
#line 1906 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 136 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[0].value); }
#line 1912 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 137 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[-1].value); }
#line 1918 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 138 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[-1].value); }
#line 1924 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 141 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[0].value); }
#line 1930 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 142 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[0].value); }
#line 1936 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 143 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[-1].value); }
#line 1942 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 144 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[-1].value); }
#line 1948 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 147 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[0].value); }
#line 1954 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 148 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-1].value); }
#line 1960 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 149 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-1].value); }
#line 1966 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 150 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[0].value); }
#line 1972 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 153 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-5].value)<<" "<<(yyvsp[-4].value)<<" "<<(yyvsp[-3].value)<<" "<<(yyvsp[-1].value);}
#line 1978 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 154 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-3].value)<<" "<<(yyvsp[-1].value); }
#line 1984 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 155 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[-1].value)<<" "; }
#line 1990 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 156 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-4].value)<<" "<<(yyvsp[-3].value)<<" "<<(yyvsp[-2].value)<<" "<<(yyvsp[0].value); }
#line 1996 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 157 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[0].value); }
#line 2002 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 158 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-1].value)<<" "<<(yyvsp[0].value); }
#line 2008 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 159 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-4].value)<<" "<<(yyvsp[-3].value)<<" "<<(yyvsp[-2].value)<<" "<<(yyvsp[-1].value);}
#line 2014 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 160 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-3].value)<<" "<<(yyvsp[-2].value)<<" "<<(yyvsp[-1].value)<<" "<<(yyvsp[0].value); }
#line 2020 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 163 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-1].value); }
#line 2026 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 164 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-1].value); }
#line 2032 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 165 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[0].value); }
#line 2038 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 166 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[0].value); }
#line 2044 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 167 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-3].value)<<" "<<(yyvsp[-1].value); }
#line 2050 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 168 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[0].value); }
#line 2056 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 169 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-3].value)<<" "<<(yyvsp[-1].value); }
#line 2062 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 170 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[0].value); }
#line 2068 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 173 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-1].value); }
#line 2074 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 174 "Parser.y" /* yacc.c:1646  */
    { cout<<(yyvsp[-1].value); }
#line 2080 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 175 "Parser.y" /* yacc.c:1646  */
    { cout<<(yyvsp[0].value); }
#line 2086 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 176 "Parser.y" /* yacc.c:1646  */
    {}
#line 2092 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 177 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[0].value); }
#line 2098 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 180 "Parser.y" /* yacc.c:1646  */
    { cout<<(yyvsp[-2].value)<<" "<<(yyvsp[0].value); }
#line 2104 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 181 "Parser.y" /* yacc.c:1646  */
    { cout<<(yyvsp[-1].value)<<" "<<(yyvsp[0].value); }
#line 2110 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 182 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[0].value); }
#line 2116 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 183 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-1].value)<<" "<<(yyvsp[0].value); }
#line 2122 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 184 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-1].value); }
#line 2128 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 185 "Parser.y" /* yacc.c:1646  */
    {}
#line 2134 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 186 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-1].value); }
#line 2140 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 187 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-1].value); }
#line 2146 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 188 "Parser.y" /* yacc.c:1646  */
    {}
#line 2152 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 189 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-1].value); }
#line 2158 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 190 "Parser.y" /* yacc.c:1646  */
    {}
#line 2164 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 191 "Parser.y" /* yacc.c:1646  */
    {}
#line 2170 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 192 "Parser.y" /* yacc.c:1646  */
    { cout<<(yyvsp[-3].value)<<" "<<(yyvsp[-1].value); }
#line 2176 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 193 "Parser.y" /* yacc.c:1646  */
    { cout<<(yyvsp[-2].value)<<" "<<(yyvsp[-1].value); }
#line 2182 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 194 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-3].value)<<" "<<(yyvsp[-1].value); }
#line 2188 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 195 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[-1].value); }
#line 2194 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 196 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value); }
#line 2200 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 197 "Parser.y" /* yacc.c:1646  */
    {}
#line 2206 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 198 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value); }
#line 2212 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 199 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value); }
#line 2218 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 200 "Parser.y" /* yacc.c:1646  */
    {}
#line 2224 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 201 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value); }
#line 2230 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 202 "Parser.y" /* yacc.c:1646  */
    {}
#line 2236 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 205 "Parser.y" /* yacc.c:1646  */
    {}
#line 2242 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 206 "Parser.y" /* yacc.c:1646  */
    {}
#line 2248 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 209 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[-1].value); }
#line 2254 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 210 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[0].value); }
#line 2260 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 213 "Parser.y" /* yacc.c:1646  */
    {}
#line 2266 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 214 "Parser.y" /* yacc.c:1646  */
    {}
#line 2272 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 217 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-3].value)<<" "<<(yyvsp[-2].value)<<" "<<(yyvsp[-1].value)<<" "<<(yyvsp[0].value);}
#line 2278 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 218 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-4].value)<<" "<<(yyvsp[-3].value)<<" "<<(yyvsp[-2].value)<<" "<<(yyvsp[0].value);}
#line 2284 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 219 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[0].value); }
#line 2290 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 222 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value); }
#line 2296 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 223 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[0].value); }
#line 2302 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 226 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[0].value); }
#line 2308 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 227 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[0].value); }
#line 2314 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 230 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[0].value); }
#line 2320 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 231 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[0].value); }
#line 2326 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 232 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-3].value)<<" "<<(yyvsp[0].value); }
#line 2332 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 233 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[0].value); }
#line 2338 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 234 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[0].value); }
#line 2344 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 235 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-3].value)<<" "<<(yyvsp[-1].value); }
#line 2350 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 236 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-3].value)<<" "<<(yyvsp[-1].value); }
#line 2356 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 237 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-4].value)<<" "<<(yyvsp[-1].value); }
#line 2362 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 238 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-1].value); }
#line 2368 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 239 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-1].value); }
#line 2374 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 242 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[0].value); }
#line 2380 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 243 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[0].value); }
#line 2386 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 246 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[0].value); }
#line 2392 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 247 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[0].value); }
#line 2398 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 248 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[0].value); }
#line 2404 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 249 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-1].value); }
#line 2410 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 250 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-3].value)<<" "<<(yyvsp[-1].value); }
#line 2416 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 251 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-3].value)<<" "<<(yyvsp[-1].value); }
#line 2422 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 254 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[-1].value); }
#line 2428 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 255 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-4].value)<<" "<<(yyvsp[-3].value)<<" "<<(yyvsp[-1].value); }
#line 2434 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 256 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[-1].value); }
#line 2440 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 257 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-4].value)<<" "<<(yyvsp[-3].value)<<" "<<(yyvsp[-1].value); }
#line 2446 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 260 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[0].value); }
#line 2452 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 261 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[-1].value); }
#line 2458 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 262 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[0].value); }
#line 2464 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 263 "Parser.y" /* yacc.c:1646  */
    {cout<<(yyvsp[-2].value)<<" "<<(yyvsp[-1].value); }
#line 2470 "Parser.tab.c" /* yacc.c:1646  */
    break;


#line 2474 "Parser.tab.c" /* yacc.c:1646  */
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
#line 266 "Parser.y" /* yacc.c:1906  */

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
