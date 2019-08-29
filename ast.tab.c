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
#line 1 "ast.y" /* yacc.c:339  */

#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include "ast.h"

using namespace std;

#define copy(v1,v2) copy(v2.begin(),v2.end(),back_inserter(v1))
#define pb(x) push_back(x)

int i=0;
extern int yylex();
extern void yyerror(const char*);
char* concat(char *s1,char *s2);
typedef vector<treeNode*> vn;

void update(vn* v);


#line 87 "ast.tab.c" /* yacc.c:339  */

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
   by #include "ast.tab.h".  */
#ifndef YY_YY_AST_TAB_H_INCLUDED
# define YY_YY_AST_TAB_H_INCLUDED
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
#line 23 "ast.y" /* yacc.c:355  */

	node* object;
	char* value;

#line 193 "ast.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_AST_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 210 "ast.tab.c" /* yacc.c:358  */

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
#define YYLAST   1537

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  214
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  381

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
       0,    61,    61,    63,    65,    67,    69,    71,    73,    75,
      77,    81,    83,    87,    89,    93,    98,   102,   108,   114,
     120,   123,   132,   146,   151,   154,   156,   158,   162,   176,
     181,   182,   183,   184,   199,   202,   205,   208,   211,   214,
     216,   218,   222,   224,   226,   228,   232,   235,   238,   241,
     244,   247,   252,   255,   263,   266,   269,   272,   275,   278,
     281,   286,   288,   290,   292,   294,   298,   300,   302,   304,
     306,   308,   310,   312,   316,   319,   322,   325,   328,   331,
     334,   337,   340,   343,   348,   350,   352,   354,   356,   360,
     364,   367,   372,   375,   378,   383,   386,   391,   394,   397,
     400,   405,   408,   411,   414,   417,   420,   423,   426,   429,
     432,   435,   438,   443,   446,   451,   456,   459,   466,   469,
     472,   475,   478,   481,   486,   489,   495,   498,   501,   504,
     509,   512,   515,   518,   521,   524,   527,   530,   533,   536,
     539,   542,   547,   550,   553,   558,   561,   564,   567,   570,
     573,   576,   579,   582,   585,   590,   593,   596,   601,   606,
     609,   612,   615,   618,   621,   626,   629,   632,   637,   645,
     647,   650,   653,   656,   659,   662,   667,   674,   677,   680,
     683,   686,   689,   692,   697,   704,   707,   710,   713,   716,
     719,   722,   725,   728,   731,   734,   739,   746,   749,   754,
     759,   768,   770,   772,   774,   776,   778,   780,   782,   786,
     788,   790,   792,   794,   796
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

#define YYPACT_NINF -229

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-229)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      18,     3,   121,    29,   123,  -229,    59,   616,    20,    34,
    -229,  -229,    38,    40,  -229,    26,    44,  -229,   367,   447,
    -229,    14,   735,    35,    -5,   414,   690,  1341,     0,  -229,
    -229,  -229,   634,  1155,    42,  -229,    55,  -229,  -229,    60,
    -229,  -229,  -229,    61,  -229,  1155,  1243,    69,    -2,   193,
    -229,  -229,   495,  -229,    65,   367,  1155,  1175,    66,  -229,
     757,    53,  -229,  1155,    78,  -229,    67,  -229,  -229,    71,
    1155,  -229,  1155,   783,   542,  -229,  1155,   809,   100,  -229,
     735,  1155,   854,  1368,  -229,  1155,   899,   117,   169,  -229,
    1155,    62,  -229,  -229,  -229,  -229,  -229,  -229,  -229,  -229,
    1314,  1289,   103,  -229,  1223,   101,  -229,   107,  1314,  -229,
     367,  -229,   683,    80,  -229,  1155,  1243,  -229,  1155,   129,
    -229,   367,  1155,  1155,  1155,   126,   130,  -229,  1155,    35,
     125,   122,  -229,  -229,   131,   414,  1155,   783,  -229,  -229,
     118,   917,  1155,   809,   119,  -229,   120,   134,   138,   735,
    1155,   854,  -229,   750,   135,    56,   506,   962,   980,   346,
     139,  1155,   899,   117,  -229,  1155,  1357,  -229,  1314,  -229,
     367,  -229,   296,   150,   167,   159,   832,   160,   133,   367,
    -229,  -229,  -229,  -229,  -229,  1155,   172,  -229,  -229,  -229,
    1155,  1025,  -229,  -229,  1043,  1155,  -229,  -229,  -229,   414,
    -229,  1155,   155,  -229,  1088,  1155,  1110,   575,  1155,   154,
    -229,   170,   750,   750,  1155,   117,   117,   547,   627,   147,
     162,   124,   166,   164,   845,   962,   980,  1155,  -229,    63,
     182,  -229,  1357,  -229,   211,  -229,  -229,  1234,  1294,  -229,
    -229,  -229,   175,  -229,  1155,  -229,  1155,   216,  1155,   209,
    -229,  -229,  -229,  1155,  1155,   207,  -229,   973,   200,   204,
    1110,  1036,  -229,  1155,  1155,   750,  -229,   213,  -229,   117,
     962,   910,  1170,  1103,   980,   178,   229,  1362,   117,  1372,
     215,   217,  -229,  1155,   117,  1155,  -229,   367,  -229,  1305,
     245,  -229,  1348,   240,  -229,  -229,  -229,  1155,  -229,  1155,
    -229,  -229,  1155,  1110,  1396,  1407,   854,   230,  1110,  -229,
    -229,  1155,  -229,  -229,   962,   962,  1416,   117,  1420,  -229,
     980,   980,   678,   117,  1430,  -229,   117,  1435,  1440,  -229,
     227,  -229,   254,  -229,  -229,  -229,  -229,  -229,  -229,  -229,
    -229,  1110,  1110,  1474,  -229,   854,  -229,  -229,  -229,  -229,
     962,  -229,   117,  -229,  -229,   980,  -229,   117,  -229,   117,
    1455,   117,  1479,  1155,  -229,  -229,  -229,  1110,  -229,  -229,
    -229,  -229,  -229,  -229,   117,  -229,   117,  -229,  -229,  -229,
    -229
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
      24,    29,     0,    30,     0,     0,    77,     0,     0,    31,
       0,     0,    39,    97,     0,    35,     0,   200,    20,     0,
       0,    40,    90,     0,     0,    32,   189,     0,     0,    38,
       0,   101,     0,     0,    36,   138,     0,     0,     0,    37,
      44,     0,    41,    33,    15,     8,     7,    14,    22,    47,
      54,     0,     0,    52,     0,     0,    25,     0,     0,    26,
       0,    86,     0,     0,    27,    51,     0,    28,    49,     0,
      76,     0,    78,    75,   206,     0,     0,    98,   100,     0,
       0,     0,    93,    96,     0,     0,    92,     0,   194,   198,
       0,     0,   188,     0,     0,   105,     0,     0,     0,     0,
     102,     0,   139,   127,     0,     0,   145,     0,     0,     0,
       0,   143,     0,     0,    45,    42,    57,    56,    58,    55,
       0,    72,     0,     0,     0,     0,     0,     0,     0,     0,
      85,    84,    50,    53,    46,    81,     0,    79,    74,   203,
     205,     0,    99,   199,     0,   211,    95,    89,    94,     0,
     197,   186,     0,   193,     0,   103,     0,     0,   109,     0,
     106,     0,   129,   126,   130,     0,     0,   149,   169,     0,
       0,   177,     0,     0,   146,     0,     0,   135,   144,     0,
       0,    43,    60,    59,     0,    71,    67,     0,     0,    65,
      63,    87,     0,    80,    83,   202,   208,     0,   209,     0,
     214,    91,   191,   187,   185,     0,   107,   120,     0,   116,
       0,     0,   110,   104,   111,   128,   131,     0,   153,     0,
       0,   171,   170,   147,     0,   179,   178,   148,     0,   150,
       0,     0,   137,   132,     0,   140,    69,     0,    73,     0,
       0,    61,     0,     0,    88,    82,   207,   204,   212,   210,
     192,   190,   196,     0,   124,   118,     0,   113,     0,   108,
     112,   134,   154,   173,     0,     0,   172,     0,   151,   181,
       0,     0,   180,     0,   152,   163,     0,   159,   160,   133,
       0,   142,     0,    70,    66,    64,    62,   201,   213,   195,
     121,     0,     0,   122,   117,     0,   114,   136,   175,   174,
       0,   155,     0,   183,   182,     0,   156,     0,   164,     0,
     161,     0,   162,     0,    68,   125,   119,     0,   115,   176,
     157,   184,   158,   165,     0,   166,     0,   141,   123,   167,
     168
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -229,  -229,   272,  -229,    11,   -15,   253,   -51,    -8,   293,
    -229,   -47,    58,   163,  -229,  -229,  -229,  -229,  -130,   146,
     -78,  -229,  -137,  -228,   132,  -229,   265,  -216,  -210,  -229,
     143,   168,  -229,  -229
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     8,    16,     9,    33,   159,    51,    52,   258,
      92,    53,    54,   103,   109,   106,    59,   114,    75,   135,
      65,    84,   148,   259,   155,    89,   160,   220,   223,    79,
     141,    68,    62,    71
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      42,   117,   144,    50,    50,   197,   117,     4,   119,   280,
      42,    57,    42,    42,   211,    13,   281,    69,    20,    36,
     107,     1,     2,    39,    70,    35,    23,   108,    98,    10,
       7,    50,   307,    60,    50,    41,    61,    50,   101,    37,
      50,   112,    50,    38,    20,    40,    85,    86,     7,    87,
     117,    44,    23,    94,   313,    29,    30,    66,    31,    98,
      95,   117,    67,   178,   319,    96,    14,    15,    98,   251,
      97,   209,    42,    98,   186,   340,   126,    58,   118,    20,
     346,    29,    30,   123,    31,    50,    50,    23,   104,    50,
     129,   105,   166,    50,   130,    50,   172,    50,   348,   349,
     176,    50,   214,   128,   102,   215,    50,   113,   101,   283,
     353,   354,   284,   365,   366,   117,    29,    30,   169,    31,
      42,   117,   165,   234,   174,   117,     5,     6,    11,     6,
     175,     7,   242,     7,   369,    20,   142,   143,    42,   378,
     181,    42,    20,    23,    98,   371,   185,   190,    42,   191,
      23,    50,   195,    50,   194,    50,   200,    50,   167,   205,
     232,    50,   173,   206,    50,   196,   177,   156,   157,   344,
     158,   236,    29,    30,   102,    31,   207,   274,   208,    29,
      30,   117,    31,   213,    42,   227,   237,    20,   238,   244,
     240,   253,    42,   241,   263,    23,    20,    98,    42,   272,
      42,    42,    98,    42,    23,   110,    42,    46,   368,    42,
     264,    20,   273,    47,   277,   161,   162,    50,   163,    23,
     276,    48,    50,    50,    29,    30,   233,    31,   285,   289,
     292,   320,   286,    29,    30,   294,    31,   297,   117,   299,
     332,   117,    42,   302,   305,   306,    98,    20,    29,    30,
      98,    31,    49,   111,    42,    23,    98,    42,    42,   311,
      98,    42,    42,    42,    98,   327,   334,   328,    43,    42,
     336,   345,    50,   363,    50,   364,    12,    50,    74,   183,
      83,    88,   321,   199,    29,    30,   204,    31,     0,    98,
      42,     0,     0,     0,   229,   290,   293,   193,     0,     0,
      34,    98,    42,    98,     0,     0,     0,    98,    42,    98,
     116,    42,    42,    42,    20,    64,    47,   235,     0,    78,
       0,     0,    23,     0,    48,    91,    93,     0,    98,     0,
       0,     0,     0,     0,     0,     0,     0,    42,    99,     0,
       0,     0,    42,     0,    42,    98,    42,    98,     0,   120,
       0,    29,    30,   125,    31,    49,   127,     0,     0,    42,
       0,    42,     0,   131,    20,   132,   134,     0,     0,   138,
     140,     0,    23,    64,   145,   147,     0,     0,   152,   154,
      45,    46,     0,   164,     0,    20,     0,    47,    74,     0,
       0,     0,     0,    23,     0,    48,   224,   225,     0,   226,
       0,    29,    30,     0,    31,     0,   212,     0,   182,   217,
       0,   184,     0,     0,     0,   187,   188,   189,     0,     0,
       0,   192,    29,    30,     0,    31,    49,     0,   230,   198,
     134,     0,    20,     0,   202,   203,   140,     0,     0,     0,
      23,     0,    64,   210,   147,     0,    72,    73,     0,     0,
     219,   222,    74,     0,   228,   154,     0,     0,   231,    55,
     261,    46,     0,     0,    56,    20,   265,    47,     0,    29,
      30,   271,    31,    23,   275,    48,     0,   279,   243,     0,
     267,   268,     0,   245,   247,     0,     0,   249,   250,     0,
       0,     0,     0,     0,   252,     0,     0,   255,   256,     0,
       0,   262,    29,    30,     0,    31,    49,   266,   115,   116,
     304,     0,     0,    20,     0,    47,     0,     0,   219,   222,
     282,    23,     0,    48,    20,   316,   318,     0,     0,   322,
     324,     0,    23,     0,   312,     0,     0,   295,     0,   296,
       0,   298,     0,   325,     0,     0,   300,   301,     0,   330,
      29,    30,     0,    31,    49,   216,   309,   310,   343,     0,
      20,    29,    30,   219,    31,    20,     0,   222,    23,     0,
       0,     0,     0,    23,   136,   137,   329,     0,   331,     0,
     360,   362,   351,     0,     0,     0,     0,     0,   356,     0,
     337,   358,   338,    20,     0,   339,   269,    29,    30,   147,
      31,    23,    29,    30,   347,    31,     0,   219,   219,     0,
       0,     0,     0,   222,   222,     0,     0,   370,   260,     0,
       0,     0,   372,     0,   373,     0,   375,    17,    18,     0,
      29,    30,    19,    31,    20,     0,    21,     0,   147,   379,
      22,   380,    23,   219,    24,    20,    18,    25,   222,     0,
      19,    26,    20,    23,    21,    27,   377,     0,    22,     0,
      23,    28,    24,     0,     0,    25,     0,     0,     0,    26,
       0,    29,    30,    27,    31,    32,     0,     0,   270,    28,
       0,     0,    29,    30,     0,    31,     0,     0,     0,    29,
      30,     0,    31,    32,    90,   179,    20,   116,     0,     0,
       0,    20,    18,    47,    23,     0,    19,     0,    20,    23,
      21,    48,     0,     0,    22,     0,    23,     0,    24,     0,
       0,    25,     0,     0,     0,    26,    76,    77,     0,    27,
       0,   355,     0,    29,    30,    28,    31,     0,    29,    30,
       0,    31,    49,   180,     0,    29,    30,    18,    31,    32,
       0,    19,     0,    20,     0,    21,     0,     0,     0,    22,
      63,    23,     0,    24,     0,     0,    25,     0,    20,    18,
      26,     0,     0,    19,    27,    20,    23,    21,   124,     0,
      28,    22,     0,    23,     0,    24,     0,     0,    25,     0,
      29,    30,    26,    31,    32,    18,    27,     0,     0,    19,
       0,    20,    28,    21,     0,    29,    30,    22,    31,    23,
       0,    24,    29,    30,    25,    31,    32,   133,    26,     0,
       0,    18,    27,     0,     0,    19,     0,    20,    28,    21,
       0,     0,     0,    22,     0,    23,     0,    24,    29,    30,
      25,    31,    32,     0,    26,     0,   116,   139,    27,     0,
      20,     0,    47,     0,    28,     0,     0,     0,    23,     0,
      48,     0,   239,    20,    29,    30,    18,    31,    32,     0,
      19,    23,    20,     0,    21,     0,     0,     0,    22,     0,
      23,     0,    24,     0,     0,    25,     0,    29,    30,    26,
      31,    49,     0,    27,   278,     0,   146,     0,     0,    28,
      29,    30,     0,    31,     0,     0,     0,     0,     0,    29,
      30,    18,    31,    32,     0,    19,     0,    20,     0,    21,
       0,     0,     0,    22,     0,    23,     0,    24,    20,    18,
      25,     0,     0,    19,    26,    20,    23,    21,    27,     0,
       0,    22,     0,    23,    28,    24,     0,   153,    25,     0,
       0,     0,    26,   201,    29,    30,    27,    31,    32,     0,
       0,   314,    28,     0,     0,    29,    30,     0,    31,     0,
       0,     0,    29,    30,    18,    31,    32,     0,    19,     0,
      20,     0,    21,     0,     0,     0,    22,     0,    23,     0,
      24,    20,    18,    25,     0,     0,    19,    26,    20,    23,
      21,    27,     0,     0,    22,     0,    23,    28,    24,     0,
       0,    25,     0,     0,   218,    26,   303,    29,    30,    27,
      31,    32,     0,     0,     0,    28,     0,     0,    29,    30,
       0,    31,     0,     0,   221,    29,    30,    18,    31,    32,
       0,    19,     0,    20,     0,    21,   246,     0,     0,    22,
       0,    23,     0,    24,    20,    18,    25,     0,     0,    19,
      26,    20,    23,    21,    27,     0,     0,    22,     0,    23,
      28,    24,     0,   248,    25,     0,     0,     0,    26,   308,
      29,    30,    27,    31,    32,     0,     0,     0,    28,     0,
       0,    29,    30,     0,    31,     0,     0,     0,    29,    30,
      18,    31,    32,     0,    19,     0,    20,     0,    21,     0,
       0,     0,    22,     0,    23,     0,    24,     0,     0,    25,
       0,    20,    18,    26,   254,     0,    19,    27,    20,    23,
      21,     0,     0,    28,    22,     0,    23,     0,    24,     0,
       0,    25,     0,    29,    30,    26,    31,    32,     0,    27,
       0,     0,   317,     0,   257,    28,     0,     0,    29,    30,
       0,    31,     0,     0,     0,    29,    30,    18,    31,    32,
       0,    19,     0,    20,     0,    21,     0,     0,     0,    22,
       0,    23,     0,    24,     0,     0,    25,   121,    20,   116,
      26,     0,   122,    20,    27,    47,    23,     0,     0,     0,
      28,    23,     0,    48,     0,     0,     0,     0,     0,     0,
      29,    30,     0,    31,    32,     0,     0,     0,     0,     0,
       0,   315,     0,     0,     0,    29,    30,     0,    31,     0,
      29,    30,     0,    31,    49,   170,     0,    46,     0,     0,
       0,    20,     0,    47,   171,     0,   287,     0,    46,    23,
       0,    48,    20,     0,    47,   288,     0,    46,   100,     0,
      23,    20,    48,    47,     0,     0,     0,     0,     0,    23,
       0,    48,     0,     0,     0,     0,     0,     0,    29,    30,
       0,    31,    49,     0,     0,     0,     0,     0,     0,    29,
      30,     0,    31,    49,     0,     0,     0,     0,    29,    30,
       0,    31,    49,   116,   168,     0,     0,    20,    46,    47,
       0,     0,    20,     0,    47,    23,     0,    48,     0,   116,
      23,     0,    48,    20,   291,    47,   333,     0,    46,     0,
       0,    23,    20,    48,    47,     0,     0,     0,     0,     0,
      23,     0,    48,     0,    29,    30,     0,    31,    49,    29,
      30,     0,    31,    49,     0,     0,     0,     0,     0,    20,
      29,    30,   116,    31,    49,    80,    20,    23,    47,    29,
      30,   116,    31,    49,    23,    20,    48,    47,   335,     0,
      20,    81,    82,    23,     0,    48,    20,     0,    23,     0,
      20,     0,   149,     0,    23,     0,    29,    30,    23,    31,
       0,     0,     0,    29,    30,     0,    31,    49,   150,   151,
       0,   323,    29,    30,    20,    31,    49,    29,    30,     0,
      31,   326,    23,    29,    30,    20,    31,    29,    30,     0,
      31,     0,     0,    23,    20,     0,     0,     0,    20,   341,
       0,     0,    23,     0,     0,     0,    23,     0,    20,     0,
     342,    29,    30,    20,    31,     0,    23,     0,    20,     0,
       0,    23,    29,    30,     0,    31,    23,   350,     0,   352,
       0,    29,    30,    20,    31,    29,    30,     0,    31,   357,
       0,    23,     0,     0,   359,    29,    30,     0,    31,   361,
      29,    30,    20,    31,     0,    29,    30,    20,    31,     0,
      23,     0,     0,     0,   374,    23,     0,     0,     0,     0,
      29,    30,     0,    31,     0,     0,     0,   367,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   376,    29,
      30,     0,    31,     0,    29,    30,     0,    31
};

static const yytype_int16 yycheck[] =
{
      15,    52,    80,    18,    19,   135,    57,     4,    55,   225,
      25,    19,    27,    28,   151,     4,   226,    22,    18,     8,
      22,     3,     4,    12,    29,     5,    26,    29,    43,     0,
      10,    46,   260,    19,    49,     9,    22,    52,    46,     5,
      55,    49,    57,     5,    18,     5,    46,    47,    10,    49,
     101,     7,    26,    11,   270,    55,    56,    22,    58,    74,
       5,   112,    27,   110,   274,     5,     7,     8,    83,   199,
       9,   149,    87,    88,   121,   303,    23,    19,    13,    18,
     308,    55,    56,    17,    58,   100,   101,    26,    19,   104,
      23,    22,   100,   108,    23,   110,   104,   112,   314,   315,
     108,   116,    46,    25,    46,    49,   121,    49,   116,    46,
     320,   321,    49,   341,   342,   166,    55,    56,    15,    58,
     135,   172,    60,   170,    23,   176,     5,     6,     5,     6,
      23,    10,   179,    10,   350,    18,    36,    37,   153,   367,
      60,   156,    18,    26,   159,   355,    17,    21,   163,    19,
      26,   166,    30,   168,    29,   170,    38,   172,   100,    40,
     168,   176,   104,    43,   179,    34,   108,    50,    51,   306,
      53,    21,    55,    56,   116,    58,    42,    53,    40,    55,
      56,   232,    58,    48,   199,    46,    19,    18,    29,    17,
      30,    36,   207,    60,    40,    26,    18,   212,   213,    52,
     215,   216,   217,   218,    26,    12,   221,    14,   345,   224,
      40,    18,    50,    20,    50,    46,    47,   232,    49,    26,
      54,    28,   237,   238,    55,    56,   168,    58,    46,   237,
     238,    53,    21,    55,    56,    60,    58,    21,   289,    30,
     287,   292,   257,    36,    44,    41,   261,    18,    55,    56,
     265,    58,    59,    60,   269,    26,   271,   272,   273,    46,
     275,   276,   277,   278,   279,    50,    21,    50,    15,   284,
      30,    41,   287,    46,   289,    21,     4,   292,    25,   116,
      27,    28,    53,   137,    55,    56,   143,    58,    -1,   304,
     305,    -1,    -1,    -1,   162,   237,   238,   129,    -1,    -1,
       7,   316,   317,   318,    -1,    -1,    -1,   322,   323,   324,
      14,   326,   327,   328,    18,    22,    20,    21,    -1,    26,
      -1,    -1,    26,    -1,    28,    32,    33,    -1,   343,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   352,    45,    -1,
      -1,    -1,   357,    -1,   359,   360,   361,   362,    -1,    56,
      -1,    55,    56,    60,    58,    59,    63,    -1,    -1,   374,
      -1,   376,    -1,    70,    18,    72,    73,    -1,    -1,    76,
      77,    -1,    26,    80,    81,    82,    -1,    -1,    85,    86,
      13,    14,    -1,    90,    -1,    18,    -1,    20,   135,    -1,
      -1,    -1,    -1,    26,    -1,    28,    50,    51,    -1,    53,
      -1,    55,    56,    -1,    58,    -1,   153,    -1,   115,   156,
      -1,   118,    -1,    -1,    -1,   122,   123,   124,    -1,    -1,
      -1,   128,    55,    56,    -1,    58,    59,    -1,   163,   136,
     137,    -1,    18,    -1,   141,   142,   143,    -1,    -1,    -1,
      26,    -1,   149,   150,   151,    -1,    32,    33,    -1,    -1,
     157,   158,   199,    -1,   161,   162,    -1,    -1,   165,    12,
     207,    14,    -1,    -1,    17,    18,   213,    20,    -1,    55,
      56,   218,    58,    26,   221,    28,    -1,   224,   185,    -1,
     215,   216,    -1,   190,   191,    -1,    -1,   194,   195,    -1,
      -1,    -1,    -1,    -1,   201,    -1,    -1,   204,   205,    -1,
      -1,   208,    55,    56,    -1,    58,    59,   214,    13,    14,
     257,    -1,    -1,    18,    -1,    20,    -1,    -1,   225,   226,
     227,    26,    -1,    28,    18,   272,   273,    -1,    -1,   276,
     277,    -1,    26,    -1,   269,    -1,    -1,   244,    -1,   246,
      -1,   248,    -1,   278,    -1,    -1,   253,   254,    -1,   284,
      55,    56,    -1,    58,    59,    49,   263,   264,   305,    -1,
      18,    55,    56,   270,    58,    18,    -1,   274,    26,    -1,
      -1,    -1,    -1,    26,    32,    33,   283,    -1,   285,    -1,
     327,   328,   317,    -1,    -1,    -1,    -1,    -1,   323,    -1,
     297,   326,   299,    18,    -1,   302,    49,    55,    56,   306,
      58,    26,    55,    56,   311,    58,    -1,   314,   315,    -1,
      -1,    -1,    -1,   320,   321,    -1,    -1,   352,    43,    -1,
      -1,    -1,   357,    -1,   359,    -1,   361,    11,    12,    -1,
      55,    56,    16,    58,    18,    -1,    20,    -1,   345,   374,
      24,   376,    26,   350,    28,    18,    12,    31,   355,    -1,
      16,    35,    18,    26,    20,    39,   363,    -1,    24,    -1,
      26,    45,    28,    -1,    -1,    31,    -1,    -1,    -1,    35,
      -1,    55,    56,    39,    58,    59,    -1,    -1,    51,    45,
      -1,    -1,    55,    56,    -1,    58,    -1,    -1,    -1,    55,
      56,    -1,    58,    59,    60,    12,    18,    14,    -1,    -1,
      -1,    18,    12,    20,    26,    -1,    16,    -1,    18,    26,
      20,    28,    -1,    -1,    24,    -1,    26,    -1,    28,    -1,
      -1,    31,    -1,    -1,    -1,    35,    36,    37,    -1,    39,
      -1,    53,    -1,    55,    56,    45,    58,    -1,    55,    56,
      -1,    58,    59,    60,    -1,    55,    56,    12,    58,    59,
      -1,    16,    -1,    18,    -1,    20,    -1,    -1,    -1,    24,
      25,    26,    -1,    28,    -1,    -1,    31,    -1,    18,    12,
      35,    -1,    -1,    16,    39,    18,    26,    20,    21,    -1,
      45,    24,    -1,    26,    -1,    28,    -1,    -1,    31,    -1,
      55,    56,    35,    58,    59,    12,    39,    -1,    -1,    16,
      -1,    18,    45,    20,    -1,    55,    56,    24,    58,    26,
      -1,    28,    55,    56,    31,    58,    59,    34,    35,    -1,
      -1,    12,    39,    -1,    -1,    16,    -1,    18,    45,    20,
      -1,    -1,    -1,    24,    -1,    26,    -1,    28,    55,    56,
      31,    58,    59,    -1,    35,    -1,    14,    38,    39,    -1,
      18,    -1,    20,    -1,    45,    -1,    -1,    -1,    26,    -1,
      28,    -1,    30,    18,    55,    56,    12,    58,    59,    -1,
      16,    26,    18,    -1,    20,    -1,    -1,    -1,    24,    -1,
      26,    -1,    28,    -1,    -1,    31,    -1,    55,    56,    35,
      58,    59,    -1,    39,    49,    -1,    42,    -1,    -1,    45,
      55,    56,    -1,    58,    -1,    -1,    -1,    -1,    -1,    55,
      56,    12,    58,    59,    -1,    16,    -1,    18,    -1,    20,
      -1,    -1,    -1,    24,    -1,    26,    -1,    28,    18,    12,
      31,    -1,    -1,    16,    35,    18,    26,    20,    39,    -1,
      -1,    24,    -1,    26,    45,    28,    -1,    48,    31,    -1,
      -1,    -1,    35,    36,    55,    56,    39,    58,    59,    -1,
      -1,    51,    45,    -1,    -1,    55,    56,    -1,    58,    -1,
      -1,    -1,    55,    56,    12,    58,    59,    -1,    16,    -1,
      18,    -1,    20,    -1,    -1,    -1,    24,    -1,    26,    -1,
      28,    18,    12,    31,    -1,    -1,    16,    35,    18,    26,
      20,    39,    -1,    -1,    24,    -1,    26,    45,    28,    -1,
      -1,    31,    -1,    -1,    52,    35,    43,    55,    56,    39,
      58,    59,    -1,    -1,    -1,    45,    -1,    -1,    55,    56,
      -1,    58,    -1,    -1,    54,    55,    56,    12,    58,    59,
      -1,    16,    -1,    18,    -1,    20,    21,    -1,    -1,    24,
      -1,    26,    -1,    28,    18,    12,    31,    -1,    -1,    16,
      35,    18,    26,    20,    39,    -1,    -1,    24,    -1,    26,
      45,    28,    -1,    30,    31,    -1,    -1,    -1,    35,    43,
      55,    56,    39,    58,    59,    -1,    -1,    -1,    45,    -1,
      -1,    55,    56,    -1,    58,    -1,    -1,    -1,    55,    56,
      12,    58,    59,    -1,    16,    -1,    18,    -1,    20,    -1,
      -1,    -1,    24,    -1,    26,    -1,    28,    -1,    -1,    31,
      -1,    18,    12,    35,    36,    -1,    16,    39,    18,    26,
      20,    -1,    -1,    45,    24,    -1,    26,    -1,    28,    -1,
      -1,    31,    -1,    55,    56,    35,    58,    59,    -1,    39,
      -1,    -1,    49,    -1,    44,    45,    -1,    -1,    55,    56,
      -1,    58,    -1,    -1,    -1,    55,    56,    12,    58,    59,
      -1,    16,    -1,    18,    -1,    20,    -1,    -1,    -1,    24,
      -1,    26,    -1,    28,    -1,    -1,    31,    12,    18,    14,
      35,    -1,    17,    18,    39,    20,    26,    -1,    -1,    -1,
      45,    26,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    56,    -1,    58,    59,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    -1,    -1,    -1,    55,    56,    -1,    58,    -1,
      55,    56,    -1,    58,    59,    12,    -1,    14,    -1,    -1,
      -1,    18,    -1,    20,    21,    -1,    12,    -1,    14,    26,
      -1,    28,    18,    -1,    20,    21,    -1,    14,    15,    -1,
      26,    18,    28,    20,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,
      -1,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      56,    -1,    58,    59,    -1,    -1,    -1,    -1,    55,    56,
      -1,    58,    59,    14,    15,    -1,    -1,    18,    14,    20,
      -1,    -1,    18,    -1,    20,    26,    -1,    28,    -1,    14,
      26,    -1,    28,    18,    30,    20,    21,    -1,    14,    -1,
      -1,    26,    18,    28,    20,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    28,    -1,    55,    56,    -1,    58,    59,    55,
      56,    -1,    58,    59,    -1,    -1,    -1,    -1,    -1,    18,
      55,    56,    14,    58,    59,    24,    18,    26,    20,    55,
      56,    14,    58,    59,    26,    18,    28,    20,    30,    -1,
      18,    40,    41,    26,    -1,    28,    18,    -1,    26,    -1,
      18,    -1,    24,    -1,    26,    -1,    55,    56,    26,    58,
      -1,    -1,    -1,    55,    56,    -1,    58,    59,    40,    41,
      -1,    49,    55,    56,    18,    58,    59,    55,    56,    -1,
      58,    49,    26,    55,    56,    18,    58,    55,    56,    -1,
      58,    -1,    -1,    26,    18,    -1,    -1,    -1,    18,    43,
      -1,    -1,    26,    -1,    -1,    -1,    26,    -1,    18,    -1,
      43,    55,    56,    18,    58,    -1,    26,    -1,    18,    -1,
      -1,    26,    55,    56,    -1,    58,    26,    51,    -1,    49,
      -1,    55,    56,    18,    58,    55,    56,    -1,    58,    49,
      -1,    26,    -1,    -1,    49,    55,    56,    -1,    58,    49,
      55,    56,    18,    58,    -1,    55,    56,    18,    58,    -1,
      26,    -1,    -1,    -1,    49,    26,    -1,    -1,    -1,    -1,
      55,    56,    -1,    58,    -1,    -1,    -1,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    55,
      56,    -1,    58,    -1,    55,    56,    -1,    58
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
      87,    46,    47,    49,    70,    60,    69,    73,    15,    15,
      12,    21,    69,    73,    23,    23,    69,    73,    72,    12,
      60,    60,    70,    74,    70,    17,    72,    70,    70,    70,
      21,    19,    70,    92,    29,    30,    34,    79,    70,    80,
      38,    36,    70,    70,    91,    40,    43,    42,    40,    81,
      70,    83,    67,    48,    46,    49,    49,    67,    52,    70,
      88,    54,    70,    89,    50,    51,    53,    46,    70,    85,
      87,    70,    69,    73,    72,    21,    21,    19,    29,    30,
      30,    60,    72,    70,    17,    70,    21,    70,    30,    70,
      70,    79,    70,    36,    36,    70,    70,    44,    70,    84,
      43,    67,    70,    40,    40,    67,    70,    87,    87,    49,
      51,    67,    52,    50,    53,    67,    54,    50,    49,    67,
      88,    89,    70,    46,    49,    46,    21,    12,    21,    69,
      73,    30,    69,    73,    60,    70,    70,    21,    70,    30,
      70,    70,    36,    43,    67,    44,    41,    84,    43,    70,
      70,    46,    87,    88,    51,    51,    67,    49,    67,    89,
      53,    53,    67,    49,    67,    87,    49,    50,    50,    70,
      87,    70,    72,    21,    21,    30,    30,    70,    70,    70,
      84,    43,    43,    67,    83,    41,    84,    70,    88,    88,
      51,    87,    49,    89,    89,    53,    87,    49,    87,    49,
      67,    49,    67,    46,    21,    84,    84,    43,    83,    88,
      87,    89,    87,    87,    49,    87,    49,    70,    84,    87,
      87
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
      76,    76,    76,    76,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    78,    78,    78,    78,    78,    79,
      79,    79,    79,    79,    79,    80,    80,    81,    81,    81,
      81,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    83,    83,    83,    83,    83,    84,    84,
      84,    84,    84,    84,    84,    84,    85,    85,    85,    85,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    88,
      88,    88,    88,    88,    88,    88,    88,    89,    89,    89,
      89,    89,    89,    89,    89,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    91,    91,    92,
      92,    93,    93,    93,    93,    93,    93,    93,    93,    94,
      94,    94,    94,    94,    94
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
       3,     4,     5,     3,     5,     3,     5,     3,     6,     4,
       5,     3,     2,     4,     3,     2,     2,     1,     2,     3,
       4,     3,     5,     4,     2,     2,     1,     3,     4,     3,
       1,     4,     2,     2,     3,     2,     1,     1,     2,     3,
       2,     1,     2,     3,     4,     2,     3,     4,     5,     3,
       4,     4,     5,     4,     5,     6,     3,     5,     2,     4,
       1,     3,     3,     5,     2,     4,     2,     1,     3,     2,
       3,     4,     4,     5,     5,     3,     6,     4,     1,     2,
       4,     7,     5,     2,     3,     1,     2,     3,     3,     2,
       3,     4,     4,     3,     4,     5,     5,     6,     6,     4,
       4,     5,     5,     4,     5,     6,     6,     7,     7,     1,
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
#line 61 "ast.y" /* yacc.c:1646  */
    { 
			}
#line 1788 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 63 "ast.y" /* yacc.c:1646  */
    {
			}
#line 1795 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 65 "ast.y" /* yacc.c:1646  */
    {
			}
#line 1802 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 67 "ast.y" /* yacc.c:1646  */
    {
			}
#line 1809 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 69 "ast.y" /* yacc.c:1646  */
    {
			}
#line 1816 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 71 "ast.y" /* yacc.c:1646  */
    {
			}
#line 1823 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 73 "ast.y" /* yacc.c:1646  */
    {
			}
#line 1830 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 75 "ast.y" /* yacc.c:1646  */
    {
			}
#line 1837 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 77 "ast.y" /* yacc.c:1646  */
    {
			}
#line 1844 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 81 "ast.y" /* yacc.c:1646  */
    { 
			}
#line 1851 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 83 "ast.y" /* yacc.c:1646  */
    { 
			}
#line 1858 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 87 "ast.y" /* yacc.c:1646  */
    {
			}
#line 1865 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 89 "ast.y" /* yacc.c:1646  */
    {
			}
#line 1872 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 93 "ast.y" /* yacc.c:1646  */
    {
				treeNode* ptr = add_node("BODY");
				add_children(ptr,(yyvsp[-1].object)->v);
				print(ptr);
			}
#line 1882 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 98 "ast.y" /* yacc.c:1646  */
    {
			}
#line 1889 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 102 "ast.y" /* yacc.c:1646  */
    { vn v;
				v.push_back(add_node("COMMENT",(yyvsp[0].value)));
				node* n = new node;
				copy(n->v,v);
				(yyval.object)=n;
			}
#line 1900 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 108 "ast.y" /* yacc.c:1646  */
    {  	vn v;
				v.push_back(add_node("BR"));
				node* n = new node;
				copy(n->v,v);
				(yyval.object)=n;
			}
#line 1911 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 114 "ast.y" /* yacc.c:1646  */
    { 	vn v;
				v.push_back(add_node("TEXT",(yyvsp[0].value)));
				node* n = new node;
				copy(n->v,v);
				(yyval.object)=n;
			}
#line 1922 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 120 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 1930 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 123 "ast.y" /* yacc.c:1646  */
    { 
				vn v;
				v.push_back(add_node("SYMBOL",(yyvsp[0].value)));
				node* n = new node;
				copy(n->v,v);
				(yyval.object)=n;
			}
#line 1942 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 132 "ast.y" /* yacc.c:1646  */
    {  vn v1,v2;
			v1 = (yyvsp[-1].object)->v;
			v2 = (yyvsp[0].object)->v;
			int s=v1.size();
			if(v1[s-1]->tagVal=="TEXT" && v2[0]->tagVal=="TEXT" ){
				v1[s-1]->content=v1[s-1]->content+v2[0]->content;
			}
			else{
				copy(v1,v2);
			}
			node* n = new node;
			copy(n->v,v1);
			(yyval.object)=n;
		}
#line 1961 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 146 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 1969 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 151 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 1977 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 154 "ast.y" /* yacc.c:1646  */
    {
		}
#line 1984 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 156 "ast.y" /* yacc.c:1646  */
    {
		}
#line 1991 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 158 "ast.y" /* yacc.c:1646  */
    {
		}
#line 1998 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 162 "ast.y" /* yacc.c:1646  */
    { vn v1,v2;
			v1 = (yyvsp[-1].object)->v;
			v2 = (yyvsp[0].object)->v;
			int s=v1.size();
			if(v1[s-1]->tagVal=="TEXT" && v2[0]->tagVal=="TEXT" ){
				v1[s-1]->content=v1[s-1]->content+v2[0]->content;
			}
			else{
				copy(v1,v2);
			}
			node* n = new node;
			copy(n->v,v1);
			(yyval.object)=n;
		}
#line 2017 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 176 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 2025 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 181 "ast.y" /* yacc.c:1646  */
    { (yyval.object)=(yyvsp[0].object); }
#line 2031 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 182 "ast.y" /* yacc.c:1646  */
    {  (yyval.object)=(yyvsp[0].object); }
#line 2037 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 183 "ast.y" /* yacc.c:1646  */
    {  (yyval.object)=(yyvsp[0].object); }
#line 2043 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 184 "ast.y" /* yacc.c:1646  */
    {
			vn v1,v2;
			v1 = (yyvsp[-1].object)->v;
			v2 = (yyvsp[0].object)->v;
			int s=v1.size();
			if(v1[s-1]->tagVal=="TEXT" && v2[0]->tagVal=="TEXT" ){
				v1[s-1]->content=v1[s-1]->content+v2[0]->content;
			}
			else{
				copy(v1,v2);
			}
			node* n = new node;
			copy(n->v,v1);
			(yyval.object)=n;
		}
#line 2063 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 199 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 2071 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 202 "ast.y" /* yacc.c:1646  */
    { 
			(yyval.object)=(yyvsp[0].object);
		}
#line 2079 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 205 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 2087 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 208 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 2095 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 211 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 2103 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 214 "ast.y" /* yacc.c:1646  */
    { 
		}
#line 2110 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 216 "ast.y" /* yacc.c:1646  */
    { 
		}
#line 2117 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 218 "ast.y" /* yacc.c:1646  */
    { 
		}
#line 2124 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 222 "ast.y" /* yacc.c:1646  */
    { 
		}
#line 2131 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 224 "ast.y" /* yacc.c:1646  */
    { 
		}
#line 2138 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 226 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2145 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 228 "ast.y" /* yacc.c:1646  */
    { 
		}
#line 2152 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 232 "ast.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2160 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 235 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2168 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 238 "ast.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_start((yyvsp[0].value));	
		}
#line 2176 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 241 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2184 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 244 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2192 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 247 "ast.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2200 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 252 "ast.y" /* yacc.c:1646  */
    { 
			(yyval.object)=(yyvsp[0].object);
		}
#line 2208 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 255 "ast.y" /* yacc.c:1646  */
    {
			node* n=new node;
			copy(n->v,(yyvsp[-2].object)->v);
			copy(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;
		}
#line 2219 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 263 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 2227 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 266 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2235 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 269 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2243 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 272 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2251 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 275 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2259 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 278 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2267 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 281 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2275 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 286 "ast.y" /* yacc.c:1646  */
    { 
		}
#line 2282 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 288 "ast.y" /* yacc.c:1646  */
    { 
		}
#line 2289 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 290 "ast.y" /* yacc.c:1646  */
    { 
		}
#line 2296 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 292 "ast.y" /* yacc.c:1646  */
    { 
		}
#line 2303 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 294 "ast.y" /* yacc.c:1646  */
    { 
		}
#line 2310 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 298 "ast.y" /* yacc.c:1646  */
    { 
		}
#line 2317 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 300 "ast.y" /* yacc.c:1646  */
    { 
    	}
#line 2324 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 302 "ast.y" /* yacc.c:1646  */
    { 
		}
#line 2331 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 304 "ast.y" /* yacc.c:1646  */
    { 
    	}
#line 2338 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 306 "ast.y" /* yacc.c:1646  */
    { 
    	}
#line 2345 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 308 "ast.y" /* yacc.c:1646  */
    { 
    	}
#line 2352 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 310 "ast.y" /* yacc.c:1646  */
    {
    	}
#line 2359 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 312 "ast.y" /* yacc.c:1646  */
    { 	
		}
#line 2366 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 316 "ast.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2374 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 319 "ast.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2382 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 322 "ast.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2390 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 325 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 2398 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 328 "ast.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2406 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 331 "ast.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2414 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 334 "ast.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2422 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 337 "ast.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2430 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 340 "ast.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_child_neighbour((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2438 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 343 "ast.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2446 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 348 "ast.y" /* yacc.c:1646  */
    { 
		}
#line 2453 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 350 "ast.y" /* yacc.c:1646  */
    { 
		}
#line 2460 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 352 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2467 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 354 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2474 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 356 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2481 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 360 "ast.y" /* yacc.c:1646  */
    {
			(yyvsp[0].object)->v[0]->children.insert((yyvsp[0].object)->v[0]->children.begin(),(yyvsp[-1].object)->v.begin(),(yyvsp[-1].object)->v.end());
			(yyval.object)=(yyvsp[0].object);
		}
#line 2490 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 364 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 2498 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 367 "ast.y" /* yacc.c:1646  */
    {
			(yyvsp[0].object)->v[0]->children.insert((yyvsp[0].object)->v[0]->children.begin(),(yyvsp[-1].object)->v.begin(),(yyvsp[-1].object)->v.end());
			(yyvsp[0].object)->v[0]->children.insert((yyvsp[0].object)->v[0]->children.begin(),(yyvsp[-3].object)->v.begin(),(yyvsp[-3].object)->v.end());
			(yyval.object)=(yyvsp[0].object);
		}
#line 2508 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 372 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2516 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 375 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2524 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 378 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2532 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 383 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2540 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 386 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 2548 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 391 "ast.y" /* yacc.c:1646  */
    {
		(yyval.object)=add_start((yyvsp[0].value));
		}
#line 2556 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 394 "ast.y" /* yacc.c:1646  */
    {
		(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2564 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 397 "ast.y" /* yacc.c:1646  */
    {
		(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2572 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 400 "ast.y" /* yacc.c:1646  */
    {
		(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2580 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 405 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 2588 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 408 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2596 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 411 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2604 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 414 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2612 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 417 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2620 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 420 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2628 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 423 "ast.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 2636 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 426 "ast.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 2644 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 429 "ast.y" /* yacc.c:1646  */
    { 
    		(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
    	}
#line 2652 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 432 "ast.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 2660 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 435 "ast.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
    	}
#line 2668 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 438 "ast.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 2676 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 443 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-3].object),(yyvsp[-2].value),(yyvsp[0].object));
		}
#line 2684 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 446 "ast.y" /* yacc.c:1646  */
    {
			node *n=add_child_neighbour((yyvsp[-4].object),(yyvsp[-3].value),(yyvsp[-2].object));
			copy(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;
		}
#line 2694 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 451 "ast.y" /* yacc.c:1646  */
    {
			node *n=add_child_neighbour((yyvsp[-5].object),(yyvsp[-4].value),(yyvsp[-2].object));
			copy(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;
		}
#line 2704 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 456 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-2].value),(yyvsp[0].object));
		}
#line 2712 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 459 "ast.y" /* yacc.c:1646  */
    {
    		node *n=add_neighbour((yyvsp[-4].value),(yyvsp[-2].object));
    		copy(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;	
    	}
#line 2722 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 466 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2730 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 469 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-3].object),(yyvsp[-2].value),(yyvsp[0].object));	
		}
#line 2738 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 472 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 2746 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 475 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-2].value),(yyvsp[0].object));
		}
#line 2754 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 478 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2762 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 481 "ast.y" /* yacc.c:1646  */
    {
			node* n=add_child_neighbour((yyvsp[-4].object),(yyvsp[-3].value),(yyvsp[-2].object));
			copy(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;
		}
#line 2772 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 486 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2780 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 489 "ast.y" /* yacc.c:1646  */
    {
			node *n=add_neighbour((yyvsp[-3].value),(yyvsp[-2].object));
			copy(n->v,(yyvsp[0].object)->v);
		}
#line 2789 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 495 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2797 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 498 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 2805 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 501 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2813 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 504 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2821 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 509 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2829 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 512 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2837 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 515 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2845 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 518 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2853 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 521 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2861 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 524 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2869 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 527 "ast.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 2877 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 530 "ast.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 2885 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 533 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 2893 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 536 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2901 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 539 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2909 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 542 "ast.y" /* yacc.c:1646  */
    {
    		node* n=add_child_neighbour((yyvsp[-6].object),(yyvsp[-4].object),(yyvsp[-1].value),(yyvsp[0].object));
    		add_children(n->v[0],(yyvsp[-2].object)->v);
    		(yyval.object)=n;
    	}
#line 2919 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 547 "ast.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 2927 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 550 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2935 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 553 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2943 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 558 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 2951 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 561 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2959 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 564 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2967 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 567 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2975 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 570 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2983 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 573 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2991 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 576 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2999 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 579 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3007 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 582 "ast.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_neighbour((yyvsp[-2].value),(yyvsp[0].object));
		}
#line 3015 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 585 "ast.y" /* yacc.c:1646  */
    {
			node* n=add_neighbour((yyvsp[-3].value),(yyvsp[-2].object));
			copy(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;
		}
#line 3025 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 590 "ast.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-3].object),(yyvsp[-2].value),(yyvsp[0].object));
    	}
#line 3033 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 593 "ast.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-3].object),(yyvsp[-2].value),(yyvsp[0].object));
    	}
#line 3041 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 596 "ast.y" /* yacc.c:1646  */
    {
    		node* n=add_child_neighbour((yyvsp[-4].object),(yyvsp[-3].value),(yyvsp[-2].object));
			copy(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;	
    	}
#line 3051 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 601 "ast.y" /* yacc.c:1646  */
    {
    		node* n=add_child_neighbour((yyvsp[-4].object),(yyvsp[-3].value),(yyvsp[-2].object));
			copy(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;	
    	}
#line 3061 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 606 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3069 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 609 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3077 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 612 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3085 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 615 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3093 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 618 "ast.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_child_neighbour((yyvsp[-3].object),(yyvsp[-2].value),(yyvsp[0].object));
		}
#line 3101 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 621 "ast.y" /* yacc.c:1646  */
    {
			node* n=add_child_neighbour((yyvsp[-4].object),(yyvsp[-3].value),(yyvsp[-2].object));
			copy(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;
		}
#line 3111 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 626 "ast.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-5].object),(yyvsp[-3].object),(yyvsp[-2].value),(yyvsp[0].object));
    	}
#line 3119 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 629 "ast.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-5].object),(yyvsp[-3].object),(yyvsp[-2].value),(yyvsp[0].object));
    	}
#line 3127 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 632 "ast.y" /* yacc.c:1646  */
    {
    		node* n=add_child_neighbour((yyvsp[-6].object),(yyvsp[-4].object),(yyvsp[-3].value),(yyvsp[-2].object));
			copy(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;	
    	}
#line 3137 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 637 "ast.y" /* yacc.c:1646  */
    {
    		node* n=add_child_neighbour((yyvsp[-6].object),(yyvsp[-4].object),(yyvsp[-3].value),(yyvsp[-2].object));
			copy(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;	
    	}
#line 3147 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 645 "ast.y" /* yacc.c:1646  */
    {	(yyval.object)=add_start((yyvsp[0].value));
		}
#line 3154 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 647 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3162 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 650 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3170 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 653 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3178 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 656 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-2].value),(yyvsp[0].object));
		}
#line 3186 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 659 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-3].object),(yyvsp[-2].value),(yyvsp[0].object));
		}
#line 3194 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 662 "ast.y" /* yacc.c:1646  */
    {
			node* n=add_neighbour((yyvsp[-3].value),(yyvsp[-2].object));
		  	copy(n->v,(yyvsp[0].object)->v);
    		(yyval.object)=n;			
		}
#line 3204 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 667 "ast.y" /* yacc.c:1646  */
    { 
			node* n=add_child_neighbour((yyvsp[-4].object),(yyvsp[-3].value),(yyvsp[-2].object));
		  	copy(n->v,(yyvsp[0].object)->v);
    		(yyval.object)=n;
		}
#line 3214 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 674 "ast.y" /* yacc.c:1646  */
    {	
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 3222 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 677 "ast.y" /* yacc.c:1646  */
    {
	    	(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
    	}
#line 3230 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 680 "ast.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 3238 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 683 "ast.y" /* yacc.c:1646  */
    {
	 	   	(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 3246 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 686 "ast.y" /* yacc.c:1646  */
    {
	    	(yyval.object)=add_neighbour((yyvsp[-2].value),(yyvsp[0].object));
    	}
#line 3254 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 689 "ast.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-3].object),(yyvsp[-2].value),(yyvsp[0].object));
    	}
#line 3262 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 692 "ast.y" /* yacc.c:1646  */
    {
	    	node *n=add_neighbour((yyvsp[-3].value),(yyvsp[-2].object));
  		  	copy(n->v,(yyvsp[0].object)->v);
    		(yyval.object)=n;
    	}
#line 3272 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 697 "ast.y" /* yacc.c:1646  */
    {
 	 	  	node* n=add_child_neighbour((yyvsp[-4].object),(yyvsp[-3].value),(yyvsp[-2].object));
    		copy(n->v,(yyvsp[0].object)->v);
    		(yyval.object)=n;
    	}
#line 3282 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 704 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3290 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 707 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3298 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 710 "ast.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-2].object),(yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3306 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 713 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3314 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 716 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 3322 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 719 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3330 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 722 "ast.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 3338 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 725 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-3].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3346 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 728 "ast.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 3354 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 731 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3362 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 734 "ast.y" /* yacc.c:1646  */
    {
			node* n=add_child_neighbour((yyvsp[-5].object),(yyvsp[-3].object),(yyvsp[-1].value),(yyvsp[0].object));
    		add_children(n->v[0],(yyvsp[-2].object)->v);
    		(yyval.object)=n;
		}
#line 3372 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 739 "ast.y" /* yacc.c:1646  */
    {
			node* n=add_startChild((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[0].value));
    		add_children(n->v[0],(yyvsp[-1].object)->v);
    		(yyval.object)=n;	
		}
#line 3382 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 746 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3390 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 749 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 3398 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 754 "ast.y" /* yacc.c:1646  */
    { 
			treeNode* ptr=(yyvsp[0].object)->v[0];
			add_attributes(ptr,(yyvsp[-2].value),(yyvsp[-1].value));
			(yyval.object)=(yyvsp[0].object);
		}
#line 3408 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 759 "ast.y" /* yacc.c:1646  */
    { 	node* n = new node;
				vn v;
				treeNode* ptr=add_node("IMG");
				v.pb(ptr);
				copy(n->v,v);
				(yyval.object)=n;
		}
#line 3420 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 768 "ast.y" /* yacc.c:1646  */
    {
		}
#line 3427 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 770 "ast.y" /* yacc.c:1646  */
    {
		}
#line 3434 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 772 "ast.y" /* yacc.c:1646  */
    {
		}
#line 3441 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 774 "ast.y" /* yacc.c:1646  */
    {
		}
#line 3448 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 776 "ast.y" /* yacc.c:1646  */
    { 
   		}
#line 3455 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 778 "ast.y" /* yacc.c:1646  */
    {
   		}
#line 3462 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 780 "ast.y" /* yacc.c:1646  */
    {
		}
#line 3469 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 782 "ast.y" /* yacc.c:1646  */
    {
		}
#line 3476 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 786 "ast.y" /* yacc.c:1646  */
    {
		}
#line 3483 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 788 "ast.y" /* yacc.c:1646  */
    {
		}
#line 3490 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 790 "ast.y" /* yacc.c:1646  */
    {
		}
#line 3497 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 792 "ast.y" /* yacc.c:1646  */
    {
		}
#line 3504 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 794 "ast.y" /* yacc.c:1646  */
    {
		}
#line 3511 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 796 "ast.y" /* yacc.c:1646  */
    {
		}
#line 3518 "ast.tab.c" /* yacc.c:1646  */
    break;


#line 3522 "ast.tab.c" /* yacc.c:1646  */
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
#line 800 "ast.y" /* yacc.c:1906  */

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
void update(vn* v){
	vn* temp;
	treeNode* first = (*v)[0];
	for(int i=1;i<(*v).size();i++){
		if(first->tagVal == (*v)[i]->tagVal){
			first->content=first->content+(*v)[i]->content;
		}
		else{
			(*temp).pb(first);
			first = (*v)[i];
		}
	}
	(*temp).pb(first);
	v=temp;
}
