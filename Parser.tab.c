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

#include "convert.h"
#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>

using namespace std;

#define copy_list(v1,v2) copy(v2.begin(),v2.end(),back_inserter(v1))
#define pb(x) push_back(x)

int i=0;
string outfile;
extern int yylex();
extern void yyerror(const char*);
char* concat(char *s1,char *s2);
typedef vector<treeNode*> vn;
extern map<string,pair<string,string>> convertTag;
extern lexNode* convert(treeNode *node,int flag);
extern void writeTex(lexNode *root,string s);
extern void writeLex(lexNode *root);
extern void clearFile(string s);

#line 90 "Parser.tab.c" /* yacc.c:339  */

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
    TABOPOP = 311,
    COMMENT = 312,
    SPCHAR = 313,
    SYMBOL = 314,
    CENTEROP = 315,
    CENTERCL = 316
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 26 "Parser.y" /* yacc.c:355  */

	node* object;
	char* value;

#line 197 "Parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 214 "Parser.tab.c" /* yacc.c:358  */

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
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1609

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  236
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  420

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   316

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
      55,    56,    57,    58,    59,    60,    61
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    64,    64,    79,    92,   108,   122,   141,   144,   149,
     152,   155,   159,   166,   173,   182,   185,   189,   196,   203,
     206,   209,   216,   225,   228,   232,   239,   245,   248,   251,
     258,   267,   276,   285,   288,   297,   308,   311,   317,   323,
     329,   332,   341,   359,   364,   367,   370,   373,   378,   396,
     401,   402,   403,   404,   422,   425,   428,   431,   434,   437,
     440,   443,   448,   451,   454,   457,   462,   465,   468,   471,
     474,   477,   482,   485,   493,   496,   499,   502,   505,   508,
     511,   516,   521,   526,   529,   534,   539,   544,   547,   552,
     555,   560,   563,   566,   571,   576,   581,   584,   587,   590,
     593,   596,   599,   602,   605,   608,   613,   616,   619,   622,
     625,   630,   634,   637,   642,   645,   648,   653,   656,   661,
     664,   667,   670,   675,   678,   681,   684,   687,   690,   693,
     696,   699,   702,   705,   708,   713,   716,   721,   726,   729,
     736,   739,   742,   745,   748,   751,   756,   759,   766,   769,
     772,   775,   780,   783,   786,   789,   792,   795,   798,   801,
     804,   807,   810,   813,   818,   821,   824,   829,   832,   835,
     838,   841,   844,   847,   850,   853,   856,   861,   864,   867,
     872,   877,   880,   883,   886,   889,   892,   897,   900,   903,
     908,   916,   918,   921,   924,   927,   930,   933,   938,   945,
     948,   951,   954,   957,   960,   963,   968,   975,   978,   981,
     984,   987,   990,   993,   996,   999,  1002,  1005,  1010,  1017,
    1020,  1025,  1030,  1039,  1044,  1047,  1050,  1055,  1058,  1061,
    1066,  1073,  1078,  1083,  1086,  1091,  1096
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
  "THOP", "THCL", "TDOP", "TDCL", "BR", "TABOPOP", "COMMENT", "SPCHAR",
  "SYMBOL", "CENTEROP", "CENTERCL", "$accept", "st", "html", "head",
  "title", "body", "misctop", "consumetop", "misctext", "consumetext",
  "misc", "consume", "miscph", "consumeph", "flow", "center", "phraseopen",
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
     315,   316
};
# endif

#define YYPACT_NINF -291

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-291)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      12,     6,    -3,  -291,    34,  -291,    17,    -3,    10,  -291,
      42,    19,  -291,     5,    -3,  -291,  -291,  -291,    13,    21,
      28,   380,    44,    48,    87,    -3,     8,  -291,    22,  -291,
    -291,    33,  -291,  -291,    46,    22,   650,  1241,  -291,    71,
     791,    96,    15,   247,   753,   488,   246,  -291,  -291,  -291,
     669,  1221,    81,    22,   707,  -291,    93,    89,  -291,    -3,
      22,    22,  -291,    22,    95,    22,  1221,   203,   103,    37,
     167,  -291,  -291,  1040,  -291,    97,   650,  1221,  1265,   109,
    -291,   821,   108,  -291,  1221,   113,  -291,   117,  -291,  -291,
     118,  1221,  -291,  1221,   851,  -291,   326,  -291,  1221,   881,
     -10,  -291,   791,  1221,   911,   719,  -291,  1221,   949,   133,
     395,  -291,  1221,    59,  -291,  -291,    22,    22,    22,   136,
    -291,  -291,  -291,    22,    22,    22,  -291,  1070,   342,   137,
    -291,  1285,   130,  -291,   132,  1070,  -291,   650,  -291,   563,
      99,  -291,  1221,   203,  -291,  1221,   144,  -291,   650,  1221,
    1221,  1221,   141,   148,  -291,  1221,    96,   145,   140,  -291,
    -291,   139,   247,  1221,   851,  -291,  -291,  -291,   142,   987,
    1221,   881,   138,  -291,   134,   147,   151,   791,  1221,   911,
    -291,   505,   149,    86,   281,  1017,  1047,   629,   152,  1221,
     949,   133,  -291,  1221,    22,    22,    22,    22,  1427,  -291,
    1070,  -291,   650,  -291,  1309,   161,   180,   171,  1373,   173,
     150,   650,  -291,  -291,  -291,  -291,  -291,  1221,   191,  -291,
    -291,  -291,  1221,  1093,  -291,  -291,  1131,  1221,  -291,  -291,
    -291,   247,  -291,  1221,   177,  -291,  1161,  1221,  1191,   405,
    1221,   174,  -291,   190,   505,   505,  1221,   133,   133,   934,
     610,   168,   183,   404,   181,   184,  1061,  1017,  1047,  1221,
    -291,    90,   193,  -291,    22,  1427,  -291,   219,   650,  -291,
    -291,  1329,  1391,  -291,  -291,  -291,   185,  -291,  1221,  -291,
    1221,   220,  1221,   214,  -291,  -291,  -291,  1221,  1221,   209,
    -291,  1335,   205,   210,  1191,  1359,  -291,  1221,  1221,   505,
    -291,   204,  -291,   133,  1017,   802,  1408,  1216,  1047,   694,
     768,  1426,   133,  1444,   202,   218,  -291,  1221,   133,  1221,
    -291,   233,   650,  -291,  1353,   234,  -291,  1409,   239,  -291,
    -291,  -291,  1221,  -291,  1221,  -291,  -291,  1221,  1191,  1453,
    1454,   911,   229,  1191,  -291,  -291,  1221,  -291,  -291,  1017,
    1017,  1472,   133,  1488,  -291,  1047,  1047,  1489,   133,  1500,
    -291,   133,  1507,  1512,  -291,   225,  -291,  -291,   253,   650,
    -291,  -291,  -291,  -291,  -291,  -291,  -291,  -291,  1191,  1191,
    1532,  -291,   911,  -291,  -291,  -291,  -291,  1017,  -291,   133,
    -291,  -291,  1047,  -291,   133,  -291,   133,  1547,   133,  1550,
    1221,  -291,   254,  -291,  -291,  1191,  -291,  -291,  -291,  -291,
    -291,  -291,   133,  -291,   133,  -291,  -291,  -291,  -291,  -291
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    31,     0,    33,     0,     0,     0,     3,
       0,     0,     1,     0,     0,    32,     2,    10,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     5,    15,    34,
      36,     0,     9,    11,     0,    24,     0,     0,    39,     0,
       0,     0,     0,     0,     0,     0,     0,    38,    37,    41,
       0,    54,     0,     7,     0,    13,     0,     0,     4,     0,
      19,    16,    35,    17,     0,    28,    68,     0,     0,     0,
       0,    44,    49,     0,    50,     0,     0,    99,     0,     0,
      51,     0,     0,    59,   119,     0,    55,     0,   222,    40,
       0,     0,    60,   112,     0,    43,     0,    52,   211,     0,
       0,    58,     0,   123,     0,     0,    56,   160,     0,     0,
       0,    57,    64,     0,    61,    53,    23,     8,    26,     0,
      12,    14,     6,    20,    21,    18,    67,    74,     0,     0,
      72,     0,     0,    45,     0,     0,    46,     0,   108,     0,
       0,    47,    71,     0,    48,    69,     0,    98,     0,   100,
      97,   228,     0,     0,   120,   122,     0,     0,     0,   115,
     118,     0,     0,   114,     0,    42,   216,   220,     0,     0,
     210,     0,     0,   127,     0,     0,     0,     0,   124,     0,
     161,   149,     0,     0,   167,     0,     0,     0,     0,   165,
       0,     0,    65,    62,    27,    30,    25,    22,    77,    76,
      78,    75,     0,    92,     0,     0,     0,     0,     0,     0,
       0,     0,   107,   106,    70,    73,    66,   103,     0,   101,
      96,   225,   227,     0,   121,   221,     0,   233,   117,   111,
     116,     0,   219,   208,     0,   215,     0,   125,     0,     0,
     131,     0,   128,     0,   151,   148,   152,     0,     0,   171,
     191,     0,     0,   199,     0,     0,   168,     0,     0,   157,
     166,     0,     0,    63,    29,    80,    79,     0,     0,    91,
      87,     0,     0,    85,    83,   109,     0,   102,   105,   224,
     230,     0,   231,     0,   236,   113,   213,   209,   207,     0,
     129,   142,     0,   138,     0,     0,   132,   126,   133,   150,
     153,     0,   175,     0,     0,   193,   192,   169,     0,   201,
     200,   170,     0,   172,     0,     0,   159,   154,     0,   162,
      89,     0,     0,    93,     0,     0,    81,     0,     0,   110,
     104,   229,   226,   234,   232,   214,   212,   218,     0,   146,
     140,     0,   135,     0,   130,   134,   156,   176,   195,     0,
       0,   194,     0,   173,   203,     0,     0,   202,     0,   174,
     185,     0,   181,   182,   155,     0,   164,    95,     0,     0,
      90,    86,    84,    82,   223,   235,   217,   143,     0,     0,
     144,   139,     0,   136,   158,   197,   196,     0,   177,     0,
     205,   204,     0,   178,     0,   186,     0,   183,     0,   184,
       0,    88,     0,   147,   141,     0,   137,   198,   179,   206,
     180,   187,     0,   188,     0,   163,    94,   145,   189,   190
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -291,  -291,    25,  -291,   260,  -291,   477,   638,   -17,   244,
     245,   164,   -71,   -29,   -21,  -291,   -36,   -24,   146,  -291,
    -291,  -291,  -291,  -156,   121,   -97,  -291,  -178,  -290,   104,
    -291,   221,  -233,  -247,  -291,   126,   153,  -291,  -291
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     9,    10,    19,    22,     5,    11,    30,    31,
      51,   187,    72,    73,   292,   114,    74,    75,   130,   136,
     133,    80,   141,    97,   162,    86,   106,   176,   293,   183,
     111,   188,   252,   255,   101,   169,    89,    83,    92
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      52,   243,   144,     8,   342,   172,   229,   144,    78,    25,
       7,   315,    59,    79,    62,     1,     2,    17,    18,    85,
      13,    14,    28,   100,   314,    24,   170,   171,    32,   113,
     115,    29,    16,   119,    12,    33,    34,    90,   128,    27,
     146,   139,    61,   129,    91,   126,   140,    62,   377,    53,
      58,    29,    21,   383,     3,    63,   147,   144,    54,   134,
     152,   354,     3,   154,    29,     3,   135,     3,   144,     3,
     158,   348,   159,   161,     3,   285,     3,   166,   168,     3,
     241,    85,   173,   175,   122,     3,   180,   182,   403,   404,
      81,   192,   116,    82,    55,    18,   121,    34,   198,     3,
     120,   210,   204,   199,   125,     3,   208,   205,   390,   391,
     145,   209,   218,    29,   128,   417,   385,   386,    87,   129,
     193,   214,   131,    88,   216,   132,   150,   144,   219,   220,
     221,   153,   246,   144,   224,   247,   317,   144,   155,   318,
     156,   157,   230,   161,     3,   409,     3,   196,   234,   235,
     168,    38,   201,   206,   407,   207,    85,   242,   175,    41,
     213,   217,   222,   381,   251,   254,   267,   223,   260,   182,
     227,   265,   263,   228,   226,   276,   266,   238,   237,   137,
     232,    67,   270,   184,   185,    38,   186,    68,    47,   239,
      48,   240,    49,    41,   144,    69,   277,   245,   259,   271,
     272,   279,   281,   274,   406,   283,   284,    96,   278,   105,
     110,   275,   286,   287,   297,   289,   290,    67,   127,   296,
     306,    38,    47,    68,    48,   300,    49,    70,   138,    41,
     298,    69,   321,   307,   311,   310,   251,   254,   316,   319,
     320,   332,   324,   327,   334,   337,   329,   325,   328,   340,
     346,   341,   362,   144,   367,   371,   144,   330,    47,   331,
      48,   333,    49,    70,    38,    38,   335,   336,   363,   373,
     382,   400,    41,    41,   401,   416,   344,   345,    64,    93,
      94,    71,    71,   251,    56,   231,   368,   254,    95,   215,
      95,    95,   107,   108,   261,   109,   364,   236,   366,    38,
       0,    47,    47,    48,    48,    49,    49,    41,     0,   225,
       0,   374,    71,   375,     0,    71,   376,     0,    71,     0,
     175,    71,     0,    71,     0,   384,    96,     0,   251,   251,
     248,     0,     0,   402,   254,   254,    47,     0,    48,     0,
      49,   165,     0,     0,    38,   244,     0,     0,   249,     0,
     165,     0,    41,     0,    95,   165,   143,   200,   163,   164,
      38,   175,    68,     0,     0,     0,   251,     0,    41,     0,
      69,   254,    71,    71,     0,     0,    71,     0,     0,   415,
      71,    47,    71,    48,    71,    49,     0,     0,    71,     0,
       0,    35,    36,    71,     0,    96,    37,    47,    38,    48,
      39,    49,    70,   295,    40,     0,    41,    95,    42,   299,
       0,    43,   262,    38,   305,    44,     0,   309,     0,    45,
     313,    41,    38,    38,     0,    46,    95,     0,     0,    95,
      41,    41,   165,     0,     0,    47,    95,    48,     0,    49,
      50,   189,   190,    71,   191,    71,     0,    71,   294,    71,
      47,     0,    48,    71,    49,   339,    71,   308,     0,    47,
      47,    48,    48,    49,    49,     0,     0,     0,   301,   302,
     351,   353,     0,     0,   357,   359,    95,     0,     0,     0,
       0,     0,     0,    15,    95,     0,     0,     0,    15,   165,
      95,     0,    95,    95,   165,    95,     0,    15,    95,     0,
      15,    95,     0,    15,   380,     0,    38,     0,     0,     0,
      71,     0,   102,    71,    41,     0,    71,    71,     0,     0,
       0,     0,     0,    38,   347,     0,   397,   399,   103,   104,
       0,    41,     0,   360,    15,     0,    95,    15,     0,   365,
     165,     0,    15,    47,   165,    48,     0,    49,    95,     0,
     165,    95,    95,     0,   165,    95,    95,    95,   165,     0,
      47,     0,    48,    95,    49,     0,     0,    71,     0,    71,
       0,     0,    71,   388,     0,   211,     0,   143,     0,   393,
       0,    38,   395,    68,   165,    95,     0,     0,     0,    41,
       0,    69,     0,     0,    15,     0,   165,    95,   165,     0,
      15,    15,   165,    95,   165,     0,    95,    95,    95,     0,
     408,     0,     0,     0,    71,   410,     0,   411,    47,   413,
      48,     0,    49,    70,   212,   165,     0,     0,    38,     0,
       0,     0,     0,   418,    95,   419,    41,     0,     6,    95,
       0,    95,   165,    95,   165,     0,    20,    38,    23,     0,
       0,    26,     0,     0,     0,    41,     0,    95,     0,    95,
       0,   304,    57,    66,    67,    47,    60,    48,    38,    49,
      68,    15,    15,    65,    15,     0,    41,     0,    69,   256,
     257,    36,   258,     0,    47,    37,    48,    38,    49,    39,
       0,   117,     0,    40,     0,    41,     0,    42,     0,   123,
      43,   124,     0,     0,    44,    47,     0,    48,    45,    49,
      70,     0,    38,     0,    46,     0,     0,     0,   118,    36,
      41,     0,     0,    37,    47,    38,    48,    39,    49,    50,
     112,    40,     0,    41,     0,    42,     0,    38,    43,     0,
       0,    15,    44,   177,     0,    41,    45,   355,     0,    47,
       0,    48,    46,    49,   194,     0,   195,     0,     0,   178,
     179,     0,    47,   197,    48,    36,    49,    50,     0,    37,
       0,    38,     0,    39,    47,     0,    48,    40,    49,    41,
       0,    42,     0,     0,    43,     0,    38,     0,    44,    98,
      99,     0,    45,     0,    41,     0,     0,     0,    46,     0,
       0,     0,     0,    36,     0,     0,     0,    37,    47,    38,
      48,    39,    49,    50,     0,    40,    84,    41,     0,    42,
      38,   356,    43,    47,     0,    48,    44,    49,    41,     0,
      45,     0,     0,    36,   264,     0,    46,    37,     0,    38,
       0,    39,   151,     0,     0,    40,    47,    41,    48,    42,
      49,    50,    43,   349,     0,     0,    44,    47,     0,    48,
      45,    49,     0,    36,     0,     0,    46,    37,     0,    38,
       0,    39,     0,     0,     0,    40,    47,    41,    48,    42,
      49,    50,    43,     0,     0,   160,    44,     0,     0,     0,
      45,     0,     0,    36,     0,     0,    46,    37,     0,    38,
       0,    39,     0,     0,     0,    40,    47,    41,    48,    42,
      49,    50,    43,     0,     0,     0,    44,     0,     0,   167,
      45,     0,     0,    36,     0,     0,    46,    37,     0,    38,
       0,    39,     0,     0,     0,    40,    47,    41,    48,    42,
      49,    50,    43,     0,     0,     0,    44,     0,     0,     0,
      45,     0,    38,   174,     0,     0,    46,     0,     0,     0,
      41,    36,     0,     0,     0,    37,    47,    38,    48,    39,
      49,    50,     0,    40,     0,    41,     0,    42,     0,     0,
      43,     0,     0,   303,    44,     0,     0,     0,    45,    47,
       0,    48,     0,    49,    46,     0,     0,   181,     0,    36,
       0,     0,     0,    37,    47,    38,    48,    39,    49,    50,
       0,    40,     0,    41,     0,    42,     0,     0,    43,     0,
       0,     0,    44,   233,     0,     0,    45,     0,     0,    36,
       0,     0,    46,    37,     0,    38,     0,    39,     0,     0,
       0,    40,    47,    41,    48,    42,    49,    50,    43,     0,
       0,     0,    44,   142,   143,     0,    45,     0,    38,    36,
      68,     0,    46,    37,     0,    38,    41,    39,    69,   250,
       0,    40,    47,    41,    48,    42,    49,    50,    43,    38,
       0,     0,    44,     0,    67,     0,    45,    41,    38,     0,
      68,     0,    46,     0,     0,    47,    41,    48,    69,    49,
      70,   253,    47,     0,    48,    36,    49,    50,     0,    37,
     312,    38,     0,    39,   280,     0,    47,    40,    48,    41,
      49,    42,     0,     0,    43,    47,     0,    48,    44,    49,
      70,     0,    45,     0,     0,     0,     0,     0,    46,     0,
       0,     0,     0,    36,     0,     0,     0,    37,    47,    38,
      48,    39,    49,    50,     0,    40,     0,    41,     0,    42,
       0,   282,    43,     0,     0,     0,    44,     0,     0,     0,
      45,     0,     0,    36,     0,     0,    46,    37,     0,    38,
       0,    39,     0,     0,     0,    40,    47,    41,    48,    42,
      49,    50,    43,     0,     0,     0,    44,   288,     0,     0,
      45,     0,     0,    36,     0,     0,    46,    37,     0,    38,
       0,    39,     0,     0,     0,    40,    47,    41,    48,    42,
      49,    50,    43,     0,     0,     0,    44,     0,     0,     0,
      45,     0,     0,    36,    38,   291,    46,    37,     0,    38,
       0,    39,    41,     0,     0,    40,    47,    41,    48,    42,
      49,    50,    43,    76,     0,    67,    44,     0,    77,    38,
      45,    68,     0,     0,     0,   352,    46,    41,     0,    69,
       0,    47,     0,    48,     0,    49,    47,   148,    48,   143,
      49,    50,   149,    38,     0,    68,     0,     0,     0,     0,
       0,    41,     0,    69,     0,     0,    47,   202,    48,    67,
      49,    70,     0,    38,     0,    68,   203,     0,     0,     0,
       0,    41,     0,    69,     0,     0,     0,     0,     0,     0,
      47,   268,    48,   143,    49,    70,     0,    38,     0,    68,
     269,     0,     0,     0,     0,    41,     0,    69,     0,     0,
      47,   322,    48,    67,    49,    70,     0,    38,     0,    68,
     323,     0,     0,    38,     0,    41,     0,    69,     0,     0,
       0,    41,     0,     0,    47,   369,    48,   143,    49,    70,
       0,    38,     0,    68,   370,     0,     0,    38,   338,    41,
       0,    69,     0,     0,    47,    41,    48,   143,    49,    70,
      47,    38,    48,    68,    49,     0,     0,     0,     0,    41,
       0,    69,   343,   273,     0,    67,     0,     0,    47,    38,
      48,    68,    49,    70,    47,     0,    48,    41,    49,    69,
       0,   326,     0,   143,     0,     0,    38,    38,    47,    68,
      48,     0,    49,    70,    41,    41,     0,    69,     0,   372,
       0,   143,     0,     0,    38,    38,    47,    68,    48,     0,
      49,    70,    41,    41,     0,    69,     0,     0,     0,   350,
       0,     0,    38,    47,    47,    48,    48,    49,    49,    70,
      41,    38,    38,     0,     0,   358,     0,     0,     0,    41,
      41,    47,    47,    48,    48,    49,    49,    70,     0,     0,
      38,     0,     0,   361,     0,     0,   378,   379,    41,    47,
       0,    48,     0,    49,     0,     0,    38,    38,    47,    47,
      48,    48,    49,    49,    41,    41,     0,     0,    38,     0,
       0,     0,     0,   387,     0,    38,    41,    47,     0,    48,
      38,    49,     0,    41,     0,     0,     0,   389,    41,     0,
       0,     0,   392,    47,    47,    48,    48,    49,    49,   394,
      38,     0,     0,     0,     0,    47,   396,    48,    41,    49,
       0,   398,    47,     0,    48,    38,    49,    47,    38,    48,
       0,    49,     0,    41,     0,   405,    41,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    47,     0,    48,
       0,    49,     0,     0,     0,     0,   412,     0,     0,   414,
       0,     0,    47,     0,    48,    47,    49,    48,     0,    49
};

static const yytype_int16 yycheck[] =
{
      21,   179,    73,     6,   294,   102,   162,    78,    37,     4,
       4,   258,     4,    37,    31,     3,     4,     7,     8,    40,
       3,     4,     9,    44,   257,     6,    36,    37,     7,    50,
      51,    18,     7,    54,     0,     7,     8,    22,    67,    14,
      76,    70,     9,    67,    29,    66,    70,    64,   338,     5,
      25,    18,    10,   343,    57,     9,    77,   128,    10,    22,
      81,   308,    57,    84,    18,    57,    29,    57,   139,    57,
      91,   304,    93,    94,    57,   231,    57,    98,    99,    57,
     177,   102,   103,   104,    59,    57,   107,   108,   378,   379,
      19,   112,    11,    22,     7,     8,     7,     8,   127,    57,
       7,   137,   131,   127,     9,    57,   135,   131,   355,   356,
      13,   135,   148,    18,   143,   405,   349,   350,    22,   143,
      61,   142,    19,    27,   145,    22,    17,   198,   149,   150,
     151,    23,    46,   204,   155,    49,    46,   208,    25,    49,
      23,    23,   163,   164,    57,   392,    57,    11,   169,   170,
     171,    18,    15,    23,   387,    23,   177,   178,   179,    26,
      61,    17,    21,   341,   185,   186,   202,    19,   189,   190,
      30,   200,   193,    34,    29,   211,   200,    43,    40,    12,
      38,    14,    21,    50,    51,    18,    53,    20,    55,    42,
      57,    40,    59,    26,   265,    28,   217,    48,    46,    19,
      29,   222,   223,    30,   382,   226,   227,    43,    17,    45,
      46,    61,   233,    36,    40,   236,   237,    14,    15,   240,
      52,    18,    55,    20,    57,   246,    59,    60,    61,    26,
      40,    28,   268,    50,    50,    54,   257,   258,   259,    46,
      21,    21,   271,   272,    30,    36,    61,   271,   272,    44,
      46,    41,    50,   324,    21,    21,   327,   278,    55,   280,
      57,   282,    59,    60,    18,    18,   287,   288,    50,    30,
      41,    46,    26,    26,    21,    21,   297,   298,    34,    32,
      33,    36,    37,   304,    24,   164,   322,   308,    43,   143,
      45,    46,    46,    47,   190,    49,   317,   171,   319,    18,
      -1,    55,    55,    57,    57,    59,    59,    26,    -1,   156,
      -1,   332,    67,   334,    -1,    70,   337,    -1,    73,    -1,
     341,    76,    -1,    78,    -1,   346,   162,    -1,   349,   350,
      49,    -1,    -1,   369,   355,   356,    55,    -1,    57,    -1,
      59,    96,    -1,    -1,    18,   181,    -1,    -1,   184,    -1,
     105,    -1,    26,    -1,   109,   110,    14,    15,    32,    33,
      18,   382,    20,    -1,    -1,    -1,   387,    -1,    26,    -1,
      28,   392,   127,   128,    -1,    -1,   131,    -1,    -1,   400,
     135,    55,   137,    57,   139,    59,    -1,    -1,   143,    -1,
      -1,    11,    12,   148,    -1,   231,    16,    55,    18,    57,
      20,    59,    60,   239,    24,    -1,    26,   162,    28,   245,
      -1,    31,   191,    18,   250,    35,    -1,   253,    -1,    39,
     256,    26,    18,    18,    -1,    45,   181,    -1,    -1,   184,
      26,    26,   187,    -1,    -1,    55,   191,    57,    -1,    59,
      60,    46,    47,   198,    49,   200,    -1,   202,    43,   204,
      55,    -1,    57,   208,    59,   291,   211,    53,    -1,    55,
      55,    57,    57,    59,    59,    -1,    -1,    -1,   247,   248,
     306,   307,    -1,    -1,   310,   311,   231,    -1,    -1,    -1,
      -1,    -1,    -1,     6,   239,    -1,    -1,    -1,    11,   244,
     245,    -1,   247,   248,   249,   250,    -1,    20,   253,    -1,
      23,   256,    -1,    26,   340,    -1,    18,    -1,    -1,    -1,
     265,    -1,    24,   268,    26,    -1,   271,   272,    -1,    -1,
      -1,    -1,    -1,    18,   303,    -1,   362,   363,    40,    41,
      -1,    26,    -1,   312,    57,    -1,   291,    60,    -1,   318,
     295,    -1,    65,    55,   299,    57,    -1,    59,   303,    -1,
     305,   306,   307,    -1,   309,   310,   311,   312,   313,    -1,
      55,    -1,    57,   318,    59,    -1,    -1,   322,    -1,   324,
      -1,    -1,   327,   352,    -1,    12,    -1,    14,    -1,   358,
      -1,    18,   361,    20,   339,   340,    -1,    -1,    -1,    26,
      -1,    28,    -1,    -1,   117,    -1,   351,   352,   353,    -1,
     123,   124,   357,   358,   359,    -1,   361,   362,   363,    -1,
     389,    -1,    -1,    -1,   369,   394,    -1,   396,    55,   398,
      57,    -1,    59,    60,    61,   380,    -1,    -1,    18,    -1,
      -1,    -1,    -1,   412,   389,   414,    26,    -1,     0,   394,
      -1,   396,   397,   398,   399,    -1,     8,    18,    10,    -1,
      -1,    13,    -1,    -1,    -1,    26,    -1,   412,    -1,   414,
      -1,    51,    24,    13,    14,    55,    28,    57,    18,    59,
      20,   194,   195,    35,   197,    -1,    26,    -1,    28,    50,
      51,    12,    53,    -1,    55,    16,    57,    18,    59,    20,
      -1,    53,    -1,    24,    -1,    26,    -1,    28,    -1,    61,
      31,    63,    -1,    -1,    35,    55,    -1,    57,    39,    59,
      60,    -1,    18,    -1,    45,    -1,    -1,    -1,    11,    12,
      26,    -1,    -1,    16,    55,    18,    57,    20,    59,    60,
      61,    24,    -1,    26,    -1,    28,    -1,    18,    31,    -1,
      -1,   264,    35,    24,    -1,    26,    39,    53,    -1,    55,
      -1,    57,    45,    59,   116,    -1,   118,    -1,    -1,    40,
      41,    -1,    55,   125,    57,    12,    59,    60,    -1,    16,
      -1,    18,    -1,    20,    55,    -1,    57,    24,    59,    26,
      -1,    28,    -1,    -1,    31,    -1,    18,    -1,    35,    36,
      37,    -1,    39,    -1,    26,    -1,    -1,    -1,    45,    -1,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    16,    55,    18,
      57,    20,    59,    60,    -1,    24,    25,    26,    -1,    28,
      18,    53,    31,    55,    -1,    57,    35,    59,    26,    -1,
      39,    -1,    -1,    12,   196,    -1,    45,    16,    -1,    18,
      -1,    20,    21,    -1,    -1,    24,    55,    26,    57,    28,
      59,    60,    31,    51,    -1,    -1,    35,    55,    -1,    57,
      39,    59,    -1,    12,    -1,    -1,    45,    16,    -1,    18,
      -1,    20,    -1,    -1,    -1,    24,    55,    26,    57,    28,
      59,    60,    31,    -1,    -1,    34,    35,    -1,    -1,    -1,
      39,    -1,    -1,    12,    -1,    -1,    45,    16,    -1,    18,
      -1,    20,    -1,    -1,    -1,    24,    55,    26,    57,    28,
      59,    60,    31,    -1,    -1,    -1,    35,    -1,    -1,    38,
      39,    -1,    -1,    12,    -1,    -1,    45,    16,    -1,    18,
      -1,    20,    -1,    -1,    -1,    24,    55,    26,    57,    28,
      59,    60,    31,    -1,    -1,    -1,    35,    -1,    -1,    -1,
      39,    -1,    18,    42,    -1,    -1,    45,    -1,    -1,    -1,
      26,    12,    -1,    -1,    -1,    16,    55,    18,    57,    20,
      59,    60,    -1,    24,    -1,    26,    -1,    28,    -1,    -1,
      31,    -1,    -1,    49,    35,    -1,    -1,    -1,    39,    55,
      -1,    57,    -1,    59,    45,    -1,    -1,    48,    -1,    12,
      -1,    -1,    -1,    16,    55,    18,    57,    20,    59,    60,
      -1,    24,    -1,    26,    -1,    28,    -1,    -1,    31,    -1,
      -1,    -1,    35,    36,    -1,    -1,    39,    -1,    -1,    12,
      -1,    -1,    45,    16,    -1,    18,    -1,    20,    -1,    -1,
      -1,    24,    55,    26,    57,    28,    59,    60,    31,    -1,
      -1,    -1,    35,    13,    14,    -1,    39,    -1,    18,    12,
      20,    -1,    45,    16,    -1,    18,    26,    20,    28,    52,
      -1,    24,    55,    26,    57,    28,    59,    60,    31,    18,
      -1,    -1,    35,    -1,    14,    -1,    39,    26,    18,    -1,
      20,    -1,    45,    -1,    -1,    55,    26,    57,    28,    59,
      60,    54,    55,    -1,    57,    12,    59,    60,    -1,    16,
      49,    18,    -1,    20,    21,    -1,    55,    24,    57,    26,
      59,    28,    -1,    -1,    31,    55,    -1,    57,    35,    59,
      60,    -1,    39,    -1,    -1,    -1,    -1,    -1,    45,    -1,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    16,    55,    18,
      57,    20,    59,    60,    -1,    24,    -1,    26,    -1,    28,
      -1,    30,    31,    -1,    -1,    -1,    35,    -1,    -1,    -1,
      39,    -1,    -1,    12,    -1,    -1,    45,    16,    -1,    18,
      -1,    20,    -1,    -1,    -1,    24,    55,    26,    57,    28,
      59,    60,    31,    -1,    -1,    -1,    35,    36,    -1,    -1,
      39,    -1,    -1,    12,    -1,    -1,    45,    16,    -1,    18,
      -1,    20,    -1,    -1,    -1,    24,    55,    26,    57,    28,
      59,    60,    31,    -1,    -1,    -1,    35,    -1,    -1,    -1,
      39,    -1,    -1,    12,    18,    44,    45,    16,    -1,    18,
      -1,    20,    26,    -1,    -1,    24,    55,    26,    57,    28,
      59,    60,    31,    12,    -1,    14,    35,    -1,    17,    18,
      39,    20,    -1,    -1,    -1,    49,    45,    26,    -1,    28,
      -1,    55,    -1,    57,    -1,    59,    55,    12,    57,    14,
      59,    60,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    28,    -1,    -1,    55,    12,    57,    14,
      59,    60,    -1,    18,    -1,    20,    21,    -1,    -1,    -1,
      -1,    26,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    12,    57,    14,    59,    60,    -1,    18,    -1,    20,
      21,    -1,    -1,    -1,    -1,    26,    -1,    28,    -1,    -1,
      55,    12,    57,    14,    59,    60,    -1,    18,    -1,    20,
      21,    -1,    -1,    18,    -1,    26,    -1,    28,    -1,    -1,
      -1,    26,    -1,    -1,    55,    12,    57,    14,    59,    60,
      -1,    18,    -1,    20,    21,    -1,    -1,    18,    43,    26,
      -1,    28,    -1,    -1,    55,    26,    57,    14,    59,    60,
      55,    18,    57,    20,    59,    -1,    -1,    -1,    -1,    26,
      -1,    28,    43,    30,    -1,    14,    -1,    -1,    55,    18,
      57,    20,    59,    60,    55,    -1,    57,    26,    59,    28,
      -1,    30,    -1,    14,    -1,    -1,    18,    18,    55,    20,
      57,    -1,    59,    60,    26,    26,    -1,    28,    -1,    30,
      -1,    14,    -1,    -1,    18,    18,    55,    20,    57,    -1,
      59,    60,    26,    26,    -1,    28,    -1,    -1,    -1,    51,
      -1,    -1,    18,    55,    55,    57,    57,    59,    59,    60,
      26,    18,    18,    -1,    -1,    49,    -1,    -1,    -1,    26,
      26,    55,    55,    57,    57,    59,    59,    60,    -1,    -1,
      18,    -1,    -1,    49,    -1,    -1,    43,    43,    26,    55,
      -1,    57,    -1,    59,    -1,    -1,    18,    18,    55,    55,
      57,    57,    59,    59,    26,    26,    -1,    -1,    18,    -1,
      -1,    -1,    -1,    51,    -1,    18,    26,    55,    -1,    57,
      18,    59,    -1,    26,    -1,    -1,    -1,    49,    26,    -1,
      -1,    -1,    53,    55,    55,    57,    57,    59,    59,    49,
      18,    -1,    -1,    -1,    -1,    55,    49,    57,    26,    59,
      -1,    49,    55,    -1,    57,    18,    59,    55,    18,    57,
      -1,    59,    -1,    26,    -1,    43,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    57,
      -1,    59,    -1,    -1,    -1,    -1,    49,    -1,    -1,    49,
      -1,    -1,    55,    -1,    57,    55,    59,    57,    -1,    59
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,    57,    63,    68,    69,     4,     6,    64,
      65,    69,     0,     3,     4,    68,    64,     7,     8,    66,
      69,    10,    67,    69,     6,     4,    69,    64,     9,    18,
      70,    71,     7,     7,     8,    11,    12,    16,    18,    20,
      24,    26,    28,    31,    35,    39,    45,    55,    57,    59,
      60,    72,    76,     5,    10,     7,    66,    69,    64,     4,
      69,     9,    70,     9,    71,    69,    13,    14,    20,    28,
      60,    72,    74,    75,    78,    79,    12,    17,    75,    79,
      83,    19,    22,    99,    25,    76,    87,    22,    27,    98,
      22,    29,   100,    32,    33,    72,    73,    85,    36,    37,
      76,    96,    24,    40,    41,    73,    88,    46,    47,    49,
      73,    92,    61,    76,    77,    76,    11,    69,    11,    76,
       7,     7,    64,    69,    69,     9,    76,    15,    75,    79,
      80,    19,    22,    82,    22,    29,    81,    12,    61,    75,
      79,    84,    13,    14,    74,    13,    78,    76,    12,    17,
      17,    21,    76,    23,    76,    25,    23,    23,    76,    76,
      34,    76,    86,    32,    33,    72,    76,    38,    76,    97,
      36,    37,    87,    76,    42,    76,    89,    24,    40,    41,
      76,    48,    76,    91,    50,    51,    53,    73,    93,    46,
      47,    49,    76,    61,    69,    69,    11,    69,    75,    79,
      15,    15,    12,    21,    75,    79,    23,    23,    75,    79,
      78,    12,    61,    61,    76,    80,    76,    17,    78,    76,
      76,    76,    21,    19,    76,    98,    29,    30,    34,    85,
      76,    86,    38,    36,    76,    76,    97,    40,    43,    42,
      40,    87,    76,    89,    73,    48,    46,    49,    49,    73,
      52,    76,    94,    54,    76,    95,    50,    51,    53,    46,
      76,    91,    93,    76,    69,    75,    79,    78,    12,    21,
      21,    19,    29,    30,    30,    61,    78,    76,    17,    76,
      21,    76,    30,    76,    76,    85,    76,    36,    36,    76,
      76,    44,    76,    90,    43,    73,    76,    40,    40,    73,
      76,    93,    93,    49,    51,    73,    52,    50,    53,    73,
      54,    50,    49,    73,    94,    95,    76,    46,    49,    46,
      21,    78,    12,    21,    75,    79,    30,    75,    79,    61,
      76,    76,    21,    76,    30,    76,    76,    36,    43,    73,
      44,    41,    90,    43,    76,    76,    46,    93,    94,    51,
      51,    73,    49,    73,    95,    53,    53,    73,    49,    73,
      93,    49,    50,    50,    76,    93,    76,    21,    78,    12,
      21,    21,    30,    30,    76,    76,    76,    90,    43,    43,
      73,    89,    41,    90,    76,    94,    94,    51,    93,    49,
      95,    95,    53,    93,    49,    93,    49,    73,    49,    73,
      46,    21,    78,    90,    90,    43,    89,    94,    93,    95,
      93,    93,    49,    93,    49,    76,    21,    90,    93,    93
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    62,    63,    63,    63,    63,    63,    64,    64,    65,
      65,    65,    65,    65,    65,    66,    66,    66,    66,    66,
      66,    66,    66,    67,    67,    67,    67,    67,    67,    67,
      67,    68,    69,    69,    70,    71,    71,    72,    72,    72,
      72,    72,    73,    73,    74,    74,    74,    74,    75,    75,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    77,    77,    77,    77,    78,    78,    78,    78,
      78,    78,    79,    79,    80,    80,    80,    80,    80,    80,
      80,    81,    81,    81,    81,    81,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    84,    84,    84,    84,
      84,    85,    85,    85,    85,    85,    85,    86,    86,    87,
      87,    87,    87,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    89,    89,    89,    89,    89,
      90,    90,    90,    90,    90,    90,    90,    90,    91,    91,
      91,    91,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    94,    94,    94,    94,    94,    94,    94,    94,    95,
      95,    95,    95,    95,    95,    95,    95,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    97,
      97,    98,    98,    99,    99,    99,    99,    99,    99,    99,
      99,   100,   100,   100,   100,   100,   100
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     4,     3,     5,     3,     4,     3,
       2,     3,     4,     3,     4,     2,     3,     3,     4,     3,
       4,     4,     5,     3,     2,     4,     3,     4,     3,     5,
       4,     1,     2,     1,     1,     2,     1,     1,     1,     1,
       2,     1,     2,     1,     1,     2,     2,     2,     2,     1,
       2,     2,     2,     2,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     3,     1,     2,     3,     2,     1,     2,
       3,     2,     2,     3,     1,     2,     2,     2,     2,     3,
       3,     4,     5,     3,     5,     3,     5,     3,     6,     4,
       5,     3,     2,     4,     7,     5,     3,     2,     2,     1,
       2,     3,     4,     3,     5,     4,     2,     2,     1,     3,
       4,     3,     1,     4,     2,     2,     3,     2,     1,     1,
       2,     3,     2,     1,     2,     3,     4,     2,     3,     4,
       5,     3,     4,     4,     5,     4,     5,     6,     3,     5,
       2,     4,     1,     3,     3,     5,     2,     4,     2,     1,
       3,     2,     3,     4,     4,     5,     5,     3,     6,     4,
       1,     2,     4,     7,     5,     2,     3,     1,     2,     3,
       3,     2,     3,     4,     4,     3,     4,     5,     5,     6,
       6,     4,     4,     5,     5,     4,     5,     6,     6,     7,
       7,     1,     2,     2,     3,     3,     4,     4,     5,     1,
       2,     2,     3,     3,     4,     4,     5,     4,     3,     4,
       2,     1,     5,     4,     5,     3,     2,     6,     5,     2,
       1,     3,     1,     6,     4,     3,     5,     3,     2,     5,
       4,     4,     5,     3,     5,     6,     4
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
#line 64 "Parser.y" /* yacc.c:1646  */
    {
				treeNode *root = add_node("ROOT");
				treeNode *doc = add_node("DOCTYPE HTML");
				root->children.pb(doc);
				add_children(root,(yyvsp[0].object)->v);

				clearFile("htmlAst.txt");                        //   WRITING TO FILES
				write(root);
				lexNode *rootLex;
				rootLex=convert(root,0);
				clearFile("lexAst.txt");
				writeLex(rootLex);
				clearFile(outfile);
				writeTex(rootLex,outfile);	
			}
#line 1835 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 79 "Parser.y" /* yacc.c:1646  */
    {
				treeNode *root = add_node("ROOT");
				add_children(root,(yyvsp[0].object)->v);

				clearFile("htmlAst.txt");                        //   WRITING TO FILES
				write(root);
				lexNode *rootLex;
				rootLex=convert(root,0);
				clearFile("lexAst.txt");
				writeLex(rootLex);
				clearFile(outfile);
				writeTex(rootLex,outfile);	
			}
#line 1853 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 92 "Parser.y" /* yacc.c:1646  */
    {
				treeNode *root = add_node("ROOT");
				treeNode *doc = add_node("DOCTYPE HTML");
				add_children(root,(yyvsp[-3].object)->v);
				root->children.pb(doc);
				add_children(root,(yyvsp[0].object)->v);

				clearFile("htmlAst.txt");                        //   WRITING TO FILES
				write(root);
				lexNode *rootLex;
				rootLex=convert(root,0);
				clearFile("lexAst.txt");
				writeLex(rootLex);
				clearFile(outfile);
				writeTex(rootLex,outfile);	
			}
#line 1874 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 108 "Parser.y" /* yacc.c:1646  */
    {
				treeNode *root = add_node("ROOT");
				add_children(root,(yyvsp[-2].object)->v);
				add_children(root,(yyvsp[0].object)->v);

				clearFile("htmlAst.txt");                        //   WRITING TO FILES
				write(root);
				lexNode *rootLex;
				rootLex=convert(root,0);
				clearFile("lexAst.txt");
				writeLex(rootLex);
				clearFile(outfile);
				writeTex(rootLex,outfile);	
			}
#line 1893 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 122 "Parser.y" /* yacc.c:1646  */
    {
				treeNode *root = add_node("ROOT");
				treeNode *doc = add_node("DOCTYPE HTML");
				add_children(root,(yyvsp[-4].object)->v);
				root->children.pb(doc);
				add_children(root,(yyvsp[-2].object)->v);
				add_children(root,(yyvsp[0].object)->v);

				clearFile("htmlAst.txt");                        //   WRITING TO FILES
				write(root);
				lexNode *rootLex;
				rootLex=convert(root,0);
				clearFile("lexAst.txt");
				writeLex(rootLex);
				clearFile(outfile);
				writeTex(rootLex,outfile);	
			}
#line 1915 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 141 "Parser.y" /* yacc.c:1646  */
    {
				(yyval.object)=add_startChild((yyvsp[-2].object),(yyvsp[-1].object),(yyvsp[0].value));
	}
#line 1923 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 144 "Parser.y" /* yacc.c:1646  */
    {
				(yyval.object)=add_child_neighbour((yyvsp[-3].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
	}
#line 1931 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 149 "Parser.y" /* yacc.c:1646  */
    { 
				(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
			}
#line 1939 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 152 "Parser.y" /* yacc.c:1646  */
    { 
				(yyval.object)=add_start((yyvsp[0].value));
			}
#line 1947 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 155 "Parser.y" /* yacc.c:1646  */
    {
				(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
			}
#line 1955 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 159 "Parser.y" /* yacc.c:1646  */
    { 
				node *ptr=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
				node *n=new node;
				copy_list(n->v,(yyvsp[-3].object)->v);
				copy_list(n->v,ptr->v);
				(yyval.object)=n;
			}
#line 1967 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 166 "Parser.y" /* yacc.c:1646  */
    { 
				node *ptr=add_start((yyvsp[0].value));
				node *n=new node;
				copy_list(n->v,(yyvsp[-2].object)->v);
				copy_list(n->v,ptr->v);
				(yyval.object)=n;
			}
#line 1979 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 173 "Parser.y" /* yacc.c:1646  */
    {
				node *ptr=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
				node *n=new node;
				copy_list(n->v,(yyvsp[-3].object)->v);
				copy_list(n->v,ptr->v);
				(yyval.object)=n;
			}
#line 1991 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 182 "Parser.y" /* yacc.c:1646  */
    {
				(yyval.object)=add_start((yyvsp[0].value));
			}
#line 1999 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 185 "Parser.y" /* yacc.c:1646  */
    {
				(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
			}
#line 2007 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 189 "Parser.y" /* yacc.c:1646  */
    {
				node *ptr=add_start((yyvsp[0].value));
				node *n=new node;
				copy_list(n->v,(yyvsp[-2].object)->v);
				copy_list(n->v,ptr->v);
				(yyval.object)=n;
			}
#line 2019 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 196 "Parser.y" /* yacc.c:1646  */
    {
				node *ptr=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
				node *n=new node;
				copy_list(n->v,(yyvsp[-3].object)->v);
				copy_list(n->v,ptr->v);
				(yyval.object)=n;
			}
#line 2031 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 203 "Parser.y" /* yacc.c:1646  */
    {
				(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
			}
#line 2039 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 206 "Parser.y" /* yacc.c:1646  */
    {
				(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
			}
#line 2047 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 209 "Parser.y" /* yacc.c:1646  */
    {
				node *ptr=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
				node *n=new node;
				copy_list(n->v,(yyvsp[-3].object)->v);
				copy_list(n->v,ptr->v);
				(yyval.object)=n;
			}
#line 2059 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 216 "Parser.y" /* yacc.c:1646  */
    {
				node *ptr=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
				node *n=new node;
				copy_list(n->v,(yyvsp[-4].object)->v);
				copy_list(n->v,ptr->v);
				(yyval.object)=n;
			}
#line 2071 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 225 "Parser.y" /* yacc.c:1646  */
    {
				(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
			}
#line 2079 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 228 "Parser.y" /* yacc.c:1646  */
    {
				(yyval.object)=add_start((yyvsp[0].value));
			}
#line 2087 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 232 "Parser.y" /* yacc.c:1646  */
    { 
				node *n=new node;
				copy_list(n->v,(yyvsp[-3].object)->v);
				node *ptr=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
				copy_list(n->v,ptr->v);
				(yyval.object)=n;
			}
#line 2099 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 239 "Parser.y" /* yacc.c:1646  */
    {
				node *n=new node;
				copy_list(n->v,(yyvsp[-2].object)->v);
				copy_list(n->v,add_start((yyvsp[0].value))->v);
				(yyval.object)=n;
			}
#line 2110 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 245 "Parser.y" /* yacc.c:1646  */
    {
				(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
			}
#line 2118 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 248 "Parser.y" /* yacc.c:1646  */
    {
				(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
			}
#line 2126 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 251 "Parser.y" /* yacc.c:1646  */
    {
				node *ptr=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
				node *n=new node;
				copy_list(n->v,(yyvsp[-4].object)->v);
				copy_list(n->v,ptr->v);
				(yyval.object)=n;
			}
#line 2138 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 258 "Parser.y" /* yacc.c:1646  */
    {
				node *ptr=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
				node *n=new node;
				copy_list(n->v,(yyvsp[-3].object)->v);
				copy_list(n->v,ptr->v);
				(yyval.object)=n;	
			}
#line 2150 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 267 "Parser.y" /* yacc.c:1646  */
    {
		vn v;
		v.push_back(add_node("COMMENT",(yyvsp[0].value)));
		node* n = new node;
		copy_list(n->v,v);
		(yyval.object)=n;
	}
#line 2162 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 276 "Parser.y" /* yacc.c:1646  */
    {
		vn v1,v2;
		v1 = (yyvsp[-1].object)->v;
		v2 = (yyvsp[0].object)->v;
		node* n = new node;
		copy_list(n->v,v1);	
		copy_list(n->v,v2);
		(yyval.object)=n;
	}
#line 2176 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 285 "Parser.y" /* yacc.c:1646  */
    { (yyval.object)=(yyvsp[0].object); }
#line 2182 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 288 "Parser.y" /* yacc.c:1646  */
    {
		vn v;
		v.push_back(add_node("TEXT",(yyvsp[0].value)));
		node* n = new node;
		copy_list(n->v,v);
		(yyval.object)=n;
	}
#line 2194 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 297 "Parser.y" /* yacc.c:1646  */
    {
		vn v1,v2;
		v1 = (yyvsp[-1].object)->v;
		v2 = (yyvsp[0].object)->v;
		if(v1[0]->tagVal=="TEXT" && v2[0]->tagVal=="TEXT" ){
			v1[0]->content=v1[0]->content+v2[0]->content;
		}
		node* n = new node;
		copy_list(n->v,v1);
		(yyval.object)=n;
	}
#line 2210 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 308 "Parser.y" /* yacc.c:1646  */
    { (yyval.object)=(yyvsp[0].object); }
#line 2216 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 311 "Parser.y" /* yacc.c:1646  */
    { vn v;
				v.push_back(add_node("COMMENT",(yyvsp[0].value)));
				node* n = new node;
				copy_list(n->v,v);
				(yyval.object)=n;
			}
#line 2227 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 317 "Parser.y" /* yacc.c:1646  */
    {  	vn v;
				v.push_back(add_node("BR"));
				node* n = new node;
				copy_list(n->v,v);
				(yyval.object)=n;
			}
#line 2238 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 323 "Parser.y" /* yacc.c:1646  */
    { 	vn v;
				v.push_back(add_node("TEXT",(yyvsp[0].value)));
				node* n = new node;
				copy_list(n->v,v);
				(yyval.object)=n;
			}
#line 2249 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 329 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 2257 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 332 "Parser.y" /* yacc.c:1646  */
    { 
				vn v;
				v.push_back(add_node("SYMBOL",(yyvsp[0].value)));
				node* n = new node;
				copy_list(n->v,v);
				(yyval.object)=n;
			}
#line 2269 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 341 "Parser.y" /* yacc.c:1646  */
    {
			vn v1,v2;
			v1 = (yyvsp[-1].object)->v;
			v2 = (yyvsp[0].object)->v;
			int s=v1.size();
			if(v1[s-1]->tagVal=="TEXT" && v2[0]->tagVal=="TEXT" ){
				v1[s-1]->content=v1[s-1]->content+v2[0]->content;
			}
			node* n = new node;
			copy_list(n->v,v1);	
			if(v2[0]->tagVal!=v1[s-1]->tagVal && (v1[s-1]->tagVal!="TEXT" || v2[0]->tagVal!="TEXT" )) {
				copy_list(n->v,v2);
			}
			else if(v2.size()>1 && v2[1]->tagVal!="TEXT"){
				copy(v2.begin()+1,v2.end(),back_inserter(n->v));
			}
			(yyval.object)=n;
		}
#line 2292 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 359 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 2300 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 364 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 2308 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 367 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 2316 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 370 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 2324 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 373 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 2332 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 378 "Parser.y" /* yacc.c:1646  */
    {
			vn v1,v2;
			v1 = (yyvsp[-1].object)->v;
			v2 = (yyvsp[0].object)->v;
			int s=v1.size();
			if(v1[s-1]->tagVal=="TEXT" && v2[0]->tagVal=="TEXT" ){
				v1[s-1]->content=v1[s-1]->content+v2[0]->content;
			}
			node* n = new node;
			copy_list(n->v,v1);	
			if(v2[0]->tagVal!=v1[s-1]->tagVal && (v1[s-1]->tagVal!="TEXT" || v2[0]->tagVal!="TEXT" )) {
				copy_list(n->v,v2);
			}
			else if(v2.size()>1 && v2[1]->tagVal!="TEXT"){
				copy(v2.begin()+1,v2.end(),back_inserter(n->v));
			}
			(yyval.object)=n;
		}
#line 2355 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 396 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 2363 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 401 "Parser.y" /* yacc.c:1646  */
    { (yyval.object)=(yyvsp[0].object); }
#line 2369 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 402 "Parser.y" /* yacc.c:1646  */
    {  (yyval.object)=(yyvsp[0].object); }
#line 2375 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 403 "Parser.y" /* yacc.c:1646  */
    {  (yyval.object)=(yyvsp[0].object); }
#line 2381 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 404 "Parser.y" /* yacc.c:1646  */
    {
			vn v1,v2;
			v1 = (yyvsp[-1].object)->v;
			v2 = (yyvsp[0].object)->v;
			int s=v1.size();
			if(v1[s-1]->tagVal=="TEXT" && v2[0]->tagVal=="TEXT" ){
				v1[s-1]->content=v1[s-1]->content+v2[0]->content;
			}
			node* n = new node;
			copy_list(n->v,v1);	
			if(v2[0]->tagVal!="TEXT") {
				copy_list(n->v,v2);
			}
			else if(v2.size()>1 && v2[1]->tagVal!="TEXT"){
				copy(v2.begin()+1,v2.end(),back_inserter(n->v));
			}
			(yyval.object)=n;
		}
#line 2404 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 422 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 2412 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 425 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=(yyvsp[0].object);
		}
#line 2420 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 428 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 2428 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 431 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 2436 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 434 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 2444 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 437 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=(yyvsp[0].object);
		}
#line 2452 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 440 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=(yyvsp[0].object);
		}
#line 2460 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 443 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=(yyvsp[0].object);
		}
#line 2468 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 448 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2476 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 451 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2484 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 454 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 2492 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 457 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2500 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 462 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2508 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 465 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2516 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 468 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_start((yyvsp[0].value));	
		}
#line 2524 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 471 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2532 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 474 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2540 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 477 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2548 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 482 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=(yyvsp[0].object);
		}
#line 2556 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 485 "Parser.y" /* yacc.c:1646  */
    {
			node* n=new node;
			copy_list(n->v,(yyvsp[-2].object)->v);
			copy_list(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;
		}
#line 2567 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 493 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 2575 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 496 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2583 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 499 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2591 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 502 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2599 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 505 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2607 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 508 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2615 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 511 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2623 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 516 "Parser.y" /* yacc.c:1646  */
    { 
			node *n=add_start((yyvsp[0].value));
			add_attributes(n->v[0],(yyvsp[-3].value),(yyvsp[-2].value));
			(yyval.object)=n;
		}
#line 2633 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 521 "Parser.y" /* yacc.c:1646  */
    { 
			node *n=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
			add_attributes(n->v[0],(yyvsp[-4].value),(yyvsp[-3].value));
			(yyval.object)=n;
		}
#line 2643 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 526 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2651 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 529 "Parser.y" /* yacc.c:1646  */
    { 
			node *n=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
			add_attributes(n->v[0],(yyvsp[-4].value),(yyvsp[-3].value));
			(yyval.object)=n;
		}
#line 2661 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 534 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2669 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 539 "Parser.y" /* yacc.c:1646  */
    { 
			node  *n=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
			add_attributes(n->v[0],(yyvsp[-4].value),(yyvsp[-3].value));
			(yyval.object)=n;
		}
#line 2679 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 544 "Parser.y" /* yacc.c:1646  */
    { 
    		(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
    	}
#line 2687 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 547 "Parser.y" /* yacc.c:1646  */
    { 
    		node *n=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
    		add_attributes(n->v[0],(yyvsp[-5].value),(yyvsp[-4].value));
    		(yyval.object)=n;
		}
#line 2697 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 552 "Parser.y" /* yacc.c:1646  */
    { 
    		(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
    	}
#line 2705 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 555 "Parser.y" /* yacc.c:1646  */
    { 
    		node *n=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
    		add_attributes(n->v[0],(yyvsp[-4].value),(yyvsp[-3].value));
    		(yyval.object)=n;
    	}
#line 2715 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 560 "Parser.y" /* yacc.c:1646  */
    { 
    		(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
    	}
#line 2723 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 563 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_start((yyvsp[0].value));
    	}
#line 2731 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 566 "Parser.y" /* yacc.c:1646  */
    { 	
			node *n=add_start((yyvsp[0].value));
			add_attributes(n->v[0],(yyvsp[-3].value),(yyvsp[-2].value));
			(yyval.object)=n;
		}
#line 2741 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 571 "Parser.y" /* yacc.c:1646  */
    { 
    		node *n=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
    		add_attributes(n->v[0],(yyvsp[-6].value),(yyvsp[-5].value));
    		(yyval.object)=n;
		}
#line 2751 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 576 "Parser.y" /* yacc.c:1646  */
    { 
    		(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
    	}
#line 2759 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 581 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2767 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 584 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2775 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 587 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2783 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 590 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 2791 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 593 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2799 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 596 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2807 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 599 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2815 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 602 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2823 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 605 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_child_neighbour((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2831 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 608 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2839 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 613 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2847 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 616 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2855 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 619 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 2863 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 622 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2871 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 625 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2879 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 630 "Parser.y" /* yacc.c:1646  */
    {
			(yyvsp[0].object)->v[0]->children.insert((yyvsp[0].object)->v[0]->children.begin(),(yyvsp[-1].object)->v.begin(),(yyvsp[-1].object)->v.end());
			(yyval.object)=(yyvsp[0].object);
		}
#line 2888 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 634 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 2896 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 637 "Parser.y" /* yacc.c:1646  */
    {
			(yyvsp[0].object)->v[0]->children.insert((yyvsp[0].object)->v[0]->children.begin(),(yyvsp[-1].object)->v.begin(),(yyvsp[-1].object)->v.end());
			(yyvsp[0].object)->v[0]->children.insert((yyvsp[0].object)->v[0]->children.begin(),(yyvsp[-3].object)->v.begin(),(yyvsp[-3].object)->v.end());
			(yyval.object)=(yyvsp[0].object);
		}
#line 2906 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 642 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2914 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 645 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2922 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 648 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2930 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 653 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2938 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 656 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 2946 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 661 "Parser.y" /* yacc.c:1646  */
    {
		(yyval.object)=add_start((yyvsp[0].value));
		}
#line 2954 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 664 "Parser.y" /* yacc.c:1646  */
    {
		(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2962 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 667 "Parser.y" /* yacc.c:1646  */
    {
		(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2970 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 670 "Parser.y" /* yacc.c:1646  */
    {
		(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2978 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 675 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 2986 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 678 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2994 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 681 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3002 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 684 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3010 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 687 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3018 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 690 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3026 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 693 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 3034 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 696 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 3042 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 699 "Parser.y" /* yacc.c:1646  */
    { 
    		(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
    	}
#line 3050 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 702 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 3058 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 705 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
    	}
#line 3066 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 708 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 3074 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 713 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-3].object),(yyvsp[-2].value),(yyvsp[0].object));
		}
#line 3082 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 716 "Parser.y" /* yacc.c:1646  */
    {
			node *n=add_child_neighbour((yyvsp[-4].object),(yyvsp[-3].value),(yyvsp[-2].object));
			copy_list(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;
		}
#line 3092 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 721 "Parser.y" /* yacc.c:1646  */
    {
			node *n=add_child_neighbour((yyvsp[-5].object),(yyvsp[-4].value),(yyvsp[-2].object));
			copy_list(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;
		}
#line 3102 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 726 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-2].value),(yyvsp[0].object));
		}
#line 3110 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 729 "Parser.y" /* yacc.c:1646  */
    {
    		node *n=add_neighbour((yyvsp[-4].value),(yyvsp[-2].object));
    		copy_list(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;	
    	}
#line 3120 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 736 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3128 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 739 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-3].object),(yyvsp[-2].value),(yyvsp[0].object));	
		}
#line 3136 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 742 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 3144 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 745 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-2].value),(yyvsp[0].object));
		}
#line 3152 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 748 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3160 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 751 "Parser.y" /* yacc.c:1646  */
    {
			node* n=add_child_neighbour((yyvsp[-4].object),(yyvsp[-3].value),(yyvsp[-2].object));
			copy_list(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;
		}
#line 3170 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 756 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3178 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 759 "Parser.y" /* yacc.c:1646  */
    {
			node *n=add_neighbour((yyvsp[-3].value),(yyvsp[-2].object));
			copy_list(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;
		}
#line 3188 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 766 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3196 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 769 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 3204 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 772 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3212 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 775 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3220 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 780 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3228 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 783 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3236 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 786 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3244 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 789 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3252 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 792 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3260 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 795 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3268 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 798 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 3276 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 801 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 3284 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 804 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 3292 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 807 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3300 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 810 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3308 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 813 "Parser.y" /* yacc.c:1646  */
    {
    		node* n=add_child_neighbour((yyvsp[-6].object),(yyvsp[-4].object),(yyvsp[-1].value),(yyvsp[0].object));
    		add_children(n->v[0],(yyvsp[-2].object)->v);
    		(yyval.object)=n;
    	}
#line 3318 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 818 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 3326 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 821 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3334 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 824 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3342 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 829 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 3350 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 832 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3358 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 835 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3366 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 838 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3374 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 841 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3382 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 844 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3390 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 847 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3398 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 850 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3406 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 853 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_neighbour((yyvsp[-2].value),(yyvsp[0].object));
		}
#line 3414 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 856 "Parser.y" /* yacc.c:1646  */
    {
			node* n=add_neighbour((yyvsp[-3].value),(yyvsp[-2].object));
			copy_list(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;
		}
#line 3424 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 861 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-3].object),(yyvsp[-2].value),(yyvsp[0].object));
    	}
#line 3432 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 864 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-3].object),(yyvsp[-2].value),(yyvsp[0].object));
    	}
#line 3440 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 867 "Parser.y" /* yacc.c:1646  */
    {
    		node* n=add_child_neighbour((yyvsp[-4].object),(yyvsp[-3].value),(yyvsp[-2].object));
			copy_list(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;	
    	}
#line 3450 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 872 "Parser.y" /* yacc.c:1646  */
    {
    		node* n=add_child_neighbour((yyvsp[-4].object),(yyvsp[-3].value),(yyvsp[-2].object));
			copy_list(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;	
    	}
#line 3460 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 877 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3468 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 880 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3476 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 883 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3484 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 886 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3492 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 889 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_child_neighbour((yyvsp[-3].object),(yyvsp[-2].value),(yyvsp[0].object));
		}
#line 3500 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 892 "Parser.y" /* yacc.c:1646  */
    {
			node* n=add_child_neighbour((yyvsp[-4].object),(yyvsp[-3].value),(yyvsp[-2].object));
			copy_list(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;
		}
#line 3510 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 897 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-5].object),(yyvsp[-3].object),(yyvsp[-2].value),(yyvsp[0].object));
    	}
#line 3518 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 900 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-5].object),(yyvsp[-3].object),(yyvsp[-2].value),(yyvsp[0].object));
    	}
#line 3526 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 903 "Parser.y" /* yacc.c:1646  */
    {
    		node* n=add_child_neighbour((yyvsp[-6].object),(yyvsp[-4].object),(yyvsp[-3].value),(yyvsp[-2].object));
			copy_list(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;	
    	}
#line 3536 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 908 "Parser.y" /* yacc.c:1646  */
    {
    		node* n=add_child_neighbour((yyvsp[-6].object),(yyvsp[-4].object),(yyvsp[-3].value),(yyvsp[-2].object));
			copy_list(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;	
    	}
#line 3546 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 916 "Parser.y" /* yacc.c:1646  */
    {	(yyval.object)=add_start((yyvsp[0].value));
		}
#line 3553 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 918 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3561 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 921 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3569 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 924 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3577 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 927 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-2].value),(yyvsp[0].object));
		}
#line 3585 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 930 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-3].object),(yyvsp[-2].value),(yyvsp[0].object));
		}
#line 3593 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 933 "Parser.y" /* yacc.c:1646  */
    {
			node* n=add_neighbour((yyvsp[-3].value),(yyvsp[-2].object));
		  	copy_list(n->v,(yyvsp[0].object)->v);
    		(yyval.object)=n;			
		}
#line 3603 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 938 "Parser.y" /* yacc.c:1646  */
    { 
			node* n=add_child_neighbour((yyvsp[-4].object),(yyvsp[-3].value),(yyvsp[-2].object));
		  	copy_list(n->v,(yyvsp[0].object)->v);
    		(yyval.object)=n;
		}
#line 3613 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 945 "Parser.y" /* yacc.c:1646  */
    {	
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 3621 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 948 "Parser.y" /* yacc.c:1646  */
    {
	    	(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
    	}
#line 3629 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 951 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 3637 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 954 "Parser.y" /* yacc.c:1646  */
    {
	 	   	(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 3645 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 957 "Parser.y" /* yacc.c:1646  */
    {
	    	(yyval.object)=add_neighbour((yyvsp[-2].value),(yyvsp[0].object));
    	}
#line 3653 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 960 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-3].object),(yyvsp[-2].value),(yyvsp[0].object));
    	}
#line 3661 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 963 "Parser.y" /* yacc.c:1646  */
    {
	    	node *n=add_neighbour((yyvsp[-3].value),(yyvsp[-2].object));
  		  	copy_list(n->v,(yyvsp[0].object)->v);
    		(yyval.object)=n;
    	}
#line 3671 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 968 "Parser.y" /* yacc.c:1646  */
    {
 	 	  	node* n=add_child_neighbour((yyvsp[-4].object),(yyvsp[-3].value),(yyvsp[-2].object));
    		copy_list(n->v,(yyvsp[0].object)->v);
    		(yyval.object)=n;
    	}
#line 3681 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 975 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3689 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 978 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3697 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 981 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-2].object),(yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3705 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 984 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3713 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 987 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 3721 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 990 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3729 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 993 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 3737 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 996 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-3].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3745 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 999 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 3753 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1002 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3761 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1005 "Parser.y" /* yacc.c:1646  */
    {
			node* n=add_child_neighbour((yyvsp[-5].object),(yyvsp[-3].object),(yyvsp[-1].value),(yyvsp[0].object));
    		add_children(n->v[0],(yyvsp[-2].object)->v);
    		(yyval.object)=n;
		}
#line 3771 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1010 "Parser.y" /* yacc.c:1646  */
    {
			node* n=add_startChild((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[0].value));
    		add_children(n->v[0],(yyvsp[-1].object)->v);
    		(yyval.object)=n;	
		}
#line 3781 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1017 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3789 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1020 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 3797 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1025 "Parser.y" /* yacc.c:1646  */
    { 
			treeNode *ptr=(yyvsp[0].object)->v[0];
			add_attributes(ptr,(yyvsp[-2].value),(yyvsp[-1].value));
			(yyval.object)=(yyvsp[0].object);
		}
#line 3807 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1030 "Parser.y" /* yacc.c:1646  */
    { 	node *n = new node;
				vn v;
				treeNode *ptr=add_node("IMG");
				v.pb(ptr);
				copy_list(n->v,v);
				(yyval.object)=n;
		}
#line 3819 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1039 "Parser.y" /* yacc.c:1646  */
    {
			node  *n=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
			add_attributes(n->v[0],(yyvsp[-5].value),(yyvsp[-4].value));
			(yyval.object)=n;
		}
#line 3829 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1044 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3837 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1047 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3845 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1050 "Parser.y" /* yacc.c:1646  */
    {
			node *n=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
			add_attributes(n->v[0],(yyvsp[-4].value),(yyvsp[-3].value));
			(yyval.object)=n;
		}
#line 3855 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1055 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value)); 
   		}
#line 3863 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1058 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_start((yyvsp[0].value));
   		}
#line 3871 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1061 "Parser.y" /* yacc.c:1646  */
    {
			node *n=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
			add_attributes(n->v[0],(yyvsp[-4].value),(yyvsp[-3].value));
			(yyval.object)=n;
		}
#line 3881 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1066 "Parser.y" /* yacc.c:1646  */
    {
			node *n=add_start((yyvsp[0].value));
			add_attributes(n->v[0],(yyvsp[-3].value),(yyvsp[-2].value));
			(yyval.object)=n;
		}
#line 3891 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1073 "Parser.y" /* yacc.c:1646  */
    {
			node *n=add_start((yyvsp[0].value));
			add_attributes(n->v[0],(yyvsp[-3].value),(yyvsp[-2].value));
			(yyval.object)=n;
		}
#line 3901 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1078 "Parser.y" /* yacc.c:1646  */
    {
			node *n=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
			add_attributes(n->v[0],(yyvsp[-4].value),(yyvsp[-3].value));
			(yyval.object)=n;
		}
#line 3911 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 1083 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3919 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 1086 "Parser.y" /* yacc.c:1646  */
    {
			node *n=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
			add_attributes(n->v[0],(yyvsp[-4].value),(yyvsp[-3].value));
			(yyval.object)=n;
		}
#line 3929 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 1091 "Parser.y" /* yacc.c:1646  */
    {
			node *n=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
			add_attributes(n->v[0],(yyvsp[-5].value),(yyvsp[-4].value));
			(yyval.object)=n;
		}
#line 3939 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 1096 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3947 "Parser.tab.c" /* yacc.c:1646  */
    break;


#line 3951 "Parser.tab.c" /* yacc.c:1646  */
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
#line 1101 "Parser.y" /* yacc.c:1906  */

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
	define_mapping();
	outfile="output.tex";
	yyparse();
	return 0;
}  
char* concat(char *s1,char *s2){
	char *p = (char *)malloc(1+strlen(s1)+strlen(s2));
	strcat(p,s1);
	strcat(p,s2);
	return p;	
}
