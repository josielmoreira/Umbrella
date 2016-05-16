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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    VAR = 258,
    ID = 259,
    ATB = 260,
    L_PAR = 261,
    R_PAR = 262,
    EQLS = 263,
    N_EQLS = 264,
    L_BRAC = 265,
    R_BRAC = 266,
    L_CMNT_BLK = 267,
    R_CMNT_BLK = 268,
    CMNT = 269,
    L_BRACK = 270,
    R_BRACK = 271,
    INT = 272,
    FLOAT = 273,
    SUM = 274,
    SUB = 275,
    MULT = 276,
    DIV = 277,
    ATB_SUM = 278,
    ATB_SUB = 279,
    ATB_MULT = 280,
    ATB_DIV = 281,
    INCR = 282,
    DECR = 283,
    MOD = 284,
    LSSR_EQL = 285,
    GRTR_EQL = 286,
    GRTR = 287,
    LSSR = 288,
    OR = 289,
    AND = 290,
    NOT = 291,
    ASPAS = 292,
    ENC_PUB = 293,
    COLLON = 294,
    ENC_PRV = 295,
    DOT = 296,
    COMMA = 297,
    END_CMMD = 298,
    STRUCT = 299,
    RETURN = 300,
    MAIN = 301,
    BRK = 302,
    NEW = 303,
    SWTC = 304,
    CASE = 305,
    IF = 306,
    FOR = 307,
    WHILE = 308,
    DO = 309,
    FORALL = 310,
    TYP_VOID = 311,
    TYP_INT = 312,
    TYP_DBLE = 313,
    TYP_FLOAT = 314,
    TYP_STRG = 315,
    TYP_CHAR = 316
  };
#endif
/* Tokens.  */
#define VAR 258
#define ID 259
#define ATB 260
#define L_PAR 261
#define R_PAR 262
#define EQLS 263
#define N_EQLS 264
#define L_BRAC 265
#define R_BRAC 266
#define L_CMNT_BLK 267
#define R_CMNT_BLK 268
#define CMNT 269
#define L_BRACK 270
#define R_BRACK 271
#define INT 272
#define FLOAT 273
#define SUM 274
#define SUB 275
#define MULT 276
#define DIV 277
#define ATB_SUM 278
#define ATB_SUB 279
#define ATB_MULT 280
#define ATB_DIV 281
#define INCR 282
#define DECR 283
#define MOD 284
#define LSSR_EQL 285
#define GRTR_EQL 286
#define GRTR 287
#define LSSR 288
#define OR 289
#define AND 290
#define NOT 291
#define ASPAS 292
#define ENC_PUB 293
#define COLLON 294
#define ENC_PRV 295
#define DOT 296
#define COMMA 297
#define END_CMMD 298
#define STRUCT 299
#define RETURN 300
#define MAIN 301
#define BRK 302
#define NEW 303
#define SWTC 304
#define CASE 305
#define IF 306
#define FOR 307
#define WHILE 308
#define DO 309
#define FORALL 310
#define TYP_VOID 311
#define TYP_INT 312
#define TYP_DBLE 313
#define TYP_FLOAT 314
#define TYP_STRG 315
#define TYP_CHAR 316

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
