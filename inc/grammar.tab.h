/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_GRAMMAR_TAB_H_INCLUDED
# define YY_YY_GRAMMAR_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    SIZEOF = 258,                  /* SIZEOF  */
    IDENTIFIER = 259,              /* IDENTIFIER  */
    CONSTANT = 260,                /* CONSTANT  */
    STRING_LITERAL = 261,          /* STRING_LITERAL  */
    PTR_OP = 262,                  /* PTR_OP  */
    INC_OP = 263,                  /* INC_OP  */
    DEC_OP = 264,                  /* DEC_OP  */
    LEFT_OP = 265,                 /* LEFT_OP  */
    RIGHT_OP = 266,                /* RIGHT_OP  */
    LE_OP = 267,                   /* LE_OP  */
    GE_OP = 268,                   /* GE_OP  */
    EQ_OP = 269,                   /* EQ_OP  */
    NE_OP = 270,                   /* NE_OP  */
    AND_OP = 271,                  /* AND_OP  */
    OR_OP = 272,                   /* OR_OP  */
    MUL_ASSIGN = 273,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 274,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 275,              /* MOD_ASSIGN  */
    ADD_ASSIGN = 276,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 277,              /* SUB_ASSIGN  */
    LEFT_ASSIGN = 278,             /* LEFT_ASSIGN  */
    RIGHT_ASSIGN = 279,            /* RIGHT_ASSIGN  */
    AND_ASSIGN = 280,              /* AND_ASSIGN  */
    XOR_ASSIGN = 281,              /* XOR_ASSIGN  */
    OR_ASSIGN = 282,               /* OR_ASSIGN  */
    TYPE_NAME = 283,               /* TYPE_NAME  */
    TYPEDEF = 284,                 /* TYPEDEF  */
    EXTERN = 285,                  /* EXTERN  */
    STATIC = 286,                  /* STATIC  */
    AUTO = 287,                    /* AUTO  */
    REGISTER = 288,                /* REGISTER  */
    SIGNED = 289,                  /* SIGNED  */
    UNSIGNED = 290,                /* UNSIGNED  */
    CHAR = 291,                    /* CHAR  */
    SHORT = 292,                   /* SHORT  */
    LONG = 293,                    /* LONG  */
    INT = 294,                     /* INT  */
    FLOAT = 295,                   /* FLOAT  */
    DOUBLE = 296,                  /* DOUBLE  */
    VOID = 297,                    /* VOID  */
    BOOL = 298,                    /* BOOL  */
    CONST = 299,                   /* CONST  */
    VOLATILE = 300,                /* VOLATILE  */
    STRUCT = 301,                  /* STRUCT  */
    UNION = 302,                   /* UNION  */
    ENUM = 303,                    /* ENUM  */
    ELLIPSIS = 304,                /* ELLIPSIS  */
    CASE = 305,                    /* CASE  */
    DEFAULT = 306,                 /* DEFAULT  */
    IF = 307,                      /* IF  */
    ELSE = 308,                    /* ELSE  */
    SWITCH = 309,                  /* SWITCH  */
    WHILE = 310,                   /* WHILE  */
    DO = 311,                      /* DO  */
    FOR = 312,                     /* FOR  */
    GOTO = 313,                    /* GOTO  */
    CONTINUE = 314,                /* CONTINUE  */
    BREAK = 315,                   /* BREAK  */
    RETURN = 316                   /* RETURN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 34 "src/grammar.y"

	Node * node;
	int value;
	DeclarationSpecifiers * declaration_specifiers;
	Declaration * declaration;
	DeclarationList * declaration_list;
	Declarator * declarator;
	DeclaratorList * init_declarator_list;
	Pointer * pointer;
	DirectDeclarator * direct_declarator;
	Identifier * identifier;
	TypeQualifierList * type_qualifier_list;
	FunctionDefinition * function_definition;
	TypeSpecifier * type_specifier;
	Enumerator * enumerator;
	EnumeratorList * enumerator_list;
	StructDeclarationList * struct_declaration_list;
	StructDeclaration * struct_declaration;
	SpecifierQualifierList * specifier_qualifier_list;
	ParameterTypeList * parameter_type_list;
	ParameterDeclaration * parameter_declaration;
	DirectAbstractDeclarator * direct_abstract_declarator;
	AbstractDeclarator * abstract_declarator;
	Constant *constant;
	StringLiteral *string_literal;
	TopLevelExpression* top_level_expression;
	AssignmentExpression* assignment_expression;
	ArgumentExprList* argument_expression_list;
	PostfixExpression* postfix_expression;
	UnaryExpression* unary_expression;
	CastExpression* cast_expression;
	MultiplicativeExpression* multiplicative_expression;
	AdditiveExpression* additive_expression;
	ShiftExpression* shift_expression;
	RelationalExpression* relational_expression;
	EqualityExpression* equality_expression;
	AndExpression* and_expression;
	ExclusiveorExpression* exclusive_or_expression;
	InclusiveorExpression* inclusive_or_expression;
	Logical_andExpression* logical_and_expression;
	Logical_orExpression* logical_or_expression;
	ConditionalExpression* conditional_expression;
	Expression* expression;

#line 170 "grammar.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_GRAMMAR_TAB_H_INCLUDED  */
