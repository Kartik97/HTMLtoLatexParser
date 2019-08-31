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
char* checkText(char *s);
char *switchChar(char *s,char x,string conv);
typedef vector<treeNode*> vn;
extern map<string,pair<string,string>> convertTag;
extern lexNode* convert(treeNode *node,int flag);
extern void writeTex(lexNode *root,string s);
extern void writeLex(lexNode *root);
extern void clearFile(string s);

#line 92 "Parser.tab.c" /* yacc.c:339  */

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
#line 28 "Parser.y" /* yacc.c:355  */

	node* object;
	char* value;

#line 198 "Parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 215 "Parser.tab.c" /* yacc.c:358  */

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
#define YYLAST   1638

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  236
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  420

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
       0,    66,    66,    81,    94,   110,   124,   143,   146,   151,
     154,   157,   161,   168,   175,   184,   187,   191,   198,   205,
     208,   211,   218,   227,   230,   234,   241,   247,   250,   253,
     260,   269,   278,   287,   290,   300,   311,   314,   320,   326,
     333,   336,   345,   363,   368,   371,   374,   377,   382,   400,
     405,   406,   407,   408,   426,   429,   432,   435,   438,   441,
     444,   447,   452,   455,   458,   461,   466,   469,   472,   475,
     478,   481,   486,   489,   497,   500,   503,   506,   509,   512,
     515,   520,   525,   530,   533,   538,   543,   548,   551,   556,
     559,   564,   567,   570,   575,   580,   585,   588,   591,   594,
     597,   600,   603,   606,   609,   612,   617,   620,   623,   626,
     629,   634,   638,   641,   646,   649,   652,   657,   660,   665,
     668,   671,   674,   679,   682,   685,   688,   691,   694,   697,
     700,   703,   706,   709,   712,   717,   720,   725,   730,   733,
     740,   743,   746,   749,   752,   755,   760,   763,   770,   773,
     776,   779,   784,   787,   790,   793,   796,   799,   802,   805,
     808,   811,   814,   817,   822,   825,   828,   833,   836,   839,
     842,   845,   848,   851,   854,   857,   860,   865,   868,   871,
     876,   881,   884,   887,   890,   893,   896,   901,   904,   907,
     912,   920,   922,   925,   928,   931,   934,   937,   942,   949,
     952,   955,   958,   961,   964,   967,   972,   979,   982,   985,
     988,   991,   994,   997,  1000,  1003,  1006,  1009,  1014,  1021,
    1024,  1029,  1034,  1043,  1048,  1051,  1054,  1059,  1062,  1065,
    1070,  1077,  1082,  1087,  1090,  1095,  1100
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
  "CENTEROP", "CENTERCL", "$accept", "st", "html", "head", "title", "body",
  "misctop", "consumetop", "misctext", "consumetext", "misc", "consume",
  "miscph", "consumeph", "flow", "center", "phraseopen", "phrases", "phr",
  "fontph", "atagph", "gtph", "centerph", "list", "listitem", "div", "dl",
  "dt", "dd", "caption", "table", "tr", "th", "td", "figure", "figcap",
  "img", "atag", "font", YY_NULLPTR
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
       6,    31,    10,  -291,    42,  -291,    11,    10,    13,  -291,
      18,    20,  -291,    -1,    10,  -291,  -291,  -291,     9,    40,
      29,   407,    49,    34,    44,    10,     8,  -291,    -7,  -291,
    -291,    86,  -291,  -291,    87,    -7,   744,  1266,  -291,    12,
     792,    -5,    96,   594,   770,   535,   473,  -291,  -291,  -291,
     669,  1246,    48,    -7,   691,  -291,    58,    85,  -291,    10,
      -7,    -7,  -291,    -7,   104,    -7,  1246,   342,    75,   109,
     171,  -291,  -291,   923,  -291,    66,   744,  1246,  1300,    82,
    -291,   837,   103,  -291,  1246,   107,  -291,   112,  -291,  -291,
     117,  1246,  -291,  1246,   855,  -291,  1478,  -291,  1246,   900,
     110,  -291,   792,  1246,   945,  1462,  -291,  1246,   990,   605,
    1451,  -291,  1246,    50,  -291,  -291,    -7,    -7,    -7,   140,
    -291,  -291,  -291,    -7,    -7,    -7,  -291,  1417,  1349,   138,
    -291,   281,   132,  -291,   136,  1417,  -291,   744,  -291,   725,
     100,  -291,  1246,   342,  -291,  1246,   144,  -291,   744,  1246,
    1246,  1246,   141,   148,  -291,  1246,    -5,   145,   143,  -291,
    -291,   152,   594,  1246,   855,  -291,  -291,  -291,   149,  1008,
    1246,   900,   130,  -291,   135,   137,   150,   792,  1246,   945,
    -291,   804,   147,    74,   162,  1053,  1071,   848,   146,  1246,
     990,   605,  -291,  1246,    -7,    -7,    -7,    -7,  1435,  -291,
    1417,  -291,   744,  -291,  1315,   172,   179,   174,  1383,   170,
     153,   744,  -291,  -291,  -291,  -291,  -291,  1246,   191,  -291,
    -291,  -291,  1246,  1116,  -291,  -291,  1134,  1246,  -291,  -291,
    -291,   594,  -291,  1246,   185,  -291,  1179,  1246,  1201,   196,
    1246,   183,  -291,   184,   804,   804,  1246,   605,   605,   215,
     126,   176,   190,   936,   180,   194,  1001,  1053,  1071,  1246,
    -291,    90,   189,  -291,    -7,  1435,  -291,   224,   744,  -291,
    -291,  1326,  1392,  -291,  -291,  -291,   186,  -291,  1246,  -291,
    1246,   228,  1246,   220,  -291,  -291,  -291,  1246,  1246,   219,
    -291,   288,   214,   222,  1201,  1064,  -291,  1246,  1246,   804,
    -291,   216,  -291,   605,  1053,   422,  1127,  1194,  1071,  1253,
    1361,  1410,   605,  1490,   210,   218,  -291,  1246,   605,  1246,
    -291,   244,   744,  -291,  1374,   248,  -291,  1426,   242,  -291,
    -291,  -291,  1246,  -291,  1246,  -291,  -291,  1246,  1201,  1335,
    1469,   945,   233,  1201,  -291,  -291,  1246,  -291,  -291,  1053,
    1053,  1496,   605,  1511,  -291,  1071,  1071,  1517,   605,  1531,
    -291,   605,  1535,  1545,  -291,   229,  -291,  -291,   257,   744,
    -291,  -291,  -291,  -291,  -291,  -291,  -291,  -291,  1201,  1201,
    1556,  -291,   945,  -291,  -291,  -291,  -291,  1053,  -291,   605,
    -291,  -291,  1071,  -291,   605,  -291,   605,  1570,   605,  1580,
    1246,  -291,   258,  -291,  -291,  1201,  -291,  -291,  -291,  -291,
    -291,  -291,   605,  -291,   605,  -291,  -291,  -291,  -291,  -291
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
    -291,  -291,    25,  -291,   256,  -291,   477,   638,    -6,   250,
     245,   164,   -71,   -29,   -21,  -291,   -36,   -24,   142,  -291,
    -291,  -291,  -291,  -156,   125,   -97,  -291,  -178,  -290,   102,
    -291,   221,  -233,  -247,  -291,   123,   154,  -291,  -291
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
      52,   243,   144,    25,   342,   172,   229,   144,    78,     1,
       2,   315,    59,    79,    13,    14,     8,    87,    28,    85,
      17,    18,    88,   100,   314,    62,    24,    29,    21,   113,
     115,    81,    16,   119,    82,     7,    33,    34,   128,    27,
     146,   139,    12,   129,    54,   126,   140,    32,   377,     3,
      58,    55,    18,   383,    53,     3,   147,   144,    62,   116,
     152,   354,     3,   154,     3,   120,     3,     3,   144,     3,
     158,   348,   159,   161,     3,   285,     3,   166,   168,   145,
     241,    85,   173,   175,   122,     3,   180,   182,   403,   404,
       3,   192,   121,    34,   131,    61,    63,   132,   198,   150,
       3,   210,   204,   199,    29,    29,   208,   205,   390,   391,
     193,   209,   218,   125,   128,   417,   385,   386,    90,   129,
     246,   214,    29,   247,   216,    91,   153,   144,   219,   220,
     221,   134,   155,   144,   224,   156,   317,   144,   135,   318,
     157,     3,   230,   161,    38,   409,   170,   171,   234,   235,
     168,   196,    41,   201,   407,   206,    85,   242,   175,   207,
     213,   217,   222,   381,   251,   254,   267,   223,   260,   182,
     237,   265,   263,   227,   226,   276,   266,   304,   238,   239,
      38,    47,    48,   137,    49,    67,   228,   232,    41,    38,
     240,    68,   259,   270,   144,   245,   277,    41,   271,    69,
     274,   279,   281,   272,   406,   283,   284,    96,   278,   105,
     110,   248,   286,   275,    38,   289,   290,    47,    48,   296,
      49,   287,    41,   297,   298,   300,    47,    48,   306,    49,
      70,   138,   321,    38,   310,   319,   251,   254,   316,   294,
     307,    41,   324,   327,   311,   320,   329,   325,   328,   332,
     334,    47,    48,   144,    49,   337,   144,   330,   340,   331,
     362,   333,   346,   341,   303,   367,   335,   336,   363,   371,
      47,    48,   373,    49,   382,   400,   344,   345,   401,   416,
      56,    71,    71,   251,    64,   215,   368,   254,    95,   231,
      95,    95,   261,   202,   236,    67,   364,     0,   366,    38,
       0,    68,   203,     0,     0,     0,    38,    41,     0,    69,
     225,   374,    71,   375,    41,    71,   376,     0,    71,     0,
     175,    71,     0,    71,     0,   384,    96,     0,   251,   251,
       0,   338,     0,   402,   254,   254,    47,    48,     0,    49,
      70,   165,     0,    47,    48,   244,    49,     0,   249,     0,
     165,     0,     0,     0,    95,   165,    67,   127,     0,     0,
      38,   175,    68,     0,     0,     0,   251,     0,    41,     0,
      69,   254,    71,    71,     0,     0,    71,     0,     0,   415,
      71,     0,    71,     0,    71,     0,     0,     0,    71,     0,
       0,     0,     0,    71,     0,    96,     0,    47,    48,     0,
      49,    70,     0,   295,     0,     0,     0,    95,     0,   299,
       0,     0,   262,     0,   305,     0,     0,   309,    35,    36,
     313,     0,     0,    37,     0,    38,    95,    39,     0,    95,
       0,    40,   165,    41,     0,    42,    95,     0,    43,     0,
      38,     0,    44,    71,     0,    71,    45,    71,    41,    71,
       0,     0,    46,    71,     0,   339,    71,     0,     0,     0,
       0,     0,    47,    48,     0,    49,    50,     0,   301,   302,
     351,   353,     0,   349,   357,   359,    95,    47,    48,     0,
      49,     0,     0,    15,    95,     0,     0,     0,    15,   165,
      95,    38,    95,    95,   165,    95,     0,    15,    95,    41,
      15,    95,     0,    15,   380,     0,     0,     0,     0,     0,
      71,     0,     0,    71,     0,     0,    71,    71,     0,   107,
     108,     0,   109,     0,   347,     0,   397,   399,    47,    48,
       0,    49,     0,   360,    15,     0,    95,    15,     0,   365,
     165,     0,    15,     0,   165,     0,     0,     0,    95,     0,
     165,    95,    95,    38,   165,    95,    95,    95,   165,   102,
       0,    41,     0,    95,     0,     0,     0,    71,     0,    71,
       0,     0,    71,   388,     0,   103,   104,     0,     0,   393,
       0,     0,   395,     0,   165,    95,     0,     0,     0,     0,
      47,    48,     0,    49,    15,     0,   165,    95,   165,     0,
      15,    15,   165,    95,   165,     0,    95,    95,    95,     0,
     408,     0,    38,     0,    71,   410,     0,   411,     0,   413,
      41,     0,     0,    38,     0,   165,    93,    94,     0,     0,
       0,    41,     0,   418,    95,   419,     0,     0,     6,    95,
       0,    95,   165,    95,   165,     0,    20,     0,    23,    47,
      48,    26,    49,     0,     0,   184,   185,    95,   186,    95,
      47,    48,    57,    49,     0,     0,    60,     0,     0,     0,
       0,    15,    15,    65,    15,     0,     0,     0,     0,     0,
       0,    36,     0,     0,     0,    37,     0,    38,     0,    39,
       0,   117,     0,    40,     0,    41,     0,    42,     0,   123,
      43,   124,   118,    36,    44,     0,     0,    37,    45,    38,
       0,    39,     0,     0,    46,    40,     0,    41,     0,    42,
       0,     0,    43,     0,    47,    48,    44,    49,    50,   112,
      45,     0,     0,     0,     0,     0,    46,   211,     0,   143,
       0,    15,     0,    38,     0,    68,    47,    48,     0,    49,
      50,    41,     0,    69,   194,     0,   195,    66,    67,     0,
       0,     0,    38,   197,    68,     0,     0,     0,     0,     0,
      41,     0,    69,     0,     0,     0,     0,     0,     0,     0,
      47,    48,    36,    49,    70,   212,    37,     0,    38,     0,
      39,     0,     0,     0,    40,     0,    41,     0,    42,    47,
      48,    43,    49,    70,    36,    44,    98,    99,    37,    45,
      38,     0,    39,     0,     0,    46,    40,    84,    41,     0,
      42,     0,    38,    43,     0,    47,    48,    44,    49,    50,
      41,    45,     0,     0,   264,     0,     0,    46,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    47,    48,    36,
      49,    50,     0,    37,     0,    38,     0,    39,   151,    47,
      48,    40,    49,    41,     0,    42,    38,    36,    43,     0,
       0,    37,    44,    38,    41,    39,    45,     0,     0,    40,
       0,    41,    46,    42,     0,     0,    43,     0,     0,   160,
      44,     0,    47,    48,    45,    49,    50,     0,   256,   257,
      46,   258,     0,    47,    48,     0,    49,     0,     0,     0,
      47,    48,    36,    49,    50,     0,    37,     0,    38,     0,
      39,     0,     0,     0,    40,     0,    41,     0,    42,     0,
       0,    43,     0,     0,     0,    44,   142,   143,   167,    45,
       0,    38,     0,    68,     0,    46,     0,     0,     0,    41,
       0,    69,     0,     0,    38,    47,    48,    36,    49,    50,
       0,    37,    41,    38,     0,    39,     0,     0,     0,    40,
       0,    41,     0,    42,     0,     0,    43,     0,    47,    48,
      44,    49,    70,     0,    45,     0,     0,   174,     0,   308,
      46,    47,    48,     0,    49,     0,     0,     0,     0,     0,
      47,    48,    36,    49,    50,     0,    37,     0,    38,     0,
      39,     0,     0,     0,    40,     0,    41,     0,    42,    38,
      36,    43,     0,     0,    37,    44,    38,    41,    39,    45,
       0,     0,    40,     0,    41,    46,    42,     0,   181,    43,
       0,     0,     0,    44,   233,    47,    48,    45,    49,    50,
     312,     0,     0,    46,     0,     0,    47,    48,     0,    49,
       0,     0,     0,    47,    48,    36,    49,    50,     0,    37,
       0,    38,     0,    39,     0,     0,     0,    40,     0,    41,
       0,    42,    38,    36,    43,     0,     0,    37,    44,    38,
      41,    39,    45,     0,     0,    40,     0,    41,    46,    42,
       0,     0,    43,     0,     0,   250,    44,   343,    47,    48,
      45,    49,    50,     0,     0,     0,    46,     0,     0,    47,
      48,     0,    49,     0,     0,   253,    47,    48,    36,    49,
      50,     0,    37,     0,    38,     0,    39,   280,     0,     0,
      40,     0,    41,     0,    42,    38,    36,    43,     0,     0,
      37,    44,    38,    41,    39,    45,     0,     0,    40,     0,
      41,    46,    42,     0,   282,    43,     0,     0,     0,    44,
       0,    47,    48,    45,    49,    50,     0,     0,   350,    46,
       0,     0,    47,    48,     0,    49,     0,     0,     0,    47,
      48,    36,    49,    50,     0,    37,     0,    38,     0,    39,
       0,     0,     0,    40,     0,    41,     0,    42,     0,     0,
      43,     0,    38,    36,    44,   288,     0,    37,    45,    38,
      41,    39,     0,     0,    46,    40,     0,    41,     0,    42,
       0,     0,    43,     0,    47,    48,    44,    49,    50,     0,
      45,     0,     0,   352,     0,   291,    46,     0,     0,    47,
      48,     0,    49,     0,     0,     0,    47,    48,    36,    49,
      50,     0,    37,     0,    38,     0,    39,     0,     0,     0,
      40,    38,    41,     0,    42,     0,     0,    43,    76,    41,
      67,    44,     0,    77,    38,    45,    68,     0,     0,     0,
       0,    46,    41,     0,    69,     0,     0,     0,     0,     0,
       0,    47,    48,     0,    49,    50,   355,     0,    47,    48,
       0,    49,   148,     0,   143,     0,     0,   149,    38,     0,
      68,    47,    48,     0,    49,    70,    41,   268,    69,   143,
       0,     0,     0,    38,     0,    68,   269,     0,   322,     0,
      67,    41,     0,    69,    38,     0,    68,   323,     0,     0,
       0,     0,    41,    38,    69,    47,    48,     0,    49,    70,
       0,    41,     0,   143,   200,     0,     0,    38,     0,    68,
      47,    48,     0,    49,    70,    41,     0,    69,   378,    38,
       0,    47,    48,     0,    49,    70,   369,    41,   143,     0,
      47,    48,    38,    49,    68,   370,     0,   143,     0,     0,
      41,    38,    69,    68,    47,    48,    67,    49,    70,    41,
      38,    69,    68,   273,   356,     0,    47,    48,    41,    49,
      69,     0,   326,     0,     0,     0,     0,     0,    38,    47,
      48,    67,    49,    70,     0,    38,    41,    68,    47,    48,
     143,    49,    70,    41,    38,    69,    68,    47,    48,   143,
      49,    70,    41,    38,    69,    68,   372,     0,     0,   358,
       0,    41,     0,    69,     0,    47,    48,     0,    49,    38,
       0,     0,    47,    48,     0,    49,    70,    41,     0,     0,
      38,    47,    48,     0,    49,    70,   177,    38,    41,     0,
      47,    48,     0,    49,    70,    41,    38,   189,   190,     0,
     191,     0,   178,   179,    41,     0,    47,    48,    38,    49,
     163,   164,   379,     0,    38,     0,    41,    47,    48,     0,
      49,     0,    41,     0,    47,    48,     0,    49,     0,    38,
       0,     0,     0,    47,    48,    38,    49,    41,     0,   361,
       0,     0,     0,    41,     0,    47,    48,   387,    49,    38,
       0,    47,    48,    38,    49,     0,     0,    41,     0,     0,
     389,    41,     0,    38,     0,     0,    47,    48,     0,    49,
     392,    41,    47,    48,    38,    49,     0,     0,     0,     0,
     394,     0,    41,     0,   396,     0,    47,    48,    38,    49,
      47,    48,     0,    49,   398,     0,    41,     0,    38,   405,
      47,    48,     0,    49,     0,     0,    41,     0,     0,     0,
       0,    47,    48,     0,    49,     0,     0,     0,     0,   412,
       0,     0,     0,     0,     0,    47,    48,     0,    49,   414,
       0,     0,     0,     0,     0,    47,    48,     0,    49
};

static const yytype_int16 yycheck[] =
{
      21,   179,    73,     4,   294,   102,   162,    78,    37,     3,
       4,   258,     4,    37,     3,     4,     6,    22,     9,    40,
       7,     8,    27,    44,   257,    31,     6,    18,    10,    50,
      51,    19,     7,    54,    22,     4,     7,     8,    67,    14,
      76,    70,     0,    67,    10,    66,    70,     7,   338,    56,
      25,     7,     8,   343,     5,    56,    77,   128,    64,    11,
      81,   308,    56,    84,    56,     7,    56,    56,   139,    56,
      91,   304,    93,    94,    56,   231,    56,    98,    99,    13,
     177,   102,   103,   104,    59,    56,   107,   108,   378,   379,
      56,   112,     7,     8,    19,     9,     9,    22,   127,    17,
      56,   137,   131,   127,    18,    18,   135,   131,   355,   356,
      60,   135,   148,     9,   143,   405,   349,   350,    22,   143,
      46,   142,    18,    49,   145,    29,    23,   198,   149,   150,
     151,    22,    25,   204,   155,    23,    46,   208,    29,    49,
      23,    56,   163,   164,    18,   392,    36,    37,   169,   170,
     171,    11,    26,    15,   387,    23,   177,   178,   179,    23,
      60,    17,    21,   341,   185,   186,   202,    19,   189,   190,
      40,   200,   193,    30,    29,   211,   200,    51,    43,    42,
      18,    55,    56,    12,    58,    14,    34,    38,    26,    18,
      40,    20,    46,    21,   265,    48,   217,    26,    19,    28,
      30,   222,   223,    29,   382,   226,   227,    43,    17,    45,
      46,    49,   233,    60,    18,   236,   237,    55,    56,   240,
      58,    36,    26,    40,    40,   246,    55,    56,    52,    58,
      59,    60,   268,    18,    54,    46,   257,   258,   259,    43,
      50,    26,   271,   272,    50,    21,    60,   271,   272,    21,
      30,    55,    56,   324,    58,    36,   327,   278,    44,   280,
      50,   282,    46,    41,    49,    21,   287,   288,    50,    21,
      55,    56,    30,    58,    41,    46,   297,   298,    21,    21,
      24,    36,    37,   304,    34,   143,   322,   308,    43,   164,
      45,    46,   190,    12,   171,    14,   317,    -1,   319,    18,
      -1,    20,    21,    -1,    -1,    -1,    18,    26,    -1,    28,
     156,   332,    67,   334,    26,    70,   337,    -1,    73,    -1,
     341,    76,    -1,    78,    -1,   346,   162,    -1,   349,   350,
      -1,    43,    -1,   369,   355,   356,    55,    56,    -1,    58,
      59,    96,    -1,    55,    56,   181,    58,    -1,   184,    -1,
     105,    -1,    -1,    -1,   109,   110,    14,    15,    -1,    -1,
      18,   382,    20,    -1,    -1,    -1,   387,    -1,    26,    -1,
      28,   392,   127,   128,    -1,    -1,   131,    -1,    -1,   400,
     135,    -1,   137,    -1,   139,    -1,    -1,    -1,   143,    -1,
      -1,    -1,    -1,   148,    -1,   231,    -1,    55,    56,    -1,
      58,    59,    -1,   239,    -1,    -1,    -1,   162,    -1,   245,
      -1,    -1,   191,    -1,   250,    -1,    -1,   253,    11,    12,
     256,    -1,    -1,    16,    -1,    18,   181,    20,    -1,   184,
      -1,    24,   187,    26,    -1,    28,   191,    -1,    31,    -1,
      18,    -1,    35,   198,    -1,   200,    39,   202,    26,   204,
      -1,    -1,    45,   208,    -1,   291,   211,    -1,    -1,    -1,
      -1,    -1,    55,    56,    -1,    58,    59,    -1,   247,   248,
     306,   307,    -1,    51,   310,   311,   231,    55,    56,    -1,
      58,    -1,    -1,     6,   239,    -1,    -1,    -1,    11,   244,
     245,    18,   247,   248,   249,   250,    -1,    20,   253,    26,
      23,   256,    -1,    26,   340,    -1,    -1,    -1,    -1,    -1,
     265,    -1,    -1,   268,    -1,    -1,   271,   272,    -1,    46,
      47,    -1,    49,    -1,   303,    -1,   362,   363,    55,    56,
      -1,    58,    -1,   312,    57,    -1,   291,    60,    -1,   318,
     295,    -1,    65,    -1,   299,    -1,    -1,    -1,   303,    -1,
     305,   306,   307,    18,   309,   310,   311,   312,   313,    24,
      -1,    26,    -1,   318,    -1,    -1,    -1,   322,    -1,   324,
      -1,    -1,   327,   352,    -1,    40,    41,    -1,    -1,   358,
      -1,    -1,   361,    -1,   339,   340,    -1,    -1,    -1,    -1,
      55,    56,    -1,    58,   117,    -1,   351,   352,   353,    -1,
     123,   124,   357,   358,   359,    -1,   361,   362,   363,    -1,
     389,    -1,    18,    -1,   369,   394,    -1,   396,    -1,   398,
      26,    -1,    -1,    18,    -1,   380,    32,    33,    -1,    -1,
      -1,    26,    -1,   412,   389,   414,    -1,    -1,     0,   394,
      -1,   396,   397,   398,   399,    -1,     8,    -1,    10,    55,
      56,    13,    58,    -1,    -1,    50,    51,   412,    53,   414,
      55,    56,    24,    58,    -1,    -1,    28,    -1,    -1,    -1,
      -1,   194,   195,    35,   197,    -1,    -1,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    16,    -1,    18,    -1,    20,
      -1,    53,    -1,    24,    -1,    26,    -1,    28,    -1,    61,
      31,    63,    11,    12,    35,    -1,    -1,    16,    39,    18,
      -1,    20,    -1,    -1,    45,    24,    -1,    26,    -1,    28,
      -1,    -1,    31,    -1,    55,    56,    35,    58,    59,    60,
      39,    -1,    -1,    -1,    -1,    -1,    45,    12,    -1,    14,
      -1,   264,    -1,    18,    -1,    20,    55,    56,    -1,    58,
      59,    26,    -1,    28,   116,    -1,   118,    13,    14,    -1,
      -1,    -1,    18,   125,    20,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    56,    12,    58,    59,    60,    16,    -1,    18,    -1,
      20,    -1,    -1,    -1,    24,    -1,    26,    -1,    28,    55,
      56,    31,    58,    59,    12,    35,    36,    37,    16,    39,
      18,    -1,    20,    -1,    -1,    45,    24,    25,    26,    -1,
      28,    -1,    18,    31,    -1,    55,    56,    35,    58,    59,
      26,    39,    -1,    -1,   196,    -1,    -1,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    12,
      58,    59,    -1,    16,    -1,    18,    -1,    20,    21,    55,
      56,    24,    58,    26,    -1,    28,    18,    12,    31,    -1,
      -1,    16,    35,    18,    26,    20,    39,    -1,    -1,    24,
      -1,    26,    45,    28,    -1,    -1,    31,    -1,    -1,    34,
      35,    -1,    55,    56,    39,    58,    59,    -1,    50,    51,
      45,    53,    -1,    55,    56,    -1,    58,    -1,    -1,    -1,
      55,    56,    12,    58,    59,    -1,    16,    -1,    18,    -1,
      20,    -1,    -1,    -1,    24,    -1,    26,    -1,    28,    -1,
      -1,    31,    -1,    -1,    -1,    35,    13,    14,    38,    39,
      -1,    18,    -1,    20,    -1,    45,    -1,    -1,    -1,    26,
      -1,    28,    -1,    -1,    18,    55,    56,    12,    58,    59,
      -1,    16,    26,    18,    -1,    20,    -1,    -1,    -1,    24,
      -1,    26,    -1,    28,    -1,    -1,    31,    -1,    55,    56,
      35,    58,    59,    -1,    39,    -1,    -1,    42,    -1,    53,
      45,    55,    56,    -1,    58,    -1,    -1,    -1,    -1,    -1,
      55,    56,    12,    58,    59,    -1,    16,    -1,    18,    -1,
      20,    -1,    -1,    -1,    24,    -1,    26,    -1,    28,    18,
      12,    31,    -1,    -1,    16,    35,    18,    26,    20,    39,
      -1,    -1,    24,    -1,    26,    45,    28,    -1,    48,    31,
      -1,    -1,    -1,    35,    36,    55,    56,    39,    58,    59,
      49,    -1,    -1,    45,    -1,    -1,    55,    56,    -1,    58,
      -1,    -1,    -1,    55,    56,    12,    58,    59,    -1,    16,
      -1,    18,    -1,    20,    -1,    -1,    -1,    24,    -1,    26,
      -1,    28,    18,    12,    31,    -1,    -1,    16,    35,    18,
      26,    20,    39,    -1,    -1,    24,    -1,    26,    45,    28,
      -1,    -1,    31,    -1,    -1,    52,    35,    43,    55,    56,
      39,    58,    59,    -1,    -1,    -1,    45,    -1,    -1,    55,
      56,    -1,    58,    -1,    -1,    54,    55,    56,    12,    58,
      59,    -1,    16,    -1,    18,    -1,    20,    21,    -1,    -1,
      24,    -1,    26,    -1,    28,    18,    12,    31,    -1,    -1,
      16,    35,    18,    26,    20,    39,    -1,    -1,    24,    -1,
      26,    45,    28,    -1,    30,    31,    -1,    -1,    -1,    35,
      -1,    55,    56,    39,    58,    59,    -1,    -1,    51,    45,
      -1,    -1,    55,    56,    -1,    58,    -1,    -1,    -1,    55,
      56,    12,    58,    59,    -1,    16,    -1,    18,    -1,    20,
      -1,    -1,    -1,    24,    -1,    26,    -1,    28,    -1,    -1,
      31,    -1,    18,    12,    35,    36,    -1,    16,    39,    18,
      26,    20,    -1,    -1,    45,    24,    -1,    26,    -1,    28,
      -1,    -1,    31,    -1,    55,    56,    35,    58,    59,    -1,
      39,    -1,    -1,    49,    -1,    44,    45,    -1,    -1,    55,
      56,    -1,    58,    -1,    -1,    -1,    55,    56,    12,    58,
      59,    -1,    16,    -1,    18,    -1,    20,    -1,    -1,    -1,
      24,    18,    26,    -1,    28,    -1,    -1,    31,    12,    26,
      14,    35,    -1,    17,    18,    39,    20,    -1,    -1,    -1,
      -1,    45,    26,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56,    -1,    58,    59,    53,    -1,    55,    56,
      -1,    58,    12,    -1,    14,    -1,    -1,    17,    18,    -1,
      20,    55,    56,    -1,    58,    59,    26,    12,    28,    14,
      -1,    -1,    -1,    18,    -1,    20,    21,    -1,    12,    -1,
      14,    26,    -1,    28,    18,    -1,    20,    21,    -1,    -1,
      -1,    -1,    26,    18,    28,    55,    56,    -1,    58,    59,
      -1,    26,    -1,    14,    15,    -1,    -1,    18,    -1,    20,
      55,    56,    -1,    58,    59,    26,    -1,    28,    43,    18,
      -1,    55,    56,    -1,    58,    59,    12,    26,    14,    -1,
      55,    56,    18,    58,    20,    21,    -1,    14,    -1,    -1,
      26,    18,    28,    20,    55,    56,    14,    58,    59,    26,
      18,    28,    20,    30,    53,    -1,    55,    56,    26,    58,
      28,    -1,    30,    -1,    -1,    -1,    -1,    -1,    18,    55,
      56,    14,    58,    59,    -1,    18,    26,    20,    55,    56,
      14,    58,    59,    26,    18,    28,    20,    55,    56,    14,
      58,    59,    26,    18,    28,    20,    30,    -1,    -1,    49,
      -1,    26,    -1,    28,    -1,    55,    56,    -1,    58,    18,
      -1,    -1,    55,    56,    -1,    58,    59,    26,    -1,    -1,
      18,    55,    56,    -1,    58,    59,    24,    18,    26,    -1,
      55,    56,    -1,    58,    59,    26,    18,    46,    47,    -1,
      49,    -1,    40,    41,    26,    -1,    55,    56,    18,    58,
      32,    33,    43,    -1,    18,    -1,    26,    55,    56,    -1,
      58,    -1,    26,    -1,    55,    56,    -1,    58,    -1,    18,
      -1,    -1,    -1,    55,    56,    18,    58,    26,    -1,    49,
      -1,    -1,    -1,    26,    -1,    55,    56,    51,    58,    18,
      -1,    55,    56,    18,    58,    -1,    -1,    26,    -1,    -1,
      49,    26,    -1,    18,    -1,    -1,    55,    56,    -1,    58,
      53,    26,    55,    56,    18,    58,    -1,    -1,    -1,    -1,
      49,    -1,    26,    -1,    49,    -1,    55,    56,    18,    58,
      55,    56,    -1,    58,    49,    -1,    26,    -1,    18,    43,
      55,    56,    -1,    58,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    55,    56,    -1,    58,    -1,    -1,    -1,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    58,    49,
      -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    58
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,    56,    62,    67,    68,     4,     6,    63,
      64,    68,     0,     3,     4,    67,    63,     7,     8,    65,
      68,    10,    66,    68,     6,     4,    68,    63,     9,    18,
      69,    70,     7,     7,     8,    11,    12,    16,    18,    20,
      24,    26,    28,    31,    35,    39,    45,    55,    56,    58,
      59,    71,    75,     5,    10,     7,    65,    68,    63,     4,
      68,     9,    69,     9,    70,    68,    13,    14,    20,    28,
      59,    71,    73,    74,    77,    78,    12,    17,    74,    78,
      82,    19,    22,    98,    25,    75,    86,    22,    27,    97,
      22,    29,    99,    32,    33,    71,    72,    84,    36,    37,
      75,    95,    24,    40,    41,    72,    87,    46,    47,    49,
      72,    91,    60,    75,    76,    75,    11,    68,    11,    75,
       7,     7,    63,    68,    68,     9,    75,    15,    74,    78,
      79,    19,    22,    81,    22,    29,    80,    12,    60,    74,
      78,    83,    13,    14,    73,    13,    77,    75,    12,    17,
      17,    21,    75,    23,    75,    25,    23,    23,    75,    75,
      34,    75,    85,    32,    33,    71,    75,    38,    75,    96,
      36,    37,    86,    75,    42,    75,    88,    24,    40,    41,
      75,    48,    75,    90,    50,    51,    53,    72,    92,    46,
      47,    49,    75,    60,    68,    68,    11,    68,    74,    78,
      15,    15,    12,    21,    74,    78,    23,    23,    74,    78,
      77,    12,    60,    60,    75,    79,    75,    17,    77,    75,
      75,    75,    21,    19,    75,    97,    29,    30,    34,    84,
      75,    85,    38,    36,    75,    75,    96,    40,    43,    42,
      40,    86,    75,    88,    72,    48,    46,    49,    49,    72,
      52,    75,    93,    54,    75,    94,    50,    51,    53,    46,
      75,    90,    92,    75,    68,    74,    78,    77,    12,    21,
      21,    19,    29,    30,    30,    60,    77,    75,    17,    75,
      21,    75,    30,    75,    75,    84,    75,    36,    36,    75,
      75,    44,    75,    89,    43,    72,    75,    40,    40,    72,
      75,    92,    92,    49,    51,    72,    52,    50,    53,    72,
      54,    50,    49,    72,    93,    94,    75,    46,    49,    46,
      21,    77,    12,    21,    74,    78,    30,    74,    78,    60,
      75,    75,    21,    75,    30,    75,    75,    36,    43,    72,
      44,    41,    89,    43,    75,    75,    46,    92,    93,    51,
      51,    72,    49,    72,    94,    53,    53,    72,    49,    72,
      92,    49,    50,    50,    75,    92,    75,    21,    77,    12,
      21,    21,    30,    30,    75,    75,    75,    89,    43,    43,
      72,    88,    41,    89,    75,    93,    93,    51,    92,    49,
      94,    94,    53,    92,    49,    92,    49,    72,    49,    72,
      46,    21,    77,    89,    89,    43,    88,    93,    92,    94,
      92,    92,    49,    92,    49,    75,    21,    89,    92,    92
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    61,    62,    62,    62,    62,    62,    63,    63,    64,
      64,    64,    64,    64,    64,    65,    65,    65,    65,    65,
      65,    65,    65,    66,    66,    66,    66,    66,    66,    66,
      66,    67,    68,    68,    69,    70,    70,    71,    71,    71,
      71,    71,    72,    72,    73,    73,    73,    73,    74,    74,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    76,    76,    76,    76,    77,    77,    77,    77,
      77,    77,    78,    78,    79,    79,    79,    79,    79,    79,
      79,    80,    80,    80,    80,    80,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    83,    83,    83,    83,
      83,    84,    84,    84,    84,    84,    84,    85,    85,    86,
      86,    86,    86,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    88,    88,    88,    88,    88,
      89,    89,    89,    89,    89,    89,    89,    89,    90,    90,
      90,    90,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    93,    93,    93,    93,    93,    93,    93,    93,    94,
      94,    94,    94,    94,    94,    94,    94,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    96,
      96,    97,    97,    98,    98,    98,    98,    98,    98,    98,
      98,    99,    99,    99,    99,    99,    99
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
#line 66 "Parser.y" /* yacc.c:1646  */
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
#line 1842 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 81 "Parser.y" /* yacc.c:1646  */
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
#line 1860 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 94 "Parser.y" /* yacc.c:1646  */
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
#line 1881 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 110 "Parser.y" /* yacc.c:1646  */
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
#line 1900 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 124 "Parser.y" /* yacc.c:1646  */
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
#line 1922 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 143 "Parser.y" /* yacc.c:1646  */
    {
				(yyval.object)=add_startChild((yyvsp[-2].object),(yyvsp[-1].object),(yyvsp[0].value));
	}
#line 1930 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 146 "Parser.y" /* yacc.c:1646  */
    {
				(yyval.object)=add_child_neighbour((yyvsp[-3].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
	}
#line 1938 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 151 "Parser.y" /* yacc.c:1646  */
    { 
				(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
			}
#line 1946 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 154 "Parser.y" /* yacc.c:1646  */
    { 
				(yyval.object)=add_start((yyvsp[0].value));
			}
#line 1954 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 157 "Parser.y" /* yacc.c:1646  */
    {
				(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
			}
#line 1962 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 161 "Parser.y" /* yacc.c:1646  */
    { 
				node *ptr=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
				node *n=new node;
				copy_list(n->v,(yyvsp[-3].object)->v);
				copy_list(n->v,ptr->v);
				(yyval.object)=n;
			}
#line 1974 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 168 "Parser.y" /* yacc.c:1646  */
    { 
				node *ptr=add_start((yyvsp[0].value));
				node *n=new node;
				copy_list(n->v,(yyvsp[-2].object)->v);
				copy_list(n->v,ptr->v);
				(yyval.object)=n;
			}
#line 1986 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 175 "Parser.y" /* yacc.c:1646  */
    {
				node *ptr=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
				node *n=new node;
				copy_list(n->v,(yyvsp[-3].object)->v);
				copy_list(n->v,ptr->v);
				(yyval.object)=n;
			}
#line 1998 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 184 "Parser.y" /* yacc.c:1646  */
    {
				(yyval.object)=add_start((yyvsp[0].value));
			}
#line 2006 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 187 "Parser.y" /* yacc.c:1646  */
    {
				(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
			}
#line 2014 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 191 "Parser.y" /* yacc.c:1646  */
    {
				node *ptr=add_start((yyvsp[0].value));
				node *n=new node;
				copy_list(n->v,(yyvsp[-2].object)->v);
				copy_list(n->v,ptr->v);
				(yyval.object)=n;
			}
#line 2026 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 198 "Parser.y" /* yacc.c:1646  */
    {
				node *ptr=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
				node *n=new node;
				copy_list(n->v,(yyvsp[-3].object)->v);
				copy_list(n->v,ptr->v);
				(yyval.object)=n;
			}
#line 2038 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 205 "Parser.y" /* yacc.c:1646  */
    {
				(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
			}
#line 2046 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 208 "Parser.y" /* yacc.c:1646  */
    {
				(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
			}
#line 2054 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 211 "Parser.y" /* yacc.c:1646  */
    {
				node *ptr=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
				node *n=new node;
				copy_list(n->v,(yyvsp[-3].object)->v);
				copy_list(n->v,ptr->v);
				(yyval.object)=n;
			}
#line 2066 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 218 "Parser.y" /* yacc.c:1646  */
    {
				node *ptr=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
				node *n=new node;
				copy_list(n->v,(yyvsp[-4].object)->v);
				copy_list(n->v,ptr->v);
				(yyval.object)=n;
			}
#line 2078 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 227 "Parser.y" /* yacc.c:1646  */
    {
				(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
			}
#line 2086 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 230 "Parser.y" /* yacc.c:1646  */
    {
				(yyval.object)=add_start((yyvsp[0].value));
			}
#line 2094 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 234 "Parser.y" /* yacc.c:1646  */
    { 
				node *n=new node;
				copy_list(n->v,(yyvsp[-3].object)->v);
				node *ptr=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
				copy_list(n->v,ptr->v);
				(yyval.object)=n;
			}
#line 2106 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 241 "Parser.y" /* yacc.c:1646  */
    {
				node *n=new node;
				copy_list(n->v,(yyvsp[-2].object)->v);
				copy_list(n->v,add_start((yyvsp[0].value))->v);
				(yyval.object)=n;
			}
#line 2117 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 247 "Parser.y" /* yacc.c:1646  */
    {
				(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
			}
#line 2125 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 250 "Parser.y" /* yacc.c:1646  */
    {
				(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
			}
#line 2133 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 253 "Parser.y" /* yacc.c:1646  */
    {
				node *ptr=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
				node *n=new node;
				copy_list(n->v,(yyvsp[-4].object)->v);
				copy_list(n->v,ptr->v);
				(yyval.object)=n;
			}
#line 2145 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 260 "Parser.y" /* yacc.c:1646  */
    {
				node *ptr=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
				node *n=new node;
				copy_list(n->v,(yyvsp[-3].object)->v);
				copy_list(n->v,ptr->v);
				(yyval.object)=n;	
			}
#line 2157 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 269 "Parser.y" /* yacc.c:1646  */
    {
		vn v;
		v.push_back(add_node("COMMENT",(yyvsp[0].value)));
		node* n = new node;
		copy_list(n->v,v);
		(yyval.object)=n;
	}
#line 2169 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 278 "Parser.y" /* yacc.c:1646  */
    {
		vn v1,v2;
		v1 = (yyvsp[-1].object)->v;
		v2 = (yyvsp[0].object)->v;
		node* n = new node;
		copy_list(n->v,v1);	
		copy_list(n->v,v2);
		(yyval.object)=n;
	}
#line 2183 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 287 "Parser.y" /* yacc.c:1646  */
    { (yyval.object)=(yyvsp[0].object); }
#line 2189 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 290 "Parser.y" /* yacc.c:1646  */
    {
		vn v;
		v.push_back(add_node("TEXT",checkText((yyvsp[0].value))));
	//	v.push_back(add_node("TEXT",$1));
		node* n = new node;
		copy_list(n->v,v);
		(yyval.object)=n;
	}
#line 2202 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 300 "Parser.y" /* yacc.c:1646  */
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
#line 2218 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 311 "Parser.y" /* yacc.c:1646  */
    { (yyval.object)=(yyvsp[0].object); }
#line 2224 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 314 "Parser.y" /* yacc.c:1646  */
    { vn v;
				v.push_back(add_node("COMMENT",(yyvsp[0].value)));
				node* n = new node;
				copy_list(n->v,v);
				(yyval.object)=n;
			}
#line 2235 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 320 "Parser.y" /* yacc.c:1646  */
    {  	vn v;
				v.push_back(add_node("BR"));
				node* n = new node;
				copy_list(n->v,v);
				(yyval.object)=n;
			}
#line 2246 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 326 "Parser.y" /* yacc.c:1646  */
    { 	vn v;
				//v.push_back(add_node("TEXT",$1));
				v.push_back(add_node("TEXT",checkText((yyvsp[0].value))));
				node* n = new node;
				copy_list(n->v,v);
				(yyval.object)=n;
			}
#line 2258 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 333 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 2266 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 336 "Parser.y" /* yacc.c:1646  */
    { 
				vn v;
				v.push_back(add_node("SYMBOL",(yyvsp[0].value)));
				node* n = new node;
				copy_list(n->v,v);
				(yyval.object)=n;
			}
#line 2278 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 345 "Parser.y" /* yacc.c:1646  */
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
#line 2301 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 363 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 2309 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 368 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 2317 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 371 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 2325 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 374 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 2333 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 377 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 2341 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 382 "Parser.y" /* yacc.c:1646  */
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
#line 2364 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 400 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 2372 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 405 "Parser.y" /* yacc.c:1646  */
    { (yyval.object)=(yyvsp[0].object); }
#line 2378 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 406 "Parser.y" /* yacc.c:1646  */
    {  (yyval.object)=(yyvsp[0].object); }
#line 2384 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 407 "Parser.y" /* yacc.c:1646  */
    {  (yyval.object)=(yyvsp[0].object); }
#line 2390 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 408 "Parser.y" /* yacc.c:1646  */
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
#line 2413 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 426 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 2421 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 429 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=(yyvsp[0].object);
		}
#line 2429 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 432 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 2437 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 435 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 2445 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 438 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 2453 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 441 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=(yyvsp[0].object);
		}
#line 2461 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 444 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=(yyvsp[0].object);
		}
#line 2469 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 447 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=(yyvsp[0].object);
		}
#line 2477 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 452 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2485 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 455 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2493 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 458 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 2501 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 461 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2509 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 466 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2517 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 469 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2525 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 472 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_start((yyvsp[0].value));	
		}
#line 2533 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 475 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2541 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 478 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2549 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 481 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2557 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 486 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=(yyvsp[0].object);
		}
#line 2565 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 489 "Parser.y" /* yacc.c:1646  */
    {
			node* n=new node;
			copy_list(n->v,(yyvsp[-2].object)->v);
			copy_list(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;
		}
#line 2576 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 497 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 2584 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 500 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2592 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 503 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2600 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 506 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2608 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 509 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2616 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 512 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2624 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 515 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2632 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 520 "Parser.y" /* yacc.c:1646  */
    { 
			node *n=add_start((yyvsp[0].value));
			add_attributes(n->v[0],(yyvsp[-3].value),(yyvsp[-2].value));
			(yyval.object)=n;
		}
#line 2642 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 525 "Parser.y" /* yacc.c:1646  */
    { 
			node *n=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
			add_attributes(n->v[0],(yyvsp[-4].value),(yyvsp[-3].value));
			(yyval.object)=n;
		}
#line 2652 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 530 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2660 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 533 "Parser.y" /* yacc.c:1646  */
    { 
			node *n=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
			add_attributes(n->v[0],(yyvsp[-4].value),(yyvsp[-3].value));
			(yyval.object)=n;
		}
#line 2670 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 538 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2678 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 543 "Parser.y" /* yacc.c:1646  */
    { 
			node  *n=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
			add_attributes(n->v[0],(yyvsp[-4].value),(yyvsp[-3].value));
			(yyval.object)=n;
		}
#line 2688 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 548 "Parser.y" /* yacc.c:1646  */
    { 
    		(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
    	}
#line 2696 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 551 "Parser.y" /* yacc.c:1646  */
    { 
    		node *n=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
    		add_attributes(n->v[0],(yyvsp[-5].value),(yyvsp[-4].value));
    		(yyval.object)=n;
		}
#line 2706 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 556 "Parser.y" /* yacc.c:1646  */
    { 
    		(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
    	}
#line 2714 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 559 "Parser.y" /* yacc.c:1646  */
    { 
    		node *n=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
    		add_attributes(n->v[0],(yyvsp[-4].value),(yyvsp[-3].value));
    		(yyval.object)=n;
    	}
#line 2724 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 564 "Parser.y" /* yacc.c:1646  */
    { 
    		(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
    	}
#line 2732 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 567 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_start((yyvsp[0].value));
    	}
#line 2740 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 570 "Parser.y" /* yacc.c:1646  */
    { 	
			node *n=add_start((yyvsp[0].value));
			add_attributes(n->v[0],(yyvsp[-3].value),(yyvsp[-2].value));
			(yyval.object)=n;
		}
#line 2750 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 575 "Parser.y" /* yacc.c:1646  */
    { 
    		node *n=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
    		add_attributes(n->v[0],(yyvsp[-6].value),(yyvsp[-5].value));
    		(yyval.object)=n;
		}
#line 2760 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 580 "Parser.y" /* yacc.c:1646  */
    { 
    		(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
    	}
#line 2768 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 585 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2776 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 588 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2784 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 591 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2792 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 594 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 2800 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 597 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2808 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 600 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2816 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 603 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2824 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 606 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2832 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 609 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_child_neighbour((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2840 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 612 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2848 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 617 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2856 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 620 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2864 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 623 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 2872 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 626 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2880 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 629 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2888 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 634 "Parser.y" /* yacc.c:1646  */
    {
			(yyvsp[0].object)->v[0]->children.insert((yyvsp[0].object)->v[0]->children.begin(),(yyvsp[-1].object)->v.begin(),(yyvsp[-1].object)->v.end());
			(yyval.object)=(yyvsp[0].object);
		}
#line 2897 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 638 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 2905 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 641 "Parser.y" /* yacc.c:1646  */
    {
			(yyvsp[0].object)->v[0]->children.insert((yyvsp[0].object)->v[0]->children.begin(),(yyvsp[-1].object)->v.begin(),(yyvsp[-1].object)->v.end());
			(yyvsp[0].object)->v[0]->children.insert((yyvsp[0].object)->v[0]->children.begin(),(yyvsp[-3].object)->v.begin(),(yyvsp[-3].object)->v.end());
			(yyval.object)=(yyvsp[0].object);
		}
#line 2915 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 646 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2923 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 649 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2931 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 652 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2939 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 657 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2947 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 660 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 2955 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 665 "Parser.y" /* yacc.c:1646  */
    {
		(yyval.object)=add_start((yyvsp[0].value));
		}
#line 2963 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 668 "Parser.y" /* yacc.c:1646  */
    {
		(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2971 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 671 "Parser.y" /* yacc.c:1646  */
    {
		(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2979 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 674 "Parser.y" /* yacc.c:1646  */
    {
		(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2987 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 679 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 2995 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 682 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3003 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 685 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3011 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 688 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3019 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 691 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3027 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 694 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3035 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 697 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 3043 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 700 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 3051 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 703 "Parser.y" /* yacc.c:1646  */
    { 
    		(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
    	}
#line 3059 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 706 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 3067 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 709 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
    	}
#line 3075 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 712 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 3083 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 717 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-3].object),(yyvsp[-2].value),(yyvsp[0].object));
		}
#line 3091 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 720 "Parser.y" /* yacc.c:1646  */
    {
			node *n=add_child_neighbour((yyvsp[-4].object),(yyvsp[-3].value),(yyvsp[-2].object));
			copy_list(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;
		}
#line 3101 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 725 "Parser.y" /* yacc.c:1646  */
    {
			node *n=add_child_neighbour((yyvsp[-5].object),(yyvsp[-4].value),(yyvsp[-2].object));
			copy_list(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;
		}
#line 3111 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 730 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-2].value),(yyvsp[0].object));
		}
#line 3119 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 733 "Parser.y" /* yacc.c:1646  */
    {
    		node *n=add_neighbour((yyvsp[-4].value),(yyvsp[-2].object));
    		copy_list(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;	
    	}
#line 3129 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 740 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3137 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 743 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-3].object),(yyvsp[-2].value),(yyvsp[0].object));	
		}
#line 3145 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 746 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 3153 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 749 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-2].value),(yyvsp[0].object));
		}
#line 3161 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 752 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3169 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 755 "Parser.y" /* yacc.c:1646  */
    {
			node* n=add_child_neighbour((yyvsp[-4].object),(yyvsp[-3].value),(yyvsp[-2].object));
			copy_list(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;
		}
#line 3179 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 760 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3187 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 763 "Parser.y" /* yacc.c:1646  */
    {
			node *n=add_neighbour((yyvsp[-3].value),(yyvsp[-2].object));
			copy_list(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;
		}
#line 3197 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 770 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3205 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 773 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 3213 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 776 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3221 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 779 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3229 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 784 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3237 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 787 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3245 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 790 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3253 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 793 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3261 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 796 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3269 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 799 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3277 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 802 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 3285 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 805 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 3293 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 808 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 3301 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 811 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3309 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 814 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3317 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 817 "Parser.y" /* yacc.c:1646  */
    {
    		node* n=add_child_neighbour((yyvsp[-6].object),(yyvsp[-4].object),(yyvsp[-1].value),(yyvsp[0].object));
    		add_children(n->v[0],(yyvsp[-2].object)->v);
    		(yyval.object)=n;
    	}
#line 3327 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 822 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 3335 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 825 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3343 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 828 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3351 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 833 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 3359 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 836 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3367 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 839 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3375 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 842 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3383 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 845 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3391 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 848 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3399 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 851 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3407 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 854 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3415 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 857 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_neighbour((yyvsp[-2].value),(yyvsp[0].object));
		}
#line 3423 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 860 "Parser.y" /* yacc.c:1646  */
    {
			node* n=add_neighbour((yyvsp[-3].value),(yyvsp[-2].object));
			copy_list(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;
		}
#line 3433 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 865 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-3].object),(yyvsp[-2].value),(yyvsp[0].object));
    	}
#line 3441 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 868 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-3].object),(yyvsp[-2].value),(yyvsp[0].object));
    	}
#line 3449 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 871 "Parser.y" /* yacc.c:1646  */
    {
    		node* n=add_child_neighbour((yyvsp[-4].object),(yyvsp[-3].value),(yyvsp[-2].object));
			copy_list(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;	
    	}
#line 3459 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 876 "Parser.y" /* yacc.c:1646  */
    {
    		node* n=add_child_neighbour((yyvsp[-4].object),(yyvsp[-3].value),(yyvsp[-2].object));
			copy_list(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;	
    	}
#line 3469 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 881 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3477 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 884 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3485 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 887 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3493 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 890 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3501 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 893 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_child_neighbour((yyvsp[-3].object),(yyvsp[-2].value),(yyvsp[0].object));
		}
#line 3509 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 896 "Parser.y" /* yacc.c:1646  */
    {
			node* n=add_child_neighbour((yyvsp[-4].object),(yyvsp[-3].value),(yyvsp[-2].object));
			copy_list(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;
		}
#line 3519 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 901 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-5].object),(yyvsp[-3].object),(yyvsp[-2].value),(yyvsp[0].object));
    	}
#line 3527 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 904 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-5].object),(yyvsp[-3].object),(yyvsp[-2].value),(yyvsp[0].object));
    	}
#line 3535 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 907 "Parser.y" /* yacc.c:1646  */
    {
    		node* n=add_child_neighbour((yyvsp[-6].object),(yyvsp[-4].object),(yyvsp[-3].value),(yyvsp[-2].object));
			copy_list(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;	
    	}
#line 3545 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 912 "Parser.y" /* yacc.c:1646  */
    {
    		node* n=add_child_neighbour((yyvsp[-6].object),(yyvsp[-4].object),(yyvsp[-3].value),(yyvsp[-2].object));
			copy_list(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;	
    	}
#line 3555 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 920 "Parser.y" /* yacc.c:1646  */
    {	(yyval.object)=add_start((yyvsp[0].value));
		}
#line 3562 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 922 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3570 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 925 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3578 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 928 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3586 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 931 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-2].value),(yyvsp[0].object));
		}
#line 3594 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 934 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-3].object),(yyvsp[-2].value),(yyvsp[0].object));
		}
#line 3602 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 937 "Parser.y" /* yacc.c:1646  */
    {
			node* n=add_neighbour((yyvsp[-3].value),(yyvsp[-2].object));
		  	copy_list(n->v,(yyvsp[0].object)->v);
    		(yyval.object)=n;			
		}
#line 3612 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 942 "Parser.y" /* yacc.c:1646  */
    { 
			node* n=add_child_neighbour((yyvsp[-4].object),(yyvsp[-3].value),(yyvsp[-2].object));
		  	copy_list(n->v,(yyvsp[0].object)->v);
    		(yyval.object)=n;
		}
#line 3622 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 949 "Parser.y" /* yacc.c:1646  */
    {	
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 3630 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 952 "Parser.y" /* yacc.c:1646  */
    {
	    	(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
    	}
#line 3638 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 955 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 3646 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 958 "Parser.y" /* yacc.c:1646  */
    {
	 	   	(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 3654 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 961 "Parser.y" /* yacc.c:1646  */
    {
	    	(yyval.object)=add_neighbour((yyvsp[-2].value),(yyvsp[0].object));
    	}
#line 3662 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 964 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-3].object),(yyvsp[-2].value),(yyvsp[0].object));
    	}
#line 3670 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 967 "Parser.y" /* yacc.c:1646  */
    {
	    	node *n=add_neighbour((yyvsp[-3].value),(yyvsp[-2].object));
  		  	copy_list(n->v,(yyvsp[0].object)->v);
    		(yyval.object)=n;
    	}
#line 3680 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 972 "Parser.y" /* yacc.c:1646  */
    {
 	 	  	node* n=add_child_neighbour((yyvsp[-4].object),(yyvsp[-3].value),(yyvsp[-2].object));
    		copy_list(n->v,(yyvsp[0].object)->v);
    		(yyval.object)=n;
    	}
#line 3690 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 979 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3698 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 982 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3706 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 985 "Parser.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-2].object),(yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3714 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 988 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3722 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 991 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 3730 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 994 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3738 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 997 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 3746 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1000 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-3].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3754 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1003 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 3762 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1006 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3770 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1009 "Parser.y" /* yacc.c:1646  */
    {
			node* n=add_child_neighbour((yyvsp[-5].object),(yyvsp[-3].object),(yyvsp[-1].value),(yyvsp[0].object));
    		add_children(n->v[0],(yyvsp[-2].object)->v);
    		(yyval.object)=n;
		}
#line 3780 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1014 "Parser.y" /* yacc.c:1646  */
    {
			node* n=add_startChild((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[0].value));
    		add_children(n->v[0],(yyvsp[-1].object)->v);
    		(yyval.object)=n;	
		}
#line 3790 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1021 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3798 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1024 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 3806 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1029 "Parser.y" /* yacc.c:1646  */
    { 
			treeNode *ptr=(yyvsp[0].object)->v[0];
			add_attributes(ptr,(yyvsp[-2].value),(yyvsp[-1].value));
			(yyval.object)=(yyvsp[0].object);
		}
#line 3816 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1034 "Parser.y" /* yacc.c:1646  */
    { 	node *n = new node;
				vn v;
				treeNode *ptr=add_node("IMG");
				v.pb(ptr);
				copy_list(n->v,v);
				(yyval.object)=n;
		}
#line 3828 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1043 "Parser.y" /* yacc.c:1646  */
    {
			node  *n=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
			add_attributes(n->v[0],(yyvsp[-5].value),(yyvsp[-4].value));
			(yyval.object)=n;
		}
#line 3838 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1048 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3846 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1051 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3854 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1054 "Parser.y" /* yacc.c:1646  */
    {
			node *n=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
			add_attributes(n->v[0],(yyvsp[-4].value),(yyvsp[-3].value));
			(yyval.object)=n;
		}
#line 3864 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1059 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value)); 
   		}
#line 3872 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1062 "Parser.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_start((yyvsp[0].value));
   		}
#line 3880 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1065 "Parser.y" /* yacc.c:1646  */
    {
			node *n=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
			add_attributes(n->v[0],(yyvsp[-4].value),(yyvsp[-3].value));
			(yyval.object)=n;
		}
#line 3890 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1070 "Parser.y" /* yacc.c:1646  */
    {
			node *n=add_start((yyvsp[0].value));
			add_attributes(n->v[0],(yyvsp[-3].value),(yyvsp[-2].value));
			(yyval.object)=n;
		}
#line 3900 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1077 "Parser.y" /* yacc.c:1646  */
    {
			node *n=add_start((yyvsp[0].value));
			add_attributes(n->v[0],(yyvsp[-3].value),(yyvsp[-2].value));
			(yyval.object)=n;
		}
#line 3910 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1082 "Parser.y" /* yacc.c:1646  */
    {
			node *n=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
			add_attributes(n->v[0],(yyvsp[-4].value),(yyvsp[-3].value));
			(yyval.object)=n;
		}
#line 3920 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 1087 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3928 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 1090 "Parser.y" /* yacc.c:1646  */
    {
			node *n=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
			add_attributes(n->v[0],(yyvsp[-4].value),(yyvsp[-3].value));
			(yyval.object)=n;
		}
#line 3938 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 1095 "Parser.y" /* yacc.c:1646  */
    {
			node *n=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
			add_attributes(n->v[0],(yyvsp[-5].value),(yyvsp[-4].value));
			(yyval.object)=n;
		}
#line 3948 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 1100 "Parser.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3956 "Parser.tab.c" /* yacc.c:1646  */
    break;


#line 3960 "Parser.tab.c" /* yacc.c:1646  */
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
#line 1105 "Parser.y" /* yacc.c:1906  */

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


char *switchChar(char *s,char x,string conv){
	string str="";
	for(int i=0;i<strlen(s);i++){
		if(s[i]==x)
			str+=conv;
		else str+=s[i];
	}
	char *str_c = new char[str.length() + 1];
	strcpy(str_c, str.c_str());
	return str_c;
}  

char *checkText(char *s){
	char *res;
	res=switchChar(s,'\\',"\\textbackslash ");
	res=switchChar(res,'{',"\\{");
	res=switchChar(res,'}',"\\}");
	res=switchChar(res,'#',"\\#");
	res=switchChar(res,'$',"\\$");
	res=switchChar(res,'%',"\\%");
	res=switchChar(res,'&',"\\&");
	res=switchChar(res,'~',"\\~{}");
	res=switchChar(res,'_',"\\_");
	res=switchChar(res,'^',"\\^{}");
	return res;
}
