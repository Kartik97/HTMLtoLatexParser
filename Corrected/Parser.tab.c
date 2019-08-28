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
#define YYLAST   1401

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  195
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  342

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
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     168,   169,   170,   171,   172,   175,   176,   177,   178,   179,
     180,   183,   184,   187,   188,   189,   190,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   207,
     208,   209,   210,   211,   214,   215,   216,   217,   218,   219,
     220,   221,   224,   225,   226,   227,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     258,   259,   260,   261,   262,   263,   264,   265,   268,   269,
     270,   271,   272,   273,   274,   275,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   292,   293,
     296,   297,   300,   301,   302,   303,   304,   305,   306,   307,
     310,   311,   312,   313,   314,   315
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

#define YYPACT_NINF -246

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-246)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      10,    28,    17,    43,    23,  -246,    34,   339,    25,    52,
    -246,  -246,    26,    57,  -246,   150,    73,  -246,   427,  1049,
    -246,     2,   609,    12,   -13,   288,   583,   351,   195,  -246,
    -246,  -246,   557,  1029,    53,  -246,    76,  -246,  -246,    77,
    -246,  -246,  -246,   205,  -246,  1029,   479,    29,   -11,   274,
    -246,  -246,   706,  -246,    71,   427,  1029,  1083,    69,  -246,
     631,    64,  -246,  1029,    63,  -246,    67,  -246,  -246,    74,
    1029,  -246,  1029,   657,   510,  -246,  1029,   683,    40,  -246,
     609,  1029,   728,   505,  -246,  1029,   773,   784,   719,  -246,
    1029,    32,  -246,  -246,  -246,  -246,  -246,  -246,  -246,  -246,
    1207,  1098,    81,  -246,  1107,    78,  -246,    82,  1207,  -246,
     427,  -246,   432,    49,  -246,  1029,   479,  -246,  1029,    83,
    -246,   427,  1029,  1029,  1029,    89,    93,  -246,  1029,    12,
      94,    95,  -246,  -246,    90,   288,  1029,   657,  -246,  -246,
      99,   791,  1029,   683,    87,  -246,    85,   103,    92,   609,
    1029,   728,  -246,  1334,    98,     6,   847,   836,   854,   910,
     101,   773,  -246,  1029,  1220,  -246,  1207,  -246,  -246,  1220,
     120,   129,   123,  1141,   119,   102,   427,  -246,  -246,  -246,
    -246,  -246,  1029,   136,  -246,  -246,  -246,  1029,   899,  -246,
    -246,   917,  1029,  -246,  -246,  -246,   288,  -246,  1029,   122,
    -246,   962,  1029,   984,  1036,  1029,   115,  -246,   121,  1334,
    1334,  1029,   784,   784,   977,   605,   111,   116,  1064,   113,
     127,  1334,  1029,   124,  -246,  1220,  -246,  -246,  1154,  1159,
    -246,  -246,  -246,   109,  -246,  1029,  -246,  1029,   151,  1029,
     143,  -246,  -246,  -246,  1029,  1029,   142,  -246,  1088,   135,
     141,   984,  1168,  -246,  1029,  1029,  1334,  -246,   137,  -246,
     784,   836,  1213,  1226,  1241,   854,  1254,  1265,  1275,  1334,
    -246,  1029,  -246,   165,  -246,  1202,   157,  -246,  -246,  -246,
    1029,  -246,  1029,  -246,  -246,  1029,   984,  1282,  1293,   728,
     147,   984,  -246,  -246,  1029,  -246,  -246,   836,   836,  1288,
     784,  1308,  -246,   854,   854,  1324,   784,  1329,  -246,  -246,
    -246,  -246,  -246,  -246,  -246,  -246,   984,   984,  1343,  -246,
     728,  -246,  -246,  -246,  -246,   836,  -246,   784,  -246,  -246,
     854,  -246,   784,  -246,  -246,   984,  -246,  -246,  -246,  -246,
    -246,  -246
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
      24,    29,     0,    30,     0,     0,    73,     0,     0,    31,
       0,     0,    39,    93,     0,    35,     0,   181,    20,     0,
       0,    40,    86,     0,     0,    32,   170,     0,     0,    38,
       0,    97,     0,     0,    36,   134,     0,     0,     0,    37,
      44,     0,    41,    33,    15,     8,     7,    14,    22,    47,
      54,     0,     0,    52,     0,     0,    25,     0,     0,    26,
       0,    82,     0,     0,    27,    51,     0,    28,    49,     0,
      72,     0,    74,    71,   187,     0,     0,    94,    96,     0,
       0,     0,    89,    92,     0,     0,    88,     0,   175,   179,
       0,     0,   169,     0,     0,   101,     0,     0,     0,     0,
      98,     0,   135,   123,     0,     0,   136,     0,     0,     0,
       0,     0,    45,    42,    57,    56,    58,    55,    68,     0,
       0,     0,     0,     0,     0,     0,     0,    81,    80,    50,
      53,    46,    77,     0,    75,    70,   184,   186,     0,    95,
     180,     0,   192,    91,    85,    90,     0,   178,   167,     0,
     174,     0,    99,     0,     0,   105,     0,   102,     0,   125,
     122,   126,     0,     0,   140,   150,     0,     0,   158,     0,
       0,   137,   131,     0,    43,    60,    59,    67,     0,     0,
      65,    63,    83,     0,    76,    79,   183,   189,     0,   190,
       0,   195,    87,   172,   168,   166,     0,   103,   116,     0,
     112,     0,     0,   106,   100,   107,   124,   127,     0,   144,
       0,     0,   152,   151,   138,     0,   160,   159,   139,   141,
     133,   128,    69,     0,    61,     0,     0,    84,    78,   188,
     185,   193,   191,   173,   171,   177,     0,   120,   114,     0,
     109,     0,   104,   108,   130,   145,   154,     0,     0,   153,
       0,   142,   162,     0,     0,   161,     0,   143,   129,    66,
      64,    62,   182,   194,   176,   117,     0,     0,   118,   113,
       0,   110,   132,   156,   155,     0,   146,     0,   164,   163,
       0,   147,     0,   121,   115,     0,   111,   157,   148,   165,
     149,   119
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -246,  -246,   185,  -246,     0,   252,   175,   -51,    -9,    -7,
    -246,   -50,    -2,    80,  -246,  -246,  -246,  -246,  -128,    55,
     -77,  -246,  -149,  -197,    36,  -246,  -167,  -194,  -245,  -246,
      50,    70,  -246,  -246
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     8,    16,     9,    33,   159,    51,    52,   249,
      92,    53,    54,   103,   109,   106,    59,   114,    75,   135,
      65,    84,   148,   250,   155,    89,   160,   217,   220,    79,
     141,    68,    62,    71
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      34,   117,   208,   144,    13,   119,   117,   194,    36,    69,
      57,   107,    39,     1,     2,    64,    70,    58,   108,    78,
     302,    60,     5,     6,    61,    91,    93,     7,    11,     6,
      35,    38,     4,     7,    66,     7,     7,   101,    99,    67,
     112,    14,    15,    10,   102,   258,   259,   113,   104,   120,
     117,   105,   211,   125,   290,   212,   127,    37,   328,   329,
     175,   117,    40,   131,    94,   132,   134,   296,   242,   138,
     140,   183,   206,    64,   145,   147,   142,   143,   152,   154,
      44,    95,    96,   162,   118,   339,   123,   126,   128,   315,
     129,   164,   163,   295,   321,   169,   167,   130,   165,   173,
     182,   171,   170,   323,   324,   172,   174,   101,   179,   178,
     187,   181,   188,   117,   102,   184,   185,   186,   117,   333,
     334,   189,   117,   191,   193,   192,   233,   202,   203,   195,
     134,   337,   205,   326,   199,   200,   140,   197,   341,   331,
     319,   227,    64,   207,   147,   204,   210,   222,   228,   231,
     216,   219,   229,   235,   154,   254,   224,   225,   244,    41,
     338,   255,   232,   263,   226,   340,   264,   267,    20,   277,
     271,   336,   280,   282,   117,   234,    23,   268,   285,   288,
     236,   238,   289,   294,   240,   241,   309,   311,   320,    12,
      43,   243,   196,   201,   246,   247,   180,   223,   253,   190,
      74,     0,    83,    88,   257,    29,    30,     0,    31,     0,
       0,     0,     0,    20,    97,   270,     0,     0,     0,   169,
     275,    23,     0,    20,   117,     0,   273,   276,   278,     0,
     279,    23,   281,     0,     0,     0,     0,   283,   284,     0,
       0,    85,    86,     0,    87,     0,     0,   292,   293,     0,
      29,    30,     0,    31,   216,     0,     0,     0,   219,     0,
      29,    30,     0,    31,   308,     0,     0,    42,     0,     0,
      50,    50,     0,   312,     0,   313,     0,    42,   314,    42,
      42,     0,   147,     0,     0,     0,   110,   322,    46,     0,
     216,   216,    20,     0,    47,    98,   219,   219,    50,     0,
      23,    50,    48,     0,    50,     0,    20,    50,     0,    50,
      74,     0,     0,   147,    23,     0,     0,     0,   216,     0,
      72,    73,     0,   219,     0,     0,    98,     0,   209,    29,
      30,   214,    31,    49,   111,    98,     0,     0,     0,    42,
      98,     0,     0,    29,    30,     0,    31,     0,     0,     0,
      17,    18,    50,    50,     0,    19,    50,    20,     0,    21,
      50,     0,    50,    22,    50,    23,     0,    24,    50,    20,
      25,    74,     0,    50,    26,    80,     0,    23,    27,   252,
       0,     0,     0,     0,    28,   256,     0,    42,     0,     0,
     262,    81,    82,   266,    29,    30,   269,    31,    32,     0,
       0,     0,     0,     0,     0,    42,    29,    30,    42,    31,
       0,    98,     0,     0,     0,     0,    50,     0,    50,     0,
       0,    50,     0,   287,     0,    50,     0,     0,    50,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   299,   301,
      45,    46,   305,   307,   176,    20,   116,    47,    42,     0,
      20,     0,    47,    23,     0,    48,    42,     0,    23,     0,
      48,    98,    42,   318,    42,    42,    98,    42,     0,     0,
      42,     0,     0,    42,     0,     0,     0,    50,     0,     0,
      50,    50,    29,    30,     0,    31,    49,    29,    30,     0,
      31,    49,   177,    46,   100,     0,     0,    20,     0,    47,
      42,     0,     0,     0,    98,    23,     0,    48,    98,     0,
       0,     0,    42,     0,    98,    42,    42,     0,    98,    42,
      42,    98,     0,    20,     0,     0,     0,    50,    20,   149,
       0,    23,     0,     0,    29,    30,    23,    31,    49,    98,
      42,     0,   136,   137,     0,   150,   151,     0,     0,     0,
       0,    98,    42,    98,     0,     0,     0,    98,    42,    98,
      29,    30,     0,    31,     0,    29,    30,     0,    31,    18,
      98,     0,     0,    19,     0,    20,     0,    21,     0,    42,
       0,    22,     0,    23,    42,    24,     0,     0,    25,     0,
       0,     0,    26,     0,     0,    18,    27,     0,     0,    19,
       0,    20,    28,    21,     0,     0,     0,    22,     0,    23,
       0,    24,    29,    30,    25,    31,    32,    90,    26,    76,
      77,    18,    27,    20,     0,    19,     0,    20,    28,    21,
       0,    23,     0,    22,    63,    23,     0,    24,    29,    30,
      25,    31,    32,    18,    26,     0,     0,    19,    27,    20,
       0,    21,   124,     0,    28,    22,   261,    23,     0,    24,
      29,    30,    25,    31,    29,    30,    26,    31,    32,    18,
      27,     0,     0,    19,     0,    20,    28,    21,     0,     0,
       0,    22,     0,    23,     0,    24,    29,    30,    25,    31,
      32,   133,    26,     0,     0,    18,    27,     0,     0,    19,
       0,    20,    28,    21,     0,     0,     0,    22,     0,    23,
       0,    24,    29,    30,    25,    31,    32,     0,    26,   115,
     116,   139,    27,     0,    20,     0,    47,     0,    28,     0,
       0,     0,    23,     0,    48,     0,     0,    20,    29,    30,
      18,    31,    32,     0,    19,    23,    20,     0,    21,     0,
       0,     0,    22,     0,    23,     0,    24,     0,     0,    25,
       0,    29,    30,    26,    31,    49,   161,    27,     0,     0,
     146,     0,     0,    28,    29,    30,     0,    31,     0,     0,
       0,     0,     0,    29,    30,    18,    31,    32,     0,    19,
       0,    20,     0,    21,     0,     0,     0,    22,     0,    23,
       0,    24,    20,    18,    25,     0,     0,    19,    26,    20,
      23,    21,    27,     0,     0,    22,     0,    23,    28,    24,
       0,   153,    25,     0,     0,     0,    26,   198,    29,    30,
      27,    31,    32,     0,   156,   157,    28,   158,     0,    29,
      30,     0,    31,     0,     0,     0,    29,    30,    18,    31,
      32,     0,    19,     0,    20,     0,    21,     0,     0,     0,
      22,     0,    23,     0,    24,    20,    18,    25,     0,     0,
      19,    26,    20,    23,    21,    27,     0,     0,    22,     0,
      23,    28,    24,     0,     0,    25,     0,     0,   215,    26,
       0,    29,    30,    27,    31,    32,   213,     0,     0,    28,
       0,     0,    29,    30,     0,    31,     0,     0,   218,    29,
      30,    18,    31,    32,     0,    19,     0,    20,     0,    21,
     237,     0,     0,    22,     0,    23,     0,    24,    20,    18,
      25,     0,     0,    19,    26,    20,    23,    21,    27,     0,
       0,    22,     0,    23,    28,    24,     0,   239,    25,     0,
       0,     0,    26,     0,    29,    30,    27,    31,    32,     0,
     221,     0,    28,     0,     0,    29,    30,     0,    31,     0,
       0,     0,    29,    30,    18,    31,    32,     0,    19,     0,
      20,     0,    21,     0,     0,     0,    22,     0,    23,     0,
      24,     0,     0,    25,     0,    20,    18,    26,   245,     0,
      19,    27,    20,    23,    21,     0,     0,    28,    22,     0,
      23,     0,    24,     0,     0,    25,     0,    29,    30,    26,
      31,    32,     0,    27,     0,     0,   260,     0,   248,    28,
       0,     0,    29,    30,     0,    31,     0,     0,     0,    29,
      30,    18,    31,    32,     0,    19,     0,    20,     0,    21,
       0,     0,     0,    22,    20,    23,     0,    24,     0,     0,
      25,    55,    23,    46,    26,     0,    56,    20,    27,    47,
       0,     0,     0,     0,    28,    23,     0,    48,     0,   251,
       0,     0,    20,     0,    29,    30,     0,    31,    32,     0,
      23,    29,    30,     0,    31,   121,     0,   116,     0,     0,
     122,    20,     0,    47,    29,    30,    20,    31,    49,    23,
       0,    48,   116,   166,    23,     0,    20,   265,    47,    29,
      30,    46,    31,     0,    23,    20,    48,    47,   168,     0,
       0,   286,     0,    23,     0,    48,     0,     0,    29,    30,
       0,    31,    49,    29,    30,     0,    31,     0,     0,     0,
       0,     0,     0,    29,    30,   116,    31,    49,     0,    20,
       0,    47,    29,    30,     0,    31,    49,    23,    46,    48,
       0,   230,    20,    46,    47,   272,     0,    20,     0,    47,
      23,     0,    48,     0,     0,    23,    20,    48,     0,   274,
       0,     0,     0,     0,    23,     0,    29,    30,     0,    31,
      49,     0,     0,     0,     0,     0,     0,     0,     0,    29,
      30,   291,    31,    49,    29,    30,   116,    31,    49,     0,
      20,    46,    47,    29,    30,    20,    31,    47,    23,     0,
      48,    20,   310,    23,   116,    48,     0,     0,    20,    23,
      47,     0,     0,     0,    20,     0,    23,     0,    48,     0,
       0,     0,    23,     0,     0,     0,     0,    29,    30,    20,
      31,    49,    29,    30,   297,    31,    49,    23,    29,    30,
       0,    31,    20,     0,     0,    29,    30,   298,    31,    49,
      23,    29,    30,    20,    31,     0,     0,     0,     0,     0,
     300,    23,     0,    20,     0,     0,    29,    30,     0,    31,
      20,    23,     0,     0,     0,     0,    20,   303,    23,    29,
      30,    20,    31,     0,    23,     0,     0,     0,   304,    23,
      29,    30,     0,    31,   306,   316,    20,     0,     0,     0,
      29,    30,     0,    31,    23,     0,   317,    29,    30,   325,
      31,     0,    20,    29,    30,     0,    31,    20,    29,    30,
      23,    31,    20,     0,     0,    23,     0,   327,     0,     0,
      23,    20,     0,    29,    30,     0,    31,     0,     0,    23,
       0,     0,     0,     0,     0,     0,     0,   330,   332,    29,
      30,     0,    31,     0,    29,    30,   335,    31,     0,    29,
      30,     0,    31,     0,     0,     0,     0,     0,    29,    30,
       0,    31
};

static const yytype_int16 yycheck[] =
{
       7,    52,   151,    80,     4,    55,    57,   135,     8,    22,
      19,    22,    12,     3,     4,    22,    29,    19,    29,    26,
     265,    19,     5,     6,    22,    32,    33,    10,     5,     6,
       5,     5,     4,    10,    22,    10,    10,    46,    45,    27,
      49,     7,     8,     0,    46,   212,   213,    49,    19,    56,
     101,    22,    46,    60,   251,    49,    63,     5,   303,   304,
     110,   112,     5,    70,    11,    72,    73,   261,   196,    76,
      77,   121,   149,    80,    81,    82,    36,    37,    85,    86,
       7,     5,     5,    90,    13,   330,    17,    23,    25,   286,
      23,   100,    60,   260,   291,   104,    15,    23,   100,   108,
      17,    23,   104,   297,   298,    23,   108,   116,   115,    60,
      21,   118,    19,   164,   116,   122,   123,   124,   169,   316,
     317,   128,   173,    29,    34,    30,   176,    40,    43,   136,
     137,   325,    40,   300,   141,   142,   143,    38,   335,   306,
     289,    21,   149,   150,   151,    42,    48,    46,    19,    30,
     157,   158,    29,    17,   161,    40,   163,   166,    36,     9,
     327,    40,    60,    52,   166,   332,    50,    54,    18,    60,
      46,   320,    21,    30,   225,   182,    26,    50,    36,    44,
     187,   188,    41,    46,   191,   192,    21,    30,    41,     4,
      15,   198,   137,   143,   201,   202,   116,   161,   205,   129,
      25,    -1,    27,    28,   211,    55,    56,    -1,    58,    -1,
      -1,    -1,    -1,    18,     9,   222,    -1,    -1,    -1,   228,
     229,    26,    -1,    18,   275,    -1,   228,   229,   235,    -1,
     237,    26,   239,    -1,    -1,    -1,    -1,   244,   245,    -1,
      -1,    46,    47,    -1,    49,    -1,    -1,   254,   255,    -1,
      55,    56,    -1,    58,   261,    -1,    -1,    -1,   265,    -1,
      55,    56,    -1,    58,   271,    -1,    -1,    15,    -1,    -1,
      18,    19,    -1,   280,    -1,   282,    -1,    25,   285,    27,
      28,    -1,   289,    -1,    -1,    -1,    12,   294,    14,    -1,
     297,   298,    18,    -1,    20,    43,   303,   304,    46,    -1,
      26,    49,    28,    -1,    52,    -1,    18,    55,    -1,    57,
     135,    -1,    -1,   320,    26,    -1,    -1,    -1,   325,    -1,
      32,    33,    -1,   330,    -1,    -1,    74,    -1,   153,    55,
      56,   156,    58,    59,    60,    83,    -1,    -1,    -1,    87,
      88,    -1,    -1,    55,    56,    -1,    58,    -1,    -1,    -1,
      11,    12,   100,   101,    -1,    16,   104,    18,    -1,    20,
     108,    -1,   110,    24,   112,    26,    -1,    28,   116,    18,
      31,   196,    -1,   121,    35,    24,    -1,    26,    39,   204,
      -1,    -1,    -1,    -1,    45,   210,    -1,   135,    -1,    -1,
     215,    40,    41,   218,    55,    56,   221,    58,    59,    -1,
      -1,    -1,    -1,    -1,    -1,   153,    55,    56,   156,    58,
      -1,   159,    -1,    -1,    -1,    -1,   164,    -1,   166,    -1,
      -1,   169,    -1,   248,    -1,   173,    -1,    -1,   176,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   263,   264,
      13,    14,   267,   268,    12,    18,    14,    20,   196,    -1,
      18,    -1,    20,    26,    -1,    28,   204,    -1,    26,    -1,
      28,   209,   210,   288,   212,   213,   214,   215,    -1,    -1,
     218,    -1,    -1,   221,    -1,    -1,    -1,   225,    -1,    -1,
     228,   229,    55,    56,    -1,    58,    59,    55,    56,    -1,
      58,    59,    60,    14,    15,    -1,    -1,    18,    -1,    20,
     248,    -1,    -1,    -1,   252,    26,    -1,    28,   256,    -1,
      -1,    -1,   260,    -1,   262,   263,   264,    -1,   266,   267,
     268,   269,    -1,    18,    -1,    -1,    -1,   275,    18,    24,
      -1,    26,    -1,    -1,    55,    56,    26,    58,    59,   287,
     288,    -1,    32,    33,    -1,    40,    41,    -1,    -1,    -1,
      -1,   299,   300,   301,    -1,    -1,    -1,   305,   306,   307,
      55,    56,    -1,    58,    -1,    55,    56,    -1,    58,    12,
     318,    -1,    -1,    16,    -1,    18,    -1,    20,    -1,   327,
      -1,    24,    -1,    26,   332,    28,    -1,    -1,    31,    -1,
      -1,    -1,    35,    -1,    -1,    12,    39,    -1,    -1,    16,
      -1,    18,    45,    20,    -1,    -1,    -1,    24,    -1,    26,
      -1,    28,    55,    56,    31,    58,    59,    60,    35,    36,
      37,    12,    39,    18,    -1,    16,    -1,    18,    45,    20,
      -1,    26,    -1,    24,    25,    26,    -1,    28,    55,    56,
      31,    58,    59,    12,    35,    -1,    -1,    16,    39,    18,
      -1,    20,    21,    -1,    45,    24,    51,    26,    -1,    28,
      55,    56,    31,    58,    55,    56,    35,    58,    59,    12,
      39,    -1,    -1,    16,    -1,    18,    45,    20,    -1,    -1,
      -1,    24,    -1,    26,    -1,    28,    55,    56,    31,    58,
      59,    34,    35,    -1,    -1,    12,    39,    -1,    -1,    16,
      -1,    18,    45,    20,    -1,    -1,    -1,    24,    -1,    26,
      -1,    28,    55,    56,    31,    58,    59,    -1,    35,    13,
      14,    38,    39,    -1,    18,    -1,    20,    -1,    45,    -1,
      -1,    -1,    26,    -1,    28,    -1,    -1,    18,    55,    56,
      12,    58,    59,    -1,    16,    26,    18,    -1,    20,    -1,
      -1,    -1,    24,    -1,    26,    -1,    28,    -1,    -1,    31,
      -1,    55,    56,    35,    58,    59,    47,    39,    -1,    -1,
      42,    -1,    -1,    45,    55,    56,    -1,    58,    -1,    -1,
      -1,    -1,    -1,    55,    56,    12,    58,    59,    -1,    16,
      -1,    18,    -1,    20,    -1,    -1,    -1,    24,    -1,    26,
      -1,    28,    18,    12,    31,    -1,    -1,    16,    35,    18,
      26,    20,    39,    -1,    -1,    24,    -1,    26,    45,    28,
      -1,    48,    31,    -1,    -1,    -1,    35,    36,    55,    56,
      39,    58,    59,    -1,    50,    51,    45,    53,    -1,    55,
      56,    -1,    58,    -1,    -1,    -1,    55,    56,    12,    58,
      59,    -1,    16,    -1,    18,    -1,    20,    -1,    -1,    -1,
      24,    -1,    26,    -1,    28,    18,    12,    31,    -1,    -1,
      16,    35,    18,    26,    20,    39,    -1,    -1,    24,    -1,
      26,    45,    28,    -1,    -1,    31,    -1,    -1,    52,    35,
      -1,    55,    56,    39,    58,    59,    49,    -1,    -1,    45,
      -1,    -1,    55,    56,    -1,    58,    -1,    -1,    54,    55,
      56,    12,    58,    59,    -1,    16,    -1,    18,    -1,    20,
      21,    -1,    -1,    24,    -1,    26,    -1,    28,    18,    12,
      31,    -1,    -1,    16,    35,    18,    26,    20,    39,    -1,
      -1,    24,    -1,    26,    45,    28,    -1,    30,    31,    -1,
      -1,    -1,    35,    -1,    55,    56,    39,    58,    59,    -1,
      50,    -1,    45,    -1,    -1,    55,    56,    -1,    58,    -1,
      -1,    -1,    55,    56,    12,    58,    59,    -1,    16,    -1,
      18,    -1,    20,    -1,    -1,    -1,    24,    -1,    26,    -1,
      28,    -1,    -1,    31,    -1,    18,    12,    35,    36,    -1,
      16,    39,    18,    26,    20,    -1,    -1,    45,    24,    -1,
      26,    -1,    28,    -1,    -1,    31,    -1,    55,    56,    35,
      58,    59,    -1,    39,    -1,    -1,    49,    -1,    44,    45,
      -1,    -1,    55,    56,    -1,    58,    -1,    -1,    -1,    55,
      56,    12,    58,    59,    -1,    16,    -1,    18,    -1,    20,
      -1,    -1,    -1,    24,    18,    26,    -1,    28,    -1,    -1,
      31,    12,    26,    14,    35,    -1,    17,    18,    39,    20,
      -1,    -1,    -1,    -1,    45,    26,    -1,    28,    -1,    43,
      -1,    -1,    18,    -1,    55,    56,    -1,    58,    59,    -1,
      26,    55,    56,    -1,    58,    12,    -1,    14,    -1,    -1,
      17,    18,    -1,    20,    55,    56,    18,    58,    59,    26,
      -1,    28,    14,    15,    26,    -1,    18,    53,    20,    55,
      56,    14,    58,    -1,    26,    18,    28,    20,    21,    -1,
      -1,    43,    -1,    26,    -1,    28,    -1,    -1,    55,    56,
      -1,    58,    59,    55,    56,    -1,    58,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    14,    58,    59,    -1,    18,
      -1,    20,    55,    56,    -1,    58,    59,    26,    14,    28,
      -1,    30,    18,    14,    20,    21,    -1,    18,    -1,    20,
      26,    -1,    28,    -1,    -1,    26,    18,    28,    -1,    30,
      -1,    -1,    -1,    -1,    26,    -1,    55,    56,    -1,    58,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      56,    43,    58,    59,    55,    56,    14,    58,    59,    -1,
      18,    14,    20,    55,    56,    18,    58,    20,    26,    -1,
      28,    18,    30,    26,    14,    28,    -1,    -1,    18,    26,
      20,    -1,    -1,    -1,    18,    -1,    26,    -1,    28,    -1,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    55,    56,    18,
      58,    59,    55,    56,    51,    58,    59,    26,    55,    56,
      -1,    58,    18,    -1,    -1,    55,    56,    51,    58,    59,
      26,    55,    56,    18,    58,    -1,    -1,    -1,    -1,    -1,
      49,    26,    -1,    18,    -1,    -1,    55,    56,    -1,    58,
      18,    26,    -1,    -1,    -1,    -1,    18,    53,    26,    55,
      56,    18,    58,    -1,    26,    -1,    -1,    -1,    53,    26,
      55,    56,    -1,    58,    49,    43,    18,    -1,    -1,    -1,
      55,    56,    -1,    58,    26,    -1,    43,    55,    56,    51,
      58,    -1,    18,    55,    56,    -1,    58,    18,    55,    56,
      26,    58,    18,    -1,    -1,    26,    -1,    49,    -1,    -1,
      26,    18,    -1,    55,    56,    -1,    58,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    49,    55,
      56,    -1,    58,    -1,    55,    56,    43,    58,    -1,    55,
      56,    -1,    58,    -1,    -1,    -1,    -1,    -1,    55,    56,
      -1,    58
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
      89,    50,    46,    85,    70,    69,    73,    21,    19,    29,
      30,    30,    60,    72,    70,    17,    70,    21,    70,    30,
      70,    70,    79,    70,    36,    36,    70,    70,    44,    70,
      84,    43,    67,    70,    40,    40,    67,    70,    87,    87,
      49,    51,    67,    52,    50,    53,    67,    54,    50,    67,
      70,    46,    21,    73,    30,    69,    73,    60,    70,    70,
      21,    70,    30,    70,    70,    36,    43,    67,    44,    41,
      84,    43,    70,    70,    46,    87,    88,    51,    51,    67,
      49,    67,    89,    53,    53,    67,    49,    67,    70,    21,
      30,    30,    70,    70,    70,    84,    43,    43,    67,    83,
      41,    84,    70,    88,    88,    51,    87,    49,    89,    89,
      53,    87,    49,    84,    84,    43,    83,    88,    87,    89,
      87,    84
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
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      78,    78,    78,    78,    78,    79,    79,    79,    79,    79,
      79,    80,    80,    81,    81,    81,    81,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    83,
      83,    83,    83,    83,    84,    84,    84,    84,    84,    84,
      84,    84,    85,    85,    85,    85,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      88,    88,    88,    88,    88,    88,    88,    88,    89,    89,
      89,    89,    89,    89,    89,    89,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    91,    91,
      92,    92,    93,    93,    93,    93,    93,    93,    93,    93,
      94,    94,    94,    94,    94,    94
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
       3,     4,     5,     3,     5,     3,     5,     3,     2,     4,
       3,     2,     2,     1,     2,     3,     4,     3,     5,     4,
       2,     2,     1,     3,     4,     3,     1,     4,     2,     2,
       3,     2,     1,     1,     2,     3,     2,     1,     2,     3,
       4,     2,     3,     4,     5,     3,     4,     4,     5,     4,
       5,     6,     3,     5,     2,     4,     1,     3,     3,     5,
       2,     4,     2,     1,     3,     2,     3,     4,     4,     5,
       5,     3,     6,     4,     1,     2,     1,     2,     3,     3,
       2,     3,     4,     4,     3,     4,     5,     5,     6,     6,
       1,     2,     2,     3,     3,     4,     4,     5,     1,     2,
       2,     3,     3,     4,     4,     5,     4,     3,     4,     2,
       1,     5,     4,     5,     3,     2,     6,     5,     2,     1,
       3,     1,     6,     4,     3,     5,     3,     2,     5,     4,
       4,     5,     3,     5,     6,     4
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
#line 1735 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 59 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); cout<<concat(p,(yyvsp[0].value))<<endl; }
#line 1741 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 60 "Parser.y" /* yacc.c:1646  */
    { cout<<concat((yyvsp[-1].value),(yyvsp[0].value))<<endl; }
#line 1747 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 61 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*y=concat(p,(yyvsp[-1].value)); cout<<concat(y,(yyvsp[0].value))<<endl; }
#line 1753 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 62 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); cout<<concat(p,(yyvsp[0].value))<<endl; }
#line 1759 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 63 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*y=concat(p,(yyvsp[-2].value)),*x=concat(y,(yyvsp[-1].value)); cout<<concat(x,(yyvsp[0].value))<<endl;}
#line 1765 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 64 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*y=concat(p,(yyvsp[-1].value)); cout<<concat(y,(yyvsp[0].value))<<endl; }
#line 1771 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 65 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*y=concat(p,(yyvsp[-1].value)); cout<<concat(y,(yyvsp[0].value))<<endl; }
#line 1777 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 66 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); cout<<concat(p,(yyvsp[0].value))<<endl; }
#line 1783 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 69 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 1789 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 70 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1795 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 73 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1801 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 74 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 1807 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 77 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 1813 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 78 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1819 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 81 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 1825 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 82 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 1831 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 83 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 1837 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 84 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1843 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 85 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 1849 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 88 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1855 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 89 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 1861 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 92 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 1867 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 93 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1873 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 94 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1879 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 95 "Parser.y" /* yacc.c:1646  */
    {}
#line 1885 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 98 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1891 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 99 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 1897 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 102 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1903 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 103 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1909 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 104 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1915 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 105 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1921 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 106 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value);}
#line 1927 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 107 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1933 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 108 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1939 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 109 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1945 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 110 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1951 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 111 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1957 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 112 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1963 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 113 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1969 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 116 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1975 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 117 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 1981 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 118 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 1987 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 119 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 1993 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 122 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 1999 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 123 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2005 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 124 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=(yyvsp[0].value); }
#line 2011 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 125 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2017 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 126 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2023 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 127 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2029 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 130 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2035 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 131 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2041 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 134 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2047 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 135 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2053 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 136 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2059 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 137 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2065 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 138 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2071 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 139 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2077 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 140 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2083 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 143 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2089 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 144 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2095 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 145 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2101 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 146 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2107 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 147 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2113 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 150 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2119 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 151 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2125 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 152 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2131 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 153 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2137 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 156 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2143 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 157 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2149 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 158 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2155 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 159 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2161 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 160 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2167 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 161 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2173 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 162 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value)); (yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2179 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 163 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2185 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 164 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value));}
#line 2191 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 165 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value)); (yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2197 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 168 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2203 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 169 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2209 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 170 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2215 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 171 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2221 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 172 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value)); (yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2227 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 175 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2233 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 176 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2239 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 177 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value)); (yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2245 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 178 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2251 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 179 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2257 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 180 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2263 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 183 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2269 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 184 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2275 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 187 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2281 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 188 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2287 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 189 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2293 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 190 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2299 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 193 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2305 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 194 "Parser.y" /* yacc.c:1646  */
    { (yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2311 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 195 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2317 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 196 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value)); (yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2323 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 197 "Parser.y" /* yacc.c:1646  */
    {concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2329 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 198 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2335 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 199 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value)); (yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2341 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 200 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2347 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 201 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2353 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 202 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value)); (yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2359 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 203 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value)); (yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2365 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 204 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2371 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 207 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value)); (yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2377 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 208 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2383 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 209 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-5].value),(yyvsp[-4].value)),*x=concat(p,(yyvsp[-3].value)),*y=concat(x,(yyvsp[-2].value)),*z=concat(y,(yyvsp[-1].value)); (yyval.value)=concat(z,(yyvsp[0].value)); }
#line 2389 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 210 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2395 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 211 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2401 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 214 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2407 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 215 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value)); (yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2413 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 216 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2419 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 217 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2425 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 218 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2431 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 219 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2437 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 220 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2443 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 221 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2449 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 224 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2455 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 225 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2461 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 226 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2467 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 227 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2473 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 230 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2479 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 231 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2485 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 232 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2491 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 233 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2497 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 234 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2503 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 235 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2509 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 236 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-5].value),(yyvsp[-4].value)),*x=concat(p,(yyvsp[-3].value)),*y=concat(x,(yyvsp[-2].value)),*z=concat(y,(yyvsp[-1].value)); (yyval.value)=concat(z,(yyvsp[0].value)); }
#line 2515 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 237 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2521 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 238 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2527 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 239 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2533 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 242 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2539 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 243 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2545 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 244 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2551 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 245 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2557 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 246 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2563 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 247 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2569 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 248 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2575 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 249 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2581 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 250 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2587 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 251 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2593 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 252 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2599 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 253 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2605 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 254 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-5].value),(yyvsp[-4].value)),*x=concat(p,(yyvsp[-3].value)),*y=concat(x,(yyvsp[-2].value)),*z=concat(y,(yyvsp[-1].value)); (yyval.value)=concat(z,(yyvsp[0].value)); }
#line 2611 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 255 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-5].value),(yyvsp[-4].value)),*x=concat(p,(yyvsp[-3].value)),*y=concat(x,(yyvsp[-2].value)),*z=concat(y,(yyvsp[-1].value)); (yyval.value)=concat(z,(yyvsp[0].value)); }
#line 2617 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 258 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2623 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 259 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2629 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 260 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2635 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 261 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2641 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 262 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2647 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 263 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2653 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 264 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2659 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 265 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2665 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 268 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2671 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 269 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2677 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 270 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2683 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 271 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2689 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 272 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2695 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 273 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2701 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 274 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2707 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 275 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2713 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 278 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2719 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 279 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2725 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 280 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2731 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 281 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2737 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 282 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2743 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 283 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2749 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 284 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2755 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 285 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2761 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 286 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2767 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 287 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2773 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 288 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-5].value),(yyvsp[-4].value)),*x=concat(p,(yyvsp[-3].value)),*y=concat(x,(yyvsp[-2].value)),*z=concat(y,(yyvsp[-1].value)); (yyval.value)=concat(z,(yyvsp[0].value)); }
#line 2779 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 289 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2785 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 292 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2791 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 293 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2797 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 296 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2803 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 297 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=(yyvsp[0].value); }
#line 2809 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 300 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-5].value),(yyvsp[-4].value)),*x=concat(p,(yyvsp[-3].value)),*y=concat(x,(yyvsp[-2].value)),*z=concat(y,(yyvsp[-1].value)); (yyval.value)=concat(z,(yyvsp[0].value)); }
#line 2815 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 301 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2821 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 302 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2827 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 303 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2833 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 304 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2839 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 305 "Parser.y" /* yacc.c:1646  */
    {(yyval.value)=concat((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2845 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 306 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2851 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 307 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2857 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 310 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2863 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 311 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2869 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 312 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-2].value),(yyvsp[-1].value)); (yyval.value)=concat(p,(yyvsp[0].value)); }
#line 2875 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 313 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-4].value),(yyvsp[-3].value)),*x=concat(p,(yyvsp[-2].value)),*y=concat(x,(yyvsp[-1].value)); (yyval.value)=concat(y,(yyvsp[0].value)); }
#line 2881 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 314 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-5].value),(yyvsp[-4].value)),*x=concat(p,(yyvsp[-3].value)),*y=concat(x,(yyvsp[-2].value)),*z=concat(y,(yyvsp[-1].value)); (yyval.value)=concat(z,(yyvsp[0].value)); }
#line 2887 "Parser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 315 "Parser.y" /* yacc.c:1646  */
    { char *p=concat((yyvsp[-3].value),(yyvsp[-2].value)),*x=concat(p,(yyvsp[-1].value));(yyval.value)=concat(x,(yyvsp[0].value)); }
#line 2893 "Parser.tab.c" /* yacc.c:1646  */
    break;


#line 2897 "Parser.tab.c" /* yacc.c:1646  */
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
#line 318 "Parser.y" /* yacc.c:1906  */

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
