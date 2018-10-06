#include <iostream> // known as the preprocessor directive to tell the compiler to perform a special task
// Chp 1
// Structure of a program
// 
// Statements: most common and smallest unit of instruction
// 
// Variables: a value that can hold other values, this also
// states to the computer to reserve a region of memory 
// 
// Expressions: entities that are evaluated inside statements 
// Expression statements: a statement that contains a semicolon and 
// expressions
// 
// Functions: a collection of statements grouped together and run
// in sequential order 
// 
// Libraries: a collection of pre-compiled code that is reused for other 
// programs
// 
// ************************************************************************
// Quiz
// 1) What is the difference between a statement and an expression?
// 2) What is the difference between a function and a library?
// 3) What symbol are statements in C++ often ended with?
// 4) What is a syntax error?

int main () {
	int x = 3; // a declaration statement 
	int y = 5;
	int z = (2+x) * (3+y);
	std::cout << "Hello World!" << "\n";
	std::cout << "This is the result of doing a few computations on " << x  << 
	" and " << y << ", the result is = " << z << "\n";
	std::cout << (y=30) << "\n"; // this works? neat
	return 0;
}