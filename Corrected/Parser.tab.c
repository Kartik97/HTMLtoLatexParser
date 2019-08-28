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
    SYMBOL = 313,
    CENTEROP = 314,
    CENTERCL = 315
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 15 "Parser.y" /* yacc.c:355  */

	char* object;
	char* value;

#line 185 "Parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 202 "Parser.tab.c" /* yacc.c:358  */

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
#define YYLAST   1417

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  197
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  345

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   315

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
      55,    56,    57,    58,    59,    60
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    58,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    69,    70,    73,    74,    77,    78,    81,    82,    83,
      84,    85,    88,    89,    92,    93,    94,    95,    98,    99,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   116,   117,   118,   119,   122,   123,   124,   125,
     126,   127,   130,   131,   134,   135,   136,   137,   138,   139,
     140,   143,   144,   145,   146,   147,   150,   151,   152,   153,
     154,   155,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   170,   171,   172,   173,   174,   177,   178,   179,
     180,   181,   182,   185,   186,   189,   190,   191,   192,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   209,   210,   211,   212,   213,   216,   217,   218,   219,
     220,   221,   222,   223,   226,   227,   228,   229,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   260,   261,   262,   263,   264,   265,   266,   267,
     270,   271,   272,   273,   274,   275,   276,   277,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     294,   295,   298,   299,   302,   303,   304,   305,   306,   307,
     308,   309,   312,   313,   314,   315,   316,   317
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
  "CENTEROP", "CENTERCL", "$accept", "st", "head", "title", "body", "misc",
  "consume", "miscph", "consumeph", "flow", "center", "phraseopen",
  "phrases", "phr", "fontph", "atagph", "gtph", "centerph", "list",
  "listitem", "div", "dl", "dt", "dd", "caption", "table", "tr", "th",
  "td", "figure", "figcap", "img", "atag", "font", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315
};
# endif

#define YYPACT_NINF -249

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-249)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      28,     3,    82,    11,    84,  -249,    89,   332,    17,     4,
    -249,  -249,    19,     8,  -249,   115,    13,  -249,   248,  1048,
    -249,    24,   608,    12,    -1,   350,   582,   376,   196,  -249,
    -249,  -249,   505,  1028,    22,  -249,    36,  -249,  -249,    55,
    -249,  -249,  -249,   150,  -249,  1028,  1097,    26,     1,   531,
    -249,  -249,   705,  -249,    49,   248,  1028,  1082,    47,  -249,
     630,    44,  -249,  1028,    46,  -249,    53,  -249,  -249,    70,
    1028,  -249,  1028,   656,   435,  -249,  1028,   682,    64,  -249,
     608,  1028,   727,   389,  -249,  1028,   772,   430,   718,  -249,
    1028,    43,  -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,
    1233,  1104,    90,  -249,  1147,    87,  -249,    96,  1233,  -249,
     248,  -249,   556,    52,  -249,  1028,  1097,  -249,  1028,   103,
    -249,   248,  1028,  1028,  1028,   105,   108,  -249,  1028,    12,
      99,   102,  -249,  -249,   104,   350,  1028,   656,  -249,  -249,
     101,   790,  1028,   682,    97,  -249,   106,    98,   107,   608,
    1028,   727,  -249,   500,   100,     9,   161,   835,   853,   783,
     109,   772,  -249,  1028,  1276,  -249,  1233,  -249,  -249,  1156,
     125,   133,   131,  1165,   132,   112,   248,  -249,  -249,  -249,
    -249,  -249,  1028,   144,  -249,  -249,  -249,  1028,   898,  -249,
    -249,   916,  1028,  -249,  -249,  -249,   350,  -249,  1028,   127,
    -249,   961,  1028,   983,   846,  1028,   126,  -249,   129,   500,
     500,  1028,   430,   430,   909,   604,   113,   117,   968,   124,
     136,   500,  1028,   137,  -249,  1276,  -249,  -249,  -249,  1208,
    1213,  -249,  -249,  -249,   122,  -249,  1028,  -249,  1028,   167,
    1028,   160,  -249,  -249,  -249,  1028,  1028,   156,  -249,  1035,
     149,   155,   983,  1071,  -249,  1028,  1028,   500,  -249,   151,
    -249,   430,   835,  1252,  1258,  1087,   853,  1293,  1302,  1131,
     500,  -249,  1028,  -249,  1224,   179,  -249,  1267,   173,  -249,
    -249,  -249,  1028,  -249,  1028,  -249,  -249,  1028,   983,  1311,
    1318,   727,   166,   983,  -249,  -249,  1028,  -249,  -249,   835,
     835,  1324,   430,  1199,  -249,   853,   853,  1338,   430,  1352,
    -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,   983,
     983,  1359,  -249,   727,  -249,  -249,  -249,  -249,   835,  -249,
     430,  -249,  -249,   853,  -249,   430,  -249,  -249,   983,  -249,
    -249,  -249,  -249,  -249,  -249
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     2,     0,     0,     0,     4,     0,     0,     0,     0,
       1,     3,     0,     0,    12,     0,     0,    16,     0,     0,
      19,     0,     0,     0,     0,     0,     0,     0,     0,    18,
      17,    21,     0,    34,     0,     6,     0,    10,     5,     0,
       9,    13,    23,     0,    11,    48,     0,     0,     0,     0,
      24,    29,     0,    30,     0,     0,    75,     0,     0,    31,
       0,     0,    39,    95,     0,    35,     0,   183,    20,     0,
       0,    40,    88,     0,     0,    32,   172,     0,     0,    38,
       0,    99,     0,     0,    36,   136,     0,     0,     0,    37,
      44,     0,    41,    33,    15,     8,     7,    14,    22,    47,
      54,     0,     0,    52,     0,     0,    25,     0,     0,    26,
       0,    84,     0,     0,    27,    51,     0,    28,    49,     0,
      74,     0,    76,    73,   189,     0,     0,    96,    98,     0,
       0,     0,    91,    94,     0,     0,    90,     0,   177,   181,
       0,     0,   171,     0,     0,   103,     0,     0,     0,     0,
     100,     0,   137,   125,     0,     0,   138,     0,     0,     0,
       0,     0,    45,    42,    57,    56,    58,    55,    70,     0,
       0,     0,     0,     0,     0,     0,     0,    83,    82,    50,
      53,    46,    79,     0,    77,    72,   186,   188,     0,    97,
     182,     0,   194,    93,    87,    92,     0,   180,   169,     0,
     176,     0,   101,     0,     0,   107,     0,   104,     0,   127,
     124,   128,     0,     0,   142,   152,     0,     0,   160,     0,
       0,   139,   133,     0,    43,    60,    59,    69,    67,     0,
       0,    65,    63,    85,     0,    78,    81,   185,   191,     0,
     192,     0,   197,    89,   174,   170,   168,     0,   105,   118,
       0,   114,     0,     0,   108,   102,   109,   126,   129,     0,
     146,     0,     0,   154,   153,   140,     0,   162,   161,   141,
     143,   135,   130,    71,     0,     0,    61,     0,     0,    86,
      80,   190,   187,   195,   193,   175,   173,   179,     0,   122,
     116,     0,   111,     0,   106,   110,   132,   147,   156,     0,
       0,   155,     0,   144,   164,     0,     0,   163,     0,   145,
     131,    68,    66,    64,    62,   184,   196,   178,   119,     0,
       0,   120,   115,     0,   112,   134,   158,   157,     0,   148,
       0,   166,   165,     0,   149,     0,   123,   117,     0,   113,
     159,   150,   167,   151,   121
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -249,  -249,   205,  -249,     0,   245,   174,   -51,    -9,    -7,
    -249,   -53,    -2,    95,  -249,  -249,  -249,  -249,  -119,    75,
     -77,  -249,  -146,  -234,    57,  -249,  -177,  -248,  -224,  -249,
      81,   111,  -249,  -249
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     8,    16,     9,    33,   159,    51,    52,   250,
      92,    53,    54,   103,   109,   106,    59,   114,    75,   135,
      65,    84,   148,   251,   155,    89,   160,   217,   220,    79,
     141,    68,    62,    71
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      34,   117,   119,   144,    13,   208,   117,     4,    36,    37,
      57,    10,    39,    40,   298,    64,   194,    58,   292,    78,
      44,    69,    35,   107,    38,    91,    93,     7,    70,     7,
     108,     1,     2,    94,    66,   259,   260,   101,    99,    67,
     112,    95,   304,    60,   102,   104,    61,   113,   105,   120,
     117,   326,   327,   125,   318,   211,   127,   175,   212,   324,
      96,   117,   118,   131,   123,   132,   134,   126,   183,   138,
     140,   128,   206,    64,   145,   147,   129,   243,   152,   154,
     340,   331,   332,   162,   297,   336,   337,     5,     6,    11,
       6,   164,     7,   130,     7,   169,    14,    15,   165,   173,
     142,   143,   170,   163,   344,   167,   174,   101,   179,   342,
     171,   181,   178,   117,   102,   184,   185,   186,   117,   172,
     182,   189,   117,   234,    41,   329,   187,   188,   191,   195,
     134,   334,   192,    20,   199,   200,   140,   202,   193,   197,
     204,    23,    64,   207,   147,   322,   228,   205,   210,   203,
     216,   219,   229,   341,   154,   222,   224,   225,   343,    97,
     230,   236,   232,   245,   226,   264,   255,   265,    20,   256,
      29,    30,   233,    31,   117,   235,    23,   339,   268,    20,
     237,   239,   279,   272,   241,   242,   269,    23,   282,    43,
     284,   244,   287,   290,   247,   248,   291,   296,   254,    74,
     312,    83,    88,   314,   258,    29,    30,   323,    31,    12,
     213,   180,   196,     0,    20,   271,    29,    30,   223,    31,
     274,   277,    23,   117,   201,     0,   117,   275,   278,   280,
       0,   281,     0,   283,     0,     0,     0,     0,   285,   286,
     190,     0,    85,    86,     0,    87,     0,     0,   294,   295,
       0,    29,    30,     0,    31,   216,     0,     0,     0,   219,
      42,    45,    46,    50,    50,   310,    20,     0,    47,     0,
      42,     0,    42,    42,    23,   315,    48,   316,     0,     0,
     317,     0,     0,     0,   147,     0,     0,     0,    98,   325,
       0,    50,   216,   216,    50,     0,     0,    50,   219,   219,
      50,     0,    50,    29,    30,     0,    31,    49,     0,    74,
       0,     0,     0,     0,     0,     0,   147,     0,     0,    98,
       0,   216,     0,     0,     0,     0,   219,   209,    98,     0,
     214,     0,    42,    98,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    17,    18,    50,    50,     0,    19,    50,
      20,     0,    21,    50,     0,    50,    22,    50,    23,     0,
      24,    50,     0,    25,     0,     0,    50,    26,    20,     0,
      74,    27,     0,     0,     0,     0,    23,    28,   253,     0,
      42,     0,    72,    73,   257,     0,     0,    29,    30,   263,
      31,    32,   267,     0,    20,   270,     0,     0,    42,     0,
      80,    42,    23,     0,    98,    29,    30,    20,    31,    50,
       0,    50,     0,   149,    50,    23,    81,    82,    50,     0,
       0,    50,     0,   289,     0,     0,     0,     0,     0,   150,
     151,    29,    30,     0,    31,     0,     0,     0,   301,   303,
       0,    42,   307,   309,    29,    30,     0,    31,    20,    42,
       0,     0,     0,    20,    98,    42,    23,    42,    42,    98,
      42,    23,     0,    42,   321,     0,    42,   136,   137,     0,
      50,     0,     0,     0,    50,    50,     0,     0,     0,     0,
     156,   157,     0,   158,     0,    29,    30,     0,    31,     0,
      29,    30,     0,    31,    42,     0,     0,     0,    98,     0,
       0,     0,    98,     0,     0,     0,    42,     0,    98,    42,
      42,     0,    98,    42,    42,    98,     0,    18,    20,    50,
       0,    19,    50,    20,     0,    21,    23,     0,     0,    22,
       0,    23,     0,    24,    98,    42,    25,     0,     0,     0,
      26,     0,     0,   110,    27,    46,    98,    42,    98,    20,
      28,    47,    98,    42,    98,    29,    30,    23,    31,    48,
      29,    30,     0,    31,    32,    90,    98,     0,   176,     0,
     116,     0,     0,     0,    20,    42,    47,     0,     0,     0,
      42,     0,    23,     0,    48,     0,    29,    30,     0,    31,
      49,   111,     0,     0,    18,     0,     0,     0,    19,     0,
      20,     0,    21,     0,     0,     0,    22,     0,    23,     0,
      24,    29,    30,    25,    31,    49,   177,    26,    76,    77,
      18,    27,    20,     0,    19,     0,    20,    28,    21,     0,
      23,     0,    22,    63,    23,     0,    24,    29,    30,    25,
      31,    32,    18,    26,     0,     0,    19,    27,    20,     0,
      21,   124,     0,    28,    22,   262,    23,     0,    24,    29,
      30,    25,    31,    29,    30,    26,    31,    32,    18,    27,
       0,     0,    19,     0,    20,    28,    21,     0,     0,     0,
      22,     0,    23,     0,    24,    29,    30,    25,    31,    32,
     133,    26,     0,     0,    18,    27,     0,     0,    19,     0,
      20,    28,    21,     0,     0,     0,    22,     0,    23,     0,
      24,    29,    30,    25,    31,    32,     0,    26,   115,   116,
     139,    27,     0,    20,     0,    47,     0,    28,     0,     0,
       0,    23,     0,    48,     0,     0,    20,    29,    30,    18,
      31,    32,     0,    19,    23,    20,     0,    21,     0,     0,
       0,    22,     0,    23,     0,    24,     0,     0,    25,     0,
      29,    30,    26,    31,    49,   161,    27,     0,     0,   146,
       0,     0,    28,    29,    30,     0,    31,     0,     0,     0,
       0,     0,    29,    30,    18,    31,    32,     0,    19,     0,
      20,     0,    21,     0,     0,     0,    22,     0,    23,     0,
      24,    20,    18,    25,     0,     0,    19,    26,    20,    23,
      21,    27,     0,     0,    22,     0,    23,    28,    24,     0,
     153,    25,     0,     0,     0,    26,   198,    29,    30,    27,
      31,    32,     0,   221,     0,    28,     0,     0,    29,    30,
       0,    31,     0,     0,     0,    29,    30,    18,    31,    32,
       0,    19,     0,    20,     0,    21,     0,     0,     0,    22,
       0,    23,     0,    24,    20,    18,    25,     0,     0,    19,
      26,    20,    23,    21,    27,     0,     0,    22,     0,    23,
      28,    24,     0,     0,    25,     0,     0,   215,    26,   252,
      29,    30,    27,    31,    32,     0,     0,     0,    28,     0,
       0,    29,    30,     0,    31,     0,     0,   218,    29,    30,
      18,    31,    32,     0,    19,     0,    20,     0,    21,   238,
       0,     0,    22,     0,    23,     0,    24,    20,    18,    25,
       0,     0,    19,    26,    20,    23,    21,    27,     0,     0,
      22,     0,    23,    28,    24,     0,   240,    25,     0,     0,
       0,    26,     0,    29,    30,    27,    31,    32,   261,     0,
       0,    28,     0,     0,    29,    30,     0,    31,     0,     0,
       0,    29,    30,    18,    31,    32,     0,    19,     0,    20,
       0,    21,     0,     0,     0,    22,    20,    23,     0,    24,
       0,     0,    25,     0,    23,    18,    26,   246,     0,    19,
      27,    20,     0,    21,     0,     0,    28,    22,     0,    23,
       0,    24,     0,     0,    25,     0,    29,    30,    26,    31,
      32,   266,    27,    29,    30,     0,    31,   249,    28,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    29,    30,
      18,    31,    32,     0,    19,     0,    20,     0,    21,     0,
       0,     0,    22,    20,    23,     0,    24,     0,     0,    25,
      55,    23,    46,    26,     0,    56,    20,    27,    47,     0,
       0,     0,     0,    28,    23,     0,    48,     0,   288,     0,
       0,     0,     0,    29,    30,     0,    31,    32,     0,    20,
      29,    30,     0,    31,   121,     0,   116,    23,     0,   122,
      20,     0,    47,    29,    30,    20,    31,    49,    23,     0,
      48,    46,   100,    23,   293,    20,     0,    47,   116,   166,
       0,     0,    20,    23,    47,    48,    29,    30,     0,    31,
      23,     0,    48,     0,     0,     0,   302,    29,    30,     0,
      31,    49,    29,    30,     0,    31,     0,     0,     0,    20,
       0,     0,    29,    30,     0,    31,    49,    23,     0,    29,
      30,    46,    31,    49,     0,    20,     0,    47,   168,     0,
     116,     0,     0,    23,    20,    48,    47,   227,     0,   116,
     308,     0,    23,    20,    48,    47,    29,    30,     0,    31,
       0,    23,     0,    48,     0,   231,     0,     0,     0,     0,
       0,     0,    29,    30,     0,    31,    49,     0,     0,     0,
       0,    29,    30,     0,    31,    49,     0,    20,     0,     0,
      29,    30,    46,    31,    49,    23,    20,    46,    47,   273,
       0,    20,     0,    47,    23,     0,    48,     0,   116,    23,
       0,    48,    20,   276,    47,   311,     0,    46,   330,     0,
      23,    20,    48,    47,    29,    30,     0,    31,     0,    23,
       0,    48,     0,    29,    30,     0,    31,    49,    29,    30,
      20,    31,    49,     0,     0,     0,    20,     0,    23,    29,
      30,   116,    31,    49,    23,    20,     0,    47,    29,    30,
     116,    31,    49,    23,    20,    48,    47,   313,     0,     0,
       0,     0,    23,   299,    48,     0,     0,    29,    30,   300,
      31,    20,     0,    29,    30,     0,    31,     0,     0,    23,
      20,     0,    29,    30,     0,    31,    49,     0,    23,    20,
       0,    29,    30,     0,    31,    49,    20,    23,     0,     0,
       0,     0,    20,     0,    23,     0,   305,     0,    29,    30,
      23,    31,     0,     0,   319,   306,    20,    29,    30,     0,
      31,   320,     0,     0,    23,     0,    29,    30,     0,    31,
      20,     0,     0,    29,    30,   328,    31,    20,    23,    29,
      30,     0,    31,     0,     0,    23,     0,     0,     0,     0,
       0,   333,     0,    29,    30,     0,    31,     0,     0,     0,
       0,   335,   338,     0,     0,     0,     0,    29,    30,     0,
      31,     0,     0,     0,    29,    30,     0,    31
};

static const yytype_int16 yycheck[] =
{
       7,    52,    55,    80,     4,   151,    57,     4,     8,     5,
      19,     0,    12,     5,   262,    22,   135,    19,   252,    26,
       7,    22,     5,    22,     5,    32,    33,    10,    29,    10,
      29,     3,     4,    11,    22,   212,   213,    46,    45,    27,
      49,     5,   266,    19,    46,    19,    22,    49,    22,    56,
     101,   299,   300,    60,   288,    46,    63,   110,    49,   293,
       5,   112,    13,    70,    17,    72,    73,    23,   121,    76,
      77,    25,   149,    80,    81,    82,    23,   196,    85,    86,
     328,   305,   306,    90,   261,   319,   320,     5,     6,     5,
       6,   100,    10,    23,    10,   104,     7,     8,   100,   108,
      36,    37,   104,    60,   338,    15,   108,   116,   115,   333,
      23,   118,    60,   164,   116,   122,   123,   124,   169,    23,
      17,   128,   173,   176,     9,   302,    21,    19,    29,   136,
     137,   308,    30,    18,   141,   142,   143,    40,    34,    38,
      42,    26,   149,   150,   151,   291,    21,    40,    48,    43,
     157,   158,    19,   330,   161,    46,   163,   166,   335,     9,
      29,    17,    30,    36,   166,    52,    40,    50,    18,    40,
      55,    56,    60,    58,   225,   182,    26,   323,    54,    18,
     187,   188,    60,    46,   191,   192,    50,    26,    21,    15,
      30,   198,    36,    44,   201,   202,    41,    46,   205,    25,
      21,    27,    28,    30,   211,    55,    56,    41,    58,     4,
      49,   116,   137,    -1,    18,   222,    55,    56,   161,    58,
     229,   230,    26,   274,   143,    -1,   277,   229,   230,   236,
      -1,   238,    -1,   240,    -1,    -1,    -1,    -1,   245,   246,
     129,    -1,    46,    47,    -1,    49,    -1,    -1,   255,   256,
      -1,    55,    56,    -1,    58,   262,    -1,    -1,    -1,   266,
      15,    13,    14,    18,    19,   272,    18,    -1,    20,    -1,
      25,    -1,    27,    28,    26,   282,    28,   284,    -1,    -1,
     287,    -1,    -1,    -1,   291,    -1,    -1,    -1,    43,   296,
      -1,    46,   299,   300,    49,    -1,    -1,    52,   305,   306,
      55,    -1,    57,    55,    56,    -1,    58,    59,    -1,   135,
      -1,    -1,    -1,    -1,    -1,    -1,   323,    -1,    -1,    74,
      -1,   328,    -1,    -1,    -1,    -1,   333,   153,    83,    -1,
     156,    -1,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    11,    12,   100,   101,    -1,    16,   104,
      18,    -1,    20,   108,    -1,   110,    24,   112,    26,    -1,
      28,   116,    -1,    31,    -1,    -1,   121,    35,    18,    -1,
     196,    39,    -1,    -1,    -1,    -1,    26,    45,   204,    -1,
     135,    -1,    32,    33,   210,    -1,    -1,    55,    56,   215,
      58,    59,   218,    -1,    18,   221,    -1,    -1,   153,    -1,
      24,   156,    26,    -1,   159,    55,    56,    18,    58,   164,
      -1,   166,    -1,    24,   169,    26,    40,    41,   173,    -1,
      -1,   176,    -1,   249,    -1,    -1,    -1,    -1,    -1,    40,
      41,    55,    56,    -1,    58,    -1,    -1,    -1,   264,   265,
      -1,   196,   268,   269,    55,    56,    -1,    58,    18,   204,
      -1,    -1,    -1,    18,   209,   210,    26,   212,   213,   214,
     215,    26,    -1,   218,   290,    -1,   221,    32,    33,    -1,
     225,    -1,    -1,    -1,   229,   230,    -1,    -1,    -1,    -1,
      50,    51,    -1,    53,    -1,    55,    56,    -1,    58,    -1,
      55,    56,    -1,    58,   249,    -1,    -1,    -1,   253,    -1,
      -1,    -1,   257,    -1,    -1,    -1,   261,    -1,   263,   264,
     265,    -1,   267,   268,   269,   270,    -1,    12,    18,   274,
      -1,    16,   277,    18,    -1,    20,    26,    -1,    -1,    24,
      -1,    26,    -1,    28,   289,   290,    31,    -1,    -1,    -1,
      35,    -1,    -1,    12,    39,    14,   301,   302,   303,    18,
      45,    20,   307,   308,   309,    55,    56,    26,    58,    28,
      55,    56,    -1,    58,    59,    60,   321,    -1,    12,    -1,
      14,    -1,    -1,    -1,    18,   330,    20,    -1,    -1,    -1,
     335,    -1,    26,    -1,    28,    -1,    55,    56,    -1,    58,
      59,    60,    -1,    -1,    12,    -1,    -1,    -1,    16,    -1,
      18,    -1,    20,    -1,    -1,    -1,    24,    -1,    26,    -1,
      28,    55,    56,    31,    58,    59,    60,    35,    36,    37,
      12,    39,    18,    -1,    16,    -1,    18,    45,    20,    -1,
      26,    -1,    24,    25,    26,    -1,    28,    55,    56,    31,
      58,    59,    12,    35,    -1,    -1,    16,    39,    18,    -1,
      20,    21,    -1,    45,    24,    51,    26,    -1,    28,    55,
      56,    31,    58,    55,    56,    35,    58,    59,    12,    39,
      -1,    -1,    16,    -1,    18,    45,    20,    -1,    -1,    -1,
      24,    -1,    26,    -1,    28,    55,    56,    31,    58,    59,
      34,    35,    -1,    -1,    12,    39,    -1,    -1,    16,    -1,
      18,    45,    20,    -1,    -1,    -1,    24,    -1,    26,    -1,
      28,    55,    56,    31,    58,    59,    -1,    35,    13,    14,
      38,    39,    -1,    18,    -1,    20,    -1,    45,    -1,    -1,
      -1,    26,    -1,    28,    -1,    -1,    18,    55,    56,    12,
      58,    59,    -1,    16,    26,    18,    -1,    20,    -1,    -1,
      -1,    24,    -1,    26,    -1,    28,    -1,    -1,    31,    -1,
      55,    56,    35,    58,    59,    47,    39,    -1,    -1,    42,
      -1,    -1,    45,    55,    56,    -1,    58,    -1,    -1,    -1,
      -1,    -1,    55,    56,    12,    58,    59,    -1,    16,    -1,
      18,    -1,    20,    -1,    -1,    -1,    24,    -1,    26,    -1,
      28,    18,    12,    31,    -1,    -1,    16,    35,    18,    26,
      20,    39,    -1,    -1,    24,    -1,    26,    45,    28,    -1,
      48,    31,    -1,    -1,    -1,    35,    36,    55,    56,    39,
      58,    59,    -1,    50,    -1,    45,    -1,    -1,    55,    56,
      -1,    58,    -1,    -1,    -1,    55,    56,    12,    58,    59,
      -1,    16,    -1,    18,    -1,    20,    -1,    -1,    -1,    24,
      -1,    26,    -1,    28,    18,    12,    31,    -1,    -1,    16,
      35,    18,    26,    20,    39,    -1,    -1,    24,    -1,    26,
      45,    28,    -1,    -1,    31,    -1,    -1,    52,    35,    43,
      55,    56,    39,    58,    59,    -1,    -1,    -1,    45,    -1,
      -1,    55,    56,    -1,    58,    -1,    -1,    54,    55,    56,
      12,    58,    59,    -1,    16,    -1,    18,    -1,    20,    21,
      -1,    -1,    24,    -1,    26,    -1,    28,    18,    12,    31,
      -1,    -1,    16,    35,    18,    26,    20,    39,    -1,    -1,
      24,    -1,    26,    45,    28,    -1,    30,    31,    -1,    -1,
      -1,    35,    -1,    55,    56,    39,    58,    59,    49,    -1,
      -1,    45,    -1,    -1,    55,    56,    -1,    58,    -1,    -1,
      -1,    55,    56,    12,    58,    59,    -1,    16,    -1,    18,
      -1,    20,    -1,    -1,    -1,    24,    18,    26,    -1,    28,
      -1,    -1,    31,    -1,    26,    12,    35,    36,    -1,    16,
      39,    18,    -1,    20,    -1,    -1,    45,    24,    -1,    26,
      -1,    28,    -1,    -1,    31,    -1,    55,    56,    35,    58,
      59,    53,    39,    55,    56,    -1,    58,    44,    45,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,
      12,    58,    59,    -1,    16,    -1,    18,    -1,    20,    -1,
      -1,    -1,    24,    18,    26,    -1,    28,    -1,    -1,    31,
      12,    26,    14,    35,    -1,    17,    18,    39,    20,    -1,
      -1,    -1,    -1,    45,    26,    -1,    28,    -1,    43,    -1,
      -1,    -1,    -1,    55,    56,    -1,    58,    59,    -1,    18,
      55,    56,    -1,    58,    12,    -1,    14,    26,    -1,    17,
      18,    -1,    20,    55,    56,    18,    58,    59,    26,    -1,
      28,    14,    15,    26,    43,    18,    -1,    20,    14,    15,
      -1,    -1,    18,    26,    20,    28,    55,    56,    -1,    58,
      26,    -1,    28,    -1,    -1,    -1,    49,    55,    56,    -1,
      58,    59,    55,    56,    -1,    58,    -1,    -1,    -1,    18,
      -1,    -1,    55,    56,    -1,    58,    59,    26,    -1,    55,
      56,    14,    58,    59,    -1,    18,    -1,    20,    21,    -1,
      14,    -1,    -1,    26,    18,    28,    20,    21,    -1,    14,
      49,    -1,    26,    18,    28,    20,    55,    56,    -1,    58,
      -1,    26,    -1,    28,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    -1,    58,    59,    -1,    -1,    -1,
      -1,    55,    56,    -1,    58,    59,    -1,    18,    -1,    -1,
      55,    56,    14,    58,    59,    26,    18,    14,    20,    21,
      -1,    18,    -1,    20,    26,    -1,    28,    -1,    14,    26,
      -1,    28,    18,    30,    20,    21,    -1,    14,    49,    -1,
      26,    18,    28,    20,    55,    56,    -1,    58,    -1,    26,
      -1,    28,    -1,    55,    56,    -1,    58,    59,    55,    56,
      18,    58,    59,    -1,    -1,    -1,    18,    -1,    26,    55,
      56,    14,    58,    59,    26,    18,    -1,    20,    55,    56,
      14,    58,    59,    26,    18,    28,    20,    30,    -1,    -1,
      -1,    -1,    26,    51,    28,    -1,    -1,    55,    56,    51,
      58,    18,    -1,    55,    56,    -1,    58,    -1,    -1,    26,
      18,    -1,    55,    56,    -1,    58,    59,    -1,    26,    18,
      -1,    55,    56,    -1,    58,    59,    18,    26,    -1,    -1,
      -1,    -1,    18,    -1,    26,    -1,    53,    -1,    55,    56,
      26,    58,    -1,    -1,    43,    53,    18,    55,    56,    -1,
      58,    43,    -1,    -1,    26,    -1,    55,    56,    -1,    58,
      18,    -1,    -1,    55,    56,    51,    58,    18,    26,    55,
      56,    -1,    58,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    55,    56,    -1,    58,    -1,    -1,    -1,
      -1,    49,    43,    -1,    -1,    -1,    -1,    55,    56,    -1,
      58,    -1,    -1,    -1,    55,    56,    -1,    58
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,    62,     4,     5,     6,    10,    63,    65,
       0,     5,    63,    65,     7,     8,    64,    11,    12,    16,
      18,    20,    24,    26,    28,    31,    35,    39,    45,    55,
      56,    58,    59,    66,    70,     5,    65,     5,     5,    65,
       5,     9,    66,    67,     7,    13,    14,    20,    28,    59,
      66,    68,    69,    72,    73,    12,    17,    69,    73,    77,
      19,    22,    93,    25,    70,    81,    22,    27,    92,    22,
      29,    94,    32,    33,    67,    79,    36,    37,    70,    90,
      24,    40,    41,    67,    82,    46,    47,    49,    67,    86,
      60,    70,    71,    70,    11,     5,     5,     9,    66,    70,
      15,    69,    73,    74,    19,    22,    76,    22,    29,    75,
      12,    60,    69,    73,    78,    13,    14,    68,    13,    72,
      70,    12,    17,    17,    21,    70,    23,    70,    25,    23,
      23,    70,    70,    34,    70,    80,    32,    33,    70,    38,
      70,    91,    36,    37,    81,    70,    42,    70,    83,    24,
      40,    41,    70,    48,    70,    85,    50,    51,    53,    67,
      87,    47,    70,    60,    69,    73,    15,    15,    21,    69,
      73,    23,    23,    69,    73,    72,    12,    60,    60,    70,
      74,    70,    17,    72,    70,    70,    70,    21,    19,    70,
      92,    29,    30,    34,    79,    70,    80,    38,    36,    70,
      70,    91,    40,    43,    42,    40,    81,    70,    83,    67,
      48,    46,    49,    49,    67,    52,    70,    88,    54,    70,
      89,    50,    46,    85,    70,    69,    73,    21,    21,    19,
      29,    30,    30,    60,    72,    70,    17,    70,    21,    70,
      30,    70,    70,    79,    70,    36,    36,    70,    70,    44,
      70,    84,    43,    67,    70,    40,    40,    67,    70,    87,
      87,    49,    51,    67,    52,    50,    53,    67,    54,    50,
      67,    70,    46,    21,    69,    73,    30,    69,    73,    60,
      70,    70,    21,    70,    30,    70,    70,    36,    43,    67,
      44,    41,    84,    43,    70,    70,    46,    87,    88,    51,
      51,    67,    49,    67,    89,    53,    53,    67,    49,    67,
      70,    21,    21,    30,    30,    70,    70,    70,    84,    43,
      43,    67,    83,    41,    84,    70,    88,    88,    51,    87,
      49,    89,    89,    53,    87,    49,    84,    84,    43,    83,
      88,    87,    89,    87,    84
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    61,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    63,    63,    64,    64,    65,    65,    66,    66,    66,
      66,    66,    67,    67,    68,    68,    68,    68,    69,    69,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    71,    71,    71,    71,    72,    72,    72,    72,
      72,    72,    73,    73,    74,    74,    74,    74,    74,    74,
      74,    75,    75,    75,    75,    75,    76,    76,    76,    76,
      76,    76,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    78,    78,    78,    78,    78,    79,    79,    79,
      79,    79,    79,    80,    80,    81,    81,    81,    81,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    83,    83,    83,    83,    83,    84,    84,    84,    84,
      84,    84,    84,    84,    85,    85,    85,    85,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    88,    88,    88,    88,    88,    88,    88,    88,
      89,    89,    89,    89,    89,    89,    89,    89,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      91,    91,    92,    92,    93,    93,    93,    93,    93,    93,
      93,    93,    94,    94,    94,    94,    94,    94
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     2,     4,     3,     5,     4,     4,
       3,     3,     2,     2,     3,     3,     2,     1,     1,     1,
       2,     1,     2,     1,     1,     2,     2,     2,     2,     1,
       2,     2,     2,     2,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     3,     1,     2,     3,     2,     1,     2,
       3,     2,     2,     3,     1,     2,     2,     2,     2,     3,
       3,     4,     5,     3,     5,     3,     5,     3,     5,     3,
       2,     4,     3,     2,     2,     1,     2,     3,     4,     3,
       5,     4,     2,     2,     1,     3,     4,     3,     1,     4,
       2,     2,     3,     2,     1,     1,     2,     3,     2,     1,
       2,     3,     4,     2,     3,     4,     5,     3,     4,     4,
       5,     4,     5,     6,     3,     5,     2,     4,     1,     3,
       3,     5,     2,     4,     2,     1,     3,     2,     3,     4,
       4,     5,     5,     3,     6,     4,     1,     2,     1,     2,
       3,     3,     2,     3,     4,     4,     3,     4,     5,     5,
       6,     6,     1,     2,     2,     3,     3,     4,     4,     5,
       1,     2,     2,     3,     3,     4,     4,     5,     4,     3,
       4,     2,     1,     5,     4,     5,     3,     2,     6,     5,
       2,     1,     3,     1,     6,     4,     3,     5,     3,     2,
       5,     4,     4,     5,     3,     5,     6,     4
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
#line 1737 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 59 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); cout<<concat(p,(yyvsp[0].value))<<endl; }
#line 1743 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 60 "Parser.y" /* yacc.c:1646  */
    { cout<<concat((yyvsp[-1].value),(yyvsp[0].value))<<endl; }
#line 1749 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 61 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*y=concat(p,(yyvsp[-1].value)); cout<<concat(y,(yyvsp[0].value))<<endl; }
#line 1755 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 62 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); cout<<concat(p,(yyvsp[0].value))<<endl; }
#line 1761 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 63 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*y=concat(p,(yyvsp[-2].value)),*x=concat(y,(yyvsp[-1].value)); cout<<concat(x,(yyvsp[0].value))<<endl;}
#line 1767 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 64 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*y=concat(p,(yyvsp[-1].value)); cout<<concat(y,(yyvsp[0].value))<<endl; }
#line 1773 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 65 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*y=concat(p,(yyvsp[-1].value)); cout<<concat(y,(yyvsp[0].value))<<endl; }
#line 1779 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 66 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); cout<<concat(p,(yyvsp[0].value))<<endl; }
#line 1785 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 69 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 1791 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 70 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1797 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 73 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1803 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 74 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 1809 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 77 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 1815 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 78 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1821 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 81 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 1827 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 82 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 1833 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 83 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 1839 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 84 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1845 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 85 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 1851 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 88 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1857 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 89 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 1863 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 92 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 1869 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 93 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1875 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 94 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1881 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 95 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1887 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 98 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1893 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 99 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 1899 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 102 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1905 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 103 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1911 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 104 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1917 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 105 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1923 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 106 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value);}
#line 1929 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 107 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1935 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 108 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1941 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 109 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1947 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 110 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1953 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 111 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1959 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 112 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1965 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 113 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1971 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 116 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1977 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 117 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 1983 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 118 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 1989 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 119 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1995 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 122 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2001 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 123 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2007 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 124 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=(yyvsp[0].value); }
#line 2013 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 125 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2019 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 126 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2025 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 127 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2031 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 130 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2037 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 131 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2043 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 134 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2049 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 135 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2055 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 136 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2061 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 137 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2067 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 138 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2073 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 139 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2079 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 140 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2085 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 143 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2091 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 144 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2097 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 145 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2103 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 146 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2109 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 147 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2115 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 150 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2121 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 151 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2127 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 152 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2133 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 153 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2139 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 154 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2145 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 155 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2151 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 158 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2157 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 159 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2163 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 160 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2169 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 161 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2175 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 162 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2181 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 163 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2187 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 164 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value)); (yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2193 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 165 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2199 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 166 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value));}
#line 2205 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 167 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value)); (yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2211 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 170 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2217 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 171 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2223 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 172 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2229 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 173 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2235 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 174 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value)); (yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2241 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 177 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2247 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 178 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2253 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 179 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value)); (yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2259 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 180 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2265 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 181 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2271 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 182 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2277 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 185 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2283 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 186 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2289 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 189 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2295 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 190 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2301 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 191 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2307 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 192 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2313 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 195 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2319 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 196 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2325 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 197 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2331 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 198 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value)); (yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2337 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 199 "Parser.y" /* yacc.c:1646  */
    {concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2343 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 200 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2349 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 201 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value)); (yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2355 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 202 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2361 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 203 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2367 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 204 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value)); (yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2373 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 205 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value)); (yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2379 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 206 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2385 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 209 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value)); (yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2391 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 210 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2397 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 211 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-5].value),(yyvsp[-4].value)),*x=concat(p,(yyvsp[-3].value)),*y=concat(x,(yyvsp[-2].value)),*z=concat(y,(yyvsp[-1].value)); (yyval.value)=concat(z,(yyvsp[0].value)); }
#line 2403 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 212 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2409 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 213 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2415 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 216 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2421 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 217 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value)); (yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2427 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 218 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2433 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 219 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2439 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 220 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2445 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 221 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2451 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 222 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2457 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 223 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2463 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 226 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2469 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 227 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2475 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 228 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2481 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 229 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2487 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 232 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2493 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 233 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2499 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 234 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2505 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 235 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2511 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 236 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2517 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 237 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2523 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 238 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-5].value),(yyvsp[-4].value)),*x=concat(p,(yyvsp[-3].value)),*y=concat(x,(yyvsp[-2].value)),*z=concat(y,(yyvsp[-1].value)); (yyval.value)=concat(z,(yyvsp[0].value)); }
#line 2529 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 239 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2535 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 240 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2541 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 241 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2547 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 244 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2553 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 245 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2559 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 246 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2565 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 247 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2571 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 248 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2577 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 249 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2583 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 250 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2589 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 251 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2595 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 252 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2601 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 253 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2607 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 254 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2613 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 255 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2619 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 256 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-5].value),(yyvsp[-4].value)),*x=concat(p,(yyvsp[-3].value)),*y=concat(x,(yyvsp[-2].value)),*z=concat(y,(yyvsp[-1].value)); (yyval.value)=concat(z,(yyvsp[0].value)); }
#line 2625 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 257 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-5].value),(yyvsp[-4].value)),*x=concat(p,(yyvsp[-3].value)),*y=concat(x,(yyvsp[-2].value)),*z=concat(y,(yyvsp[-1].value)); (yyval.value)=concat(z,(yyvsp[0].value)); }
#line 2631 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 260 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2637 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 261 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2643 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 262 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2649 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 263 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2655 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 264 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2661 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 265 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2667 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 266 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2673 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 267 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2679 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 270 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2685 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 271 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2691 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 272 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2697 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 273 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2703 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 274 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2709 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 275 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2715 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 276 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2721 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 277 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2727 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 280 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2733 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 281 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2739 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 282 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2745 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 283 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2751 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 284 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2757 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 285 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2763 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 286 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2769 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 287 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2775 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 288 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2781 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 289 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2787 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 290 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-5].value),(yyvsp[-4].value)),*x=concat(p,(yyvsp[-3].value)),*y=concat(x,(yyvsp[-2].value)),*z=concat(y,(yyvsp[-1].value)); (yyval.value)=concat(z,(yyvsp[0].value)); }
#line 2793 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 291 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2799 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 294 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2805 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 295 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2811 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 298 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2817 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 299 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2823 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 302 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-5].value),(yyvsp[-4].value)),*x=concat(p,(yyvsp[-3].value)),*y=concat(x,(yyvsp[-2].value)),*z=concat(y,(yyvsp[-1].value)); (yyval.value)=concat(z,(yyvsp[0].value)); }
#line 2829 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 303 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2835 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 304 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2841 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 305 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2847 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 306 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2853 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 307 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2859 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 308 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2865 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 309 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2871 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 312 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2877 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 313 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2883 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 314 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2889 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 315 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2895 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 316 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-5].value),(yyvsp[-4].value)),*x=concat(p,(yyvsp[-3].value)),*y=concat(x,(yyvsp[-2].value)),*z=concat(y,(yyvsp[-1].value)); (yyval.value)=concat(z,(yyvsp[0].value)); }
#line 2901 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 317 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2907 "Parser.tab.c" /* yacc.c:1646  */
    break;


#line 2911 "Parser.tab.c" /* yacc.c:1646  */
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
#line 320 "Parser.y" /* yacc.c:1906  */

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
