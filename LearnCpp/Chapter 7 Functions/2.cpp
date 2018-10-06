#include <iostream>
// Chp 2
// Passing argument by value
// 

// NOTE: By default: non-pointer arguments in C++ are passed by value
// pass by value: a copy of the argument is created and passed into the value of the corresponding function parameter

void foo(int x) {
	std::cout << "x = " << x <<'\n';
}

int main() {
	// sample of pass by value in action
	int x {5};
	foo(x);
	++x;
	foo(x);
	return 0;
}

/*
PROS & CONS of passing by value
	PRO: Arguments passed by value can be variables (e.g. x), literals (e.g. 6), expressions (e.g. x+1), structs & classes, and enumerators. In other words, just about anything.
	CON: Copying structs and classes can incur a significant performance penalty, especially if the function is called many times.

	When to use: When passing fundamental data type and enumerators, and the function does not need to change the argument.
	When not to use: When passing arrays, structs, or classes
 */