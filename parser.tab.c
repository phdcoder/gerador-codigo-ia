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
#line 1 "parser.y" /* yacc.c:339  */

#include <stdio.h>
#include <ctype.h>
#include "sym.h"
extern int yylineno;
extern int global_scope;
extern VAR *SymTab;
FILE * output;
#define UNDECL  0
#define INT     1
#define BOOL    2
#define FLT     3
#define AddVAR(n,t) SymTab=MakeVAR(n,t,SymTab)
#define ASSERT(x,y) if(!(x)) printf("%s na  linha %d\n",(y),yylineno)

#line 82 "parser.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.tab.h".  */
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
    LET = 258,
    IN = 259,
    INTEGER = 260,
    FLOAT = 261,
    SKIP = 262,
    IF = 263,
    THEN = 264,
    ELSE = 265,
    END = 266,
    WHILE = 267,
    DO = 268,
    READ = 269,
    WRITE = 270,
    FI = 271,
    RETURN = 272,
    NUMINT = 273,
    NUMFLT = 274,
    IDENTIFIER = 275,
    NUMBL = 276,
    BOOLEAN = 277,
    FUNCTION = 278,
    ASSGNOP = 279,
    MAIORIGUAL = 280
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 19 "parser.y" /* yacc.c:355  */

	char * ystr;
	int   yint;// 1
	float yflt;

#line 154 "parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 171 "parser.tab.c" /* yacc.c:358  */

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
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   132

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  51
/* YYNRULES -- Number of rules.  */
#define YYNRULES  91
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  154

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   280

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
      36,    37,    31,    30,    34,    29,     2,    32,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    35,
      27,    28,    26,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    33,     2,     2,     2,     2,     2,
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
      25
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    44,    44,    44,    44,    47,    48,    54,    60,    67,
      68,    68,    69,    69,    70,    70,    72,    73,    73,    74,
      74,    75,    75,    77,    78,    78,    78,    78,    83,    83,
      83,    83,    88,    90,    91,    98,    99,   106,   107,   110,
     111,   113,   114,   115,   121,   122,   124,   125,   135,   151,
     151,   157,   157,   157,   157,   162,   165,   166,   166,   166,
     169,   170,   170,   170,   170,   173,   176,   177,   178,   179,
     186,   186,   190,   190,   194,   194,   198,   198,   202,   202,
     207,   207,   212,   212,   217,   217,   222,   222,   227,   227,
     227,   228
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "LET", "IN", "INTEGER", "FLOAT", "SKIP",
  "IF", "THEN", "ELSE", "END", "WHILE", "DO", "READ", "WRITE", "FI",
  "RETURN", "NUMINT", "NUMFLT", "IDENTIFIER", "NUMBL", "BOOLEAN",
  "FUNCTION", "ASSGNOP", "MAIORIGUAL", "'>'", "'<'", "'='", "'-'", "'+'",
  "'*'", "'/'", "'^'", "','", "';'", "'('", "')'", "$accept", "program",
  "$@1", "$@2", "declaration_function", "parametros_function", "$@3",
  "$@4", "$@5", "id_param_functions", "$@6", "$@7", "$@8", "declarations",
  "$@9", "$@10", "$@11", "$@12", "$@13", "$@14", "id_seq_int",
  "id_seq_float", "id_seq_function", "params", "param", "commands",
  "command", "$@15", "$@16", "$@17", "$@18", "function_return", "$@19",
  "$@20", "inicio_function", "$@21", "$@22", "$@23", "exp_function", "exp",
  "$@24", "$@25", "$@26", "$@27", "$@28", "$@29", "$@30", "$@31", "$@32",
  "$@33", "$@34", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,    62,    60,    61,    45,
      43,    42,    47,    94,    44,    59,    40,    41
};
# endif

#define YYPACT_NINF -80

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-80)))

#define YYTABLE_NINF -52

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
       3,    26,     7,   -80,   -80,    38,     6,    -3,   -80,   -80,
     -80,    36,    41,    43,   -80,   -80,   -80,   -80,    48,    49,
     -80,   -80,   -80,    35,    58,     8,    45,    40,   -80,    -6,
      54,    55,    52,   -80,    46,    69,   -80,    47,   -80,    50,
      60,    63,    64,    51,   -80,   -80,    53,   -80,   -80,    -4,
     -80,   -80,   -80,    76,    58,    -6,   -80,   -80,   -80,   -80,
     -80,   -80,    71,    -6,    58,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,    -6,   -80,   -80,    83,    26,    26,
      56,    56,    56,   -80,    59,    67,    70,    81,    -6,    -6,
      -6,    -6,    -6,    -6,    -6,    -6,    -6,    83,    96,   -80,
     -80,    42,   -80,   -80,   -80,   103,    97,   -80,   -80,   -80,
     -80,    22,    22,    22,    22,   -15,   -15,    85,    85,   -80,
      58,    99,   100,   101,    26,    87,    88,   -80,   107,   -80,
     -80,   -80,   121,   -80,    71,   -80,    56,    56,    56,    58,
      89,   -80,   -80,   -80,   -80,   110,   -80,   -80,   117,    -6,
     -80,    83,    94,   -80
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    23,     0,    24,    28,     5,     0,    37,     1,    33,
      35,     0,     0,     0,    61,     2,    32,    38,     0,     0,
       6,     7,     8,     0,    44,    25,    29,     9,    46,     0,
       0,     0,     0,     3,     0,     0,    34,     0,    36,     0,
       0,     0,     0,     0,    67,    68,    69,    66,    88,     0,
      47,    48,    49,     0,    44,     0,    26,    30,    10,    12,
      14,    62,    39,     0,    44,    70,    76,    72,    74,    80,
      78,    82,    84,    86,     0,     4,    45,    52,    23,    23,
      16,    16,    16,    63,    41,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    50,     0,    27,
      31,     0,    11,    13,    15,     0,     0,    40,    91,    89,
      55,    71,    77,    73,    75,    81,    79,    83,    85,    87,
      44,     0,     0,     0,    23,     0,    42,    90,     0,    17,
      19,    21,     0,    64,    39,    53,    16,    16,    16,    44,
       0,    54,    18,    20,    22,    56,    43,    57,     0,     0,
      65,    58,     0,    59
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -79,
     -80,   -80,   -80,   -74,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,    -2,   -80,   -53,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   123,   -80,   -80,   -80,   -80,   -55,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    24,    53,    14,    43,    80,    81,    82,   102,
     136,   137,   138,     6,     9,    37,    78,    10,    39,    79,
      18,    19,    16,    85,   107,    33,    34,    74,    35,    98,
     141,   148,   149,   152,     7,    23,    83,   105,   125,    49,
      88,    90,    91,    89,    93,    92,    94,    95,    96,    63,
     127
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      77,    76,   103,   104,    99,   100,     1,     8,    86,    64,
      15,    87,    44,    45,    46,    47,    71,    72,    73,    97,
       5,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      48,     3,     4,   111,   112,   113,   114,   115,   116,   117,
     118,   119,    36,    11,    12,    40,    41,   121,   122,     5,
     132,    69,    70,    71,    72,    73,    20,   142,   143,   144,
      13,    21,    42,    22,   123,    28,   -51,   128,    25,    26,
      29,    27,    30,    31,    50,    51,    52,    55,    32,    38,
      58,    54,    56,    59,    60,    57,   145,    75,    61,    62,
     101,    84,   110,   106,   151,    65,    66,    67,    68,    69,
      70,    71,    72,    73,   108,   120,   124,   109,    65,    66,
      67,    68,    69,    70,    71,    72,    73,   126,    73,   129,
     130,   131,   133,   135,   134,   139,   146,   147,   150,   153,
      17,     0,   140
};

static const yytype_int16 yycheck[] =
{
      55,    54,    81,    82,    78,    79,     3,     0,    63,    13,
       4,    64,    18,    19,    20,    21,    31,    32,    33,    74,
      23,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      36,     5,     6,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    34,     5,     6,     5,     6,     5,     6,    23,
     124,    29,    30,    31,    32,    33,    20,   136,   137,   138,
      22,    20,    22,    20,    22,     7,     8,   120,    20,    20,
      12,    36,    14,    15,    20,    20,    24,     8,    20,    34,
      20,    35,    35,    20,    20,    35,   139,    11,    37,    36,
      34,    20,    11,    34,   149,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    37,     9,     3,    37,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    20,    33,    20,
      20,    20,    35,    16,    36,     4,    37,    17,    11,    35,
       7,    -1,   134
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    39,     5,     6,    23,    51,    72,     0,    52,
      55,     5,     6,    22,    42,     4,    60,    72,    58,    59,
      20,    20,    20,    73,    40,    20,    20,    36,     7,    12,
      14,    15,    20,    63,    64,    66,    34,    53,    34,    56,
       5,     6,    22,    43,    18,    19,    20,    21,    36,    77,
      20,    20,    24,    41,    35,     8,    35,    35,    20,    20,
      20,    37,    36,    87,    13,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    65,    11,    63,    77,    54,    57,
      44,    45,    46,    74,    20,    61,    77,    63,    78,    81,
      79,    80,    83,    82,    84,    85,    86,    77,    67,    51,
      51,    34,    47,    47,    47,    75,    34,    62,    37,    37,
      11,    77,    77,    77,    77,    77,    77,    77,    77,    77,
       9,     5,     6,    22,     3,    76,    20,    88,    63,    20,
      20,    20,    51,    35,    36,    16,    48,    49,    50,     4,
      61,    68,    47,    47,    47,    63,    37,    17,    69,    70,
      11,    77,    71,    35
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    38,    40,    41,    39,    42,    42,    42,    42,    43,
      44,    43,    45,    43,    46,    43,    47,    48,    47,    49,
      47,    50,    47,    51,    52,    53,    54,    51,    55,    56,
      57,    51,    51,    58,    58,    59,    59,    60,    60,    61,
      61,    62,    62,    62,    63,    63,    64,    64,    64,    65,
      64,    66,    67,    68,    64,    64,    69,    70,    71,    69,
      72,    73,    74,    75,    72,    76,    77,    77,    77,    77,
      78,    77,    79,    77,    80,    77,    81,    77,    82,    77,
      83,    77,    84,    77,    85,    77,    86,    77,    87,    88,
      77,    77
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     7,     0,     2,     2,     2,     0,
       0,     4,     0,     4,     0,     4,     0,     0,     5,     0,
       5,     0,     5,     0,     0,     0,     0,     8,     0,     0,
       0,     8,     2,     0,     3,     0,     3,     0,     1,     0,
       2,     0,     2,     5,     0,     3,     1,     2,     2,     0,
       4,     0,     0,     0,     8,     5,     0,     0,     0,     5,
       0,     0,     0,     0,    10,     6,     1,     1,     1,     1,
       0,     4,     0,     4,     0,     4,     0,     4,     0,     4,
       0,     4,     0,     4,     0,     4,     0,     4,     0,     0,
       5,     4
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
#line 44 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "\nint main(){\n"); }
#line 1361 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 44 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "\n}"); }
#line 1367 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 48 "parser.y" /* yacc.c:1646  */
    { 
	VAR *p=FindVAR((yyvsp[0].ystr));
	ASSERT((p==NULL),"Identificador já declarado");
	AddVAR((yyvsp[0].ystr),INT);
	fprintf(output, "int %s", (yyvsp[0].ystr));
}
#line 1378 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 54 "parser.y" /* yacc.c:1646  */
    { 
	VAR *p=FindVAR((yyvsp[0].ystr));
	ASSERT((p==NULL),"Identificador já declarado");
	AddVAR((yyvsp[0].ystr),FLT);
	fprintf(output, "float %s", (yyvsp[0].ystr));
}
#line 1389 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 60 "parser.y" /* yacc.c:1646  */
    { 
	VAR *p=FindVAR((yyvsp[0].ystr));
	ASSERT((p==NULL),"Identificador já declarado");
	AddVAR((yyvsp[0].ystr),BOOL);
	fprintf(output, "bool %s", (yyvsp[0].ystr));
}
#line 1400 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 68 "parser.y" /* yacc.c:1646  */
    {fprintf(output,"int %s", (yyvsp[0].ystr)); AddVAR((yyvsp[0].ystr),INT);}
#line 1406 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 69 "parser.y" /* yacc.c:1646  */
    {fprintf(output,"float %s", (yyvsp[0].ystr)); AddVAR((yyvsp[0].ystr),FLT);}
#line 1412 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 70 "parser.y" /* yacc.c:1646  */
    {fprintf(output,"bool %s", (yyvsp[0].ystr)); AddVAR((yyvsp[0].ystr),BOOL);}
#line 1418 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 73 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ", int %s", (yyvsp[0].ystr)); AddVAR((yyvsp[0].ystr),INT);}
#line 1424 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 74 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ", float %s", (yyvsp[0].ystr)); AddVAR((yyvsp[0].ystr),FLT);}
#line 1430 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 75 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ", bool %s", (yyvsp[0].ystr)); AddVAR((yyvsp[0].ystr),BOOL);}
#line 1436 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 78 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "int "); }
#line 1442 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 78 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s", (yyvsp[0].ystr)); }
#line 1448 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 78 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "; \n"); }
#line 1454 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 78 "parser.y" /* yacc.c:1646  */
    { 
	VAR *p=ChecarEscopo1((yyvsp[-4].ystr));
	ASSERT((p==NULL),"Identificador já declarado*");
	AddVAR((yyvsp[-4].ystr),INT); 
}
#line 1464 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 83 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "float "); }
#line 1470 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 83 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s", (yyvsp[0].ystr)); }
#line 1476 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 83 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "; \n"); }
#line 1482 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 83 "parser.y" /* yacc.c:1646  */
    { 
	VAR *p=ChecarEscopo1((yyvsp[-4].ystr));
	ASSERT((p==NULL),"Identificador já declarado+");
	AddVAR((yyvsp[-4].ystr),FLT);
}
#line 1492 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 91 "parser.y" /* yacc.c:1646  */
    { 
	VAR *p=ChecarEscopo1((yyvsp[-1].ystr));
	ASSERT((p==NULL),"Identificador já declarado-");
	AddVAR((yyvsp[-1].ystr),INT);
	fprintf(output, "%s, ", (yyvsp[-1].ystr));
}
#line 1503 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 99 "parser.y" /* yacc.c:1646  */
    { 
	VAR *p=ChecarEscopo1((yyvsp[-1].ystr));//ChecarEscopo1
	ASSERT((p==NULL),"Identificador já declarado!");
	AddVAR((yyvsp[-1].ystr),FLT);
	fprintf(output, "%s, ", (yyvsp[-1].ystr));
}
#line 1514 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 115 "parser.y" /* yacc.c:1646  */
    {// um parâmetro pode ser a chamada de uma função também
	VAR *p=FindVAR((yyvsp[-3].ystr));//pegando tipo da função
	ASSERT((p!=NULL)," Função não declarada");
}
#line 1523 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 125 "parser.y" /* yacc.c:1646  */
    {
	VAR *p=FindVAR((yyvsp[0].ystr));//procura o conteúdo de 2
	ASSERT( (p!=NULL),"Identificador Não declarado");//se achou p != nulo
	if(p->type == FLT){
		fprintf(output, "scanf(\"%%f\", %s); \n", (yyvsp[0].ystr));
	}
	else if(p->type == INT){
		fprintf(output, "scanf(\"%%d\", %s); \n", (yyvsp[0].ystr));
	}
}
#line 1538 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 135 "parser.y" /* yacc.c:1646  */
    {
	VAR *p=FindVAR((yyvsp[0].ystr));//procura o conteúdo de 2

	if(p!= NULL){ //se for algo declarado
		if(p->type == FLT){
			fprintf(output, "printf(\"%%f\", %s); \n", (yyvsp[0].ystr));
			//printf("valor: %d", num);
		}
		else if(p->type == INT){
			fprintf(output, "printf(\"%%d\", %s); \n", (yyvsp[0].ystr));
		}
	}
	else {//se não for inteiro nem float...
		fprintf(output, "printf(\"%s\");\n", (yyvsp[0].ystr));
	}
}
#line 1559 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 151 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s = ", (yyvsp[-1].ystr)); }
#line 1565 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 151 "parser.y" /* yacc.c:1646  */
    { 
	VAR *p=FindVAR((yyvsp[-3].ystr));
	ASSERT((p!=NULL),"Identificador Não declarado/");
	ASSERT( (p->type == INT && (yyvsp[0].yint) == INT) || (p->type == FLT && ((yyvsp[0].yint) == INT || (yyvsp[0].yint) == FLT) ), " Tipo incompatível de dados");
	fprintf(output, ";\n");
}
#line 1576 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 157 "parser.y" /* yacc.c:1646  */
    {fprintf(output,"if");}
#line 1582 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 157 "parser.y" /* yacc.c:1646  */
    {fprintf(output,"{\n");}
#line 1588 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 157 "parser.y" /* yacc.c:1646  */
    {fprintf(output,"}\n");}
#line 1594 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 157 "parser.y" /* yacc.c:1646  */
    {//S2 é o retorno de tudão da expressão
	ASSERT( (yyvsp[-5].yint) == BOOL, "Valor boleano esperado");
}
#line 1602 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 162 "parser.y" /* yacc.c:1646  */
    { ASSERT( (yyvsp[-3].yint) == BOOL, "Valor boleano esperado"); }
#line 1608 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 166 "parser.y" /* yacc.c:1646  */
    {fprintf(output, "return ");}
#line 1614 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 166 "parser.y" /* yacc.c:1646  */
    {fprintf(output, ";\n");}
#line 1620 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 166 "parser.y" /* yacc.c:1646  */
    { /* printf(" Retornando variável: %d", $2); */ }
#line 1626 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 170 "parser.y" /* yacc.c:1646  */
    { global_scope=1; fprintf(output, "(");}
#line 1632 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 170 "parser.y" /* yacc.c:1646  */
    {fprintf(output, ")");}
#line 1638 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 170 "parser.y" /* yacc.c:1646  */
    {fprintf(output, "{\n");}
#line 1644 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 170 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); DestruirVAR(); global_scope=0; }
#line 1650 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 176 "parser.y" /* yacc.c:1646  */
    { (yyval.yint)= BOOL; /*printf("2° ~> $$: %d] ",$$);*/}
#line 1656 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 177 "parser.y" /* yacc.c:1646  */
    { (yyval.yint)= INT; fprintf(output, "%d", (yyvsp[0].yint));}
#line 1662 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 178 "parser.y" /* yacc.c:1646  */
    { (yyval.yint)= FLT; fprintf(output, "%f", (yyvsp[0].yflt));}
#line 1668 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 179 "parser.y" /* yacc.c:1646  */
    {// a única coisa guardada na tabela de simbolos
	VAR *p=FindVAR((yyvsp[0].ystr));
	//printf(" Salvando variável no scopo: -> %d <- ", global_scope);
	ASSERT((p!=NULL),"Identificador Não declarado");
	(yyval.yint)= (p!=NULL)? p->type:UNDECL;
	fprintf(output, "%s", (yyvsp[0].ystr));
}
#line 1680 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 186 "parser.y" /* yacc.c:1646  */
    {fprintf(output," >= ");}
#line 1686 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 186 "parser.y" /* yacc.c:1646  */
    {
	ASSERT( (((yyvsp[-3].yint) == INT || (yyvsp[-3].yint) == FLT) && ((yyvsp[0].yint) == INT || (yyvsp[0].yint) == FLT)) , "Operadores imcompatível");
	(yyval.yint)= BOOL; 
}
#line 1695 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 190 "parser.y" /* yacc.c:1646  */
    {fprintf(output," < ");}
#line 1701 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 190 "parser.y" /* yacc.c:1646  */
    {
	ASSERT( (((yyvsp[-3].yint) == INT || (yyvsp[-3].yint) == FLT) && ((yyvsp[0].yint) == INT || (yyvsp[0].yint) == FLT)) , "Operadores imcompatível");
	(yyval.yint)= BOOL; 
}
#line 1710 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 194 "parser.y" /* yacc.c:1646  */
    {fprintf(output," == ");}
#line 1716 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 194 "parser.y" /* yacc.c:1646  */
    {
	ASSERT( (((yyvsp[-3].yint) == INT || (yyvsp[-3].yint) == FLT) && ((yyvsp[0].yint) == INT || (yyvsp[0].yint) == FLT)) , "Operadores imcompatível");
	(yyval.yint)= BOOL; 
}
#line 1725 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 198 "parser.y" /* yacc.c:1646  */
    {fprintf(output," > ");}
#line 1731 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 198 "parser.y" /* yacc.c:1646  */
    { 
	ASSERT( (((yyvsp[-3].yint) == INT || (yyvsp[-3].yint) == FLT) && ((yyvsp[0].yint) == INT || (yyvsp[0].yint) == FLT)) , "Operadores imcompatível");
	(yyval.yint)= BOOL; 
}
#line 1740 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 202 "parser.y" /* yacc.c:1646  */
    {fprintf(output," + ");}
#line 1746 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 202 "parser.y" /* yacc.c:1646  */
    {
	ASSERT( (((yyvsp[-3].yint) == INT || (yyvsp[-3].yint) == FLT) && ((yyvsp[0].yint) == INT || (yyvsp[0].yint) == FLT)) , "Operadores imcompatível");
	if((yyvsp[-3].yint) == FLT | (yyvsp[0].yint) == FLT) (yyval.yint) = FLT;
	else (yyval.yint) = INT;
}
#line 1756 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 207 "parser.y" /* yacc.c:1646  */
    {fprintf(output," - ");}
#line 1762 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 207 "parser.y" /* yacc.c:1646  */
    {
	ASSERT( (((yyvsp[-3].yint) == INT || (yyvsp[-3].yint) == FLT) && ((yyvsp[0].yint) == INT || (yyvsp[0].yint) == FLT)) , "Operadores imcompatível");
	if((yyvsp[-3].yint) == FLT | (yyvsp[0].yint) == FLT) (yyval.yint) = FLT;
	else (yyval.yint) = INT;
}
#line 1772 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 212 "parser.y" /* yacc.c:1646  */
    {fprintf(output," * ");}
#line 1778 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 212 "parser.y" /* yacc.c:1646  */
    {
	ASSERT( (((yyvsp[-3].yint) == INT || (yyvsp[-3].yint) == FLT) && ((yyvsp[0].yint) == INT || (yyvsp[0].yint) == FLT)) , "Operadores imcompatível");
	if((yyvsp[-3].yint) == FLT | (yyvsp[0].yint) == FLT) (yyval.yint) = FLT;
	else (yyval.yint) = INT;
}
#line 1788 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 217 "parser.y" /* yacc.c:1646  */
    {fprintf(output," / ");}
#line 1794 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 217 "parser.y" /* yacc.c:1646  */
    {
	ASSERT( (((yyvsp[-3].yint) == INT || (yyvsp[-3].yint) == FLT) && ((yyvsp[0].yint) == INT || (yyvsp[0].yint) == FLT)) , "Operadores imcompatível");
	if((yyvsp[-3].yint) == FLT | (yyvsp[0].yint) == FLT) (yyval.yint) = FLT;
	else (yyval.yint) = INT;
}
#line 1804 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 222 "parser.y" /* yacc.c:1646  */
    {fprintf(output,"^");}
#line 1810 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 222 "parser.y" /* yacc.c:1646  */
    {
	ASSERT( (((yyvsp[-3].yint) == INT || (yyvsp[-3].yint) == FLT) && ((yyvsp[0].yint) == INT || (yyvsp[0].yint) == FLT)) , "Operadores imcompatível");
	if((yyvsp[-3].yint) == FLT | (yyvsp[0].yint) == FLT) (yyval.yint) = FLT;
	else (yyval.yint) = INT;
}
#line 1820 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 227 "parser.y" /* yacc.c:1646  */
    {fprintf(output,"(");}
#line 1826 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 227 "parser.y" /* yacc.c:1646  */
    {fprintf(output,")");}
#line 1832 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 227 "parser.y" /* yacc.c:1646  */
    { (yyval.yint)= (yyvsp[-2].yint);}
#line 1838 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 228 "parser.y" /* yacc.c:1646  */
    {// pode chamar função também f(paramns)
	VAR *p=FindVAR((yyvsp[-3].ystr));//pegando tipo da função
	ASSERT((p!=NULL)," Função não declarada");
	(yyval.yint) = p->type;//retorno o tipo da função
}
#line 1848 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 1852 "parser.tab.c" /* yacc.c:1646  */
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
#line 235 "parser.y" /* yacc.c:1906  */



main( int argc, char *argv[] ) {
	output = fopen("output.c","w");
	init_stringpool(10000); //memória que vai guardar as strings
	if ( yyparse () == 0) printf("codigo sem erros");
}

yyerror(char *s) { /* Called by yyparse on error */
	printf ("%s  na linha %d\n", s, yylineno );
}
