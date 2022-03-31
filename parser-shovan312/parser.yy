%{
#include <stdio.h>
#include "ast.h"
#define YYDEBUG 1
extern "C" int yylex();

extern union Node yylval;
extern int yyparse();
class Program* head = NULL;
void yyerror(const char *s);
using namespace std;
%}

/* declare tokens */

%start program

%token <number> INT_LITERAL
%token <value> STRING_LITERAL BOOL_LITERAL CHAR_LITERAL ID
%token COMMA SEMICOLON
%token OPEN_PAREN CLOSE_PAREN
%token OPEN_BRACKET CLOSE_BRACKET
%token OPEN_BRACE CLOSE_BRACE
%token ASSIGN
%token IF ELSE ELIF FOR WHILE RETURN BREAK CONTINUE
%token INT_TYPE BOOLEAN_TYPE VOID_TYPE CHAR_TYPE UNSIGNED_TYPE

%left Q_MARK COLON
%left <value> OR
%left <value> XOR
%left <value> AND
%left <value> EQ NEQ
%left <value> LT LE GE GT
%left <value> PLUS MINUS
%left <value> MULT DIV MOD

%nonassoc <value> NOT

%type <program> program
%type <varlist> variable_list
%type <funclist> function_list
%type <expr> expr
%type <var> variable
%type <literal> literal
%type <funccall> function_call
%type <parlist> parameter_list
%type <function> function
%type <datatype> datatype
%type <block> block
%type <arglist> argument_list
%type <statement> statement
%type <statelist> statement_list
%type <assignstate> assignment_statement
%type <retstate> return_statement
%type <forstate> for_statement
%type <whilestate> while_statement
%type <elifstatelist> elif_statement_list
%type <ifstate> if_statement

%%
program: variable_list function_list
{
	$$ = new Program($1, $2);
	head = $$;
};

variable_list: /*nothing*/ {$$ = new VariableList();}
| variable_list variable SEMICOLON  {$$->push_back($2);}
;

function_list: /*nothing*/ {$$ = new FunctionList();}
| function function_list {$2->push_back($1); $$ = $2; /*change*/} 

expr: literal {$$ = $1;}
| ID {$$ = new Identifier(string($1));}
| expr PLUS expr { $$ = new BinaryExpression($1, string($2), $3); }
| expr MINUS expr { $$ = new BinaryExpression($1, string($2), $3); }
| expr DIV expr  { $$ = new BinaryExpression($1, string($2), $3); }
| expr MULT expr { $$ = new BinaryExpression($1, string($2), $3); }
| expr MOD expr { $$ = new BinaryExpression($1, string($2), $3); }
| expr AND expr { $$ = new BinaryExpression($1, string($2), $3); }
| expr OR expr { $$ = new BinaryExpression($1, string($2), $3); }
| expr XOR expr { $$ = new BinaryExpression($1, string($2), $3); }
| expr NOT expr { $$ = new BinaryExpression($1, string($2), $3); }
| expr EQ expr { $$ = new BinaryExpression($1, string($2), $3); }
| expr NEQ expr { $$ = new BinaryExpression($1, string($2), $3); }
| expr GT expr { $$ = new BinaryExpression($1, string($2), $3); }
| expr LT expr { $$ = new BinaryExpression($1, string($2), $3); }
| expr LE expr { $$ = new BinaryExpression($1, string($2), $3); }
| expr GE expr { $$ = new BinaryExpression($1, string($2), $3); }
| function_call {$$ = $1;}
| OPEN_PAREN expr CLOSE_PAREN {$$ = new EnclosedExpression($2);}
| expr Q_MARK expr COLON expr {$$ = new TernaryIfStatement($1, $3, $5);}
| ID OPEN_BRACKET expr CLOSE_BRACKET {$$ = new ArrayRef(new Identifier(string($1)), $3, NULL);}
| ID OPEN_BRACKET expr CLOSE_BRACKET OPEN_BRACKET expr CLOSE_BRACKET {$$ = new ArrayRef(new Identifier(string($1)), $3, $6); }

variable: datatype ID ASSIGN expr {$$ = new VariableInit($1, new Identifier(string($2)), $4); }
| datatype ID {$$ = new VariableInit($1, new Identifier(string($2)), NULL); }
| datatype ID OPEN_BRACKET INT_LITERAL CLOSE_BRACKET {$$ = new ArrayInit($1, new Identifier(string($2)), $4, 0); }
| datatype ID OPEN_BRACKET INT_LITERAL CLOSE_BRACKET OPEN_BRACKET INT_LITERAL CLOSE_BRACKET {$$ = new ArrayInit($1, new Identifier(string($2)), $4, $7); }


literal: CHAR_LITERAL {$$ = new CharLiteral($1);}
| INT_LITERAL {$$ = new IntLiteral($1);}
| BOOL_LITERAL {$$ = new BoolLiteral($1);}
| STRING_LITERAL {$$ = new StringLiteral($1);}

function_call: ID OPEN_PAREN parameter_list CLOSE_PAREN {$$ = new FunctionCall(new Identifier(string($1)), $3); }

parameter_list: /*nothing*/ {$$ = new ParameterList();}
| expr {$$ = new ParameterList(); $$->push_back($1);}
| expr COMMA parameter_list {$3->push_back($1), $$=$3; /*change*/}

function: datatype ID  OPEN_PAREN argument_list CLOSE_PAREN block {$$ = new FunctionInit($1, new Identifier(string($2)), $4, $6);}

datatype: INT_TYPE {$$ = new IntDatatype();}
| CHAR_TYPE {$$ = new CharDatatype();}
| BOOLEAN_TYPE {$$ = new BoolDatatype();}
| UNSIGNED_TYPE {$$ = new UnIntDatatype();}
| VOID_TYPE {$$ = new VoidDatatype();}

block: OPEN_BRACE variable_list statement_list CLOSE_BRACE {$$ = new Block($2, $3); }

argument_list: /*nothing*/ {$$ = new ArgList();}
| variable COMMA argument_list {$3->push_back($1); $$=$3; /*change*/}
| variable {$$ = new ArgList(); $$->push_back($1); }

statement: assignment_statement SEMICOLON {$$ = $1;}
| function_call SEMICOLON {$$ = $1; }
| return_statement {$$ = $1; }
| for_statement {$$ = $1; }
| while_statement {$$ = $1; }
| if_statement {$$ = $1; }
| block {$$ = $1; }

statement_list: /*nothing*/ {$$ = new StatementList();}
| statement statement_list {$2->push_back($1), $$=$2; /*change*/}

assignment_statement: ID ASSIGN expr {$$ = new AssignmentStatement(new Identifier(string($1)), NULL, NULL, $3);}
| ID OPEN_BRACKET expr CLOSE_BRACKET ASSIGN expr {$$ = new AssignmentStatement(new Identifier(string($1)), $3, NULL, $6);}
| ID OPEN_BRACKET expr CLOSE_BRACKET OPEN_BRACKET expr CLOSE_BRACKET ASSIGN expr {$$ = new AssignmentStatement(new Identifier(string($1)), $3, $6, $9);}

return_statement: RETURN expr SEMICOLON {$$ = new ReturnStatement($2);}
| RETURN SEMICOLON {$$ = new ReturnStatement(NULL);}

for_statement: FOR OPEN_PAREN variable SEMICOLON expr SEMICOLON assignment_statement CLOSE_PAREN block {$$ = new ForStatement($3, $5, $7, $9);}

while_statement: WHILE OPEN_PAREN expr CLOSE_PAREN block {$$ = new WhileStatement($3, $5); }

elif_statement_list: /*nothing*/ {$$ = new ElifStatement(NULL, NULL, NULL);}
| ELIF OPEN_PAREN expr CLOSE_PAREN block elif_statement_list {$$=new ElifStatement($3, $5, $6);}
| ELSE block {$$ = new ElifStatement(NULL, $2, NULL);}

if_statement: IF OPEN_PAREN expr CLOSE_PAREN block elif_statement_list {$$ = new IfStatement($3, $5, $6);}

%%
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