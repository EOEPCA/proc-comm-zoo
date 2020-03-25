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


/* Substitute the variable and function names.  */
#define yyparse         srparse
#define yylex           srlex
#define yyerror         srerror
#define yydebug         srdebug
#define yynerrs         srnerrs

#define yylval          srlval
#define yychar          srchar

/* Copy the first part of user declarations.  */
#line 24 "service_conf.y" /* yacc.c:339  */


#include <string>
#include <stdio.h>
#include <ctype.h>
#include <service.h>

static int tmp_count=1;
static int defaultsc=0;
static bool wait_maincontent=true;
static bool wait_mainmetadata=false;
static bool wait_mainap=false;
static bool wait_metadata=false;
static bool wait_ap=false;
static bool wait_nested=false;
static bool wait_inputs=false;
static bool wait_defaults=false;
static bool wait_supporteds=false;
static bool wait_outputs=false;
static bool wait_data=false;
static service* my_service=NULL;
static map* current_content=NULL;
static elements* current_element=NULL;
static char* curr_key;
static int debug=0;
static int data=-1;
static int previous_data=0;
static int current_data=0;
static int nested_level=0;
// namespace
using namespace std;

// srerror
void srerror(const char *s);

// usage ()
void usage(void) ;

// srdebug
extern int srdebug;

extern char srtext[];

// srlineno
extern int srlineno;

// srin
extern FILE* srin;

// srlex
extern int srlex(void);
extern int srlex_destroy(void);


#line 129 "service_conf.tab.c" /* yacc.c:339  */

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
   by #include "service_conf.tab.h".  */
#ifndef YY_SR_SERVICE_CONF_TAB_H_INCLUDED
# define YY_SR_SERVICE_CONF_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int srdebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ID = 258,
    CHAINE = 259,
    INFCAR = 260,
    SUPCAR = 261,
    SLASH = 262,
    Eq = 263,
    CHARDATA = 264,
    ATTVALUE = 265,
    PAIR = 266,
    SPAIR = 267,
    EPAIR = 268,
    ANID = 269,
    PI = 270,
    PIERROR = 271,
    ERREURGENERALE = 272,
    CDATA = 273,
    WHITESPACE = 274,
    NEWLINE = 275
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 82 "service_conf.y" /* yacc.c:355  */
char * s;char* chaine;char* key;char* val;

#line 193 "service_conf.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE srlval;

int srparse (void);

#endif /* !YY_SR_SERVICE_CONF_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 210 "service_conf.tab.c" /* yacc.c:358  */

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   46

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  21
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  13
/* YYNRULES -- Number of rules.  */
#define YYNRULES  28
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  43

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   275

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
      15,    16,    17,    18,    19,    20
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   112,   112,   113,   117,   118,   119,   128,   135,   144,
     330,   331,   341,   356,   428,   589,   590,   591,   593,   594,
     595,   596,   597,   598,   610,   613,   614,   653,   658
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "CHAINE", "INFCAR", "SUPCAR",
  "SLASH", "Eq", "CHARDATA", "ATTVALUE", "PAIR", "SPAIR", "EPAIR", "ANID",
  "PI", "PIERROR", "ERREURGENERALE", "CDATA", "WHITESPACE", "NEWLINE",
  "$accept", "document", "miscetoile", "element", "STag",
  "Attributeetoile", "attribute", "EmptyElemTag", "ETag", "contentetoile",
  "texteinterbalise", "pair", "processid", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275
};
# endif

#define YYPACT_NINF -7

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-7)))

#define YYTABLE_NINF -7

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      19,     2,    21,    -5,    -7,    11,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,    -7,    14,     7,    -5,    25,    -2,
      -7,    -7,    -7,    30,    -7,    27,    -7,    36,    31,    -7,
      34,    -7,    -7
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      23,     0,     0,     0,     1,     0,     5,     4,     6,    23,
       8,    24,    25,    27,    26,    28,    17,    16,    22,    18,
      15,    21,    19,    20,    11,     2,     0,     0,     0,     0,
       7,    20,     3,     0,     9,     0,    10,     0,     0,    13,
       0,    12,    14
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
      -7,    15,    35,    42,    -7,    -7,    -7,    -7,    -7,    -6,
      -7,    -7,    43
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,    20,     9,    28,    36,    10,    30,     3,
      21,    22,    31
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
       5,    24,     4,    26,    11,    37,    12,    13,    14,    15,
      16,    17,    29,    18,    24,    19,    11,    27,    12,    13,
      14,    15,    16,    17,    -6,    18,     5,    19,    33,     6,
       7,    34,    35,    39,    -6,    -6,     6,     7,    38,    40,
      42,    41,    32,    25,     8,     0,    23
};

static const yytype_int8 yycheck[] =
{
       5,     3,     0,     9,     9,     7,    11,    12,    13,    14,
      15,    16,     5,    18,     3,    20,     9,    23,    11,    12,
      13,    14,    15,    16,     5,    18,     5,    20,     3,    15,
      16,     6,     7,     6,    15,    16,    15,    16,     8,     3,
       6,    10,    27,     8,     2,    -1,     3
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    22,    23,    30,     0,     5,    15,    16,    24,    25,
      28,     9,    11,    12,    13,    14,    15,    16,    18,    20,
      24,    31,    32,    33,     3,    23,    30,    30,    26,     5,
      29,    33,    22,     3,     6,     7,    27,     7,     8,     6,
       3,    10,     6
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    21,    22,    22,    23,    23,    23,    24,    24,    25,
      26,    26,    27,    28,    29,    30,    30,    30,    30,    30,
      30,    30,    30,    30,    31,    32,    32,    32,    33
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     4,     2,     2,     0,     3,     1,     4,
       2,     0,     3,     5,     4,     2,     2,     2,     2,     2,
       2,     2,     2,     0,     1,     1,     1,     1,     1
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
#line 112 "service_conf.y" /* yacc.c:1646  */
    {}
#line 1311 "service_conf.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 113 "service_conf.y" /* yacc.c:1646  */
    {}
#line 1317 "service_conf.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 117 "service_conf.y" /* yacc.c:1646  */
    {  srerror("processing instruction beginning with <?xml ?> impossible\n");}
#line 1323 "service_conf.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 118 "service_conf.y" /* yacc.c:1646  */
    {}
#line 1329 "service_conf.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 119 "service_conf.y" /* yacc.c:1646  */
    {}
#line 1335 "service_conf.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 129 "service_conf.y" /* yacc.c:1646  */
    {
}
#line 1342 "service_conf.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 135 "service_conf.y" /* yacc.c:1646  */
    {}
#line 1348 "service_conf.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 145 "service_conf.y" /* yacc.c:1646  */
    {
#ifdef DEBUG_SERVICE_CONF
  fprintf(stderr,"STag (%s %d) %s %d %d \n",__FILE__,__LINE__,(yyvsp[-2].s),current_data,previous_data);
  fflush(stderr);
  dumpMap(current_content);
#endif
  if(my_service->content==NULL && current_content!=NULL){
#ifdef DEBUG_SERVICE_CONF
    fprintf(stderr,"NO CONTENT\n");
#endif
    addMapToMap(&my_service->content,current_content);
    freeMap(&current_content);
    free(current_content);
    current_content=NULL;
    my_service->metadata=NULL;
    my_service->additional_parameters=NULL;
    wait_maincontent=false;
  }
  if(strncasecmp((yyvsp[-2].s),"EndNested",9)==0){
#ifdef DEBUG_SERVICE_CONF
    fprintf(stderr,"(ENDNESTED - %d) \n",__LINE__);
    fflush(stderr);
#endif
    nested_level-=1;
    if(nested_level==0){
      wait_nested=false;
    }
  }

  if(strncasecmp((yyvsp[-2].s),"DataInputs",10)==0){
    if(current_element==NULL){
#ifdef DEBUG_SERVICE_CONF
      fprintf(stderr,"(DATAINPUTS - %d) FREE current_element\n",__LINE__);
#endif
      freeElements(&current_element);
      free(current_element);
#ifdef DEBUG_SERVICE_CONF
      fprintf(stderr,"(DATAINPUTS - %d) ALLOCATE current_element\n",__LINE__);
#endif
      current_element=NULL;
      current_element=createEmptyElements();
    }
    wait_inputs=true;
    current_data=1;
    previous_data=1;
  }
  else
    if(strncasecmp((yyvsp[-2].s),"DataOutputs",11)==0){
      if(wait_inputs==true){
#ifdef DEBUG_SERVICE_CONF
	fprintf(stderr,"(DATAOUTPUTS %d) DUP INPUTS current_element\n",__LINE__);
	fprintf(stderr,"CURRENT_ELEMENT\n");
	dumpElements(current_element);
	fprintf(stderr,"SERVICE INPUTS\n");
	dumpElements(my_service->inputs);
	dumpService(my_service);
#endif	
	if(my_service->inputs==NULL && current_element!=NULL && current_element->name!=NULL){
	  my_service->inputs=dupElements(current_element);
	  my_service->inputs->next=NULL;
	  freeElements(&current_element);
	}
	else if(current_element!=NULL && current_element->name!=NULL){
	  addToElements(&my_service->inputs,current_element);
	  freeElements(&current_element);
	}
#ifdef DEBUG_SERVICE_CONF
	fprintf(stderr,"CURRENT_ELEMENT\n");
	dumpElements(current_element);
	fprintf(stderr,"SERVICE INPUTS\n");
	dumpElements(my_service->inputs);
	fprintf(stderr,"(DATAOUTPUTS) FREE current_element\n");
#endif
	free(current_element);
	current_element=NULL;
	wait_inputs=false;
      }
      if(current_element==NULL){
#ifdef DEBUG_SERVICE_CONF
	fprintf(stderr,"(DATAOUTPUTS - %d) ALLOCATE current_element (%s)\n",__LINE__,(yyvsp[-2].s));
	fflush(stderr);
#endif
	current_element=createEmptyElements();
      }
      wait_outputs=1;
      current_data=2;
      previous_data=2;
    }
    else
      if(strncasecmp((yyvsp[-2].s),"MetaData",8)==0 ||
	 strncasecmp((yyvsp[-2].s),"AdditionalParameters",8)==0){
	if(strncasecmp((yyvsp[-2].s),"AdditionalParameters",8)==0){
	  previous_data=current_data;
	  current_data=4;
	  if(current_element!=NULL){
#ifdef DEBUG_SERVICE_CONF
	    fprintf(stderr,"add current_content to current_element->content\n");
	    fprintf(stderr,"LINE %d",__LINE__);
#endif
	    if(wait_mainmetadata)
	      addMapToMap(&my_service->metadata,current_content);
	    else
	      if(wait_metadata)
		addMapToMap(&current_element->metadata,current_content);
	      else
		addMapToMap(&current_element->content,current_content);		
	    freeMap(&current_content);
	    free(current_content);
	    if(previous_data==1 || previous_data==2)
	      wait_ap=true;
	    else
	      wait_mainap=true;
	  }
	  else{
	    if(previous_data==1 || previous_data==2)
	      wait_ap=true;
	    else
	      wait_mainap=true;
	  }
	}else{
	  previous_data=current_data;
	  current_data=3;
	  if(current_element!=NULL){
#ifdef DEBUG_SERVICE_CONF
	    fprintf(stderr,"add current_content to current_element->content\n");
	    fprintf(stderr,"LINE %d",__LINE__);
#endif
	    addMapToMap(&current_element->content,current_content);
	    freeMap(&current_content);
	    free(current_content);
	    if(previous_data==1 || previous_data==2)
	      wait_metadata=true;
	    else
	      wait_mainmetadata=true;
	  }
	  else{
	    if(previous_data==1 || previous_data==2)
	      wait_metadata=true;
	    else
	      wait_mainmetadata=true;
	  }
	}
	current_content=NULL;
      }
      else
	if(strncasecmp((yyvsp[-2].s),"ComplexData",11)==0 || strncasecmp((yyvsp[-2].s),"LiteralData",10)==0
	   || strncasecmp((yyvsp[-2].s),"ComplexOutput",13)==0 || strncasecmp((yyvsp[-2].s),"LiteralOutput",12)==0
	   || strncasecmp((yyvsp[-2].s),"BoundingBoxOutput",13)==0 || strncasecmp((yyvsp[-2].s),"BoundingBoxData",12)==0){
	  current_data=4;
	  addMapToMap(&current_element->content,current_content);
	  freeMap(&current_content);
	  free(current_content);
	  current_element->next=NULL;
	  if((yyvsp[-2].s)!=NULL)
	    current_element->format=zStrdup((yyvsp[-2].s));
	  current_element->defaults=NULL;
	  current_element->supported=NULL;
	  current_element->child=NULL;
	  current_content=NULL;
	}
	else
	  if(strncasecmp((yyvsp[-2].s),"Default",7)==0){
	    wait_defaults=true;
	    current_data=5;
	  }
	  else
	    if(strncasecmp((yyvsp[-2].s),"Supported",9)==0){
	      wait_supporteds=true;
	      if(wait_defaults==true){
		defaultsc++;
	      }
	      current_data=5;
	    }
#ifdef DEBUG_SERVICE_CONF
  fprintf(stderr,"* Identifiant : %s\n",(yyvsp[-2].s));
  fflush(stderr);
#endif
}
#line 1531 "service_conf.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 330 "service_conf.y" /* yacc.c:1646  */
    {}
#line 1537 "service_conf.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 331 "service_conf.y" /* yacc.c:1646  */
    {/* Epsilon */}
#line 1543 "service_conf.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 342 "service_conf.y" /* yacc.c:1646  */
    {
#ifdef DEBUG_SERVICE_CONF
  printf ("attribute : %s\n",(yyvsp[-2].s)) ;
#endif
}
#line 1553 "service_conf.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 356 "service_conf.y" /* yacc.c:1646  */
    {
#ifdef DEBUG_SERVICE_CONF
  fprintf(stderr,"(%s %d)\n",__FILE__,__LINE__);
#endif
   if(strncasecmp((yyvsp[-3].s),"Default",7)==0){
     wait_defaults=false;
     current_data=previous_data;
     if(current_element->defaults==NULL){
       current_element->defaults=(iotype*)malloc(IOTYPE_SIZE);
       current_element->defaults->content=NULL;
     }
     addMapToMap(&current_element->defaults->content,current_content);
     freeMap(&current_content);
     free(current_content);
     current_element->defaults->next=NULL;
     wait_defaults=false;
     current_content=NULL;
     current_element->supported=NULL;
     current_element->child=NULL;
     current_element->next=NULL;
   }
   if(strncasecmp((yyvsp[-3].s),"EndNested",9)==0){
     if(current_data==1){
       elements* cursor=my_service->inputs;
       while(cursor->next!=NULL)
	 cursor=cursor->next;
       if(nested_level>1){
	 for(int j=0;j<nested_level-1;j++){
	   cursor=cursor->child;
	   while(cursor->next!=NULL)
	     cursor=cursor->next;
	 }
       }
       if(cursor->child==NULL){
	 cursor->child=dupElements(current_element);
       }else{
	 addToElements(&cursor->child,current_element);
       }
     }else{
       if(current_element->name!=NULL){
	 elements* cursor=my_service->outputs;
	 while(cursor->next!=NULL)
	   cursor=cursor->next;
	 if(nested_level>1){
	   for(int j=0;j<nested_level-1;j++){
	     cursor=cursor->child;
	     while(cursor->next!=NULL)
	       cursor=cursor->next;
	   }
	 }
	 if(cursor->child==NULL){
	   cursor->child=dupElements(current_element);
	 }else
	   addToElements(&cursor->child,current_element);
       }
     }
     freeElements(&current_element);
     free(current_element);
     current_element=NULL;
     current_element=createEmptyElements();
     nested_level-=1;
     if(nested_level==0){
       wait_nested=false;       
     }
   }
 }
#line 1624 "service_conf.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 429 "service_conf.y" /* yacc.c:1646  */
    {
#ifdef DEBUG_SERVICE_CONF
  fprintf(stderr,"ETag %s (%s %d) %d %d \n",(yyvsp[-1].s),__FILE__,__LINE__,current_data,previous_data);
#endif
  if(strcmp((yyvsp[-1].s),"DataInputs")==0){
    current_data=1;
    if(current_content!=NULL){
      if(current_element->content==NULL){
	addMapToMap(&current_element->content,current_content);
      }
      freeMap(&current_content);
      free(current_content);
      current_content=NULL;
    }
    if(current_element!=NULL){
      if(my_service->content!=NULL && current_element->name!=NULL){
	if(my_service->inputs==NULL){
	  my_service->inputs=dupElements(current_element);
	  my_service->inputs->next=NULL;
	  tmp_count++;
	}
	else{
	  addToElements(&my_service->inputs,current_element);
	}
	freeElements(&current_element);
	free(current_element);
	current_element=NULL;
      }
    }
  }
  if(strcmp((yyvsp[-1].s),"DataOutputs")==0){
    current_data=2;
  }  
  if(strcmp((yyvsp[-1].s),"AdditionalParameters")==0){
    if(current_content!=NULL){
#ifdef DEBUG_SERVICE_CONF
      fprintf(stderr,"add current_content to current_element->content\n");
      fprintf(stderr,"LINE %d",__LINE__);
#endif
      if(wait_ap){
	current_element->additional_parameters=NULL;
	addMapToMap(&current_element->additional_parameters,current_content);
	current_element->next=NULL;
	current_element->defaults=NULL;
	current_element->supported=NULL;
	current_element->child=NULL;
      }else{
	if(wait_mainap){
	  addMapToMap(&my_service->additional_parameters,current_content);
	}
      }

      freeMap(&current_content);
      free(current_content);
      current_content=NULL;
    }
    current_data=previous_data;
    wait_mainap=false;
    wait_ap=false;
  }
  if(strcmp((yyvsp[-1].s),"MetaData")==0){
    if(current_content!=NULL){
#ifdef DEBUG_SERVICE_CONF
      fprintf(stderr,"add current_content to current_element->content\n");
      fprintf(stderr,"LINE %d",__LINE__);
#endif
      if(wait_metadata){
	current_element->metadata=NULL;
	addMapToMap(&current_element->metadata,current_content);
	current_element->next=NULL;
	current_element->defaults=NULL;
	current_element->supported=NULL;
	current_element->child=NULL;
      }else{
	if(wait_mainmetadata){
	  addMapToMap(&my_service->metadata,current_content);
	}
      }

      freeMap(&current_content);
      free(current_content);
      current_content=NULL;
    }
    current_data=previous_data;
    wait_mainmetadata=false;
    wait_metadata=false;
  }
  if(strcmp((yyvsp[-1].s),"ComplexData")==0 || strcmp((yyvsp[-1].s),"LiteralData")==0 
     || strcmp((yyvsp[-1].s),"ComplexOutput")==0 || strcmp((yyvsp[-1].s),"LiteralOutput")==0){
    if(current_element->format==NULL)
      current_element->format=zStrdup((yyvsp[-1].s));
    current_content=NULL;
  }
  if(strcmp((yyvsp[-1].s),"Default")==0){
    current_data=previous_data;
    if(current_element->defaults==NULL){
      current_element->defaults=(iotype*)malloc(IOTYPE_SIZE);
      current_element->defaults->content=NULL;
    }
    addMapToMap(&current_element->defaults->content,current_content);
    freeMap(&current_content);
    free(current_content);
    current_element->defaults->next=NULL;
    wait_defaults=false;
    current_content=NULL;
    current_element->supported=NULL;
    current_element->child=NULL;
    current_element->next=NULL;
  }
  if(strcmp((yyvsp[-1].s),"Supported")==0){
    current_data=previous_data;
    if(current_element->supported==NULL){
      if(current_content!=NULL){
	current_element->supported=(iotype*)malloc(IOTYPE_SIZE);
	current_element->supported->content=NULL;
	addMapToMap(&current_element->supported->content,current_content);
	freeMap(&current_content);
	free(current_content);
	current_element->supported->next=NULL;
	current_content=NULL;
      }else{
	current_element->supported=NULL;
	current_element->child=NULL;
	current_element->next=NULL;
      }
    }
    else{
#ifdef DEBUG_SERVICE_CONF
      fprintf(stderr,"SECOND SUPPORTED FORMAT !!!!\n");
#endif
      addMapToIoType(&current_element->supported,current_content);
      freeMap(&current_content);
      free(current_content);
      current_content=NULL;
#ifdef DEBUG_SERVICE_CONF
      dumpElements(current_element);
      fprintf(stderr,"SECOND SUPPORTED FORMAT !!!!\n");
#endif
    }
    current_content=NULL;
  }
}
#line 1771 "service_conf.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 589 "service_conf.y" /* yacc.c:1646  */
    {}
#line 1777 "service_conf.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 590 "service_conf.y" /* yacc.c:1646  */
    {srerror("processing instruction <?xml ?> impossible\n");}
#line 1783 "service_conf.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 591 "service_conf.y" /* yacc.c:1646  */
    {}
#line 1789 "service_conf.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 593 "service_conf.y" /* yacc.c:1646  */
    {/*printf("NEWLINE FOUND !!");*/}
#line 1795 "service_conf.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 594 "service_conf.y" /* yacc.c:1646  */
    {}
#line 1801 "service_conf.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 595 "service_conf.y" /* yacc.c:1646  */
    {}
#line 1807 "service_conf.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 596 "service_conf.y" /* yacc.c:1646  */
    {}
#line 1813 "service_conf.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 597 "service_conf.y" /* yacc.c:1646  */
    {}
#line 1819 "service_conf.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 598 "service_conf.y" /* yacc.c:1646  */
    {/* Epsilon */}
#line 1825 "service_conf.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 610 "service_conf.y" /* yacc.c:1646  */
    {}
#line 1831 "service_conf.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 613 "service_conf.y" /* yacc.c:1646  */
    { if(debug) fprintf(stderr,"PAIR FOUND !!\n");if(curr_key!=NULL){free(curr_key);curr_key=NULL;} }
#line 1837 "service_conf.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 614 "service_conf.y" /* yacc.c:1646  */
    {
#ifdef DEBUG_SERVICE_CONF
  fprintf(stderr,"EPAIR (%s %d)\n",__FILE__,__LINE__);
  fprintf(stderr,"[%s=>%s]\n",curr_key,(yyvsp[0].chaine));
  dumpMap(current_content);
  fflush(stderr);
#endif
  if((yyvsp[0].chaine)!=NULL && curr_key!=NULL){
    if(current_content==NULL){
#ifdef DEBUG_SERVICE_CONF
      fprintf(stderr,"[ZOO: service_conf.y line %d free(%s)]\n",__LINE__,curr_key);
#endif
      current_content=createMap(curr_key,(yyvsp[0].chaine));
#ifdef DEBUG_SERVICE_CONF
      fprintf(stderr,"[ZOO: service_conf.y line %d free(%s)]\n",__LINE__,curr_key);
#endif
    }
    else{ 
#ifdef DEBUG_SERVICE_CONF
      dumpMap(current_content);
      fprintf(stderr,"addToMap(current_content,%s,%s) !! \n",curr_key,(yyvsp[0].chaine)); 
#endif
      addToMap(current_content,curr_key,(yyvsp[0].chaine));
#ifdef DEBUG_SERVICE_CONF
      fprintf(stderr,"addToMap(current_content,%s,%s) end !! \n",curr_key,(yyvsp[0].chaine)); 
#endif    
    }
  }
#ifdef DEBUG_SERVICE_CONF
  fprintf(stderr,"[%s=>%s]\n",curr_key,(yyvsp[0].chaine));
  fprintf(stderr,"[ZOO: service_conf.y line %d free(%s)]\n",__LINE__,curr_key);
  dumpMap(current_content);
  fflush(stderr);
#endif
  if(curr_key!=NULL){
    free(curr_key);
    curr_key=NULL;
  }
  }
#line 1881 "service_conf.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 653 "service_conf.y" /* yacc.c:1646  */
    { if(curr_key!=NULL) {free(curr_key);curr_key=NULL;} if((yyvsp[0].chaine)!=NULL) curr_key=zStrdup((yyvsp[0].chaine));if(debug) fprintf(stderr,"SPAIR FOUND !!\n"); }
#line 1887 "service_conf.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 658 "service_conf.y" /* yacc.c:1646  */
    {
#ifdef DEBUG_SERVICE_CONF
  fprintf(stderr,"processid (%s %d) %s\n",__FILE__,__LINE__,(yyvsp[0].s));
#endif
  if(::data==-1){ // knut: add namespace to avoid ambiguous symbol
    ::data=1;	
    if((yyvsp[0].s)!=NULL){
      char *cen=zStrdup((yyvsp[0].s));
      cen[strlen(cen)-1]=0;
      cen+=1;
      setServiceName(&my_service,cen);
      cen-=1;
      free(cen);
    }
  } else {
    if(current_data==1){
      if(my_service->content!=NULL && current_element->name!=NULL){
	if(my_service->inputs==NULL){
	  my_service->inputs=dupElements(current_element);
	  my_service->inputs->next=NULL;
	  tmp_count++;
	}
	else{
	  if(wait_nested){
	    elements* cursor=my_service->inputs;
	    while(cursor->next!=NULL)
	      cursor=cursor->next;
	    if(nested_level>1){
	      for(int j=0;j<nested_level-1;j++){
		cursor=cursor->child;
		while(cursor->next!=NULL)
		  cursor=cursor->next;
	      }
	    }
	    if(cursor->child==NULL){
	      cursor->child=dupElements(current_element);
	    }else{
	      addToElements(&cursor->child,current_element);
	    }
	  }else
	    addToElements(&my_service->inputs,current_element);
	}
	if(current_element->format==NULL){
	  wait_nested=true;
	  nested_level+=1;
	  if(current_content!=NULL){
	    elements* cursor=my_service->inputs;
	    while(cursor->next!=NULL)
	      cursor=cursor->next;
	    if(nested_level>1){
	      for(int j=0;j<nested_level-1;j++){
		cursor=cursor->child;
		while(cursor->next!=NULL)
		  cursor=cursor->next;
	      }
	    }
	    addMapToMap(&cursor->content,current_content);
	    freeMap(&current_content);
	    free(current_content);
	    current_content=NULL;
	  }
	}
#ifdef DEBUG_SERVICE_CONF
	fprintf(stderr,"(%s %d)FREE current_element (after adding to allread existing inputs)",__FILE__,__LINE__);
	dumpElements(current_element);
	fprintf(stderr,"(%s %d)FREE current_element (after adding to allread existing inputs)",__FILE__,__LINE__);
	dumpElements(my_service->inputs);
#endif
	freeElements(&current_element);
	free(current_element);
	current_element=NULL;
#ifdef DEBUG_SERVICE_CONF
	fprintf(stderr,"(DATAINPUTS - 489) ALLOCATE current_element\n");
#endif
	current_element=createEmptyElements();
      }
      if(current_element->name==NULL){
#ifdef DEBUG_SERVICE_CONF
	fprintf(stderr,"NAME IN %s (current - %s)\n",
		(yyvsp[0].s),current_element->name);
#endif
	wait_inputs=true;
#ifdef DEBUG_SERVICE_CONF
	fprintf(stderr,"(DATAINPUTS - 501) SET NAME OF current_element\n");
#endif
	if((yyvsp[0].s)!=NULL){ 
	  char *cen=zStrdup((yyvsp[0].s));
	  cen[strlen(cen)-1]=0;
	  cen+=1;
	  setElementsName(&current_element,cen);
	  cen-=1;
	  free(cen);
#ifdef DEBUG_SERVICE_CONF
	  fprintf(stderr,"NAME IN %s (current - %s)\n",(yyvsp[0].s),current_element->name);
#endif
#ifdef DEBUG_SERVICE_CONF
	  fprintf(stderr,"NAME IN %s (current - %s)\n",(yyvsp[0].s),current_element->name);
#endif
	}
      }
    }
    else
      if(current_data==2){ 
	wait_outputs=1;
	if(wait_inputs){
	  if(current_element!=NULL && current_element->name!=NULL){
	    if(my_service->outputs==NULL){
	      my_service->outputs=dupElements(current_element);
	      my_service->outputs->next=NULL;
	    }
	    else{
#ifdef DEBUG_SERVICE_CONF
	      fprintf(stderr,"LAST NAME IN %s (current - %s)\n",(yyvsp[0].s),current_element->name);
#endif
	      addToElements(&my_service->outputs,current_element);
	    }
#ifdef DEBUG_SERVICE_CONF
	    dumpElements(current_element);
	    fprintf(stderr,"(DATAOUTPUTS) FREE current_element %s %i\n",__FILE__,__LINE__);
#endif
	    freeElements(&current_element);
	    free(current_element);
	    current_element=NULL;
#ifdef DEBUG_SERVICE_CONF
	    fprintf(stderr,"(DATAOUTPUTS -%d) ALLOCATE current_element %s \n",__LINE__,__FILE__);
#endif
	    current_element=createEmptyElements();
	  }
	  if(current_element->name==NULL){
#ifdef DEBUG_SERVICE_CONF
	    fprintf(stderr,"NAME OUT %s\n",(yyvsp[0].s));
	    fprintf(stderr,"(DATAOUTPUTS - %d) SET NAME OF current_element\n",__LINE__);
#endif
	    if((yyvsp[0].s)!=NULL){ 
	      char *cen=zStrdup((yyvsp[0].s));
	      cen[strlen(cen)-1]=0;
	      cen+=1;
	      setElementsName(&current_element,cen);
	      cen-=1;
	      free(cen);
	    }
	  }

	  current_content=NULL;
	}
	else
	  if(current_element!=NULL && current_element->name!=NULL){
	    if(my_service->outputs==NULL)
	      my_service->outputs=dupElements(current_element);
	    else{
	      if(wait_nested){
		elements* cursor=my_service->outputs;
		while(cursor->next!=NULL)
		  cursor=cursor->next;
		if(nested_level>1){
		  for(int j=0;j<nested_level-1;j++){
		    cursor=cursor->child;
		    while(cursor->next!=NULL)
		      cursor=cursor->next;
		  }
		}
		if(cursor->child==NULL){
		  cursor->child=dupElements(current_element);
		}else
		  addToElements(&cursor->child,current_element);
	      }else
		addToElements(&my_service->outputs,current_element);
	    }
	    if(current_element->format==NULL){
	      wait_nested=true;
	      nested_level+=1;
	      if(current_content!=NULL){
		elements* cursor=my_service->outputs;
		while(cursor->next!=NULL)
		  cursor=cursor->next;
		if(nested_level>1){
		  for(int j=0;j<nested_level-1;j++){
		    cursor=cursor->child;
		    while(cursor->next!=NULL)
		      cursor=cursor->next;
		  }
		}
		addMapToMap(&cursor->content,current_content);
		freeMap(&current_content);
		free(current_content);
		current_content=NULL;
	      }
	    }

#ifdef DEBUG_SERVICE_CONF
	    fprintf(stderr,"ADD TO OUTPUTS Elements\n");
	    dupElements(current_element);
#endif
	    freeElements(&current_element);
	    free(current_element);
	    current_element=NULL;
	    
	    char *cen=zStrdup((yyvsp[0].s));
	    cen[strlen(cen)-1]=0;
	    cen+=1;
	    current_element=createElements(cen);
	    cen-=1;
	    free(cen);
	  }
	  else{
#ifdef DEBUG_SERVICE_CONF
	    fprintf(stderr,"NAME OUT %s\n",(yyvsp[0].s));
	    fprintf(stderr,"(DATAOUTPUTS - %d) SET NAME OF current_element %s\n",__LINE__,(yyvsp[0].s));
#endif
	    if((yyvsp[0].s)!=NULL){ 
	      char *cen=zStrdup((yyvsp[0].s));
	      cen[strlen(cen)-1]=0;
#ifdef DEBUG
	      fprintf(stderr,"tmp %s\n",cen);
#endif
	      cen+=1;
	      setElementsName(&current_element,cen);
	      cen-=1;
	      free(cen);
	    }
	  }
	wait_inputs=false;
	wait_outputs=1;
	//wait_outputs=true;
      }
  }
 }
#line 2119 "service_conf.tab.c" /* yacc.c:1646  */
    break;


#line 2123 "service_conf.tab.c" /* yacc.c:1646  */
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
#line 887 "service_conf.y" /* yacc.c:1906  */


/**
 * Print on stderr the message and the line number of the error which occurred.
 * 
 * @param s the error message
 */
void srerror(const char *s)
{
  if(debug)
    fprintf(stderr,"\nligne %d : %s\n",srlineno,s);
}

/**
 * Parse a ZCFG file and fill the service structure.
 *
 * @param conf the conf maps containing the main.cfg settings
 * @param file the fullpath to the ZCFG file
 * @param service the service structure to fill
 * @return 0 on success, -1 on failure
 */
int getServiceFromFile(maps* conf,const char* file,service** service){
  if(current_content!=NULL){
    freeMap(&current_content);
    free(current_content);
    current_content=NULL;
  }
#ifdef DEBUG_SERVICE_CONF
  fprintf(stderr,"(STARTING)FREE current_element %s\n",file);
#endif
  fflush(stderr);
  fflush(stdout);
  if(current_element!=NULL){
    freeElements(&current_element);
    free(current_element);
    current_element=NULL;
  }
  my_service=NULL;

  wait_maincontent=true;
  wait_mainmetadata=false;
  wait_metadata=false;
  wait_mainap=false;
  wait_ap=false;
  wait_inputs=false;
  wait_defaults=false;
  wait_supporteds=false;
  wait_outputs=-1;
  wait_data=false;
  wait_nested=false;
//data=-1;
  ::data=-1; // knut: add namespace to avoid ambiguous symbol
  previous_data=1;
  current_data=0;
  
  my_service=*service;

  srin = fopen(file,"r");
  if (srin==NULL){
    setMapInMaps(conf,"lenv","message","file not found");
    return -1;
  }

  int resultatYYParse = srparse() ;

#ifdef DEBUG_SERVICE_CONF
  fprintf(stderr,"RESULT: %d %d\n",resultatYYParse,wait_outputs);
  dumpElements(current_element);
#endif
  if(wait_outputs && current_element!=NULL && current_element->name!=NULL){
    if(current_content!=NULL){
      addMapToMap(&current_element->content,current_content);
    }
    if(my_service->outputs==NULL){  
#ifdef DEBUG_SERVICE_CONF
      fprintf(stderr,"(DATAOUTPUTS - %d) DUP current_element\n",__LINE__);
#endif
      my_service->outputs=dupElements(current_element);
      my_service->outputs->next=NULL;
    }
    else{
#ifdef DEBUG_SERVICE_CONF
      fprintf(stderr,"(DATAOUTPUTS - %d) COPY current_element\n",__LINE__);
#endif
      if(wait_nested){
	elements* cursor=my_service->outputs;
	while(cursor->next!=NULL)
	  cursor=cursor->next;
	if(nested_level>1){
	  for(int j=0;j<nested_level-1;j++){
	    cursor=cursor->child;
	    while(cursor->next!=NULL)
	      cursor=cursor->next;
	  }
	}
	if(cursor->child==NULL){
	  cursor->child=dupElements(current_element);
	}else
	  addToElements(&cursor->child,current_element);
      }else
	addToElements(&my_service->outputs,current_element);
    }
#ifdef DEBUG_SERVICE_CONF
    fprintf(stderr,"(DATAOUTPUTS - %d) FREE current_element\n",__LINE__);
#endif
    freeElements(&current_element);
    free(current_element);
    current_element=NULL;
#ifdef DEBUG_SERVICE_CONF
    fprintf(stderr,"(DATAOUTPUTS - %d) FREE current_element\n",__LINE__);
#endif
  }
  if(current_element!=NULL){
    freeElements(&current_element);
    free(current_element);
    current_element=NULL;
  }
  int contentOnly=false;
  if(current_content!=NULL){
    if(my_service->content==NULL){
      addMapToMap(&my_service->content,current_content);
      contentOnly=true;
      wait_maincontent=false;
    }
    freeMap(&current_content);
    free(current_content);
    current_content=NULL;
  }
  fclose(srin);
#ifdef DEBUG_SERVICE_CONF
  dumpService(my_service);
#endif
  if(wait_maincontent==true || (contentOnly==false && ((!wait_outputs && current_data==2 && my_service->outputs==NULL) || my_service==NULL || my_service->name==NULL || my_service->content==NULL))){
    setMapInMaps(conf,"lenv","message",srlval.chaine);
#ifndef WIN32
    srlex_destroy();
#endif
    return -1;
  }
  else
    *service=my_service;

#ifndef WIN32
  srlex_destroy();
#endif
  return resultatYYParse;
}
