/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "demo.y"

#include<unistd.h>
#include<stdio.h>   
#include "gramtree.h"
#include "lex.c"

#line 77 "yacc.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_YACC_H_INCLUDED
# define YY_YY_YACC_H_INCLUDED
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
    INTEGER = 258,
    FLOAT = 259,
    STRING = 260,
    PROGRAM = 261,
    IS = 262,
    BEGIN_1 = 263,
    VAR = 264,
    END = 265,
    WRITE = 266,
    SEMI = 267,
    COLON = 268,
    COMMA = 269,
    ASSIGNOP = 270,
    Lbracket = 271,
    Rbracket = 272,
    ID = 273,
    TYPE = 274,
    ADD = 275,
    MINUS = 276,
    STAR = 277,
    DIVISON = 278,
    REAL = 279,
    DO = 280,
    BY = 281,
    ARRAY = 282,
    AND = 283,
    ELSE = 284,
    ELSEIF = 285,
    DIV = 286,
    READ = 287,
    TYPENAME = 288,
    LSbracket = 289,
    RSbracket = 290,
    SPOT = 291,
    OF = 292,
    PROCEDURE = 293,
    NOT = 294,
    MOD = 295,
    OR = 296,
    RECORD = 297,
    BIGGER = 298,
    SMALLER = 299,
    EQUAL = 300,
    NSMALLER = 301,
    NBIGGER = 302,
    SQUARE = 303,
    Llimit = 304,
    Rlimit = 305,
    LHbracket = 306,
    RHbracket = 307,
    RETURN = 308,
    EXIT = 309,
    FOR = 310,
    LOOP = 311,
    WHILE = 312,
    IF = 313,
    THEN = 314,
    TO = 315,
    EOL = 316
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 8 "demo.y"

struct ast* a;
double d;

#line 196 "yacc.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_YACC_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
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
#define YYLAST   567

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  103
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  228

#define YYUNDEFTOK  2
#define YYMAXUTOK   316


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
static const yytype_uint8 yyrline[] =
{
       0,    60,    60,    61,    64,    65,    68,    69,    70,    71,
      72,    75,    76,    79,    80,    83,    84,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    98,    98,    98,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   115,   116,   119,   120,   121,   124,
     125,   128,   129,   132,   133,   136,   137,   140,   141,   144,
     145,   146,   149,   152,   153,   156,   157,   158,   161,   163,
     164,   167,   168,   171,   173,   174,   177,   178,   181,   182,
     185,   187,   188,   191,   192,   195,   197,   198,   201,   203,
     204,   207,   209,   210
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTEGER", "FLOAT", "STRING", "PROGRAM",
  "IS", "BEGIN_1", "VAR", "END", "WRITE", "SEMI", "COLON", "COMMA",
  "ASSIGNOP", "Lbracket", "Rbracket", "ID", "TYPE", "ADD", "MINUS", "STAR",
  "DIVISON", "REAL", "DO", "BY", "ARRAY", "AND", "ELSE", "ELSEIF", "DIV",
  "READ", "TYPENAME", "LSbracket", "RSbracket", "SPOT", "OF", "PROCEDURE",
  "NOT", "MOD", "OR", "RECORD", "BIGGER", "SMALLER", "EQUAL", "NSMALLER",
  "NBIGGER", "SQUARE", "Llimit", "Rlimit", "LHbracket", "RHbracket",
  "RETURN", "EXIT", "FOR", "LOOP", "WHILE", "IF", "THEN", "TO", "EOL",
  "$accept", "root", "body", "declaration", "var-decl", "var-decl2",
  "ID-closure", "expression", "unary-op", "binary-op", "statement",
  "by-expression", "expression2", "statement-closure", "write-params",
  "write-expr", "write-expr-closure", "lvalue-closure", "lvalue",
  "type-decl", "type-decl-closure", "type", "component",
  "component-closure", "procedure-decl-closure", "procedure-decl",
  "procedure-decl2", "formal-params", "fp-section-closure", "fp-section",
  "actual-params", "expression-closure", "array-value", "array2",
  "array-values", "array-closure", "comp-values", "comp-closure", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
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

#define YYPACT_NINF (-56)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-12)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       0,    -5,    10,   100,   -56,    12,    22,    36,    39,     6,
      50,    48,    49,    44,    53,    62,    36,    55,    39,   -56,
      -6,   127,   127,    22,    41,    60,    -4,    36,   127,    -1,
      63,   127,    39,    64,    67,    68,    52,    87,    61,    -6,
      74,    74,    86,    88,   -56,   -56,   -56,   -56,    74,   -56,
      73,    94,   105,   -56,   -56,   -56,    22,   108,    -4,   114,
     -56,   -56,     4,   113,    84,   115,   119,   -56,   -56,    74,
     -12,   -56,   -56,    -6,   -56,   519,    74,   120,   -21,    -6,
     116,   123,   403,   218,   -56,    74,    74,   122,   519,    -4,
     130,    94,   -56,   135,   136,   124,   -56,   100,   -56,   -56,
     519,   139,    -6,   -56,   342,    -6,   -56,    -3,   374,    74,
     137,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,    74,
     519,    -6,   -56,    74,   145,    -6,    -6,   277,   432,   -56,
     -56,    -4,    94,   150,    -4,   108,   -56,   149,    24,   147,
     -56,    74,   151,   -56,   119,   152,   -56,   461,   148,    74,
     155,   519,   -56,   187,    -6,   156,   141,    -6,   -56,   160,
     -56,   -56,   -56,   -56,   -56,   139,   -56,   342,   -56,    -3,
     162,   -56,    74,   117,   519,    74,    74,   -56,   165,    74,
      52,   -56,   -56,   -56,   -56,   -56,    -6,   148,   -56,   307,
     490,    -6,   247,   169,   -56,   -56,   164,   131,    74,   159,
     -56,    -6,   173,   171,   -56,   519,    -6,   141,    -6,    74,
     177,   -56,   -56,   307,   178,   -56,    -6,   -56
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     0,     4,     1,    11,    15,     0,     0,     0,
       0,     0,     0,     0,    13,     0,    73,     0,    81,     3,
      43,     6,     6,    15,     0,     0,     0,    73,     6,     0,
      84,     6,    81,     0,    69,     0,    56,     0,     0,    43,
       0,     0,     0,     0,     8,     7,    16,    14,     0,    75,
       0,     0,     0,    74,     9,    86,    15,    88,     0,     0,
      10,    82,     0,     0,     0,     0,     0,    17,    18,     0,
      69,    26,    27,    43,    28,    57,     0,     0,    21,    43,
       0,     0,     0,     0,     5,     0,     0,     0,    12,     0,
       0,    79,    72,     0,     0,     0,    85,     4,    63,    62,
      64,    65,    43,    91,    93,    43,    69,    67,     0,     0,
       0,    23,    25,    24,    58,    29,    30,    31,    32,    36,
      33,    34,    35,    37,    38,    39,    40,    41,    42,     0,
      19,    43,    49,     0,     0,    43,    43,     0,     0,    71,
      76,     0,    79,     0,     0,    88,    87,     0,     0,     0,
      44,     0,     0,    47,     0,     0,    22,     0,    99,     0,
       0,    20,    48,     0,    43,     0,    59,    43,    70,     0,
      80,    77,    90,    89,    83,    65,    61,    93,    92,    67,
       0,    97,     0,     0,    95,     0,     0,    51,     0,     0,
      56,    46,    78,    66,    94,    68,    43,    99,    98,   102,
      54,    43,     0,     0,    45,   100,     0,     0,     0,     0,
      52,    43,     0,     0,   101,    55,    43,    59,    43,     0,
       0,    60,    53,   102,     0,   103,    43,    50
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -56,   -56,    92,   128,   188,   -56,     9,    66,   -56,   -56,
     -38,   -56,     2,   -23,   -56,    54,    25,    18,   -20,   194,
     176,   -55,   153,    69,   180,   197,   -56,   -56,    71,   125,
     143,    43,    40,   -56,   -56,    26,   -56,    -2
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     9,    10,    11,    25,    14,    75,    76,   129,
      42,   209,    77,   190,    63,   101,   149,   155,    78,    27,
      28,    52,   142,   143,    31,    32,    59,    30,    95,    57,
      65,   152,   158,   159,   112,   183,   113,   207
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      43,    81,     3,    96,    64,    33,     1,    67,    68,    98,
       4,   154,    34,    86,    49,    87,    55,    56,    19,    43,
      69,    99,    70,    50,    71,    72,    35,    67,    68,    98,
       6,    86,    46,    87,   140,   114,    13,   109,    51,   110,
      69,   132,    70,    74,    71,    72,   107,    36,    37,    38,
      39,    40,    41,    43,    15,    67,    68,    17,    20,    43,
      21,    22,    23,    74,   150,    93,    24,   153,    69,    26,
      70,    29,    71,    72,    47,    48,    58,    67,    68,    80,
      62,    73,    43,    64,    66,    43,   169,    67,    68,   172,
      69,    74,    70,   162,    71,    72,    84,   165,   166,    79,
      69,   103,    70,    85,    71,    72,    82,    83,    -6,     5,
      89,    43,    90,    74,    88,    43,    43,    92,     6,     7,
      94,    97,    86,    74,    87,   102,   187,   105,   100,   191,
     104,   133,   131,   134,   179,   108,     5,   106,     8,   -11,
     139,   146,   130,   141,    43,     6,     7,    43,   144,    44,
      45,   137,   138,   148,    56,   160,    54,   164,   204,    60,
     171,   174,   182,   210,   176,     8,   188,   198,   178,   180,
     185,   189,   192,   217,   196,   157,    43,   201,   220,   212,
     222,    43,   213,   214,   216,   218,   219,   224,   227,   147,
     226,    43,   203,    12,   221,   161,    43,   195,    43,   163,
     193,    16,   175,    53,    91,    18,    43,   115,   116,   117,
     118,   170,    61,   111,   100,   119,   173,   177,   120,   145,
     194,   225,   197,   205,     0,   184,     0,   121,   122,     0,
     123,   124,   125,   126,   127,   128,     0,     0,   115,   116,
     117,   118,     0,     0,     0,     0,   119,   186,   157,   120,
       0,   199,   200,     0,     0,   202,     0,     0,   121,   122,
       0,   123,   124,   125,   126,   127,   128,   115,   116,   117,
     118,     0,     0,     0,   215,   119,     0,   136,   120,     0,
       0,     0,     0,     0,     0,   223,     0,   121,   122,   167,
     123,   124,   125,   126,   127,   128,     0,   115,   116,   117,
     118,     0,     0,     0,     0,   119,   211,     0,   120,     0,
       0,     0,     0,     0,     0,     0,     0,   121,   122,   206,
     123,   124,   125,   126,   127,   128,     0,   115,   116,   117,
     118,     0,     0,     0,     0,   119,     0,     0,   120,     0,
       0,     0,     0,     0,     0,     0,     0,   121,   122,     0,
     123,   124,   125,   126,   127,   128,   151,     0,     0,     0,
       0,     0,   115,   116,   117,   118,     0,     0,     0,     0,
     119,     0,     0,   120,     0,     0,     0,     0,     0,     0,
       0,     0,   121,   122,     0,   123,   124,   125,   126,   127,
     128,   156,     0,     0,   115,   116,   117,   118,     0,     0,
       0,     0,   119,     0,     0,   120,     0,     0,     0,     0,
       0,     0,     0,     0,   121,   122,     0,   123,   124,   125,
     126,   127,   128,   115,   116,   117,   118,     0,   135,     0,
       0,   119,     0,     0,   120,     0,     0,     0,     0,     0,
       0,     0,     0,   121,   122,     0,   123,   124,   125,   126,
     127,   128,   115,   116,   117,   118,     0,     0,     0,     0,
     119,     0,     0,   120,     0,     0,     0,   168,     0,     0,
       0,     0,   121,   122,     0,   123,   124,   125,   126,   127,
     128,   115,   116,   117,   118,     0,     0,     0,     0,   119,
       0,     0,   120,     0,     0,     0,     0,     0,   181,     0,
       0,   121,   122,     0,   123,   124,   125,   126,   127,   128,
     115,   116,   117,   118,     0,     0,   208,     0,   119,     0,
       0,   120,     0,     0,     0,     0,     0,     0,     0,     0,
     121,   122,     0,   123,   124,   125,   126,   127,   128,   115,
     116,   117,   118,     0,     0,     0,     0,   119,     0,     0,
     120,     0,     0,     0,     0,     0,     0,     0,     0,   121,
     122,     0,   123,   124,   125,   126,   127,   128
};

static const yytype_int16 yycheck[] =
{
      20,    39,     7,    58,    16,    11,     6,     3,     4,     5,
       0,    14,    18,    34,    18,    36,    17,    18,    12,    39,
      16,    17,    18,    27,    20,    21,    32,     3,     4,     5,
      18,    34,    23,    36,    89,    73,    14,    49,    42,    51,
      16,    79,    18,    39,    20,    21,    66,    53,    54,    55,
      56,    57,    58,    73,    18,     3,     4,    18,     8,    79,
      12,    12,    18,    39,   102,    56,    13,   105,    16,     7,
      18,    16,    20,    21,    33,    15,    13,     3,     4,    18,
      16,    29,   102,    16,    16,   105,   141,     3,     4,   144,
      16,    39,    18,   131,    20,    21,    10,   135,   136,    12,
      16,    17,    18,    15,    20,    21,    40,    41,     8,     9,
      37,   131,    18,    39,    48,   135,   136,    12,    18,    19,
      12,     7,    34,    39,    36,    12,   164,    12,    62,   167,
      64,    15,    12,    10,   154,    69,     9,    18,    38,    12,
      18,    17,    76,    13,   164,    18,    19,   167,    13,    21,
      22,    85,    86,    14,    18,    18,    28,    12,   196,    31,
      10,    12,    14,   201,    17,    38,    10,    50,    17,    17,
      15,    30,    12,   211,    12,   109,   196,    12,   216,    10,
     218,   201,    18,    52,    25,    12,    15,    10,   226,    97,
      12,   211,   190,     5,   217,   129,   216,   179,   218,   133,
     175,     7,   148,    27,    51,     8,   226,    20,    21,    22,
      23,   142,    32,    70,   148,    28,   145,   151,    31,    94,
     177,   223,   182,   197,    -1,   159,    -1,    40,    41,    -1,
      43,    44,    45,    46,    47,    48,    -1,    -1,    20,    21,
      22,    23,    -1,    -1,    -1,    -1,    28,    60,   182,    31,
      -1,   185,   186,    -1,    -1,   189,    -1,    -1,    40,    41,
      -1,    43,    44,    45,    46,    47,    48,    20,    21,    22,
      23,    -1,    -1,    -1,   208,    28,    -1,    59,    31,    -1,
      -1,    -1,    -1,    -1,    -1,   219,    -1,    40,    41,    12,
      43,    44,    45,    46,    47,    48,    -1,    20,    21,    22,
      23,    -1,    -1,    -1,    -1,    28,    59,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    12,
      43,    44,    45,    46,    47,    48,    -1,    20,    21,    22,
      23,    -1,    -1,    -1,    -1,    28,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,
      43,    44,    45,    46,    47,    48,    14,    -1,    -1,    -1,
      -1,    -1,    20,    21,    22,    23,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    -1,    43,    44,    45,    46,    47,
      48,    17,    -1,    -1,    20,    21,    22,    23,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    -1,    43,    44,    45,
      46,    47,    48,    20,    21,    22,    23,    -1,    25,    -1,
      -1,    28,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    41,    -1,    43,    44,    45,    46,
      47,    48,    20,    21,    22,    23,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    31,    -1,    -1,    -1,    35,    -1,    -1,
      -1,    -1,    40,    41,    -1,    43,    44,    45,    46,    47,
      48,    20,    21,    22,    23,    -1,    -1,    -1,    -1,    28,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    37,    -1,
      -1,    40,    41,    -1,    43,    44,    45,    46,    47,    48,
      20,    21,    22,    23,    -1,    -1,    26,    -1,    28,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    -1,    43,    44,    45,    46,    47,    48,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,    28,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    -1,    43,    44,    45,    46,    47,    48
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     6,    63,     7,     0,     9,    18,    19,    38,    64,
      65,    66,    66,    14,    68,    18,    81,    18,    87,    12,
       8,    12,    12,    18,    13,    67,     7,    81,    82,    16,
      89,    86,    87,    11,    18,    32,    53,    54,    55,    56,
      57,    58,    72,    80,    65,    65,    68,    33,    15,    18,
      27,    42,    83,    82,    65,    17,    18,    91,    13,    88,
      65,    86,    16,    76,    16,    92,    16,     3,     4,    16,
      18,    20,    21,    29,    39,    69,    70,    74,    80,    12,
      18,    72,    69,    69,    10,    15,    34,    36,    69,    37,
      18,    84,    12,    68,    12,    90,    83,     7,     5,    17,
      69,    77,    12,    17,    69,    12,    18,    80,    69,    49,
      51,    92,    96,    98,    72,    20,    21,    22,    23,    28,
      31,    40,    41,    43,    44,    45,    46,    47,    48,    71,
      69,    12,    72,    15,    10,    25,    59,    69,    69,    18,
      83,    13,    84,    85,    13,    91,    17,    64,    14,    78,
      72,    14,    93,    72,    14,    79,    17,    69,    94,    95,
      18,    69,    72,    69,    12,    72,    72,    12,    35,    83,
      85,    10,    83,    90,    12,    77,    17,    69,    17,    80,
      17,    37,    14,    97,    69,    15,    60,    72,    10,    30,
      75,    72,    12,    78,    93,    79,    12,    94,    50,    69,
      69,    12,    69,    74,    72,    97,    12,    99,    26,    73,
      72,    59,    10,    18,    52,    69,    25,    72,    12,    15,
      72,    75,    72,    69,    10,    99,    12,    72
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    62,    63,    63,    64,    64,    65,    65,    65,    65,
      65,    66,    66,    67,    67,    68,    68,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    70,    70,    70,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    73,    73,    74,    74,    74,    75,
      75,    76,    76,    77,    77,    78,    78,    79,    79,    80,
      80,    80,    81,    82,    82,    83,    83,    83,    84,    85,
      85,    86,    86,    87,    88,    88,    89,    89,    90,    90,
      91,    92,    92,    93,    93,    94,    95,    95,    96,    97,
      97,    98,    99,    99
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     4,     0,     4,     0,     4,     3,     4,
       4,     0,     5,     0,     2,     0,     3,     1,     1,     2,
       3,     1,     3,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     4,     7,     5,     4,     4,     3,
      12,     5,     7,     9,     0,     2,     0,     1,     2,     0,
       5,     4,     2,     1,     1,     0,     3,     0,     3,     1,
       4,     3,     4,     0,     2,     1,     3,     4,     4,     0,
       2,     0,     2,     6,     0,     2,     2,     4,     0,     3,
       4,     2,     4,     0,     3,     2,     0,     2,     4,     0,
       3,     6,     0,     5
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
#line 60 "demo.y"
       {(yyval.a)=newast("root",0,-1);}
#line 1599 "yacc.c"
    break;

  case 3:
#line 61 "demo.y"
                        {(yyval.a)=newast("root",4,(yyvsp[-3].a),(yyvsp[-2].a),(yyvsp[-1].a),(yyvsp[0].a));printf("打印syntax tree:\n");eval((yyval.a),0);printf("syntax tree打印完毕!\n\n");}
#line 1605 "yacc.c"
    break;

  case 4:
#line 64 "demo.y"
      {(yyval.a)=newast("body",0,-1);}
#line 1611 "yacc.c"
    break;

  case 5:
#line 65 "demo.y"
                                      {(yyval.a)=newast("body",4,(yyvsp[-3].a),(yyvsp[-2].a),(yyvsp[-1].a),(yyvsp[0].a));}
#line 1617 "yacc.c"
    break;

  case 6:
#line 68 "demo.y"
             {(yyval.a)=newast("declaration",0,-1);}
#line 1623 "yacc.c"
    break;

  case 7:
#line 69 "demo.y"
                                  {(yyval.a)=newast("declaration",4,(yyvsp[-3].a),(yyvsp[-2].a),(yyvsp[-1].a),(yyvsp[0].a));}
#line 1629 "yacc.c"
    break;

  case 8:
#line 70 "demo.y"
                              {(yyval.a)=newast("declaration",3,(yyvsp[-2].a),(yyvsp[-1].a),(yyvsp[0].a));}
#line 1635 "yacc.c"
    break;

  case 9:
#line 71 "demo.y"
                                                 {(yyval.a)=newast("declaration",4,(yyvsp[-3].a),(yyvsp[-2].a),(yyvsp[-1].a),(yyvsp[0].a));}
#line 1641 "yacc.c"
    break;

  case 10:
#line 72 "demo.y"
                                                                {(yyval.a)=newast("declaration",4,(yyvsp[-3].a),(yyvsp[-2].a),(yyvsp[-1].a),(yyvsp[0].a));}
#line 1647 "yacc.c"
    break;

  case 11:
#line 75 "demo.y"
          {(yyval.a)=newast("var-decl",0,-1);}
#line 1653 "yacc.c"
    break;

  case 12:
#line 76 "demo.y"
                                                {(yyval.a)=newast("var-decl",5,(yyvsp[-4].a),(yyvsp[-3].a),(yyvsp[-2].a),(yyvsp[-1].a),(yyvsp[0].a));}
#line 1659 "yacc.c"
    break;

  case 13:
#line 79 "demo.y"
           {(yyval.a)=newast("var-decl2",0,-1);}
#line 1665 "yacc.c"
    break;

  case 14:
#line 80 "demo.y"
                   {(yyval.a)=newast("var-decl2",2,(yyvsp[-1].a),(yyvsp[0].a));}
#line 1671 "yacc.c"
    break;

  case 15:
#line 83 "demo.y"
            {(yyval.a)=newast("ID-closure",0,-1);}
#line 1677 "yacc.c"
    break;

  case 16:
#line 84 "demo.y"
                        {(yyval.a)=newast("ID-closure",3,(yyvsp[-2].a),(yyvsp[-1].a),(yyvsp[0].a));}
#line 1683 "yacc.c"
    break;

  case 17:
#line 87 "demo.y"
                    {(yyval.a)=newast("integer", 1, (yyvsp[0].a));}
#line 1689 "yacc.c"
    break;

  case 18:
#line 88 "demo.y"
          {(yyval.a)=newast("real", 1, (yyvsp[0].a));}
#line 1695 "yacc.c"
    break;

  case 19:
#line 89 "demo.y"
                        {(yyval.a)=newast("expression",2,(yyvsp[-1].a),(yyvsp[0].a));}
#line 1701 "yacc.c"
    break;

  case 20:
#line 90 "demo.y"
                                    {(yyval.a)=newast("expression",3,(yyvsp[-2].a),(yyvsp[-1].a),(yyvsp[0].a));}
#line 1707 "yacc.c"
    break;

  case 21:
#line 91 "demo.y"
           {(yyval.a)=newast("expression",1,(yyvsp[0].a));}
#line 1713 "yacc.c"
    break;

  case 22:
#line 92 "demo.y"
                                 {(yyval.a)=newast("expression",3,(yyvsp[-2].a),(yyvsp[-1].a),(yyvsp[0].a));}
#line 1719 "yacc.c"
    break;

  case 23:
#line 93 "demo.y"
                     {(yyval.a)=newast("expression",2,(yyvsp[-1].a),(yyvsp[0].a));}
#line 1725 "yacc.c"
    break;

  case 24:
#line 94 "demo.y"
                   {(yyval.a)=newast("expression",2,(yyvsp[-1].a),(yyvsp[0].a));}
#line 1731 "yacc.c"
    break;

  case 25:
#line 95 "demo.y"
                    {(yyval.a)=newast("expression",2,(yyvsp[-1].a),(yyvsp[0].a));}
#line 1737 "yacc.c"
    break;

  case 28:
#line 98 "demo.y"
                            {(yyval.a)=newast("unary-op",1,(yyvsp[0].a));}
#line 1743 "yacc.c"
    break;

  case 42:
#line 100 "demo.y"
                                                                                                                        {(yyval.a)=newast("binary-op",1,(yyvsp[0].a));}
#line 1749 "yacc.c"
    break;

  case 43:
#line 102 "demo.y"
           {(yyval.a)=newast("statement",0,-1);}
#line 1755 "yacc.c"
    break;

  case 44:
#line 103 "demo.y"
                                      {(yyval.a)=newast("statement",4,(yyvsp[-3].a),(yyvsp[-2].a),(yyvsp[-1].a),(yyvsp[0].a));}
#line 1761 "yacc.c"
    break;

  case 45:
#line 104 "demo.y"
                                                                {(yyval.a)=newast("statement",7,(yyvsp[-6].a),(yyvsp[-5].a),(yyvsp[-4].a),(yyvsp[-3].a),(yyvsp[-2].a),(yyvsp[-1].a),(yyvsp[0].a));}
#line 1767 "yacc.c"
    break;

  case 46:
#line 105 "demo.y"
                                              {(yyval.a)=newast("statement",5,(yyvsp[-4].a),(yyvsp[-3].a),(yyvsp[-2].a),(yyvsp[-1].a),(yyvsp[0].a));}
#line 1773 "yacc.c"
    break;

  case 47:
#line 106 "demo.y"
                                    {(yyval.a)=newast("statement",4,(yyvsp[-3].a),(yyvsp[-2].a),(yyvsp[-1].a),(yyvsp[0].a));}
#line 1779 "yacc.c"
    break;

  case 48:
#line 107 "demo.y"
                                      {(yyval.a)=newast("statement",4,(yyvsp[-3].a),(yyvsp[-2].a),(yyvsp[-1].a),(yyvsp[0].a));}
#line 1785 "yacc.c"
    break;

  case 49:
#line 108 "demo.y"
                        {(yyval.a)=newast("statement",3,(yyvsp[-2].a),(yyvsp[-1].a),(yyvsp[0].a));}
#line 1791 "yacc.c"
    break;

  case 50:
#line 109 "demo.y"
                                                                                           {(yyval.a)=newast("statement",12,(yyvsp[-11].a),(yyvsp[-10].a),(yyvsp[-9].a),(yyvsp[-8].a),(yyvsp[-7].a),(yyvsp[-6].a),(yyvsp[-5].a),(yyvsp[-4].a),(yyvsp[-3].a),(yyvsp[-2].a),(yyvsp[-1].a),(yyvsp[0].a));}
#line 1797 "yacc.c"
    break;

  case 51:
#line 110 "demo.y"
                                      {(yyval.a)=newast("statement",5,(yyvsp[-4].a),(yyvsp[-3].a),(yyvsp[-2].a),(yyvsp[-1].a),(yyvsp[0].a));}
#line 1803 "yacc.c"
    break;

  case 52:
#line 111 "demo.y"
                                                     {(yyval.a)=newast("statement",7,(yyvsp[-6].a),(yyvsp[-5].a),(yyvsp[-4].a),(yyvsp[-3].a),(yyvsp[-2].a),(yyvsp[-1].a),(yyvsp[0].a));}
#line 1809 "yacc.c"
    break;

  case 53:
#line 112 "demo.y"
                                                                                  {(yyval.a)=newast("statement",9,(yyvsp[-8].a),(yyvsp[-7].a),(yyvsp[-6].a),(yyvsp[-5].a),(yyvsp[-4].a),(yyvsp[-3].a),(yyvsp[-2].a),(yyvsp[-1].a),(yyvsp[0].a));}
#line 1815 "yacc.c"
    break;

  case 54:
#line 115 "demo.y"
               {(yyval.a)=newast("by expression",0,-1);}
#line 1821 "yacc.c"
    break;

  case 55:
#line 116 "demo.y"
                  {(yyval.a)=newast("by expression",2,(yyvsp[-1].a),(yyvsp[0].a));}
#line 1827 "yacc.c"
    break;

  case 56:
#line 119 "demo.y"
             {(yyval.a)=newast("expression2",0,-1);}
#line 1833 "yacc.c"
    break;

  case 57:
#line 120 "demo.y"
               {(yyval.a)=newast("expression2",1,(yyvsp[0].a));}
#line 1839 "yacc.c"
    break;

  case 58:
#line 121 "demo.y"
                   {(yyval.a)=newast("expression2",2,(yyvsp[-1].a),(yyvsp[0].a));}
#line 1845 "yacc.c"
    break;

  case 59:
#line 124 "demo.y"
                   {(yyval.a)=newast("statement-closure",0,-1);}
#line 1851 "yacc.c"
    break;

  case 60:
#line 125 "demo.y"
                                                       {(yyval.a)=newast("statement-closure",5,(yyvsp[-4].a),(yyvsp[-3].a),(yyvsp[-2].a),(yyvsp[-1].a),(yyvsp[0].a));}
#line 1857 "yacc.c"
    break;

  case 61:
#line 128 "demo.y"
                                                              {(yyval.a)=newast("write-params",4,(yyvsp[-3].a),(yyvsp[-2].a),(yyvsp[-1].a),(yyvsp[0].a));}
#line 1863 "yacc.c"
    break;

  case 62:
#line 129 "demo.y"
                      {(yyval.a)=newast("write-params",2,(yyvsp[-1].a),(yyvsp[0].a));}
#line 1869 "yacc.c"
    break;

  case 63:
#line 132 "demo.y"
                   {(yyval.a)=newast("write-expr",1,(yyvsp[0].a));}
#line 1875 "yacc.c"
    break;

  case 64:
#line 133 "demo.y"
               {(yyval.a)=newast("write-expr",1,(yyvsp[0].a));}
#line 1881 "yacc.c"
    break;

  case 65:
#line 136 "demo.y"
                    {(yyval.a)=newast("write-expr-closure",0,-1);}
#line 1887 "yacc.c"
    break;

  case 66:
#line 137 "demo.y"
                                        {(yyval.a)=newast("write-expr-closure",3,(yyvsp[-2].a),(yyvsp[-1].a),(yyvsp[0].a));}
#line 1893 "yacc.c"
    break;

  case 67:
#line 140 "demo.y"
                {(yyval.a)=newast("lvalue-closure",0,-1);}
#line 1899 "yacc.c"
    break;

  case 68:
#line 141 "demo.y"
                                {(yyval.a)=newast("lvalue-closure",3,(yyvsp[-2].a),(yyvsp[-1].a),(yyvsp[0].a));}
#line 1905 "yacc.c"
    break;

  case 69:
#line 144 "demo.y"
           {(yyval.a)=newast("lvalue",1,(yyvsp[0].a));}
#line 1911 "yacc.c"
    break;

  case 70:
#line 145 "demo.y"
                                          {(yyval.a)=newast("lvalue",4,(yyvsp[-3].a),(yyvsp[-2].a),(yyvsp[-1].a),(yyvsp[0].a));}
#line 1917 "yacc.c"
    break;

  case 71:
#line 146 "demo.y"
                   {(yyval.a)=newast("lvalue",3,(yyvsp[-2].a),(yyvsp[-1].a),(yyvsp[0].a));}
#line 1923 "yacc.c"
    break;

  case 72:
#line 149 "demo.y"
                           {(yyval.a)=newast("type-decl",4,(yyvsp[-3].a),(yyvsp[-2].a),(yyvsp[-1].a),(yyvsp[0].a));}
#line 1929 "yacc.c"
    break;

  case 73:
#line 152 "demo.y"
                   {(yyval.a)=newast("type-decl-closure",0,-1);}
#line 1935 "yacc.c"
    break;

  case 74:
#line 153 "demo.y"
                                {(yyval.a)=newast("type-decl-closure",2,(yyvsp[-1].a),(yyvsp[0].a));}
#line 1941 "yacc.c"
    break;

  case 75:
#line 156 "demo.y"
         {(yyval.a)=newast("type",1,(yyvsp[0].a));}
#line 1947 "yacc.c"
    break;

  case 76:
#line 157 "demo.y"
                  {(yyval.a)=newast("type",3,(yyvsp[-2].a),(yyvsp[-1].a),(yyvsp[0].a));}
#line 1953 "yacc.c"
    break;

  case 77:
#line 158 "demo.y"
                                           {(yyval.a)=newast("type",4,(yyvsp[-3].a),(yyvsp[-2].a),(yyvsp[-1].a),(yyvsp[0].a));}
#line 1959 "yacc.c"
    break;

  case 78:
#line 161 "demo.y"
                              {(yyval.a)=newast("component",4,(yyvsp[-3].a),(yyvsp[-2].a),(yyvsp[-1].a),(yyvsp[0].a));}
#line 1965 "yacc.c"
    break;

  case 79:
#line 163 "demo.y"
                   {(yyval.a)=newast("component-closure",0,-1);}
#line 1971 "yacc.c"
    break;

  case 80:
#line 164 "demo.y"
                                {(yyval.a)=newast("component-closure",2,(yyvsp[-1].a),(yyvsp[0].a));}
#line 1977 "yacc.c"
    break;

  case 81:
#line 167 "demo.y"
                        {(yyval.a)=newast("procedure-decl-closure",0,-1);}
#line 1983 "yacc.c"
    break;

  case 82:
#line 168 "demo.y"
                                          {(yyval.a)=newast("procedure-decl-closure",2,(yyvsp[-1].a),(yyvsp[0].a));}
#line 1989 "yacc.c"
    break;

  case 83:
#line 171 "demo.y"
                                                              {(yyval.a)=newast("procedure-decl",6,(yyvsp[-5].a),(yyvsp[-4].a),(yyvsp[-3].a),(yyvsp[-2].a),(yyvsp[-1].a),(yyvsp[0].a));}
#line 1995 "yacc.c"
    break;

  case 84:
#line 173 "demo.y"
                 {(yyval.a)=newast("procedure-decl2",0,-1);}
#line 2001 "yacc.c"
    break;

  case 85:
#line 174 "demo.y"
               {(yyval.a)=newast("procedure-decl2",2,(yyvsp[-1].a),(yyvsp[0].a));}
#line 2007 "yacc.c"
    break;

  case 86:
#line 177 "demo.y"
                                 {(yyval.a)=newast("formal-params",2,(yyvsp[-1].a),(yyvsp[0].a));}
#line 2013 "yacc.c"
    break;

  case 87:
#line 178 "demo.y"
                                                    {(yyval.a)=newast("formal-params",4,(yyvsp[-3].a),(yyvsp[-2].a),(yyvsp[-1].a),(yyvsp[0].a));}
#line 2019 "yacc.c"
    break;

  case 88:
#line 181 "demo.y"
                    {(yyval.a)=newast("fp-section-closure",0,-1);}
#line 2025 "yacc.c"
    break;

  case 89:
#line 182 "demo.y"
                                       {(yyval.a)=newast("fp-section-closure",3,(yyvsp[-2].a),(yyvsp[-1].a),(yyvsp[0].a));}
#line 2031 "yacc.c"
    break;

  case 90:
#line 185 "demo.y"
                                     {(yyval.a)=newast("fp-section",4,(yyvsp[-3].a),(yyvsp[-2].a),(yyvsp[-1].a),(yyvsp[0].a));}
#line 2037 "yacc.c"
    break;

  case 91:
#line 187 "demo.y"
                                 {(yyval.a)=newast("actual-params",2,(yyvsp[-1].a),(yyvsp[0].a));}
#line 2043 "yacc.c"
    break;

  case 92:
#line 188 "demo.y"
                                                    {(yyval.a)=newast("actual-params",4,(yyvsp[-3].a),(yyvsp[-2].a),(yyvsp[-1].a),(yyvsp[0].a));}
#line 2049 "yacc.c"
    break;

  case 93:
#line 191 "demo.y"
                    {(yyval.a)=newast("expression-closure",0,-1);}
#line 2055 "yacc.c"
    break;

  case 94:
#line 192 "demo.y"
                                        {(yyval.a)=newast("expression-closure",3,(yyvsp[-2].a),(yyvsp[-1].a),(yyvsp[0].a));}
#line 2061 "yacc.c"
    break;

  case 95:
#line 195 "demo.y"
                               {(yyval.a)=newast("array-value",2,(yyvsp[-1].a),(yyvsp[0].a));}
#line 2067 "yacc.c"
    break;

  case 96:
#line 197 "demo.y"
        {(yyval.a)=newast("array-value",0,-1);}
#line 2073 "yacc.c"
    break;

  case 97:
#line 198 "demo.y"
                  {(yyval.a)=newast("array-value",2,(yyvsp[-1].a),(yyvsp[0].a));}
#line 2079 "yacc.c"
    break;

  case 98:
#line 201 "demo.y"
                                                      {(yyval.a)=newast("array-values",4,(yyvsp[-3].a),(yyvsp[-2].a),(yyvsp[-1].a),(yyvsp[0].a));}
#line 2085 "yacc.c"
    break;

  case 99:
#line 203 "demo.y"
               {(yyval.a)=newast("array-closure",0,-1);}
#line 2091 "yacc.c"
    break;

  case 100:
#line 204 "demo.y"
                                    {(yyval.a)=newast("array-closure",3,(yyvsp[-2].a),(yyvsp[-1].a),(yyvsp[0].a));}
#line 2097 "yacc.c"
    break;

  case 101:
#line 207 "demo.y"
                                                                     {(yyval.a)=newast("comp-values",6,(yyvsp[-5].a),(yyvsp[-4].a),(yyvsp[-3].a),(yyvsp[-2].a),(yyvsp[-1].a),(yyvsp[0].a));}
#line 2103 "yacc.c"
    break;

  case 102:
#line 209 "demo.y"
              {(yyval.a)=newast("comp-closure",0,-1);}
#line 2109 "yacc.c"
    break;

  case 103:
#line 210 "demo.y"
                                             {(yyval.a)=newast("comp-closure",5,(yyvsp[-4].a),(yyvsp[-3].a),(yyvsp[-2].a),(yyvsp[-1].a),(yyvsp[0].a));}
#line 2115 "yacc.c"
    break;


#line 2119 "yacc.c"

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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 213 "demo.y"
