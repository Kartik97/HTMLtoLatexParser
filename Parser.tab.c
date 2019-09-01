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
    COMMENT = 311,
    SPCHAR = 312,
    SYMBOL = 313,
    CENTEROP = 314,
    CENTERCL = 315,
    TABOPOP = 316
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
#define YYLAST   1650

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  238
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  426

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
       0,    43,    43,    58,    71,    87,   101,   120,   123,   128,
     131,   134,   137,   144,   151,   160,   163,   166,   173,   180,
     183,   186,   193,   202,   205,   208,   215,   221,   224,   227,
     234,   243,   252,   261,   266,   275,   286,   291,   298,   305,
     312,   315,   324,   342,   347,   350,   353,   356,   361,   379,
     384,   387,   390,   393,   411,   414,   417,   420,   423,   428,
     431,   434,   437,   442,   445,   448,   451,   456,   459,   462,
     465,   468,   471,   476,   479,   487,   490,   493,   496,   499,
     502,   505,   510,   515,   520,   523,   528,   533,   538,   541,
     546,   549,   554,   557,   560,   565,   570,   575,   578,   581,
     584,   587,   590,   593,   596,   599,   602,   607,   610,   613,
     616,   619,   624,   628,   631,   636,   639,   642,   647,   650,
     655,   658,   661,   664,   669,   672,   675,   678,   681,   684,
     687,   690,   693,   696,   699,   702,   707,   710,   715,   720,
     723,   730,   733,   736,   739,   742,   745,   750,   753,   760,
     763,   766,   769,   774,   777,   780,   783,   786,   789,   792,
     795,   798,   801,   804,   807,   812,   815,   818,   823,   826,
     829,   832,   835,   838,   841,   844,   847,   850,   855,   858,
     861,   866,   871,   874,   877,   880,   883,   886,   891,   894,
     897,   902,   910,   913,   916,   919,   922,   925,   928,   933,
     940,   943,   946,   949,   952,   955,   958,   963,   970,   973,
     976,   979,   982,   985,   988,   991,   994,   997,  1000,  1005,
    1012,  1015,  1020,  1025,  1035,  1040,  1043,  1046,  1051,  1054,
    1057,  1062,  1069,  1074,  1079,  1082,  1085,  1090,  1095
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
  "CENTEROP", "CENTERCL", "TABOPOP", "$accept", "st", "html", "head",
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

#define YYPACT_NINF -294

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-294)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      10,     4,    -2,  -294,    18,  -294,    24,    -2,    35,  -294,
      31,    -1,  -294,     6,    -2,  -294,  -294,  -294,     3,    29,
      41,   685,   101,    86,    51,    -2,    11,  -294,    58,  -294,
    -294,     8,  -294,  -294,    85,    58,   893,  1206,  -294,    16,
     770,    78,     2,   202,   748,   380,     0,  -294,  -294,  -294,
     431,  1186,   111,    58,   703,  -294,   122,    61,  -294,    -2,
      58,    58,  -294,    58,    90,    58,  1186,   354,    82,    73,
     154,  -294,  -294,  1334,  -294,   117,   893,  1186,  1240,   115,
    -294,   796,   113,  -294,  1186,   112,  -294,   116,  -294,  -294,
     120,   818,  -294,  1186,   844,  -294,   255,  -294,  1186,   870,
      83,  -294,   770,  1186,   915,   480,  -294,   121,  1465,  1186,
      89,  -294,  -294,    58,    58,    58,   127,  -294,  -294,  -294,
      58,    58,    58,  -294,  1446,  1380,   136,  -294,  1255,   130,
    -294,   138,  1446,  -294,   893,  -294,   615,    97,  -294,  1186,
     354,  -294,  1186,   145,  -294,   893,  1186,  1186,  1186,   144,
     148,  -294,  1186,    78,   141,  -294,   146,  -294,  -294,   137,
     202,  1186,   844,  -294,  -294,  -294,   143,   960,  1186,   870,
     155,  -294,   140,   157,   156,   770,  1186,   915,   124,  1186,
     982,   699,  1469,  -294,  -294,  1186,    58,    58,    58,    58,
    1451,  -294,  1446,  -294,   893,  -294,  1266,   165,   183,   176,
    1385,   185,   158,   893,  -294,  -294,  -294,  -294,  -294,  1186,
     189,  -294,  -294,  -294,  1186,  1008,  -294,  -294,  1030,  1186,
    -294,  -294,  -294,   202,  -294,  1186,   187,  -294,  1056,  1186,
    1078,   134,  1186,   190,  -294,   191,  1465,  -294,   161,   179,
      64,   277,  1123,  1141,  1134,   192,  1186,   982,   699,  -294,
      58,  1451,  -294,   208,   893,  -294,  -294,  1314,  1396,  -294,
    -294,  -294,   173,  -294,  1186,  -294,  1186,   218,  1186,   212,
    -294,  -294,  -294,  1186,  1186,   214,  -294,   498,   211,   215,
    1078,   533,  -294,  1186,  1186,  -294,   161,   161,  1186,   699,
     699,   549,   681,   207,   216,   605,   217,   220,   906,  1123,
    1141,  1186,  -294,    66,   222,  -294,   240,   893,  -294,  1325,
     251,  -294,  1403,   244,  -294,  -294,  -294,  1186,  -294,  1186,
    -294,  -294,  1186,  1078,  1193,  1245,   915,   234,  1078,  -294,
    -294,   161,  -294,   231,  -294,   699,  1123,  1052,  1430,  1301,
    1141,  1482,  1504,  1515,   699,  1525,   233,   236,  -294,  1186,
     699,  1186,  -294,   268,   893,  -294,  -294,  -294,  -294,  -294,
    -294,  -294,  -294,  1078,  1078,  1510,  -294,   915,  -294,  1186,
    -294,  -294,  1123,  1123,  1521,   699,  1537,  -294,  1141,  1141,
    1532,   699,  1549,  -294,   699,  1571,  1576,  -294,   245,  -294,
    -294,   272,  -294,  -294,  1078,  -294,  -294,  -294,  -294,  1123,
    -294,   699,  -294,  -294,  1141,  -294,   699,  -294,   699,  1588,
     699,  1592,  1186,  -294,  -294,  -294,  -294,  -294,  -294,  -294,
     699,  -294,   699,  -294,  -294,  -294
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
      19,    16,    35,    17,     0,    28,    69,     0,     0,     0,
       0,    44,    49,     0,    50,     0,     0,   100,     0,     0,
      51,     0,     0,    60,   120,     0,    55,     0,   223,    40,
       0,     0,    61,   113,     0,    43,     0,    52,   212,     0,
       0,    59,     0,   124,     0,     0,    56,     0,     0,    65,
       0,    62,    53,    23,     8,    26,     0,    12,    14,     6,
      20,    21,    18,    68,    75,     0,     0,    73,     0,     0,
      45,     0,     0,    46,     0,   109,     0,     0,    47,    72,
       0,    48,    70,     0,    99,     0,   101,    98,   229,     0,
       0,   121,   123,     0,     0,   235,     0,   116,   119,     0,
       0,   115,     0,    42,   217,   221,     0,     0,   211,     0,
       0,   128,     0,     0,     0,     0,   125,     0,     0,   161,
       0,     0,     0,    57,    66,    63,    27,    30,    25,    22,
      78,    77,    79,    76,     0,    93,     0,     0,     0,     0,
       0,     0,     0,     0,   108,   107,    71,    74,    67,   104,
       0,   102,    97,   226,   228,     0,   122,   222,     0,   234,
     118,   112,   117,     0,   220,   209,     0,   216,     0,   126,
       0,     0,   132,     0,   129,     0,     0,   162,   150,     0,
       0,   168,     0,     0,     0,     0,   166,     0,     0,    64,
      29,    81,    80,     0,     0,    92,    88,     0,     0,    86,
      84,   110,     0,   103,   106,   225,   231,     0,   232,     0,
     238,   114,   214,   210,   208,     0,   130,   143,     0,   139,
       0,     0,   133,   127,   134,    58,   152,   149,   153,     0,
       0,   172,   192,     0,     0,   200,     0,     0,   169,     0,
       0,   158,   167,     0,     0,    90,     0,     0,    94,     0,
       0,    82,     0,     0,   111,   105,   230,   227,   236,   233,
     215,   213,   219,     0,   147,   141,     0,   136,     0,   131,
     135,   151,   154,     0,   176,     0,     0,   194,   193,   170,
       0,   202,   201,   171,     0,   173,     0,     0,   160,   155,
       0,   163,    96,     0,     0,    91,    87,    85,    83,   224,
     237,   218,   144,     0,     0,   145,   140,     0,   137,   157,
     177,   196,     0,     0,   195,     0,   174,   204,     0,     0,
     203,     0,   175,   186,     0,   182,   183,   156,     0,   165,
      89,     0,   148,   142,     0,   138,   159,   198,   197,     0,
     178,     0,   206,   205,     0,   179,     0,   187,     0,   184,
       0,   185,     0,    95,   146,   199,   180,   207,   181,   188,
       0,   189,     0,   164,   190,   191
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -294,  -294,    25,  -294,   273,  -294,    14,   241,   -20,   258,
     271,   201,   -27,   108,   -21,  -294,   -70,   253,   159,  -294,
    -294,  -294,  -294,  -158,   150,   -99,  -294,  -176,  -271,    59,
      81,   284,  -283,  -293,  -294,   149,   168,  -294,  -294
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     9,    10,    19,    22,     5,    11,    30,    31,
      51,   244,    72,    73,   278,   111,    74,    75,   127,   133,
     130,    80,   138,    97,   160,    86,   106,   174,   279,   240,
     183,   245,   294,   297,   101,   167,    89,    83,    92
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      52,   235,   221,   170,     8,    24,   143,   347,     7,   327,
      25,    62,    28,     1,     2,    59,   346,    61,    12,    85,
      15,    29,   107,   100,    90,    15,    29,    13,    14,   110,
     112,    91,    16,   116,    15,    81,    32,    15,    82,    27,
      15,    21,    17,    18,    62,   123,   141,   377,    33,    34,
      58,   141,   362,   371,     3,     3,   144,   368,    55,    18,
     149,   108,     3,   151,   202,   271,     3,     3,   118,    34,
     156,    15,   157,   159,    15,   210,   233,   164,   166,    15,
       3,    85,   171,   173,   119,   402,   403,     3,   184,   397,
     398,     3,   392,   393,    63,   131,    54,     3,   141,   122,
      87,   128,   132,    29,   129,    88,    53,     3,    29,   141,
     288,   417,   349,   289,     3,   350,   415,     3,   206,   168,
     169,   208,   113,   414,   253,   211,   212,   213,    15,   117,
     142,   216,   147,   262,    15,    15,   150,   152,   188,   153,
     222,   159,     3,   154,   178,    78,   226,   227,   166,   185,
     366,   193,    38,   198,    85,   234,   173,   205,   237,   239,
      41,   199,   209,   141,   249,   214,   134,   215,    67,   141,
     218,   220,    38,   141,    68,   125,   219,   280,   136,    38,
      41,   224,    69,   230,   306,   236,   256,    41,   263,    47,
      48,   395,    49,   265,   267,   229,   232,   269,   270,   231,
      15,    15,   257,    15,   272,   258,   264,   275,   276,    47,
      48,   282,    49,    70,   135,   260,    47,    48,   261,    49,
      38,   293,   296,   273,   141,   302,   239,   287,    41,   305,
     283,   284,   190,   314,    93,    94,   196,   353,   301,   317,
     200,     6,   319,   315,    96,   316,   105,   318,   125,    20,
     322,    23,   320,   321,    26,   325,   326,    47,    48,   338,
      49,   352,   329,   330,    15,    57,   339,   332,   351,    60,
     343,   342,   356,    38,   358,   367,    65,   369,   293,   296,
     348,    41,   141,   385,   391,   141,   386,   161,   162,   390,
      79,   412,    64,   413,   114,    38,   359,    56,   360,   207,
     251,   361,   120,    41,   121,   173,   303,    71,    71,   182,
      47,    48,   223,    49,    95,   293,    95,   285,   228,   296,
     126,   217,     0,   137,     0,     0,   290,     0,   387,     0,
     389,     0,    47,    48,     0,    49,     0,     0,    71,     0,
       0,    71,     0,     0,    71,     0,   173,    71,   396,    71,
       0,   293,   293,     0,   186,     0,   187,   296,   296,     0,
       0,    96,     0,   189,     0,   309,   312,   163,    67,   124,
       0,     0,    38,     0,    68,     0,   163,   191,   293,    95,
      41,   197,    69,   296,     0,   201,     0,     0,     0,     0,
       0,   423,     0,   126,     0,    71,    71,     0,    38,    71,
       0,     0,     0,    71,   102,    71,    41,    71,     0,    47,
      48,    71,    49,    70,     0,     0,    71,     0,     0,     0,
     103,   104,     0,     0,    96,     0,     0,     0,     0,   250,
       0,    95,   281,     0,     0,    47,    48,   182,    49,   286,
       0,     0,   291,    36,     0,   252,     0,    37,     0,    38,
       0,    39,    95,   163,     0,    40,     0,    41,     0,    42,
       0,    71,    43,    71,     0,    71,    44,    71,     0,     0,
      45,    71,     0,     0,    71,     0,    46,     0,   324,     0,
       0,     0,     0,     0,     0,     0,    47,    48,   331,    49,
      50,   109,     0,   337,    95,     0,   341,     0,    38,   345,
       0,     0,    95,     0,   175,     0,    41,    95,     0,    95,
     310,   313,    95,     0,     0,   163,    38,     0,     0,    95,
     176,   177,    71,     0,    41,    71,   365,     0,    71,    71,
       0,     0,   304,     0,     0,    47,    48,     0,    49,   374,
     376,   323,     0,   380,   382,     0,     0,     0,    95,     0,
       0,    38,   163,    47,    48,     0,    49,   163,    95,    41,
      95,    95,   163,    95,     0,     0,    95,    38,     0,    95,
       0,     0,     0,   333,   334,    41,   328,     0,    71,     0,
      71,     0,     0,    71,     0,     0,   409,   411,    47,    48,
       0,    49,     0,     0,     0,   163,    95,     0,   335,     0,
       0,     0,   163,     0,    47,    48,    95,    49,   163,    95,
      95,     0,   163,    95,    95,    95,   163,     0,     0,   370,
       0,    95,     0,    38,     0,    71,     0,   203,   383,   140,
       0,    41,     0,    38,   388,    68,   163,     0,     0,     0,
       0,    41,     0,    69,     0,   163,    95,   163,     0,     0,
       0,   163,    95,   163,     0,    95,    95,    95,   340,   400,
      47,    48,     0,    49,     0,   405,     0,     0,   407,     0,
      47,    48,    95,    49,    70,   204,     0,    95,     0,    95,
     163,    95,   163,     0,     0,   416,     0,     0,     0,     0,
     418,    95,   419,    95,   421,     0,    35,    36,     0,    38,
       0,    37,     0,    38,   424,    39,   425,    41,     0,    40,
       0,    41,     0,    42,   115,    36,    43,    38,     0,    37,
      44,    38,     0,    39,    45,    41,     0,    40,     0,    41,
      46,    42,   336,     0,    43,     0,    47,    48,    44,    49,
      47,    48,    45,    49,    50,     0,     0,     0,    46,   241,
     242,     0,   243,     0,    47,    48,     0,    49,    47,    48,
      36,    49,    50,     0,    37,     0,    38,     0,    39,     0,
       0,     0,    40,     0,    41,     0,    42,     0,     0,    43,
       0,     0,    36,    44,    98,    99,    37,    45,    38,     0,
      39,     0,     0,    46,    40,    84,    41,     0,    42,     0,
       0,    43,     0,    47,    48,    44,    49,    50,    36,    45,
       0,     0,    37,     0,    38,    46,    39,   148,     0,     0,
      40,     0,    41,     0,    42,    47,    48,    43,    49,    50,
      36,    44,     0,     0,    37,    45,    38,     0,    39,     0,
       0,    46,    40,     0,    41,     0,    42,     0,   155,    43,
       0,    47,    48,    44,    49,    50,    36,    45,     0,     0,
      37,     0,    38,    46,    39,     0,     0,     0,    40,     0,
      41,     0,    42,    47,    48,    43,    49,    50,   158,    44,
       0,     0,    36,    45,     0,     0,    37,     0,    38,    46,
      39,     0,     0,     0,    40,     0,    41,     0,    42,    47,
      48,    43,    49,    50,     0,    44,    66,    67,   165,    45,
       0,    38,     0,    68,     0,    46,     0,     0,     0,    41,
       0,    69,     0,     0,    38,    47,    48,    36,    49,    50,
       0,    37,    41,    38,     0,    39,     0,     0,     0,    40,
       0,    41,     0,    42,     0,     0,    43,     0,    47,    48,
      44,    49,    70,     0,    45,   344,     0,   172,     0,     0,
      46,    47,    48,     0,    49,     0,     0,     0,     0,     0,
      47,    48,    36,    49,    50,     0,    37,     0,    38,     0,
      39,     0,     0,     0,    40,     0,    41,     0,    42,     0,
       0,    43,     0,     0,    36,    44,   225,     0,    37,    45,
      38,     0,    39,     0,     0,    46,    40,     0,    41,     0,
      42,     0,     0,    43,     0,    47,    48,    44,    49,    50,
      36,    45,     0,     0,    37,     0,    38,    46,    39,   266,
     238,     0,    40,     0,    41,     0,    42,    47,    48,    43,
      49,    50,    36,    44,     0,     0,    37,    45,    38,     0,
      39,     0,     0,    46,    40,     0,    41,     0,    42,     0,
     268,    43,     0,    47,    48,    44,    49,    50,    36,    45,
      38,     0,    37,     0,    38,    46,    39,     0,    41,     0,
      40,     0,    41,     0,    42,    47,    48,    43,    49,    50,
      36,    44,   274,     0,    37,    45,    38,     0,    39,     0,
       0,    46,    40,   372,    41,     0,    42,    47,    48,    43,
      49,    47,    48,    44,    49,    50,     0,    45,     0,     0,
       0,     0,   277,    46,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    47,    48,    36,    49,    50,     0,    37,
       0,    38,     0,    39,     0,     0,     0,    40,     0,    41,
       0,    42,    38,    36,    43,     0,     0,    37,    44,    38,
      41,    39,    45,     0,     0,    40,     0,    41,    46,    42,
       0,     0,    43,     0,     0,   292,    44,     0,    47,    48,
      45,    49,    50,     0,   298,   299,    46,   300,     0,    47,
      48,     0,    49,     0,     0,   295,    47,    48,    36,    49,
      50,     0,    37,     0,    38,     0,    39,     0,     0,     0,
      40,    38,    41,     0,    42,     0,     0,    43,    76,    41,
      67,    44,     0,    77,    38,    45,    68,     0,     0,     0,
       0,    46,    41,     0,    69,     0,   363,     0,     0,     0,
       0,    47,    48,     0,    49,    50,     0,     0,    47,    48,
       0,    49,   145,     0,   140,     0,     0,   146,    38,     0,
      68,    47,    48,    38,    49,    70,    41,   194,    69,    67,
       0,    41,     0,    38,     0,    68,   195,     0,   254,     0,
     140,    41,     0,    69,    38,     0,    68,   255,   364,     0,
       0,     0,    41,     0,    69,    47,    48,     0,    49,    70,
      47,    48,     0,    49,     0,     0,     0,     0,     0,     0,
      47,    48,     0,    49,    70,     0,     0,     0,     0,    38,
       0,    47,    48,     0,    49,    70,   307,    41,    67,     0,
       0,     0,    38,     0,    68,   308,     0,   354,     0,   140,
      41,     0,    69,    38,     0,    68,   355,   139,   140,     0,
     375,    41,    38,    69,    68,     0,    47,    48,     0,    49,
      41,     0,    69,     0,     0,     0,     0,     0,     0,    47,
      48,     0,    49,    70,     0,     0,     0,     0,     0,     0,
      47,    48,     0,    49,    70,     0,     0,     0,     0,    47,
      48,     0,    49,    70,   140,   192,     0,     0,    38,   140,
      68,     0,     0,    38,     0,    68,    41,     0,    69,     0,
      67,    41,     0,    69,    38,   259,    68,   140,     0,     0,
       0,    38,    41,    68,    69,     0,   311,     0,     0,    41,
       0,    69,     0,   357,     0,    47,    48,     0,    49,    70,
      47,    48,     0,    49,    70,     0,     0,     0,    38,     0,
       0,    47,    48,     0,    49,    70,    41,     0,    47,    48,
      67,    49,    70,     0,    38,   140,    68,     0,     0,    38,
       0,    68,    41,     0,    69,     0,     0,    41,     0,    69,
       0,   373,     0,    38,     0,    47,    48,    38,    49,     0,
       0,    41,     0,     0,     0,    41,     0,     0,     0,     0,
      38,    47,    48,     0,    49,    70,    47,    48,    41,    49,
      70,   179,   180,     0,   181,   246,   247,     0,   248,     0,
      47,    48,    38,    49,    47,    48,     0,    49,    38,     0,
      41,     0,     0,    38,     0,   378,    41,    47,    48,    38,
      49,    41,     0,    38,     0,     0,     0,    41,     0,     0,
      38,    41,     0,   394,     0,    38,     0,   379,    41,    47,
      48,     0,    49,    41,   381,    47,    48,    38,    49,     0,
      47,    48,   399,    49,   384,    41,    47,    48,     0,    49,
      47,    48,     0,    49,     0,   404,   401,    47,    48,    38,
      49,     0,    47,    48,    38,    49,     0,    41,   406,     0,
       0,     0,    41,     0,    47,    48,    38,    49,     0,     0,
      38,     0,     0,     0,    41,     0,     0,     0,    41,     0,
     408,     0,     0,     0,     0,   410,    47,    48,     0,    49,
       0,    47,    48,     0,    49,     0,     0,   420,     0,     0,
       0,   422,     0,    47,    48,     0,    49,    47,    48,     0,
      49
};

static const yytype_int16 yycheck[] =
{
      21,   177,   160,   102,     6,     6,    76,   300,     4,   280,
       4,    31,     9,     3,     4,     4,   299,     9,     0,    40,
       6,    18,    22,    44,    22,    11,    18,     3,     4,    50,
      51,    29,     7,    54,    20,    19,     7,    23,    22,    14,
      26,    10,     7,     8,    64,    66,    73,   340,     7,     8,
      25,    78,   323,   336,    56,    56,    77,   328,     7,     8,
      81,    61,    56,    84,   134,   223,    56,    56,     7,     8,
      91,    57,    93,    94,    60,   145,   175,    98,    99,    65,
      56,   102,   103,   104,    59,   378,   379,    56,   109,   372,
     373,    56,   363,   364,     9,    22,    10,    56,   125,     9,
      22,    19,    29,    18,    22,    27,     5,    56,    18,   136,
      46,   404,    46,    49,    56,    49,   399,    56,   139,    36,
      37,   142,    11,   394,   194,   146,   147,   148,   114,     7,
      13,   152,    17,   203,   120,   121,    23,    25,    11,    23,
     161,   162,    56,    23,    23,    37,   167,   168,   169,    60,
     326,    15,    18,    23,   175,   176,   177,    60,   179,   180,
      26,    23,    17,   190,   185,    21,    12,    19,    14,   196,
      29,    34,    18,   200,    20,    67,    30,    43,    70,    18,
      26,    38,    28,    43,   254,    61,    21,    26,   209,    55,
      56,   367,    58,   214,   215,    40,    40,   218,   219,    42,
     186,   187,    19,   189,   225,    29,    17,   228,   229,    55,
      56,   232,    58,    59,    60,    30,    55,    56,    60,    58,
      18,   242,   243,    36,   251,   246,   247,    48,    26,    21,
      40,    40,   124,    60,    32,    33,   128,   307,    46,    21,
     132,     0,    30,   264,    43,   266,    45,   268,   140,     8,
      36,    10,   273,   274,    13,    44,    41,    55,    56,    52,
      58,    21,   283,   284,   250,    24,    50,   288,    46,    28,
      50,    54,    21,    18,    30,    41,    35,    46,   299,   300,
     301,    26,   309,    50,   354,   312,    50,    32,    33,    21,
      37,    46,    34,    21,    53,    18,   317,    24,   319,   140,
     192,   322,    61,    26,    63,   326,   247,    36,    37,   108,
      55,    56,   162,    58,    43,   336,    45,   236,   169,   340,
      67,   153,    -1,    70,    -1,    -1,    49,    -1,   349,    -1,
     351,    -1,    55,    56,    -1,    58,    -1,    -1,    67,    -1,
      -1,    70,    -1,    -1,    73,    -1,   367,    76,   369,    78,
      -1,   372,   373,    -1,   113,    -1,   115,   378,   379,    -1,
      -1,   160,    -1,   122,    -1,   257,   258,    96,    14,    15,
      -1,    -1,    18,    -1,    20,    -1,   105,   124,   399,   108,
      26,   128,    28,   404,    -1,   132,    -1,    -1,    -1,    -1,
      -1,   412,    -1,   140,    -1,   124,   125,    -1,    18,   128,
      -1,    -1,    -1,   132,    24,   134,    26,   136,    -1,    55,
      56,   140,    58,    59,    -1,    -1,   145,    -1,    -1,    -1,
      40,    41,    -1,    -1,   223,    -1,    -1,    -1,    -1,   188,
      -1,   160,   231,    -1,    -1,    55,    56,   236,    58,   238,
      -1,    -1,   241,    12,    -1,   192,    -1,    16,    -1,    18,
      -1,    20,   181,   182,    -1,    24,    -1,    26,    -1,    28,
      -1,   190,    31,   192,    -1,   194,    35,   196,    -1,    -1,
      39,   200,    -1,    -1,   203,    -1,    45,    -1,   277,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    56,   287,    58,
      59,    60,    -1,   292,   223,    -1,   295,    -1,    18,   298,
      -1,    -1,   231,    -1,    24,    -1,    26,   236,    -1,   238,
     257,   258,   241,    -1,    -1,   244,    18,    -1,    -1,   248,
      40,    41,   251,    -1,    26,   254,   325,    -1,   257,   258,
      -1,    -1,   248,    -1,    -1,    55,    56,    -1,    58,   338,
     339,    43,    -1,   342,   343,    -1,    -1,    -1,   277,    -1,
      -1,    18,   281,    55,    56,    -1,    58,   286,   287,    26,
     289,   290,   291,   292,    -1,    -1,   295,    18,    -1,   298,
      -1,    -1,    -1,   289,   290,    26,    43,    -1,   307,    -1,
     309,    -1,    -1,   312,    -1,    -1,   385,   386,    55,    56,
      -1,    58,    -1,    -1,    -1,   324,   325,    -1,    49,    -1,
      -1,    -1,   331,    -1,    55,    56,   335,    58,   337,   338,
     339,    -1,   341,   342,   343,   344,   345,    -1,    -1,   335,
      -1,   350,    -1,    18,    -1,   354,    -1,    12,   344,    14,
      -1,    26,    -1,    18,   350,    20,   365,    -1,    -1,    -1,
      -1,    26,    -1,    28,    -1,   374,   375,   376,    -1,    -1,
      -1,   380,   381,   382,    -1,   384,   385,   386,    53,   375,
      55,    56,    -1,    58,    -1,   381,    -1,    -1,   384,    -1,
      55,    56,   401,    58,    59,    60,    -1,   406,    -1,   408,
     409,   410,   411,    -1,    -1,   401,    -1,    -1,    -1,    -1,
     406,   420,   408,   422,   410,    -1,    11,    12,    -1,    18,
      -1,    16,    -1,    18,   420,    20,   422,    26,    -1,    24,
      -1,    26,    -1,    28,    11,    12,    31,    18,    -1,    16,
      35,    18,    -1,    20,    39,    26,    -1,    24,    -1,    26,
      45,    28,    51,    -1,    31,    -1,    55,    56,    35,    58,
      55,    56,    39,    58,    59,    -1,    -1,    -1,    45,    50,
      51,    -1,    53,    -1,    55,    56,    -1,    58,    55,    56,
      12,    58,    59,    -1,    16,    -1,    18,    -1,    20,    -1,
      -1,    -1,    24,    -1,    26,    -1,    28,    -1,    -1,    31,
      -1,    -1,    12,    35,    36,    37,    16,    39,    18,    -1,
      20,    -1,    -1,    45,    24,    25,    26,    -1,    28,    -1,
      -1,    31,    -1,    55,    56,    35,    58,    59,    12,    39,
      -1,    -1,    16,    -1,    18,    45,    20,    21,    -1,    -1,
      24,    -1,    26,    -1,    28,    55,    56,    31,    58,    59,
      12,    35,    -1,    -1,    16,    39,    18,    -1,    20,    -1,
      -1,    45,    24,    -1,    26,    -1,    28,    -1,    30,    31,
      -1,    55,    56,    35,    58,    59,    12,    39,    -1,    -1,
      16,    -1,    18,    45,    20,    -1,    -1,    -1,    24,    -1,
      26,    -1,    28,    55,    56,    31,    58,    59,    34,    35,
      -1,    -1,    12,    39,    -1,    -1,    16,    -1,    18,    45,
      20,    -1,    -1,    -1,    24,    -1,    26,    -1,    28,    55,
      56,    31,    58,    59,    -1,    35,    13,    14,    38,    39,
      -1,    18,    -1,    20,    -1,    45,    -1,    -1,    -1,    26,
      -1,    28,    -1,    -1,    18,    55,    56,    12,    58,    59,
      -1,    16,    26,    18,    -1,    20,    -1,    -1,    -1,    24,
      -1,    26,    -1,    28,    -1,    -1,    31,    -1,    55,    56,
      35,    58,    59,    -1,    39,    49,    -1,    42,    -1,    -1,
      45,    55,    56,    -1,    58,    -1,    -1,    -1,    -1,    -1,
      55,    56,    12,    58,    59,    -1,    16,    -1,    18,    -1,
      20,    -1,    -1,    -1,    24,    -1,    26,    -1,    28,    -1,
      -1,    31,    -1,    -1,    12,    35,    36,    -1,    16,    39,
      18,    -1,    20,    -1,    -1,    45,    24,    -1,    26,    -1,
      28,    -1,    -1,    31,    -1,    55,    56,    35,    58,    59,
      12,    39,    -1,    -1,    16,    -1,    18,    45,    20,    21,
      48,    -1,    24,    -1,    26,    -1,    28,    55,    56,    31,
      58,    59,    12,    35,    -1,    -1,    16,    39,    18,    -1,
      20,    -1,    -1,    45,    24,    -1,    26,    -1,    28,    -1,
      30,    31,    -1,    55,    56,    35,    58,    59,    12,    39,
      18,    -1,    16,    -1,    18,    45,    20,    -1,    26,    -1,
      24,    -1,    26,    -1,    28,    55,    56,    31,    58,    59,
      12,    35,    36,    -1,    16,    39,    18,    -1,    20,    -1,
      -1,    45,    24,    51,    26,    -1,    28,    55,    56,    31,
      58,    55,    56,    35,    58,    59,    -1,    39,    -1,    -1,
      -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    12,    58,    59,    -1,    16,
      -1,    18,    -1,    20,    -1,    -1,    -1,    24,    -1,    26,
      -1,    28,    18,    12,    31,    -1,    -1,    16,    35,    18,
      26,    20,    39,    -1,    -1,    24,    -1,    26,    45,    28,
      -1,    -1,    31,    -1,    -1,    52,    35,    -1,    55,    56,
      39,    58,    59,    -1,    50,    51,    45,    53,    -1,    55,
      56,    -1,    58,    -1,    -1,    54,    55,    56,    12,    58,
      59,    -1,    16,    -1,    18,    -1,    20,    -1,    -1,    -1,
      24,    18,    26,    -1,    28,    -1,    -1,    31,    12,    26,
      14,    35,    -1,    17,    18,    39,    20,    -1,    -1,    -1,
      -1,    45,    26,    -1,    28,    -1,    43,    -1,    -1,    -1,
      -1,    55,    56,    -1,    58,    59,    -1,    -1,    55,    56,
      -1,    58,    12,    -1,    14,    -1,    -1,    17,    18,    -1,
      20,    55,    56,    18,    58,    59,    26,    12,    28,    14,
      -1,    26,    -1,    18,    -1,    20,    21,    -1,    12,    -1,
      14,    26,    -1,    28,    18,    -1,    20,    21,    43,    -1,
      -1,    -1,    26,    -1,    28,    55,    56,    -1,    58,    59,
      55,    56,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    56,    -1,    58,    59,    -1,    -1,    -1,    -1,    18,
      -1,    55,    56,    -1,    58,    59,    12,    26,    14,    -1,
      -1,    -1,    18,    -1,    20,    21,    -1,    12,    -1,    14,
      26,    -1,    28,    18,    -1,    20,    21,    13,    14,    -1,
      49,    26,    18,    28,    20,    -1,    55,    56,    -1,    58,
      26,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      56,    -1,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    56,    -1,    58,    59,    -1,    -1,    -1,    -1,    55,
      56,    -1,    58,    59,    14,    15,    -1,    -1,    18,    14,
      20,    -1,    -1,    18,    -1,    20,    26,    -1,    28,    -1,
      14,    26,    -1,    28,    18,    30,    20,    14,    -1,    -1,
      -1,    18,    26,    20,    28,    -1,    30,    -1,    -1,    26,
      -1,    28,    -1,    30,    -1,    55,    56,    -1,    58,    59,
      55,    56,    -1,    58,    59,    -1,    -1,    -1,    18,    -1,
      -1,    55,    56,    -1,    58,    59,    26,    -1,    55,    56,
      14,    58,    59,    -1,    18,    14,    20,    -1,    -1,    18,
      -1,    20,    26,    -1,    28,    -1,    -1,    26,    -1,    28,
      -1,    51,    -1,    18,    -1,    55,    56,    18,    58,    -1,
      -1,    26,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      18,    55,    56,    -1,    58,    59,    55,    56,    26,    58,
      59,    46,    47,    -1,    49,    46,    47,    -1,    49,    -1,
      55,    56,    18,    58,    55,    56,    -1,    58,    18,    -1,
      26,    -1,    -1,    18,    -1,    53,    26,    55,    56,    18,
      58,    26,    -1,    18,    -1,    -1,    -1,    26,    -1,    -1,
      18,    26,    -1,    43,    -1,    18,    -1,    53,    26,    55,
      56,    -1,    58,    26,    49,    55,    56,    18,    58,    -1,
      55,    56,    51,    58,    49,    26,    55,    56,    -1,    58,
      55,    56,    -1,    58,    -1,    53,    49,    55,    56,    18,
      58,    -1,    55,    56,    18,    58,    -1,    26,    49,    -1,
      -1,    -1,    26,    -1,    55,    56,    18,    58,    -1,    -1,
      18,    -1,    -1,    -1,    26,    -1,    -1,    -1,    26,    -1,
      49,    -1,    -1,    -1,    -1,    49,    55,    56,    -1,    58,
      -1,    55,    56,    -1,    58,    -1,    -1,    49,    -1,    -1,
      -1,    49,    -1,    55,    56,    -1,    58,    55,    56,    -1,
      58
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,    56,    63,    68,    69,     4,     6,    64,
      65,    69,     0,     3,     4,    68,    64,     7,     8,    66,
      69,    10,    67,    69,     6,     4,    69,    64,     9,    18,
      70,    71,     7,     7,     8,    11,    12,    16,    18,    20,
      24,    26,    28,    31,    35,    39,    45,    55,    56,    58,
      59,    72,    76,     5,    10,     7,    66,    69,    64,     4,
      69,     9,    70,     9,    71,    69,    13,    14,    20,    28,
      59,    72,    74,    75,    78,    79,    12,    17,    75,    79,
      83,    19,    22,    99,    25,    76,    87,    22,    27,    98,
      22,    29,   100,    32,    33,    72,    73,    85,    36,    37,
      76,    96,    24,    40,    41,    73,    88,    22,    61,    60,
      76,    77,    76,    11,    69,    11,    76,     7,     7,    64,
      69,    69,     9,    76,    15,    75,    79,    80,    19,    22,
      82,    22,    29,    81,    12,    60,    75,    79,    84,    13,
      14,    74,    13,    78,    76,    12,    17,    17,    21,    76,
      23,    76,    25,    23,    23,    30,    76,    76,    34,    76,
      86,    32,    33,    72,    76,    38,    76,    97,    36,    37,
      87,    76,    42,    76,    89,    24,    40,    41,    23,    46,
      47,    49,    73,    92,    76,    60,    69,    69,    11,    69,
      75,    79,    15,    15,    12,    21,    75,    79,    23,    23,
      75,    79,    78,    12,    60,    60,    76,    80,    76,    17,
      78,    76,    76,    76,    21,    19,    76,    98,    29,    30,
      34,    85,    76,    86,    38,    36,    76,    76,    97,    40,
      43,    42,    40,    87,    76,    89,    61,    76,    48,    76,
      91,    50,    51,    53,    73,    93,    46,    47,    49,    76,
      69,    75,    79,    78,    12,    21,    21,    19,    29,    30,
      30,    60,    78,    76,    17,    76,    21,    76,    30,    76,
      76,    85,    76,    36,    36,    76,    76,    44,    76,    90,
      43,    73,    76,    40,    40,    92,    73,    48,    46,    49,
      49,    73,    52,    76,    94,    54,    76,    95,    50,    51,
      53,    46,    76,    91,    93,    21,    78,    12,    21,    75,
      79,    30,    75,    79,    60,    76,    76,    21,    76,    30,
      76,    76,    36,    43,    73,    44,    41,    90,    43,    76,
      76,    73,    76,    93,    93,    49,    51,    73,    52,    50,
      53,    73,    54,    50,    49,    73,    94,    95,    76,    46,
      49,    46,    21,    78,    12,    21,    21,    30,    30,    76,
      76,    76,    90,    43,    43,    73,    89,    41,    90,    46,
      93,    94,    51,    51,    73,    49,    73,    95,    53,    53,
      73,    49,    73,    93,    49,    50,    50,    76,    93,    76,
      21,    78,    90,    90,    43,    89,    76,    94,    94,    51,
      93,    49,    95,    95,    53,    93,    49,    93,    49,    73,
      49,    73,    46,    21,    90,    94,    93,    95,    93,    93,
      49,    93,    49,    76,    93,    93
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
      76,    76,    76,    77,    77,    77,    77,    78,    78,    78,
      78,    78,    78,    79,    79,    80,    80,    80,    80,    80,
      80,    80,    81,    81,    81,    81,    81,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    84,    84,    84,
      84,    84,    85,    85,    85,    85,    85,    85,    86,    86,
      87,    87,    87,    87,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    89,    89,    89,    89,
      89,    90,    90,    90,    90,    90,    90,    90,    90,    91,
      91,    91,    91,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    94,    94,    94,    94,    94,    94,    94,    94,
      95,    95,    95,    95,    95,    95,    95,    95,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      97,    97,    98,    98,    99,    99,    99,    99,    99,    99,
      99,    99,   100,   100,   100,   100,   100,   100,   100
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     4,     3,     5,     3,     4,     3,
       2,     3,     4,     3,     4,     2,     3,     3,     4,     3,
       4,     4,     5,     3,     2,     4,     3,     4,     3,     5,
       4,     1,     2,     1,     1,     2,     1,     1,     1,     1,
       2,     1,     2,     1,     1,     2,     2,     2,     2,     1,
       2,     2,     2,     2,     1,     2,     2,     3,     5,     2,
       2,     2,     2,     2,     3,     1,     2,     3,     2,     1,
       2,     3,     2,     2,     3,     1,     2,     2,     2,     2,
       3,     3,     4,     5,     3,     5,     3,     5,     3,     6,
       4,     5,     3,     2,     4,     7,     5,     3,     2,     2,
       1,     2,     3,     4,     3,     5,     4,     2,     2,     1,
       3,     4,     3,     1,     4,     2,     2,     3,     2,     1,
       1,     2,     3,     2,     1,     2,     3,     4,     2,     3,
       4,     5,     3,     4,     4,     5,     4,     5,     6,     3,
       5,     2,     4,     1,     3,     3,     5,     2,     4,     2,
       1,     3,     2,     3,     4,     4,     5,     5,     3,     6,
       4,     1,     2,     4,     7,     5,     2,     3,     1,     2,
       3,     3,     2,     3,     4,     4,     3,     4,     5,     5,
       6,     6,     4,     4,     5,     5,     4,     5,     6,     6,
       7,     7,     1,     2,     2,     3,     3,     4,     4,     5,
       1,     2,     2,     3,     3,     4,     4,     5,     4,     3,
       4,     2,     1,     5,     4,     5,     3,     2,     6,     5,
       2,     1,     3,     1,     6,     4,     3,     5,     3,     2,
       5,     4,     4,     5,     3,     2,     5,     6,     4
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
#line 43 "Parser.y" /* yacc.c:1646  */
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
#line 1848 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 58 "Parser.y" /* yacc.c:1646  */
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
#line 1866 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 71 "Parser.y" /* yacc.c:1646  */
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
#line 1887 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 87 "Parser.y" /* yacc.c:1646  */
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
#line 1906 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 101 "Parser.y" /* yacc.c:1646  */
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
#line 1928 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 120 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-2].object),(yyvsp[-1].object),(yyvsp[0].value));
	}
#line 1936 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 123 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-3].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
	}
#line 1944 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 128 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 1952 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 131 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 1960 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 134 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 1968 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 137 "Parser.y" /* yacc.c:1646  */
    { 
			node *ptr=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
			node *n=new node;
			copy_list(n->v,(yyvsp[-3].object)->v);
			copy_list(n->v,ptr->v);
			(yyval.object)=n;
		}
#line 1980 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 144 "Parser.y" /* yacc.c:1646  */
    { 
			node *ptr=add_start((yyvsp[0].value));
			node *n=new node;
			copy_list(n->v,(yyvsp[-2].object)->v);
			copy_list(n->v,ptr->v);
			(yyval.object)=n;
		}
#line 1992 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 151 "Parser.y" /* yacc.c:1646  */
    {
			node *ptr=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
			node *n=new node;
			copy_list(n->v,(yyvsp[-3].object)->v);
			copy_list(n->v,ptr->v);
			(yyval.object)=n;
		}
#line 2004 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 160 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 2012 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 163 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2020 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 166 "Parser.y" /* yacc.c:1646  */
    {
			node *ptr=add_start((yyvsp[0].value));
			node *n=new node;
			copy_list(n->v,(yyvsp[-2].object)->v);
			copy_list(n->v,ptr->v);
			(yyval.object)=n;
		}
#line 2032 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 173 "Parser.y" /* yacc.c:1646  */
    {
			node *ptr=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
			node *n=new node;
			copy_list(n->v,(yyvsp[-3].object)->v);
			copy_list(n->v,ptr->v);
			(yyval.object)=n;
		}
#line 2044 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 180 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2052 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 183 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2060 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 186 "Parser.y" /* yacc.c:1646  */
    {
			node *ptr=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
			node *n=new node;
			copy_list(n->v,(yyvsp[-3].object)->v);
			copy_list(n->v,ptr->v);
			(yyval.object)=n;
		}
#line 2072 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 193 "Parser.y" /* yacc.c:1646  */
    {
			node *ptr=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
			node *n=new node;
			copy_list(n->v,(yyvsp[-4].object)->v);
			copy_list(n->v,ptr->v);
			(yyval.object)=n;
		}
#line 2084 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 202 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2092 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 205 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 2100 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 208 "Parser.y" /* yacc.c:1646  */
    { 
			node *n=new node;
			copy_list(n->v,(yyvsp[-3].object)->v);
			node *ptr=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
			copy_list(n->v,ptr->v);
			(yyval.object)=n;
		}
#line 2112 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 215 "Parser.y" /* yacc.c:1646  */
    {
			node *n=new node;
			copy_list(n->v,(yyvsp[-2].object)->v);
			copy_list(n->v,add_start((yyvsp[0].value))->v);
			(yyval.object)=n;
		}
#line 2123 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 221 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2131 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 224 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2139 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 227 "Parser.y" /* yacc.c:1646  */
    {
			node *ptr=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
			node *n=new node;
			copy_list(n->v,(yyvsp[-4].object)->v);
			copy_list(n->v,ptr->v);
			(yyval.object)=n;
		}
#line 2151 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 234 "Parser.y" /* yacc.c:1646  */
    {
			node *ptr=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
			node *n=new node;
			copy_list(n->v,(yyvsp[-3].object)->v);
			copy_list(n->v,ptr->v);
			(yyval.object)=n;	
		}
#line 2163 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 243 "Parser.y" /* yacc.c:1646  */
    {
			vn v;
			v.push_back(add_node("COMMENT",(yyvsp[0].value)));
			node* n = new node;
			copy_list(n->v,v);
			(yyval.object)=n;
		}
#line 2175 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 252 "Parser.y" /* yacc.c:1646  */
    {
			vn v1,v2;
			v1 = (yyvsp[-1].object)->v;
			v2 = (yyvsp[0].object)->v;
			node* n = new node;
			copy_list(n->v,v1);	
			copy_list(n->v,v2);
			(yyval.object)=n;
		}
#line 2189 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 261 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 2197 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 266 "Parser.y" /* yacc.c:1646  */
    {
			vn v;
			v.push_back(add_node("TEXT",(yyvsp[0].value)));
			node* n = new node;
			copy_list(n->v,v);
			(yyval.object)=n;
		}
#line 2209 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 275 "Parser.y" /* yacc.c:1646  */
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
#line 2225 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 286 "Parser.y" /* yacc.c:1646  */
    {
			 (yyval.object)=(yyvsp[0].object);
		}
#line 2233 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 291 "Parser.y" /* yacc.c:1646  */
    {
			vn v;
			v.push_back(add_node("COMMENT",(yyvsp[0].value)));
			node* n = new node;
			copy_list(n->v,v);
			(yyval.object)=n;
		}
#line 2245 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 298 "Parser.y" /* yacc.c:1646  */
    {
		  	vn v;
			v.push_back(add_node("BR"));
			node* n = new node;
			copy_list(n->v,v);
			(yyval.object)=n;
		}
#line 2257 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 305 "Parser.y" /* yacc.c:1646  */
    { 	
			vn v;
			v.push_back(add_node("TEXT",(yyvsp[0].value)));
			node* n = new node;
			copy_list(n->v,v);
			(yyval.object)=n;
		}
#line 2269 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 312 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 2277 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 315 "Parser.y" /* yacc.c:1646  */
    { 
			vn v;
			v.push_back(add_node("SYMBOL",(yyvsp[0].value)));
			node* n = new node;
			copy_list(n->v,v);
			(yyval.object)=n;
		}
#line 2289 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 324 "Parser.y" /* yacc.c:1646  */
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
#line 2312 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 342 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 2320 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 347 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 2328 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 350 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 2336 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 353 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 2344 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 356 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 2352 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 361 "Parser.y" /* yacc.c:1646  */
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
#line 2375 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 379 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 2383 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 384 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=(yyvsp[0].object); 
		}
#line 2391 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 387 "Parser.y" /* yacc.c:1646  */
    {  
			(yyval.object)=(yyvsp[0].object); 
		}
#line 2399 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 390 "Parser.y" /* yacc.c:1646  */
    {  
			(yyval.object)=(yyvsp[0].object); 
		}
#line 2407 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 393 "Parser.y" /* yacc.c:1646  */
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
#line 2430 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 411 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 2438 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 414 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=(yyvsp[0].object);
		}
#line 2446 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 417 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 2454 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 420 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 2462 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 423 "Parser.y" /* yacc.c:1646  */
    {
			node *n=(yyvsp[0].object);
			add_attributes(n->v[0],(yyvsp[-3].value),(yyvsp[-2].value));
			(yyval.object)=n;
		}
#line 2472 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 428 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 2480 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 431 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=(yyvsp[0].object);
		}
#line 2488 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 434 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=(yyvsp[0].object);
		}
#line 2496 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 437 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=(yyvsp[0].object);
		}
#line 2504 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 442 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2512 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 445 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2520 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 448 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 2528 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 451 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2536 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 456 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2544 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 459 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2552 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 462 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_start((yyvsp[0].value));	
		}
#line 2560 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 465 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2568 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 468 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2576 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 471 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2584 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 476 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=(yyvsp[0].object);
		}
#line 2592 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 479 "Parser.y" /* yacc.c:1646  */
    {
			node* n=new node;
			copy_list(n->v,(yyvsp[-2].object)->v);
			copy_list(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;
		}
#line 2603 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 487 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 2611 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 490 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2619 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 493 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2627 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 496 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2635 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 499 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2643 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 502 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2651 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 505 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2659 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 510 "Parser.y" /* yacc.c:1646  */
    { 
			node *n=add_start((yyvsp[0].value));
			add_attributes(n->v[0],(yyvsp[-3].value),(yyvsp[-2].value));
			(yyval.object)=n;
		}
#line 2669 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 515 "Parser.y" /* yacc.c:1646  */
    { 
			node *n=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
			add_attributes(n->v[0],(yyvsp[-4].value),(yyvsp[-3].value));
			(yyval.object)=n;
		}
#line 2679 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 520 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2687 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 523 "Parser.y" /* yacc.c:1646  */
    { 
			node *n=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
			add_attributes(n->v[0],(yyvsp[-4].value),(yyvsp[-3].value));
			(yyval.object)=n;
		}
#line 2697 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 528 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2705 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 533 "Parser.y" /* yacc.c:1646  */
    { 
			node  *n=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
			add_attributes(n->v[0],(yyvsp[-4].value),(yyvsp[-3].value));
			(yyval.object)=n;
		}
#line 2715 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 538 "Parser.y" /* yacc.c:1646  */
    { 
    		(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
    	}
#line 2723 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 541 "Parser.y" /* yacc.c:1646  */
    { 
    		node *n=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
    		add_attributes(n->v[0],(yyvsp[-5].value),(yyvsp[-4].value));
    		(yyval.object)=n;
		}
#line 2733 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 546 "Parser.y" /* yacc.c:1646  */
    { 
    		(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
    	}
#line 2741 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 549 "Parser.y" /* yacc.c:1646  */
    { 
    		node *n=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
    		add_attributes(n->v[0],(yyvsp[-4].value),(yyvsp[-3].value));
    		(yyval.object)=n;
    	}
#line 2751 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 554 "Parser.y" /* yacc.c:1646  */
    { 
    		(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
    	}
#line 2759 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 557 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_start((yyvsp[0].value));
    	}
#line 2767 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 560 "Parser.y" /* yacc.c:1646  */
    { 	
			node *n=add_start((yyvsp[0].value));
			add_attributes(n->v[0],(yyvsp[-3].value),(yyvsp[-2].value));
			(yyval.object)=n;
		}
#line 2777 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 565 "Parser.y" /* yacc.c:1646  */
    { 
    		node *n=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
    		add_attributes(n->v[0],(yyvsp[-6].value),(yyvsp[-5].value));
    		(yyval.object)=n;
		}
#line 2787 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 570 "Parser.y" /* yacc.c:1646  */
    { 
    		(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
    	}
#line 2795 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 575 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2803 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 578 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2811 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 581 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2819 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 584 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 2827 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 587 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2835 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 590 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2843 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 593 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2851 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 596 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2859 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 599 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_child_neighbour((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2867 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 602 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2875 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 607 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2883 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 610 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2891 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 613 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 2899 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 616 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2907 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 619 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2915 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 624 "Parser.y" /* yacc.c:1646  */
    {
			(yyvsp[0].object)->v[0]->children.insert((yyvsp[0].object)->v[0]->children.begin(),(yyvsp[-1].object)->v.begin(),(yyvsp[-1].object)->v.end());
			(yyval.object)=(yyvsp[0].object);
		}
#line 2924 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 628 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 2932 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 631 "Parser.y" /* yacc.c:1646  */
    {
			(yyvsp[0].object)->v[0]->children.insert((yyvsp[0].object)->v[0]->children.begin(),(yyvsp[-1].object)->v.begin(),(yyvsp[-1].object)->v.end());
			(yyvsp[0].object)->v[0]->children.insert((yyvsp[0].object)->v[0]->children.begin(),(yyvsp[-3].object)->v.begin(),(yyvsp[-3].object)->v.end());
			(yyval.object)=(yyvsp[0].object);
		}
#line 2942 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 636 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2950 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 639 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2958 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 642 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2966 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 647 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2974 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 650 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 2982 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 655 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 2990 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 658 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2998 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 661 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3006 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 664 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3014 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 669 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 3022 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 672 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3030 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 675 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3038 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 678 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3046 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 681 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3054 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 684 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3062 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 687 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 3070 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 690 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 3078 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 693 "Parser.y" /* yacc.c:1646  */
    { 
    		(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
    	}
#line 3086 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 696 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 3094 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 699 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
    	}
#line 3102 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 702 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 3110 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 707 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-3].object),(yyvsp[-2].value),(yyvsp[0].object));
		}
#line 3118 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 710 "Parser.y" /* yacc.c:1646  */
    {
			node *n=add_child_neighbour((yyvsp[-4].object),(yyvsp[-3].value),(yyvsp[-2].object));
			copy_list(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;
		}
#line 3128 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 715 "Parser.y" /* yacc.c:1646  */
    {
			node *n=add_child_neighbour((yyvsp[-5].object),(yyvsp[-4].value),(yyvsp[-2].object));
			copy_list(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;
		}
#line 3138 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 720 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-2].value),(yyvsp[0].object));
		}
#line 3146 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 723 "Parser.y" /* yacc.c:1646  */
    {
    		node *n=add_neighbour((yyvsp[-4].value),(yyvsp[-2].object));
    		copy_list(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;	
    	}
#line 3156 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 730 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3164 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 733 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-3].object),(yyvsp[-2].value),(yyvsp[0].object));	
		}
#line 3172 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 736 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 3180 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 739 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-2].value),(yyvsp[0].object));
		}
#line 3188 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 742 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3196 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 745 "Parser.y" /* yacc.c:1646  */
    {
			node* n=add_child_neighbour((yyvsp[-4].object),(yyvsp[-3].value),(yyvsp[-2].object));
			copy_list(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;
		}
#line 3206 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 750 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3214 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 753 "Parser.y" /* yacc.c:1646  */
    {
			node *n=add_neighbour((yyvsp[-3].value),(yyvsp[-2].object));
			copy_list(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;
		}
#line 3224 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 760 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3232 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 763 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 3240 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 766 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3248 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 769 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3256 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 774 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3264 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 777 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3272 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 780 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3280 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 783 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3288 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 786 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3296 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 789 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3304 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 792 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 3312 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 795 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 3320 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 798 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 3328 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 801 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3336 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 804 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3344 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 807 "Parser.y" /* yacc.c:1646  */
    {
    		node* n=add_child_neighbour((yyvsp[-6].object),(yyvsp[-4].object),(yyvsp[-1].value),(yyvsp[0].object));
    		add_children(n->v[0],(yyvsp[-2].object)->v);
    		(yyval.object)=n;
    	}
#line 3354 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 812 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 3362 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 815 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3370 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 818 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3378 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 823 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 3386 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 826 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3394 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 829 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3402 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 832 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3410 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 835 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3418 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 838 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3426 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 841 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3434 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 844 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3442 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 847 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_neighbour((yyvsp[-2].value),(yyvsp[0].object));
		}
#line 3450 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 850 "Parser.y" /* yacc.c:1646  */
    {
			node* n=add_neighbour((yyvsp[-3].value),(yyvsp[-2].object));
			copy_list(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;
		}
#line 3460 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 855 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-3].object),(yyvsp[-2].value),(yyvsp[0].object));
    	}
#line 3468 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 858 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-3].object),(yyvsp[-2].value),(yyvsp[0].object));
    	}
#line 3476 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 861 "Parser.y" /* yacc.c:1646  */
    {
    		node* n=add_child_neighbour((yyvsp[-4].object),(yyvsp[-3].value),(yyvsp[-2].object));
			copy_list(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;	
    	}
#line 3486 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 866 "Parser.y" /* yacc.c:1646  */
    {
    		node* n=add_child_neighbour((yyvsp[-4].object),(yyvsp[-3].value),(yyvsp[-2].object));
			copy_list(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;	
    	}
#line 3496 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 871 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3504 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 874 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3512 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 877 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3520 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 880 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3528 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 883 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_child_neighbour((yyvsp[-3].object),(yyvsp[-2].value),(yyvsp[0].object));
		}
#line 3536 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 886 "Parser.y" /* yacc.c:1646  */
    {
			node* n=add_child_neighbour((yyvsp[-4].object),(yyvsp[-3].value),(yyvsp[-2].object));
			copy_list(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;
		}
#line 3546 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 891 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-5].object),(yyvsp[-3].object),(yyvsp[-2].value),(yyvsp[0].object));
    	}
#line 3554 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 894 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-5].object),(yyvsp[-3].object),(yyvsp[-2].value),(yyvsp[0].object));
    	}
#line 3562 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 897 "Parser.y" /* yacc.c:1646  */
    {
    		node* n=add_child_neighbour((yyvsp[-6].object),(yyvsp[-4].object),(yyvsp[-3].value),(yyvsp[-2].object));
			copy_list(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;	
    	}
#line 3572 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 902 "Parser.y" /* yacc.c:1646  */
    {
    		node* n=add_child_neighbour((yyvsp[-6].object),(yyvsp[-4].object),(yyvsp[-3].value),(yyvsp[-2].object));
			copy_list(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;	
    	}
#line 3582 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 910 "Parser.y" /* yacc.c:1646  */
    {	
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 3590 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 913 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3598 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 916 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3606 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 919 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3614 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 922 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-2].value),(yyvsp[0].object));
		}
#line 3622 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 925 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-3].object),(yyvsp[-2].value),(yyvsp[0].object));
		}
#line 3630 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 928 "Parser.y" /* yacc.c:1646  */
    {
			node* n=add_neighbour((yyvsp[-3].value),(yyvsp[-2].object));
		  	copy_list(n->v,(yyvsp[0].object)->v);
    		(yyval.object)=n;			
		}
#line 3640 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 933 "Parser.y" /* yacc.c:1646  */
    { 
			node* n=add_child_neighbour((yyvsp[-4].object),(yyvsp[-3].value),(yyvsp[-2].object));
		  	copy_list(n->v,(yyvsp[0].object)->v);
    		(yyval.object)=n;
		}
#line 3650 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 940 "Parser.y" /* yacc.c:1646  */
    {	
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 3658 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 943 "Parser.y" /* yacc.c:1646  */
    {
	    	(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
    	}
#line 3666 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 946 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 3674 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 949 "Parser.y" /* yacc.c:1646  */
    {
	 	   	(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 3682 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 952 "Parser.y" /* yacc.c:1646  */
    {
	    	(yyval.object)=add_neighbour((yyvsp[-2].value),(yyvsp[0].object));
    	}
#line 3690 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 955 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-3].object),(yyvsp[-2].value),(yyvsp[0].object));
    	}
#line 3698 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 958 "Parser.y" /* yacc.c:1646  */
    {
	    	node *n=add_neighbour((yyvsp[-3].value),(yyvsp[-2].object));
  		  	copy_list(n->v,(yyvsp[0].object)->v);
    		(yyval.object)=n;
    	}
#line 3708 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 963 "Parser.y" /* yacc.c:1646  */
    {
 	 	  	node* n=add_child_neighbour((yyvsp[-4].object),(yyvsp[-3].value),(yyvsp[-2].object));
    		copy_list(n->v,(yyvsp[0].object)->v);
    		(yyval.object)=n;
    	}
#line 3718 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 970 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3726 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 973 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3734 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 976 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-2].object),(yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3742 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 979 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3750 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 982 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 3758 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 985 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3766 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 988 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 3774 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 991 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-3].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3782 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 994 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 3790 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 997 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3798 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1000 "Parser.y" /* yacc.c:1646  */
    {
			node* n=add_child_neighbour((yyvsp[-5].object),(yyvsp[-3].object),(yyvsp[-1].value),(yyvsp[0].object));
    		add_children(n->v[0],(yyvsp[-2].object)->v);
    		(yyval.object)=n;
		}
#line 3808 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1005 "Parser.y" /* yacc.c:1646  */
    {
			node* n=add_startChild((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[0].value));
    		add_children(n->v[0],(yyvsp[-1].object)->v);
    		(yyval.object)=n;	
		}
#line 3818 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1012 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3826 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1015 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 3834 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1020 "Parser.y" /* yacc.c:1646  */
    { 
			treeNode *ptr=(yyvsp[0].object)->v[0];
			add_attributes(ptr,(yyvsp[-2].value),(yyvsp[-1].value));
			(yyval.object)=(yyvsp[0].object);
		}
#line 3844 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1025 "Parser.y" /* yacc.c:1646  */
    { 	
				node *n = new node;
				vn v;
				treeNode *ptr=add_node("IMG");
				v.pb(ptr);
				copy_list(n->v,v);
				(yyval.object)=n;
		}
#line 3857 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1035 "Parser.y" /* yacc.c:1646  */
    {
			node  *n=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
			add_attributes(n->v[0],(yyvsp[-5].value),(yyvsp[-4].value));
			(yyval.object)=n;
		}
#line 3867 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1040 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3875 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1043 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3883 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1046 "Parser.y" /* yacc.c:1646  */
    {
			node *n=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
			add_attributes(n->v[0],(yyvsp[-4].value),(yyvsp[-3].value));
			(yyval.object)=n;
		}
#line 3893 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1051 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value)); 
   		}
#line 3901 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1054 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_start((yyvsp[0].value));
   		}
#line 3909 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1057 "Parser.y" /* yacc.c:1646  */
    {
			node *n=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
			add_attributes(n->v[0],(yyvsp[-4].value),(yyvsp[-3].value));
			(yyval.object)=n;
		}
#line 3919 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1062 "Parser.y" /* yacc.c:1646  */
    {
			node *n=add_start((yyvsp[0].value));
			add_attributes(n->v[0],(yyvsp[-3].value),(yyvsp[-2].value));
			(yyval.object)=n;
		}
#line 3929 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1069 "Parser.y" /* yacc.c:1646  */
    {
			node *n=add_start((yyvsp[0].value));
			add_attributes(n->v[0],(yyvsp[-3].value),(yyvsp[-2].value));
			(yyval.object)=n;
		}
#line 3939 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 1074 "Parser.y" /* yacc.c:1646  */
    {
			node *n=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
			add_attributes(n->v[0],(yyvsp[-4].value),(yyvsp[-3].value));
			(yyval.object)=n;
		}
#line 3949 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 1079 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3957 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 1082 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 3965 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 1085 "Parser.y" /* yacc.c:1646  */
    {
			node *n=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
			add_attributes(n->v[0],(yyvsp[-4].value),(yyvsp[-3].value));
			(yyval.object)=n;
		}
#line 3975 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 1090 "Parser.y" /* yacc.c:1646  */
    {
			node *n=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
			add_attributes(n->v[0],(yyvsp[-5].value),(yyvsp[-4].value));
			(yyval.object)=n;
		}
#line 3985 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 1095 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3993 "Parser.tab.c" /* yacc.c:1646  */
    break;


#line 3997 "Parser.tab.c" /* yacc.c:1646  */
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
#line 1100 "Parser.y" /* yacc.c:1906  */

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
	outfile=string(argv[2]);
	yyparse();
	return 0;
}  
char* concat(char *s1,char *s2){
	char *p = (char *)malloc(1+strlen(s1)+strlen(s2));
	strcat(p,s1);
	strcat(p,s2);
	return p;	
}
