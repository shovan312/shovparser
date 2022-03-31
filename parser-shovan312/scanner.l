%{
#include <bits/stdc++.h>
#include "ast.h"
#include "parser.tab.hh"
using namespace std;
extern "C" int yylex();
extern union Node yylval;
int lineno = 1;
%}


digit [0-9]
letter [a-zA-Z_]
alpha [0-9a-zA-Z_]
alpha_num {alpha}{digit}
decimal_literal {digit}+
character   \'[ -~]\'
string (\\n|\\t|\\'|\\\\|\\\"|[^\\"'])
hex_digit {digit}|[a-fA-F]
hex_literal "0x"{hex_digit}+

%%

"if" { return IF; }
"elif" { return ELIF; }
"else" { return ELSE; }
"for" { return FOR; }
"while" { return WHILE; }
"return" { return RETURN; }

"break" { return BREAK; }
"continue" { return CONTINUE; }

"int" { return INT_TYPE; }
"unsigned" { return UNSIGNED_TYPE; }
"char" { return CHAR_TYPE; }
"bool" { return BOOLEAN_TYPE; }
"void" { return VOID_TYPE; }

"=" { return ASSIGN; }
"," { return COMMA; }
";" { return SEMICOLON; }
":" { return COLON; }
"?" { return Q_MARK; }
"(" { return OPEN_PAREN; }
")" { return CLOSE_PAREN; }
"[" { return OPEN_BRACKET; }
"]" { return CLOSE_BRACKET; }
"{" { return OPEN_BRACE; }
"}" { return CLOSE_BRACE; }
"+" { yylval.value = strdup(yytext); return PLUS; }
"-" { yylval.value = strdup(yytext); return MINUS; }
"*" { yylval.value = strdup(yytext); return MULT; }
"/" { yylval.value = strdup(yytext); return DIV; }
"%" { yylval.value = strdup(yytext); return MOD; }
"<" { yylval.value = strdup(yytext); return LT; }
">" { yylval.value = strdup(yytext); return GT; }
"<=" { yylval.value = strdup(yytext); return LE; }
">=" { yylval.value = strdup(yytext); return GE; }
"==" { yylval.value = strdup(yytext); return EQ; }
"!=" { yylval.value = strdup(yytext); return NEQ; }
"&&" { yylval.value = strdup(yytext); return AND; }
"||" { yylval.value = strdup(yytext); return OR; }
"!" { yylval.value = strdup(yytext); return NOT; }
"^" { yylval.value = strdup(yytext); return XOR; }

{decimal_literal}|{hex_literal} { yylval.number = atoi(yytext); return INT_LITERAL; }
"true"|"false" { yylval.value = strdup(yytext); return BOOL_LITERAL; }
{letter}{alpha}* { yylval.value = strdup(yytext); return ID; }
{character} { yylval.value = strdup(yytext); return CHAR_LITERAL; }
\"{string}*\" { yylval.value = strdup(yytext); return STRING_LITERAL; }

[ \t\v\r\n]+ { /* ignore whitespace */ }
. { printf("Mystery character %c\n", *yytext); }
%%