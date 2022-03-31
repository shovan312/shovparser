#include <bits/stdc++.h>
#include "ast.h"
using namespace std;

int depth = 0;

map<int, string> datatypeMap2 = {
  { 1, "int" },
  { 2, "char" },
  { 3, "bool" },
  { 4, "unint" },
  { 5, "void" }
};
map <string, string> varMap;
map <string, string> functionMap;

Identifier::Identifier(string val)
{
	this->value = val;
	this->expression_type = 1;
}

VariableInit::VariableInit(class Datatype *type, class Identifier *name, class Expression *expr)
{
	this->type = type;
	this->name = name;
	this->expr = expr;
	this->variable_type = 1;

	int t = type->datatype_type;

	varMap[name->value]=datatypeMap2[t];
}

ArrayInit::ArrayInit(class Datatype *type, class Identifier *name, int len1, int len2)
{
	this->type = type;
	this->name = name;
	this->len1 = len1;
	this->len2 = len2;
	this->variable_type = 2;

	varMap[name->value] = type->datatype_type;
}

IntLiteral::IntLiteral(int val)
{
	this->expression_type = 2;
	this->literal_type = 1;
	this->value = val;
}

CharLiteral::CharLiteral(string val)
{
	this->expression_type = 2;
	this->literal_type = 2;
	this->value = val[0];
}

StringLiteral::StringLiteral(string val)
{
	this->expression_type = 2;
	this->literal_type = 3;
	this->value = val;
}

BoolLiteral::BoolLiteral(string val)
{
	this->expression_type = 2;
	this->literal_type = 4;
	this->value = (val);
}

BinaryExpression::BinaryExpression(class Expression *lhs, string op, class Expression *rhs)
{
	this->expression_type = 3;
	this->expr1 = lhs;
	this->op = op;
	this->expr2 = rhs;
}

EnclosedExpression::EnclosedExpression(class Expression *expr)
{
	this->expr = expr;
	this->expression_type = 4;
}

TernaryIfStatement::TernaryIfStatement(class Expression *condition, class Expression *true_branch, class Expression *false_branch)
{
	this->condition = condition;
	this->true_branch = true_branch;
	this->false_branch = false_branch;
	this->expression_type = 5;
}

ArrayRef::ArrayRef(class Identifier *name, class Expression *ind1, class Expression *ind2)
{
	this->expression_type = 6;
	this->name = name;
	this->ind1 = ind1;
	this->ind2 = ind2;
}

FunctionCall::FunctionCall(class Identifier *name, class ParameterList *parlist)
{
	this->statement_type = 2;
	this->expression_type = 7;
	this->name = name;
	this->paramlist = parlist;
}

AssignmentStatement::AssignmentStatement(class Identifier *name, class Expression *ind1, class Expression *ind2, class Expression *expression)
{
	this->statement_type = 1;
	this->name = name;
	this->ind1 = ind1;
	this->ind2 = ind2;
	this->expression = expression;
}

ReturnStatement::ReturnStatement(class Expression *expr)
{
	this->statement_type = 3;
	this->expr = expr;
}

Block::Block(class VariableList *varlist, class StatementList *statementlist)
{
	this->statement_type = 4;
	this->varlist = varlist;
	this->statementlist = statementlist;
}

ForStatement::ForStatement(class Variable *var, class Expression *condition, class AssignmentStatement *assignment, class Block *block)
{
	this->statement_type = 5;
	this->var = var;
	this->condition = condition;
	this->assignment = assignment;
	this->block = block;
}

WhileStatement::WhileStatement(class Expression *condition, class Block *block)
{
	this->statement_type = 6;
	this->condition = condition;
	this->block = block;
}

ElifStatement::ElifStatement(class Expression *condition, class Block *block, class ElifStatement *elifstatement)
{
	this->statement_type = 7;
	this->condition = condition;
	this->block = block;
	this->elifstatement = elifstatement;
}

IfStatement::IfStatement(class Expression *condition, class Block *block, class ElifStatement *elifstatement)
{
	this->statement_type = 8;
	this->condition = condition;
	this-> block = block;
	this-> elifstatement = elifstatement;
}

void VariableList::push_back(class Variable *var)
{
	variable_list.push_back(var);
}

void ArgList::push_back(class Variable *var)
{
	// arg_list.push_back(var);
	arg_list.insert(arg_list.begin(), 1, var);
}

void ParameterList::push_back(class Expression *expr)
{
	// parameters.push_back(expr);
	parameters.insert(parameters.begin(), 1, expr);
}

void FunctionList::push_back(class FunctionInit *func)
{
	// function_list.push_back(func);
	function_list.insert(function_list.begin(), 1, func);
}

void StatementList::push_back(class Statement *statement)
{
	// statement_list.push_back(statement);
	statement_list.insert(statement_list.begin(), 1, statement);
}

FunctionInit::FunctionInit(class Datatype *type, class Identifier *name, class ArgList *arglist, class Block *block)
{
	this->type = type;
	this->name = name;
	this->arglist = arglist;
	this->block = block;

	functionMap[name->value] = datatypeMap2[type->datatype_type];
}

Program::Program(class VariableList *VariableList, class FunctionList *FunctionList)
{
	this->variablelist = VariableList;
	this->functionlist = FunctionList;
}

string Visitor::visit(class Expression *node)
{
	printf("%s", "Visited an expression\n");
	Identifier *id = dynamic_cast<Identifier *>(node);
	Literal *literal = dynamic_cast<Literal *>(node);
	BinaryExpression *binaryExpression = dynamic_cast<BinaryExpression *>(node);
	EnclosedExpression *enclosedExpression = dynamic_cast<EnclosedExpression *>(node);
	TernaryIfStatement *ternaryIfStatement = dynamic_cast<TernaryIfStatement *>(node);
	ArrayRef *arrayRef = dynamic_cast<ArrayRef *>(node);
	FunctionCall *functionCall = dynamic_cast<FunctionCall *>(node);
	if(id)
	{
		depth -= 1;
		return this->visit(id);
	}
	if(literal)
	{
		this->visit(literal);
		if(literal->literal_type == 1)
			return "int";
		if(literal->literal_type == 2)
			return "char";
		if(literal->literal_type == 3)
			return "string";
		if(literal->literal_type == 4)
			return "bool";
	}
	else if(binaryExpression)
		return this->visit(binaryExpression);
	else if(enclosedExpression)
		return this->visit(enclosedExpression);
	else if(ternaryIfStatement)
		return this->visit(ternaryIfStatement);
	else if(arrayRef)
		return this->visit(arrayRef);
	else if(functionCall)
	{
		string type = this->visit(functionCall);
		if(type == "void")
		{
			cerr<<"Semantic error in method call\n";
			exit(0);
		}
		return type;
	}
	return "void";
}

string Visitor::visit(class Identifier *node)
{
	depth += 1;
	cout<<"Visited an Identifier with name: "<< node->value << "\n";
	return varMap[node->value];
}

string Visitor::visit(class Literal *node)
{
	depth += 1;
	cout<<"Visited a literal\n";
	IntLiteral *intLiteral = dynamic_cast<IntLiteral *>(node);
	CharLiteral *charLiteral = dynamic_cast<CharLiteral *>(node);
	StringLiteral *stringLit = dynamic_cast<StringLiteral *>(node);
	BoolLiteral *boolLiteral = dynamic_cast<BoolLiteral *>(node);
	if(intLiteral){
		this->visit(intLiteral);
		return "int";
	}
	else if(boolLiteral){
		this->visit(boolLiteral);
		return "bool";
	}
	else if(charLiteral){
		this->visit(charLiteral);
		return "char";
	}
	else if(stringLit){
		this->visit(stringLit);
		return "string";
	}
}

void Visitor::visit(class IntLiteral *node)
{
	depth += 1;
	cout<<"Visited integer literal\n";
	return;
}

void Visitor::visit(class CharLiteral *node)
{
	cout<<"Visited Character literal\n";
	return;
}

void Visitor::visit(class StringLiteral *node)
{
	cout<<"Visited String literal\n";
	return;
}

void Visitor::visit(class BoolLiteral *node)
{
	cout<<"Visited Boolean literal\n";
	return;
}

string Visitor::visit(class BinaryExpression *node)
{
	int optype = 1;
	cout<<"Visited binary expression with operator "<< node->op << '\n';
	string type1 = this->visit(node->expr1);
	string type2 = this->visit(node->expr2);
	string op = node->op;
	if(op=="+" || op=="-" || op=="*" || op=="/" || op=="%")
		optype = 1;
	else if(op=="<" || op==">" || op=="<=" || op==">=" || op=="==" || op=="!=")
		optype = 2;
	else
		optype = 3;
	if(type1 == "int" && type2 == "int" && optype==1)
		return "int";
	if(type1 == "int" && type2 == "int" && optype==2)
		return "bool";
	if(type1 == "bool" && type2 == "bool" && optype==3)
		return "bool";
	if(type1 == type2 && (op == "==" || op == "!="))
		return "bool";
	cerr<<"Semantic error in binary expression\n";
	exit(0);
}

string Visitor::visit(class EnclosedExpression *node)
{
	cout<<"Visited enclosed expression\n";
	return this->visit(node->expr);
}

string Visitor::visit(class TernaryIfStatement *node)
{
	cout << "Visited Ternary If Statement\n";
	string type = this->visit(node->condition);
	if(type != "bool")
		cerr<<"Semantic error in conditional\n";
	return type;
}

string Visitor::visit(class ArrayRef *node)
{
	cout << "Visited Array Reference\n";
	return varMap[(node->name)->value];
}

string Visitor::visit(class FunctionCall *node)
{
	cout << "Visited Function Call\n";
	this->visit(node->paramlist);
	return functionMap[(node->name)->value];
}

void Visitor::visit(class FunctionList *node)
{
	cout << "Visited Function List\n";
	int flag = 0;
	for(auto it : node->function_list)
	{
		if((it->name)->value == "main")
			flag = 1;
	}
	if(!flag)
	{
		cerr<<"Semantic error main not defined\n";
		exit(0);
	}
	for(auto it : node->function_list)
		this->visit(it);
	return;
}

void Visitor::visit(class FunctionInit *node)
{
	cout<<"Visited function declaration\n";
	this->visit(node->arglist);
	this->visit(node->block);
	return;
}

void Visitor::visit(class ArgList* node)
{
	cout<<"Visited Arglist\n";
	for(auto &it : node->arg_list)
		this->visit(it);
	return;
}

void Visitor::visit(class Statement *node)
{
	cout << "Visited a Statement\n";
	AssignmentStatement *assignmentStatement = dynamic_cast<AssignmentStatement *>(node);
	FunctionCall *functionCall = dynamic_cast<FunctionCall *>(node);
	ReturnStatement *returnStatement = dynamic_cast<ReturnStatement *>(node);
	Block *block = dynamic_cast<Block *>(node);
	ForStatement *forStatement = dynamic_cast<ForStatement *>(node);
	WhileStatement *whileStatement = dynamic_cast<WhileStatement *>(node);
	ElifStatement *elifStatement = dynamic_cast<ElifStatement *>(node);
	IfStatement *ifStatement = dynamic_cast<IfStatement *>(node);

	if(assignmentStatement)
		this->visit(assignmentStatement);
	if(functionCall)
		this->visit(functionCall);
	if(returnStatement)
		this->visit(returnStatement);
	if(block)
		this->visit(block);
	if(forStatement)
		this->visit(forStatement);
	if(whileStatement)
		this->visit(whileStatement);
	if(elifStatement)
		this->visit(elifStatement);
	if(ifStatement)
		this->visit(ifStatement);
}

void Visitor::visit(class AssignmentStatement *node)
{
	cout << "Visited an Assignment Statement\n";
	string type1 = this->visit(node->name);
	string type2 = this->visit(node->expression);

	if(type1 != type2)
	{
		cerr<<"Semantic Error";
	}
	return;
}

void Visitor::visit(class ParameterList *node)
{
	cout << "Visited Parameter List\n";
	for(auto &it : node->parameters)
	{
		this->visit(it);
	}
	return;
}

void Visitor::visit(class ReturnStatement *node)
{
	cout << "Visited a Return Statement\n";
	string type1 = this->visit(node->expr);
	return;
}

void Visitor::visit(class Block *node)
{
	cout << "Visited a Block\n";
	this->visit(node->varlist);
	this->visit(node->statementlist);
}

void Visitor::visit(class VariableList *node)
{
	depth += 1;
	cout << "Visitited a Variable List\n";
	for(Variable* it : node->variable_list)
	{
		this->visit(it);
	}
	return;
}

void Visitor::visit(class Variable *node)
{
	depth += 1;
	cout << "Visited Variable with name : " << node->name->value << "\n";
}

void Visitor::visit(class StatementList *node)
{
	cout << "Visitited a Statement List\n";
	for(Statement* it : node->statement_list)
	{
		this->visit(it);
	}
	return;
}

void Visitor::visit(class ForStatement *node)
{
	cout << "Visited a For Statement\n";
	return;
}

void Visitor::visit(class WhileStatement *node)
{
	cout << "Visited a While Statement\n";
	return;
}

void Visitor::visit(class ElifStatement *node)
{
	cout << "Visited a Elif Statement\n";
	return;
}

void Visitor::visit(class IfStatement *node)
{
	cout << "Visited a If Statement\n";
	return;
}

void Visitor::visit(class Program *node)
{
	int flag = 0;
	cout<<"Visited program\n";
	this->visit(node->variablelist);
	this->visit(node->functionlist);
	return;
}