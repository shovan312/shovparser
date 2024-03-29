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
#line 1 "parser.yy" /* yacc.c:339  */

#include <stdio.h>
#include "ast.h"
#define YYDEBUG 1
extern "C" int yylex();

extern union Node yylval;
extern int yyparse();
class Program* head = NULL;
void yyerror(const char *s);
using namespace std;

#line 79 "parser.tab.cc" /* yacc.c:339  */

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
   by #include "parser.tab.hh".  */
#ifndef YY_YY_PARSER_TAB_HH_INCLUDED
# define YY_YY_PARSER_TAB_HH_INCLUDED
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
    INT_LITERAL = 258,
    STRING_LITERAL = 259,
    BOOL_LITERAL = 260,
    CHAR_LITERAL = 261,
    ID = 262,
    COMMA = 263,
    SEMICOLON = 264,
    OPEN_PAREN = 265,
    CLOSE_PAREN = 266,
    OPEN_BRACKET = 267,
    CLOSE_BRACKET = 268,
    OPEN_BRACE = 269,
    CLOSE_BRACE = 270,
    ASSIGN = 271,
    IF = 272,
    ELSE = 273,
    ELIF = 274,
    FOR = 275,
    WHILE = 276,
    RETURN = 277,
    BREAK = 278,
    CONTINUE = 279,
    INT_TYPE = 280,
    BOOLEAN_TYPE = 281,
    VOID_TYPE = 282,
    CHAR_TYPE = 283,
    UNSIGNED_TYPE = 284,
    Q_MARK = 285,
    COLON = 286,
    OR = 287,
    XOR = 288,
    AND = 289,
    EQ = 290,
    NEQ = 291,
    LT = 292,
    LE = 293,
    GE = 294,
    GT = 295,
    PLUS = 296,
    MINUS = 297,
    MULT = 298,
    DIV = 299,
    MOD = 300,
    NOT = 301
  };
#endif

/* Value type.  */


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_HH_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 172 "parser.tab.cc" /* yacc.c:358  */

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   424

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  70
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  152

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

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
      45,    46
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    61,    61,    67,    68,    71,    72,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    97,
      98,    99,   100,   103,   104,   105,   106,   108,   110,   111,
     112,   114,   116,   117,   118,   119,   120,   122,   124,   125,
     126,   128,   129,   130,   131,   132,   133,   134,   136,   137,
     139,   140,   141,   143,   144,   146,   148,   150,   151,   152,
     154
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT_LITERAL", "STRING_LITERAL",
  "BOOL_LITERAL", "CHAR_LITERAL", "ID", "COMMA", "SEMICOLON", "OPEN_PAREN",
  "CLOSE_PAREN", "OPEN_BRACKET", "CLOSE_BRACKET", "OPEN_BRACE",
  "CLOSE_BRACE", "ASSIGN", "IF", "ELSE", "ELIF", "FOR", "WHILE", "RETURN",
  "BREAK", "CONTINUE", "INT_TYPE", "BOOLEAN_TYPE", "VOID_TYPE",
  "CHAR_TYPE", "UNSIGNED_TYPE", "Q_MARK", "COLON", "OR", "XOR", "AND",
  "EQ", "NEQ", "LT", "LE", "GE", "GT", "PLUS", "MINUS", "MULT", "DIV",
  "MOD", "NOT", "$accept", "program", "variable_list", "function_list",
  "expr", "variable", "literal", "function_call", "parameter_list",
  "function", "datatype", "block", "argument_list", "statement",
  "statement_list", "assignment_statement", "return_statement",
  "for_statement", "while_statement", "elif_statement_list",
  "if_statement", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301
};
# endif

#define YYPACT_NINF -79

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-79)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-1)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -79,    14,    89,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
       9,    89,    31,   -79,   -79,    48,    68,    55,    89,    67,
       2,    71,    75,    77,    88,   -79,   -79,   -79,   -79,    86,
       2,   290,   -79,   -79,    89,     1,    91,    95,     2,     2,
     130,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   -79,   -79,   -79,
     107,     7,   101,   202,   -79,   273,   335,   348,   360,   370,
     370,   297,   297,   297,   297,   374,   374,    74,    74,    74,
      76,    47,   144,     2,   -79,   149,     2,    81,   186,   188,
     221,    53,   150,   -79,   330,   179,   240,   -79,   -79,   -79,
     -79,   -79,   -79,     2,   321,     2,     2,     2,    89,     2,
     -79,    93,   -79,   -79,   -79,   -79,   220,   238,   290,   147,
     258,   167,   -79,   -79,    65,    91,     2,    91,     2,     2,
      85,   110,   -79,   256,   290,    91,   275,   -79,   280,   305,
     -79,     2,    83,   334,     2,   184,    91,   290,    91,   -79,
      85,   -79
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     5,     1,    42,    44,    46,    43,    45,     2,
       0,     5,     0,     4,     6,     0,    30,     0,    48,     0,
       0,    50,     0,     0,     0,    34,    36,    35,    33,     8,
       0,    29,     7,    24,    48,    30,     0,    31,    38,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    49,     3,    41,
       0,    39,     0,     0,    25,     0,    15,    16,    14,    18,
      19,    21,    22,    23,    20,     9,    10,    12,    11,    13,
      17,    58,     0,    38,    37,    27,     0,     0,     0,     0,
       0,     0,     0,    57,    58,     0,     0,    53,    54,    55,
      56,    32,    40,     0,    26,     0,     0,     0,     0,     0,
      64,     0,    52,    59,    47,    51,     0,     0,    60,     0,
       0,     0,    63,    28,     0,     0,     0,     0,     0,     0,
      67,     0,    66,     0,    61,     0,     0,    70,     0,     0,
      69,     0,     0,     0,     0,     0,     0,    62,     0,    65,
      67,    68
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -79,   -79,   288,   337,   -20,   -14,   -79,   -78,   266,   -79,
       0,   -35,   387,   -79,   328,   285,   -79,   -79,   -79,   274,
     -79
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     9,    61,    10,    32,    33,    62,    11,
      22,    93,    23,    94,    95,    96,    97,    98,    99,   137,
     100
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      31,    59,    12,    92,    21,    25,    26,    27,    28,    29,
      40,    15,    30,    19,     3,    83,    92,    20,    13,    63,
      21,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    41,    16,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    87,    17,    25,    26,    27,    28,
      29,    58,   110,    30,    88,    18,   104,    89,    90,    91,
      24,   111,     4,     5,     6,     7,     8,   128,    18,    34,
      19,   129,    35,   116,    20,   117,   118,   119,    36,   121,
     130,    38,   132,   105,   120,   105,    38,   106,    39,   106,
     140,    37,   122,   135,   136,    58,   131,    60,   133,   134,
      82,   149,    84,   150,     4,     5,     6,     7,     8,   138,
      56,   145,    -1,    41,   147,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      41,    64,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,   101,   125,   112,
      41,   103,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    41,   127,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,   114,   148,   107,    41,   108,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    41,    85,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,   109,    41,   123,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,   115,
      41,   124,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,   126,    41,   139,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,   141,    41,   142,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    41,    86,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      41,   144,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    87,    51,    52,
      53,    54,    55,    56,    58,   146,    81,    88,    14,   102,
      89,    90,    91,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    53,    54,    55,
      56,    57,   113,   143,   151
};

static const yytype_uint8 yycheck[] =
{
      20,    36,     2,    81,    18,     3,     4,     5,     6,     7,
      30,    11,    10,    12,     0,     8,    94,    16,     9,    39,
      34,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    30,     7,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,     7,     7,     3,     4,     5,     6,
       7,    14,     9,    10,    17,    10,    86,    20,    21,    22,
       3,    91,    25,    26,    27,    28,    29,    12,    10,     8,
      12,    16,     7,   103,    16,   105,   106,   107,    11,   109,
     125,    10,   127,    12,   108,    12,    10,    16,    12,    16,
     135,    13,     9,    18,    19,    14,   126,    12,   128,   129,
       3,   146,    11,   148,    25,    26,    27,    28,    29,     9,
      46,   141,    46,    30,   144,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      30,    11,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    13,    11,     9,
      30,    12,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    30,    11,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    15,    11,    10,    30,    10,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    30,    13,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    10,    30,    13,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,     9,
      30,    13,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,     9,    30,    13,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    10,    30,     7,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      30,    16,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,     7,    41,    42,
      43,    44,    45,    46,    14,    11,    58,    17,    11,    83,
      20,    21,    22,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    43,    44,    45,
      46,    34,    94,   138,   150
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    48,    49,     0,    25,    26,    27,    28,    29,    50,
      52,    56,    57,     9,    50,    57,     7,     7,    10,    12,
      16,    52,    57,    59,     3,     3,     4,     5,     6,     7,
      10,    51,    53,    54,     8,     7,    11,    13,    10,    12,
      51,    30,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    59,    14,    58,
      12,    51,    55,    51,    11,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    49,     3,     8,    11,    13,    31,     7,    17,    20,
      21,    22,    54,    58,    60,    61,    62,    63,    64,    65,
      67,    13,    55,    12,    51,    12,    16,    10,    10,    10,
       9,    51,     9,    61,    15,     9,    51,    51,    51,    51,
      52,    51,     9,    13,    13,    11,     9,    11,    12,    16,
      58,    51,    58,    51,    51,    18,    19,    66,     9,    13,
      58,    10,     7,    62,    16,    51,    11,    51,    11,    58,
      58,    66
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    49,    49,    50,    50,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    52,
      52,    52,    52,    53,    53,    53,    53,    54,    55,    55,
      55,    56,    57,    57,    57,    57,    57,    58,    59,    59,
      59,    60,    60,    60,    60,    60,    60,    60,    61,    61,
      62,    62,    62,    63,    63,    64,    65,    66,    66,    66,
      67
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     3,     0,     2,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     3,     5,     4,     7,     4,
       2,     5,     8,     1,     1,     1,     1,     4,     0,     1,
       3,     6,     1,     1,     1,     1,     1,     4,     0,     3,
       1,     2,     2,     1,     1,     1,     1,     1,     0,     2,
       3,     6,     9,     3,     2,     9,     5,     0,     6,     2,
       6
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
#line 62 "parser.yy" /* yacc.c:1646  */
    {
	(yyval.program) = new Program((yyvsp[-1].varlist), (yyvsp[0].funclist));
	head = (yyval.program);
}
#line 1414 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 3:
#line 67 "parser.yy" /* yacc.c:1646  */
    {(yyval.varlist) = new VariableList();}
#line 1420 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 4:
#line 68 "parser.yy" /* yacc.c:1646  */
    {(yyval.varlist)->push_back((yyvsp[-1].var));}
#line 1426 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 5:
#line 71 "parser.yy" /* yacc.c:1646  */
    {(yyval.funclist) = new FunctionList();}
#line 1432 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 6:
#line 72 "parser.yy" /* yacc.c:1646  */
    {(yyvsp[0].funclist)->push_back((yyvsp[-1].function)); (yyval.funclist) = (yyvsp[0].funclist); /*change*/}
#line 1438 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 7:
#line 74 "parser.yy" /* yacc.c:1646  */
    {(yyval.expr) = (yyvsp[0].literal);}
#line 1444 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 8:
#line 75 "parser.yy" /* yacc.c:1646  */
    {(yyval.expr) = new Identifier(string((yyvsp[0].value)));}
#line 1450 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 9:
#line 76 "parser.yy" /* yacc.c:1646  */
    { (yyval.expr) = new BinaryExpression((yyvsp[-2].expr), string((yyvsp[-1].value)), (yyvsp[0].expr)); }
#line 1456 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 10:
#line 77 "parser.yy" /* yacc.c:1646  */
    { (yyval.expr) = new BinaryExpression((yyvsp[-2].expr), string((yyvsp[-1].value)), (yyvsp[0].expr)); }
#line 1462 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 11:
#line 78 "parser.yy" /* yacc.c:1646  */
    { (yyval.expr) = new BinaryExpression((yyvsp[-2].expr), string((yyvsp[-1].value)), (yyvsp[0].expr)); }
#line 1468 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 12:
#line 79 "parser.yy" /* yacc.c:1646  */
    { (yyval.expr) = new BinaryExpression((yyvsp[-2].expr), string((yyvsp[-1].value)), (yyvsp[0].expr)); }
#line 1474 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 13:
#line 80 "parser.yy" /* yacc.c:1646  */
    { (yyval.expr) = new BinaryExpression((yyvsp[-2].expr), string((yyvsp[-1].value)), (yyvsp[0].expr)); }
#line 1480 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 14:
#line 81 "parser.yy" /* yacc.c:1646  */
    { (yyval.expr) = new BinaryExpression((yyvsp[-2].expr), string((yyvsp[-1].value)), (yyvsp[0].expr)); }
#line 1486 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 15:
#line 82 "parser.yy" /* yacc.c:1646  */
    { (yyval.expr) = new BinaryExpression((yyvsp[-2].expr), string((yyvsp[-1].value)), (yyvsp[0].expr)); }
#line 1492 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 16:
#line 83 "parser.yy" /* yacc.c:1646  */
    { (yyval.expr) = new BinaryExpression((yyvsp[-2].expr), string((yyvsp[-1].value)), (yyvsp[0].expr)); }
#line 1498 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 17:
#line 84 "parser.yy" /* yacc.c:1646  */
    { (yyval.expr) = new BinaryExpression((yyvsp[-2].expr), string((yyvsp[-1].value)), (yyvsp[0].expr)); }
#line 1504 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 18:
#line 85 "parser.yy" /* yacc.c:1646  */
    { (yyval.expr) = new BinaryExpression((yyvsp[-2].expr), string((yyvsp[-1].value)), (yyvsp[0].expr)); }
#line 1510 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 19:
#line 86 "parser.yy" /* yacc.c:1646  */
    { (yyval.expr) = new BinaryExpression((yyvsp[-2].expr), string((yyvsp[-1].value)), (yyvsp[0].expr)); }
#line 1516 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 20:
#line 87 "parser.yy" /* yacc.c:1646  */
    { (yyval.expr) = new BinaryExpression((yyvsp[-2].expr), string((yyvsp[-1].value)), (yyvsp[0].expr)); }
#line 1522 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 21:
#line 88 "parser.yy" /* yacc.c:1646  */
    { (yyval.expr) = new BinaryExpression((yyvsp[-2].expr), string((yyvsp[-1].value)), (yyvsp[0].expr)); }
#line 1528 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 22:
#line 89 "parser.yy" /* yacc.c:1646  */
    { (yyval.expr) = new BinaryExpression((yyvsp[-2].expr), string((yyvsp[-1].value)), (yyvsp[0].expr)); }
#line 1534 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 23:
#line 90 "parser.yy" /* yacc.c:1646  */
    { (yyval.expr) = new BinaryExpression((yyvsp[-2].expr), string((yyvsp[-1].value)), (yyvsp[0].expr)); }
#line 1540 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 24:
#line 91 "parser.yy" /* yacc.c:1646  */
    {(yyval.expr) = (yyvsp[0].funccall);}
#line 1546 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 25:
#line 92 "parser.yy" /* yacc.c:1646  */
    {(yyval.expr) = new EnclosedExpression((yyvsp[-1].expr));}
#line 1552 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 26:
#line 93 "parser.yy" /* yacc.c:1646  */
    {(yyval.expr) = new TernaryIfStatement((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1558 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 27:
#line 94 "parser.yy" /* yacc.c:1646  */
    {(yyval.expr) = new ArrayRef(new Identifier(string((yyvsp[-3].value))), (yyvsp[-1].expr), NULL);}
#line 1564 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 28:
#line 95 "parser.yy" /* yacc.c:1646  */
    {(yyval.expr) = new ArrayRef(new Identifier(string((yyvsp[-6].value))), (yyvsp[-4].expr), (yyvsp[-1].expr)); }
#line 1570 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 29:
#line 97 "parser.yy" /* yacc.c:1646  */
    {(yyval.var) = new VariableInit((yyvsp[-3].datatype), new Identifier(string((yyvsp[-2].value))), (yyvsp[0].expr)); }
#line 1576 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 30:
#line 98 "parser.yy" /* yacc.c:1646  */
    {(yyval.var) = new VariableInit((yyvsp[-1].datatype), new Identifier(string((yyvsp[0].value))), NULL); }
#line 1582 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 31:
#line 99 "parser.yy" /* yacc.c:1646  */
    {(yyval.var) = new ArrayInit((yyvsp[-4].datatype), new Identifier(string((yyvsp[-3].value))), (yyvsp[-1].number), 0); }
#line 1588 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 32:
#line 100 "parser.yy" /* yacc.c:1646  */
    {(yyval.var) = new ArrayInit((yyvsp[-7].datatype), new Identifier(string((yyvsp[-6].value))), (yyvsp[-4].number), (yyvsp[-1].number)); }
#line 1594 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 33:
#line 103 "parser.yy" /* yacc.c:1646  */
    {(yyval.literal) = new CharLiteral((yyvsp[0].value));}
#line 1600 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 34:
#line 104 "parser.yy" /* yacc.c:1646  */
    {(yyval.literal) = new IntLiteral((yyvsp[0].number));}
#line 1606 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 35:
#line 105 "parser.yy" /* yacc.c:1646  */
    {(yyval.literal) = new BoolLiteral((yyvsp[0].value));}
#line 1612 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 36:
#line 106 "parser.yy" /* yacc.c:1646  */
    {(yyval.literal) = new StringLiteral((yyvsp[0].value));}
#line 1618 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 37:
#line 108 "parser.yy" /* yacc.c:1646  */
    {(yyval.funccall) = new FunctionCall(new Identifier(string((yyvsp[-3].value))), (yyvsp[-1].parlist)); }
#line 1624 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 38:
#line 110 "parser.yy" /* yacc.c:1646  */
    {(yyval.parlist) = new ParameterList();}
#line 1630 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 39:
#line 111 "parser.yy" /* yacc.c:1646  */
    {(yyval.parlist) = new ParameterList(); (yyval.parlist)->push_back((yyvsp[0].expr));}
#line 1636 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 40:
#line 112 "parser.yy" /* yacc.c:1646  */
    {(yyvsp[0].parlist)->push_back((yyvsp[-2].expr)), (yyval.parlist)=(yyvsp[0].parlist); /*change*/}
#line 1642 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 41:
#line 114 "parser.yy" /* yacc.c:1646  */
    {(yyval.function) = new FunctionInit((yyvsp[-5].datatype), new Identifier(string((yyvsp[-4].value))), (yyvsp[-2].arglist), (yyvsp[0].block));}
#line 1648 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 42:
#line 116 "parser.yy" /* yacc.c:1646  */
    {(yyval.datatype) = new IntDatatype();}
#line 1654 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 43:
#line 117 "parser.yy" /* yacc.c:1646  */
    {(yyval.datatype) = new CharDatatype();}
#line 1660 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 44:
#line 118 "parser.yy" /* yacc.c:1646  */
    {(yyval.datatype) = new BoolDatatype();}
#line 1666 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 45:
#line 119 "parser.yy" /* yacc.c:1646  */
    {(yyval.datatype) = new UnIntDatatype();}
#line 1672 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 46:
#line 120 "parser.yy" /* yacc.c:1646  */
    {(yyval.datatype) = new VoidDatatype();}
#line 1678 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 47:
#line 122 "parser.yy" /* yacc.c:1646  */
    {(yyval.block) = new Block((yyvsp[-2].varlist), (yyvsp[-1].statelist)); }
#line 1684 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 48:
#line 124 "parser.yy" /* yacc.c:1646  */
    {(yyval.arglist) = new ArgList();}
#line 1690 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 49:
#line 125 "parser.yy" /* yacc.c:1646  */
    {(yyvsp[0].arglist)->push_back((yyvsp[-2].var)); (yyval.arglist)=(yyvsp[0].arglist); /*change*/}
#line 1696 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 50:
#line 126 "parser.yy" /* yacc.c:1646  */
    {(yyval.arglist) = new ArgList(); (yyval.arglist)->push_back((yyvsp[0].var)); }
#line 1702 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 51:
#line 128 "parser.yy" /* yacc.c:1646  */
    {(yyval.statement) = (yyvsp[-1].assignstate);}
#line 1708 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 52:
#line 129 "parser.yy" /* yacc.c:1646  */
    {(yyval.statement) = (yyvsp[-1].funccall); }
#line 1714 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 53:
#line 130 "parser.yy" /* yacc.c:1646  */
    {(yyval.statement) = (yyvsp[0].retstate); }
#line 1720 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 54:
#line 131 "parser.yy" /* yacc.c:1646  */
    {(yyval.statement) = (yyvsp[0].forstate); }
#line 1726 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 55:
#line 132 "parser.yy" /* yacc.c:1646  */
    {(yyval.statement) = (yyvsp[0].whilestate); }
#line 1732 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 56:
#line 133 "parser.yy" /* yacc.c:1646  */
    {(yyval.statement) = (yyvsp[0].ifstate); }
#line 1738 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 57:
#line 134 "parser.yy" /* yacc.c:1646  */
    {(yyval.statement) = (yyvsp[0].block); }
#line 1744 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 58:
#line 136 "parser.yy" /* yacc.c:1646  */
    {(yyval.statelist) = new StatementList();}
#line 1750 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 59:
#line 137 "parser.yy" /* yacc.c:1646  */
    {(yyvsp[0].statelist)->push_back((yyvsp[-1].statement)), (yyval.statelist)=(yyvsp[0].statelist); /*change*/}
#line 1756 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 60:
#line 139 "parser.yy" /* yacc.c:1646  */
    {(yyval.assignstate) = new AssignmentStatement(new Identifier(string((yyvsp[-2].value))), NULL, NULL, (yyvsp[0].expr));}
#line 1762 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 61:
#line 140 "parser.yy" /* yacc.c:1646  */
    {(yyval.assignstate) = new AssignmentStatement(new Identifier(string((yyvsp[-5].value))), (yyvsp[-3].expr), NULL, (yyvsp[0].expr));}
#line 1768 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 62:
#line 141 "parser.yy" /* yacc.c:1646  */
    {(yyval.assignstate) = new AssignmentStatement(new Identifier(string((yyvsp[-8].value))), (yyvsp[-6].expr), (yyvsp[-3].expr), (yyvsp[0].expr));}
#line 1774 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 63:
#line 143 "parser.yy" /* yacc.c:1646  */
    {(yyval.retstate) = new ReturnStatement((yyvsp[-1].expr));}
#line 1780 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 64:
#line 144 "parser.yy" /* yacc.c:1646  */
    {(yyval.retstate) = new ReturnStatement(NULL);}
#line 1786 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 65:
#line 146 "parser.yy" /* yacc.c:1646  */
    {(yyval.forstate) = new ForStatement((yyvsp[-6].var), (yyvsp[-4].expr), (yyvsp[-2].assignstate), (yyvsp[0].block));}
#line 1792 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 66:
#line 148 "parser.yy" /* yacc.c:1646  */
    {(yyval.whilestate) = new WhileStatement((yyvsp[-2].expr), (yyvsp[0].block)); }
#line 1798 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 67:
#line 150 "parser.yy" /* yacc.c:1646  */
    {(yyval.elifstatelist) = new ElifStatement(NULL, NULL, NULL);}
#line 1804 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 68:
#line 151 "parser.yy" /* yacc.c:1646  */
    {(yyval.elifstatelist)=new ElifStatement((yyvsp[-3].expr), (yyvsp[-1].block), (yyvsp[0].elifstatelist));}
#line 1810 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 69:
#line 152 "parser.yy" /* yacc.c:1646  */
    {(yyval.elifstatelist) = new ElifStatement(NULL, (yyvsp[0].block), NULL);}
#line 1816 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 70:
#line 154 "parser.yy" /* yacc.c:1646  */
    {(yyval.ifstate) = new IfStatement((yyvsp[-3].expr), (yyvsp[-1].block), (yyvsp[0].elifstatelist));}
#line 1822 "parser.tab.cc" /* yacc.c:1646  */
    break;


#line 1826 "parser.tab.cc" /* yacc.c:1646  */
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
#line 156 "parser.yy" /* yacc.c:1906  */

int main(int argc, char **argv)
{
 yyparse();
 Visitor visitor;
 visitor.visit(head);
}
void yyerror(const char *s)
{
 fprintf(stderr, "error: %s\n", s);
}
