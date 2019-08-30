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

#define copy_list(v1,v2) copy(v2.begin(),v2.end(),back_inserter(v1))
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
#define YYLAST   1575

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  216
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  387

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
     120,   123,   132,   150,   155,   158,   161,   164,   168,   186,
     191,   192,   193,   194,   212,   215,   218,   221,   224,   227,
     230,   233,   238,   241,   244,   247,   252,   255,   258,   261,
     264,   267,   272,   275,   283,   286,   289,   292,   295,   298,
     301,   306,   311,   316,   319,   324,   329,   334,   337,   342,
     345,   350,   353,   356,   361,   366,   371,   374,   377,   380,
     383,   386,   389,   392,   395,   398,   403,   405,   407,   409,
     411,   415,   419,   422,   427,   430,   433,   438,   441,   446,
     449,   452,   455,   460,   463,   466,   469,   472,   475,   478,
     481,   484,   487,   490,   493,   498,   501,   506,   511,   514,
     521,   524,   527,   530,   533,   536,   541,   544,   550,   553,
     556,   559,   564,   567,   570,   573,   576,   579,   582,   585,
     588,   591,   594,   597,   602,   605,   608,   613,   616,   619,
     622,   625,   628,   631,   634,   637,   640,   645,   648,   651,
     656,   661,   664,   667,   670,   673,   676,   681,   684,   687,
     692,   700,   702,   705,   708,   711,   714,   717,   722,   729,
     732,   735,   738,   741,   744,   747,   752,   759,   762,   765,
     768,   771,   774,   777,   780,   783,   786,   789,   794,   801,
     804,   809,   814,   823,   828,   831,   834,   839,   842,   845,
     850,   857,   862,   867,   870,   875,   880
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
       4,     5,    52,    27,    78,  -242,   102,   533,    16,    24,
    -242,  -242,    36,    30,  -242,    -4,    48,  -242,   119,   515,
    -242,    31,   691,    22,    -5,   551,   669,   354,   567,  -242,
    -242,  -242,   624,  1115,    50,  -242,    61,  -242,  -242,    65,
    -242,  -242,  -242,    21,  -242,  1115,  1251,    59,     3,   213,
    -242,  -242,   792,  -242,    67,   119,  1115,  1135,    57,  -242,
     717,    69,  -242,  1115,    71,  -242,    77,  -242,  -242,    79,
    1115,  -242,  1115,   743,  1353,  -242,  1115,   769,    87,  -242,
     691,  1115,   814,   387,  -242,  1115,   859,   272,  1130,  -242,
    1115,    66,  -242,  -242,  -242,  -242,  -242,  -242,  -242,  -242,
    1322,  1258,    75,  -242,   617,    94,  -242,    96,  1322,  -242,
     119,  -242,   228,    74,  -242,  1115,  1251,  -242,  1115,   104,
    -242,   119,  1115,  1115,  1115,   108,   116,  -242,  1115,    22,
     107,   110,  -242,  -242,   109,   551,  1115,   743,  -242,  -242,
     112,   877,  1115,   769,   106,  -242,    99,   114,   120,   691,
    1115,   814,  -242,   492,   111,    45,   805,   922,   940,   432,
     122,  1115,   859,   272,  -242,  1115,  1335,  -242,  1322,  -242,
     119,  -242,  1183,   133,   147,   140,  1267,   141,   113,   119,
    -242,  -242,  -242,  -242,  -242,  1115,   153,  -242,  -242,  -242,
    1115,   985,  -242,  -242,  1003,  1115,  -242,  -242,  -242,   551,
    -242,  1115,   136,  -242,  1048,  1115,  1070,   933,  1115,   139,
    -242,   143,   492,   492,  1115,   272,   272,   870,   996,   124,
     130,   439,   131,   137,  1063,   922,   940,  1115,  -242,    62,
     142,  -242,  1335,  -242,   165,   119,  -242,  -242,  1194,  1274,
    -242,  -242,  -242,   129,  -242,  1115,  -242,  1115,   169,  1115,
     163,  -242,  -242,  -242,  1115,  1115,   155,  -242,  1301,   150,
     154,  1070,  1340,  -242,  1115,  1115,   492,  -242,   159,  -242,
     272,   922,  1366,  1379,  1384,   940,  1174,  1388,  1400,   272,
    1405,   146,   149,  -242,  1115,   272,  1115,  -242,   186,   119,
    -242,  1205,   187,  -242,  1317,   180,  -242,  -242,  -242,  1115,
    -242,  1115,  -242,  -242,  1115,  1070,  1410,  1433,   814,   170,
    1070,  -242,  -242,  1115,  -242,  -242,   922,   922,  1444,   272,
    1449,  -242,   940,   940,  1453,   272,  1464,  -242,   272,  1468,
    1492,  -242,   166,  -242,  -242,   192,   119,  -242,  -242,  -242,
    -242,  -242,  -242,  -242,  -242,  1070,  1070,  1503,  -242,   814,
    -242,  -242,  -242,  -242,   922,  -242,   272,  -242,  -242,   940,
    -242,   272,  -242,   272,  1507,   272,  1517,  1115,  -242,   193,
    -242,  -242,  1070,  -242,  -242,  -242,  -242,  -242,  -242,   272,
    -242,   272,  -242,  -242,  -242,  -242,  -242
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
      24,    29,     0,    30,     0,     0,    79,     0,     0,    31,
       0,     0,    39,    99,     0,    35,     0,   202,    20,     0,
       0,    40,    92,     0,     0,    32,   191,     0,     0,    38,
       0,   103,     0,     0,    36,   140,     0,     0,     0,    37,
      44,     0,    41,    33,    15,     8,     7,    14,    22,    47,
      54,     0,     0,    52,     0,     0,    25,     0,     0,    26,
       0,    88,     0,     0,    27,    51,     0,    28,    49,     0,
      78,     0,    80,    77,   208,     0,     0,   100,   102,     0,
       0,     0,    95,    98,     0,     0,    94,     0,   196,   200,
       0,     0,   190,     0,     0,   107,     0,     0,     0,     0,
     104,     0,   141,   129,     0,     0,   147,     0,     0,     0,
       0,   145,     0,     0,    45,    42,    57,    56,    58,    55,
       0,    72,     0,     0,     0,     0,     0,     0,     0,     0,
      87,    86,    50,    53,    46,    83,     0,    81,    76,   205,
     207,     0,   101,   201,     0,   213,    97,    91,    96,     0,
     199,   188,     0,   195,     0,   105,     0,     0,   111,     0,
     108,     0,   131,   128,   132,     0,     0,   151,   171,     0,
       0,   179,     0,     0,   148,     0,     0,   137,   146,     0,
       0,    43,    60,    59,     0,     0,    71,    67,     0,     0,
      65,    63,    89,     0,    82,    85,   204,   210,     0,   211,
       0,   216,    93,   193,   189,   187,     0,   109,   122,     0,
     118,     0,     0,   112,   106,   113,   130,   133,     0,   155,
       0,     0,   173,   172,   149,     0,   181,   180,   150,     0,
     152,     0,     0,   139,   134,     0,   142,    69,     0,     0,
      73,     0,     0,    61,     0,     0,    90,    84,   209,   206,
     214,   212,   194,   192,   198,     0,   126,   120,     0,   115,
       0,   110,   114,   136,   156,   175,     0,     0,   174,     0,
     153,   183,     0,     0,   182,     0,   154,   165,     0,   161,
     162,   135,     0,   144,    75,     0,     0,    70,    66,    64,
      62,   203,   215,   197,   123,     0,     0,   124,   119,     0,
     116,   138,   177,   176,     0,   157,     0,   185,   184,     0,
     158,     0,   166,     0,   163,     0,   164,     0,    68,     0,
     127,   121,     0,   117,   178,   159,   186,   160,   167,     0,
     168,     0,   143,    74,   125,   169,   170
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -242,  -242,   211,  -242,    11,   -15,   201,   -14,    -1,   311,
    -242,   -54,    14,   103,  -242,  -242,  -242,  -242,  -124,    84,
     -78,  -242,  -145,  -241,    60,  -242,   161,  -189,  -210,  -242,
      89,   101,  -242,  -242
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     8,    16,     9,    33,   159,    51,    52,   259,
      92,    53,    54,   103,   109,   106,    59,   114,    75,   135,
      65,    84,   148,   260,   155,    89,   160,   220,   223,    79,
     141,    68,    62,    71
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      42,   119,   144,    50,    50,    41,   211,     1,     2,     4,
      42,   197,    42,    42,    20,    13,   282,    69,    57,    36,
     309,    35,    23,    39,    70,   107,     7,    10,    98,    37,
      97,    50,   108,    58,    50,    40,   281,    50,   117,    20,
      50,    38,    50,   117,    66,   101,     7,    23,   112,    67,
      60,    29,    30,    61,    31,    44,   178,     5,     6,    98,
     102,    94,     7,   113,   344,   321,    95,   186,    98,   350,
      96,   209,    42,    98,   123,   252,    29,    30,   104,    31,
     118,   105,   315,    11,     6,    50,    50,   117,     7,    50,
     169,   214,   126,    50,   215,    50,   128,    50,   117,   166,
     129,    50,   130,   172,   370,   371,    50,   176,   284,    14,
      15,   285,   357,   358,   167,   101,   234,   174,   173,   175,
      42,   185,   177,   142,   143,   243,   165,   352,   353,   190,
     102,   384,    45,    46,   181,   191,   194,    20,    42,    47,
     195,    42,   206,   196,    98,    23,   205,    48,    42,   376,
     200,    50,   117,    50,   237,    50,   207,    50,   117,   213,
     208,    50,   117,   348,    50,   374,   238,   232,   227,   239,
     245,   241,   254,   242,    29,    30,   273,    31,    49,   264,
     274,   288,   233,   265,    42,   277,   287,   278,   286,   296,
     299,   304,    42,   301,   307,   308,   329,    98,    42,   330,
      42,    42,    98,    42,   373,   313,    42,   334,   338,    42,
     340,   349,   367,   368,   383,    12,    43,    50,   117,   183,
      50,   199,   229,    50,    50,   110,    74,    46,    83,    88,
     193,    20,   204,    47,     0,   335,     0,   291,   294,    23,
     179,    48,   116,    42,     0,     0,    20,    98,    47,     0,
       0,    98,   292,   295,    23,    42,    48,    98,    42,    42,
       0,    98,    42,    42,    42,    98,     0,     0,    29,    30,
      42,    31,    49,   111,    50,     0,    50,   117,     0,    50,
     117,     0,   369,    29,    30,     0,    31,    49,   180,     0,
      20,    98,    42,     0,     0,     0,     0,     0,    23,     0,
       0,     0,     0,    98,    42,    98,     0,     0,     0,    98,
      42,    98,     0,    42,    42,    42,     0,     0,    34,     0,
       0,    50,   156,   157,   230,   158,     0,    29,    30,     0,
      31,     0,    98,    64,     0,     0,    74,    78,     0,     0,
       0,    42,     0,    91,    93,     0,    42,     0,    42,    98,
      42,    98,     0,     0,   212,     0,    99,   217,     0,     0,
       0,     0,     0,     0,    42,     0,    42,   120,     0,     0,
       0,   125,    20,     0,   127,     0,   268,   269,    80,     0,
      23,   131,     0,   132,   134,     0,     0,   138,   140,     0,
       0,    64,   145,   147,    81,    82,   152,   154,     0,     0,
      74,   164,     0,     0,     0,    20,     0,     0,   262,    29,
      30,   149,    31,    23,   266,     0,     0,     0,     0,   272,
       0,     0,   276,     0,     0,   280,   182,   150,   151,   184,
       0,   314,     0,   187,   188,   189,     0,     0,     0,   192,
     327,     0,    29,    30,     0,    31,   332,   198,   134,     0,
      20,     0,   202,   203,   140,     0,     0,    20,    23,   306,
      64,   210,   147,     0,     0,    23,     0,     0,   219,   222,
       0,     0,   228,   154,   318,   320,   231,     0,   324,   326,
     355,     0,   224,   225,     0,   226,   360,    29,    30,   362,
      31,     0,   275,     0,    29,    30,   244,    31,     0,     0,
       0,   246,   248,     0,     0,   250,   251,     0,   347,     0,
      20,     0,   253,     0,     0,   256,   257,   375,    23,   263,
       0,     0,   377,     0,   378,   267,   380,    55,     0,    46,
     364,   366,    56,    20,     0,    47,   219,   222,   283,     0,
     385,    23,   386,    48,    17,    18,     0,    29,    30,    19,
      31,    20,     0,    21,     0,     0,   297,    22,   298,    23,
     300,    24,     0,     0,    25,   302,   303,     0,    26,    20,
      29,    30,    27,    31,    49,   311,   312,    23,    28,     0,
       0,     0,   219,    72,    73,    20,   222,     0,    29,    30,
       0,    31,    32,    23,     0,   331,     0,   333,     0,     0,
       0,     0,     0,     0,     0,     0,    29,    30,     0,    31,
     341,     0,   342,    85,    86,   343,    87,     0,     0,   147,
       0,     0,    29,    30,   351,    31,     0,   219,   219,   170,
       0,    46,     0,   222,   222,    20,    18,    47,   171,     0,
      19,     0,    20,    23,    21,    48,     0,     0,    22,     0,
      23,     0,    24,     0,     0,    25,     0,     0,     0,    26,
     147,     0,     0,    27,     0,   219,     0,     0,     0,    28,
     222,     0,    29,    30,     0,    31,    49,     0,   382,    29,
      30,    18,    31,    32,    90,    19,     0,    20,     0,    21,
       0,     0,     0,    22,     0,    23,     0,    24,     0,     0,
      25,     0,     0,    18,    26,    76,    77,    19,    27,    20,
       0,    21,     0,     0,    28,    22,    63,    23,     0,    24,
       0,     0,    25,     0,    29,    30,    26,    31,    32,    18,
      27,     0,     0,    19,     0,    20,    28,    21,   124,     0,
       0,    22,     0,    23,     0,    24,    29,    30,    25,    31,
      32,     0,    26,     0,     0,    18,    27,     0,     0,    19,
       0,    20,    28,    21,     0,     0,     0,    22,     0,    23,
       0,    24,    29,    30,    25,    31,    32,   133,    26,     0,
       0,    18,    27,     0,     0,    19,     0,    20,    28,    21,
       0,     0,     0,    22,     0,    23,     0,    24,    29,    30,
      25,    31,    32,     0,    26,   115,   116,   139,    27,     0,
      20,     0,    47,     0,    28,     0,     0,     0,    23,     0,
      48,     0,     0,    20,    29,    30,    18,    31,    32,     0,
      19,    23,    20,     0,    21,     0,     0,     0,    22,     0,
      23,     0,    24,     0,     0,    25,     0,    29,    30,    26,
      31,    49,     0,    27,   216,     0,   146,     0,     0,    28,
      29,    30,     0,    31,     0,     0,     0,     0,     0,    29,
      30,    18,    31,    32,     0,    19,     0,    20,     0,    21,
       0,     0,     0,    22,     0,    23,     0,    24,    20,    18,
      25,     0,     0,    19,    26,    20,    23,    21,    27,     0,
       0,    22,     0,    23,    28,    24,     0,   153,    25,     0,
       0,     0,    26,   201,    29,    30,    27,    31,    32,   270,
       0,     0,    28,     0,     0,    29,    30,     0,    31,     0,
       0,     0,    29,    30,    18,    31,    32,     0,    19,     0,
      20,     0,    21,     0,     0,     0,    22,     0,    23,     0,
      24,    20,    18,    25,     0,     0,    19,    26,    20,    23,
      21,    27,     0,     0,    22,     0,    23,    28,    24,     0,
       0,    25,     0,     0,   218,    26,   261,    29,    30,    27,
      31,    32,     0,     0,     0,    28,     0,     0,    29,    30,
       0,    31,     0,     0,   221,    29,    30,    18,    31,    32,
       0,    19,     0,    20,     0,    21,   247,     0,     0,    22,
       0,    23,     0,    24,    20,    18,    25,     0,     0,    19,
      26,    20,    23,    21,    27,     0,     0,    22,     0,    23,
      28,    24,     0,   249,    25,     0,     0,     0,    26,     0,
      29,    30,    27,    31,    32,     0,     0,   271,    28,     0,
       0,    29,    30,     0,    31,     0,     0,     0,    29,    30,
      18,    31,    32,     0,    19,     0,    20,     0,    21,     0,
       0,     0,    22,     0,    23,     0,    24,     0,     0,    25,
       0,    20,    18,    26,   255,     0,    19,    27,    20,    23,
      21,     0,     0,    28,    22,     0,    23,     0,    24,     0,
       0,    25,     0,    29,    30,    26,    31,    32,     0,    27,
       0,     0,   279,     0,   258,    28,     0,     0,    29,    30,
       0,    31,     0,     0,     0,    29,    30,    18,    31,    32,
       0,    19,     0,    20,     0,    21,     0,     0,     0,    22,
       0,    23,     0,    24,     0,     0,    25,   121,    20,   116,
      26,     0,   122,    20,    27,    47,    23,     0,     0,     0,
      28,    23,     0,    48,     0,     0,     0,     0,     0,     0,
      29,    30,     0,    31,    32,     0,   161,   162,     0,   163,
       0,     0,     0,     0,     0,    29,    30,     0,    31,     0,
      29,    30,    20,    31,    49,   235,     0,   116,     0,     0,
      23,    20,     0,    47,   236,     0,   289,     0,    46,    23,
       0,    48,    20,     0,    47,   290,     0,   336,     0,   116,
      23,     0,    48,    20,     0,    47,   337,   322,     0,    29,
      30,    23,    31,    48,     0,     0,     0,     0,    29,    30,
       0,    31,    49,     0,     0,     0,     0,     0,     0,    29,
      30,     0,    31,    49,     0,     0,     0,     0,     0,     0,
      29,    30,     0,    31,    49,    46,   100,     0,     0,    20,
       0,    47,   116,   168,     0,     0,    20,    23,    47,    48,
       0,   116,     0,     0,    23,    20,    48,    47,    46,     0,
       0,     0,    20,    23,    47,    48,     0,   240,     0,     0,
      23,     0,    48,     0,   293,     0,    29,    30,     0,    31,
      49,     0,     0,    29,    30,     0,    31,    49,     0,    20,
       0,     0,    29,    30,     0,    31,    49,    23,     0,    29,
      30,   116,    31,    49,     0,    20,    46,    47,     0,     0,
      20,     0,    47,    23,   305,    48,     0,   339,    23,   116,
      48,     0,     0,    20,     0,    47,    29,    30,    20,    31,
       0,    23,     0,    48,     0,     0,    23,     0,     0,     0,
       0,    20,    29,    30,     0,    31,    49,    29,    30,    23,
      31,    49,     0,   310,    20,   136,   137,     0,     0,     0,
      29,    30,    23,    31,    49,    29,    30,    20,    31,     0,
       0,     0,    20,     0,     0,    23,    20,     0,    29,    30,
      23,    31,     0,     0,    23,     0,     0,   316,    20,     0,
       0,    29,    30,    20,    31,     0,    23,     0,    20,     0,
     317,    23,     0,   319,    29,    30,    23,    31,     0,    29,
      30,   323,    31,    29,    30,     0,    31,     0,     0,   325,
       0,    20,     0,   345,   328,    29,    30,     0,    31,    23,
      29,    30,    20,    31,     0,    29,    30,    20,    31,     0,
      23,    20,     0,     0,     0,    23,   346,     0,     0,    23,
       0,     0,    20,     0,     0,     0,    20,     0,    29,    30,
      23,    31,     0,     0,    23,   354,     0,     0,   356,    29,
      30,     0,    31,     0,    29,    30,   359,    31,    29,    30,
      20,    31,     0,   361,     0,     0,     0,   363,    23,    29,
      30,    20,    31,    29,    30,    20,    31,     0,     0,    23,
       0,     0,     0,    23,     0,    20,     0,     0,     0,     0,
       0,   365,     0,    23,     0,     0,   372,    29,    30,     0,
      31,     0,     0,     0,     0,     0,   379,     0,    29,    30,
       0,    31,    29,    30,     0,    31,   381,     0,     0,     0,
       0,     0,    29,    30,     0,    31
};

static const yytype_int16 yycheck[] =
{
      15,    55,    80,    18,    19,     9,   151,     3,     4,     4,
      25,   135,    27,    28,    18,     4,   226,    22,    19,     8,
     261,     5,    26,    12,    29,    22,    10,     0,    43,     5,
       9,    46,    29,    19,    49,     5,   225,    52,    52,    18,
      55,     5,    57,    57,    22,    46,    10,    26,    49,    27,
      19,    55,    56,    22,    58,     7,   110,     5,     6,    74,
      46,    11,    10,    49,   305,   275,     5,   121,    83,   310,
       5,   149,    87,    88,    17,   199,    55,    56,    19,    58,
      13,    22,   271,     5,     6,   100,   101,   101,    10,   104,
      15,    46,    23,   108,    49,   110,    25,   112,   112,   100,
      23,   116,    23,   104,   345,   346,   121,   108,    46,     7,
       8,    49,   322,   323,   100,   116,   170,    23,   104,    23,
     135,    17,   108,    36,    37,   179,    60,   316,   317,    21,
     116,   372,    13,    14,    60,    19,    29,    18,   153,    20,
      30,   156,    43,    34,   159,    26,    40,    28,   163,   359,
      38,   166,   166,   168,    21,   170,    42,   172,   172,    48,
      40,   176,   176,   308,   179,   354,    19,   168,    46,    29,
      17,    30,    36,    60,    55,    56,    52,    58,    59,    40,
      50,   235,   168,    40,   199,    54,    21,    50,    46,    60,
      21,    36,   207,    30,    44,    41,    50,   212,   213,    50,
     215,   216,   217,   218,   349,    46,   221,    21,    21,   224,
      30,    41,    46,    21,    21,     4,    15,   232,   232,   116,
     235,   137,   162,   238,   239,    12,    25,    14,    27,    28,
     129,    18,   143,    20,    -1,   289,    -1,   238,   239,    26,
      12,    28,    14,   258,    -1,    -1,    18,   262,    20,    -1,
      -1,   266,   238,   239,    26,   270,    28,   272,   273,   274,
      -1,   276,   277,   278,   279,   280,    -1,    -1,    55,    56,
     285,    58,    59,    60,   289,    -1,   291,   291,    -1,   294,
     294,    -1,   336,    55,    56,    -1,    58,    59,    60,    -1,
      18,   306,   307,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      -1,    -1,    -1,   318,   319,   320,    -1,    -1,    -1,   324,
     325,   326,    -1,   328,   329,   330,    -1,    -1,     7,    -1,
      -1,   336,    50,    51,   163,    53,    -1,    55,    56,    -1,
      58,    -1,   347,    22,    -1,    -1,   135,    26,    -1,    -1,
      -1,   356,    -1,    32,    33,    -1,   361,    -1,   363,   364,
     365,   366,    -1,    -1,   153,    -1,    45,   156,    -1,    -1,
      -1,    -1,    -1,    -1,   379,    -1,   381,    56,    -1,    -1,
      -1,    60,    18,    -1,    63,    -1,   215,   216,    24,    -1,
      26,    70,    -1,    72,    73,    -1,    -1,    76,    77,    -1,
      -1,    80,    81,    82,    40,    41,    85,    86,    -1,    -1,
     199,    90,    -1,    -1,    -1,    18,    -1,    -1,   207,    55,
      56,    24,    58,    26,   213,    -1,    -1,    -1,    -1,   218,
      -1,    -1,   221,    -1,    -1,   224,   115,    40,    41,   118,
      -1,   270,    -1,   122,   123,   124,    -1,    -1,    -1,   128,
     279,    -1,    55,    56,    -1,    58,   285,   136,   137,    -1,
      18,    -1,   141,   142,   143,    -1,    -1,    18,    26,   258,
     149,   150,   151,    -1,    -1,    26,    -1,    -1,   157,   158,
      -1,    -1,   161,   162,   273,   274,   165,    -1,   277,   278,
     319,    -1,    50,    51,    -1,    53,   325,    55,    56,   328,
      58,    -1,    53,    -1,    55,    56,   185,    58,    -1,    -1,
      -1,   190,   191,    -1,    -1,   194,   195,    -1,   307,    -1,
      18,    -1,   201,    -1,    -1,   204,   205,   356,    26,   208,
      -1,    -1,   361,    -1,   363,   214,   365,    12,    -1,    14,
     329,   330,    17,    18,    -1,    20,   225,   226,   227,    -1,
     379,    26,   381,    28,    11,    12,    -1,    55,    56,    16,
      58,    18,    -1,    20,    -1,    -1,   245,    24,   247,    26,
     249,    28,    -1,    -1,    31,   254,   255,    -1,    35,    18,
      55,    56,    39,    58,    59,   264,   265,    26,    45,    -1,
      -1,    -1,   271,    32,    33,    18,   275,    -1,    55,    56,
      -1,    58,    59,    26,    -1,   284,    -1,   286,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    58,
     299,    -1,   301,    46,    47,   304,    49,    -1,    -1,   308,
      -1,    -1,    55,    56,   313,    58,    -1,   316,   317,    12,
      -1,    14,    -1,   322,   323,    18,    12,    20,    21,    -1,
      16,    -1,    18,    26,    20,    28,    -1,    -1,    24,    -1,
      26,    -1,    28,    -1,    -1,    31,    -1,    -1,    -1,    35,
     349,    -1,    -1,    39,    -1,   354,    -1,    -1,    -1,    45,
     359,    -1,    55,    56,    -1,    58,    59,    -1,   367,    55,
      56,    12,    58,    59,    60,    16,    -1,    18,    -1,    20,
      -1,    -1,    -1,    24,    -1,    26,    -1,    28,    -1,    -1,
      31,    -1,    -1,    12,    35,    36,    37,    16,    39,    18,
      -1,    20,    -1,    -1,    45,    24,    25,    26,    -1,    28,
      -1,    -1,    31,    -1,    55,    56,    35,    58,    59,    12,
      39,    -1,    -1,    16,    -1,    18,    45,    20,    21,    -1,
      -1,    24,    -1,    26,    -1,    28,    55,    56,    31,    58,
      59,    -1,    35,    -1,    -1,    12,    39,    -1,    -1,    16,
      -1,    18,    45,    20,    -1,    -1,    -1,    24,    -1,    26,
      -1,    28,    55,    56,    31,    58,    59,    34,    35,    -1,
      -1,    12,    39,    -1,    -1,    16,    -1,    18,    45,    20,
      -1,    -1,    -1,    24,    -1,    26,    -1,    28,    55,    56,
      31,    58,    59,    -1,    35,    13,    14,    38,    39,    -1,
      18,    -1,    20,    -1,    45,    -1,    -1,    -1,    26,    -1,
      28,    -1,    -1,    18,    55,    56,    12,    58,    59,    -1,
      16,    26,    18,    -1,    20,    -1,    -1,    -1,    24,    -1,
      26,    -1,    28,    -1,    -1,    31,    -1,    55,    56,    35,
      58,    59,    -1,    39,    49,    -1,    42,    -1,    -1,    45,
      55,    56,    -1,    58,    -1,    -1,    -1,    -1,    -1,    55,
      56,    12,    58,    59,    -1,    16,    -1,    18,    -1,    20,
      -1,    -1,    -1,    24,    -1,    26,    -1,    28,    18,    12,
      31,    -1,    -1,    16,    35,    18,    26,    20,    39,    -1,
      -1,    24,    -1,    26,    45,    28,    -1,    48,    31,    -1,
      -1,    -1,    35,    36,    55,    56,    39,    58,    59,    49,
      -1,    -1,    45,    -1,    -1,    55,    56,    -1,    58,    -1,
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
      45,    28,    -1,    30,    31,    -1,    -1,    -1,    35,    -1,
      55,    56,    39,    58,    59,    -1,    -1,    51,    45,    -1,
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
      55,    56,    -1,    58,    59,    -1,    46,    47,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    58,    -1,
      55,    56,    18,    58,    59,    12,    -1,    14,    -1,    -1,
      26,    18,    -1,    20,    21,    -1,    12,    -1,    14,    26,
      -1,    28,    18,    -1,    20,    21,    -1,    12,    -1,    14,
      26,    -1,    28,    18,    -1,    20,    21,    53,    -1,    55,
      56,    26,    58,    28,    -1,    -1,    -1,    -1,    55,    56,
      -1,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      56,    -1,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    56,    -1,    58,    59,    14,    15,    -1,    -1,    18,
      -1,    20,    14,    15,    -1,    -1,    18,    26,    20,    28,
      -1,    14,    -1,    -1,    26,    18,    28,    20,    14,    -1,
      -1,    -1,    18,    26,    20,    28,    -1,    30,    -1,    -1,
      26,    -1,    28,    -1,    30,    -1,    55,    56,    -1,    58,
      59,    -1,    -1,    55,    56,    -1,    58,    59,    -1,    18,
      -1,    -1,    55,    56,    -1,    58,    59,    26,    -1,    55,
      56,    14,    58,    59,    -1,    18,    14,    20,    -1,    -1,
      18,    -1,    20,    26,    43,    28,    -1,    30,    26,    14,
      28,    -1,    -1,    18,    -1,    20,    55,    56,    18,    58,
      -1,    26,    -1,    28,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    18,    55,    56,    -1,    58,    59,    55,    56,    26,
      58,    59,    -1,    43,    18,    32,    33,    -1,    -1,    -1,
      55,    56,    26,    58,    59,    55,    56,    18,    58,    -1,
      -1,    -1,    18,    -1,    -1,    26,    18,    -1,    55,    56,
      26,    58,    -1,    -1,    26,    -1,    -1,    51,    18,    -1,
      -1,    55,    56,    18,    58,    -1,    26,    -1,    18,    -1,
      51,    26,    -1,    49,    55,    56,    26,    58,    -1,    55,
      56,    53,    58,    55,    56,    -1,    58,    -1,    -1,    49,
      -1,    18,    -1,    43,    49,    55,    56,    -1,    58,    26,
      55,    56,    18,    58,    -1,    55,    56,    18,    58,    -1,
      26,    18,    -1,    -1,    -1,    26,    43,    -1,    -1,    26,
      -1,    -1,    18,    -1,    -1,    -1,    18,    -1,    55,    56,
      26,    58,    -1,    -1,    26,    51,    -1,    -1,    49,    55,
      56,    -1,    58,    -1,    55,    56,    53,    58,    55,    56,
      18,    58,    -1,    49,    -1,    -1,    -1,    49,    26,    55,
      56,    18,    58,    55,    56,    18,    58,    -1,    -1,    26,
      -1,    -1,    -1,    26,    -1,    18,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    26,    -1,    -1,    43,    55,    56,    -1,
      58,    -1,    -1,    -1,    -1,    -1,    49,    -1,    55,    56,
      -1,    58,    55,    56,    -1,    58,    49,    -1,    -1,    -1,
      -1,    -1,    55,    56,    -1,    58
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
      87,    70,    69,    73,    72,    12,    21,    21,    19,    29,
      30,    30,    60,    72,    70,    17,    70,    21,    70,    30,
      70,    70,    79,    70,    36,    36,    70,    70,    44,    70,
      84,    43,    67,    70,    40,    40,    67,    70,    87,    87,
      49,    51,    67,    52,    50,    53,    67,    54,    50,    49,
      67,    88,    89,    70,    46,    49,    46,    21,    72,    12,
      21,    69,    73,    30,    69,    73,    60,    70,    70,    21,
      70,    30,    70,    70,    36,    43,    67,    44,    41,    84,
      43,    70,    70,    46,    87,    88,    51,    51,    67,    49,
      67,    89,    53,    53,    67,    49,    67,    87,    49,    50,
      50,    70,    87,    70,    21,    72,    12,    21,    21,    30,
      30,    70,    70,    70,    84,    43,    43,    67,    83,    41,
      84,    70,    88,    88,    51,    87,    49,    89,    89,    53,
      87,    49,    87,    49,    67,    49,    67,    46,    21,    72,
      84,    84,    43,    83,    88,    87,    89,    87,    87,    49,
      87,    49,    70,    21,    84,    87,    87
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
      76,    76,    76,    76,    76,    76,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    78,    78,    78,    78,
      78,    79,    79,    79,    79,    79,    79,    80,    80,    81,
      81,    81,    81,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    83,    83,    83,    83,    83,
      84,    84,    84,    84,    84,    84,    84,    84,    85,    85,
      85,    85,    86,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    88,    88,    88,    88,    88,    88,    88,    88,    89,
      89,    89,    89,    89,    89,    89,    89,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    91,
      91,    92,    92,    93,    93,    93,    93,    93,    93,    93,
      93,    94,    94,    94,    94,    94,    94
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
#line 61 "ast.y" /* yacc.c:1646  */
    { 
			}
#line 1796 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 63 "ast.y" /* yacc.c:1646  */
    {
			}
#line 1803 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 65 "ast.y" /* yacc.c:1646  */
    {
			}
#line 1810 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 67 "ast.y" /* yacc.c:1646  */
    {
			}
#line 1817 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 69 "ast.y" /* yacc.c:1646  */
    {
			}
#line 1824 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 71 "ast.y" /* yacc.c:1646  */
    {
			}
#line 1831 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 73 "ast.y" /* yacc.c:1646  */
    {
			}
#line 1838 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 75 "ast.y" /* yacc.c:1646  */
    {
			}
#line 1845 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 77 "ast.y" /* yacc.c:1646  */
    {
			}
#line 1852 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 81 "ast.y" /* yacc.c:1646  */
    { 
			}
#line 1859 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 83 "ast.y" /* yacc.c:1646  */
    { 
			}
#line 1866 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 87 "ast.y" /* yacc.c:1646  */
    {
			}
#line 1873 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 89 "ast.y" /* yacc.c:1646  */
    {
			}
#line 1880 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 93 "ast.y" /* yacc.c:1646  */
    {
				treeNode* ptr = add_node("BODY");
				add_children(ptr,(yyvsp[-1].object)->v);
				print(ptr);
			}
#line 1890 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 98 "ast.y" /* yacc.c:1646  */
    {
			}
#line 1897 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 102 "ast.y" /* yacc.c:1646  */
    { vn v;
				v.push_back(add_node("COMMENT",(yyvsp[0].value)));
				node* n = new node;
				copy_list(n->v,v);
				(yyval.object)=n;
			}
#line 1908 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 108 "ast.y" /* yacc.c:1646  */
    {  	vn v;
				v.push_back(add_node("BR"));
				node* n = new node;
				copy_list(n->v,v);
				(yyval.object)=n;
			}
#line 1919 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 114 "ast.y" /* yacc.c:1646  */
    { 	vn v;
				v.push_back(add_node("TEXT",(yyvsp[0].value)));
				node* n = new node;
				copy_list(n->v,v);
				(yyval.object)=n;
			}
#line 1930 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 120 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 1938 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 123 "ast.y" /* yacc.c:1646  */
    { 
				vn v;
				v.push_back(add_node("SYMBOL",(yyvsp[0].value)));
				node* n = new node;
				copy_list(n->v,v);
				(yyval.object)=n;
			}
#line 1950 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 132 "ast.y" /* yacc.c:1646  */
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
#line 1973 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 150 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 1981 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 155 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 1989 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 158 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 1997 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 161 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 2005 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 164 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2012 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 168 "ast.y" /* yacc.c:1646  */
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
#line 2035 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 186 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 2043 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 191 "ast.y" /* yacc.c:1646  */
    { (yyval.object)=(yyvsp[0].object); }
#line 2049 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 192 "ast.y" /* yacc.c:1646  */
    {  (yyval.object)=(yyvsp[0].object); }
#line 2055 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 193 "ast.y" /* yacc.c:1646  */
    {  (yyval.object)=(yyvsp[0].object); }
#line 2061 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 194 "ast.y" /* yacc.c:1646  */
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
#line 2084 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 212 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 2092 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 215 "ast.y" /* yacc.c:1646  */
    { 
			(yyval.object)=(yyvsp[0].object);
		}
#line 2100 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 218 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 2108 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 221 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 2116 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 224 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 2124 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 227 "ast.y" /* yacc.c:1646  */
    { 
			(yyval.object)=(yyvsp[0].object);
		}
#line 2132 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 230 "ast.y" /* yacc.c:1646  */
    { 
			(yyval.object)=(yyvsp[0].object);
		}
#line 2140 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 233 "ast.y" /* yacc.c:1646  */
    { 
			(yyval.object)=(yyvsp[0].object);
		}
#line 2148 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 238 "ast.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2156 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 241 "ast.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2164 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 244 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 2172 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 247 "ast.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2180 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 252 "ast.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2188 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 255 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2196 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 258 "ast.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_start((yyvsp[0].value));	
		}
#line 2204 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 261 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2212 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 264 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2220 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 267 "ast.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2228 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 272 "ast.y" /* yacc.c:1646  */
    { 
			(yyval.object)=(yyvsp[0].object);
		}
#line 2236 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 275 "ast.y" /* yacc.c:1646  */
    {
			node* n=new node;
			copy_list(n->v,(yyvsp[-2].object)->v);
			copy_list(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;
		}
#line 2247 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 283 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 2255 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 286 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2263 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 289 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2271 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 292 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2279 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 295 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2287 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 298 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2295 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 301 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2303 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 306 "ast.y" /* yacc.c:1646  */
    { 
			node *n=add_start((yyvsp[0].value));
			add_attributes(n->v[0],(yyvsp[-3].value),(yyvsp[-2].value));
			(yyval.object)=n;
		}
#line 2313 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 311 "ast.y" /* yacc.c:1646  */
    { 
			node *n=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
			add_attributes(n->v[0],(yyvsp[-4].value),(yyvsp[-3].value));
			(yyval.object)=n;
		}
#line 2323 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 316 "ast.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2331 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 319 "ast.y" /* yacc.c:1646  */
    { 
			node *n=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
			add_attributes(n->v[0],(yyvsp[-4].value),(yyvsp[-3].value));
			(yyval.object)=n;
		}
#line 2341 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 324 "ast.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2349 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 329 "ast.y" /* yacc.c:1646  */
    { 
			node  *n=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
			add_attributes(n->v[0],(yyvsp[-4].value),(yyvsp[-3].value));
			(yyval.object)=n;
		}
#line 2359 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 334 "ast.y" /* yacc.c:1646  */
    { 
    		(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
    	}
#line 2367 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 337 "ast.y" /* yacc.c:1646  */
    { 
    		node *n=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
    		add_attributes(n->v[0],(yyvsp[-5].value),(yyvsp[-4].value));
    		(yyval.object)=n;
		}
#line 2377 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 342 "ast.y" /* yacc.c:1646  */
    { 
    		(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
    	}
#line 2385 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 345 "ast.y" /* yacc.c:1646  */
    { 
    		node *n=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
    		add_attributes(n->v[0],(yyvsp[-4].value),(yyvsp[-3].value));
    		(yyval.object)=n;
    	}
#line 2395 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 350 "ast.y" /* yacc.c:1646  */
    { 
    		(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
    	}
#line 2403 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 353 "ast.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_start((yyvsp[0].value));
    	}
#line 2411 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 356 "ast.y" /* yacc.c:1646  */
    { 	
			node *n=add_start((yyvsp[0].value));
			add_attributes(n->v[0],(yyvsp[-3].value),(yyvsp[-2].value));
			(yyval.object)=n;
		}
#line 2421 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 361 "ast.y" /* yacc.c:1646  */
    { 
    		node *n=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
    		add_attributes(n->v[0],(yyvsp[-6].value),(yyvsp[-5].value));
    		(yyval.object)=n;
		}
#line 2431 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 366 "ast.y" /* yacc.c:1646  */
    { 
    		(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
    	}
#line 2439 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 371 "ast.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2447 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 374 "ast.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2455 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 377 "ast.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2463 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 380 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 2471 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 383 "ast.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2479 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 386 "ast.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2487 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 389 "ast.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2495 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 392 "ast.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2503 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 395 "ast.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_child_neighbour((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2511 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 398 "ast.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2519 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 403 "ast.y" /* yacc.c:1646  */
    { 
		}
#line 2526 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 405 "ast.y" /* yacc.c:1646  */
    { 
		}
#line 2533 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 407 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2540 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 409 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2547 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 411 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2554 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 415 "ast.y" /* yacc.c:1646  */
    {
			(yyvsp[0].object)->v[0]->children.insert((yyvsp[0].object)->v[0]->children.begin(),(yyvsp[-1].object)->v.begin(),(yyvsp[-1].object)->v.end());
			(yyval.object)=(yyvsp[0].object);
		}
#line 2563 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 419 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 2571 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 422 "ast.y" /* yacc.c:1646  */
    {
			(yyvsp[0].object)->v[0]->children.insert((yyvsp[0].object)->v[0]->children.begin(),(yyvsp[-1].object)->v.begin(),(yyvsp[-1].object)->v.end());
			(yyvsp[0].object)->v[0]->children.insert((yyvsp[0].object)->v[0]->children.begin(),(yyvsp[-3].object)->v.begin(),(yyvsp[-3].object)->v.end());
			(yyval.object)=(yyvsp[0].object);
		}
#line 2581 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 427 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2589 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 430 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2597 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 433 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2605 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 438 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2613 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 441 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 2621 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 446 "ast.y" /* yacc.c:1646  */
    {
		(yyval.object)=add_start((yyvsp[0].value));
		}
#line 2629 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 449 "ast.y" /* yacc.c:1646  */
    {
		(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2637 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 452 "ast.y" /* yacc.c:1646  */
    {
		(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2645 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 455 "ast.y" /* yacc.c:1646  */
    {
		(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2653 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 460 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 2661 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 463 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2669 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 466 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2677 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 469 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2685 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 472 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2693 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 475 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2701 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 478 "ast.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 2709 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 481 "ast.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 2717 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 484 "ast.y" /* yacc.c:1646  */
    { 
    		(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
    	}
#line 2725 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 487 "ast.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 2733 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 490 "ast.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
    	}
#line 2741 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 493 "ast.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 2749 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 498 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-3].object),(yyvsp[-2].value),(yyvsp[0].object));
		}
#line 2757 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 501 "ast.y" /* yacc.c:1646  */
    {
			node *n=add_child_neighbour((yyvsp[-4].object),(yyvsp[-3].value),(yyvsp[-2].object));
			copy_list(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;
		}
#line 2767 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 506 "ast.y" /* yacc.c:1646  */
    {
			node *n=add_child_neighbour((yyvsp[-5].object),(yyvsp[-4].value),(yyvsp[-2].object));
			copy_list(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;
		}
#line 2777 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 511 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-2].value),(yyvsp[0].object));
		}
#line 2785 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 514 "ast.y" /* yacc.c:1646  */
    {
    		node *n=add_neighbour((yyvsp[-4].value),(yyvsp[-2].object));
    		copy_list(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;	
    	}
#line 2795 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 521 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2803 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 524 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-3].object),(yyvsp[-2].value),(yyvsp[0].object));	
		}
#line 2811 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 527 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 2819 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 530 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-2].value),(yyvsp[0].object));
		}
#line 2827 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 533 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2835 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 536 "ast.y" /* yacc.c:1646  */
    {
			node* n=add_child_neighbour((yyvsp[-4].object),(yyvsp[-3].value),(yyvsp[-2].object));
			copy_list(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;
		}
#line 2845 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 541 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2853 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 544 "ast.y" /* yacc.c:1646  */
    {
			node *n=add_neighbour((yyvsp[-3].value),(yyvsp[-2].object));
			copy_list(n->v,(yyvsp[0].object)->v);
		}
#line 2862 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 550 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2870 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 553 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 2878 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 556 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2886 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 559 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2894 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 564 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2902 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 567 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2910 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 570 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2918 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 573 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2926 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 576 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2934 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 579 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2942 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 582 "ast.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 2950 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 585 "ast.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 2958 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 588 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 2966 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 591 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 2974 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 594 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
		}
#line 2982 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 597 "ast.y" /* yacc.c:1646  */
    {
    		node* n=add_child_neighbour((yyvsp[-6].object),(yyvsp[-4].object),(yyvsp[-1].value),(yyvsp[0].object));
    		add_children(n->v[0],(yyvsp[-2].object)->v);
    		(yyval.object)=n;
    	}
#line 2992 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 602 "ast.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 3000 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 605 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3008 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 608 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3016 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 613 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 3024 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 616 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3032 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 619 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3040 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 622 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3048 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 625 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3056 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 628 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3064 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 631 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3072 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 634 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3080 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 637 "ast.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_neighbour((yyvsp[-2].value),(yyvsp[0].object));
		}
#line 3088 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 640 "ast.y" /* yacc.c:1646  */
    {
			node* n=add_neighbour((yyvsp[-3].value),(yyvsp[-2].object));
			copy_list(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;
		}
#line 3098 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 645 "ast.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-3].object),(yyvsp[-2].value),(yyvsp[0].object));
    	}
#line 3106 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 648 "ast.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-3].object),(yyvsp[-2].value),(yyvsp[0].object));
    	}
#line 3114 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 651 "ast.y" /* yacc.c:1646  */
    {
    		node* n=add_child_neighbour((yyvsp[-4].object),(yyvsp[-3].value),(yyvsp[-2].object));
			copy_list(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;	
    	}
#line 3124 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 656 "ast.y" /* yacc.c:1646  */
    {
    		node* n=add_child_neighbour((yyvsp[-4].object),(yyvsp[-3].value),(yyvsp[-2].object));
			copy_list(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;	
    	}
#line 3134 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 661 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3142 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 664 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3150 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 667 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3158 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 670 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3166 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 673 "ast.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_child_neighbour((yyvsp[-3].object),(yyvsp[-2].value),(yyvsp[0].object));
		}
#line 3174 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 676 "ast.y" /* yacc.c:1646  */
    {
			node* n=add_child_neighbour((yyvsp[-4].object),(yyvsp[-3].value),(yyvsp[-2].object));
			copy_list(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;
		}
#line 3184 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 681 "ast.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-5].object),(yyvsp[-3].object),(yyvsp[-2].value),(yyvsp[0].object));
    	}
#line 3192 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 684 "ast.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-5].object),(yyvsp[-3].object),(yyvsp[-2].value),(yyvsp[0].object));
    	}
#line 3200 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 687 "ast.y" /* yacc.c:1646  */
    {
    		node* n=add_child_neighbour((yyvsp[-6].object),(yyvsp[-4].object),(yyvsp[-3].value),(yyvsp[-2].object));
			copy_list(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;	
    	}
#line 3210 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 692 "ast.y" /* yacc.c:1646  */
    {
    		node* n=add_child_neighbour((yyvsp[-6].object),(yyvsp[-4].object),(yyvsp[-3].value),(yyvsp[-2].object));
			copy_list(n->v,(yyvsp[0].object)->v);
			(yyval.object)=n;	
    	}
#line 3220 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 700 "ast.y" /* yacc.c:1646  */
    {	(yyval.object)=add_start((yyvsp[0].value));
		}
#line 3227 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 702 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3235 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 705 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3243 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 708 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3251 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 711 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-2].value),(yyvsp[0].object));
		}
#line 3259 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 714 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-3].object),(yyvsp[-2].value),(yyvsp[0].object));
		}
#line 3267 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 717 "ast.y" /* yacc.c:1646  */
    {
			node* n=add_neighbour((yyvsp[-3].value),(yyvsp[-2].object));
		  	copy_list(n->v,(yyvsp[0].object)->v);
    		(yyval.object)=n;			
		}
#line 3277 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 722 "ast.y" /* yacc.c:1646  */
    { 
			node* n=add_child_neighbour((yyvsp[-4].object),(yyvsp[-3].value),(yyvsp[-2].object));
		  	copy_list(n->v,(yyvsp[0].object)->v);
    		(yyval.object)=n;
		}
#line 3287 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 729 "ast.y" /* yacc.c:1646  */
    {	
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 3295 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 732 "ast.y" /* yacc.c:1646  */
    {
	    	(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
    	}
#line 3303 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 735 "ast.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 3311 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 738 "ast.y" /* yacc.c:1646  */
    {
	 	   	(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 3319 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 741 "ast.y" /* yacc.c:1646  */
    {
	    	(yyval.object)=add_neighbour((yyvsp[-2].value),(yyvsp[0].object));
    	}
#line 3327 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 744 "ast.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-3].object),(yyvsp[-2].value),(yyvsp[0].object));
    	}
#line 3335 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 747 "ast.y" /* yacc.c:1646  */
    {
	    	node *n=add_neighbour((yyvsp[-3].value),(yyvsp[-2].object));
  		  	copy_list(n->v,(yyvsp[0].object)->v);
    		(yyval.object)=n;
    	}
#line 3345 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 752 "ast.y" /* yacc.c:1646  */
    {
 	 	  	node* n=add_child_neighbour((yyvsp[-4].object),(yyvsp[-3].value),(yyvsp[-2].object));
    		copy_list(n->v,(yyvsp[0].object)->v);
    		(yyval.object)=n;
    	}
#line 3355 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 759 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-3].object),(yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3363 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 762 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3371 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 765 "ast.y" /* yacc.c:1646  */
    { 
			(yyval.object)=add_startChild((yyvsp[-2].object),(yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3379 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 768 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3387 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 771 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 3395 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 774 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3403 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 777 "ast.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 3411 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 780 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-3].object),(yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3419 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 783 "ast.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
    	}
#line 3427 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 786 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3435 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 789 "ast.y" /* yacc.c:1646  */
    {
			node* n=add_child_neighbour((yyvsp[-5].object),(yyvsp[-3].object),(yyvsp[-1].value),(yyvsp[0].object));
    		add_children(n->v[0],(yyvsp[-2].object)->v);
    		(yyval.object)=n;
		}
#line 3445 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 794 "ast.y" /* yacc.c:1646  */
    {
			node* n=add_startChild((yyvsp[-4].object),(yyvsp[-2].object),(yyvsp[0].value));
    		add_children(n->v[0],(yyvsp[-1].object)->v);
    		(yyval.object)=n;	
		}
#line 3455 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 801 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3463 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 804 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_start((yyvsp[0].value));
		}
#line 3471 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 809 "ast.y" /* yacc.c:1646  */
    { 
			treeNode *ptr=(yyvsp[0].object)->v[0];
			add_attributes(ptr,(yyvsp[-2].value),(yyvsp[-1].value));
			(yyval.object)=(yyvsp[0].object);
		}
#line 3481 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 814 "ast.y" /* yacc.c:1646  */
    { 	node *n = new node;
				vn v;
				treeNode *ptr=add_node("IMG");
				v.pb(ptr);
				copy_list(n->v,v);
				(yyval.object)=n;
		}
#line 3493 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 823 "ast.y" /* yacc.c:1646  */
    {
			node  *n=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
			add_attributes(n->v[0],(yyvsp[-5].value),(yyvsp[-4].value));
			(yyval.object)=n;
		}
#line 3503 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 828 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3511 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 831 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3519 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 834 "ast.y" /* yacc.c:1646  */
    {
			node *n=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
			add_attributes(n->v[0],(yyvsp[-4].value),(yyvsp[-3].value));
			(yyval.object)=n;
		}
#line 3529 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 839 "ast.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value)); 
   		}
#line 3537 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 842 "ast.y" /* yacc.c:1646  */
    {
    		(yyval.object)=add_start((yyvsp[0].value));
   		}
#line 3545 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 845 "ast.y" /* yacc.c:1646  */
    {
			node *n=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
			add_attributes(n->v[0],(yyvsp[-4].value),(yyvsp[-3].value));
			(yyval.object)=n;
		}
#line 3555 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 850 "ast.y" /* yacc.c:1646  */
    {
			node *n=add_start((yyvsp[0].value));
			add_attributes(n->v[0],(yyvsp[-3].value),(yyvsp[-2].value));
			(yyval.object)=n;
		}
#line 3565 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 857 "ast.y" /* yacc.c:1646  */
    {
			node *n=add_start((yyvsp[0].value));
			add_attributes(n->v[0],(yyvsp[-3].value),(yyvsp[-2].value));
			(yyval.object)=n;
		}
#line 3575 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 862 "ast.y" /* yacc.c:1646  */
    {
			node *n=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
			add_attributes(n->v[0],(yyvsp[-4].value),(yyvsp[-3].value));
			(yyval.object)=n;
		}
#line 3585 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 867 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_startChild((yyvsp[-1].object),(yyvsp[0].value));
		}
#line 3593 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 870 "ast.y" /* yacc.c:1646  */
    {
			node *n=add_neighbour((yyvsp[-1].value),(yyvsp[0].object));
			add_attributes(n->v[0],(yyvsp[-4].value),(yyvsp[-3].value));
			(yyval.object)=n;
		}
#line 3603 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 875 "ast.y" /* yacc.c:1646  */
    {
			node *n=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
			add_attributes(n->v[0],(yyvsp[-5].value),(yyvsp[-4].value));
			(yyval.object)=n;
		}
#line 3613 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 880 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=add_child_neighbour((yyvsp[-2].object),(yyvsp[-1].value),(yyvsp[0].object));
		}
#line 3621 "ast.tab.c" /* yacc.c:1646  */
    break;


#line 3625 "ast.tab.c" /* yacc.c:1646  */
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
#line 885 "ast.y" /* yacc.c:1906  */

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
