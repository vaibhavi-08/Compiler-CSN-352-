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
#line 2 "grammar.y"

#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <iomanip>
#include <sstream>
#include <fstream>

using namespace std;

// Existing symbol table and other declarations
extern unordered_map<string, string> symtab;
extern vector<string> program;
extern vector<pair<string, int>> error;
extern int line;
extern bool iserror;



extern unordered_map<string, string> new_symtab;

// current Type declaration
string currentType = "";

int yylex();
void yyerror(const char *s);

void add_to_token_table(string token, string type);


#line 103 "grammar.tab.c"

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
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_CONSTANT = 4,                   /* CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 5,             /* STRING_LITERAL  */
  YYSYMBOL_SIZEOF = 6,                     /* SIZEOF  */
  YYSYMBOL_PTR_OP = 7,                     /* PTR_OP  */
  YYSYMBOL_INC_OP = 8,                     /* INC_OP  */
  YYSYMBOL_DEC_OP = 9,                     /* DEC_OP  */
  YYSYMBOL_LEFT_OP = 10,                   /* LEFT_OP  */
  YYSYMBOL_RIGHT_OP = 11,                  /* RIGHT_OP  */
  YYSYMBOL_LE_OP = 12,                     /* LE_OP  */
  YYSYMBOL_GE_OP = 13,                     /* GE_OP  */
  YYSYMBOL_EQ_OP = 14,                     /* EQ_OP  */
  YYSYMBOL_NE_OP = 15,                     /* NE_OP  */
  YYSYMBOL_AND_OP = 16,                    /* AND_OP  */
  YYSYMBOL_OR_OP = 17,                     /* OR_OP  */
  YYSYMBOL_MUL_ASSIGN = 18,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 19,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 20,                /* MOD_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 21,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 22,                /* SUB_ASSIGN  */
  YYSYMBOL_LEFT_ASSIGN = 23,               /* LEFT_ASSIGN  */
  YYSYMBOL_RIGHT_ASSIGN = 24,              /* RIGHT_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 25,                /* AND_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 26,                /* XOR_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 27,                 /* OR_ASSIGN  */
  YYSYMBOL_TYPE_NAME = 28,                 /* TYPE_NAME  */
  YYSYMBOL_TYPEDEF = 29,                   /* TYPEDEF  */
  YYSYMBOL_EXTERN = 30,                    /* EXTERN  */
  YYSYMBOL_STATIC = 31,                    /* STATIC  */
  YYSYMBOL_AUTO = 32,                      /* AUTO  */
  YYSYMBOL_REGISTER = 33,                  /* REGISTER  */
  YYSYMBOL_CHAR = 34,                      /* CHAR  */
  YYSYMBOL_SHORT = 35,                     /* SHORT  */
  YYSYMBOL_INT = 36,                       /* INT  */
  YYSYMBOL_LONG = 37,                      /* LONG  */
  YYSYMBOL_SIGNED = 38,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 39,                  /* UNSIGNED  */
  YYSYMBOL_FLOAT = 40,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 41,                    /* DOUBLE  */
  YYSYMBOL_CONST = 42,                     /* CONST  */
  YYSYMBOL_VOLATILE = 43,                  /* VOLATILE  */
  YYSYMBOL_VOID = 44,                      /* VOID  */
  YYSYMBOL_BOOL = 45,                      /* BOOL  */
  YYSYMBOL_STRUCT = 46,                    /* STRUCT  */
  YYSYMBOL_UNION = 47,                     /* UNION  */
  YYSYMBOL_ENUM = 48,                      /* ENUM  */
  YYSYMBOL_ELLIPSIS = 49,                  /* ELLIPSIS  */
  YYSYMBOL_CASE = 50,                      /* CASE  */
  YYSYMBOL_DEFAULT = 51,                   /* DEFAULT  */
  YYSYMBOL_IF = 52,                        /* IF  */
  YYSYMBOL_ELSE = 53,                      /* ELSE  */
  YYSYMBOL_SWITCH = 54,                    /* SWITCH  */
  YYSYMBOL_WHILE = 55,                     /* WHILE  */
  YYSYMBOL_DO = 56,                        /* DO  */
  YYSYMBOL_FOR = 57,                       /* FOR  */
  YYSYMBOL_GOTO = 58,                      /* GOTO  */
  YYSYMBOL_CONTINUE = 59,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 60,                     /* BREAK  */
  YYSYMBOL_RETURN = 61,                    /* RETURN  */
  YYSYMBOL_62_ = 62,                       /* '('  */
  YYSYMBOL_63_ = 63,                       /* ')'  */
  YYSYMBOL_64_ = 64,                       /* '['  */
  YYSYMBOL_65_ = 65,                       /* ']'  */
  YYSYMBOL_66_ = 66,                       /* '.'  */
  YYSYMBOL_67_ = 67,                       /* ','  */
  YYSYMBOL_68_ = 68,                       /* '&'  */
  YYSYMBOL_69_ = 69,                       /* '*'  */
  YYSYMBOL_70_ = 70,                       /* '+'  */
  YYSYMBOL_71_ = 71,                       /* '-'  */
  YYSYMBOL_72_ = 72,                       /* '~'  */
  YYSYMBOL_73_ = 73,                       /* '!'  */
  YYSYMBOL_74_ = 74,                       /* '/'  */
  YYSYMBOL_75_ = 75,                       /* '%'  */
  YYSYMBOL_76_ = 76,                       /* '<'  */
  YYSYMBOL_77_ = 77,                       /* '>'  */
  YYSYMBOL_78_ = 78,                       /* '^'  */
  YYSYMBOL_79_ = 79,                       /* '|'  */
  YYSYMBOL_80_ = 80,                       /* '?'  */
  YYSYMBOL_81_ = 81,                       /* ':'  */
  YYSYMBOL_82_ = 82,                       /* '='  */
  YYSYMBOL_83_ = 83,                       /* ';'  */
  YYSYMBOL_84_ = 84,                       /* '{'  */
  YYSYMBOL_85_ = 85,                       /* '}'  */
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
  YYSYMBOL_identifier_list = 132,          /* identifier_list  */
  YYSYMBOL_type_name = 133,                /* type_name  */
  YYSYMBOL_abstract_declarator = 134,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 135, /* direct_abstract_declarator  */
  YYSYMBOL_initializer = 136,              /* initializer  */
  YYSYMBOL_initializer_list = 137,         /* initializer_list  */
  YYSYMBOL_statement = 138,                /* statement  */
  YYSYMBOL_labeled_statement = 139,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 140,       /* compound_statement  */
  YYSYMBOL_declaration_list = 141,         /* declaration_list  */
  YYSYMBOL_statement_list = 142,           /* statement_list  */
  YYSYMBOL_expression_statement = 143,     /* expression_statement  */
  YYSYMBOL_selection_statement = 144,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 145,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 146,           /* jump_statement  */
  YYSYMBOL_translation_unit = 147,         /* translation_unit  */
  YYSYMBOL_external_declaration = 148,     /* external_declaration  */
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
#define YYFINAL  60
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1177

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  86
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  211
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  347

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
       2,     2,     2,    73,     2,     2,     2,    75,    68,     2,
      62,    63,    69,    70,    67,    71,    66,    74,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    81,    83,
      76,    82,    77,    80,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    64,     2,    65,    78,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    84,    79,    85,    72,     2,     2,     2,
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
static const yytype_int16 yyrline[] =
{
       0,    72,    72,    73,    74,    75,    79,    80,    81,    82,
      83,    84,    85,    86,    90,    91,    95,    96,    97,    98,
      99,   100,   104,   105,   106,   107,   108,   109,   114,   115,
     119,   120,   121,   122,   126,   127,   128,   132,   133,   134,
     138,   139,   140,   141,   142,   146,   147,   148,   152,   153,
     157,   158,   162,   163,   167,   168,   172,   173,   177,   178,
     182,   183,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   201,   202,   206,   210,   211,   215,   216,
     217,   218,   219,   220,   224,   225,   229,   230,   234,   235,
     236,   237,   238,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   258,   263,   271,   272,   276,
     277,   281,   285,   286,   287,   288,   292,   293,   297,   298,
     299,   303,   304,   305,   309,   310,   314,   315,   319,   320,
     324,   325,   329,   333,   334,   340,   345,   351,   356,   365,
     366,   367,   368,   372,   373,   377,   378,   382,   383,   387,
     388,   389,   393,   394,   398,   399,   403,   404,   405,   409,
     410,   411,   412,   413,   414,   415,   416,   417,   421,   422,
     423,   427,   428,   432,   433,   434,   435,   436,   437,   441,
     442,   443,   447,   448,   449,   450,   454,   455,   459,   460,
     464,   465,   469,   470,   471,   475,   476,   477,   478,   482,
     483,   484,   485,   486,   490,   491,   495,   496,   500,   501,
     502,   503
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
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER",
  "CONSTANT", "STRING_LITERAL", "SIZEOF", "PTR_OP", "INC_OP", "DEC_OP",
  "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP",
  "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN",
  "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN",
  "OR_ASSIGN", "TYPE_NAME", "TYPEDEF", "EXTERN", "STATIC", "AUTO",
  "REGISTER", "CHAR", "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED",
  "FLOAT", "DOUBLE", "CONST", "VOLATILE", "VOID", "BOOL", "STRUCT",
  "UNION", "ENUM", "ELLIPSIS", "CASE", "DEFAULT", "IF", "ELSE", "SWITCH",
  "WHILE", "DO", "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN", "'('",
  "')'", "'['", "']'", "'.'", "','", "'&'", "'*'", "'+'", "'-'", "'~'",
  "'!'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "':'", "'='",
  "';'", "'{'", "'}'", "$accept", "primary_expression",
  "postfix_expression", "argument_expression_list", "unary_expression",
  "unary_operator", "cast_expression", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "declaration", "declaration_specifiers",
  "init_declarator_list", "init_declarator", "storage_class_specifier",
  "type_specifier", "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "statement", "labeled_statement",
  "compound_statement", "declaration_list", "statement_list",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-208)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     913,  -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,
    -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,
    -208,     3,    31,    -1,  -208,    11,  1112,  1112,  -208,    16,
    -208,  1112,   988,    64,    12,   829,  -208,  -208,   -38,    51,
      75,  -208,  -208,    -1,  -208,   -23,  -208,   955,  -208,  -208,
      -9,  -208,   269,  -208,    11,  -208,   988,   401,   222,    64,
    -208,  -208,    51,    37,   -16,  -208,  -208,  -208,  -208,    31,
    -208,   537,  -208,   988,  1129,   -15,  -208,  -208,   743,   755,
     755,   781,    60,    89,   135,   152,   518,   161,   185,   151,
     166,   554,   639,  -208,  -208,  -208,  -208,  -208,  -208,  -208,
    -208,  -208,   574,   184,   781,  -208,    35,   147,   210,     9,
     218,   191,   190,   192,   263,   -10,  -208,  -208,   -18,  -208,
    -208,  -208,   340,   411,  -208,  -208,  -208,  -208,   198,  -208,
    -208,  -208,  -208,    14,   219,   214,  -208,    81,  -208,  -208,
    -208,  -208,   220,   -14,   781,    51,  -208,  -208,   537,  -208,
    -208,  -208,  1129,   930,  -208,    55,  1129,   518,   639,  -208,
     781,  -208,  -208,   205,   518,   781,   781,   781,   233,   589,
     206,  -208,  -208,  -208,   -11,    86,   115,   251,   315,  -208,
    -208,   626,   781,   319,  -208,  -208,  -208,  -208,  -208,  -208,
    -208,  -208,  -208,  -208,  -208,   781,  -208,   781,   781,   781,
     781,   781,   781,   781,   781,   781,   781,   781,   781,   781,
     781,   781,   781,   781,   781,   781,   781,  -208,  -208,   447,
    -208,  -208,   871,   660,  -208,    56,  -208,    90,  -208,  1090,
    -208,   329,  -208,  -208,  -208,  -208,  -208,    21,  -208,  -208,
    -208,   781,    22,  -208,   252,  -208,  -208,   271,   518,  -208,
     113,   120,   123,   273,   589,  -208,  -208,  -208,  1012,   134,
    -208,   781,  -208,  -208,   126,  -208,   148,  -208,  -208,  -208,
    -208,  -208,    35,    35,   147,   147,   210,   210,   210,   210,
       9,     9,   218,   191,   192,   192,   263,    -4,  -208,  -208,
    -208,   284,   287,  -208,   286,    90,  1054,   710,  -208,  -208,
    -208,   482,  -208,  -208,    55,  -208,   781,  -208,  -208,   518,
     518,   518,   781,   731,  -208,  -208,   781,  -208,   781,  -208,
    -208,  -208,  -208,   292,  -208,   291,  -208,  -208,  -208,  -208,
     283,  -208,  -208,   128,   518,   149,  -208,  -208,  -208,  -208,
     518,   274,  -208,   518,  -208,  -208,  -208
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   132,   104,    88,    89,    90,    91,    92,    94,    95,
      96,    97,   100,   101,    98,    99,   128,   129,    93,   107,
     108,     0,     0,   139,   207,     0,    78,    80,   102,     0,
     103,    82,     0,   131,     0,     0,   204,   206,   123,     0,
       0,   143,   141,   140,    76,     0,    84,    86,    79,    81,
     106,    83,     0,   186,     0,   211,     0,     0,     0,   130,
       1,   205,     0,   126,     0,   124,   133,   144,   142,     0,
      77,     0,   209,     0,     0,     2,     3,     4,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    22,    23,    24,    25,    26,    27,   190,
     182,     6,    16,    28,     0,    30,    34,    37,    40,    45,
      48,    50,    52,    54,    56,    58,    60,    73,     0,   188,
     173,   174,     0,     0,   175,   176,   177,   178,    86,   187,
     210,   152,   138,   151,     0,   145,   147,     0,     2,   135,
      28,    75,     0,     0,     0,     0,   121,    85,     0,   168,
      87,   208,   113,     0,   109,     0,   115,     0,     0,    20,
       0,    17,    18,     0,     0,     0,     0,     0,     0,     0,
       0,   200,   201,   202,     0,     0,   154,     0,     0,    12,
      13,     0,     0,     0,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    62,     0,    19,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   191,   184,     0,
     183,   189,     0,     0,   149,   156,   150,   157,   136,     0,
     137,     0,   134,   122,   127,   125,   171,     0,   112,   105,
     110,     0,     0,   116,   118,   114,   179,     0,     0,   181,
       0,     0,     0,     0,     0,   199,   203,     5,     0,   156,
     155,     0,    11,     8,     0,    14,     0,    10,    61,    31,
      32,    33,    35,    36,    38,    39,    43,    44,    41,    42,
      46,    47,    49,    51,    53,    55,    57,     0,    74,   185,
     164,     0,     0,   160,     0,   158,     0,     0,   146,   148,
     153,     0,   169,   119,     0,   111,     0,    21,   180,     0,
       0,     0,     0,     0,    29,     9,     0,     7,     0,   165,
     159,   161,   166,     0,   162,     0,   170,   172,   117,   120,
     192,   194,   195,     0,     0,     0,    15,    59,   167,   163,
       0,     0,   197,     0,   193,   196,   198
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -208,  -208,  -208,  -208,   -42,  -208,   -76,    39,    40,    47,
      38,   150,   153,  -208,    50,   144,  -208,   -49,   -66,  -208,
     -68,   -41,     8,     0,  -208,   290,  -208,   -45,  -208,  -208,
    -208,   208,   -25,  -208,    58,  -208,   301,   221,   -13,   -21,
     -31,     2,  -208,   -55,  -208,   136,  -208,   209,  -121,  -207,
    -128,  -208,   -73,  -208,    69,    85,   267,  -158,  -208,  -208,
    -208,  -208,   350,  -208
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,   101,   102,   264,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   195,
     118,   142,    53,    54,    45,    46,    26,    27,    28,    29,
     153,   154,   155,   242,   243,    30,    64,    65,    31,    32,
      33,    34,    43,   291,   135,   136,   137,   177,   292,   227,
     150,   237,   119,   120,   121,    56,   123,   124,   125,   126,
     127,    35,    36,    37
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      25,    40,   134,    59,    47,   149,    38,   214,    24,   141,
      41,   254,   226,   168,     1,     1,   140,     1,   295,    50,
     236,   204,   205,   174,   175,    42,    48,    49,   196,   152,
      67,    51,   141,   128,     1,    25,   159,   161,   162,   140,
     163,    16,    17,    24,    69,    68,    62,   152,   128,   216,
     221,   145,   295,   145,    63,   260,   216,   133,     1,     1,
      70,   156,   140,   216,   129,   217,   157,   176,    23,   146,
     215,   233,   256,    22,    22,    74,   222,   318,   223,   156,
      23,   129,   149,    23,   246,   206,   207,    39,   301,   304,
     175,   249,   175,    22,    44,   141,   313,   250,   251,   252,
      23,    55,   140,   234,   197,   305,   302,   152,   152,   198,
     199,   152,   224,   152,   266,   265,    72,    22,   222,   144,
     223,   269,   270,   271,    23,   130,    57,   238,    58,   268,
     129,   245,    73,   176,   244,   225,   241,   122,    66,   156,
     156,   164,   151,   156,   230,   156,   221,   287,   231,   257,
     288,   165,   296,   216,   297,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   327,   141,   308,   309,   258,   259,   223,
     216,   140,   294,   310,    23,   314,   311,   216,   170,   315,
     216,   341,   141,   316,    59,   216,   258,   166,   223,   140,
     303,    40,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   343,   317,   167,   216,   216,   200,   201,   140,
     202,   203,   133,   169,   225,   138,    76,    77,    78,   133,
      79,    80,   208,   209,   171,   149,   330,   331,   332,   272,
     273,   323,   274,   275,   333,   335,   280,   281,   141,   172,
     336,   276,   277,   278,   279,   140,   325,   141,   133,   210,
     259,   342,   284,   285,   140,   329,   194,   344,   211,   337,
     346,   212,    75,    76,    77,    78,   140,    79,    80,   213,
      71,   229,   228,   244,    92,   232,   248,   139,   253,   255,
      93,    94,    95,    96,    97,    98,   133,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,   261,    19,    20,    21,   262,    81,
      82,    83,   267,    84,    85,    86,    87,    88,    89,    90,
      91,    92,   300,   306,   307,   312,   340,    93,    94,    95,
      96,    97,    98,    75,    76,    77,    78,   319,    79,    80,
     320,   321,    99,    52,   100,   338,   339,   345,   286,   147,
     282,   240,   328,   143,   283,   299,   235,   247,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    61,    19,    20,    21,   219,
      81,    82,    83,     0,    84,    85,    86,    87,    88,    89,
      90,    91,    92,     0,   131,     0,     0,     0,    93,    94,
      95,    96,    97,    98,    75,    76,    77,    78,     0,    79,
      80,     0,     0,    99,    52,   218,     0,     0,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,     0,    19,    20,    21,
      75,    76,    77,    78,     0,    79,    80,     0,     0,     0,
       0,    81,    82,    83,   132,    84,    85,    86,    87,    88,
      89,    90,    91,    92,     0,     0,     0,     0,     0,    93,
      94,    95,    96,    97,    98,   138,    76,    77,    78,     0,
      79,    80,     0,     0,    99,    52,   220,    81,    82,    83,
       0,    84,    85,    86,    87,    88,    89,    90,    91,    92,
       0,     0,     0,     0,     0,    93,    94,    95,    96,    97,
      98,    75,    76,    77,    78,     0,    79,    80,     0,     0,
      99,    52,   289,     0,     0,     0,     0,     0,     0,     0,
     138,    76,    77,    78,    92,    79,    80,     0,     0,     0,
      93,    94,    95,    96,    97,    98,     0,   138,    76,    77,
      78,     0,    79,    80,     0,     0,   148,   326,    81,    82,
      83,     0,    84,    85,    86,    87,    88,    89,    90,    91,
      92,   178,   179,   180,     0,     0,    93,    94,    95,    96,
      97,    98,   138,    76,    77,    78,     0,    79,    80,    92,
       0,    99,    52,     0,     0,    93,    94,    95,    96,    97,
      98,     0,     0,     0,     0,     0,    92,     0,     0,     0,
       0,   148,    93,    94,    95,    96,    97,    98,     0,   138,
      76,    77,    78,     0,    79,    80,   181,   173,   182,     0,
     183,     0,   138,    76,    77,    78,     0,    79,    80,     0,
       0,    92,     0,     0,     0,     0,     0,    93,    94,    95,
      96,    97,    98,   138,    76,    77,    78,     2,    79,    80,
       0,     0,    99,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,     0,    19,    20,    21,    92,   263,
       0,     0,     0,     0,    93,    94,    95,    96,    97,    98,
       0,    92,     0,     0,     0,     0,     0,    93,    94,    95,
      96,    97,    98,   138,    76,    77,    78,     0,    79,    80,
       0,     0,    92,     0,     0,   293,     0,     0,    93,    94,
      95,    96,    97,    98,   138,    76,    77,    78,     0,    79,
      80,     0,     0,     0,     0,     0,   138,    76,    77,    78,
       0,    79,    80,     0,     0,     0,     0,     0,   138,    76,
      77,    78,     0,    79,    80,     0,     0,     0,     0,     0,
       0,     0,    92,     0,     0,   324,     0,     0,    93,    94,
      95,    96,    97,    98,   138,    76,    77,    78,     0,    79,
      80,     0,     0,    92,   334,     0,     0,     0,     0,    93,
      94,    95,    96,    97,    98,   158,     0,     0,     0,     0,
       0,    93,    94,    95,    96,    97,    98,   160,     0,     0,
       0,     0,     0,    93,    94,    95,    96,    97,    98,    60,
       0,     0,     1,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,     0,     0,     0,     0,     0,    93,
      94,    95,    96,    97,    98,     0,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,     1,    19,    20,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    22,     0,     0,     0,     0,     0,     0,    23,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,     1,    19,    20,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   222,   290,   223,     0,     0,     0,     0,
      23,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,     2,    19,
      20,    21,     0,     0,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    22,    19,    20,    21,     0,
       0,     0,    23,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
       0,    19,    20,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   239,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,     0,    19,    20,    21,    71,     0,    52,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,     0,    19,    20,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    52,     0,   258,   290,   223,     0,     0,     0,
       0,    23,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,     0,
      19,    20,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   322,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,     0,    19,    20,    21,   298,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,     2,    19,    20,
      21,     0,     0,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,     0,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
       0,    22,    57,    34,    25,    71,     3,    17,     0,    58,
      23,   169,   133,    86,     3,     3,    58,     3,   225,     3,
     148,    12,    13,    91,    92,    23,    26,    27,   104,    74,
      43,    31,    81,    54,     3,    35,    78,    79,    80,    81,
      81,    42,    43,    35,    67,    43,    84,    92,    69,    67,
     123,    67,   259,    67,     3,   176,    67,    57,     3,     3,
      83,    74,   104,    67,    56,    83,    81,    92,    69,    85,
      80,    85,    83,    62,    62,    84,    62,    81,    64,    92,
      69,    73,   148,    69,   157,    76,    77,    84,    67,    67,
     158,   164,   160,    62,    83,   144,   254,   165,   166,   167,
      69,    32,   144,   144,    69,    83,    85,   152,   153,    74,
      75,   156,   133,   158,   182,   181,    47,    62,    62,    82,
      64,   197,   198,   199,    69,    56,    62,   152,    64,   195,
     122,   156,    47,   158,   155,   133,    81,    52,    63,   152,
     153,    81,    73,   156,    63,   158,   219,   215,    67,    63,
     216,    62,    62,    67,    64,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   301,   223,   248,    63,    62,   176,    64,
      67,   223,   223,    63,    69,   261,    63,    67,     3,    63,
      67,    63,   241,    67,   225,    67,    62,    62,    64,   241,
     241,   222,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    63,    65,    62,    67,    67,    70,    71,   261,
      10,    11,   222,    62,   222,     3,     4,     5,     6,   229,
       8,     9,    14,    15,    83,   301,   309,   310,   311,   200,
     201,   296,   202,   203,   312,   313,   208,   209,   297,    83,
     316,   204,   205,   206,   207,   297,   297,   306,   258,    68,
     258,   334,   212,   213,   306,   306,    82,   340,    78,   318,
     343,    79,     3,     4,     5,     6,   318,     8,     9,    16,
      82,    67,    63,   304,    62,    65,    81,    65,    55,    83,
      68,    69,    70,    71,    72,    73,   296,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    63,    46,    47,    48,     3,    50,
      51,    52,     3,    54,    55,    56,    57,    58,    59,    60,
      61,    62,     3,    81,    63,    62,    53,    68,    69,    70,
      71,    72,    73,     3,     4,     5,     6,    63,     8,     9,
      63,    65,    83,    84,    85,    63,    65,    83,   214,    69,
     210,   153,   304,    62,   211,   229,   145,   158,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    35,    46,    47,    48,   122,
      50,    51,    52,    -1,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    -1,     3,    -1,    -1,    -1,    68,    69,
      70,    71,    72,    73,     3,     4,     5,     6,    -1,     8,
       9,    -1,    -1,    83,    84,    85,    -1,    -1,    -1,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    -1,    46,    47,    48,
       3,     4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,
      -1,    50,    51,    52,    63,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    -1,    -1,    -1,    -1,    -1,    68,
      69,    70,    71,    72,    73,     3,     4,     5,     6,    -1,
       8,     9,    -1,    -1,    83,    84,    85,    50,    51,    52,
      -1,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      -1,    -1,    -1,    -1,    -1,    68,    69,    70,    71,    72,
      73,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      83,    84,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,    62,     8,     9,    -1,    -1,    -1,
      68,    69,    70,    71,    72,    73,    -1,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    84,    85,    50,    51,
      52,    -1,    54,    55,    56,    57,    58,    59,    60,    61,
      62,     7,     8,     9,    -1,    -1,    68,    69,    70,    71,
      72,    73,     3,     4,     5,     6,    -1,     8,     9,    62,
      -1,    83,    84,    -1,    -1,    68,    69,    70,    71,    72,
      73,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      -1,    84,    68,    69,    70,    71,    72,    73,    -1,     3,
       4,     5,     6,    -1,     8,     9,    62,    83,    64,    -1,
      66,    -1,     3,     4,     5,     6,    -1,     8,     9,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    68,    69,    70,
      71,    72,    73,     3,     4,     5,     6,    28,     8,     9,
      -1,    -1,    83,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    -1,    46,    47,    48,    62,    63,
      -1,    -1,    -1,    -1,    68,    69,    70,    71,    72,    73,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    68,    69,    70,
      71,    72,    73,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,    62,    -1,    -1,    65,    -1,    -1,    68,    69,
      70,    71,    72,    73,     3,     4,     5,     6,    -1,     8,
       9,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
      -1,     8,     9,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    65,    -1,    -1,    68,    69,
      70,    71,    72,    73,     3,     4,     5,     6,    -1,     8,
       9,    -1,    -1,    62,    63,    -1,    -1,    -1,    -1,    68,
      69,    70,    71,    72,    73,    62,    -1,    -1,    -1,    -1,
      -1,    68,    69,    70,    71,    72,    73,    62,    -1,    -1,
      -1,    -1,    -1,    68,    69,    70,    71,    72,    73,     0,
      -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    68,
      69,    70,    71,    72,    73,    -1,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,     3,    46,    47,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    69,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,     3,    46,    47,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    63,    64,    -1,    -1,    -1,    -1,
      69,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    28,    46,
      47,    48,    -1,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    62,    46,    47,    48,    -1,
      -1,    -1,    69,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      -1,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    -1,    46,    47,    48,    82,    -1,    84,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    -1,    46,    47,
      48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    62,    63,    64,    -1,    -1,    -1,
      -1,    69,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    -1,
      46,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    -1,    46,    47,    48,    49,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    28,    46,    47,
      48,    -1,    -1,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    -1,    46,    47,    48
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    46,
      47,    48,    62,    69,   108,   109,   112,   113,   114,   115,
     121,   124,   125,   126,   127,   147,   148,   149,     3,    84,
     125,   124,   127,   128,    83,   110,   111,   125,   109,   109,
       3,   109,    84,   108,   109,   140,   141,    62,    64,   126,
       0,   148,    84,     3,   122,   123,    63,   124,   127,    67,
      83,    82,   140,   141,    84,     3,     4,     5,     6,     8,
       9,    50,    51,    52,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    68,    69,    70,    71,    72,    73,    83,
      85,    87,    88,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   106,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   125,   108,
     140,     3,    63,   109,   129,   130,   131,   132,     3,    65,
      90,   103,   107,   122,    82,    67,    85,   111,    84,   104,
     136,   140,   113,   116,   117,   118,   124,    81,    62,    90,
      62,    90,    90,   107,    81,    62,    62,    62,   138,    62,
       3,    83,    83,    83,   106,   106,   118,   133,     7,     8,
       9,    62,    64,    66,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    82,   105,    92,    69,    74,    75,
      70,    71,    10,    11,    12,    13,    76,    77,    14,    15,
      68,    78,    79,    16,    17,    80,    67,    83,    85,   142,
      85,   138,    62,    64,   125,   127,   134,   135,    63,    67,
      63,    67,    65,    85,   107,   123,   136,   137,   118,    85,
     117,    81,   119,   120,   125,   118,   138,   133,    81,   138,
     106,   106,   106,    55,   143,    83,    83,    63,    62,   127,
     134,    63,     3,    63,    89,   104,   106,     3,   104,    92,
      92,    92,    93,    93,    94,    94,    95,    95,    95,    95,
      96,    96,    97,    98,   100,   100,   101,   106,   104,    85,
      63,   129,   134,    65,   107,   135,    62,    64,    49,   131,
       3,    67,    85,   107,    67,    83,    81,    63,   138,    63,
      63,    63,    62,   143,    92,    63,    67,    65,    81,    63,
      63,    65,    63,   129,    65,   107,    85,   136,   120,   107,
     138,   138,   138,   106,    63,   106,   104,   103,    63,    65,
      53,    63,   138,    63,   138,    83,   138
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
     109,   109,   109,   109,   110,   110,   111,   111,   112,   112,
     112,   112,   112,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   114,   114,   115,   115,   116,
     116,   117,   118,   118,   118,   118,   119,   119,   120,   120,
     120,   121,   121,   121,   122,   122,   123,   123,   124,   124,
     125,   125,   126,   126,   126,   126,   126,   126,   126,   127,
     127,   127,   127,   128,   128,   129,   129,   130,   130,   131,
     131,   131,   132,   132,   133,   133,   134,   134,   134,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   136,   136,
     136,   137,   137,   138,   138,   138,   138,   138,   138,   139,
     139,   139,   140,   140,   140,   140,   141,   141,   142,   142,
     143,   143,   144,   144,   144,   145,   145,   145,   145,   146,
     146,   146,   146,   146,   147,   147,   148,   148,   149,   149,
     149,   149
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
       1,     1,     1,     1,     1,     5,     2,     1,     1,     1,
       2,     3,     2,     1,     2,     1,     1,     3,     1,     2,
       3,     4,     5,     2,     1,     3,     1,     3,     1,     1,
       2,     1,     1,     3,     4,     3,     4,     4,     3,     1,
       2,     2,     3,     1,     2,     1,     3,     1,     3,     2,
       2,     1,     1,     3,     1,     2,     1,     1,     2,     3,
       2,     3,     3,     4,     2,     3,     3,     4,     1,     3,
       4,     1,     3,     1,     1,     1,     1,     1,     1,     3,
       4,     3,     2,     3,     3,     4,     1,     2,     1,     2,
       1,     2,     5,     7,     5,     5,     7,     6,     7,     3,
       2,     2,     2,     3,     1,     2,     1,     1,     4,     3,
       3,     2
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
  case 62: /* assignment_operator: '='  */
#line 187 "grammar.y"
                    { (yyval.sval) = "="; /* No change to currentType */ }
#line 1675 "grammar.tab.c"
    break;

  case 63: /* assignment_operator: MUL_ASSIGN  */
#line 188 "grammar.y"
                    { (yyval.sval) = "*="; /* No change to currentType */ }
#line 1681 "grammar.tab.c"
    break;

  case 64: /* assignment_operator: DIV_ASSIGN  */
#line 189 "grammar.y"
                    { (yyval.sval) = "/="; /* No change to currentType */ }
#line 1687 "grammar.tab.c"
    break;

  case 65: /* assignment_operator: MOD_ASSIGN  */
#line 190 "grammar.y"
                    { (yyval.sval) = "%="; currentType = "INT"; }
#line 1693 "grammar.tab.c"
    break;

  case 66: /* assignment_operator: ADD_ASSIGN  */
#line 191 "grammar.y"
                    { (yyval.sval) = "+="; /* No change to currentType */ }
#line 1699 "grammar.tab.c"
    break;

  case 67: /* assignment_operator: SUB_ASSIGN  */
#line 192 "grammar.y"
                    { (yyval.sval) = "-="; /* No change to currentType */ }
#line 1705 "grammar.tab.c"
    break;

  case 68: /* assignment_operator: LEFT_ASSIGN  */
#line 193 "grammar.y"
                    { (yyval.sval) = "<<="; currentType = "INT"; }
#line 1711 "grammar.tab.c"
    break;

  case 69: /* assignment_operator: RIGHT_ASSIGN  */
#line 194 "grammar.y"
                    { (yyval.sval) = ">>="; currentType = "INT"; }
#line 1717 "grammar.tab.c"
    break;

  case 70: /* assignment_operator: AND_ASSIGN  */
#line 195 "grammar.y"
                    { (yyval.sval) = "&="; currentType = "INT"; }
#line 1723 "grammar.tab.c"
    break;

  case 71: /* assignment_operator: XOR_ASSIGN  */
#line 196 "grammar.y"
                    { (yyval.sval) = "^="; currentType = "INT"; }
#line 1729 "grammar.tab.c"
    break;

  case 72: /* assignment_operator: OR_ASSIGN  */
#line 197 "grammar.y"
                    { (yyval.sval) = "|="; currentType = "INT"; }
#line 1735 "grammar.tab.c"
    break;

  case 93: /* type_specifier: VOID  */
#line 242 "grammar.y"
                 { currentType = "VOID"; }
#line 1741 "grammar.tab.c"
    break;

  case 94: /* type_specifier: CHAR  */
#line 243 "grammar.y"
                 { currentType = "CHAR"; }
#line 1747 "grammar.tab.c"
    break;

  case 95: /* type_specifier: SHORT  */
#line 244 "grammar.y"
                 { currentType = "SHORT"; }
#line 1753 "grammar.tab.c"
    break;

  case 96: /* type_specifier: INT  */
#line 245 "grammar.y"
                 { currentType = "INT"; }
#line 1759 "grammar.tab.c"
    break;

  case 97: /* type_specifier: LONG  */
#line 246 "grammar.y"
                 { currentType = "LONG"; }
#line 1765 "grammar.tab.c"
    break;

  case 98: /* type_specifier: FLOAT  */
#line 247 "grammar.y"
                 { currentType = "FLOAT"; }
#line 1771 "grammar.tab.c"
    break;

  case 99: /* type_specifier: DOUBLE  */
#line 248 "grammar.y"
                 { currentType = "DOUBLE"; }
#line 1777 "grammar.tab.c"
    break;

  case 100: /* type_specifier: SIGNED  */
#line 249 "grammar.y"
                 { currentType = "SIGNED"; }
#line 1783 "grammar.tab.c"
    break;

  case 101: /* type_specifier: UNSIGNED  */
#line 250 "grammar.y"
                   { currentType = "UNSIGNED"; }
#line 1789 "grammar.tab.c"
    break;

  case 102: /* type_specifier: struct_or_union_specifier  */
#line 251 "grammar.y"
                                    {  }
#line 1795 "grammar.tab.c"
    break;

  case 103: /* type_specifier: enum_specifier  */
#line 252 "grammar.y"
                         { currentType = "ENUM"; }
#line 1801 "grammar.tab.c"
    break;

  case 104: /* type_specifier: TYPE_NAME  */
#line 253 "grammar.y"
                    { currentType = "TYPE_NAME"; }
#line 1807 "grammar.tab.c"
    break;

  case 105: /* struct_or_union_specifier: struct_or_union IDENTIFIER '{' struct_declaration_list '}'  */
#line 259 "grammar.y"
        {
            currentType = string((yyvsp[-4].sval)) + " " + string((yyvsp[-3].sval)); // Set currentType to "struct Point" or "union Point"
            add_to_token_table((yyvsp[-3].sval), (yyvsp[-4].sval));                 // Add "Point" as a struct or union to the symbol table
        }
#line 1816 "grammar.tab.c"
    break;

  case 106: /* struct_or_union_specifier: struct_or_union IDENTIFIER  */
#line 264 "grammar.y"
        {
            currentType = string((yyvsp[-1].sval)) + " " + string((yyvsp[0].sval)); // Handle forward declaration of structs/unions
        }
#line 1824 "grammar.tab.c"
    break;

  case 107: /* struct_or_union: STRUCT  */
#line 271 "grammar.y"
              { (yyval.sval) = "struct"; }
#line 1830 "grammar.tab.c"
    break;

  case 108: /* struct_or_union: UNION  */
#line 272 "grammar.y"
              { (yyval.sval) = "union"; }
#line 1836 "grammar.tab.c"
    break;

  case 132: /* direct_declarator: IDENTIFIER  */
#line 329 "grammar.y"
                     { 
		add_to_token_table((yyvsp[0].sval), currentType);
		(yyval.sval) = (yyvsp[0].sval); // Propagate the identifier up the parse tree
	}
#line 1845 "grammar.tab.c"
    break;

  case 133: /* direct_declarator: '(' declarator ')'  */
#line 333 "grammar.y"
                             { (yyval.sval) = (yyvsp[-1].sval); }
#line 1851 "grammar.tab.c"
    break;

  case 134: /* direct_declarator: direct_declarator '[' constant_expression ']'  */
#line 334 "grammar.y"
                                                        { 
		// For array types, you might want to append [] to the type
		string arrayType = currentType + "[]";
		add_to_token_table((yyvsp[-3].sval), arrayType);
		(yyval.sval) = (yyvsp[-3].sval);
	}
#line 1862 "grammar.tab.c"
    break;

  case 135: /* direct_declarator: direct_declarator '[' ']'  */
#line 340 "grammar.y"
                                    {
		string arrayType = currentType + "[]";
		add_to_token_table((yyvsp[-2].sval), arrayType);
		(yyval.sval) = (yyvsp[-2].sval);
	}
#line 1872 "grammar.tab.c"
    break;

  case 136: /* direct_declarator: direct_declarator '(' parameter_type_list ')'  */
#line 345 "grammar.y"
                                                        {
		// For function types, you might want to handle this differently
		string funcType = currentType + " function";
		add_to_token_table((yyvsp[-3].sval), funcType);
		(yyval.sval) = (yyvsp[-3].sval);
	}
#line 1883 "grammar.tab.c"
    break;

  case 137: /* direct_declarator: direct_declarator '(' identifier_list ')'  */
#line 351 "grammar.y"
                                                    {
		string funcType = currentType + " function";
		add_to_token_table((yyvsp[-3].sval), funcType);
		(yyval.sval) = (yyvsp[-3].sval);
	}
#line 1893 "grammar.tab.c"
    break;

  case 138: /* direct_declarator: direct_declarator '(' ')'  */
#line 356 "grammar.y"
                                    {
		string funcType = currentType + " function";
		add_to_token_table((yyvsp[-2].sval), funcType);
		(yyval.sval) = (yyvsp[-2].sval);
	}
#line 1903 "grammar.tab.c"
    break;


#line 1907 "grammar.tab.c"

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

#line 506 "grammar.y"


#include <iostream>
#include <fstream>

extern FILE *yyin;
extern int yyparse();

void yyerror(const char *s) {
    extern int line;
    fprintf(stderr, "Error: %s at line %d\n", s, line);
}

// Define the global variables here
bool iserror = false;
int line = 1;
vector<pair<string, int>> error;
unordered_map<string, string> symtab;
vector<string> program;

// Define the new symbol table

unordered_map<string, string> new_symtab;

void add_to_token_table(string token, string type) {
    new_symtab[token] = type;
}

int main(int argc, char *argv[]) {
    string inputFileName, outputFileName;

    // Parsing command-line arguments
    for (int i = 1; i < argc; i++) {
        if (string(argv[i]) == "-i" && i + 1 < argc) {
            inputFileName = argv[i + 1];
            i++; // Skip next argument
        } else if (string(argv[i]) == "-o" && i + 1 < argc) {
            outputFileName = argv[i + 1];
            i++; // Skip next argument
        }
    }

    // Check if both input and output files are specified
    if (inputFileName.empty() || outputFileName.empty()) {
        cerr << "Usage: " << argv[0] << " -i <input_file> -o <output_file>\n";
        return 1;
    }

    FILE *inputFile = fopen(inputFileName.c_str(), "r");
    ofstream outputFile(outputFileName);

    if (!inputFile || !outputFile) {
        cerr << "Error opening files!" << endl;
        return 1;
    }

    yyin = inputFile;  // Set yyin to read from the file
    if (yyparse() == 0) {
         cout << "Parsing successful!" << endl;
    } else {
        cerr << "Parsing failed!" << endl;
    }
       // Check if there are errors
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

        outputFile << "\nNew Symbol Table (Tokens and Types):\n";
        outputFile << "-------------------------------------------------------------------------------\n";
        outputFile << "| Token                 | Type                  |\n";
        outputFile << "-------------------------------------------------------------------------------\n";

        for (const auto &entry : new_symtab) {
            outputFile << "| " << setw(20) << left << entry.first
                       << " | " << setw(20) << left << entry.second << "\n";
        }

        outputFile << "-------------------------------------------------------------------------------\n";
        outputFile << '\n';
        outputFile << "whole program after separation:\n";
        for (const auto &i : program) {
            outputFile << "|" << i << "|\n";
        }

    }

    fclose(inputFile);
    outputFile.close();

    cout << "Lexical analysis completed. Check '" << outputFileName << "' for results." << endl;

    return 0;
}
