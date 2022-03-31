/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
