/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "a2version2.y"

#include <math.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <error.h>
#include <errno.h>
#include "extetrickstype.h"

#define STRLEN 1024
void yyerror(char *s)
{
fprintf(stderr,"%s\n",s);
return;
}

int yywrap()
{
    return 1;
}


#line 95 "a2version2.tab.c"

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

#include "a2version2.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ID = 3,                         /* ID  */
  YYSYMBOL_NUM = 4,                        /* NUM  */
  YYSYMBOL_STRING = 5,                     /* STRING  */
  YYSYMBOL_TUPLE = 6,                      /* TUPLE  */
  YYSYMBOL_SECTION1 = 7,                   /* SECTION1  */
  YYSYMBOL_SECTION2 = 8,                   /* SECTION2  */
  YYSYMBOL_SECTION3 = 9,                   /* SECTION3  */
  YYSYMBOL_NEWLINE = 10,                   /* NEWLINE  */
  YYSYMBOL_IF = 11,                        /* IF  */
  YYSYMBOL_THEN = 12,                      /* THEN  */
  YYSYMBOL_ELSE = 13,                      /* ELSE  */
  YYSYMBOL_END = 14,                       /* END  */
  YYSYMBOL_WHILE = 15,                     /* WHILE  */
  YYSYMBOL_CALL = 16,                      /* CALL  */
  YYSYMBOL_WITH = 17,                      /* WITH  */
  YYSYMBOL_OR = 18,                        /* OR  */
  YYSYMBOL_AND = 19,                       /* AND  */
  YYSYMBOL_NOT = 20,                       /* NOT  */
  YYSYMBOL_NEG = 21,                       /* NEG  */
  YYSYMBOL_PLAY = 22,                      /* PLAY  */
  YYSYMBOL_23_ = 23,                       /* '='  */
  YYSYMBOL_24_ = 24,                       /* '['  */
  YYSYMBOL_25_ = 25,                       /* ']'  */
  YYSYMBOL_26_ = 26,                       /* '{'  */
  YYSYMBOL_27_ = 27,                       /* '}'  */
  YYSYMBOL_28_ = 28,                       /* '('  */
  YYSYMBOL_29_ = 29,                       /* ')'  */
  YYSYMBOL_30_ = 30,                       /* '+'  */
  YYSYMBOL_31_ = 31,                       /* '-'  */
  YYSYMBOL_32_ = 32,                       /* '*'  */
  YYSYMBOL_YYACCEPT = 33,                  /* $accept  */
  YYSYMBOL_START = 34,                     /* START  */
  YYSYMBOL_PRIMITIVE = 35,                 /* PRIMITIVE  */
  YYSYMBOL_ENGINE = 36,                    /* ENGINE  */
  YYSYMBOL_FUNCTIONS = 37,                 /* FUNCTIONS  */
  YYSYMBOL_FUNCTION = 38,                  /* FUNCTION  */
  YYSYMBOL_BODY = 39,                      /* BODY  */
  YYSYMBOL_STATEMENT = 40,                 /* STATEMENT  */
  YYSYMBOL_IFSTATEMENT = 41,               /* IFSTATEMENT  */
  YYSYMBOL_WHILELOOP = 42,                 /* WHILELOOP  */
  YYSYMBOL_EXPR = 43,                      /* EXPR  */
  YYSYMBOL_ARITHLOGIC = 44,                /* ARITHLOGIC  */
  YYSYMBOL_TERM = 45,                      /* TERM  */
  YYSYMBOL_ARITH1 = 46,                    /* ARITH1  */
  YYSYMBOL_FACTOR = 47,                    /* FACTOR  */
  YYSYMBOL_TERM1 = 48,                     /* TERM1  */
  YYSYMBOL_PARAM = 49,                     /* PARAM  */
  YYSYMBOL_PARAMLIST = 50                  /* PARAMLIST  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
typedef yytype_int8 yy_state_t;

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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYLAST   96

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  33
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  18
/* YYNRULES -- Number of rules.  */
#define YYNRULES  40
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  100

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   277


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      28,    29,    32,    30,     2,    31,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    23,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    24,     2,    25,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    26,     2,    27,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    38,    38,    41,    56,    59,    60,    68,    71,    75,
      78,    84,    87,    92,    95,    98,   103,   105,   109,   114,
     117,   120,   130,   135,   139,   142,   145,   148,   151,   153,
     155,   157,   159,   162,   165,   170,   173,   176,   179,   184,
     186
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ID", "NUM", "STRING",
  "TUPLE", "SECTION1", "SECTION2", "SECTION3", "NEWLINE", "IF", "THEN",
  "ELSE", "END", "WHILE", "CALL", "WITH", "OR", "AND", "NOT", "NEG",
  "PLAY", "'='", "'['", "']'", "'{'", "'}'", "'('", "')'", "'+'", "'-'",
  "'*'", "$accept", "START", "PRIMITIVE", "ENGINE", "FUNCTIONS",
  "FUNCTION", "BODY", "STATEMENT", "IFSTATEMENT", "WHILELOOP", "EXPR",
  "ARITHLOGIC", "TERM", "ARITH1", "FACTOR", "TERM1", "PARAM", "PARAMLIST", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-71)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      26,    29,    46,    56,   -71,    39,    52,     6,    53,   -71,
     -71,   -71,   -71,    48,    -1,    55,   -71,    11,     3,    40,
      64,     6,     6,    41,    56,    10,    10,    10,   -71,    10,
      10,   -71,    65,    60,    61,     0,    43,    44,   -71,   -71,
      11,    11,    11,     3,     3,    21,    66,    40,    71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,    54,    47,    50,
      57,    21,   -71,   -71,    58,   -71,    62,    71,     6,     6,
       6,   -71,   -71,    59,   -71,     6,    71,    63,   -71,    51,
      67,     1,   -71,   -71,   -71,    74,    21,    71,   -71,    21,
      69,    71,    37,   -71,    68,    21,   -71,   -71,    73,   -71
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     4,     1,     0,     0,     0,     0,    28,
      31,    29,    30,     0,     0,     0,    19,    27,    37,     9,
       0,     0,     0,     0,     4,     0,     0,     0,    22,     0,
       0,    23,     0,     0,     0,     0,     0,     0,    32,     3,
      27,    27,    27,    37,    37,     0,     0,     9,     0,    20,
      34,    33,    26,    24,    25,    36,    35,     0,     0,     0,
       0,    12,    13,    14,     7,     8,     0,    40,     0,     0,
       0,    10,    11,     0,     2,     0,    40,     0,    15,     0,
       0,     0,    38,    39,    21,     0,     0,     0,     5,     0,
       0,    40,     0,    18,     0,     0,    16,     6,     0,    17
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -71,   -71,    70,   -71,    32,   -71,    28,   -58,   -71,   -71,
     -14,   -71,    18,     7,    23,    14,   -47,   -70
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     6,    74,    33,    34,    60,    61,    62,    63,
      15,    16,    17,    28,    18,    31,    76,    77
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      23,    67,     9,    10,    11,    12,    83,    36,    37,     9,
      10,    11,    12,     9,    10,    11,    12,    48,    87,    21,
      22,    94,    29,    13,    57,    49,    88,    14,    90,    25,
      13,    92,    58,     1,    14,    30,    59,    98,    14,     3,
      91,    26,    27,    40,    41,    42,     4,    52,    53,    54,
      95,    96,    43,    44,    78,    79,    80,    55,    56,     5,
       8,    82,     7,    19,    20,    24,    32,    35,    45,    46,
      38,    47,    50,    51,    66,    69,    64,    68,    70,    65,
      85,    81,    73,    93,    71,    75,    89,    99,    84,    72,
       0,     0,     0,    97,    39,     0,    86
};

static const yytype_int8 yycheck[] =
{
      14,    48,     3,     4,     5,     6,    76,    21,    22,     3,
       4,     5,     6,     3,     4,     5,     6,    17,    17,    20,
      21,    91,    19,    24,     3,    25,    25,    28,    86,    18,
      24,    89,    11,     7,    28,    32,    15,    95,    28,    10,
      87,    30,    31,    25,    26,    27,     0,    40,    41,    42,
      13,    14,    29,    30,    68,    69,    70,    43,    44,     3,
       8,    75,    23,    10,    16,    10,    26,     3,     3,     9,
      29,    10,    29,    29,     3,    28,    10,    23,    28,    47,
      29,    22,    24,    14,    27,    23,    12,    14,    25,    61,
      -1,    -1,    -1,    25,    24,    -1,    29
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     7,    34,    10,     0,     3,    35,    23,     8,     3,
       4,     5,     6,    24,    28,    43,    44,    45,    47,    10,
      16,    20,    21,    43,    10,    18,    30,    31,    46,    19,
      32,    48,    26,    37,    38,     3,    43,    43,    29,    35,
      45,    45,    45,    47,    47,     3,     9,    10,    17,    25,
      29,    29,    46,    46,    46,    48,    48,     3,    11,    15,
      39,    40,    41,    42,    10,    37,     3,    49,    23,    28,
      28,    27,    39,    24,    36,    23,    49,    50,    43,    43,
      43,    22,    43,    50,    25,    29,    29,    17,    25,    12,
      40,    49,    40,    14,    50,    13,    14,    25,    40,    14
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    33,    34,    35,    35,    36,    36,    36,    37,    37,
      38,    39,    39,    40,    40,    40,    41,    41,    42,    43,
      43,    43,    44,    45,    46,    46,    46,    46,    47,    47,
      47,    47,    47,    47,    47,    48,    48,    48,    49,    50,
      50
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     9,     5,     0,     3,     6,     0,     3,     0,
       4,     2,     1,     1,     1,     3,     7,     9,     6,     1,
       4,     7,     2,     2,     3,     3,     3,     0,     1,     1,
       1,     1,     3,     4,     4,     3,     3,     0,     3,     2,
       0
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  case 2: /* START: SECTION1 NEWLINE PRIMITIVE SECTION2 NEWLINE FUNCTIONS SECTION3 NEWLINE ENGINE  */
#line 38 "a2version2.y"
                                                                                      { }
#line 1184 "a2version2.tab.c"
    break;

  case 3: /* PRIMITIVE: ID '=' EXPR NEWLINE PRIMITIVE  */
#line 41 "a2version2.y"
                                          { 
									if(strncmp((yyvsp[-4].symbol)->literalName, "level", 5) == 0){
										int points_per_line, lines_to_beat, speed_percentage_change;
										sscanf((yyvsp[-2].id), "|%d,%d,%d|", &points_per_line, &lines_to_beat, &speed_percentage_change);
										printf("levels_dict[\"%s\"]=(%d, %d, %d)\n", (yyvsp[-4].symbol)->literalName, points_per_line, lines_to_beat, speed_percentage_change);
									}
									else if(strcmp((yyvsp[-4].symbol)->literalName, "default_cursor") == 0){
										int x, y;
										sscanf((yyvsp[-2].id), "|%d,%d|", &x, &y);
										printf("default_cursor=(%d, %d)\n", x, y); 
									}
									else{
									printf("%s=%s\n", (yyvsp[-4].symbol)->literalName, (yyvsp[-2].id));
									}
}
#line 1204 "a2version2.tab.c"
    break;

  case 4: /* PRIMITIVE: %empty  */
#line 56 "a2version2.y"
                                          { }
#line 1210 "a2version2.tab.c"
    break;

  case 5: /* ENGINE: '[' PLAY ']'  */
#line 59 "a2version2.y"
                      { printf("play()\n"); }
#line 1216 "a2version2.tab.c"
    break;

  case 6: /* ENGINE: '[' PLAY WITH PARAM PARAMLIST ']'  */
#line 60 "a2version2.y"
                                                             { 
				if(strlen((yyvsp[-1].id)) != 0){
					printf("play(%s,%s)\n", (yyvsp[-2].id), (yyvsp[-1].id)); 
				}
				else{
					printf("play(%s)\n", (yyvsp[-2].id));
				}
			 }
#line 1229 "a2version2.tab.c"
    break;

  case 7: /* ENGINE: %empty  */
#line 68 "a2version2.y"
                           {}
#line 1235 "a2version2.tab.c"
    break;

  case 8: /* FUNCTIONS: FUNCTION NEWLINE FUNCTIONS  */
#line 71 "a2version2.y"
                                       { printf("%s\n%s", (yyvsp[-2].id), (yyvsp[0].id));
										(yyval.id) = malloc(STRLEN);
											sprintf((yyval.id), "%s\n%s", (yyvsp[-2].id), (yyvsp[0].id));
										}
#line 1244 "a2version2.tab.c"
    break;

  case 9: /* FUNCTIONS: %empty  */
#line 75 "a2version2.y"
                                          { (yyval.id) = malloc(STRLEN); }
#line 1250 "a2version2.tab.c"
    break;

  case 10: /* FUNCTION: '{' ID BODY '}'  */
#line 78 "a2version2.y"
                           {
							(yyval.id) = malloc(STRLEN);
							sprintf((yyval.id), "def %s(){\n%s\n}", (yyvsp[-2].symbol)->literalName, (yyvsp[-1].id));
							}
#line 1259 "a2version2.tab.c"
    break;

  case 11: /* BODY: STATEMENT BODY  */
#line 84 "a2version2.y"
                      { (yyval.id) = malloc(STRLEN);
						sprintf((yyval.id), "%s\n%s", (yyvsp[-1].id), (yyvsp[0].id));
					}
#line 1267 "a2version2.tab.c"
    break;

  case 12: /* BODY: STATEMENT  */
#line 87 "a2version2.y"
                             { (yyval.id) = malloc(STRLEN);
						sprintf((yyval.id), "%s", (yyvsp[0].id));
					}
#line 1275 "a2version2.tab.c"
    break;

  case 13: /* STATEMENT: IFSTATEMENT  */
#line 92 "a2version2.y"
                        { (yyval.id) = malloc(STRLEN);
							sprintf((yyval.id), "%s", (yyvsp[0].id));
						}
#line 1283 "a2version2.tab.c"
    break;

  case 14: /* STATEMENT: WHILELOOP  */
#line 95 "a2version2.y"
                                                    { (yyval.id) = malloc(STRLEN);
							sprintf((yyval.id), "%s", (yyvsp[0].id));
						}
#line 1291 "a2version2.tab.c"
    break;

  case 15: /* STATEMENT: ID '=' EXPR  */
#line 98 "a2version2.y"
                                                      { (yyval.id) = malloc(STRLEN);
							sprintf((yyval.id), "%s=%s", (yyvsp[-2].symbol)->literalName, (yyvsp[0].id));
						}
#line 1299 "a2version2.tab.c"
    break;

  case 16: /* IFSTATEMENT: IF '(' EXPR ')' THEN STATEMENT END  */
#line 103 "a2version2.y"
                                                 { (yyval.id) = malloc(STRLEN);
						sprintf((yyval.id), "if %s{\n%s\n}", (yyvsp[-4].id), (yyvsp[-1].id));}
#line 1306 "a2version2.tab.c"
    break;

  case 17: /* IFSTATEMENT: IF '(' EXPR ')' THEN STATEMENT ELSE STATEMENT END  */
#line 105 "a2version2.y"
                                                                                                    { (yyval.id) = malloc(STRLEN);
																			sprintf((yyval.id), "if %s{\n%s\n}\nelse{\n%s\n}", (yyvsp[-6].id), (yyvsp[-3].id), (yyvsp[-1].id));}
#line 1313 "a2version2.tab.c"
    break;

  case 18: /* WHILELOOP: WHILE '(' EXPR ')' STATEMENT END  */
#line 109 "a2version2.y"
                                             { (yyval.id) = malloc(STRLEN);
						sprintf((yyval.id), "while %s{\n%s\n}", (yyvsp[-3].id), (yyvsp[-1].id));
						}
#line 1321 "a2version2.tab.c"
    break;

  case 19: /* EXPR: ARITHLOGIC  */
#line 114 "a2version2.y"
                  { (yyval.id) = malloc(STRLEN);
					sprintf((yyval.id), "%s", (yyvsp[0].id));
				}
#line 1329 "a2version2.tab.c"
    break;

  case 20: /* EXPR: '[' CALL ID ']'  */
#line 117 "a2version2.y"
                                   { (yyval.id) = malloc(STRLEN);
							sprintf((yyval.id), "%s()", (yyvsp[-1].symbol)->literalName);
						}
#line 1337 "a2version2.tab.c"
    break;

  case 21: /* EXPR: '[' CALL ID WITH PARAM PARAMLIST ']'  */
#line 120 "a2version2.y"
                                                        { (yyval.id) = malloc(STRLEN);
							if(strlen((yyvsp[-1].id)) != 0){
								sprintf((yyval.id), "%s(%s,%s)", (yyvsp[-4].symbol)->literalName, (yyvsp[-2].id), (yyvsp[-1].id));
							}
							else{
								sprintf((yyval.id), "%s(%s)", (yyvsp[-4].symbol)->literalName, (yyvsp[-2].id));
							}
						}
#line 1350 "a2version2.tab.c"
    break;

  case 22: /* ARITHLOGIC: TERM ARITH1  */
#line 130 "a2version2.y"
                         { (yyval.id) = malloc(STRLEN);
							sprintf((yyval.id), "%s %s", (yyvsp[-1].id), (yyvsp[0].id));
						}
#line 1358 "a2version2.tab.c"
    break;

  case 23: /* TERM: FACTOR TERM1  */
#line 135 "a2version2.y"
                    { (yyval.id) = malloc(STRLEN);
						sprintf((yyval.id), "%s %s", (yyvsp[-1].id), (yyvsp[0].id));}
#line 1365 "a2version2.tab.c"
    break;

  case 24: /* ARITH1: '+' TERM ARITH1  */
#line 139 "a2version2.y"
                         { (yyval.id) = malloc(STRLEN);
							sprintf((yyval.id), "+ %s %s", (yyvsp[-1].id), (yyvsp[0].id));
						}
#line 1373 "a2version2.tab.c"
    break;

  case 25: /* ARITH1: '-' TERM ARITH1  */
#line 142 "a2version2.y"
                                           { (yyval.id) = malloc(STRLEN);
							sprintf((yyval.id), "- %s %s", (yyvsp[-1].id), (yyvsp[0].id));
						}
#line 1381 "a2version2.tab.c"
    break;

  case 26: /* ARITH1: OR TERM ARITH1  */
#line 145 "a2version2.y"
                                          { (yyval.id) = malloc(STRLEN);
							sprintf((yyval.id), "or %s %s", (yyvsp[-1].id), (yyvsp[0].id));
						}
#line 1389 "a2version2.tab.c"
    break;

  case 27: /* ARITH1: %empty  */
#line 148 "a2version2.y"
                           { (yyval.id) = malloc(STRLEN);}
#line 1395 "a2version2.tab.c"
    break;

  case 28: /* FACTOR: ID  */
#line 151 "a2version2.y"
            { (yyval.id) = malloc(STRLEN);
				sprintf((yyval.id), "%s", (yyvsp[0].symbol)->literalName);}
#line 1402 "a2version2.tab.c"
    break;

  case 29: /* FACTOR: STRING  */
#line 153 "a2version2.y"
                                 { (yyval.id) = malloc(STRLEN);
				sprintf((yyval.id), "%s", (yyvsp[0].symbol)->literalName);}
#line 1409 "a2version2.tab.c"
    break;

  case 30: /* FACTOR: TUPLE  */
#line 155 "a2version2.y"
                                { (yyval.id) = malloc(STRLEN);
				sprintf((yyval.id), "%s", (yyvsp[0].symbol)->literalName);}
#line 1416 "a2version2.tab.c"
    break;

  case 31: /* FACTOR: NUM  */
#line 157 "a2version2.y"
                               { (yyval.id) = malloc(STRLEN);
				sprintf((yyval.id), "%s", (yyvsp[0].symbol)->literalName);}
#line 1423 "a2version2.tab.c"
    break;

  case 32: /* FACTOR: '(' EXPR ')'  */
#line 159 "a2version2.y"
                                        { (yyval.id) = malloc(STRLEN);
							sprintf((yyval.id), "(%s)", (yyvsp[-1].id));
				}
#line 1431 "a2version2.tab.c"
    break;

  case 33: /* FACTOR: '(' NEG EXPR ')'  */
#line 162 "a2version2.y"
                                            { (yyval.id) = malloc(STRLEN);
							sprintf((yyval.id), "(not %s)", (yyvsp[-1].id));
				}
#line 1439 "a2version2.tab.c"
    break;

  case 34: /* FACTOR: '(' NOT EXPR ')'  */
#line 165 "a2version2.y"
                                            { (yyval.id) = malloc(STRLEN);
							sprintf((yyval.id), "(~ %s)", (yyvsp[-1].id));
				}
#line 1447 "a2version2.tab.c"
    break;

  case 35: /* TERM1: '*' FACTOR TERM1  */
#line 170 "a2version2.y"
                         { (yyval.id) = malloc(STRLEN);
							sprintf((yyval.id), "* %s %s", (yyvsp[-1].id), (yyvsp[0].id));
						}
#line 1455 "a2version2.tab.c"
    break;

  case 36: /* TERM1: AND FACTOR TERM1  */
#line 173 "a2version2.y"
                                           { (yyval.id) = malloc(STRLEN);
							sprintf((yyval.id), "and %s %s", (yyvsp[-1].id), (yyvsp[0].id));
						}
#line 1463 "a2version2.tab.c"
    break;

  case 37: /* TERM1: %empty  */
#line 176 "a2version2.y"
                          { (yyval.id) = malloc(STRLEN);}
#line 1469 "a2version2.tab.c"
    break;

  case 38: /* PARAM: ID '=' EXPR  */
#line 179 "a2version2.y"
                    { (yyval.id) = malloc(STRLEN);
						sprintf((yyval.id), "%s=%s", (yyvsp[-2].symbol)->literalName, (yyvsp[0].id));
					}
#line 1477 "a2version2.tab.c"
    break;

  case 39: /* PARAMLIST: PARAM PARAMLIST  */
#line 184 "a2version2.y"
                            { (yyval.id) = malloc(STRLEN);
							sprintf((yyval.id), "%s,%s", (yyvsp[-1].id), (yyvsp[0].id)); }
#line 1484 "a2version2.tab.c"
    break;

  case 40: /* PARAMLIST: %empty  */
#line 186 "a2version2.y"
                                          { (yyval.id) = malloc(STRLEN); }
#line 1490 "a2version2.tab.c"
    break;


#line 1494 "a2version2.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 188 "a2version2.y"


int main(int argc, char *argv[])
{
yyparse();
return 0;
}
