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
#line 3 "src/grammar.y"

#include <stdio.h>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <cstring> // Required for strdup
#include <ast.h>
#include <symtab.h>
#include <expression.h>
void yyerror(const char *s);

using namespace std;


// Existing symbol table and other declarations
extern unordered_map<string, string> symtab;
extern vector<string> program;
extern vector<pair<string, int>> error;
extern int line_num;
extern bool iserror;
extern int yylex();
extern Node * root; 




#line 102 "grammar.tab.c"

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

#include "grammar.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_3_ = 3,                         /* '('  */
  YYSYMBOL_4_ = 4,                         /* ')'  */
  YYSYMBOL_5_ = 5,                         /* '['  */
  YYSYMBOL_6_ = 6,                         /* ']'  */
  YYSYMBOL_7_ = 7,                         /* '.'  */
  YYSYMBOL_8_ = 8,                         /* ','  */
  YYSYMBOL_9_ = 9,                         /* '+'  */
  YYSYMBOL_10_ = 10,                       /* '-'  */
  YYSYMBOL_11_ = 11,                       /* '!'  */
  YYSYMBOL_12_ = 12,                       /* '&'  */
  YYSYMBOL_13_ = 13,                       /* '*'  */
  YYSYMBOL_14_ = 14,                       /* '~'  */
  YYSYMBOL_15_ = 15,                       /* '/'  */
  YYSYMBOL_16_ = 16,                       /* '%'  */
  YYSYMBOL_17_ = 17,                       /* '<'  */
  YYSYMBOL_18_ = 18,                       /* '>'  */
  YYSYMBOL_19_ = 19,                       /* '^'  */
  YYSYMBOL_20_ = 20,                       /* '|'  */
  YYSYMBOL_21_ = 21,                       /* ':'  */
  YYSYMBOL_22_ = 22,                       /* '?'  */
  YYSYMBOL_23_ = 23,                       /* '='  */
  YYSYMBOL_24_ = 24,                       /* ';'  */
  YYSYMBOL_25_ = 25,                       /* '{'  */
  YYSYMBOL_26_ = 26,                       /* '}'  */
  YYSYMBOL_SIZEOF = 27,                    /* SIZEOF  */
  YYSYMBOL_IDENTIFIER = 28,                /* IDENTIFIER  */
  YYSYMBOL_CONSTANT = 29,                  /* CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 30,            /* STRING_LITERAL  */
  YYSYMBOL_PTR_OP = 31,                    /* PTR_OP  */
  YYSYMBOL_INC_OP = 32,                    /* INC_OP  */
  YYSYMBOL_DEC_OP = 33,                    /* DEC_OP  */
  YYSYMBOL_LEFT_OP = 34,                   /* LEFT_OP  */
  YYSYMBOL_RIGHT_OP = 35,                  /* RIGHT_OP  */
  YYSYMBOL_LE_OP = 36,                     /* LE_OP  */
  YYSYMBOL_GE_OP = 37,                     /* GE_OP  */
  YYSYMBOL_EQ_OP = 38,                     /* EQ_OP  */
  YYSYMBOL_NE_OP = 39,                     /* NE_OP  */
  YYSYMBOL_AND_OP = 40,                    /* AND_OP  */
  YYSYMBOL_OR_OP = 41,                     /* OR_OP  */
  YYSYMBOL_MUL_ASSIGN = 42,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 43,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 44,                /* MOD_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 45,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 46,                /* SUB_ASSIGN  */
  YYSYMBOL_LEFT_ASSIGN = 47,               /* LEFT_ASSIGN  */
  YYSYMBOL_RIGHT_ASSIGN = 48,              /* RIGHT_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 49,                /* AND_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 50,                /* XOR_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 51,                 /* OR_ASSIGN  */
  YYSYMBOL_TYPE_NAME = 52,                 /* TYPE_NAME  */
  YYSYMBOL_TYPEDEF = 53,                   /* TYPEDEF  */
  YYSYMBOL_EXTERN = 54,                    /* EXTERN  */
  YYSYMBOL_STATIC = 55,                    /* STATIC  */
  YYSYMBOL_AUTO = 56,                      /* AUTO  */
  YYSYMBOL_REGISTER = 57,                  /* REGISTER  */
  YYSYMBOL_SIGNED = 58,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 59,                  /* UNSIGNED  */
  YYSYMBOL_CHAR = 60,                      /* CHAR  */
  YYSYMBOL_SHORT = 61,                     /* SHORT  */
  YYSYMBOL_LONG = 62,                      /* LONG  */
  YYSYMBOL_INT = 63,                       /* INT  */
  YYSYMBOL_FLOAT = 64,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 65,                    /* DOUBLE  */
  YYSYMBOL_VOID = 66,                      /* VOID  */
  YYSYMBOL_BOOL = 67,                      /* BOOL  */
  YYSYMBOL_CONST = 68,                     /* CONST  */
  YYSYMBOL_VOLATILE = 69,                  /* VOLATILE  */
  YYSYMBOL_STRUCT = 70,                    /* STRUCT  */
  YYSYMBOL_UNION = 71,                     /* UNION  */
  YYSYMBOL_ENUM = 72,                      /* ENUM  */
  YYSYMBOL_ELLIPSIS = 73,                  /* ELLIPSIS  */
  YYSYMBOL_CASE = 74,                      /* CASE  */
  YYSYMBOL_DEFAULT = 75,                   /* DEFAULT  */
  YYSYMBOL_IF = 76,                        /* IF  */
  YYSYMBOL_ELSE = 77,                      /* ELSE  */
  YYSYMBOL_SWITCH = 78,                    /* SWITCH  */
  YYSYMBOL_WHILE = 79,                     /* WHILE  */
  YYSYMBOL_DO = 80,                        /* DO  */
  YYSYMBOL_FOR = 81,                       /* FOR  */
  YYSYMBOL_GOTO = 82,                      /* GOTO  */
  YYSYMBOL_CONTINUE = 83,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 84,                     /* BREAK  */
  YYSYMBOL_RETURN = 85,                    /* RETURN  */
  YYSYMBOL_YYACCEPT = 86,                  /* $accept  */
  YYSYMBOL_primary_expression = 87,        /* primary_expression  */
  YYSYMBOL_postfix_expression = 88,        /* postfix_expression  */
  YYSYMBOL_argument_expression_list = 89,  /* argument_expression_list  */
  YYSYMBOL_unary_expression = 90,          /* unary_expression  */
  YYSYMBOL_unary_operator = 91,            /* unary_operator  */
  YYSYMBOL_cast_expression = 92,           /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 93, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 94,       /* additive_expression  */
  YYSYMBOL_shift_expression = 95,          /* shift_expression  */
  YYSYMBOL_relational_expression = 96,     /* relational_expression  */
  YYSYMBOL_equality_expression = 97,       /* equality_expression  */
  YYSYMBOL_and_expression = 98,            /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 99,   /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 100,  /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 101,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 102,    /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 103,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 104,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 105,      /* assignment_operator  */
  YYSYMBOL_expression = 106,               /* expression  */
  YYSYMBOL_constant_expression = 107,      /* constant_expression  */
  YYSYMBOL_declaration = 108,              /* declaration  */
  YYSYMBOL_declaration_specifiers = 109,   /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list = 110,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 111,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 112,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 113,           /* type_specifier  */
  YYSYMBOL_struct_or_union_specifier = 114, /* struct_or_union_specifier  */
  YYSYMBOL_struct_or_union = 115,          /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 116,  /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 117,       /* struct_declaration  */
  YYSYMBOL_specifier_qualifier_list = 118, /* specifier_qualifier_list  */
  YYSYMBOL_struct_declarator_list = 119,   /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 120,        /* struct_declarator  */
  YYSYMBOL_enum_specifier = 121,           /* enum_specifier  */
  YYSYMBOL_enumerator_list = 122,          /* enumerator_list  */
  YYSYMBOL_enumerator = 123,               /* enumerator  */
  YYSYMBOL_type_qualifier = 124,           /* type_qualifier  */
  YYSYMBOL_declarator = 125,               /* declarator  */
  YYSYMBOL_direct_declarator = 126,        /* direct_declarator  */
  YYSYMBOL_pointer = 127,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 128,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 129,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 130,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 131,    /* parameter_declaration  */
  YYSYMBOL_type_name = 132,                /* type_name  */
  YYSYMBOL_abstract_declarator = 133,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 134, /* direct_abstract_declarator  */
  YYSYMBOL_initializer = 135,              /* initializer  */
  YYSYMBOL_initializer_list = 136,         /* initializer_list  */
  YYSYMBOL_statement = 137,                /* statement  */
  YYSYMBOL_labeled_statement = 138,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 139,       /* compound_statement  */
  YYSYMBOL_declaration_list = 140,         /* declaration_list  */
  YYSYMBOL_statement_list = 141,           /* statement_list  */
  YYSYMBOL_expression_statement = 142,     /* expression_statement  */
  YYSYMBOL_selection_statement = 143,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 144,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 145,           /* jump_statement  */
  YYSYMBOL_translation_unit = 146,         /* translation_unit  */
  YYSYMBOL_external_declaration = 147,     /* external_declaration  */
  YYSYMBOL_function_declaration = 148,     /* function_declaration  */
  YYSYMBOL_function_definition = 149       /* function_definition  */
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
typedef yytype_int16 yy_state_t;

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
#define YYFINAL  45
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1005

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  86
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  201
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  332

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   316


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
       2,     2,     2,    11,     2,     2,     2,    16,    12,     2,
       3,     4,    13,     9,     8,    10,     7,    15,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    21,    24,
      17,    23,    18,    22,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     5,     2,     6,    19,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    25,    20,    26,    14,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   171,   171,   172,   173,   174,   178,   179,   181,   182,
     184,   185,   186,   187,   191,   192,   196,   197,   198,   199,
     200,   201,   205,   206,   207,   208,   209,   210,   214,   215,
     219,   220,   221,   222,   226,   227,   228,   232,   233,   234,
     238,   239,   240,   241,   242,   246,   247,   248,   252,   253,
     257,   258,   262,   263,   267,   268,   272,   273,   277,   278,
     282,   283,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   301,   302,   307,   311,   312,   317,   318,
     319,   320,   321,   322,   326,   327,   331,   332,   336,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   358,   359,   360,   364,   365,   369,   370,   374,   378,
     379,   380,   381,   385,   386,   390,   396,   397,   398,   402,
     403,   407,   408,   412,   413,   417,   418,   422,   423,   425,
     426,   427,   428,   432,   433,   434,   435,   439,   440,   444,
     445,   449,   450,   454,   455,   456,   465,   466,   470,   471,
     472,   476,   477,   479,   480,   481,   482,   483,   484,   485,
     489,   490,   491,   495,   496,   500,   501,   502,   503,   504,
     505,   509,   510,   511,   515,   516,   517,   518,   522,   523,
     527,   528,   532,   533,   537,   538,   539,   543,   544,   545,
     546,   550,   551,   552,   553,   554,   558,   559,   563,   564,
     568,   572
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
  "\"end of file\"", "error", "\"invalid token\"", "'('", "')'", "'['",
  "']'", "'.'", "','", "'+'", "'-'", "'!'", "'&'", "'*'", "'~'", "'/'",
  "'%'", "'<'", "'>'", "'^'", "'|'", "':'", "'?'", "'='", "';'", "'{'",
  "'}'", "SIZEOF", "IDENTIFIER", "CONSTANT", "STRING_LITERAL", "PTR_OP",
  "INC_OP", "DEC_OP", "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP",
  "NE_OP", "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN",
  "XOR_ASSIGN", "OR_ASSIGN", "TYPE_NAME", "TYPEDEF", "EXTERN", "STATIC",
  "AUTO", "REGISTER", "SIGNED", "UNSIGNED", "CHAR", "SHORT", "LONG", "INT",
  "FLOAT", "DOUBLE", "VOID", "BOOL", "CONST", "VOLATILE", "STRUCT",
  "UNION", "ENUM", "ELLIPSIS", "CASE", "DEFAULT", "IF", "ELSE", "SWITCH",
  "WHILE", "DO", "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN", "$accept",
  "primary_expression", "postfix_expression", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "type_name", "abstract_declarator",
  "direct_abstract_declarator", "initializer", "initializer_list",
  "statement", "labeled_statement", "compound_statement",
  "declaration_list", "statement_list", "expression_statement",
  "selection_statement", "iteration_statement", "jump_statement",
  "translation_unit", "external_declaration", "function_declaration",
  "function_definition", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-160)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-201)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     918,  -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,
    -160,  -160,  -160,  -160,  -160,  -160,    -6,  -160,    62,   918,
     918,  -160,   201,  -160,   918,   127,  -160,    49,  -160,    36,
      58,    38,    -1,  -160,  -160,    73,  -160,   191,   225,    10,
    -160,  -160,   933,   112,  -160,  -160,  -160,   235,  -160,   124,
      70,  -160,    36,   138,  -160,  -160,    -1,    38,  -160,   750,
     595,    26,   225,   933,   214,  -160,    38,   933,   933,   546,
    -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,   874,    90,
    -160,  -160,   886,   886,   914,   133,   218,   221,   224,   512,
     251,   229,   245,   257,   778,  -160,    39,   520,   914,  -160,
     168,   122,    89,    43,   194,   259,   270,   272,   262,    -4,
    -160,  -160,   114,  -160,    62,  -160,  -160,  -160,   318,   401,
    -160,  -160,  -160,  -160,   914,    36,  -160,   108,  -160,  -160,
    -160,  -160,   285,   750,   309,  -160,  -160,  -160,   107,   322,
     314,  -160,  -160,   327,  -160,  -160,  -160,   117,  -160,  -160,
    -160,   297,    20,   143,   330,   546,  -160,   460,   512,   914,
    -160,  -160,  -160,  -160,   315,   512,   914,   914,   914,   256,
     806,   313,  -160,  -160,  -160,   121,   914,   310,   311,  -160,
    -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,
    -160,  -160,   914,  -160,   914,   914,   914,   914,   914,   914,
     914,   914,   914,   914,   914,   914,   914,   914,   914,   914,
     914,   914,   914,   914,  -160,  -160,  -160,   429,  -160,  -160,
    -160,  -160,  -160,  -160,   113,   616,    30,  -160,    22,  -160,
     247,  -160,   896,  -160,    38,  -160,  -160,  -160,   637,   248,
    -160,   914,   336,  -160,   145,  -160,  -160,   512,  -160,   147,
     174,   196,   338,   806,  -160,  -160,   250,  -160,  -160,  -160,
    -160,  -160,  -160,   168,   168,   122,   122,    89,    89,    89,
      89,    43,    43,   194,   259,   270,   272,     8,   262,  -160,
    -160,   722,  -160,  -160,   348,   349,  -160,   358,   247,   658,
     834,  -160,  -160,  -160,  -160,  -160,  -160,   914,  -160,   512,
     512,   512,   914,   846,  -160,   914,  -160,  -160,  -160,  -160,
    -160,  -160,   350,  -160,   366,  -160,   296,  -160,  -160,   199,
     512,   205,  -160,  -160,  -160,   512,   351,  -160,   512,  -160,
    -160,  -160
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   100,    88,    96,    97,    90,    91,    93,    92,    94,
      95,    89,   123,   124,   104,   105,     0,   199,     0,    78,
      80,    98,     0,    99,    82,     0,   196,     0,   198,     0,
     118,     0,   133,    76,   127,     0,    84,    86,   126,     0,
      79,    81,     0,   103,    83,     1,   197,     0,   201,   121,
       0,   119,     0,     0,   137,   135,   134,     0,    77,     0,
       0,     0,   125,   110,     0,   106,     0,   112,     0,     0,
      24,    25,    27,    22,    23,    26,   182,   174,     0,     2,
       3,     4,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     6,    16,    28,     0,    30,
      34,    37,    40,    45,    48,    50,    52,    54,    56,    58,
      60,    73,     0,   178,     0,   180,   165,   166,     0,     0,
     167,   168,   169,   170,     0,     0,   116,     0,   128,   138,
     136,    85,    86,     0,     2,   160,    87,   132,   145,     0,
     139,   141,   130,     0,   109,   102,   107,     0,   113,   115,
     111,     0,     0,   146,     0,     0,    20,     0,     0,     0,
      17,    18,    28,    75,     0,     0,     0,     0,     0,     0,
       0,     0,   192,   193,   194,     0,     0,     0,     0,    12,
      13,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,     0,    19,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   183,   176,   179,     0,   175,   181,
     122,   120,   117,   163,     0,     0,     0,   143,   148,   144,
     149,   131,     0,   129,     0,   108,   101,     5,     0,   148,
     147,     0,     0,     8,     0,    14,   171,     0,   173,     0,
       0,     0,     0,     0,   191,   195,     0,    10,    11,    61,
      31,    32,    33,    35,    36,    38,    39,    41,    42,    43,
      44,    46,    47,    49,    51,    53,    55,     0,    57,    74,
     177,     0,   161,   156,     0,     0,   152,     0,   150,     0,
       0,   140,   142,   114,    29,    21,     9,     0,   172,     0,
       0,     0,     0,     0,     7,     0,   162,   164,   157,   151,
     153,   158,     0,   154,     0,    15,   184,   186,   187,     0,
       0,     0,    59,   159,   155,     0,     0,   189,     0,   185,
     188,   190
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -160,  -160,  -160,  -160,   -35,  -160,   -91,    45,    91,    16,
     119,   167,   177,   182,   185,   193,  -160,   -82,   -56,  -160,
     -68,  -114,   -33,    15,  -160,   352,  -160,   -11,  -160,  -160,
     339,   -44,   -46,  -160,   172,  -160,   356,   291,    50,   -12,
     -34,   -23,  -160,   -52,  -160,   186,   264,   -65,  -144,  -129,
    -160,   -89,  -160,   390,  -160,   302,  -159,  -160,  -160,  -160,
    -160,   396,  -160,  -160
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    95,    96,   244,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   192,
     112,   164,    17,   138,    35,    36,    19,    20,    21,    22,
      64,    65,    66,   147,   148,    23,    50,    51,    24,    53,
      38,    39,    56,   284,   140,   141,   154,   285,   230,   136,
     224,   115,   116,   117,   118,   119,   120,   121,   122,   123,
      25,    26,    27,    28
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     169,   152,   163,   135,   223,    62,    37,   193,   139,    55,
     220,   253,    32,    31,   113,    18,   213,   144,   211,    29,
     146,   150,    30,   153,   237,   225,   175,   226,   213,   305,
     219,    63,   142,   130,    40,    41,   286,   212,    34,    44,
      18,    31,   163,   156,   176,   132,   177,   160,   161,   162,
      34,    32,    63,    63,   149,   143,    63,    63,    63,   287,
     201,   202,   114,   162,    49,    31,    34,    12,    13,   246,
     178,   179,   180,   229,    47,    32,   248,   135,   125,   203,
     204,    57,    54,    52,   288,   216,    33,   152,   240,   162,
      34,   152,    67,   157,   303,   288,   126,    58,   249,   250,
     251,   245,   132,   260,   261,   262,   129,   146,   256,   153,
     225,   158,   226,    67,    67,   228,   125,    67,    67,    67,
      32,   281,   213,   199,   200,   234,   227,    45,   219,   213,
     239,   197,   198,   114,   222,    34,   259,    68,   214,   282,
      63,   235,   128,   277,    63,   255,   238,   124,   226,   296,
     294,   299,   307,   297,   165,   213,    32,   279,   298,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   314,   162,   300,     1,
       2,   194,   213,   195,   196,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    62,    12,    13,    14,    15,    16,
     301,    67,   228,   326,   213,    67,   162,   213,   163,   328,
     316,   317,   318,   213,    59,   239,  -200,   267,   268,   269,
     270,   166,   149,   322,   167,   135,    42,   168,    60,    43,
      61,   327,   205,   206,   319,   321,   329,   312,    69,   331,
     145,   315,   263,   264,    70,    71,    72,    73,    74,    75,
     289,   238,   290,   226,   170,   162,   304,   171,   213,    76,
      47,    77,    78,    79,    80,    81,     1,    82,    83,   172,
     162,   207,     3,     4,     5,     6,     7,     8,     9,    10,
      11,   173,    12,    13,    14,    15,    16,     1,     2,   208,
     265,   266,   209,     3,     4,     5,     6,     7,     8,     9,
      10,    11,   210,    12,    13,    14,    15,    16,    59,    84,
      85,    86,   157,    87,    88,    89,    90,    91,    92,    93,
      94,    69,   232,   236,   271,   272,   231,    70,    71,    72,
      73,    74,    75,   233,   241,   252,   247,   254,   257,   258,
     295,   302,    76,    47,   215,    78,    79,    80,    81,     1,
      82,    83,   308,   309,   323,     3,     4,     5,     6,     7,
       8,     9,    10,    11,   310,    12,    13,    14,    15,    16,
       1,     2,   324,   325,   273,   330,     3,     4,     5,     6,
       7,     8,     9,    10,    11,   274,    12,    13,    14,    15,
      16,   275,    84,    85,    86,   276,    87,    88,    89,    90,
      91,    92,    93,    94,    69,   278,   293,   151,   127,   131,
      70,    71,    72,    73,    74,    75,   221,    48,   292,   242,
     217,    46,     0,     0,     0,    76,    47,   218,    78,    79,
      80,    81,    69,    82,    83,     0,     0,     0,    70,    71,
      72,    73,    74,    75,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    76,    47,   280,    78,    79,    80,    81,
       0,    82,    83,    69,   243,     0,     0,     0,     0,    70,
      71,    72,    73,    74,    75,    84,    85,    86,     0,    87,
      88,    89,    90,    91,    92,    93,    94,    78,   134,    80,
      81,     0,    82,    83,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    84,    85,    86,     0,    87,    88,    89,
      90,    91,    92,    93,    94,    69,     0,     0,     0,     0,
       0,    70,    71,    72,    73,    74,    75,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    76,    47,     0,    78,
      79,    80,    81,   181,    82,    83,     0,     0,     0,    69,
       0,     0,     0,     0,     0,    70,    71,    72,    73,    74,
      75,     0,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,     0,    78,   134,    80,    81,     0,    82,    83,
       0,     0,     0,     0,     0,     0,    84,    85,    86,     0,
      87,    88,    89,    90,    91,    92,    93,    94,     1,   137,
       0,     0,     0,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,     0,    12,    13,    14,    15,    16,   225,
     283,   226,     0,     0,     0,     0,     0,     0,     0,    32,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     238,   283,   226,     0,    34,     0,     0,     1,     2,     0,
      32,     0,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,   311,    12,    13,    14,    15,    16,     1,     2,
       0,     0,     0,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,     0,    12,    13,    14,    15,    16,     1,
       2,     0,     0,     0,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    11,     0,    12,    13,    14,    15,    16,
       1,     2,     0,     0,     0,     0,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    69,    12,    13,    14,    15,
      16,    70,    71,    72,    73,    74,    75,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   133,   306,    78,
     134,    80,    81,    69,    82,    83,     0,     0,     0,    70,
      71,    72,    73,    74,    75,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   133,     0,    78,   134,    80,
      81,    69,    82,    83,     0,     0,     0,    70,    71,    72,
      73,    74,    75,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   174,     0,     0,    78,   134,    80,    81,    69,
      82,    83,     0,     0,     0,    70,    71,    72,    73,    74,
      75,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      76,     0,     0,    78,   134,    80,    81,    69,    82,    83,
     313,     0,     0,    70,    71,    72,    73,    74,    75,    69,
     320,     0,     0,     0,     0,    70,    71,    72,    73,    74,
      75,    78,   134,    80,    81,     0,    82,    83,     0,     0,
       0,     0,     0,    78,   134,    80,    81,   155,    82,    83,
       0,     0,     0,    70,    71,    72,    73,    74,    75,   159,
       0,     0,     0,     0,     0,    70,    71,    72,    73,    74,
      75,    78,   134,    80,    81,     0,    82,    83,     0,     0,
       0,     0,     0,    78,   134,    80,    81,    69,    82,    83,
       0,     0,     0,    70,    71,    72,    73,    74,    75,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    78,   134,    80,    81,     0,    82,    83,     1,     2,
       0,     0,     0,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,     0,    12,    13,    14,    15,    16,   291,
       1,     2,     0,     0,     0,     0,     3,     4,     5,     6,
       7,     8,     9,    10,    11,     1,    12,    13,    14,    15,
      16,     3,     4,     5,     6,     7,     8,     9,    10,    11,
       0,    12,    13,    14,    15,    16
};

static const yytype_int16 yycheck[] =
{
      89,    69,    84,    59,   133,    39,    18,    98,    60,    32,
     124,   170,    13,     3,    47,     0,     8,    63,    22,    25,
      64,    67,    28,    69,     4,     3,    94,     5,     8,    21,
     119,    42,     6,    56,    19,    20,     6,    41,    28,    24,
      25,     3,   124,    78,     5,    57,     7,    82,    83,    84,
      28,    13,    63,    64,    66,    29,    67,    68,    69,    29,
      17,    18,    47,    98,    28,     3,    28,    68,    69,   158,
      31,    32,    33,   138,    25,    13,   165,   133,     8,    36,
      37,     8,    32,    25,   228,   118,    24,   155,   153,   124,
      28,   159,    42,     3,   253,   239,    26,    24,   166,   167,
     168,   157,   114,   194,   195,   196,    56,   151,   176,   155,
       3,    21,     5,    63,    64,   138,     8,    67,    68,    69,
      13,     8,     8,    34,    35,     8,   138,     0,   217,     8,
     153,     9,    10,   118,    26,    28,   192,    25,    24,    26,
     151,    24,     4,   211,   155,    24,     3,    23,     5,     4,
     241,     4,   281,     8,    21,     8,    13,   213,   247,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   290,   212,     4,    52,
      53,    13,     8,    15,    16,    58,    59,    60,    61,    62,
      63,    64,    65,    66,   228,    68,    69,    70,    71,    72,
       4,   151,   225,     4,     8,   155,   241,     8,   290,     4,
     299,   300,   301,     8,    23,   238,    25,   201,   202,   203,
     204,     3,   234,   305,     3,   281,    25,     3,     3,    28,
       5,   320,    38,    39,   302,   303,   325,   289,     3,   328,
      26,   297,   197,   198,     9,    10,    11,    12,    13,    14,
       3,     3,     5,     5,     3,   290,     6,    28,     8,    24,
      25,    26,    27,    28,    29,    30,    52,    32,    33,    24,
     305,    12,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    24,    68,    69,    70,    71,    72,    52,    53,    19,
     199,   200,    20,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    40,    68,    69,    70,    71,    72,    23,    74,
      75,    76,     3,    78,    79,    80,    81,    82,    83,    84,
      85,     3,     8,    26,   205,   206,     4,     9,    10,    11,
      12,    13,    14,     6,     4,    79,    21,    24,    28,    28,
       4,     3,    24,    25,    26,    27,    28,    29,    30,    52,
      32,    33,     4,     4,     4,    58,    59,    60,    61,    62,
      63,    64,    65,    66,     6,    68,    69,    70,    71,    72,
      52,    53,     6,    77,   207,    24,    58,    59,    60,    61,
      62,    63,    64,    65,    66,   208,    68,    69,    70,    71,
      72,   209,    74,    75,    76,   210,    78,    79,    80,    81,
      82,    83,    84,    85,     3,   212,   234,    68,    52,    57,
       9,    10,    11,    12,    13,    14,   125,    27,   232,   155,
     118,    25,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,     3,    32,    33,    -1,    -1,    -1,     9,    10,
      11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      -1,    32,    33,     3,     4,    -1,    -1,    -1,    -1,     9,
      10,    11,    12,    13,    14,    74,    75,    76,    -1,    78,
      79,    80,    81,    82,    83,    84,    85,    27,    28,    29,
      30,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    74,    75,    76,    -1,    78,    79,    80,
      81,    82,    83,    84,    85,     3,    -1,    -1,    -1,    -1,
      -1,     9,    10,    11,    12,    13,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    -1,    27,
      28,    29,    30,    23,    32,    33,    -1,    -1,    -1,     3,
      -1,    -1,    -1,    -1,    -1,     9,    10,    11,    12,    13,
      14,    -1,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    -1,    27,    28,    29,    30,    -1,    32,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    74,    75,    76,    -1,
      78,    79,    80,    81,    82,    83,    84,    85,    52,     4,
      -1,    -1,    -1,    -1,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    -1,    68,    69,    70,    71,    72,     3,
       4,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,    -1,    28,    -1,    -1,    52,    53,    -1,
      13,    -1,    -1,    58,    59,    60,    61,    62,    63,    64,
      65,    66,     4,    68,    69,    70,    71,    72,    52,    53,
      -1,    -1,    -1,    -1,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    -1,    68,    69,    70,    71,    72,    52,
      53,    -1,    -1,    -1,    -1,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    68,    69,    70,    71,    72,
      52,    53,    -1,    -1,    -1,    -1,    58,    59,    60,    61,
      62,    63,    64,    65,    66,     3,    68,    69,    70,    71,
      72,     9,    10,    11,    12,    13,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,    29,    30,     3,    32,    33,    -1,    -1,    -1,     9,
      10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,    29,
      30,     3,    32,    33,    -1,    -1,    -1,     9,    10,    11,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    -1,    -1,    27,    28,    29,    30,     3,
      32,    33,    -1,    -1,    -1,     9,    10,    11,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    -1,    -1,    27,    28,    29,    30,     3,    32,    33,
       6,    -1,    -1,     9,    10,    11,    12,    13,    14,     3,
       4,    -1,    -1,    -1,    -1,     9,    10,    11,    12,    13,
      14,    27,    28,    29,    30,    -1,    32,    33,    -1,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,     3,    32,    33,
      -1,    -1,    -1,     9,    10,    11,    12,    13,    14,     3,
      -1,    -1,    -1,    -1,    -1,     9,    10,    11,    12,    13,
      14,    27,    28,    29,    30,    -1,    32,    33,    -1,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,     3,    32,    33,
      -1,    -1,    -1,     9,    10,    11,    12,    13,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    -1,    32,    33,    52,    53,
      -1,    -1,    -1,    -1,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    -1,    68,    69,    70,    71,    72,    73,
      52,    53,    -1,    -1,    -1,    -1,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    52,    68,    69,    70,    71,
      72,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    68,    69,    70,    71,    72
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    52,    53,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    68,    69,    70,    71,    72,   108,   109,   112,
     113,   114,   115,   121,   124,   146,   147,   148,   149,    25,
      28,     3,    13,    24,    28,   110,   111,   125,   126,   127,
     109,   109,    25,    28,   109,     0,   147,    25,   139,    28,
     122,   123,    25,   125,   124,   127,   128,     8,    24,    23,
       3,     5,   126,   113,   116,   117,   118,   124,    25,     3,
       9,    10,    11,    12,    13,    14,    24,    26,    27,    28,
      29,    30,    32,    33,    74,    75,    76,    78,    79,    80,
      81,    82,    83,    84,    85,    87,    88,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   106,   108,   109,   137,   138,   139,   140,   141,
     142,   143,   144,   145,    23,     8,    26,   122,     4,   124,
     127,   111,   125,    25,    28,   104,   135,     4,   109,   129,
     130,   131,     6,    29,   118,    26,   117,   119,   120,   125,
     118,   116,   106,   118,   132,     3,    90,     3,    21,     3,
      90,    90,    90,   103,   107,    21,     3,     3,     3,   137,
       3,    28,    24,    24,    24,   106,     5,     7,    31,    32,
      33,    23,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,   105,    92,    13,    15,    16,     9,    10,    34,
      35,    17,    18,    36,    37,    38,    39,    12,    19,    20,
      40,    22,    41,     8,    24,    26,   108,   141,    26,   137,
     107,   123,    26,   135,   136,     3,     5,   125,   127,   133,
     134,     4,     8,     6,     8,    24,    26,     4,     3,   127,
     133,     4,   132,     4,    89,   104,   137,    21,   137,   106,
     106,   106,    79,   142,    24,    24,   106,    28,    28,   104,
      92,    92,    92,    93,    93,    94,    94,    95,    95,    95,
      95,    96,    96,    97,    98,    99,   100,   106,   101,   104,
      26,     8,    26,     4,   129,   133,     6,    29,   134,     3,
       5,    73,   131,   120,    92,     4,     4,     8,   137,     4,
       4,     4,     3,   142,     6,    21,    26,   135,     4,     4,
       6,     4,   129,     6,   107,   104,   137,   137,   137,   106,
       4,   106,   103,     4,     6,    77,     4,   137,     4,   137,
      24,   137
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    86,    87,    87,    87,    87,    88,    88,    88,    88,
      88,    88,    88,    88,    89,    89,    90,    90,    90,    90,
      90,    90,    91,    91,    91,    91,    91,    91,    92,    92,
      93,    93,    93,    93,    94,    94,    94,    95,    95,    95,
      96,    96,    96,    96,    96,    97,    97,    97,    98,    98,
      99,    99,   100,   100,   101,   101,   102,   102,   103,   103,
     104,   104,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   106,   106,   107,   108,   108,   109,   109,
     109,   109,   109,   109,   110,   110,   111,   111,   112,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   114,   114,   114,   115,   115,   116,   116,   117,   118,
     118,   118,   118,   119,   119,   120,   121,   121,   121,   122,
     122,   123,   123,   124,   124,   125,   125,   126,   126,   126,
     126,   126,   126,   127,   127,   127,   127,   128,   128,   129,
     129,   130,   130,   131,   131,   131,   132,   132,   133,   133,
     133,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     135,   135,   135,   136,   136,   137,   137,   137,   137,   137,
     137,   138,   138,   138,   139,   139,   139,   139,   140,   140,
     141,   141,   142,   142,   143,   143,   143,   144,   144,   144,
     144,   145,   145,   145,   145,   145,   146,   146,   147,   147,
     148,   149
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     4,     3,     4,
       3,     3,     2,     2,     1,     3,     1,     2,     2,     2,
       2,     4,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     5,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     2,     3,     1,     2,
       1,     2,     1,     2,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     5,     4,     2,     1,     1,     1,     2,     3,     2,
       1,     2,     1,     1,     3,     1,     4,     5,     2,     1,
       3,     1,     3,     1,     1,     2,     1,     1,     3,     4,
       3,     4,     3,     1,     2,     2,     3,     1,     2,     1,
       3,     1,     3,     2,     2,     1,     1,     2,     1,     1,
       2,     3,     2,     3,     3,     4,     2,     3,     3,     4,
       1,     3,     4,     1,     3,     1,     1,     1,     1,     1,
       1,     3,     4,     3,     2,     3,     3,     4,     1,     2,
       1,     2,     1,     2,     5,     7,     5,     5,     7,     6,
       7,     3,     2,     2,     2,     3,     1,     2,     1,     1,
       2,     2
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
  case 2: /* primary_expression: IDENTIFIER  */
#line 171 "src/grammar.y"
                                { (yyval.expression) = create_primary_identifier((yyvsp[0].identifier)); }
#line 1633 "grammar.tab.c"
    break;

  case 3: /* primary_expression: CONSTANT  */
#line 172 "src/grammar.y"
                                { (yyval.expression) = create_primary_constant((yyvsp[0].constant)); }
#line 1639 "grammar.tab.c"
    break;

  case 4: /* primary_expression: STRING_LITERAL  */
#line 173 "src/grammar.y"
                                { (yyval.expression) = create_primary_stringliteral((yyvsp[0].string_literal)); }
#line 1645 "grammar.tab.c"
    break;

  case 5: /* primary_expression: '(' expression ')'  */
#line 174 "src/grammar.y"
                                { (yyval.expression) = create_primary_expression((yyvsp[-1].expression)); }
#line 1651 "grammar.tab.c"
    break;

  case 6: /* postfix_expression: primary_expression  */
#line 178 "src/grammar.y"
                                { (yyval.expression) = (yyvsp[0].expression); }
#line 1657 "grammar.tab.c"
    break;

  case 7: /* postfix_expression: postfix_expression '[' expression ']'  */
#line 179 "src/grammar.y"
                                                { (yyval.expression) = create_postfix_expr_arr( (yyvsp[-3].expression), (yyvsp[-1].expression) ); }
#line 1663 "grammar.tab.c"
    break;

  case 8: /* postfix_expression: IDENTIFIER '(' ')'  */
#line 181 "src/grammar.y"
                                { (yyval.expression) = create_postfix_expr_voidfun( (yyvsp[-2].identifier) ); }
#line 1669 "grammar.tab.c"
    break;

  case 9: /* postfix_expression: IDENTIFIER '(' argument_expression_list ')'  */
#line 182 "src/grammar.y"
                                                        { (yyval.expression) = create_postfix_expr_fun((yyvsp[-3].identifier), (yyvsp[-1].expression)); }
#line 1675 "grammar.tab.c"
    break;

  case 10: /* postfix_expression: postfix_expression '.' IDENTIFIER  */
#line 184 "src/grammar.y"
                                                { (yyval.expression) = create_postfix_expr_struct(".", (yyvsp[-2].expression), (yyvsp[0].identifier)); }
#line 1681 "grammar.tab.c"
    break;

  case 11: /* postfix_expression: postfix_expression PTR_OP IDENTIFIER  */
#line 185 "src/grammar.y"
                                                { (yyval.expression) = create_postfix_expr_struct("->", (yyvsp[-2].expression), (yyvsp[0].identifier)); }
#line 1687 "grammar.tab.c"
    break;

  case 12: /* postfix_expression: postfix_expression INC_OP  */
#line 186 "src/grammar.y"
                                        { (yyval.expression) = create_postfix_expr_ido("++", (yyvsp[-1].expression)); }
#line 1693 "grammar.tab.c"
    break;

  case 13: /* postfix_expression: postfix_expression DEC_OP  */
#line 187 "src/grammar.y"
                                        { (yyval.expression) = create_postfix_expr_ido("--", (yyvsp[-1].expression)); }
#line 1699 "grammar.tab.c"
    break;

  case 14: /* argument_expression_list: assignment_expression  */
#line 191 "src/grammar.y"
                                                                { (yyval.expression) = create_argument_expr_assignement((yyvsp[0].expression)); }
#line 1705 "grammar.tab.c"
    break;

  case 15: /* argument_expression_list: argument_expression_list ',' assignment_expression  */
#line 192 "src/grammar.y"
                                                                { (yyval.expression) = create_argument_expr_list((yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1711 "grammar.tab.c"
    break;

  case 16: /* unary_expression: postfix_expression  */
#line 196 "src/grammar.y"
                                                { (yyval.expression) = (yyvsp[0].expression); }
#line 1717 "grammar.tab.c"
    break;

  case 17: /* unary_expression: INC_OP unary_expression  */
#line 197 "src/grammar.y"
                                                { (yyval.expression) = create_unary_expression_ue("++", (yyvsp[0].expression)); }
#line 1723 "grammar.tab.c"
    break;

  case 18: /* unary_expression: DEC_OP unary_expression  */
#line 198 "src/grammar.y"
                                                { (yyval.expression) = create_unary_expression_ue("--", (yyvsp[0].expression)); }
#line 1729 "grammar.tab.c"
    break;

  case 19: /* unary_expression: unary_operator cast_expression  */
#line 199 "src/grammar.y"
                                                { (yyval.expression)=create_unary_expression_cast((yyvsp[-1].node),(yyvsp[0].expression)); }
#line 1735 "grammar.tab.c"
    break;

  case 20: /* unary_expression: SIZEOF unary_expression  */
#line 200 "src/grammar.y"
                                                { (yyval.expression) = create_unary_expression_ue("sizeof", (yyvsp[0].expression)); }
#line 1741 "grammar.tab.c"
    break;

  case 21: /* unary_expression: SIZEOF '(' type_name ')'  */
#line 201 "src/grammar.y"
                                                { (yyval.expression) = create_unary_expression_typename("SIZEOF type_name", (yyvsp[-1].node)); }
#line 1747 "grammar.tab.c"
    break;

  case 22: /* unary_operator: '&'  */
#line 205 "src/grammar.y"
                { (yyval.node) = create_non_term("&"); }
#line 1753 "grammar.tab.c"
    break;

  case 23: /* unary_operator: '*'  */
#line 206 "src/grammar.y"
                { (yyval.node) = create_non_term("*"); }
#line 1759 "grammar.tab.c"
    break;

  case 24: /* unary_operator: '+'  */
#line 207 "src/grammar.y"
                { (yyval.node) = create_non_term("+"); }
#line 1765 "grammar.tab.c"
    break;

  case 25: /* unary_operator: '-'  */
#line 208 "src/grammar.y"
                { (yyval.node) = create_non_term("-"); }
#line 1771 "grammar.tab.c"
    break;

  case 26: /* unary_operator: '~'  */
#line 209 "src/grammar.y"
                { (yyval.node) = create_non_term("~"); }
#line 1777 "grammar.tab.c"
    break;

  case 27: /* unary_operator: '!'  */
#line 210 "src/grammar.y"
                { (yyval.node) = create_non_term("!"); }
#line 1783 "grammar.tab.c"
    break;

  case 28: /* cast_expression: unary_expression  */
#line 214 "src/grammar.y"
                                                { (yyval.expression) = (yyvsp[0].expression); }
#line 1789 "grammar.tab.c"
    break;

  case 29: /* cast_expression: '(' type_name ')' cast_expression  */
#line 215 "src/grammar.y"
                                                { (yyval.expression) = create_cast_expression_typename((yyvsp[-2].node), (yyvsp[0].expression)); }
#line 1795 "grammar.tab.c"
    break;

  case 30: /* multiplicative_expression: cast_expression  */
#line 219 "src/grammar.y"
                                                        { (yyval.expression) = (yyvsp[0].expression); }
#line 1801 "grammar.tab.c"
    break;

  case 31: /* multiplicative_expression: multiplicative_expression '*' cast_expression  */
#line 220 "src/grammar.y"
                                                        { (yyval.expression) = create_multiplicative_expression("*", (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1807 "grammar.tab.c"
    break;

  case 32: /* multiplicative_expression: multiplicative_expression '/' cast_expression  */
#line 221 "src/grammar.y"
                                                        { (yyval.expression) = create_multiplicative_expression("/", (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1813 "grammar.tab.c"
    break;

  case 33: /* multiplicative_expression: multiplicative_expression '%' cast_expression  */
#line 222 "src/grammar.y"
                                                        { (yyval.expression) = create_multiplicative_expression("%", (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1819 "grammar.tab.c"
    break;

  case 34: /* additive_expression: multiplicative_expression  */
#line 226 "src/grammar.y"
                                                                { (yyval.expression) = (yyvsp[0].expression); }
#line 1825 "grammar.tab.c"
    break;

  case 35: /* additive_expression: additive_expression '+' multiplicative_expression  */
#line 227 "src/grammar.y"
                                                                { (yyval.expression) = create_additive_expression("+", (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1831 "grammar.tab.c"
    break;

  case 36: /* additive_expression: additive_expression '-' multiplicative_expression  */
#line 228 "src/grammar.y"
                                                                { (yyval.expression) = create_additive_expression("-", (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1837 "grammar.tab.c"
    break;

  case 37: /* shift_expression: additive_expression  */
#line 232 "src/grammar.y"
                                                        { (yyval.expression) = (yyvsp[0].expression); }
#line 1843 "grammar.tab.c"
    break;

  case 38: /* shift_expression: shift_expression LEFT_OP additive_expression  */
#line 233 "src/grammar.y"
                                                        { (yyval.expression) = create_shift_expression(">>", (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1849 "grammar.tab.c"
    break;

  case 39: /* shift_expression: shift_expression RIGHT_OP additive_expression  */
#line 234 "src/grammar.y"
                                                        { (yyval.expression) = create_shift_expression("<<", (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1855 "grammar.tab.c"
    break;

  case 40: /* relational_expression: shift_expression  */
#line 238 "src/grammar.y"
                                                        { (yyval.expression) = (yyvsp[0].expression); }
#line 1861 "grammar.tab.c"
    break;

  case 41: /* relational_expression: relational_expression '<' shift_expression  */
#line 239 "src/grammar.y"
                                                        { (yyval.expression) = create_relational_expression("<", (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1867 "grammar.tab.c"
    break;

  case 42: /* relational_expression: relational_expression '>' shift_expression  */
#line 240 "src/grammar.y"
                                                        { (yyval.expression) = create_relational_expression(">", (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1873 "grammar.tab.c"
    break;

  case 43: /* relational_expression: relational_expression LE_OP shift_expression  */
#line 241 "src/grammar.y"
                                                        { (yyval.expression) = create_relational_expression("<=", (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1879 "grammar.tab.c"
    break;

  case 44: /* relational_expression: relational_expression GE_OP shift_expression  */
#line 242 "src/grammar.y"
                                                        { (yyval.expression) = create_relational_expression(">=", (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1885 "grammar.tab.c"
    break;

  case 45: /* equality_expression: relational_expression  */
#line 246 "src/grammar.y"
                                                                { (yyval.expression) = (yyvsp[0].expression); }
#line 1891 "grammar.tab.c"
    break;

  case 46: /* equality_expression: equality_expression EQ_OP relational_expression  */
#line 247 "src/grammar.y"
                                                                { (yyval.expression) = create_equality_expression("==", (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1897 "grammar.tab.c"
    break;

  case 47: /* equality_expression: equality_expression NE_OP relational_expression  */
#line 248 "src/grammar.y"
                                                                { (yyval.expression) = create_equality_expression("!=", (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1903 "grammar.tab.c"
    break;

  case 48: /* and_expression: equality_expression  */
#line 252 "src/grammar.y"
                                                        { (yyval.expression) = (yyvsp[0].expression); }
#line 1909 "grammar.tab.c"
    break;

  case 49: /* and_expression: and_expression '&' equality_expression  */
#line 253 "src/grammar.y"
                                                        { (yyval.expression) = create_and_expression("&", (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1915 "grammar.tab.c"
    break;

  case 50: /* exclusive_or_expression: and_expression  */
#line 257 "src/grammar.y"
                                                        { (yyval.expression) = (yyvsp[0].expression); }
#line 1921 "grammar.tab.c"
    break;

  case 51: /* exclusive_or_expression: exclusive_or_expression '^' and_expression  */
#line 258 "src/grammar.y"
                                                        { (yyval.expression) = create_exclusive_or_expression("^", (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1927 "grammar.tab.c"
    break;

  case 52: /* inclusive_or_expression: exclusive_or_expression  */
#line 262 "src/grammar.y"
                                                                { (yyval.expression) = (yyvsp[0].expression); }
#line 1933 "grammar.tab.c"
    break;

  case 53: /* inclusive_or_expression: inclusive_or_expression '|' exclusive_or_expression  */
#line 263 "src/grammar.y"
                                                                { (yyval.expression) = create_inclusive_or_expression("|", (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1939 "grammar.tab.c"
    break;

  case 54: /* logical_and_expression: inclusive_or_expression  */
#line 267 "src/grammar.y"
                                                                { (yyval.expression) = (yyvsp[0].expression); }
#line 1945 "grammar.tab.c"
    break;

  case 55: /* logical_and_expression: logical_and_expression AND_OP inclusive_or_expression  */
#line 268 "src/grammar.y"
                                                                { (yyval.expression) = create_logical_and_expression("&&", (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1951 "grammar.tab.c"
    break;

  case 56: /* logical_or_expression: logical_and_expression  */
#line 272 "src/grammar.y"
                                                                { (yyval.expression) = (yyvsp[0].expression); }
#line 1957 "grammar.tab.c"
    break;

  case 57: /* logical_or_expression: logical_or_expression OR_OP logical_and_expression  */
#line 273 "src/grammar.y"
                                                                { (yyval.expression) = create_logical_or_expression("||", (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1963 "grammar.tab.c"
    break;

  case 58: /* conditional_expression: logical_or_expression  */
#line 277 "src/grammar.y"
                                                                                { (yyval.expression) = (yyvsp[0].expression); }
#line 1969 "grammar.tab.c"
    break;

  case 59: /* conditional_expression: logical_or_expression '?' expression ':' conditional_expression  */
#line 278 "src/grammar.y"
                                                                                { (yyval.expression) = create_conditional_expression("?:", (yyvsp[-4].expression), (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1975 "grammar.tab.c"
    break;

  case 60: /* assignment_expression: conditional_expression  */
#line 282 "src/grammar.y"
                                                                         { (yyval.expression) = (yyvsp[0].expression); }
#line 1981 "grammar.tab.c"
    break;

  case 61: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 283 "src/grammar.y"
                                                                         { (yyval.expression)=create_assignment_expression((yyvsp[-2].expression),(yyvsp[-1].node),(yyvsp[0].expression)); }
#line 1987 "grammar.tab.c"
    break;

  case 62: /* assignment_operator: '='  */
#line 287 "src/grammar.y"
                         { (yyval.node) = create_non_term("="); }
#line 1993 "grammar.tab.c"
    break;

  case 63: /* assignment_operator: MUL_ASSIGN  */
#line 288 "src/grammar.y"
                         { (yyval.node) = create_non_term("*="); }
#line 1999 "grammar.tab.c"
    break;

  case 64: /* assignment_operator: DIV_ASSIGN  */
#line 289 "src/grammar.y"
                         { (yyval.node) = create_non_term("/="); }
#line 2005 "grammar.tab.c"
    break;

  case 65: /* assignment_operator: MOD_ASSIGN  */
#line 290 "src/grammar.y"
                         { (yyval.node) = create_non_term("%="); }
#line 2011 "grammar.tab.c"
    break;

  case 66: /* assignment_operator: ADD_ASSIGN  */
#line 291 "src/grammar.y"
                         { (yyval.node) = create_non_term("+="); }
#line 2017 "grammar.tab.c"
    break;

  case 67: /* assignment_operator: SUB_ASSIGN  */
#line 292 "src/grammar.y"
                         { (yyval.node) = create_non_term("-="); }
#line 2023 "grammar.tab.c"
    break;

  case 68: /* assignment_operator: LEFT_ASSIGN  */
#line 293 "src/grammar.y"
                         { (yyval.node) = create_non_term("<<="); }
#line 2029 "grammar.tab.c"
    break;

  case 69: /* assignment_operator: RIGHT_ASSIGN  */
#line 294 "src/grammar.y"
                         { (yyval.node) = create_non_term(">>="); }
#line 2035 "grammar.tab.c"
    break;

  case 70: /* assignment_operator: AND_ASSIGN  */
#line 295 "src/grammar.y"
                         { (yyval.node) = create_non_term("&="); }
#line 2041 "grammar.tab.c"
    break;

  case 71: /* assignment_operator: XOR_ASSIGN  */
#line 296 "src/grammar.y"
                         { (yyval.node) = create_non_term("^="); }
#line 2047 "grammar.tab.c"
    break;

  case 72: /* assignment_operator: OR_ASSIGN  */
#line 297 "src/grammar.y"
                         { (yyval.node) = create_non_term("|="); }
#line 2053 "grammar.tab.c"
    break;

  case 73: /* expression: assignment_expression  */
#line 301 "src/grammar.y"
                                                 { (yyval.expression) = (yyvsp[0].expression); }
#line 2059 "grammar.tab.c"
    break;

  case 74: /* expression: expression ',' assignment_expression  */
#line 302 "src/grammar.y"
                                                 { (yyval.expression) = create_toplevel_expression((yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 2065 "grammar.tab.c"
    break;

  case 75: /* constant_expression: conditional_expression  */
#line 307 "src/grammar.y"
                                         { (yyval.node) = (yyvsp[0].expression); }
#line 2071 "grammar.tab.c"
    break;

  case 76: /* declaration: declaration_specifiers ';'  */
#line 311 "src/grammar.y"
                                                          { (yyval.declaration) = new_declaration( (yyvsp[-1].declaration_specifiers), NULL );}
#line 2077 "grammar.tab.c"
    break;

  case 77: /* declaration: declaration_specifiers init_declarator_list ';'  */
#line 312 "src/grammar.y"
                                                          {(yyval.declaration) = new_declaration( (yyvsp[-2].declaration_specifiers), (yyvsp[-1].init_declarator_list) );}
#line 2083 "grammar.tab.c"
    break;

  case 78: /* declaration_specifiers: storage_class_specifier  */
#line 317 "src/grammar.y"
                                                                 { (yyval.declaration_specifiers) = new_storage_class( (yyvsp[0].value) ); }
#line 2089 "grammar.tab.c"
    break;

  case 79: /* declaration_specifiers: storage_class_specifier declaration_specifiers  */
#line 318 "src/grammar.y"
                                                                 { (yyval.declaration_specifiers) = add_storage_class( (yyvsp[0].declaration_specifiers), (yyvsp[-1].value) ); }
#line 2095 "grammar.tab.c"
    break;

  case 80: /* declaration_specifiers: type_specifier  */
#line 319 "src/grammar.y"
                                                                 { (yyval.declaration_specifiers) = new_type_specifier( (yyvsp[0].type_specifier) ); }
#line 2101 "grammar.tab.c"
    break;

  case 81: /* declaration_specifiers: type_specifier declaration_specifiers  */
#line 320 "src/grammar.y"
                                                                 { (yyval.declaration_specifiers) = add_type_specifier( (yyvsp[0].declaration_specifiers), (yyvsp[-1].type_specifier) ); }
#line 2107 "grammar.tab.c"
    break;

  case 82: /* declaration_specifiers: type_qualifier  */
#line 321 "src/grammar.y"
                                                                 { (yyval.declaration_specifiers) = new_type_qualifier ( (yyvsp[0].value) );  }
#line 2113 "grammar.tab.c"
    break;

  case 83: /* declaration_specifiers: type_qualifier declaration_specifiers  */
#line 322 "src/grammar.y"
                                                                 { (yyval.declaration_specifiers) = add_type_qualifier( (yyvsp[0].declaration_specifiers), (yyvsp[-1].value) ); }
#line 2119 "grammar.tab.c"
    break;

  case 84: /* init_declarator_list: init_declarator  */
#line 326 "src/grammar.y"
                                                         { (yyval.init_declarator_list) = create_init_declarator_list( (yyvsp[0].declarator) ); }
#line 2125 "grammar.tab.c"
    break;

  case 85: /* init_declarator_list: init_declarator_list ',' init_declarator  */
#line 327 "src/grammar.y"
                                                         { (yyval.init_declarator_list) = add_to_init_declarator_list ( (yyvsp[-2].init_declarator_list), (yyvsp[0].declarator) ); }
#line 2131 "grammar.tab.c"
    break;

  case 86: /* init_declarator: declarator  */
#line 331 "src/grammar.y"
                                         { (yyval.declarator) = (yyvsp[0].declarator); }
#line 2137 "grammar.tab.c"
    break;

  case 87: /* init_declarator: declarator '=' initializer  */
#line 332 "src/grammar.y"
                                         { (yyval.declarator) = add_initializer_to_declarator( (yyvsp[-2].declarator), (yyvsp[0].node) ); }
#line 2143 "grammar.tab.c"
    break;

  case 88: /* storage_class_specifier: TYPEDEF  */
#line 336 "src/grammar.y"
                        { (yyval.value) = TYPEDEF;  }
#line 2149 "grammar.tab.c"
    break;

  case 89: /* type_specifier: VOID  */
#line 344 "src/grammar.y"
                                        { (yyval.type_specifier) = create_type_specifier(VOID); }
#line 2155 "grammar.tab.c"
    break;

  case 90: /* type_specifier: CHAR  */
#line 345 "src/grammar.y"
                                        { (yyval.type_specifier) = create_type_specifier(CHAR); }
#line 2161 "grammar.tab.c"
    break;

  case 91: /* type_specifier: SHORT  */
#line 346 "src/grammar.y"
                                        { (yyval.type_specifier) = create_type_specifier(SHORT); }
#line 2167 "grammar.tab.c"
    break;

  case 92: /* type_specifier: INT  */
#line 347 "src/grammar.y"
                                        { (yyval.type_specifier) = create_type_specifier(INT); }
#line 2173 "grammar.tab.c"
    break;

  case 93: /* type_specifier: LONG  */
#line 348 "src/grammar.y"
                                        { (yyval.type_specifier) = create_type_specifier(LONG); }
#line 2179 "grammar.tab.c"
    break;

  case 94: /* type_specifier: FLOAT  */
#line 349 "src/grammar.y"
                                        { (yyval.type_specifier) = create_type_specifier(FLOAT); }
#line 2185 "grammar.tab.c"
    break;

  case 95: /* type_specifier: DOUBLE  */
#line 350 "src/grammar.y"
                                        { (yyval.type_specifier) = create_type_specifier(DOUBLE); }
#line 2191 "grammar.tab.c"
    break;

  case 96: /* type_specifier: SIGNED  */
#line 351 "src/grammar.y"
                                        { (yyval.type_specifier) = create_type_specifier(SIGNED); }
#line 2197 "grammar.tab.c"
    break;

  case 97: /* type_specifier: UNSIGNED  */
#line 352 "src/grammar.y"
                                        { (yyval.type_specifier) = create_type_specifier(UNSIGNED); }
#line 2203 "grammar.tab.c"
    break;

  case 98: /* type_specifier: struct_or_union_specifier  */
#line 353 "src/grammar.y"
                                        { (yyval.type_specifier) = (yyvsp[0].type_specifier); }
#line 2209 "grammar.tab.c"
    break;

  case 99: /* type_specifier: enum_specifier  */
#line 354 "src/grammar.y"
                                        { (yyval.type_specifier) = (yyvsp[0].type_specifier); }
#line 2215 "grammar.tab.c"
    break;

  case 100: /* type_specifier: TYPE_NAME  */
#line 355 "src/grammar.y"
                                        { (yyval.type_specifier) = create_type_specifier(TYPE_NAME); }
#line 2221 "grammar.tab.c"
    break;

  case 101: /* struct_or_union_specifier: struct_or_union IDENTIFIER '{' struct_declaration_list '}'  */
#line 358 "src/grammar.y"
                                                                        { (yyval.type_specifier) = create_type_specifier( (yyvsp[-4].value), (yyvsp[-3].identifier), (yyvsp[-1].struct_declaration_list)); }
#line 2227 "grammar.tab.c"
    break;

  case 102: /* struct_or_union_specifier: struct_or_union '{' struct_declaration_list '}'  */
#line 359 "src/grammar.y"
                                                                        { (yyval.type_specifier) = create_type_specifier( (yyvsp[-3].value), NULL, (yyvsp[-1].struct_declaration_list)); }
#line 2233 "grammar.tab.c"
    break;

  case 103: /* struct_or_union_specifier: struct_or_union IDENTIFIER  */
#line 360 "src/grammar.y"
                                                                        { (yyval.type_specifier) = create_type_specifier( (yyvsp[-1].value), (yyvsp[0].identifier), (StructDeclarationList *) NULL); }
#line 2239 "grammar.tab.c"
    break;

  case 104: /* struct_or_union: STRUCT  */
#line 364 "src/grammar.y"
                         { (yyval.value) = STRUCT; }
#line 2245 "grammar.tab.c"
    break;

  case 105: /* struct_or_union: UNION  */
#line 365 "src/grammar.y"
                         { (yyval.value) = UNION; }
#line 2251 "grammar.tab.c"
    break;

  case 106: /* struct_declaration_list: struct_declaration  */
#line 369 "src/grammar.y"
                                                        { (yyval.struct_declaration_list) = create_struct_declaration_list ( (yyvsp[0].struct_declaration) ); }
#line 2257 "grammar.tab.c"
    break;

  case 107: /* struct_declaration_list: struct_declaration_list struct_declaration  */
#line 370 "src/grammar.y"
                                                        { (yyval.struct_declaration_list) = add_to_struct_declaration_list ( (yyvsp[-1].struct_declaration_list), (yyvsp[0].struct_declaration) ); }
#line 2263 "grammar.tab.c"
    break;

  case 108: /* struct_declaration: specifier_qualifier_list struct_declarator_list ';'  */
#line 374 "src/grammar.y"
                                                                 { (yyval.struct_declaration) = create_struct_declaration( (yyvsp[-2].specifier_qualifier_list), (yyvsp[-1].init_declarator_list) ); }
#line 2269 "grammar.tab.c"
    break;

  case 109: /* specifier_qualifier_list: type_specifier specifier_qualifier_list  */
#line 378 "src/grammar.y"
                                                        { (yyval.specifier_qualifier_list) = add_type_specifier_sq( (yyvsp[0].specifier_qualifier_list), (yyvsp[-1].type_specifier) ); }
#line 2275 "grammar.tab.c"
    break;

  case 110: /* specifier_qualifier_list: type_specifier  */
#line 379 "src/grammar.y"
                                                        { (yyval.specifier_qualifier_list) = create_type_specifier_sq( (yyvsp[0].type_specifier) ); }
#line 2281 "grammar.tab.c"
    break;

  case 111: /* specifier_qualifier_list: type_qualifier specifier_qualifier_list  */
#line 380 "src/grammar.y"
                                                        { (yyval.specifier_qualifier_list) = add_type_qualifier_sq( (yyvsp[0].specifier_qualifier_list), (yyvsp[-1].value) ); }
#line 2287 "grammar.tab.c"
    break;

  case 112: /* specifier_qualifier_list: type_qualifier  */
#line 381 "src/grammar.y"
                                                        { (yyval.specifier_qualifier_list) = create_type_qualifier_sq( (yyvsp[0].value) ); }
#line 2293 "grammar.tab.c"
    break;

  case 113: /* struct_declarator_list: struct_declarator  */
#line 385 "src/grammar.y"
                                                         { (yyval.init_declarator_list) = create_init_declarator_list ( (yyvsp[0].declarator) ); }
#line 2299 "grammar.tab.c"
    break;

  case 114: /* struct_declarator_list: struct_declarator_list ',' struct_declarator  */
#line 386 "src/grammar.y"
                                                         { (yyval.init_declarator_list) = add_to_init_declarator_list( (yyvsp[-2].init_declarator_list), (yyvsp[0].declarator) ); }
#line 2305 "grammar.tab.c"
    break;

  case 115: /* struct_declarator: declarator  */
#line 390 "src/grammar.y"
                         { (yyval.declarator) = (yyvsp[0].declarator); }
#line 2311 "grammar.tab.c"
    break;

  case 116: /* enum_specifier: ENUM '{' enumerator_list '}'  */
#line 396 "src/grammar.y"
                                                        { (yyval.type_specifier) = create_type_specifier( ENUM, NULL, (yyvsp[-1].enumerator_list) ); }
#line 2317 "grammar.tab.c"
    break;

  case 117: /* enum_specifier: ENUM IDENTIFIER '{' enumerator_list '}'  */
#line 397 "src/grammar.y"
                                                        { (yyval.type_specifier) = create_type_specifier( ENUM, (yyvsp[-3].identifier),   (yyvsp[-1].enumerator_list) ); }
#line 2323 "grammar.tab.c"
    break;

  case 118: /* enum_specifier: ENUM IDENTIFIER  */
#line 398 "src/grammar.y"
                                                        { (yyval.type_specifier) = create_type_specifier( ENUM, (yyvsp[0].identifier), (EnumeratorList *) NULL ); }
#line 2329 "grammar.tab.c"
    break;

  case 119: /* enumerator_list: enumerator  */
#line 402 "src/grammar.y"
                                                 { (yyval.enumerator_list) = create_enumerator_list( (yyvsp[0].enumerator) ); }
#line 2335 "grammar.tab.c"
    break;

  case 120: /* enumerator_list: enumerator_list ',' enumerator  */
#line 403 "src/grammar.y"
                                                 { (yyval.enumerator_list) = add_to_enumerator_list( (yyvsp[-2].enumerator_list), (yyvsp[0].enumerator) ); }
#line 2341 "grammar.tab.c"
    break;

  case 121: /* enumerator: IDENTIFIER  */
#line 407 "src/grammar.y"
                                                 { (yyval.enumerator) = create_enumerator( (yyvsp[0].identifier), NULL ); }
#line 2347 "grammar.tab.c"
    break;

  case 122: /* enumerator: IDENTIFIER '=' constant_expression  */
#line 408 "src/grammar.y"
                                                 { (yyval.enumerator) = create_enumerator( (yyvsp[-2].identifier), (yyvsp[0].node) ); }
#line 2353 "grammar.tab.c"
    break;

  case 123: /* type_qualifier: CONST  */
#line 412 "src/grammar.y"
                         { (yyval.value) = CONST; }
#line 2359 "grammar.tab.c"
    break;

  case 124: /* type_qualifier: VOLATILE  */
#line 413 "src/grammar.y"
                         { (yyval.value) = VOLATILE; }
#line 2365 "grammar.tab.c"
    break;

  case 125: /* declarator: pointer direct_declarator  */
#line 417 "src/grammar.y"
                                         { (yyval.declarator) = create_declarator( (yyvsp[-1].pointer), (yyvsp[0].direct_declarator) ); }
#line 2371 "grammar.tab.c"
    break;

  case 126: /* declarator: direct_declarator  */
#line 418 "src/grammar.y"
                                         { (yyval.declarator) = create_declarator( NULL, (yyvsp[0].direct_declarator) ); }
#line 2377 "grammar.tab.c"
    break;

  case 127: /* direct_declarator: IDENTIFIER  */
#line 422 "src/grammar.y"
                                                                 { (yyval.direct_declarator) = create_dir_declarator_id( ID , (yyvsp[0].identifier) ); }
#line 2383 "grammar.tab.c"
    break;

  case 128: /* direct_declarator: '(' declarator ')'  */
#line 423 "src/grammar.y"
                                                                 { (yyval.direct_declarator) = create_dir_declarator_dec( DECLARATOR, (yyvsp[-1].declarator) ); }
#line 2389 "grammar.tab.c"
    break;

  case 129: /* direct_declarator: direct_declarator '[' CONSTANT ']'  */
#line 425 "src/grammar.y"
                                                 { (yyval.direct_declarator) = create_dir_declarator_arr( ARRAY, (yyvsp[-3].direct_declarator), (yyvsp[-1].constant) ); }
#line 2395 "grammar.tab.c"
    break;

  case 130: /* direct_declarator: direct_declarator '[' ']'  */
#line 426 "src/grammar.y"
                                                                 { (yyval.direct_declarator) = create_dir_declarator_arr( ARRAY, (yyvsp[-2].direct_declarator), NULL ); }
#line 2401 "grammar.tab.c"
    break;

  case 131: /* direct_declarator: direct_declarator '(' parameter_type_list ')'  */
#line 427 "src/grammar.y"
                                                                 { (yyval.direct_declarator) = create_dir_declarator_fun( FUNCTION, (yyvsp[-3].direct_declarator), (yyvsp[-1].parameter_type_list) ); }
#line 2407 "grammar.tab.c"
    break;

  case 132: /* direct_declarator: direct_declarator '(' ')'  */
#line 428 "src/grammar.y"
                                                                 { (yyval.direct_declarator) = create_dir_declarator_fun( FUNCTION, (yyvsp[-2].direct_declarator), NULL ); }
#line 2413 "grammar.tab.c"
    break;

  case 133: /* pointer: '*'  */
#line 432 "src/grammar.y"
                                                { (yyval.pointer) = create_pointer(); }
#line 2419 "grammar.tab.c"
    break;

  case 134: /* pointer: '*' type_qualifier_list  */
#line 433 "src/grammar.y"
                                                { (yyval.pointer) = create_pointer( (yyvsp[0].type_qualifier_list), NULL ); }
#line 2425 "grammar.tab.c"
    break;

  case 135: /* pointer: '*' pointer  */
#line 434 "src/grammar.y"
                                                { (yyval.pointer) = create_pointer( NULL, (yyvsp[0].pointer) ); }
#line 2431 "grammar.tab.c"
    break;

  case 136: /* pointer: '*' type_qualifier_list pointer  */
#line 435 "src/grammar.y"
                                                { (yyval.pointer) = create_pointer( (yyvsp[-1].type_qualifier_list), (yyvsp[0].pointer) ); }
#line 2437 "grammar.tab.c"
    break;

  case 137: /* type_qualifier_list: type_qualifier  */
#line 439 "src/grammar.y"
                                                { (yyval.type_qualifier_list) = create_type_qualifier_list( (yyvsp[0].value) ); }
#line 2443 "grammar.tab.c"
    break;

  case 138: /* type_qualifier_list: type_qualifier_list type_qualifier  */
#line 440 "src/grammar.y"
                                                { (yyval.type_qualifier_list) = add_to_type_qualifier_list( (yyvsp[-1].type_qualifier_list), (yyvsp[0].value) ); }
#line 2449 "grammar.tab.c"
    break;

  case 139: /* parameter_type_list: parameter_list  */
#line 444 "src/grammar.y"
                                         { (yyval.parameter_type_list) = (yyvsp[0].parameter_type_list) ; }
#line 2455 "grammar.tab.c"
    break;

  case 140: /* parameter_type_list: parameter_list ',' ELLIPSIS  */
#line 445 "src/grammar.y"
                                         { (yyval.parameter_type_list) = add_ellipsis_to_list( (yyvsp[-2].parameter_type_list) ); }
#line 2461 "grammar.tab.c"
    break;

  case 141: /* parameter_list: parameter_declaration  */
#line 449 "src/grammar.y"
                                                         { (yyval.parameter_type_list) = create_parameter_list( (yyvsp[0].parameter_declaration) ); }
#line 2467 "grammar.tab.c"
    break;

  case 142: /* parameter_list: parameter_list ',' parameter_declaration  */
#line 450 "src/grammar.y"
                                                         { (yyval.parameter_type_list) = add_to_parameter_list( (yyvsp[-2].parameter_type_list), (yyvsp[0].parameter_declaration) ); }
#line 2473 "grammar.tab.c"
    break;

  case 143: /* parameter_declaration: declaration_specifiers declarator  */
#line 454 "src/grammar.y"
                                                        { (yyval.parameter_declaration) = create_parameter_declaration( (yyvsp[-1].declaration_specifiers), (yyvsp[0].declarator), NULL ); }
#line 2479 "grammar.tab.c"
    break;

  case 144: /* parameter_declaration: declaration_specifiers abstract_declarator  */
#line 455 "src/grammar.y"
                                                        { (yyval.parameter_declaration) = create_parameter_declaration( (yyvsp[-1].declaration_specifiers), NULL, (yyvsp[0].abstract_declarator) ); }
#line 2485 "grammar.tab.c"
    break;

  case 145: /* parameter_declaration: declaration_specifiers  */
#line 456 "src/grammar.y"
                                                        { (yyval.parameter_declaration) = create_parameter_declaration( (yyvsp[0].declaration_specifiers), NULL, NULL ); }
#line 2491 "grammar.tab.c"
    break;

  case 146: /* type_name: specifier_qualifier_list  */
#line 465 "src/grammar.y"
                                         { (yyval.node) = create_non_term("type_name", (yyvsp[0].specifier_qualifier_list)); }
#line 2497 "grammar.tab.c"
    break;

  case 147: /* type_name: specifier_qualifier_list abstract_declarator  */
#line 466 "src/grammar.y"
                                                         { (yyval.node) = create_non_term("type_name", (yyvsp[-1].specifier_qualifier_list), (yyvsp[0].abstract_declarator)); }
#line 2503 "grammar.tab.c"
    break;

  case 148: /* abstract_declarator: pointer  */
#line 470 "src/grammar.y"
                                                { (yyval.abstract_declarator) = create_abstract_declarator( (yyvsp[0].pointer), NULL ); }
#line 2509 "grammar.tab.c"
    break;

  case 149: /* abstract_declarator: direct_abstract_declarator  */
#line 471 "src/grammar.y"
                                                { (yyval.abstract_declarator) = create_abstract_declarator( NULL, (yyvsp[0].direct_abstract_declarator) ); }
#line 2515 "grammar.tab.c"
    break;

  case 150: /* abstract_declarator: pointer direct_abstract_declarator  */
#line 472 "src/grammar.y"
                                                { (yyval.abstract_declarator) = create_abstract_declarator( (yyvsp[-1].pointer), (yyvsp[0].direct_abstract_declarator) ); }
#line 2521 "grammar.tab.c"
    break;

  case 151: /* direct_abstract_declarator: '(' abstract_declarator ')'  */
#line 476 "src/grammar.y"
                                                                        { (yyval.direct_abstract_declarator) = create_direct_abstract_declarator( ABSTRACT, (yyvsp[-1].abstract_declarator) ); }
#line 2527 "grammar.tab.c"
    break;

  case 152: /* direct_abstract_declarator: '[' ']'  */
#line 477 "src/grammar.y"
                                                                        { (yyval.direct_abstract_declarator) = create_direct_abstract_declarator( SQUARE ); }
#line 2533 "grammar.tab.c"
    break;

  case 153: /* direct_abstract_declarator: '[' CONSTANT ']'  */
#line 479 "src/grammar.y"
                                                                { (yyval.direct_abstract_declarator) = create_direct_abstract_declarator( SQUARE, NULL, (yyvsp[-1].constant) ); }
#line 2539 "grammar.tab.c"
    break;

  case 154: /* direct_abstract_declarator: direct_abstract_declarator '[' ']'  */
#line 480 "src/grammar.y"
                                                                        { (yyval.direct_abstract_declarator) = create_direct_abstract_declarator( SQUARE, (yyvsp[-2].direct_abstract_declarator) ); }
#line 2545 "grammar.tab.c"
    break;

  case 155: /* direct_abstract_declarator: direct_abstract_declarator '[' constant_expression ']'  */
#line 481 "src/grammar.y"
                                                                        { (yyval.direct_abstract_declarator) = create_direct_abstract_declarator( SQUARE, (yyvsp[-3].direct_abstract_declarator), (yyvsp[-1].node) ); }
#line 2551 "grammar.tab.c"
    break;

  case 156: /* direct_abstract_declarator: '(' ')'  */
#line 482 "src/grammar.y"
                                                                        { (yyval.direct_abstract_declarator) = create_direct_abstract_declarator( ROUND ); }
#line 2557 "grammar.tab.c"
    break;

  case 157: /* direct_abstract_declarator: '(' parameter_type_list ')'  */
#line 483 "src/grammar.y"
                                                                        { (yyval.direct_abstract_declarator) = create_direct_abstract_declarator( ROUND, NULL, (yyvsp[-1].parameter_type_list) ); }
#line 2563 "grammar.tab.c"
    break;

  case 158: /* direct_abstract_declarator: direct_abstract_declarator '(' ')'  */
#line 484 "src/grammar.y"
                                                                        { (yyval.direct_abstract_declarator) = create_direct_abstract_declarator( ROUND, (yyvsp[-2].direct_abstract_declarator) ); }
#line 2569 "grammar.tab.c"
    break;

  case 159: /* direct_abstract_declarator: direct_abstract_declarator '(' parameter_type_list ')'  */
#line 485 "src/grammar.y"
                                                                        { (yyval.direct_abstract_declarator) = create_direct_abstract_declarator( ROUND, (yyvsp[-3].direct_abstract_declarator), (yyvsp[-1].parameter_type_list) ); }
#line 2575 "grammar.tab.c"
    break;

  case 160: /* initializer: assignment_expression  */
#line 489 "src/grammar.y"
                                         { (yyval.node) = (yyvsp[0].expression); }
#line 2581 "grammar.tab.c"
    break;

  case 161: /* initializer: '{' initializer_list '}'  */
#line 490 "src/grammar.y"
                                         { (yyval.node) = create_non_term("initializer_list", (yyvsp[-1].node)); }
#line 2587 "grammar.tab.c"
    break;

  case 162: /* initializer: '{' initializer_list ',' '}'  */
#line 491 "src/grammar.y"
                                         { (yyval.node) = create_non_term("initializer_list", (yyvsp[-2].node)); }
#line 2593 "grammar.tab.c"
    break;

  case 163: /* initializer_list: initializer  */
#line 495 "src/grammar.y"
                         { (yyval.node) = create_non_term("initializer", (yyvsp[0].node)); }
#line 2599 "grammar.tab.c"
    break;

  case 164: /* initializer_list: initializer_list ',' initializer  */
#line 496 "src/grammar.y"
                                                 { (yyval.node) = create_non_term("initializer_list", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2605 "grammar.tab.c"
    break;

  case 165: /* statement: labeled_statement  */
#line 500 "src/grammar.y"
                                 { (yyval.node) = (yyvsp[0].node); }
#line 2611 "grammar.tab.c"
    break;

  case 166: /* statement: compound_statement  */
#line 501 "src/grammar.y"
                                 { (yyval.node) = (yyvsp[0].node); }
#line 2617 "grammar.tab.c"
    break;

  case 167: /* statement: expression_statement  */
#line 502 "src/grammar.y"
                                 { (yyval.node) = create_non_term("expression_statement", (yyvsp[0].node)); }
#line 2623 "grammar.tab.c"
    break;

  case 168: /* statement: selection_statement  */
#line 503 "src/grammar.y"
                                 { (yyval.node) = create_non_term("selection_statement", (yyvsp[0].node)); }
#line 2629 "grammar.tab.c"
    break;

  case 169: /* statement: iteration_statement  */
#line 504 "src/grammar.y"
                                 { (yyval.node) = create_non_term("iteration_statement", (yyvsp[0].node)); }
#line 2635 "grammar.tab.c"
    break;

  case 170: /* statement: jump_statement  */
#line 505 "src/grammar.y"
                                 { (yyval.node) = create_non_term("jump_statement", (yyvsp[0].node)); }
#line 2641 "grammar.tab.c"
    break;

  case 171: /* labeled_statement: IDENTIFIER ':' statement  */
#line 509 "src/grammar.y"
                                         { (yyval.node) = create_non_term("labeled_statement", (yyvsp[-2].identifier), (yyvsp[0].node)); }
#line 2647 "grammar.tab.c"
    break;

  case 172: /* labeled_statement: CASE constant_expression ':' statement  */
#line 510 "src/grammar.y"
                                                         { (yyval.node) = create_non_term("CASE", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2653 "grammar.tab.c"
    break;

  case 173: /* labeled_statement: DEFAULT ':' statement  */
#line 511 "src/grammar.y"
                                         { (yyval.node) = create_non_term("DEFAULT", (yyvsp[-1].node)); }
#line 2659 "grammar.tab.c"
    break;

  case 174: /* compound_statement: '{' '}'  */
#line 515 "src/grammar.y"
                                                        { (yyval.node) = NULL; }
#line 2665 "grammar.tab.c"
    break;

  case 175: /* compound_statement: '{' statement_list '}'  */
#line 516 "src/grammar.y"
                                                        { (yyval.node) = create_non_term("compound_statement", (yyvsp[-1].node)); }
#line 2671 "grammar.tab.c"
    break;

  case 176: /* compound_statement: '{' declaration_list '}'  */
#line 517 "src/grammar.y"
                                                        { local_symbol_table.clear_current_level(); (yyval.node) = create_non_term("compound_statement", (yyvsp[-1].declaration_list)); }
#line 2677 "grammar.tab.c"
    break;

  case 177: /* compound_statement: '{' declaration_list statement_list '}'  */
#line 518 "src/grammar.y"
                                                        { local_symbol_table.clear_current_level(); (yyval.node) = create_non_term("compound_statement", (yyvsp[-2].declaration_list), (yyvsp[-1].node)); }
#line 2683 "grammar.tab.c"
    break;

  case 178: /* declaration_list: declaration  */
#line 522 "src/grammar.y"
                                         { (yyval.declaration_list) = create_declaration_list( (yyvsp[0].declaration) ); }
#line 2689 "grammar.tab.c"
    break;

  case 179: /* declaration_list: declaration_list declaration  */
#line 523 "src/grammar.y"
                                         { (yyval.declaration_list) = add_to_declaration_list( (yyvsp[-1].declaration_list), (yyvsp[0].declaration) );}
#line 2695 "grammar.tab.c"
    break;

  case 180: /* statement_list: statement  */
#line 527 "src/grammar.y"
                                         { (yyval.node) = (yyvsp[0].node); }
#line 2701 "grammar.tab.c"
    break;

  case 181: /* statement_list: statement_list statement  */
#line 528 "src/grammar.y"
                                         { (yyval.node) = create_non_term("statement_list", (yyvsp[-1].node), (yyvsp[0].node)); }
#line 2707 "grammar.tab.c"
    break;

  case 182: /* expression_statement: ';'  */
#line 532 "src/grammar.y"
                                 { (yyval.node) = create_terminal("EMPTY_STMT",NULL); }
#line 2713 "grammar.tab.c"
    break;

  case 183: /* expression_statement: expression ';'  */
#line 533 "src/grammar.y"
                                 { (yyval.node) = (yyvsp[-1].expression); }
#line 2719 "grammar.tab.c"
    break;

  case 184: /* selection_statement: IF '(' expression ')' statement  */
#line 537 "src/grammar.y"
                                                 { (yyval.node) = create_non_term("IF", (yyvsp[-2].expression), (yyvsp[0].node)); }
#line 2725 "grammar.tab.c"
    break;

  case 185: /* selection_statement: IF '(' expression ')' statement ELSE statement  */
#line 538 "src/grammar.y"
                                                                 { (yyval.node) = create_non_term("IF ELSE", (yyvsp[-4].expression), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2731 "grammar.tab.c"
    break;

  case 186: /* selection_statement: SWITCH '(' expression ')' statement  */
#line 539 "src/grammar.y"
                                                 { (yyval.node) = create_non_term("SWITCH", (yyvsp[-2].expression), (yyvsp[0].node)); }
#line 2737 "grammar.tab.c"
    break;

  case 187: /* iteration_statement: WHILE '(' expression ')' statement  */
#line 543 "src/grammar.y"
                                                 { (yyval.node) = create_non_term("WHILE", (yyvsp[-2].expression), (yyvsp[0].node)); }
#line 2743 "grammar.tab.c"
    break;

  case 188: /* iteration_statement: DO statement WHILE '(' expression ')' ';'  */
#line 544 "src/grammar.y"
                                                         { (yyval.node) = create_non_term("DO WHILE", (yyvsp[-2].expression), (yyvsp[-5].node)); }
#line 2749 "grammar.tab.c"
    break;

  case 189: /* iteration_statement: FOR '(' expression_statement expression_statement ')' statement  */
#line 545 "src/grammar.y"
                                                                                 { (yyval.node) = create_non_term("FOR", (yyvsp[-3].node), (yyvsp[-2].node), NULL, (yyvsp[0].node)); }
#line 2755 "grammar.tab.c"
    break;

  case 190: /* iteration_statement: FOR '(' expression_statement expression_statement expression ')' statement  */
#line 546 "src/grammar.y"
                                                                                         { (yyval.node) = create_non_term("FOR", (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-2].expression), (yyvsp[0].node)); }
#line 2761 "grammar.tab.c"
    break;

  case 191: /* jump_statement: GOTO IDENTIFIER ';'  */
#line 550 "src/grammar.y"
                                 { (yyval.node) = create_non_term("GOTO", (yyvsp[-1].identifier)); }
#line 2767 "grammar.tab.c"
    break;

  case 192: /* jump_statement: CONTINUE ';'  */
#line 551 "src/grammar.y"
                         { (yyval.node) = create_non_term("CONTINUE"); }
#line 2773 "grammar.tab.c"
    break;

  case 193: /* jump_statement: BREAK ';'  */
#line 552 "src/grammar.y"
                         { (yyval.node) = create_non_term("BREAK"); }
#line 2779 "grammar.tab.c"
    break;

  case 194: /* jump_statement: RETURN ';'  */
#line 553 "src/grammar.y"
                         { (yyval.node) = create_non_term("RETURN"); }
#line 2785 "grammar.tab.c"
    break;

  case 195: /* jump_statement: RETURN expression ';'  */
#line 554 "src/grammar.y"
                                         { (yyval.node) = create_non_term("RETURN", (yyvsp[-1].expression)); }
#line 2791 "grammar.tab.c"
    break;

  case 196: /* translation_unit: external_declaration  */
#line 558 "src/grammar.y"
                                 { root->add_child(create_non_term("external_declaration", (yyvsp[0].node))); }
#line 2797 "grammar.tab.c"
    break;

  case 197: /* translation_unit: translation_unit external_declaration  */
#line 559 "src/grammar.y"
                                                         { root->add_child(create_non_term("external_declaration", (yyvsp[0].node))); }
#line 2803 "grammar.tab.c"
    break;

  case 198: /* external_declaration: function_definition  */
#line 563 "src/grammar.y"
                                 { (yyval.node) = (yyvsp[0].function_definition); }
#line 2809 "grammar.tab.c"
    break;

  case 199: /* external_declaration: declaration  */
#line 564 "src/grammar.y"
                         { (yyval.node) = add_to_global_symbol_table( (yyvsp[0].declaration) ); }
#line 2815 "grammar.tab.c"
    break;

  case 200: /* function_declaration: declaration_specifiers declarator  */
#line 568 "src/grammar.y"
                                            { (yyval.function_definition) = create_function_defintion((yyvsp[-1].declaration_specifiers), (yyvsp[0].declarator), NULL); }
#line 2821 "grammar.tab.c"
    break;

  case 201: /* function_definition: function_declaration compound_statement  */
#line 572 "src/grammar.y"
                                                         { (yyval.function_definition) = add_stmt_to_function_definition( (yyvsp[-1].function_definition), (yyvsp[0].node) ); }
#line 2827 "grammar.tab.c"
    break;


#line 2831 "grammar.tab.c"

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

#line 578 "src/grammar.y"


#include <iostream>
#include <fstream>
#include <stdio.h>
#include <assert.h>
#include <string>
#include <sstream>
#include <ast.h>
#include <symtab.h>
#include <expression.h>
extern int yyparse();
extern char yytext[];
extern FILE *yyin;
extern FILE *yyout;
void yyerror(const char *s) {
    fflush(stdout);
	

}
Node * root = NULL;

static std::ofstream dot_file;
std::ofstream sym_file;


// Define the global variables here
bool iserror = false;
int line_num = 1;
vector<pair<string, int>> error;
unordered_map<string, string> symtab;
vector<string> program;


int main(int argc, char *argv[]) {
    string outputFileName="lexer_output";

	FILE *fh;
	FILE *fo;

	if (argc != 4){
		std::cout << "Incorrect usage. Usage : ./bin/parser <file>.c -o <file>.dot";
	}
	if ((fh = fopen(argv[1], "r"))){
		yyin = fh;
	}
	else{
		std::cout << "Input file does not exist!";
		exit(0);
	}
	ofstream outputFile(outputFileName);
  	dot_file.open(argv[3]); // = outfile;
	sym_file.open("symtab.csv");


	sym_file << "Scope,Function Name, Symbol Name, Symbol Type, Symbol Level\n";
	std::stringstream ss;
	ss << "digraph G {\n";
	ss << "\tordering=out\n";
	dot_file << ss.str();

	root = create_non_term("translation_unit");

	setup_primitive_types();

	int abc = yyparse();
	root->dotify();
	
	assert(abc == 0);
	
	ss.str("");
	ss << "}\n";
	dot_file << ss.str();

	dot_file.close();
	
	if (!error.empty()) {
        outputFile << "Errors Found:\n";
        for (const auto &err : error) {
             if(err.first!="unterminated comment")outputFile << "invalid character : " << err.first << " at line no. " << err.second << endl;
            else outputFile  << err.first << " at line no. " << err.second << endl;
        }
    } 
	else {
		
        outputFile << "Original Symbol Table:\n";
        outputFile << "-------------------------------------------------------------------------------\n";
        outputFile << "| Lexeme                                | Token                                 |\n";
        outputFile << "-------------------------------------------------------------------------------\n";

        for (const auto &entry : symtab) {
            std::stringstream tokenStream(entry.first);
            std::string line;
            bool firstLine = true;
            while (std::getline(tokenStream, line, '\n')) {
                if (firstLine) {
                    outputFile << "| " << setw(36) << left << line
                               << " | " << setw(36) << left << entry.second << " |\n";
                    firstLine = false;
                } else {
                    outputFile << "| " << setw(36) << left << line
                               << " | " << setw(36) << left << "" << " |\n";
                }
            }
        }
        outputFile << "-------------------------------------------------------------------------------\n";
        outputFile << '\n';
		outputFile << "seperated tokens: "<< endl;
		for(auto i:program)outputFile << i << endl;
		outputFile << endl;

		
	
    cout << "Lexical analysis completed. Check '" << outputFileName << "' for results." << endl;
	
    }
	outputFile.close();


    return 0;
}
void file_writer(std::string s){
	dot_file << s;
}
