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
#define YYLAST   1048

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  180
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  318

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
       0,    58,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    69,    70,    73,    74,    77,    78,    81,    82,    83,
      84,    87,    88,    91,    92,    93,    95,    96,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   112,
     113,   114,   115,   116,   117,   120,   121,   124,   125,   126,
     127,   128,   129,   130,   133,   134,   135,   136,   137,   140,
     141,   142,   143,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   158,   159,   160,   161,   162,   163,   166,
     167,   170,   171,   172,   173,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   190,   191,   192,
     193,   194,   197,   198,   199,   200,   201,   202,   203,   204,
     207,   208,   209,   210,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   241,   242,
     243,   244,   245,   246,   247,   248,   251,   252,   253,   254,
     255,   256,   257,   258,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   275,   276,   279,   280,
     283,   284,   285,   286,   287,   288,   289,   290,   293,   294,
     295
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
  "st", "head", "title", "body", "misc", "consume", "miscph", "consumeph",
  "flow", "phraseopen", "phrases", "phr", "fontph", "atagph", "gtph",
  "list", "listitem", "div", "dl", "dt", "dd", "caption", "table", "tr",
  "th", "td", "figure", "figcap", "img", "atag", "font", YY_NULLPTR
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

#define YYPACT_NINF -242

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-242)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     113,    18,    88,    35,   142,  -242,   119,   510,    20,    32,
    -242,  -242,    49,    36,  -242,    73,    45,  -242,   367,   185,
    -242,    26,   551,    74,    -1,     0,   319,   183,    95,  -242,
    -242,   912,    69,  -242,    81,  -242,  -242,    97,  -242,  -242,
    -242,   128,  -242,   912,   364,    42,     9,  -242,  -242,   412,
    -242,    94,   367,   912,   258,    92,  -242,   573,    99,  -242,
     912,   105,  -242,   111,  -242,  -242,   122,   912,  -242,   912,
     599,   316,  -242,   912,   625,   120,  -242,   551,   912,   659,
     269,  -242,   912,   693,   135,   -13,  -242,  -242,  -242,  -242,
    -242,  -242,  -242,  -242,   452,   459,   134,  -242,   380,   132,
    -242,   137,   452,  -242,   912,   364,  -242,   912,   145,  -242,
     367,   912,   912,   912,   147,   150,  -242,   912,    74,   141,
     136,  -242,  -242,   138,     0,   912,   599,  -242,  -242,   133,
     711,   912,   625,   139,  -242,   130,   140,   149,   551,   912,
     659,  -242,   781,   127,    65,   236,   745,   763,   487,   158,
     693,   978,  -242,   452,  -242,  -242,   978,   155,   161,   186,
     928,   184,  -242,  -242,  -242,   912,   201,  -242,  -242,  -242,
     912,   804,  -242,  -242,   822,  -242,  -242,  -242,  -242,     0,
    -242,   912,   192,  -242,   856,   912,   878,   484,   912,   179,
    -242,   181,   781,   781,   912,   135,   135,   505,   174,   170,
     196,   194,   177,   198,   781,   912,   188,   978,  -242,  -242,
     945,   960,  -242,  -242,  -242,   912,  -242,   912,   231,  -242,
     223,  -242,  -242,   912,   912,   220,  -242,   566,   213,   219,
     878,   641,  -242,   912,   912,   781,  -242,   233,  -242,   135,
     745,   435,   532,   613,   763,   647,   756,   704,   781,  -242,
     912,  -242,   242,  -242,   967,   235,  -242,  -242,   912,  -242,
    -242,  -242,   912,   878,   815,   871,   659,   239,   878,  -242,
    -242,   912,  -242,  -242,   745,   745,   759,   135,   976,  -242,
     763,   763,   973,   135,   987,  -242,  -242,  -242,  -242,  -242,
    -242,  -242,   878,   878,   992,  -242,   659,  -242,  -242,  -242,
    -242,   745,  -242,   135,  -242,  -242,   763,  -242,   135,  -242,
    -242,   878,  -242,  -242,  -242,  -242,  -242,  -242
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     2,     0,     0,     0,     4,     0,     0,     0,     0,
       1,     3,     0,     0,    12,     0,     0,    16,     0,     0,
      19,     0,     0,     0,     0,     0,     0,     0,     0,    18,
      17,    32,     0,     6,     0,    10,     5,     0,     9,    13,
      22,     0,    11,    41,     0,     0,     0,    23,    27,     0,
      28,     0,     0,    66,     0,     0,    29,     0,     0,    37,
      81,     0,    33,     0,   169,    20,     0,     0,    38,    74,
       0,     0,    30,   158,     0,     0,    36,     0,    85,     0,
       0,    34,   122,     0,     0,     0,    35,    31,    15,     8,
       7,    14,    21,    40,    47,     0,     0,    45,     0,     0,
      24,     0,     0,    25,    44,     0,    26,    42,     0,    65,
       0,    67,    64,   175,     0,     0,    82,    84,     0,     0,
       0,    77,    80,     0,     0,    76,     0,   163,   167,     0,
       0,   157,     0,     0,    89,     0,     0,     0,     0,    86,
       0,   123,   111,     0,     0,   124,     0,     0,     0,     0,
       0,    50,    49,    51,    48,    61,     0,     0,     0,     0,
       0,     0,    43,    46,    39,    70,     0,    68,    63,   172,
     174,     0,    83,   168,     0,   180,    79,    73,    78,     0,
     166,   155,     0,   162,     0,    87,     0,     0,    93,     0,
      90,     0,   113,   110,   114,     0,     0,   128,   138,     0,
       0,   146,     0,     0,   125,   119,     0,    53,    52,    60,
       0,     0,    58,    56,    69,    72,   171,   177,     0,   178,
       0,    75,   160,   156,   154,     0,    91,   104,     0,   100,
       0,     0,    94,    88,    95,   112,   115,     0,   132,     0,
       0,   140,   139,   126,     0,   148,   147,   127,   129,   121,
     116,    62,     0,    54,     0,     0,    71,   176,   173,   179,
     161,   159,   165,     0,   108,   102,     0,    97,     0,    92,
      96,   118,   133,   142,     0,     0,   141,     0,   130,   150,
       0,     0,   149,     0,   131,   117,    59,    57,    55,   170,
     164,   105,     0,     0,   106,   101,     0,    98,   120,   144,
     143,     0,   134,     0,   152,   151,     0,   135,     0,   109,
     103,     0,    99,   145,   136,   153,   137,   107
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -242,  -242,   273,  -242,     8,   217,   305,   -48,   -17,    -7,
     -42,   -15,   176,  -242,  -242,  -242,  -110,   156,   -60,  -242,
    -131,  -219,   146,  -242,  -188,  -217,  -241,  -242,   151,   172,
    -242,  -242
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     8,    16,     9,    31,   148,    48,    49,   228,
      50,    51,    97,   103,   100,    56,    72,   124,    62,    81,
     137,   229,   144,    86,   149,   200,   203,    76,   130,    65,
      59,    68
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      32,   106,    54,   279,    55,    20,   106,   237,   238,   191,
     108,   267,    13,    23,   177,    61,    34,   133,    20,    75,
      37,    66,     4,   273,    87,    33,    23,    95,    67,    96,
       7,   101,    69,    70,   150,    10,    93,    35,   102,   304,
     305,    38,    29,    30,   291,    57,   109,   106,    58,   297,
     114,   272,    42,   116,    36,    29,    30,   299,   300,     7,
     120,    98,   121,   123,    99,   315,   127,   129,   166,   221,
      61,   134,   136,   309,   310,   141,   143,   151,   189,   152,
      88,   156,    39,   157,   313,   160,    89,   161,    95,   302,
      96,    20,   317,     5,     6,   307,    63,   162,     7,    23,
     164,    64,    90,   106,   167,   168,   169,   107,   106,   112,
     172,   194,   106,    20,   195,   314,     1,     2,   178,   123,
     316,    23,   115,   182,   183,   129,    14,    15,    29,    30,
     117,    61,   190,   136,   118,   295,   207,    91,   208,   199,
     202,    82,    83,   143,    84,   119,    20,    11,     6,   154,
      29,    30,     7,    20,    23,   158,   131,   132,   214,   106,
     159,    23,   165,   216,   218,   312,   175,   220,   170,   171,
     174,   180,   176,   186,   222,   193,   209,   225,   226,   185,
     210,   232,   187,    29,    30,   145,   146,   236,   147,   188,
      29,    30,    20,   156,   254,   252,   255,    52,   249,    44,
      23,    20,    53,    20,   205,    45,   106,    77,   256,    23,
     257,    23,    20,    46,   213,   211,   260,   261,   215,   233,
      23,   234,   242,    78,    79,   240,   269,   270,   223,    29,
      30,   246,    40,   199,   250,    47,    47,   202,    29,    30,
      29,    30,    40,   285,    40,    40,   243,   244,   247,    29,
      30,   289,   258,   259,    20,   290,   262,   265,    92,   136,
     266,    47,    23,   286,   298,   288,    47,   199,   199,    47,
     110,    47,   105,   202,   202,   111,    20,    12,    45,   271,
     296,   163,   179,   184,    23,   196,    46,    20,    92,   136,
     173,    29,    30,   138,   199,    23,   206,    92,     0,   202,
       0,    40,    92,     0,     0,     0,     0,     0,     0,   139,
     140,    47,    47,    29,    30,    47,     0,     0,     0,    47,
      41,     0,    47,     0,    29,    30,     0,    47,     0,     0,
      71,    18,    80,    85,    20,    19,     0,    20,     0,    21,
       0,    40,    23,    22,     0,    23,     0,    24,   125,   126,
      25,     0,     0,     0,    26,    73,    74,     0,    27,    40,
       0,     0,    40,     0,    28,    92,     0,     0,    47,     0,
      47,    29,    30,    47,    29,    30,     0,    47,    44,    94,
      43,    44,    20,     0,    45,    20,     0,    45,     0,     0,
      23,     0,    46,    23,    44,    46,    40,     0,    20,     0,
      45,   155,     0,     0,    40,     0,    23,     0,    46,    92,
      40,     0,    40,    40,    92,    40,     0,     0,    40,    29,
      30,    40,    29,    30,    47,   104,   105,    47,    47,    71,
      20,     0,    45,     0,     0,    29,    30,     0,    23,     0,
      46,     0,     0,     0,    40,     0,     0,   192,    92,     0,
     197,     0,    92,    20,     0,     0,    40,     0,    92,    40,
      40,    23,    92,    40,    40,    92,    44,    29,    30,     0,
      20,    47,    45,   105,   153,     0,     0,    20,    23,    45,
      46,    92,    40,     0,    71,    23,   274,    46,     0,     0,
      29,    30,   231,    92,    40,    92,     0,     0,   235,    92,
      40,    92,    20,   241,     0,    20,   245,    29,    30,   248,
      23,    92,     0,    23,    29,    30,     0,     0,     0,     0,
      40,    17,    18,    20,     0,    40,    19,   230,    20,     0,
      21,    23,   264,     0,    22,     0,    23,   204,    24,    29,
      30,    25,    29,    30,     0,    26,     0,   276,   278,    27,
      20,   282,   284,     0,   239,    28,     0,     0,    23,     0,
      29,    30,     0,    18,     0,    29,    30,    19,     0,    20,
     294,    21,     0,     0,     0,    22,    60,    23,     0,    24,
       0,     0,    25,   275,    20,    18,    26,    29,    30,    19,
      27,    20,    23,    21,   113,     0,    28,    22,     0,    23,
       0,    24,     0,     0,    25,     0,    29,    30,    26,   263,
       0,    18,    27,     0,     0,    19,     0,    20,    28,    21,
       0,    29,    30,    22,     0,    23,     0,    24,    29,    30,
      25,    20,     0,   122,    26,     0,     0,    18,    27,    23,
       0,    19,     0,    20,    28,    21,     0,     0,     0,    22,
       0,    23,     0,    24,    29,    30,    25,     0,     0,    20,
      26,     0,   277,   128,    27,    20,     0,    23,    29,    30,
      28,    18,     0,    23,     0,    19,     0,    20,     0,    21,
      29,    30,     0,    22,   268,    23,     0,    24,     0,     0,
      25,     0,     0,     0,    26,     0,    29,    30,    27,     0,
     280,   135,    29,    30,    28,    18,     0,     0,     0,    19,
       0,    20,     0,    21,    29,    30,     0,    22,     0,    23,
       0,    24,    20,    18,    25,     0,     0,    19,    26,    20,
      23,    21,    27,     0,     0,    22,     0,    23,    28,    24,
       0,   142,    25,     0,     0,     0,    26,   181,    29,    30,
      27,     0,     0,   283,     0,     0,    28,    18,     0,    29,
      30,    19,     0,    20,     0,    21,    29,    30,     0,    22,
       0,    23,     0,    24,    20,    18,    25,    20,     0,    19,
      26,    20,    23,    21,    27,    23,     0,    22,     0,    23,
      28,    24,     0,     0,    25,     0,     0,   198,    26,    20,
      29,    30,    27,     0,     0,     0,     0,    23,    28,   281,
     301,    29,    30,     0,    29,    30,    18,   201,    29,    30,
      19,     0,    20,     0,    21,   217,     0,     0,    22,     0,
      23,     0,    24,    20,    18,    25,    29,    30,    19,    26,
      20,    23,    21,    27,     0,     0,    22,     0,    23,    28,
      24,     0,   219,    25,     0,     0,     0,    26,   292,    29,
      30,    27,     0,     0,     0,     0,     0,    28,    18,     0,
      29,    30,    19,     0,    20,     0,    21,    29,    30,     0,
      22,     0,    23,     0,    24,     0,     0,    25,     0,    20,
      18,    26,   224,     0,    19,    27,    20,    23,    21,     0,
       0,    28,    22,     0,    23,     0,    24,     0,     0,    25,
       0,    29,    30,    26,   293,     0,     0,    27,     0,     0,
       0,     0,   227,    28,    18,     0,    29,    30,    19,     0,
      20,     0,    21,    29,    30,     0,    22,     0,    23,     0,
      24,     0,   105,    25,     0,     0,    20,    26,    45,     0,
       0,    27,     0,     0,    23,     0,    46,    28,   212,    44,
       0,     0,     0,    20,     0,    45,   251,    29,    30,     0,
       0,    23,     0,    46,    44,     0,     0,     0,    20,     0,
      45,   105,     0,    29,    30,    20,    23,    45,    46,     0,
     253,    20,   105,    23,    20,    46,    20,   287,    45,    23,
      29,    30,    23,     0,    23,    20,    46,     0,     0,     0,
      20,     0,     0,    23,     0,    29,    30,     0,    23,     0,
       0,     0,    29,    30,     0,   303,   306,     0,    29,    30,
       0,    29,    30,    29,    30,   311,   308,     0,     0,     0,
       0,     0,    29,    30,     0,     0,     0,    29,    30
};

static const yytype_int16 yycheck[] =
{
       7,    49,    19,   244,    19,    18,    54,   195,   196,   140,
      52,   230,     4,    26,   124,    22,     8,    77,    18,    26,
      12,    22,     4,   240,    31,     5,    26,    44,    29,    44,
      10,    22,    32,    33,    47,     0,    43,     5,    29,   280,
     281,     5,    55,    56,   263,    19,    53,    95,    22,   268,
      57,   239,     7,    60,     5,    55,    56,   274,   275,    10,
      67,    19,    69,    70,    22,   306,    73,    74,   110,   179,
      77,    78,    79,   292,   293,    82,    83,    94,   138,    94,
      11,    98,     9,    98,   301,   102,     5,   102,   105,   277,
     105,    18,   311,     5,     6,   283,    22,   104,    10,    26,
     107,    27,     5,   151,   111,   112,   113,    13,   156,    17,
     117,    46,   160,    18,    49,   303,     3,     4,   125,   126,
     308,    26,    23,   130,   131,   132,     7,     8,    55,    56,
      25,   138,   139,   140,    23,   266,   153,     9,   153,   146,
     147,    46,    47,   150,    49,    23,    18,     5,     6,    15,
      55,    56,    10,    18,    26,    23,    36,    37,   165,   207,
      23,    26,    17,   170,   171,   296,    30,   174,    21,    19,
      29,    38,    34,    43,   181,    48,    21,   184,   185,    40,
      19,   188,    42,    55,    56,    50,    51,   194,    53,    40,
      55,    56,    18,   210,   211,   210,   211,    12,   205,    14,
      26,    18,    17,    18,    46,    20,   254,    24,   215,    26,
     217,    26,    18,    28,    30,    29,   223,   224,    17,    40,
      26,    40,    52,    40,    41,    51,   233,   234,    36,    55,
      56,    54,    15,   240,    46,    18,    19,   244,    55,    56,
      55,    56,    25,   250,    27,    28,    50,    53,    50,    55,
      56,   258,    21,    30,    18,   262,    36,    44,    41,   266,
      41,    44,    26,    21,   271,    30,    49,   274,   275,    52,
      12,    54,    14,   280,   281,    17,    18,     4,    20,    46,
      41,   105,   126,   132,    26,    49,    28,    18,    71,   296,
     118,    55,    56,    24,   301,    26,   150,    80,    -1,   306,
      -1,    84,    85,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    94,    95,    55,    56,    98,    -1,    -1,    -1,   102,
      15,    -1,   105,    -1,    55,    56,    -1,   110,    -1,    -1,
      25,    12,    27,    28,    18,    16,    -1,    18,    -1,    20,
      -1,   124,    26,    24,    -1,    26,    -1,    28,    32,    33,
      31,    -1,    -1,    -1,    35,    36,    37,    -1,    39,   142,
      -1,    -1,   145,    -1,    45,   148,    -1,    -1,   151,    -1,
     153,    55,    56,   156,    55,    56,    -1,   160,    14,    15,
      13,    14,    18,    -1,    20,    18,    -1,    20,    -1,    -1,
      26,    -1,    28,    26,    14,    28,   179,    -1,    18,    -1,
      20,    21,    -1,    -1,   187,    -1,    26,    -1,    28,   192,
     193,    -1,   195,   196,   197,   198,    -1,    -1,   201,    55,
      56,   204,    55,    56,   207,    13,    14,   210,   211,   124,
      18,    -1,    20,    -1,    -1,    55,    56,    -1,    26,    -1,
      28,    -1,    -1,    -1,   227,    -1,    -1,   142,   231,    -1,
     145,    -1,   235,    18,    -1,    -1,   239,    -1,   241,   242,
     243,    26,   245,   246,   247,   248,    14,    55,    56,    -1,
      18,   254,    20,    14,    15,    -1,    -1,    18,    26,    20,
      28,   264,   265,    -1,   179,    26,    51,    28,    -1,    -1,
      55,    56,   187,   276,   277,   278,    -1,    -1,   193,   282,
     283,   284,    18,   198,    -1,    18,   201,    55,    56,   204,
      26,   294,    -1,    26,    55,    56,    -1,    -1,    -1,    -1,
     303,    11,    12,    18,    -1,   308,    16,    43,    18,    -1,
      20,    26,   227,    -1,    24,    -1,    26,    50,    28,    55,
      56,    31,    55,    56,    -1,    35,    -1,   242,   243,    39,
      18,   246,   247,    -1,    49,    45,    -1,    -1,    26,    -1,
      55,    56,    -1,    12,    -1,    55,    56,    16,    -1,    18,
     265,    20,    -1,    -1,    -1,    24,    25,    26,    -1,    28,
      -1,    -1,    31,    51,    18,    12,    35,    55,    56,    16,
      39,    18,    26,    20,    21,    -1,    45,    24,    -1,    26,
      -1,    28,    -1,    -1,    31,    -1,    55,    56,    35,    43,
      -1,    12,    39,    -1,    -1,    16,    -1,    18,    45,    20,
      -1,    55,    56,    24,    -1,    26,    -1,    28,    55,    56,
      31,    18,    -1,    34,    35,    -1,    -1,    12,    39,    26,
      -1,    16,    -1,    18,    45,    20,    -1,    -1,    -1,    24,
      -1,    26,    -1,    28,    55,    56,    31,    -1,    -1,    18,
      35,    -1,    49,    38,    39,    18,    -1,    26,    55,    56,
      45,    12,    -1,    26,    -1,    16,    -1,    18,    -1,    20,
      55,    56,    -1,    24,    43,    26,    -1,    28,    -1,    -1,
      31,    -1,    -1,    -1,    35,    -1,    55,    56,    39,    -1,
      53,    42,    55,    56,    45,    12,    -1,    -1,    -1,    16,
      -1,    18,    -1,    20,    55,    56,    -1,    24,    -1,    26,
      -1,    28,    18,    12,    31,    -1,    -1,    16,    35,    18,
      26,    20,    39,    -1,    -1,    24,    -1,    26,    45,    28,
      -1,    48,    31,    -1,    -1,    -1,    35,    36,    55,    56,
      39,    -1,    -1,    49,    -1,    -1,    45,    12,    -1,    55,
      56,    16,    -1,    18,    -1,    20,    55,    56,    -1,    24,
      -1,    26,    -1,    28,    18,    12,    31,    18,    -1,    16,
      35,    18,    26,    20,    39,    26,    -1,    24,    -1,    26,
      45,    28,    -1,    -1,    31,    -1,    -1,    52,    35,    18,
      55,    56,    39,    -1,    -1,    -1,    -1,    26,    45,    53,
      51,    55,    56,    -1,    55,    56,    12,    54,    55,    56,
      16,    -1,    18,    -1,    20,    21,    -1,    -1,    24,    -1,
      26,    -1,    28,    18,    12,    31,    55,    56,    16,    35,
      18,    26,    20,    39,    -1,    -1,    24,    -1,    26,    45,
      28,    -1,    30,    31,    -1,    -1,    -1,    35,    43,    55,
      56,    39,    -1,    -1,    -1,    -1,    -1,    45,    12,    -1,
      55,    56,    16,    -1,    18,    -1,    20,    55,    56,    -1,
      24,    -1,    26,    -1,    28,    -1,    -1,    31,    -1,    18,
      12,    35,    36,    -1,    16,    39,    18,    26,    20,    -1,
      -1,    45,    24,    -1,    26,    -1,    28,    -1,    -1,    31,
      -1,    55,    56,    35,    43,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    44,    45,    12,    -1,    55,    56,    16,    -1,
      18,    -1,    20,    55,    56,    -1,    24,    -1,    26,    -1,
      28,    -1,    14,    31,    -1,    -1,    18,    35,    20,    -1,
      -1,    39,    -1,    -1,    26,    -1,    28,    45,    30,    14,
      -1,    -1,    -1,    18,    -1,    20,    21,    55,    56,    -1,
      -1,    26,    -1,    28,    14,    -1,    -1,    -1,    18,    -1,
      20,    14,    -1,    55,    56,    18,    26,    20,    28,    -1,
      30,    18,    14,    26,    18,    28,    18,    30,    20,    26,
      55,    56,    26,    -1,    26,    18,    28,    -1,    -1,    -1,
      18,    -1,    -1,    26,    -1,    55,    56,    -1,    26,    -1,
      -1,    -1,    55,    56,    -1,    49,    53,    -1,    55,    56,
      -1,    55,    56,    55,    56,    43,    49,    -1,    -1,    -1,
      -1,    -1,    55,    56,    -1,    -1,    -1,    55,    56
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,    59,     4,     5,     6,    10,    60,    62,
       0,     5,    60,    62,     7,     8,    61,    11,    12,    16,
      18,    20,    24,    26,    28,    31,    35,    39,    45,    55,
      56,    63,    67,     5,    62,     5,     5,    62,     5,     9,
      63,    64,     7,    13,    14,    20,    28,    63,    65,    66,
      68,    69,    12,    17,    66,    69,    73,    19,    22,    88,
      25,    67,    76,    22,    27,    87,    22,    29,    89,    32,
      33,    64,    74,    36,    37,    67,    85,    24,    40,    41,
      64,    77,    46,    47,    49,    64,    81,    67,    11,     5,
       5,     9,    63,    67,    15,    66,    69,    70,    19,    22,
      72,    22,    29,    71,    13,    14,    65,    13,    68,    67,
      12,    17,    17,    21,    67,    23,    67,    25,    23,    23,
      67,    67,    34,    67,    75,    32,    33,    67,    38,    67,
      86,    36,    37,    76,    67,    42,    67,    78,    24,    40,
      41,    67,    48,    67,    80,    50,    51,    53,    64,    82,
      47,    66,    69,    15,    15,    21,    66,    69,    23,    23,
      66,    69,    67,    70,    67,    17,    68,    67,    67,    67,
      21,    19,    67,    87,    29,    30,    34,    74,    67,    75,
      38,    36,    67,    67,    86,    40,    43,    42,    40,    76,
      67,    78,    64,    48,    46,    49,    49,    64,    52,    67,
      83,    54,    67,    84,    50,    46,    80,    66,    69,    21,
      19,    29,    30,    30,    67,    17,    67,    21,    67,    30,
      67,    74,    67,    36,    36,    67,    67,    44,    67,    79,
      43,    64,    67,    40,    40,    64,    67,    82,    82,    49,
      51,    64,    52,    50,    53,    64,    54,    50,    64,    67,
      46,    21,    69,    30,    66,    69,    67,    67,    21,    30,
      67,    67,    36,    43,    64,    44,    41,    79,    43,    67,
      67,    46,    82,    83,    51,    51,    64,    49,    64,    84,
      53,    53,    64,    49,    64,    67,    21,    30,    30,    67,
      67,    79,    43,    43,    64,    78,    41,    79,    67,    83,
      83,    51,    82,    49,    84,    84,    53,    82,    49,    79,
      79,    43,    78,    83,    82,    84,    82,    79
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    60,    60,    61,    61,    62,    62,    63,    63,    63,
      63,    64,    64,    65,    65,    65,    66,    66,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    68,
      68,    68,    68,    68,    68,    69,    69,    70,    70,    70,
      70,    70,    70,    70,    71,    71,    71,    71,    71,    72,
      72,    72,    72,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    74,    74,    74,    74,    74,    74,    75,
      75,    76,    76,    76,    76,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    78,    78,    78,
      78,    78,    79,    79,    79,    79,    79,    79,    79,    79,
      80,    80,    80,    80,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    83,    83,
      83,    83,    83,    83,    83,    83,    84,    84,    84,    84,
      84,    84,    84,    84,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    86,    86,    87,    87,
      88,    88,    88,    88,    88,    88,    88,    88,    89,    89,
      89
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     2,     4,     3,     5,     4,     4,
       3,     3,     2,     2,     3,     3,     2,     1,     1,     1,
       2,     2,     1,     1,     2,     2,     2,     1,     2,     2,
       2,     2,     1,     2,     2,     2,     2,     2,     2,     3,
       2,     1,     2,     3,     2,     2,     3,     1,     2,     2,
       2,     2,     3,     3,     4,     5,     3,     5,     3,     5,
       3,     2,     4,     3,     2,     2,     1,     2,     3,     4,
       3,     5,     4,     3,     1,     4,     2,     2,     3,     2,
       1,     1,     2,     3,     2,     1,     2,     3,     4,     2,
       3,     4,     5,     3,     4,     4,     5,     4,     5,     6,
       3,     5,     2,     4,     1,     3,     3,     5,     2,     4,
       2,     1,     3,     2,     3,     4,     4,     5,     5,     3,
       6,     4,     1,     2,     1,     2,     3,     3,     2,     3,
       4,     4,     3,     4,     5,     5,     6,     6,     1,     2,
       2,     3,     3,     4,     4,     5,     1,     2,     2,     3,
       3,     4,     4,     5,     4,     3,     4,     2,     1,     5,
       4,     5,     3,     2,     6,     5,     2,     1,     3,     1,
       6,     4,     3,     5,     3,     2,     5,     4,     4,     5,
       3
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
#line 1646 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 59 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); cout<<concat(p,(yyvsp[0].value))<<endl; }
#line 1652 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 60 "Parser.y" /* yacc.c:1646  */
    { cout<<concat((yyvsp[-1].value),(yyvsp[0].value))<<endl; }
#line 1658 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 61 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*y=concat(p,(yyvsp[-1].value)); cout<<concat(y,(yyvsp[0].value))<<endl; }
#line 1664 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 62 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); cout<<concat(p,(yyvsp[0].value))<<endl; }
#line 1670 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 63 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*y=concat(p,(yyvsp[-2].value)),*x=concat(y,(yyvsp[-1].value)); cout<<concat(x,(yyvsp[0].value))<<endl;}
#line 1676 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 64 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*y=concat(p,(yyvsp[-1].value)); cout<<concat(y,(yyvsp[0].value))<<endl; }
#line 1682 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 65 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*y=concat(p,(yyvsp[-1].value)); cout<<concat(y,(yyvsp[0].value))<<endl; }
#line 1688 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 66 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); cout<<concat(p,(yyvsp[0].value))<<endl; }
#line 1694 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 69 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 1700 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 70 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1706 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 73 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1712 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 74 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 1718 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 77 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 1724 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 78 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1730 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 81 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 1736 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 82 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 1742 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 83 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 1748 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 84 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1754 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 87 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1760 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 88 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 1766 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 91 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 1772 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 92 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1778 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 93 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1784 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 95 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1790 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 96 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 1796 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 99 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1802 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 100 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1808 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 101 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1814 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 102 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1820 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 103 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value);}
#line 1826 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 104 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1832 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 105 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1838 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 106 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1844 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 107 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1850 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 108 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1856 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 109 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1862 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 112 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 1868 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 113 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1874 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 114 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=(yyvsp[0].value); }
#line 1880 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 115 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1886 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 116 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-2].value),(yyvsp[-1].value)); }
#line 1892 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 117 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1898 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 120 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1904 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 121 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 1910 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 124 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 1916 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 125 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1922 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 126 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1928 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 127 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1934 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 128 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1940 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 129 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 1946 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 130 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 1952 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 133 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 1958 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 134 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 1964 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 135 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 1970 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 136 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 1976 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 137 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 1982 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 140 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 1988 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 141 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 1994 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 142 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2000 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 143 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2006 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 146 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2012 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 147 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2018 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 148 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2024 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 149 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2030 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 150 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2036 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 151 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2042 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 152 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value)); (yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2048 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 153 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2054 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 154 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value));}
#line 2060 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 155 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value)); (yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2066 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 158 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2072 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 159 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2078 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 160 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value)); (yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2084 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 161 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2090 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 162 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2096 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 163 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2102 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 166 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2108 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 167 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2114 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 170 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2120 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 171 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2126 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 172 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2132 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 173 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2138 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 176 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2144 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 177 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2150 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 178 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2156 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 179 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value)); (yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2162 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 180 "Parser.y" /* yacc.c:1646  */
    {concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2168 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 181 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2174 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 182 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value)); (yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2180 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 183 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2186 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 184 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2192 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 185 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value)); (yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2198 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 186 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value)); (yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2204 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 187 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2210 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 190 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value)); (yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2216 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 191 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2222 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 192 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-5].value),(yyvsp[-4].value)),*x=concat(p,(yyvsp[-3].value)),*y=concat(x,(yyvsp[-2].value)),*z=concat(y,(yyvsp[-1].value)); (yyval.value)=concat(z,(yyvsp[0].value)); }
#line 2228 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 193 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2234 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 194 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2240 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 197 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2246 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 198 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value)); (yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2252 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 199 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2258 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 200 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2264 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 201 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2270 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 202 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2276 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 203 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2282 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 204 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2288 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 207 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2294 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 208 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2300 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 209 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2306 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 210 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2312 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 213 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2318 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 214 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2324 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 215 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2330 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 216 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2336 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 217 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2342 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 218 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2348 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 219 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-5].value),(yyvsp[-4].value)),*x=concat(p,(yyvsp[-3].value)),*y=concat(x,(yyvsp[-2].value)),*z=concat(y,(yyvsp[-1].value)); (yyval.value)=concat(z,(yyvsp[0].value)); }
#line 2354 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 220 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2360 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 221 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2366 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 222 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2372 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 225 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2378 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 226 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2384 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 227 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2390 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 228 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2396 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 229 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2402 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 230 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2408 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 231 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2414 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 232 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2420 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 233 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2426 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 234 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2432 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 235 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2438 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 236 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2444 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 237 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-5].value),(yyvsp[-4].value)),*x=concat(p,(yyvsp[-3].value)),*y=concat(x,(yyvsp[-2].value)),*z=concat(y,(yyvsp[-1].value)); (yyval.value)=concat(z,(yyvsp[0].value)); }
#line 2450 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 238 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-5].value),(yyvsp[-4].value)),*x=concat(p,(yyvsp[-3].value)),*y=concat(x,(yyvsp[-2].value)),*z=concat(y,(yyvsp[-1].value)); (yyval.value)=concat(z,(yyvsp[0].value)); }
#line 2456 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 241 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2462 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 242 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2468 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 243 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2474 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 244 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2480 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 245 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2486 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 246 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2492 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 247 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2498 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 248 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2504 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 251 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2510 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 252 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2516 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 253 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2522 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 254 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2528 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 255 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2534 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 256 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2540 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 257 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2546 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 258 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2552 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 261 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2558 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 262 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2564 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 263 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2570 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 264 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2576 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 265 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2582 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 266 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2588 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 267 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2594 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 268 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2600 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 269 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2606 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 270 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2612 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 271 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-5].value),(yyvsp[-4].value)),*x=concat(p,(yyvsp[-3].value)),*y=concat(x,(yyvsp[-2].value)),*z=concat(y,(yyvsp[-1].value)); (yyval.value)=concat(z,(yyvsp[0].value)); }
#line 2618 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 272 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2624 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 275 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2630 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 276 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2636 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 279 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2642 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 280 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2648 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 283 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-5].value),(yyvsp[-4].value)),*x=concat(p,(yyvsp[-3].value)),*y=concat(x,(yyvsp[-2].value)),*z=concat(y,(yyvsp[-1].value)); (yyval.value)=concat(z,(yyvsp[0].value)); }
#line 2654 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 284 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2660 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 285 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2666 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 286 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2672 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 287 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2678 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 288 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2684 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 289 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2690 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 290 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2696 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 293 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2702 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 294 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2708 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 295 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2714 "Parser.tab.c" /* yacc.c:1646  */
    break;


#line 2718 "Parser.tab.c" /* yacc.c:1646  */
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
#line 298 "Parser.y" /* yacc.c:1906  */

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