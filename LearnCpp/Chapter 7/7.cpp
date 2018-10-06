#include <iostream>
// Chp 7
// Default parameters

// default parameter (optional parameters): function parameters with a default value provided to it. If a user does not provide an argument, then the default is used

void printValue(int a, int b=25) { // A function can also have multiple default parameters
	std::cout << "a = " << a << '\n';
	std::cout << "b = " << b << '\n';
}

// Rules:
// 1) All default parameters must be the rightmost parameters
// 2) If more than 1 d param exists then, the leftmost param must be explicility given by the user
// 3) D params can only be declared once. Meaning a function with a forward declaration and a function definition must have the default param exist in at most one of the 
// two otherwise redefinition error is inccured

// Rule: If the function has a forward declaration, put the default parameters there. Otherwise, put them in the function definition.

// NOTE: It is also possible to use default params when overloading functions. However, it does not count toward the uniqueness of a function
int main() {
	printValue(1,2);
	printValue(1);
	return 0;
}

/* ==== SUMMARY =====
Default parameters provide a useful mechanism to specify parameters that the user may optionally provide values for. They are frequently used in C++, 
and you’ll see them a lot in future lessons.

 */