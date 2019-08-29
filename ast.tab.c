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
#define YYLAST   1416

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  199
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  351

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
     120,   123,   132,   141,   146,   149,   151,   153,   157,   159,
     164,   169,   171,   173,   183,   186,   188,   190,   192,   194,
     196,   198,   202,   204,   206,   208,   212,   214,   216,   218,
     220,   222,   226,   228,   232,   234,   236,   238,   240,   242,
     244,   248,   250,   252,   254,   256,   260,   262,   264,   266,
     268,   270,   272,   274,   278,   280,   282,   284,   286,   288,
     290,   292,   294,   296,   300,   302,   304,   306,   308,   312,
     314,   316,   318,   320,   322,   326,   328,   332,   334,   336,
     338,   342,   344,   346,   348,   350,   352,   354,   356,   358,
     360,   362,   364,   368,   370,   372,   374,   376,   380,   382,
     384,   386,   388,   390,   392,   394,   398,   400,   402,   404,
     408,   410,   412,   414,   416,   418,   420,   422,   424,   426,
     430,   432,   434,   436,   438,   440,   442,   444,   446,   448,
     450,   452,   454,   456,   460,   462,   464,   466,   468,   470,
     472,   474,   478,   480,   482,   484,   486,   488,   490,   492,
     496,   498,   500,   502,   504,   506,   508,   510,   512,   514,
     516,   518,   522,   524,   528,   533,   542,   544,   546,   548,
     550,   552,   554,   556,   560,   562,   564,   566,   568,   570
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

#define YYPACT_NINF -262

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-262)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      51,     9,    23,    20,   100,  -262,    73,   324,    26,    17,
    -262,  -262,    29,    25,  -262,    42,    57,  -262,   738,  1081,
    -262,     2,   641,    40,   -11,   272,   596,   107,   151,  -262,
    -262,  -262,   540,  1061,    66,  -262,    87,  -262,  -262,    96,
    -262,  -262,  -262,   146,  -262,  1061,   465,    22,    -6,   533,
    -262,  -262,  1139,  -262,    90,   738,  1061,  1115,    92,  -262,
     663,    89,  -262,  1061,    93,  -262,    91,  -262,  -262,    97,
    1061,  -262,  1061,   689,   342,  -262,  1061,   715,    52,  -262,
     641,  1061,   760,   219,  -262,  1061,   805,   336,   252,  -262,
    1061,    62,  -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,
    1257,  1164,   109,  -262,   417,   103,  -262,   104,  1257,  -262,
     738,  -262,   589,    68,  -262,  1061,   465,  -262,  1061,   115,
    -262,   738,  1061,  1061,  1061,   116,   119,  -262,  1061,    40,
     112,   128,  -262,  -262,   125,   272,  1061,   689,  -262,  -262,
     122,   823,  1061,   715,   126,  -262,   124,   129,   130,   641,
    1061,   760,  -262,   499,   132,    -1,   135,   868,   886,   399,
     137,   805,  -262,  1061,  1264,  -262,  1257,  -262,   738,  -262,
    1182,   153,   159,   158,  1187,   164,   143,   738,  -262,  -262,
    -262,  -262,  -262,  1061,   171,  -262,  -262,  -262,  1061,   931,
    -262,  -262,   949,  1061,  -262,  -262,  -262,   272,  -262,  1061,
     172,  -262,   994,  1061,  1016,   471,  1061,   149,  -262,   170,
     499,   499,  1061,   336,   336,   555,   816,   160,   161,   751,
     165,   163,   499,  1061,   168,  -262,  1264,  -262,   194,  -262,
    -262,  1130,  1198,  -262,  -262,  -262,   169,  -262,  1061,  -262,
    1061,   199,  1061,   191,  -262,  -262,  -262,  1061,  1061,   188,
    -262,   879,   181,   187,  1016,   942,  -262,  1061,  1061,   499,
    -262,   186,  -262,   336,   868,  1277,  1288,  1009,   886,  1068,
    1292,  1303,   499,  -262,  1061,  -262,   738,  -262,  1241,   213,
    -262,  1246,   212,  -262,  -262,  -262,  1061,  -262,  1061,  -262,
    -262,  1061,  1016,  1299,  1308,   760,   203,  1016,  -262,  -262,
    1061,  -262,  -262,   868,   868,  1323,   336,  1342,  -262,   886,
     886,  1349,   336,  1354,  -262,   225,  -262,  -262,  -262,  -262,
    -262,  -262,  -262,  -262,  1016,  1016,  1358,  -262,   760,  -262,
    -262,  -262,  -262,   868,  -262,   336,  -262,  -262,   886,  -262,
     336,  -262,  -262,  -262,  1016,  -262,  -262,  -262,  -262,  -262,
    -262
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
       0,     0,    39,    97,     0,    35,     0,   185,    20,     0,
       0,    40,    90,     0,     0,    32,   174,     0,     0,    38,
       0,   101,     0,     0,    36,   138,     0,     0,     0,    37,
      44,     0,    41,    33,    15,     8,     7,    14,    22,    47,
      54,     0,     0,    52,     0,     0,    25,     0,     0,    26,
       0,    86,     0,     0,    27,    51,     0,    28,    49,     0,
      76,     0,    78,    75,   191,     0,     0,    98,   100,     0,
       0,     0,    93,    96,     0,     0,    92,     0,   179,   183,
       0,     0,   173,     0,     0,   105,     0,     0,     0,     0,
     102,     0,   139,   127,     0,     0,   140,     0,     0,     0,
       0,     0,    45,    42,    57,    56,    58,    55,     0,    72,
       0,     0,     0,     0,     0,     0,     0,     0,    85,    84,
      50,    53,    46,    81,     0,    79,    74,   188,   190,     0,
      99,   184,     0,   196,    95,    89,    94,     0,   182,   171,
       0,   178,     0,   103,     0,     0,   109,     0,   106,     0,
     129,   126,   130,     0,     0,   144,   154,     0,     0,   162,
       0,     0,   141,   135,     0,    43,    60,    59,     0,    71,
      67,     0,     0,    65,    63,    87,     0,    80,    83,   187,
     193,     0,   194,     0,   199,    91,   176,   172,   170,     0,
     107,   120,     0,   116,     0,     0,   110,   104,   111,   128,
     131,     0,   148,     0,     0,   156,   155,   142,     0,   164,
     163,   143,   145,   137,   132,    69,     0,    73,     0,     0,
      61,     0,     0,    88,    82,   192,   189,   197,   195,   177,
     175,   181,     0,   124,   118,     0,   113,     0,   108,   112,
     134,   149,   158,     0,     0,   157,     0,   146,   166,     0,
       0,   165,     0,   147,   133,     0,    70,    66,    64,    62,
     186,   198,   180,   121,     0,     0,   122,   117,     0,   114,
     136,   160,   159,     0,   150,     0,   168,   167,     0,   151,
       0,    68,   125,   119,     0,   115,   161,   152,   169,   153,
     123
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -262,  -262,   243,  -262,     0,   237,   211,   -51,   -14,    -7,
    -262,   -28,    -9,   133,  -262,  -262,  -262,  -262,  -126,   117,
     -73,  -262,  -149,  -240,   102,  -262,  -167,  -261,  -251,  -262,
     110,   139,  -262,  -262
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     8,    16,     9,    33,   159,    51,    52,   252,
      92,    53,    54,   103,   109,   106,    59,   114,    75,   135,
      65,    84,   148,   253,   155,    89,   160,   218,   221,    79,
     141,    68,    62,    71
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      34,   117,   209,   302,    13,    57,   117,   144,    36,   195,
      58,    69,    39,     4,   296,    64,   107,   308,    70,    78,
      10,    60,    37,   108,    61,    91,    93,   119,     5,     6,
      40,    35,   101,     7,    38,   112,     7,   102,    99,     7,
     113,   104,   331,   332,   105,   212,   261,   262,   213,   120,
     117,    41,   323,   125,     1,     2,   127,   329,   336,   337,
      20,   117,    66,   131,    44,   132,   134,    67,    23,   138,
     140,   245,   346,    64,   145,   147,   207,    94,   152,   154,
      14,    15,   176,   162,   342,   343,   164,   348,   142,   143,
     170,   165,    95,   184,   174,   171,   301,    29,    30,   175,
      31,    96,   101,   118,   350,    11,     6,   102,   180,   123,
       7,   182,   126,   117,   129,   185,   186,   187,   128,   117,
     130,   190,   163,   117,   167,    20,   172,   173,   179,   196,
     134,    80,   183,    23,   200,   201,   140,   188,   189,   334,
     228,   192,    64,   208,   147,   339,   327,    81,    82,   236,
     217,   220,   226,    20,   154,    97,   225,   227,   193,   194,
     198,    23,    29,    30,    20,    31,   203,   204,   347,    20,
     206,   205,    23,   349,   230,   117,   237,    23,   231,   345,
     211,   239,   241,   223,   214,   243,   244,   232,   238,   257,
      29,    30,   246,    31,   234,   249,   250,    85,    86,   256,
      87,    29,    30,   235,    31,   260,    29,    30,   247,    31,
     258,   267,   266,   271,   274,   275,   273,   278,   281,   270,
     286,   288,   279,   282,   291,   294,    43,   117,   295,   283,
     117,   284,   300,   285,   317,   287,    74,    20,    83,    88,
     289,   290,   319,   149,   328,    23,   341,    12,   315,   181,
     298,   299,    42,   202,   197,    50,    50,   217,     0,   150,
     151,   220,    42,   224,    42,    42,     0,   314,   191,     0,
      20,     0,     0,     0,    29,    30,     0,    31,    23,   320,
      98,   321,     0,    50,   322,     0,    50,     0,   147,    50,
      20,     0,    50,   330,    50,     0,   217,   217,    23,   161,
       0,     0,   220,   220,    72,    73,     0,    29,    30,     0,
      31,    98,     0,     0,     0,     0,     0,     0,     0,     0,
      98,   147,     0,     0,    42,    98,   217,    29,    30,     0,
      31,   220,     0,     0,     0,    17,    18,    50,    50,     0,
      19,    50,    20,     0,    21,    50,    74,    50,    22,    50,
      23,     0,    24,    50,    20,    25,     0,     0,    50,    26,
      20,     0,    23,    27,   210,     0,     0,   215,    23,    28,
       0,     0,    42,     0,   136,   137,     0,     0,     0,    29,
      30,     0,    31,    32,     0,     0,   156,   157,     0,   158,
      42,    29,    30,    42,    31,     0,    98,    29,    30,     0,
      31,    50,     0,    50,     0,    50,     0,    50,    74,     0,
       0,    50,     0,     0,    50,     0,   255,    20,     0,     0,
       0,     0,   259,     0,     0,    23,     0,   265,     0,   168,
     269,    46,     0,   272,    42,    20,     0,    47,   169,     0,
       0,     0,    42,    23,     0,    48,     0,    98,    42,   222,
      42,    42,    98,    42,    29,    30,    42,    31,     0,    42,
       0,     0,   293,    50,     0,     0,     0,     0,    50,    50,
       0,     0,    29,    30,     0,    31,    49,   305,   307,    46,
     100,   311,   313,    20,     0,    47,     0,     0,    42,    20,
       0,    23,    98,    48,     0,     0,    98,    23,     0,     0,
      42,     0,    98,    42,    42,   326,    98,    42,    42,    98,
       0,     0,     0,    50,   254,    50,     0,    20,    50,     0,
      29,    30,     0,    31,    49,    23,    29,    30,     0,    31,
      98,    42,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    98,    42,    98,   110,     0,    46,    98,    42,
      98,    20,    18,    47,    29,    30,    19,    31,    20,    23,
      21,    48,     0,    98,    22,     0,    23,     0,    24,     0,
       0,    25,    42,    20,     0,    26,     0,    42,     0,    27,
       0,    23,     0,     0,     0,    28,     0,     0,    29,    30,
       0,    31,    49,   111,     0,    29,    30,     0,    31,    32,
      90,   177,     0,   116,   263,     0,     0,    20,    18,    47,
      29,    30,    19,    31,    20,    23,    21,    48,     0,     0,
      22,     0,    23,     0,    24,     0,     0,    25,     0,     0,
       0,    26,    76,    77,     0,    27,     0,     0,     0,     0,
       0,    28,     0,     0,    29,    30,     0,    31,    49,   178,
       0,    29,    30,    18,    31,    32,     0,    19,     0,    20,
       0,    21,     0,     0,     0,    22,    63,    23,     0,    24,
       0,     0,    25,     0,     0,    18,    26,     0,     0,    19,
      27,    20,     0,    21,   124,     0,    28,    22,     0,    23,
       0,    24,     0,     0,    25,     0,    29,    30,    26,    31,
      32,    18,    27,     0,     0,    19,     0,    20,    28,    21,
       0,     0,     0,    22,     0,    23,     0,    24,    29,    30,
      25,    31,    32,   133,    26,     0,     0,    18,    27,     0,
       0,    19,     0,    20,    28,    21,     0,     0,     0,    22,
       0,    23,     0,    24,    29,    30,    25,    31,    32,     0,
      26,    45,    46,   139,    27,     0,    20,     0,    47,     0,
      28,     0,     0,     0,    23,     0,    48,     0,     0,    20,
      29,    30,    18,    31,    32,     0,    19,    23,    20,     0,
      21,     0,     0,     0,    22,     0,    23,     0,    24,     0,
       0,    25,     0,    29,    30,    26,    31,    49,     0,    27,
       0,     0,   146,     0,   268,    28,    29,    30,     0,    31,
       0,     0,     0,     0,     0,    29,    30,    18,    31,    32,
       0,    19,     0,    20,     0,    21,     0,     0,     0,    22,
       0,    23,     0,    24,    20,    18,    25,     0,     0,    19,
      26,    20,    23,    21,    27,     0,     0,    22,     0,    23,
      28,    24,     0,   153,    25,     0,     0,     0,    26,   199,
      29,    30,    27,    31,    32,     0,     0,   264,    28,     0,
       0,    29,    30,     0,    31,     0,     0,     0,    29,    30,
      18,    31,    32,     0,    19,     0,    20,     0,    21,     0,
       0,     0,    22,     0,    23,     0,    24,    20,    18,    25,
       0,     0,    19,    26,    20,    23,    21,    27,     0,     0,
      22,     0,    23,    28,    24,     0,     0,    25,     0,     0,
     216,    26,   292,    29,    30,    27,    31,    32,     0,     0,
       0,    28,     0,     0,    29,    30,     0,    31,     0,     0,
     219,    29,    30,    18,    31,    32,     0,    19,     0,    20,
       0,    21,   240,     0,     0,    22,     0,    23,     0,    24,
      20,    18,    25,     0,     0,    19,    26,    20,    23,    21,
      27,     0,     0,    22,     0,    23,    28,    24,     0,   242,
      25,     0,     0,     0,    26,   297,    29,    30,    27,    31,
      32,     0,     0,     0,    28,     0,     0,    29,    30,     0,
      31,     0,     0,     0,    29,    30,    18,    31,    32,     0,
      19,     0,    20,     0,    21,     0,     0,     0,    22,     0,
      23,     0,    24,     0,     0,    25,     0,    20,    18,    26,
     248,     0,    19,    27,    20,    23,    21,     0,     0,    28,
      22,     0,    23,     0,    24,     0,     0,    25,     0,    29,
      30,    26,    31,    32,     0,    27,     0,     0,   306,     0,
     251,    28,     0,     0,    29,    30,     0,    31,     0,     0,
       0,    29,    30,    18,    31,    32,     0,    19,     0,    20,
       0,    21,     0,     0,     0,    22,    20,    23,     0,    24,
       0,     0,    25,    55,    23,    46,    26,     0,    56,    20,
      27,    47,     0,     0,     0,     0,    28,    23,     0,    48,
       0,     0,     0,     0,     0,     0,    29,    30,     0,    31,
      32,   309,     0,    29,    30,     0,    31,   121,     0,   116,
       0,     0,   122,    20,     0,    47,    29,    30,     0,    31,
      49,    23,   276,    48,    46,     0,     0,     0,    20,     0,
      47,   277,   115,   116,     0,     0,    23,    20,    48,    47,
       0,     0,     0,     0,     0,    23,     0,    48,     0,     0,
      29,    30,     0,    31,    49,     0,     0,     0,   116,   166,
       0,     0,    20,     0,    47,    29,    30,     0,    31,    49,
      23,     0,    48,     0,    29,    30,   116,    31,    49,     0,
      20,   116,    47,   229,     0,    20,     0,    47,    23,     0,
      48,     0,    46,    23,     0,    48,    20,   233,    47,    29,
      30,     0,    31,    49,    23,     0,    48,     0,   280,     0,
       0,     0,     0,     0,     0,     0,     0,    29,    30,     0,
      31,    49,    29,    30,     0,    31,    49,     0,     0,     0,
       0,     0,     0,    29,    30,   116,    31,    49,     0,    20,
     116,    47,   316,     0,    20,     0,    47,    23,     0,    48,
       0,    46,    23,     0,    48,    20,   318,    47,   116,     0,
       0,     0,    20,    23,    47,    48,     0,     0,     0,     0,
      23,     0,    48,     0,     0,    20,    29,    30,     0,    31,
      49,    29,    30,    23,    31,    49,    20,     0,     0,     0,
      20,     0,    29,    30,    23,    31,    49,    20,    23,    29,
      30,    20,    31,    49,     0,    23,    20,     0,   303,    23,
       0,     0,    29,    30,    23,    31,     0,     0,     0,   304,
       0,    20,   324,    29,    30,   310,    31,    29,    30,    23,
      31,   325,   312,     0,    29,    30,     0,    31,    29,    30,
      20,    31,     0,    29,    30,     0,    31,    20,    23,     0,
       0,     0,    20,     0,   333,    23,    20,     0,    29,    30,
      23,    31,     0,     0,    23,     0,     0,     0,     0,     0,
       0,   335,     0,     0,     0,     0,     0,    29,    30,     0,
      31,   344,   338,   340,    29,    30,     0,    31,     0,    29,
      30,     0,    31,    29,    30,     0,    31
};

static const yytype_int16 yycheck[] =
{
       7,    52,   151,   264,     4,    19,    57,    80,     8,   135,
      19,    22,    12,     4,   254,    22,    22,   268,    29,    26,
       0,    19,     5,    29,    22,    32,    33,    55,     5,     6,
       5,     5,    46,    10,     5,    49,    10,    46,    45,    10,
      49,    19,   303,   304,    22,    46,   213,   214,    49,    56,
     101,     9,   292,    60,     3,     4,    63,   297,   309,   310,
      18,   112,    22,    70,     7,    72,    73,    27,    26,    76,
      77,   197,   333,    80,    81,    82,   149,    11,    85,    86,
       7,     8,   110,    90,   324,   325,   100,   338,    36,    37,
     104,   100,     5,   121,   108,   104,   263,    55,    56,   108,
      58,     5,   116,    13,   344,     5,     6,   116,   115,    17,
      10,   118,    23,   164,    23,   122,   123,   124,    25,   170,
      23,   128,    60,   174,    15,    18,    23,    23,    60,   136,
     137,    24,    17,    26,   141,   142,   143,    21,    19,   306,
     168,    29,   149,   150,   151,   312,   295,    40,    41,   177,
     157,   158,   166,    18,   161,     9,   163,   166,    30,    34,
      38,    26,    55,    56,    18,    58,    40,    43,   335,    18,
      40,    42,    26,   340,    21,   226,   183,    26,    19,   328,
      48,   188,   189,    46,    49,   192,   193,    29,    17,    40,
      55,    56,   199,    58,    30,   202,   203,    46,    47,   206,
      49,    55,    56,    60,    58,   212,    55,    56,    36,    58,
      40,    50,    52,    50,    46,    21,   223,   231,   232,    54,
      21,    30,   231,   232,    36,    44,    15,   278,    41,    60,
     281,   238,    46,   240,    21,   242,    25,    18,    27,    28,
     247,   248,    30,    24,    41,    26,    21,     4,   276,   116,
     257,   258,    15,   143,   137,    18,    19,   264,    -1,    40,
      41,   268,    25,   161,    27,    28,    -1,   274,   129,    -1,
      18,    -1,    -1,    -1,    55,    56,    -1,    58,    26,   286,
      43,   288,    -1,    46,   291,    -1,    49,    -1,   295,    52,
      18,    -1,    55,   300,    57,    -1,   303,   304,    26,    47,
      -1,    -1,   309,   310,    32,    33,    -1,    55,    56,    -1,
      58,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      83,   328,    -1,    -1,    87,    88,   333,    55,    56,    -1,
      58,   338,    -1,    -1,    -1,    11,    12,   100,   101,    -1,
      16,   104,    18,    -1,    20,   108,   135,   110,    24,   112,
      26,    -1,    28,   116,    18,    31,    -1,    -1,   121,    35,
      18,    -1,    26,    39,   153,    -1,    -1,   156,    26,    45,
      -1,    -1,   135,    -1,    32,    33,    -1,    -1,    -1,    55,
      56,    -1,    58,    59,    -1,    -1,    50,    51,    -1,    53,
     153,    55,    56,   156,    58,    -1,   159,    55,    56,    -1,
      58,   164,    -1,   166,    -1,   168,    -1,   170,   197,    -1,
      -1,   174,    -1,    -1,   177,    -1,   205,    18,    -1,    -1,
      -1,    -1,   211,    -1,    -1,    26,    -1,   216,    -1,    12,
     219,    14,    -1,   222,   197,    18,    -1,    20,    21,    -1,
      -1,    -1,   205,    26,    -1,    28,    -1,   210,   211,    50,
     213,   214,   215,   216,    55,    56,   219,    58,    -1,   222,
      -1,    -1,   251,   226,    -1,    -1,    -1,    -1,   231,   232,
      -1,    -1,    55,    56,    -1,    58,    59,   266,   267,    14,
      15,   270,   271,    18,    -1,    20,    -1,    -1,   251,    18,
      -1,    26,   255,    28,    -1,    -1,   259,    26,    -1,    -1,
     263,    -1,   265,   266,   267,   294,   269,   270,   271,   272,
      -1,    -1,    -1,   276,    43,   278,    -1,    18,   281,    -1,
      55,    56,    -1,    58,    59,    26,    55,    56,    -1,    58,
     293,   294,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   305,   306,   307,    12,    -1,    14,   311,   312,
     313,    18,    12,    20,    55,    56,    16,    58,    18,    26,
      20,    28,    -1,   326,    24,    -1,    26,    -1,    28,    -1,
      -1,    31,   335,    18,    -1,    35,    -1,   340,    -1,    39,
      -1,    26,    -1,    -1,    -1,    45,    -1,    -1,    55,    56,
      -1,    58,    59,    60,    -1,    55,    56,    -1,    58,    59,
      60,    12,    -1,    14,    49,    -1,    -1,    18,    12,    20,
      55,    56,    16,    58,    18,    26,    20,    28,    -1,    -1,
      24,    -1,    26,    -1,    28,    -1,    -1,    31,    -1,    -1,
      -1,    35,    36,    37,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    -1,    55,    56,    -1,    58,    59,    60,
      -1,    55,    56,    12,    58,    59,    -1,    16,    -1,    18,
      -1,    20,    -1,    -1,    -1,    24,    25,    26,    -1,    28,
      -1,    -1,    31,    -1,    -1,    12,    35,    -1,    -1,    16,
      39,    18,    -1,    20,    21,    -1,    45,    24,    -1,    26,
      -1,    28,    -1,    -1,    31,    -1,    55,    56,    35,    58,
      59,    12,    39,    -1,    -1,    16,    -1,    18,    45,    20,
      -1,    -1,    -1,    24,    -1,    26,    -1,    28,    55,    56,
      31,    58,    59,    34,    35,    -1,    -1,    12,    39,    -1,
      -1,    16,    -1,    18,    45,    20,    -1,    -1,    -1,    24,
      -1,    26,    -1,    28,    55,    56,    31,    58,    59,    -1,
      35,    13,    14,    38,    39,    -1,    18,    -1,    20,    -1,
      45,    -1,    -1,    -1,    26,    -1,    28,    -1,    -1,    18,
      55,    56,    12,    58,    59,    -1,    16,    26,    18,    -1,
      20,    -1,    -1,    -1,    24,    -1,    26,    -1,    28,    -1,
      -1,    31,    -1,    55,    56,    35,    58,    59,    -1,    39,
      -1,    -1,    42,    -1,    53,    45,    55,    56,    -1,    58,
      -1,    -1,    -1,    -1,    -1,    55,    56,    12,    58,    59,
      -1,    16,    -1,    18,    -1,    20,    -1,    -1,    -1,    24,
      -1,    26,    -1,    28,    18,    12,    31,    -1,    -1,    16,
      35,    18,    26,    20,    39,    -1,    -1,    24,    -1,    26,
      45,    28,    -1,    48,    31,    -1,    -1,    -1,    35,    36,
      55,    56,    39,    58,    59,    -1,    -1,    51,    45,    -1,
      -1,    55,    56,    -1,    58,    -1,    -1,    -1,    55,    56,
      12,    58,    59,    -1,    16,    -1,    18,    -1,    20,    -1,
      -1,    -1,    24,    -1,    26,    -1,    28,    18,    12,    31,
      -1,    -1,    16,    35,    18,    26,    20,    39,    -1,    -1,
      24,    -1,    26,    45,    28,    -1,    -1,    31,    -1,    -1,
      52,    35,    43,    55,    56,    39,    58,    59,    -1,    -1,
      -1,    45,    -1,    -1,    55,    56,    -1,    58,    -1,    -1,
      54,    55,    56,    12,    58,    59,    -1,    16,    -1,    18,
      -1,    20,    21,    -1,    -1,    24,    -1,    26,    -1,    28,
      18,    12,    31,    -1,    -1,    16,    35,    18,    26,    20,
      39,    -1,    -1,    24,    -1,    26,    45,    28,    -1,    30,
      31,    -1,    -1,    -1,    35,    43,    55,    56,    39,    58,
      59,    -1,    -1,    -1,    45,    -1,    -1,    55,    56,    -1,
      58,    -1,    -1,    -1,    55,    56,    12,    58,    59,    -1,
      16,    -1,    18,    -1,    20,    -1,    -1,    -1,    24,    -1,
      26,    -1,    28,    -1,    -1,    31,    -1,    18,    12,    35,
      36,    -1,    16,    39,    18,    26,    20,    -1,    -1,    45,
      24,    -1,    26,    -1,    28,    -1,    -1,    31,    -1,    55,
      56,    35,    58,    59,    -1,    39,    -1,    -1,    49,    -1,
      44,    45,    -1,    -1,    55,    56,    -1,    58,    -1,    -1,
      -1,    55,    56,    12,    58,    59,    -1,    16,    -1,    18,
      -1,    20,    -1,    -1,    -1,    24,    18,    26,    -1,    28,
      -1,    -1,    31,    12,    26,    14,    35,    -1,    17,    18,
      39,    20,    -1,    -1,    -1,    -1,    45,    26,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    58,
      59,    53,    -1,    55,    56,    -1,    58,    12,    -1,    14,
      -1,    -1,    17,    18,    -1,    20,    55,    56,    -1,    58,
      59,    26,    12,    28,    14,    -1,    -1,    -1,    18,    -1,
      20,    21,    13,    14,    -1,    -1,    26,    18,    28,    20,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    28,    -1,    -1,
      55,    56,    -1,    58,    59,    -1,    -1,    -1,    14,    15,
      -1,    -1,    18,    -1,    20,    55,    56,    -1,    58,    59,
      26,    -1,    28,    -1,    55,    56,    14,    58,    59,    -1,
      18,    14,    20,    21,    -1,    18,    -1,    20,    26,    -1,
      28,    -1,    14,    26,    -1,    28,    18,    30,    20,    55,
      56,    -1,    58,    59,    26,    -1,    28,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    -1,
      58,    59,    55,    56,    -1,    58,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    14,    58,    59,    -1,    18,
      14,    20,    21,    -1,    18,    -1,    20,    26,    -1,    28,
      -1,    14,    26,    -1,    28,    18,    30,    20,    14,    -1,
      -1,    -1,    18,    26,    20,    28,    -1,    -1,    -1,    -1,
      26,    -1,    28,    -1,    -1,    18,    55,    56,    -1,    58,
      59,    55,    56,    26,    58,    59,    18,    -1,    -1,    -1,
      18,    -1,    55,    56,    26,    58,    59,    18,    26,    55,
      56,    18,    58,    59,    -1,    26,    18,    -1,    51,    26,
      -1,    -1,    55,    56,    26,    58,    -1,    -1,    -1,    51,
      -1,    18,    43,    55,    56,    53,    58,    55,    56,    26,
      58,    43,    49,    -1,    55,    56,    -1,    58,    55,    56,
      18,    58,    -1,    55,    56,    -1,    58,    18,    26,    -1,
      -1,    -1,    18,    -1,    51,    26,    18,    -1,    55,    56,
      26,    58,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    55,    56,    -1,
      58,    43,    53,    49,    55,    56,    -1,    58,    -1,    55,
      56,    -1,    58,    55,    56,    -1,    58
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
      87,    47,    70,    60,    69,    73,    15,    15,    12,    21,
      69,    73,    23,    23,    69,    73,    72,    12,    60,    60,
      70,    74,    70,    17,    72,    70,    70,    70,    21,    19,
      70,    92,    29,    30,    34,    79,    70,    80,    38,    36,
      70,    70,    91,    40,    43,    42,    40,    81,    70,    83,
      67,    48,    46,    49,    49,    67,    52,    70,    88,    54,
      70,    89,    50,    46,    85,    70,    69,    73,    72,    21,
      21,    19,    29,    30,    30,    60,    72,    70,    17,    70,
      21,    70,    30,    70,    70,    79,    70,    36,    36,    70,
      70,    44,    70,    84,    43,    67,    70,    40,    40,    67,
      70,    87,    87,    49,    51,    67,    52,    50,    53,    67,
      54,    50,    67,    70,    46,    21,    12,    21,    69,    73,
      30,    69,    73,    60,    70,    70,    21,    70,    30,    70,
      70,    36,    43,    67,    44,    41,    84,    43,    70,    70,
      46,    87,    88,    51,    51,    67,    49,    67,    89,    53,
      53,    67,    49,    67,    70,    72,    21,    21,    30,    30,
      70,    70,    70,    84,    43,    43,    67,    83,    41,    84,
      70,    88,    88,    51,    87,    49,    89,    89,    53,    87,
      49,    21,    84,    84,    43,    83,    88,    87,    89,    87,
      84
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
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    88,    88,    88,    88,    88,    88,
      88,    88,    89,    89,    89,    89,    89,    89,    89,    89,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    91,    91,    92,    92,    93,    93,    93,    93,
      93,    93,    93,    93,    94,    94,    94,    94,    94,    94
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
       1,     2,     3,     3,     2,     3,     4,     4,     3,     4,
       5,     5,     6,     6,     1,     2,     2,     3,     3,     4,
       4,     5,     1,     2,     2,     3,     3,     4,     4,     5,
       4,     3,     4,     2,     1,     5,     4,     5,     3,     2,
       6,     5,     2,     1,     3,     1,     6,     4,     3,     5,
       3,     2,     5,     4,     4,     5,     3,     5,     6,     4
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
#line 1749 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 63 "ast.y" /* yacc.c:1646  */
    {
			}
#line 1756 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 65 "ast.y" /* yacc.c:1646  */
    {
			}
#line 1763 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 67 "ast.y" /* yacc.c:1646  */
    {
			}
#line 1770 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 69 "ast.y" /* yacc.c:1646  */
    {
			}
#line 1777 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 71 "ast.y" /* yacc.c:1646  */
    {
			}
#line 1784 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 73 "ast.y" /* yacc.c:1646  */
    {
			}
#line 1791 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 75 "ast.y" /* yacc.c:1646  */
    {
			}
#line 1798 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 77 "ast.y" /* yacc.c:1646  */
    {
			}
#line 1805 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 81 "ast.y" /* yacc.c:1646  */
    { 
			}
#line 1812 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 83 "ast.y" /* yacc.c:1646  */
    { 
			}
#line 1819 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 87 "ast.y" /* yacc.c:1646  */
    {
			}
#line 1826 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 89 "ast.y" /* yacc.c:1646  */
    {
			}
#line 1833 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 93 "ast.y" /* yacc.c:1646  */
    {
				treeNode* node = add_node("BODY");
				add_children(node,(yyvsp[-1].object)->v);
				print(node);
			}
#line 1843 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 98 "ast.y" /* yacc.c:1646  */
    {
			}
#line 1850 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 102 "ast.y" /* yacc.c:1646  */
    { vn v;
				v.push_back(add_node("COMMENT",(yyvsp[0].value)));
				node* n = new node;
				copy(n->v,v);
				(yyval.object)=n;
			}
#line 1861 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 108 "ast.y" /* yacc.c:1646  */
    {  	vn v;
				v.push_back(add_node("BR"));
				node* n = new node;
				copy(n->v,v);
				(yyval.object)=n;
			}
#line 1872 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 114 "ast.y" /* yacc.c:1646  */
    { 	vn v;
				v.push_back(add_node("TEXT",(yyvsp[0].value)));
				node* n = new node;
				copy(n->v,v);
				(yyval.object)=n;
			}
#line 1883 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 120 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 1891 "ast.tab.c" /* yacc.c:1646  */
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
#line 1903 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 132 "ast.y" /* yacc.c:1646  */
    { vn v1,v2;
			v1 = (yyvsp[-1].object)->v;
			v2 = (yyvsp[0].object)->v;
			copy(v1,v2);
		//	update(&v1);
			node* n = new node;
			copy(n->v,v1);
			(yyval.object)=n;
		}
#line 1917 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 141 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 1925 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 146 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 1933 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 149 "ast.y" /* yacc.c:1646  */
    {
		}
#line 1940 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 151 "ast.y" /* yacc.c:1646  */
    {
		}
#line 1947 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 153 "ast.y" /* yacc.c:1646  */
    {
		}
#line 1954 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 157 "ast.y" /* yacc.c:1646  */
    {
		}
#line 1961 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 159 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 1969 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 164 "ast.y" /* yacc.c:1646  */
    { 
	//		treeNode* node=add_node($1);
	//		add_children(node,$2);
	//		print($1);
		}
#line 1979 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 169 "ast.y" /* yacc.c:1646  */
    { 
		}
#line 1986 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 171 "ast.y" /* yacc.c:1646  */
    { 
		}
#line 1993 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 173 "ast.y" /* yacc.c:1646  */
    {
			vn v1,v2;
			v1 = (yyvsp[-1].object)->v;
			v2 = (yyvsp[0].object)->v;
			copy(v1,v2);
		//	update(&v1);
			node* n = new node;
			copy(n->v,v1);
			(yyval.object)=n;
		}
#line 2008 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 183 "ast.y" /* yacc.c:1646  */
    {
			(yyval.object)=(yyvsp[0].object);
		}
#line 2016 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 186 "ast.y" /* yacc.c:1646  */
    { 
		}
#line 2023 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 188 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2030 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 190 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2037 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 192 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2044 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 194 "ast.y" /* yacc.c:1646  */
    { 
		}
#line 2051 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 196 "ast.y" /* yacc.c:1646  */
    { 
		}
#line 2058 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 198 "ast.y" /* yacc.c:1646  */
    { 
		}
#line 2065 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 202 "ast.y" /* yacc.c:1646  */
    { 
		}
#line 2072 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 204 "ast.y" /* yacc.c:1646  */
    { 
		}
#line 2079 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 206 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2086 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 208 "ast.y" /* yacc.c:1646  */
    { 
		}
#line 2093 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 212 "ast.y" /* yacc.c:1646  */
    { 
		}
#line 2100 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 214 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2107 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 216 "ast.y" /* yacc.c:1646  */
    { 
		}
#line 2114 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 218 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2121 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 220 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2128 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 222 "ast.y" /* yacc.c:1646  */
    { 
		}
#line 2135 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 226 "ast.y" /* yacc.c:1646  */
    { 
		}
#line 2142 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 228 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2149 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 232 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2156 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 234 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2163 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 236 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2170 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 238 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2177 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 240 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2184 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 242 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2191 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 244 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2198 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 248 "ast.y" /* yacc.c:1646  */
    { 
		}
#line 2205 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 250 "ast.y" /* yacc.c:1646  */
    { 
		}
#line 2212 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 252 "ast.y" /* yacc.c:1646  */
    { 
		}
#line 2219 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 254 "ast.y" /* yacc.c:1646  */
    { 
		}
#line 2226 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 256 "ast.y" /* yacc.c:1646  */
    { 
		}
#line 2233 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 260 "ast.y" /* yacc.c:1646  */
    { 
		}
#line 2240 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 262 "ast.y" /* yacc.c:1646  */
    { 
    	}
#line 2247 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 264 "ast.y" /* yacc.c:1646  */
    { 
		}
#line 2254 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 266 "ast.y" /* yacc.c:1646  */
    { 
    	}
#line 2261 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 268 "ast.y" /* yacc.c:1646  */
    { 
    	}
#line 2268 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 270 "ast.y" /* yacc.c:1646  */
    { 
    	}
#line 2275 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 272 "ast.y" /* yacc.c:1646  */
    {
    	}
#line 2282 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 274 "ast.y" /* yacc.c:1646  */
    { 	
		}
#line 2289 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 278 "ast.y" /* yacc.c:1646  */
    { 
		}
#line 2296 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 280 "ast.y" /* yacc.c:1646  */
    { 
		}
#line 2303 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 282 "ast.y" /* yacc.c:1646  */
    { 
		}
#line 2310 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 284 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2317 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 286 "ast.y" /* yacc.c:1646  */
    { 
		}
#line 2324 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 288 "ast.y" /* yacc.c:1646  */
    { 
		}
#line 2331 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 290 "ast.y" /* yacc.c:1646  */
    { 
		}
#line 2338 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 292 "ast.y" /* yacc.c:1646  */
    { 
		}
#line 2345 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 294 "ast.y" /* yacc.c:1646  */
    { 
		}
#line 2352 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 296 "ast.y" /* yacc.c:1646  */
    { 
		}
#line 2359 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 300 "ast.y" /* yacc.c:1646  */
    { 
		}
#line 2366 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 302 "ast.y" /* yacc.c:1646  */
    { 
		}
#line 2373 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 304 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2380 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 306 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2387 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 308 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2394 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 312 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2401 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 314 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2408 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 316 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2415 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 318 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2422 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 320 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2429 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 322 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2436 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 326 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2443 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 328 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2450 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 332 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2457 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 334 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2464 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 336 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2471 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 338 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2478 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 342 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2485 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 344 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2492 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 346 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2499 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 348 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2506 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 350 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2513 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 352 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2520 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 354 "ast.y" /* yacc.c:1646  */
    {
    	}
#line 2527 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 356 "ast.y" /* yacc.c:1646  */
    {
    	}
#line 2534 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 358 "ast.y" /* yacc.c:1646  */
    { 
    	}
#line 2541 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 360 "ast.y" /* yacc.c:1646  */
    {
    	}
#line 2548 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 362 "ast.y" /* yacc.c:1646  */
    {
    	}
#line 2555 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 364 "ast.y" /* yacc.c:1646  */
    {
    	}
#line 2562 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 368 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2569 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 370 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2576 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 372 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2583 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 374 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2590 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 376 "ast.y" /* yacc.c:1646  */
    {
    	}
#line 2597 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 380 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2604 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 382 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2611 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 384 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2618 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 386 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2625 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 388 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2632 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 390 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2639 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 392 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2646 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 394 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2653 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 398 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2660 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 400 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2667 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 402 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2674 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 404 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2681 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 408 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2688 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 410 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2695 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 412 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2702 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 414 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2709 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 416 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2716 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 418 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2723 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 420 "ast.y" /* yacc.c:1646  */
    {
    	}
#line 2730 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 422 "ast.y" /* yacc.c:1646  */
    {
    	}
#line 2737 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 424 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2744 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 426 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2751 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 430 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2758 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 432 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2765 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 434 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2772 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 436 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2779 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 438 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2786 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 440 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2793 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 442 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2800 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 444 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2807 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 446 "ast.y" /* yacc.c:1646  */
    { 
		}
#line 2814 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 448 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2821 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 450 "ast.y" /* yacc.c:1646  */
    {
    	}
#line 2828 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 452 "ast.y" /* yacc.c:1646  */
    {
    	}
#line 2835 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 454 "ast.y" /* yacc.c:1646  */
    {
    	}
#line 2842 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 456 "ast.y" /* yacc.c:1646  */
    {
    	}
#line 2849 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 460 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2856 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 462 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2863 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 464 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2870 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 466 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2877 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 468 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2884 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 470 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2891 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 472 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2898 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 474 "ast.y" /* yacc.c:1646  */
    { 
		}
#line 2905 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 478 "ast.y" /* yacc.c:1646  */
    {	
		}
#line 2912 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 480 "ast.y" /* yacc.c:1646  */
    {
    	}
#line 2919 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 482 "ast.y" /* yacc.c:1646  */
    {
    	}
#line 2926 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 484 "ast.y" /* yacc.c:1646  */
    {
    	}
#line 2933 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 486 "ast.y" /* yacc.c:1646  */
    {
    	}
#line 2940 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 488 "ast.y" /* yacc.c:1646  */
    {
    	}
#line 2947 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 490 "ast.y" /* yacc.c:1646  */
    {
    	}
#line 2954 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 492 "ast.y" /* yacc.c:1646  */
    {
    	}
#line 2961 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 496 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2968 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 498 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2975 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 500 "ast.y" /* yacc.c:1646  */
    { 
		}
#line 2982 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 502 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2989 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 504 "ast.y" /* yacc.c:1646  */
    {
		}
#line 2996 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 506 "ast.y" /* yacc.c:1646  */
    {
		}
#line 3003 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 508 "ast.y" /* yacc.c:1646  */
    {
    	}
#line 3010 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 510 "ast.y" /* yacc.c:1646  */
    {
		}
#line 3017 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 512 "ast.y" /* yacc.c:1646  */
    {
    	}
#line 3024 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 514 "ast.y" /* yacc.c:1646  */
    {
		}
#line 3031 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 516 "ast.y" /* yacc.c:1646  */
    {
		}
#line 3038 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 518 "ast.y" /* yacc.c:1646  */
    {
		}
#line 3045 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 522 "ast.y" /* yacc.c:1646  */
    {
		}
#line 3052 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 524 "ast.y" /* yacc.c:1646  */
    {
		}
#line 3059 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 528 "ast.y" /* yacc.c:1646  */
    { 
			treeNode* node=(yyvsp[0].object)->v[0];
			add_attributes(node,(yyvsp[-2].value),(yyvsp[-1].value));
			(yyval.object)=(yyvsp[0].object);
		}
#line 3069 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 533 "ast.y" /* yacc.c:1646  */
    { 	node* n = new node;
				vn v;
				treeNode* node=add_node("IMG");
				v.pb(node);
				copy(n->v,v);
				(yyval.object)=n;
		}
#line 3081 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 542 "ast.y" /* yacc.c:1646  */
    {
		}
#line 3088 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 544 "ast.y" /* yacc.c:1646  */
    {
		}
#line 3095 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 546 "ast.y" /* yacc.c:1646  */
    {
		}
#line 3102 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 548 "ast.y" /* yacc.c:1646  */
    {
		}
#line 3109 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 550 "ast.y" /* yacc.c:1646  */
    { 
   		}
#line 3116 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 552 "ast.y" /* yacc.c:1646  */
    {
   		}
#line 3123 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 554 "ast.y" /* yacc.c:1646  */
    {
		}
#line 3130 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 556 "ast.y" /* yacc.c:1646  */
    {
		}
#line 3137 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 560 "ast.y" /* yacc.c:1646  */
    {
		}
#line 3144 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 562 "ast.y" /* yacc.c:1646  */
    {
		}
#line 3151 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 564 "ast.y" /* yacc.c:1646  */
    {
		}
#line 3158 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 566 "ast.y" /* yacc.c:1646  */
    {
		}
#line 3165 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 568 "ast.y" /* yacc.c:1646  */
    {
		}
#line 3172 "ast.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 570 "ast.y" /* yacc.c:1646  */
    {
		}
#line 3179 "ast.tab.c" /* yacc.c:1646  */
    break;


#line 3183 "ast.tab.c" /* yacc.c:1646  */
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
#line 574 "ast.y" /* yacc.c:1906  */

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
