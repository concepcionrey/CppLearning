#include <iostream>
// Chp 5
// A first look at operators
// 

// Literals: a fixed value that is hardcoded into a system
int x = 5; // 5 is a literal

// Operands: the data that is used in an expression

// Operators: characters that dictiate how expressions interact
// with operands
int simpleAddition =  1 + 1; // "+" is the operator and 1s are operands

// Ther are 3 types of opeators:
// 1) Unary: acts on 1 operand such as "-5"
// 2) Binary: acts on two operands (left & right)
// 3) Ternary: acts on three operands. [Only 1 exists in C++]

int main() {
	int y = 2; // 2 is a literal
	std::cout << 3 + 4; // 3 + 4 is an expression
	std::cout << "Hello, World!"; // Hello Worls is a literal

	return 0;
}