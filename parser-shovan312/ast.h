#ifndef AST_H
#define AST_H

#include <bits/stdc++.h>
using namespace std;


class Expression{
public:
	int expression_type; //1 : ID, 2: Literal, 3: Binary, 4: Enclosed, 5: Ternary, 6: ArrayRef, 7: FunctionCall
	Expression() = default;
	virtual ~Expression() = default;
};

class Identifier : public Expression{
public:
	string value;
	Identifier(string);
};

class Variable{
public:
	int variable_type; //1 : single variable or 2: array
	class Identifier *name;
	Variable() = default;
	virtual ~Variable() = default;
};

class VariableInit : public Variable{
public:
	class Datatype *type;
	class Expression *expr;
	VariableInit(class Datatype *, class Identifier *, class Expression *);
};

class VariableList
{
public:
	vector<class Variable *> variable_list;
	VariableList() = default;
	void push_back(class Variable *);
};

class ArrayInit : public Variable{
public:
	class Datatype *type;
	int len1;
	int len2;
	ArrayInit(class Datatype *, class Identifier *, int, int);
};

class Literal : public Expression{
public:
	int literal_type; //1: int, 2: char, 3: string, 4: bool
	Literal() = default;
	virtual ~Literal() = default;
};

class IntLiteral : public Literal
{
public:
	int value;
	IntLiteral(int);
};

class CharLiteral : public Literal
{
public:
	char value;
	CharLiteral(string);
};

class StringLiteral : public Literal
{
public:
	string value;
	StringLiteral(string);
};

class BoolLiteral : public Literal
{
public:
	string value;
	BoolLiteral(string);
};

class Datatype{
public:
	int datatype_type;
	Datatype() = default;
	virtual ~Datatype() = default;
};

class IntDatatype : public Datatype{
public:
	IntDatatype() {this->datatype_type = 1;}
};

class CharDatatype : public Datatype{
public:
	CharDatatype() {this->datatype_type = 2;}
};

class BoolDatatype : public Datatype{
public:
	BoolDatatype() {this->datatype_type = 3;}
};

class UnIntDatatype : public Datatype{
public:
	UnIntDatatype() {this->datatype_type = 4;}
};

class VoidDatatype : public Datatype{
public:
	VoidDatatype() {this->datatype_type = 5;}
};

class BinaryExpression : public Expression{
public:
	class Expression *expr1;
	string op;
	class Expression *expr2;
	BinaryExpression(class Expression *, string, class Expression *);
};

class EnclosedExpression : public Expression{
public:
	class Expression *expr;
	EnclosedExpression(class Expression *);
};

class TernaryIfStatement : public Expression{
public:
	class Expression *condition;
	class Expression *true_branch;
	class Expression *false_branch;
	TernaryIfStatement(class Expression *, class Expression *, class Expression *);
};

class ArrayRef : public Expression{
public:
	class Identifier *name;
	class Expression *ind1;
	class Expression *ind2;
	ArrayRef(class Identifier *, class Expression *, class Expression *);
};

class ArgList{
public:
	vector<class Variable *> arg_list;
	ArgList() = default;
	void push_back(class Variable *);
};

class ParameterList{
public:
	vector<class Expression *> parameters;
	ParameterList() = default;
	void push_back(class Expression *);
};

class Statement{
public:
	int statement_type; //1: assgn, 2: fcal, 3: ret, 4: block, 5: for, 6: while, 7: elif, 8: if
	Statement() = default;
	virtual ~Statement() = default;
};

class AssignmentStatement : public Statement{
public:
	class Identifier *name;
	class Expression *ind1;
	class Expression *ind2;
	class Expression *expression;
	AssignmentStatement(class Identifier *, class Expression *, class Expression *, class Expression *);
};

class FunctionInit{
public:
	class Datatype *type;
	class Identifier *name;
	class ArgList *arglist;
	class Block *block;
	FunctionInit(class Datatype *, class Identifier *, class ArgList *, class Block *);
};

class FunctionCall : public Statement, public Expression{
public:
	class Identifier *name;
	class ParameterList *paramlist;
	FunctionCall(class Identifier *, class ParameterList *); 
};

class FunctionList{
public:
	vector<class FunctionInit *> function_list;
	FunctionList() = default;
	void push_back(class FunctionInit *);
};

class ReturnStatement : public Statement{
public:
	class Expression *expr;
	ReturnStatement(class Expression *);
};

class Block : public Statement{
public:
	class VariableList *varlist;
	class StatementList *statementlist;
	Block(class VariableList *, class StatementList *);
};

class ForStatement : public Statement{
public:
	class Variable *var;
	class Expression *condition;
	class AssignmentStatement *assignment;
	class Block *block;
	ForStatement(class Variable *, class Expression *, class AssignmentStatement *, class Block *);
};

class WhileStatement : public Statement{
public:
	class Expression *condition;
	class Block *block;
	WhileStatement(class Expression *, class Block *);
};

class ElifStatement : public Statement{
public:
	class Expression *condition;
	class Block *block;
	class ElifStatement *elifstatement;
	ElifStatement(class Expression *, class Block *, class ElifStatement *);
};

class IfStatement : public Statement{
public:
	class Expression *condition;
	class Block *block;
	class ElifStatement *elifstatement;
	IfStatement(class Expression *, class Block *, class ElifStatement *);
};

class StatementList
{
public:
	vector<class Statement *> statement_list;
	StatementList() = default;
	void push_back(class Statement *);
};


union Node
{
	int number;
	char *value;
	class Program *program{};;
	class VariableList *varlist;
	class FunctionList *funclist;
	class Expression *expr;
	class Variable *var;
	class Literal *literal;
	class FunctionCall *funccall;
	class ParameterList *parlist;
	class FunctionInit *function;
	class Datatype *datatype;
	class Block *block;
	class ArgList *arglist;
	class Statement *statement;
	class StatementList *statelist;
	class AssignmentStatement *assignstate;
	class ReturnStatement *retstate;
	class ForStatement *forstate;
	class WhileStatement *whilestate;
	class ElifStatement *elifstatelist;
	class IfStatement *ifstate;
	Node() = default;
};

typedef union Node YYSTYPE;

class Program
{
public:
	class VariableList *variablelist;
	class FunctionList *functionlist;
	Program(class VariableList *, class FunctionList *);
};

class Visitor
{
public:
	string visit(class Expression *node);

	string visit(class Identifier *node);

	string visit(class Literal *node);

	void visit(class IntLiteral *node);

	void visit(class CharLiteral *node);

	void visit(class StringLiteral *node);

	void visit(class BoolLiteral *node);

	string visit(class BinaryExpression *node);

	string visit(class EnclosedExpression *node);

	string visit(class TernaryIfStatement *node);

	string visit(class ArrayRef *node);

	string visit(class FunctionCall *node);

	void visit(class FunctionList *node);

	void visit(class FunctionInit *node);

	void visit(class ArgList* node);

	void visit(class Statement *node);

	void visit(class AssignmentStatement *node);

	void visit(class ParameterList *node);

	void visit(class ReturnStatement *node);

	void visit(class Block *node);

	void visit(class VariableList *node);

	void visit(class Variable *node);

	void visit(class StatementList *node);

	void visit(class ForStatement *node);

	void visit(class WhileStatement *node);

	void visit(class ElifStatement *node);

	void visit(class IfStatement *node);

	void visit(class Program *node);
};

#endif