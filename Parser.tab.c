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
#define YYLAST   1578

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  237
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  425

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
     401,   402,   403,   404,   422,   425,   428,   431,   434,   439,
     442,   445,   448,   453,   456,   459,   462,   467,   470,   473,
     476,   479,   482,   487,   490,   498,   501,   504,   507,   510,
     513,   516,   521,   526,   531,   534,   539,   544,   549,   552,
     557,   560,   565,   568,   571,   576,   581,   586,   589,   592,
     595,   598,   601,   604,   607,   610,   613,   618,   621,   624,
     627,   630,   635,   639,   642,   647,   650,   653,   658,   661,
     666,   669,   672,   675,   680,   683,   686,   689,   692,   695,
     698,   701,   704,   707,   710,   713,   718,   721,   726,   731,
     734,   741,   744,   747,   750,   753,   756,   761,   764,   771,
     774,   777,   780,   785,   788,   791,   794,   797,   800,   803,
     806,   809,   812,   815,   818,   823,   826,   829,   834,   837,
     840,   843,   846,   849,   852,   855,   858,   861,   866,   869,
     872,   877,   882,   885,   888,   891,   894,   897,   902,   905,
     908,   913,   921,   923,   926,   929,   932,   935,   938,   943,
     950,   953,   956,   959,   962,   965,   968,   973,   980,   983,
     986,   989,   992,   995,   998,  1001,  1004,  1007,  1010,  1015,
    1022,  1025,  1030,  1035,  1044,  1049,  1052,  1055,  1060,  1063,
    1066,  1071,  1078,  1083,  1088,  1091,  1096,  1101
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

#define YYPACT_NINF -292

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-292)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       9,    38,    12,  -292,    43,  -292,    11,    12,    86,  -292,
      -3,    35,  -292,     1,    12,  -292,  -292,  -292,     8,    45,
      92,   670,    54,    40,    94,    12,     5,  -292,    23,  -292,
    -292,    13,  -292,  -292,    18,    23,   398,   570,  -292,    91,
     806,    69,     6,   186,   768,  1413,    39,  -292,  -292,  -292,
     700,  1244,    56,    23,   738,  -292,   113,    99,  -292,    12,
      23,    23,  -292,    23,    29,    23,  1244,   310,    95,    10,
     262,  -292,  -292,   483,  -292,   109,   398,  1244,  1264,   116,
    -292,   836,   101,  -292,  1244,   104,  -292,   114,  -292,  -292,
     118,  1244,  -292,  1244,   866,  -292,   583,  -292,  1244,   896,
      67,  -292,   806,  1244,   926,  1433,  -292,   119,   610,  1244,
      98,  -292,  -292,    23,    23,    23,   153,  -292,  -292,  -292,
      23,    23,    23,  -292,  1406,  1017,   150,  -292,  1288,   143,
    -292,   152,  1406,  -292,   398,  -292,   434,   117,  -292,  1244,
     310,  -292,  1244,   162,  -292,   398,  1244,  1244,  1244,   159,
     163,  -292,  1244,    69,   156,   151,  -292,  -292,   154,   186,
    1244,   866,  -292,  -292,  -292,   148,   964,  1244,   896,   155,
    -292,   147,   172,   165,   806,  1244,   926,   138,  1244,   994,
     158,  1449,  -292,  -292,  1244,    23,    23,    23,    23,  1424,
    -292,  1406,  -292,   398,  -292,  1308,   177,   197,   193,  1191,
     196,   166,   398,  -292,  -292,  -292,  -292,  -292,  1244,   211,
    -292,  -292,  -292,  1244,  1040,  -292,  -292,  1078,  1244,  -292,
    -292,  -292,   186,  -292,  1244,   198,  -292,  1108,  1244,  1138,
      93,  1244,   189,  -292,   192,   610,  -292,   645,   185,    59,
     112,  1168,  1198,   423,   191,  1244,   994,   158,  -292,    23,
    1424,  -292,   228,   398,  -292,  -292,  1332,  1368,  -292,  -292,
    -292,   195,  -292,  1244,  -292,  1244,   236,  1244,   229,  -292,
    -292,  -292,  1244,  1244,   222,  -292,   212,   216,   224,  1138,
     459,  -292,  1244,  1244,  -292,   645,   645,  1244,   158,   158,
     685,   518,   218,   223,   565,   231,   237,   753,  1168,  1198,
    1244,  -292,   124,   226,  -292,   268,   398,  -292,  1352,   271,
    -292,  1388,   256,  -292,  -292,  -292,  1244,  -292,  1244,  -292,
    -292,  1244,  1138,   640,  1358,   926,   250,  1138,  -292,  -292,
     645,  -292,   248,  -292,   158,  1168,   817,   979,  1029,  1198,
     715,   783,  1212,   158,  1460,   246,   249,  -292,  1244,   158,
    1244,  -292,   287,   398,  -292,  -292,  -292,  -292,  -292,  -292,
    -292,  -292,  1138,  1138,  1403,  -292,   926,  -292,  1244,  -292,
    -292,  1168,  1168,   989,   158,  1467,  -292,  1198,  1198,  1476,
     158,  1479,  -292,   158,  1492,  1495,  -292,   263,  -292,  -292,
     289,  -292,  -292,  1138,  -292,  -292,  -292,  -292,  1168,  -292,
     158,  -292,  -292,  1198,  -292,   158,  -292,   158,  1514,   158,
    1519,  1244,  -292,  -292,  -292,  -292,  -292,  -292,  -292,   158,
    -292,   158,  -292,  -292,  -292
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
       0,   121,   123,     0,     0,     0,   116,   119,     0,     0,
     115,     0,    42,   217,   221,     0,     0,   211,     0,     0,
     128,     0,     0,     0,     0,   125,     0,     0,   161,     0,
       0,     0,    57,    66,    63,    27,    30,    25,    22,    78,
      77,    79,    76,     0,    93,     0,     0,     0,     0,     0,
       0,     0,     0,   108,   107,    71,    74,    67,   104,     0,
     102,    97,   226,   228,     0,   122,   222,     0,   234,   118,
     112,   117,     0,   220,   209,     0,   216,     0,   126,     0,
       0,   132,     0,   129,     0,     0,   162,   150,     0,     0,
     168,     0,     0,     0,     0,   166,     0,     0,    64,    29,
      81,    80,     0,     0,    92,    88,     0,     0,    86,    84,
     110,     0,   103,   106,   225,   231,     0,   232,     0,   237,
     114,   214,   210,   208,     0,   130,   143,     0,   139,     0,
       0,   133,   127,   134,    58,   152,   149,   153,     0,     0,
     172,   192,     0,     0,   200,     0,     0,   169,     0,     0,
     158,   167,     0,     0,    90,     0,     0,    94,     0,     0,
      82,     0,     0,   111,   105,   230,   227,   235,   233,   215,
     213,   219,     0,   147,   141,     0,   136,     0,   131,   135,
     151,   154,     0,   176,     0,     0,   194,   193,   170,     0,
     202,   201,   171,     0,   173,     0,     0,   160,   155,     0,
     163,    96,     0,     0,    91,    87,    85,    83,   224,   236,
     218,   144,     0,     0,   145,   140,     0,   137,   157,   177,
     196,     0,     0,   195,     0,   174,   204,     0,     0,   203,
       0,   175,   186,     0,   182,   183,   156,     0,   165,    89,
       0,   148,   142,     0,   138,   159,   198,   197,     0,   178,
       0,   206,   205,     0,   179,     0,   187,     0,   184,     0,
     185,     0,    95,   146,   199,   180,   207,   181,   188,     0,
     189,     0,   164,   190,   191
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -292,  -292,    -4,  -292,   288,  -292,    14,   240,    -7,   277,
     270,   146,   -27,   107,   -21,  -292,   -70,   265,   176,  -292,
    -292,  -292,  -292,  -157,   170,   -98,  -292,  -165,  -278,    74,
     106,   132,  -282,  -291,  -292,   171,   173,  -292,  -292
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     9,    10,    19,    22,     5,    11,    30,    31,
      51,   243,    72,    73,   277,   111,    74,    75,   127,   133,
     130,    80,   138,    97,   159,    86,   106,   173,   278,   239,
     182,   244,   293,   296,   101,   166,    89,    83,    92
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      52,   326,   220,    16,   169,    25,   143,    21,   346,    59,
      27,   234,     1,     2,    13,    14,   345,    28,     8,    85,
      15,    58,    61,   100,    62,    15,    29,    63,    90,   110,
     112,    29,   131,   116,    15,    91,    29,    15,   122,   132,
      15,    24,     7,    12,   361,   123,   141,    29,   376,   367,
      54,   141,    32,   370,     3,   119,   144,    62,     3,    53,
     149,   107,     3,   151,   201,   270,     3,   113,     3,     3,
     155,    15,   156,   158,    15,   209,   232,   163,   165,    15,
       3,    85,   170,   172,   391,   392,   401,   402,   183,   396,
     397,    87,     3,    17,    18,   108,    88,     3,   141,    33,
      34,    55,    18,   167,   168,   287,   118,    34,   288,   141,
      81,    38,   416,    82,   128,   413,   414,   129,   205,    41,
     117,   207,   142,   252,   150,   210,   211,   212,    15,   152,
      38,   215,   261,   147,    15,    15,   279,   153,    41,   221,
     158,   154,   177,     3,    78,   225,   226,   165,    47,     3,
      48,     3,    49,    85,   233,   172,     3,   236,   238,   184,
     365,   289,   141,   248,   187,   192,   197,    47,   141,    48,
     348,    49,   141,   349,   125,   198,    38,   136,   204,   208,
     213,   218,   214,   305,    41,   217,   223,   262,   219,    96,
     229,   105,   264,   266,   235,   228,   268,   269,   255,    15,
      15,   394,    15,   271,    38,   231,   274,   275,   240,   241,
     281,   242,    41,    47,   230,    48,   256,    49,    93,    94,
     292,   295,   257,   141,   301,   238,   259,   260,   263,   282,
      38,   189,   283,   286,   272,   195,   352,   300,    41,   199,
       6,    47,   314,    48,   315,    49,   317,   125,    20,   304,
      23,   319,   320,    26,   181,   322,   313,   316,   321,   318,
     324,   328,   329,    15,    57,   325,   331,    47,    60,    48,
     337,    49,   350,   338,   134,    65,    67,   292,   295,   347,
      38,   141,    68,   390,   141,   341,   357,   342,    41,   351,
      69,   366,   355,   114,   368,   358,   384,   359,   250,   385,
     360,   120,    79,   121,   172,    96,    71,    71,   389,   411,
     412,    64,    56,    95,   292,    95,   206,    47,   295,    48,
     302,    49,    70,   135,    67,   124,   216,   386,    38,   388,
      68,   222,   126,     0,     0,   137,    41,    71,    69,   227,
      71,   284,     0,    71,     0,   172,    71,   395,    71,     0,
     292,   292,     0,   185,     0,   186,   295,   295,     0,     0,
       0,     0,   188,   308,   311,    47,   162,    48,    96,    49,
      70,     0,     0,     0,     0,   162,   280,   292,    95,   303,
       0,   181,   295,   285,     0,     0,   290,     0,     0,   190,
     422,     0,     0,   196,    71,    71,     0,   200,    71,     0,
       0,     0,    71,     0,    71,   126,    71,     0,     0,     0,
      71,    66,    67,     0,     0,    71,    38,     0,    68,     0,
     332,   333,   323,     0,    41,     0,    69,   249,     0,    95,
       0,     0,   330,     0,     0,     0,     0,   336,     0,     0,
     340,    38,     0,   344,     0,     0,   202,     0,   140,    41,
      95,   162,    38,    47,    68,    48,   251,    49,    70,    71,
      41,    71,    69,    71,     0,    71,   369,     0,     0,    71,
     364,     0,    71,   297,   298,   382,   299,    38,    47,     0,
      48,   387,    49,   373,   375,    41,     0,   379,   381,    47,
       0,    48,    95,    49,    70,   203,   139,   140,     0,     0,
      95,    38,   327,    68,     0,    95,   399,    95,     0,    41,
      95,    69,   404,   162,    47,   406,    48,    95,    49,     0,
      71,   309,   312,    71,     0,     0,    71,    71,     0,     0,
     408,   410,   415,     0,     0,     0,    38,   417,    47,   418,
      48,   420,    49,    70,    41,     0,    95,     0,     0,     0,
     162,   423,     0,   424,     0,   162,    95,     0,    95,    95,
     162,    95,     0,     0,    95,     0,     0,    95,     0,   335,
       0,     0,     0,    47,     0,    48,    71,    49,    71,     0,
       0,    71,    76,    38,    67,     0,     0,    77,    38,     0,
      68,    41,     0,   162,    95,     0,    41,     0,    69,     0,
     162,    38,     0,     0,    95,     0,   162,    95,    95,    41,
     162,    95,    95,    95,   162,   160,   161,     0,   339,    95,
      47,     0,    48,    71,    49,    47,     0,    48,    38,    49,
      70,     0,     0,     0,   162,     0,    41,     0,    47,     0,
      48,     0,    49,   162,    95,   162,     0,     0,     0,   162,
      95,   162,     0,    95,    95,    95,   178,   179,    38,   180,
       0,     0,     0,    38,     0,    47,    41,    48,     0,    49,
      95,    41,     0,     0,     0,    95,     0,    95,   162,    95,
     162,    35,    36,   362,     0,     0,    37,     0,    38,    95,
      39,    95,     0,     0,    40,    47,    41,    48,    42,    49,
      47,    43,    48,    38,    49,    44,     0,     0,     0,    45,
       0,    41,    36,     0,     0,    46,    37,     0,    38,     0,
      39,     0,     0,     0,    40,    47,    41,    48,    42,    49,
      50,    43,     0,    38,   334,    44,     0,     0,     0,    45,
      47,    41,    48,     0,    49,    46,     0,     0,     0,   115,
      36,     0,     0,     0,    37,    47,    38,    48,    39,    49,
      50,   109,    40,     0,    41,     0,    42,     0,   377,    43,
      47,    38,    48,    44,    49,     0,     0,    45,     0,    41,
      36,     0,     0,    46,    37,     0,    38,     0,    39,     0,
       0,     0,    40,    47,    41,    48,    42,    49,    50,    43,
       0,    38,   343,    44,    98,    99,     0,    45,    47,    41,
      48,     0,    49,    46,     0,     0,     0,     0,    36,     0,
       0,     0,    37,    47,    38,    48,    39,    49,    50,     0,
      40,    84,    41,     0,    42,    38,   378,    43,    47,     0,
      48,    44,    49,    41,     0,    45,     0,     0,    36,     0,
       0,    46,    37,     0,    38,     0,    39,   148,     0,     0,
      40,    47,    41,    48,    42,    49,    50,    43,   371,     0,
       0,    44,    47,     0,    48,    45,    49,     0,    36,     0,
       0,    46,    37,     0,    38,     0,    39,     0,     0,     0,
      40,    47,    41,    48,    42,    49,    50,    43,     0,     0,
     157,    44,     0,     0,     0,    45,     0,     0,    36,     0,
       0,    46,    37,     0,    38,     0,    39,     0,     0,     0,
      40,    47,    41,    48,    42,    49,    50,    43,     0,     0,
       0,    44,     0,     0,   164,    45,     0,     0,    36,     0,
       0,    46,    37,     0,    38,     0,    39,     0,     0,     0,
      40,    47,    41,    48,    42,    49,    50,    43,     0,     0,
       0,    44,     0,     0,     0,    45,     0,     0,   171,     0,
       0,    46,     0,     0,     0,     0,    36,     0,     0,     0,
      37,    47,    38,    48,    39,    49,    50,     0,    40,     0,
      41,     0,    42,     0,     0,    43,     0,    38,     0,    44,
     224,     0,     0,    45,     0,    41,    36,    38,     0,    46,
      37,     0,    38,     0,    39,    41,     0,     0,    40,    47,
      41,    48,    42,    49,    50,    43,     0,     0,     0,    44,
     372,   140,   191,    45,    47,    38,    48,    68,    49,    46,
     398,     0,   237,    41,    47,    69,    48,    38,    49,    47,
       0,    48,    36,    49,    50,    41,    37,     0,    38,     0,
      39,   265,     0,     0,    40,     0,    41,     0,    42,     0,
       0,    43,    47,     0,    48,    44,    49,    70,   374,    45,
       0,     0,     0,     0,    47,    46,    48,     0,    49,     0,
      36,     0,     0,     0,    37,    47,    38,    48,    39,    49,
      50,     0,    40,     0,    41,     0,    42,     0,   267,    43,
       0,     0,     0,    44,     0,     0,     0,    45,     0,     0,
      36,     0,     0,    46,    37,     0,    38,     0,    39,     0,
       0,     0,    40,    47,    41,    48,    42,    49,    50,    43,
       0,     0,     0,    44,   273,     0,     0,    45,     0,     0,
      36,     0,     0,    46,    37,     0,    38,     0,    39,     0,
       0,     0,    40,    47,    41,    48,    42,    49,    50,    43,
       0,     0,     0,    44,     0,     0,     0,    45,     0,     0,
      36,     0,   276,    46,    37,     0,    38,     0,    39,     0,
       0,     0,    40,    47,    41,    48,    42,    49,    50,    43,
       0,     0,     0,    44,     0,   140,     0,    45,     0,    38,
      36,    68,     0,    46,    37,     0,    38,    41,    39,    69,
     291,   258,    40,    47,    41,    48,    42,    49,    50,    43,
      38,     0,     0,    44,     0,     0,     0,    45,    41,     0,
       0,     0,     0,    46,     0,     0,    47,     0,    48,     0,
      49,    70,   294,    47,     0,    48,    36,    49,    50,     0,
      37,   380,    38,     0,    39,     0,     0,    47,    40,    48,
      41,    49,    42,     0,     0,    43,   145,     0,   140,    44,
       0,   146,    38,    45,    68,     0,     0,     0,     0,    46,
      41,     0,    69,     0,     0,     0,     0,     0,     0,    47,
     193,    48,    67,    49,    50,     0,    38,     0,    68,   194,
       0,     0,     0,     0,    41,     0,    69,     0,     0,    47,
     253,    48,   140,    49,    70,     0,    38,     0,    68,   254,
       0,     0,     0,     0,    41,     0,    69,     0,     0,     0,
       0,     0,     0,    47,   306,    48,    67,    49,    70,     0,
      38,     0,    68,   307,     0,     0,     0,     0,    41,     0,
      69,     0,     0,    47,   353,    48,   140,    49,    70,     0,
      38,     0,    68,   354,     0,     0,    38,     0,    41,     0,
      69,     0,    67,     0,    41,     0,    38,    47,    68,    48,
       0,    49,    70,     0,    41,     0,    69,     0,   310,     0,
       0,   363,   140,     0,     0,     0,    38,    47,    68,    48,
       0,    49,    70,    47,    41,    48,    69,    49,   356,     0,
      67,    38,     0,    47,    38,    48,    68,    49,    70,    41,
       0,    38,    41,     0,    69,     0,     0,   102,   140,    41,
       0,     0,    38,    47,    68,    48,   393,    49,    70,     0,
      41,    38,    69,   103,   104,     0,     0,   174,    47,    41,
      48,    47,    49,    48,     0,    49,    70,    38,    47,     0,
      48,     0,    49,   175,   176,    41,     0,     0,    38,    47,
       0,    48,     0,    49,    70,    38,    41,     0,    47,     0,
      48,     0,    49,    41,    38,   245,   246,    38,   247,     0,
       0,     0,    41,     0,    47,    41,    48,     0,    49,   383,
      38,     0,     0,    38,     0,    47,   400,    48,    41,    49,
       0,    41,    47,     0,    48,     0,    49,     0,   405,   403,
       0,    47,    38,    48,    47,    49,    48,    38,    49,     0,
      41,   407,     0,     0,   409,    41,     0,    47,     0,    48,
      47,    49,    48,     0,    49,     0,     0,     0,     0,     0,
       0,     0,     0,   419,     0,     0,     0,     0,   421,    47,
       0,    48,     0,    49,    47,     0,    48,     0,    49
};

static const yytype_int16 yycheck[] =
{
      21,   279,   159,     7,   102,     4,    76,    10,   299,     4,
      14,   176,     3,     4,     3,     4,   298,     9,     6,    40,
       6,    25,     9,    44,    31,    11,    18,     9,    22,    50,
      51,    18,    22,    54,    20,    29,    18,    23,     9,    29,
      26,     6,     4,     0,   322,    66,    73,    18,   339,   327,
      10,    78,     7,   335,    57,    59,    77,    64,    57,     5,
      81,    22,    57,    84,   134,   222,    57,    11,    57,    57,
      91,    57,    93,    94,    60,   145,   174,    98,    99,    65,
      57,   102,   103,   104,   362,   363,   377,   378,   109,   371,
     372,    22,    57,     7,     8,    56,    27,    57,   125,     7,
       8,     7,     8,    36,    37,    46,     7,     8,    49,   136,
      19,    18,   403,    22,    19,   393,   398,    22,   139,    26,
       7,   142,    13,   193,    23,   146,   147,   148,   114,    25,
      18,   152,   202,    17,   120,   121,    43,    23,    26,   160,
     161,    23,    23,    57,    37,   166,   167,   168,    55,    57,
      57,    57,    59,   174,   175,   176,    57,   178,   179,    61,
     325,    49,   189,   184,    11,    15,    23,    55,   195,    57,
      46,    59,   199,    49,    67,    23,    18,    70,    61,    17,
      21,    30,    19,   253,    26,    29,    38,   208,    34,    43,
      43,    45,   213,   214,    56,    40,   217,   218,    21,   185,
     186,   366,   188,   224,    18,    40,   227,   228,    50,    51,
     231,    53,    26,    55,    42,    57,    19,    59,    32,    33,
     241,   242,    29,   250,   245,   246,    30,    61,    17,    40,
      18,   124,    40,    48,    36,   128,   306,    46,    26,   132,
       0,    55,   263,    57,   265,    59,   267,   140,     8,    21,
      10,   272,   273,    13,   108,    43,    61,    21,    36,    30,
      44,   282,   283,   249,    24,    41,   287,    55,    28,    57,
      52,    59,    46,    50,    12,    35,    14,   298,   299,   300,
      18,   308,    20,   353,   311,    54,    30,    50,    26,    21,
      28,    41,    21,    53,    46,   316,    50,   318,   191,    50,
     321,    61,    37,    63,   325,   159,    36,    37,    21,    46,
      21,    34,    24,    43,   335,    45,   140,    55,   339,    57,
     246,    59,    60,    61,    14,    15,   153,   348,    18,   350,
      20,   161,    67,    -1,    -1,    70,    26,    67,    28,   168,
      70,   235,    -1,    73,    -1,   366,    76,   368,    78,    -1,
     371,   372,    -1,   113,    -1,   115,   377,   378,    -1,    -1,
      -1,    -1,   122,   256,   257,    55,    96,    57,   222,    59,
      60,    -1,    -1,    -1,    -1,   105,   230,   398,   108,   247,
      -1,   235,   403,   237,    -1,    -1,   240,    -1,    -1,   124,
     411,    -1,    -1,   128,   124,   125,    -1,   132,   128,    -1,
      -1,    -1,   132,    -1,   134,   140,   136,    -1,    -1,    -1,
     140,    13,    14,    -1,    -1,   145,    18,    -1,    20,    -1,
     288,   289,   276,    -1,    26,    -1,    28,   187,    -1,   159,
      -1,    -1,   286,    -1,    -1,    -1,    -1,   291,    -1,    -1,
     294,    18,    -1,   297,    -1,    -1,    12,    -1,    14,    26,
     180,   181,    18,    55,    20,    57,   191,    59,    60,   189,
      26,   191,    28,   193,    -1,   195,   334,    -1,    -1,   199,
     324,    -1,   202,    50,    51,   343,    53,    18,    55,    -1,
      57,   349,    59,   337,   338,    26,    -1,   341,   342,    55,
      -1,    57,   222,    59,    60,    61,    13,    14,    -1,    -1,
     230,    18,    43,    20,    -1,   235,   374,   237,    -1,    26,
     240,    28,   380,   243,    55,   383,    57,   247,    59,    -1,
     250,   256,   257,   253,    -1,    -1,   256,   257,    -1,    -1,
     384,   385,   400,    -1,    -1,    -1,    18,   405,    55,   407,
      57,   409,    59,    60,    26,    -1,   276,    -1,    -1,    -1,
     280,   419,    -1,   421,    -1,   285,   286,    -1,   288,   289,
     290,   291,    -1,    -1,   294,    -1,    -1,   297,    -1,    51,
      -1,    -1,    -1,    55,    -1,    57,   306,    59,   308,    -1,
      -1,   311,    12,    18,    14,    -1,    -1,    17,    18,    -1,
      20,    26,    -1,   323,   324,    -1,    26,    -1,    28,    -1,
     330,    18,    -1,    -1,   334,    -1,   336,   337,   338,    26,
     340,   341,   342,   343,   344,    32,    33,    -1,    53,   349,
      55,    -1,    57,   353,    59,    55,    -1,    57,    18,    59,
      60,    -1,    -1,    -1,   364,    -1,    26,    -1,    55,    -1,
      57,    -1,    59,   373,   374,   375,    -1,    -1,    -1,   379,
     380,   381,    -1,   383,   384,   385,    46,    47,    18,    49,
      -1,    -1,    -1,    18,    -1,    55,    26,    57,    -1,    59,
     400,    26,    -1,    -1,    -1,   405,    -1,   407,   408,   409,
     410,    11,    12,    43,    -1,    -1,    16,    -1,    18,   419,
      20,   421,    -1,    -1,    24,    55,    26,    57,    28,    59,
      55,    31,    57,    18,    59,    35,    -1,    -1,    -1,    39,
      -1,    26,    12,    -1,    -1,    45,    16,    -1,    18,    -1,
      20,    -1,    -1,    -1,    24,    55,    26,    57,    28,    59,
      60,    31,    -1,    18,    49,    35,    -1,    -1,    -1,    39,
      55,    26,    57,    -1,    59,    45,    -1,    -1,    -1,    11,
      12,    -1,    -1,    -1,    16,    55,    18,    57,    20,    59,
      60,    61,    24,    -1,    26,    -1,    28,    -1,    53,    31,
      55,    18,    57,    35,    59,    -1,    -1,    39,    -1,    26,
      12,    -1,    -1,    45,    16,    -1,    18,    -1,    20,    -1,
      -1,    -1,    24,    55,    26,    57,    28,    59,    60,    31,
      -1,    18,    49,    35,    36,    37,    -1,    39,    55,    26,
      57,    -1,    59,    45,    -1,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    16,    55,    18,    57,    20,    59,    60,    -1,
      24,    25,    26,    -1,    28,    18,    53,    31,    55,    -1,
      57,    35,    59,    26,    -1,    39,    -1,    -1,    12,    -1,
      -1,    45,    16,    -1,    18,    -1,    20,    21,    -1,    -1,
      24,    55,    26,    57,    28,    59,    60,    31,    51,    -1,
      -1,    35,    55,    -1,    57,    39,    59,    -1,    12,    -1,
      -1,    45,    16,    -1,    18,    -1,    20,    -1,    -1,    -1,
      24,    55,    26,    57,    28,    59,    60,    31,    -1,    -1,
      34,    35,    -1,    -1,    -1,    39,    -1,    -1,    12,    -1,
      -1,    45,    16,    -1,    18,    -1,    20,    -1,    -1,    -1,
      24,    55,    26,    57,    28,    59,    60,    31,    -1,    -1,
      -1,    35,    -1,    -1,    38,    39,    -1,    -1,    12,    -1,
      -1,    45,    16,    -1,    18,    -1,    20,    -1,    -1,    -1,
      24,    55,    26,    57,    28,    59,    60,    31,    -1,    -1,
      -1,    35,    -1,    -1,    -1,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      16,    55,    18,    57,    20,    59,    60,    -1,    24,    -1,
      26,    -1,    28,    -1,    -1,    31,    -1,    18,    -1,    35,
      36,    -1,    -1,    39,    -1,    26,    12,    18,    -1,    45,
      16,    -1,    18,    -1,    20,    26,    -1,    -1,    24,    55,
      26,    57,    28,    59,    60,    31,    -1,    -1,    -1,    35,
      51,    14,    15,    39,    55,    18,    57,    20,    59,    45,
      51,    -1,    48,    26,    55,    28,    57,    18,    59,    55,
      -1,    57,    12,    59,    60,    26,    16,    -1,    18,    -1,
      20,    21,    -1,    -1,    24,    -1,    26,    -1,    28,    -1,
      -1,    31,    55,    -1,    57,    35,    59,    60,    49,    39,
      -1,    -1,    -1,    -1,    55,    45,    57,    -1,    59,    -1,
      12,    -1,    -1,    -1,    16,    55,    18,    57,    20,    59,
      60,    -1,    24,    -1,    26,    -1,    28,    -1,    30,    31,
      -1,    -1,    -1,    35,    -1,    -1,    -1,    39,    -1,    -1,
      12,    -1,    -1,    45,    16,    -1,    18,    -1,    20,    -1,
      -1,    -1,    24,    55,    26,    57,    28,    59,    60,    31,
      -1,    -1,    -1,    35,    36,    -1,    -1,    39,    -1,    -1,
      12,    -1,    -1,    45,    16,    -1,    18,    -1,    20,    -1,
      -1,    -1,    24,    55,    26,    57,    28,    59,    60,    31,
      -1,    -1,    -1,    35,    -1,    -1,    -1,    39,    -1,    -1,
      12,    -1,    44,    45,    16,    -1,    18,    -1,    20,    -1,
      -1,    -1,    24,    55,    26,    57,    28,    59,    60,    31,
      -1,    -1,    -1,    35,    -1,    14,    -1,    39,    -1,    18,
      12,    20,    -1,    45,    16,    -1,    18,    26,    20,    28,
      52,    30,    24,    55,    26,    57,    28,    59,    60,    31,
      18,    -1,    -1,    35,    -1,    -1,    -1,    39,    26,    -1,
      -1,    -1,    -1,    45,    -1,    -1,    55,    -1,    57,    -1,
      59,    60,    54,    55,    -1,    57,    12,    59,    60,    -1,
      16,    49,    18,    -1,    20,    -1,    -1,    55,    24,    57,
      26,    59,    28,    -1,    -1,    31,    12,    -1,    14,    35,
      -1,    17,    18,    39,    20,    -1,    -1,    -1,    -1,    45,
      26,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      12,    57,    14,    59,    60,    -1,    18,    -1,    20,    21,
      -1,    -1,    -1,    -1,    26,    -1,    28,    -1,    -1,    55,
      12,    57,    14,    59,    60,    -1,    18,    -1,    20,    21,
      -1,    -1,    -1,    -1,    26,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    12,    57,    14,    59,    60,    -1,
      18,    -1,    20,    21,    -1,    -1,    -1,    -1,    26,    -1,
      28,    -1,    -1,    55,    12,    57,    14,    59,    60,    -1,
      18,    -1,    20,    21,    -1,    -1,    18,    -1,    26,    -1,
      28,    -1,    14,    -1,    26,    -1,    18,    55,    20,    57,
      -1,    59,    60,    -1,    26,    -1,    28,    -1,    30,    -1,
      -1,    43,    14,    -1,    -1,    -1,    18,    55,    20,    57,
      -1,    59,    60,    55,    26,    57,    28,    59,    30,    -1,
      14,    18,    -1,    55,    18,    57,    20,    59,    60,    26,
      -1,    18,    26,    -1,    28,    -1,    -1,    24,    14,    26,
      -1,    -1,    18,    55,    20,    57,    43,    59,    60,    -1,
      26,    18,    28,    40,    41,    -1,    -1,    24,    55,    26,
      57,    55,    59,    57,    -1,    59,    60,    18,    55,    -1,
      57,    -1,    59,    40,    41,    26,    -1,    -1,    18,    55,
      -1,    57,    -1,    59,    60,    18,    26,    -1,    55,    -1,
      57,    -1,    59,    26,    18,    46,    47,    18,    49,    -1,
      -1,    -1,    26,    -1,    55,    26,    57,    -1,    59,    49,
      18,    -1,    -1,    18,    -1,    55,    49,    57,    26,    59,
      -1,    26,    55,    -1,    57,    -1,    59,    -1,    49,    53,
      -1,    55,    18,    57,    55,    59,    57,    18,    59,    -1,
      26,    49,    -1,    -1,    49,    26,    -1,    55,    -1,    57,
      55,    59,    57,    -1,    59,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    49,    55,
      -1,    57,    -1,    59,    55,    -1,    57,    -1,    59
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
      76,    96,    24,    40,    41,    73,    88,    22,    56,    61,
      76,    77,    76,    11,    69,    11,    76,     7,     7,    64,
      69,    69,     9,    76,    15,    75,    79,    80,    19,    22,
      82,    22,    29,    81,    12,    61,    75,    79,    84,    13,
      14,    74,    13,    78,    76,    12,    17,    17,    21,    76,
      23,    76,    25,    23,    23,    76,    76,    34,    76,    86,
      32,    33,    72,    76,    38,    76,    97,    36,    37,    87,
      76,    42,    76,    89,    24,    40,    41,    23,    46,    47,
      49,    73,    92,    76,    61,    69,    69,    11,    69,    75,
      79,    15,    15,    12,    21,    75,    79,    23,    23,    75,
      79,    78,    12,    61,    61,    76,    80,    76,    17,    78,
      76,    76,    76,    21,    19,    76,    98,    29,    30,    34,
      85,    76,    86,    38,    36,    76,    76,    97,    40,    43,
      42,    40,    87,    76,    89,    56,    76,    48,    76,    91,
      50,    51,    53,    73,    93,    46,    47,    49,    76,    69,
      75,    79,    78,    12,    21,    21,    19,    29,    30,    30,
      61,    78,    76,    17,    76,    21,    76,    30,    76,    76,
      85,    76,    36,    36,    76,    76,    44,    76,    90,    43,
      73,    76,    40,    40,    92,    73,    48,    46,    49,    49,
      73,    52,    76,    94,    54,    76,    95,    50,    51,    53,
      46,    76,    91,    93,    21,    78,    12,    21,    75,    79,
      30,    75,    79,    61,    76,    76,    21,    76,    30,    76,
      76,    36,    43,    73,    44,    41,    90,    43,    76,    76,
      73,    76,    93,    93,    49,    51,    73,    52,    50,    53,
      73,    54,    50,    49,    73,    94,    95,    76,    46,    49,
      46,    21,    78,    12,    21,    21,    30,    30,    76,    76,
      76,    90,    43,    43,    73,    89,    41,    90,    46,    93,
      94,    51,    51,    73,    49,    73,    95,    53,    53,    73,
      49,    73,    93,    49,    50,    50,    76,    93,    76,    21,
      78,    90,    90,    43,    89,    76,    94,    94,    51,    93,
      49,    95,    95,    53,    93,    49,    93,    49,    73,    49,
      73,    46,    21,    90,    94,    93,    95,    93,    93,    49,
      93,    49,    76,    93,    93
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
      99,    99,   100,   100,   100,   100,   100,   100
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
#line 1832 "Parser.tab.c" /* yacc.c:1646  */
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
#line 1850 "Parser.tab.c" /* yacc.c:1646  */
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
#line 1871 "Parser.tab.c" /* yacc.c:1646  */
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
#line 1890 "Parser.tab.c" /* yacc.c:1646  */
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
#line 1912 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 141 "Parser.y" /* yacc.c:1646  */
    {
				(yyval.object)=add_startChild((yyvsp[-2].object),(yyvsp[-1].object),(yyvsp[0].value));
	}
#line 1920 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 144 "Parser.y" /* yacc.c:1646  */
    {
				(yyval.object)=add_child_neighbour((yyvsp[-3].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
	}
#line 1928 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 149 "Parser.y" /* yacc.c:1646  */
    { 
				(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
			}
#line 1936 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 152 "Parser.y" /* yacc.c:1646  */
    { 
				(yyval.object)=add_start((yyvsp[0].value));
			}
#line 1944 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 155 "Parser.y" /* yacc.c:1646  */
    {
				(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
			}
#line 1952 "Parser.tab.c" /* yacc.c:1646  */
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
#line 1964 "Parser.tab.c" /* yacc.c:1646  */
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
#line 1976 "Parser.tab.c" /* yacc.c:1646  */
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
#line 1988 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 182 "Parser.y" /* yacc.c:1646  */
    {
				(yyval.object)=add_start((yyvsp[0].value));
			}
#line 1996 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 185 "Parser.y" /* yacc.c:1646  */
    {
				(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
			}
#line 2004 "Parser.tab.c" /* yacc.c:1646  */
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
#line 2016 "Parser.tab.c" /* yacc.c:1646  */
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
#line 2028 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 203 "Parser.y" /* yacc.c:1646  */
    {
				(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
			}
#line 2036 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 206 "Parser.y" /* yacc.c:1646  */
    {
				(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
			}
#line 2044 "Parser.tab.c" /* yacc.c:1646  */
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
#line 2056 "Parser.tab.c" /* yacc.c:1646  */
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
#line 2068 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 225 "Parser.y" /* yacc.c:1646  */
    {
				(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
			}
#line 2076 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 228 "Parser.y" /* yacc.c:1646  */
    {
				(yyval.object)=add_start((yyvsp[0].value));
			}
#line 2084 "Parser.tab.c" /* yacc.c:1646  */
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
#line 2096 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 239 "Parser.y" /* yacc.c:1646  */
    {
				node *n=new node;
				copy_list(n->v,(yyvsp[-2].object)->v);
				copy_list(n->v,add_start((yyvsp[0].value))->v);
				(yyval.object)=n;
			}
#line 2107 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 245 "Parser.y" /* yacc.c:1646  */
    {
				(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
			}
#line 2115 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 248 "Parser.y" /* yacc.c:1646  */
    {
				(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
			}
#line 2123 "Parser.tab.c" /* yacc.c:1646  */
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
#line 2135 "Parser.tab.c" /* yacc.c:1646  */
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
#line 2147 "Parser.tab.c" /* yacc.c:1646  */
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
#line 2159 "Parser.tab.c" /* yacc.c:1646  */
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
#line 2173 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 285 "Parser.y" /* yacc.c:1646  */
    { (yyval.object)=(yyvsp[0].object); }
#line 2179 "Parser.tab.c" /* yacc.c:1646  */
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
#line 2191 "Parser.tab.c" /* yacc.c:1646  */
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
#line 2207 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 308 "Parser.y" /* yacc.c:1646  */
    { (yyval.object)=(yyvsp[0].object); }
#line 2213 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 311 "Parser.y" /* yacc.c:1646  */
    { vn v;
				v.push_back(add_node("COMMENT",(yyvsp[0].value)));
				node* n = new node;
				copy_list(n->v,v);
				(yyval.object)=n;
			}
#line 2224 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 317 "Parser.y" /* yacc.c:1646  */
    {  	vn v;
				v.push_back(add_node("BR"));
				node* n = new node;
				copy_list(n->v,v);
				(yyval.object)=n;
			}
#line 2235 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 323 "Parser.y" /* yacc.c:1646  */
    { 	vn v;
				v.push_back(add_node("TEXT",(yyvsp[0].value)));
				node* n = new node;
				copy_list(n->v,v);
				(yyval.object)=n;
			}
#line 2246 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 329 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 2254 "Parser.tab.c" /* yacc.c:1646  */
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
#line 2266 "Parser.tab.c" /* yacc.c:1646  */
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
#line 2289 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 359 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 2297 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 364 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 2305 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 367 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 2313 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 370 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 2321 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 373 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 2329 "Parser.tab.c" /* yacc.c:1646  */
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
#line 2352 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 396 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 2360 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 401 "Parser.y" /* yacc.c:1646  */
    { (yyval.object)=(yyvsp[0].object); }
#line 2366 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 402 "Parser.y" /* yacc.c:1646  */
    {  (yyval.object)=(yyvsp[0].object); }
#line 2372 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 403 "Parser.y" /* yacc.c:1646  */
    {  (yyval.object)=(yyvsp[0].object); }
#line 2378 "Parser.tab.c" /* yacc.c:1646  */
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
#line 2401 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 422 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 2409 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 425 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=(yyvsp[0].object);
		}
#line 2417 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 428 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 2425 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 431 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 2433 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 434 "Parser.y" /* yacc.c:1646  */
    {
			node *n=(yyvsp[0].object);
			add_attributes(n->v[0],(yyvsp[-3].value),(yyvsp[-2].value));
			(yyval.object)=n;
		}
#line 2443 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 439 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 2451 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 442 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=(yyvsp[0].object);
		}
#line 2459 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 445 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=(yyvsp[0].object);
		}
#line 2467 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 448 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=(yyvsp[0].object);
		}
#line 2475 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 453 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2483 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 456 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2491 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 459 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 2499 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 462 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2507 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 467 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2515 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 470 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2523 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 473 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_start((yyvsp[0].value));	
		}
#line 2531 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 476 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2539 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 479 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2547 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 482 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2555 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 487 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=(yyvsp[0].object);
		}
#line 2563 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 490 "Parser.y" /* yacc.c:1646  */
    {
			node* n=new node;
			copy_list(n->v,(yyvsp[-2].object)->v);
			copy_list(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;
		}
#line 2574 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 498 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 2582 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 501 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2590 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 504 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2598 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 507 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2606 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 510 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2614 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 513 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2622 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 516 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2630 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 521 "Parser.y" /* yacc.c:1646  */
    { 
			node *n=add_start((yyvsp[0].value));
			add_attributes(n->v[0],(yyvsp[-3].value),(yyvsp[-2].value));
			(yyval.object)=n;
		}
#line 2640 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 526 "Parser.y" /* yacc.c:1646  */
    { 
			node *n=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
			add_attributes(n->v[0],(yyvsp[-4].value),(yyvsp[-3].value));
			(yyval.object)=n;
		}
#line 2650 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 531 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2658 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 534 "Parser.y" /* yacc.c:1646  */
    { 
			node *n=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
			add_attributes(n->v[0],(yyvsp[-4].value),(yyvsp[-3].value));
			(yyval.object)=n;
		}
#line 2668 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 539 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2676 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 544 "Parser.y" /* yacc.c:1646  */
    { 
			node  *n=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
			add_attributes(n->v[0],(yyvsp[-4].value),(yyvsp[-3].value));
			(yyval.object)=n;
		}
#line 2686 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 549 "Parser.y" /* yacc.c:1646  */
    { 
    		(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
    	}
#line 2694 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 552 "Parser.y" /* yacc.c:1646  */
    { 
    		node *n=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
    		add_attributes(n->v[0],(yyvsp[-5].value),(yyvsp[-4].value));
    		(yyval.object)=n;
		}
#line 2704 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 557 "Parser.y" /* yacc.c:1646  */
    { 
    		(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
    	}
#line 2712 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 560 "Parser.y" /* yacc.c:1646  */
    { 
    		node *n=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
    		add_attributes(n->v[0],(yyvsp[-4].value),(yyvsp[-3].value));
    		(yyval.object)=n;
    	}
#line 2722 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 565 "Parser.y" /* yacc.c:1646  */
    { 
    		(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
    	}
#line 2730 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 568 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_start((yyvsp[0].value));
    	}
#line 2738 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 571 "Parser.y" /* yacc.c:1646  */
    { 	
			node *n=add_start((yyvsp[0].value));
			add_attributes(n->v[0],(yyvsp[-3].value),(yyvsp[-2].value));
			(yyval.object)=n;
		}
#line 2748 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 576 "Parser.y" /* yacc.c:1646  */
    { 
    		node *n=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
    		add_attributes(n->v[0],(yyvsp[-6].value),(yyvsp[-5].value));
    		(yyval.object)=n;
		}
#line 2758 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 581 "Parser.y" /* yacc.c:1646  */
    { 
    		(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
    	}
#line 2766 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 586 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2774 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 589 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2782 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 592 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2790 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 595 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 2798 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 598 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2806 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 601 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2814 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 604 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2822 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 607 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2830 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 610 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_child_neighbour((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2838 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 613 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2846 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 618 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2854 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 621 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2862 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 624 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 2870 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 627 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2878 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 630 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2886 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 635 "Parser.y" /* yacc.c:1646  */
    {
			(yyvsp[0].object)->v[0]->children.insert((yyvsp[0].object)->v[0]->children.begin(),(yyvsp[-1].object)->v.begin(),(yyvsp[-1].object)->v.end());
			(yyval.object)=(yyvsp[0].object);
		}
#line 2895 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 639 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 2903 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 642 "Parser.y" /* yacc.c:1646  */
    {
			(yyvsp[0].object)->v[0]->children.insert((yyvsp[0].object)->v[0]->children.begin(),(yyvsp[-1].object)->v.begin(),(yyvsp[-1].object)->v.end());
			(yyvsp[0].object)->v[0]->children.insert((yyvsp[0].object)->v[0]->children.begin(),(yyvsp[-3].object)->v.begin(),(yyvsp[-3].object)->v.end());
			(yyval.object)=(yyvsp[0].object);
		}
#line 2913 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 647 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2921 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 650 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2929 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 653 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2937 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 658 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2945 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 661 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 2953 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 666 "Parser.y" /* yacc.c:1646  */
    {
		(yyval.object)=add_start((yyvsp[0].value));
		}
#line 2961 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 669 "Parser.y" /* yacc.c:1646  */
    {
		(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2969 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 672 "Parser.y" /* yacc.c:1646  */
    {
		(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2977 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 675 "Parser.y" /* yacc.c:1646  */
    {
		(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2985 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 680 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 2993 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 683 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3001 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 686 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3009 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 689 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3017 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 692 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3025 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 695 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3033 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 698 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 3041 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 701 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 3049 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 704 "Parser.y" /* yacc.c:1646  */
    { 
    		(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
    	}
#line 3057 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 707 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 3065 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 710 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
    	}
#line 3073 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 713 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 3081 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 718 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-3].object),(yyvsp[-2].value),(yyvsp[0].object));
		}
#line 3089 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 721 "Parser.y" /* yacc.c:1646  */
    {
			node *n=add_child_neighbour((yyvsp[-4].object),(yyvsp[-3].value),(yyvsp[-2].object));
			copy_list(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;
		}
#line 3099 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 726 "Parser.y" /* yacc.c:1646  */
    {
			node *n=add_child_neighbour((yyvsp[-5].object),(yyvsp[-4].value),(yyvsp[-2].object));
			copy_list(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;
		}
#line 3109 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 731 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-2].value),(yyvsp[0].object));
		}
#line 3117 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 734 "Parser.y" /* yacc.c:1646  */
    {
    		node *n=add_neighbour((yyvsp[-4].value),(yyvsp[-2].object));
    		copy_list(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;	
    	}
#line 3127 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 741 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3135 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 744 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-3].object),(yyvsp[-2].value),(yyvsp[0].object));	
		}
#line 3143 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 747 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 3151 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 750 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-2].value),(yyvsp[0].object));
		}
#line 3159 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 753 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3167 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 756 "Parser.y" /* yacc.c:1646  */
    {
			node* n=add_child_neighbour((yyvsp[-4].object),(yyvsp[-3].value),(yyvsp[-2].object));
			copy_list(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;
		}
#line 3177 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 761 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3185 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 764 "Parser.y" /* yacc.c:1646  */
    {
			node *n=add_neighbour((yyvsp[-3].value),(yyvsp[-2].object));
			copy_list(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;
		}
#line 3195 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 771 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3203 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 774 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 3211 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 777 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3219 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 780 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3227 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 785 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3235 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 788 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3243 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 791 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3251 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 794 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3259 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 797 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3267 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 800 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3275 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 803 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 3283 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 806 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 3291 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 809 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 3299 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 812 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3307 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 815 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3315 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 818 "Parser.y" /* yacc.c:1646  */
    {
    		node* n=add_child_neighbour((yyvsp[-6].object),(yyvsp[-4].object),(yyvsp[-1].value),(yyvsp[0].object));
    		add_children(n->v[0],(yyvsp[-2].object)->v);
    		(yyval.object)=n;
    	}
#line 3325 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 823 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 3333 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 826 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3341 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 829 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3349 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 834 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 3357 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 837 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3365 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 840 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3373 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 843 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3381 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 846 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3389 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 849 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3397 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 852 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3405 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 855 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3413 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 858 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_neighbour((yyvsp[-2].value),(yyvsp[0].object));
		}
#line 3421 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 861 "Parser.y" /* yacc.c:1646  */
    {
			node* n=add_neighbour((yyvsp[-3].value),(yyvsp[-2].object));
			copy_list(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;
		}
#line 3431 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 866 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-3].object),(yyvsp[-2].value),(yyvsp[0].object));
    	}
#line 3439 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 869 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-3].object),(yyvsp[-2].value),(yyvsp[0].object));
    	}
#line 3447 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 872 "Parser.y" /* yacc.c:1646  */
    {
    		node* n=add_child_neighbour((yyvsp[-4].object),(yyvsp[-3].value),(yyvsp[-2].object));
			copy_list(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;	
    	}
#line 3457 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 877 "Parser.y" /* yacc.c:1646  */
    {
    		node* n=add_child_neighbour((yyvsp[-4].object),(yyvsp[-3].value),(yyvsp[-2].object));
			copy_list(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;	
    	}
#line 3467 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 882 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3475 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 885 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3483 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 888 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3491 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 891 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3499 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 894 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_child_neighbour((yyvsp[-3].object),(yyvsp[-2].value),(yyvsp[0].object));
		}
#line 3507 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 897 "Parser.y" /* yacc.c:1646  */
    {
			node* n=add_child_neighbour((yyvsp[-4].object),(yyvsp[-3].value),(yyvsp[-2].object));
			copy_list(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;
		}
#line 3517 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 902 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-5].object),(yyvsp[-3].object),(yyvsp[-2].value),(yyvsp[0].object));
    	}
#line 3525 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 905 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-5].object),(yyvsp[-3].object),(yyvsp[-2].value),(yyvsp[0].object));
    	}
#line 3533 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 908 "Parser.y" /* yacc.c:1646  */
    {
    		node* n=add_child_neighbour((yyvsp[-6].object),(yyvsp[-4].object),(yyvsp[-3].value),(yyvsp[-2].object));
			copy_list(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;	
    	}
#line 3543 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 913 "Parser.y" /* yacc.c:1646  */
    {
    		node* n=add_child_neighbour((yyvsp[-6].object),(yyvsp[-4].object),(yyvsp[-3].value),(yyvsp[-2].object));
			copy_list(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;	
    	}
#line 3553 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 921 "Parser.y" /* yacc.c:1646  */
    {	(yyval.object)=add_start((yyvsp[0].value));
		}
#line 3560 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 923 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3568 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 926 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3576 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 929 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3584 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 932 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-2].value),(yyvsp[0].object));
		}
#line 3592 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 935 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-3].object),(yyvsp[-2].value),(yyvsp[0].object));
		}
#line 3600 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 938 "Parser.y" /* yacc.c:1646  */
    {
			node* n=add_neighbour((yyvsp[-3].value),(yyvsp[-2].object));
		  	copy_list(n->v,(yyvsp[0].object)->v);
    		(yyval.object)=n;			
		}
#line 3610 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 943 "Parser.y" /* yacc.c:1646  */
    { 
			node* n=add_child_neighbour((yyvsp[-4].object),(yyvsp[-3].value),(yyvsp[-2].object));
		  	copy_list(n->v,(yyvsp[0].object)->v);
    		(yyval.object)=n;
		}
#line 3620 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 950 "Parser.y" /* yacc.c:1646  */
    {	
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 3628 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 953 "Parser.y" /* yacc.c:1646  */
    {
	    	(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
    	}
#line 3636 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 956 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 3644 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 959 "Parser.y" /* yacc.c:1646  */
    {
	 	   	(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 3652 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 962 "Parser.y" /* yacc.c:1646  */
    {
	    	(yyval.object)=add_neighbour((yyvsp[-2].value),(yyvsp[0].object));
    	}
#line 3660 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 965 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-3].object),(yyvsp[-2].value),(yyvsp[0].object));
    	}
#line 3668 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 968 "Parser.y" /* yacc.c:1646  */
    {
	    	node *n=add_neighbour((yyvsp[-3].value),(yyvsp[-2].object));
  		  	copy_list(n->v,(yyvsp[0].object)->v);
    		(yyval.object)=n;
    	}
#line 3678 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 973 "Parser.y" /* yacc.c:1646  */
    {
 	 	  	node* n=add_child_neighbour((yyvsp[-4].object),(yyvsp[-3].value),(yyvsp[-2].object));
    		copy_list(n->v,(yyvsp[0].object)->v);
    		(yyval.object)=n;
    	}
#line 3688 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 980 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3696 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 983 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3704 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 986 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-2].object),(yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3712 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 989 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3720 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 992 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 3728 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 995 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3736 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 998 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 3744 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1001 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-3].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3752 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1004 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 3760 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1007 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3768 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1010 "Parser.y" /* yacc.c:1646  */
    {
			node* n=add_child_neighbour((yyvsp[-5].object),(yyvsp[-3].object),(yyvsp[-1].value),(yyvsp[0].object));
    		add_children(n->v[0],(yyvsp[-2].object)->v);
    		(yyval.object)=n;
		}
#line 3778 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1015 "Parser.y" /* yacc.c:1646  */
    {
			node* n=add_startChild((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[0].value));
    		add_children(n->v[0],(yyvsp[-1].object)->v);
    		(yyval.object)=n;	
		}
#line 3788 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1022 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3796 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1025 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 3804 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1030 "Parser.y" /* yacc.c:1646  */
    { 
			treeNode *ptr=(yyvsp[0].object)->v[0];
			add_attributes(ptr,(yyvsp[-2].value),(yyvsp[-1].value));
			(yyval.object)=(yyvsp[0].object);
		}
#line 3814 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1035 "Parser.y" /* yacc.c:1646  */
    { 	node *n = new node;
				vn v;
				treeNode *ptr=add_node("IMG");
				v.pb(ptr);
				copy_list(n->v,v);
				(yyval.object)=n;
		}
#line 3826 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1044 "Parser.y" /* yacc.c:1646  */
    {
			node  *n=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
			add_attributes(n->v[0],(yyvsp[-5].value),(yyvsp[-4].value));
			(yyval.object)=n;
		}
#line 3836 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1049 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3844 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1052 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3852 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1055 "Parser.y" /* yacc.c:1646  */
    {
			node *n=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
			add_attributes(n->v[0],(yyvsp[-4].value),(yyvsp[-3].value));
			(yyval.object)=n;
		}
#line 3862 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1060 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value)); 
   		}
#line 3870 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1063 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_start((yyvsp[0].value));
   		}
#line 3878 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1066 "Parser.y" /* yacc.c:1646  */
    {
			node *n=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
			add_attributes(n->v[0],(yyvsp[-4].value),(yyvsp[-3].value));
			(yyval.object)=n;
		}
#line 3888 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1071 "Parser.y" /* yacc.c:1646  */
    {
			node *n=add_start((yyvsp[0].value));
			add_attributes(n->v[0],(yyvsp[-3].value),(yyvsp[-2].value));
			(yyval.object)=n;
		}
#line 3898 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1078 "Parser.y" /* yacc.c:1646  */
    {
			node *n=add_start((yyvsp[0].value));
			add_attributes(n->v[0],(yyvsp[-3].value),(yyvsp[-2].value));
			(yyval.object)=n;
		}
#line 3908 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 1083 "Parser.y" /* yacc.c:1646  */
    {
			node *n=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
			add_attributes(n->v[0],(yyvsp[-4].value),(yyvsp[-3].value));
			(yyval.object)=n;
		}
#line 3918 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 1088 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3926 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 1091 "Parser.y" /* yacc.c:1646  */
    {
			node *n=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
			add_attributes(n->v[0],(yyvsp[-4].value),(yyvsp[-3].value));
			(yyval.object)=n;
		}
#line 3936 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 1096 "Parser.y" /* yacc.c:1646  */
    {
			node *n=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
			add_attributes(n->v[0],(yyvsp[-5].value),(yyvsp[-4].value));
			(yyval.object)=n;
		}
#line 3946 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 1101 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3954 "Parser.tab.c" /* yacc.c:1646  */
    break;


#line 3958 "Parser.tab.c" /* yacc.c:1646  */
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
#line 1106 "Parser.y" /* yacc.c:1906  */

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
