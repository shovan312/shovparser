bison -d parser.yy
flex scanner.l
g++ -g -std=c++11 parser.tab.cc lex.yy.c ast.cpp -lfl -o parser
