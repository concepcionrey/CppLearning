#include <iostream>
// Chp 
// Introduction to Comments
// 
// A comment is a line inserted into code to explain what the
// code is doing 
// 
// C++ has two types of comments
// 1) "//", which states to ignore everything until the end of the line
// 2) "/**/", which denotes a multi-line comment. Everything is ignored in-between
// 
// Comments are mainly used for 3 things
// 1) To explain what is given program is doing
// 2) to explain how the code is going to achieve a solution
// 3) To make code readable for other programmers and non-progammers
// 
// TLDR: At a program & function level --> what, Inside it--> how, at the 
// statement level--> why

int main () {
	std::cout ""Hello World! << "\n"; // everything from here is ignored

	// A bad comment looks like this 
	// Set sight range to 0
	int sight = 0;

	// While a good comment looks like 
	// The player just drank a potion that blinded them
	// 
	// An example of multi-line comments are as follows:
	/*
	Foo
	Bar
	Turtle
	Alpha
	Omega
	 */
}