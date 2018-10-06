#include <iostream>
#include <string>
// Chp 6
// Function overloading

// function overloading: the ability to create multiple functions while reusing the same name as long as they have different params

// Sample of function overloading where both functions are called add but use different parameter types;
int add(int x, int y) {
	return x+y;
}

double add(double x, double y) {
	return x+y;
}
// This will not generate a naming conflict since the compiler determines which add function to use based on the func param.
// This can also apply to # of params

// NOTE: that overloading does not take into account return types for uniqueness, an intentional choice to reduce complexity in analysis

// NOTE: Typedefs are not distinct, hence something like this is considered identical
typedef char *string;
void print(string value){};
void print(char value){};

// The process regarding how function calls are matched with overloaded functions are as follows
// 1) A direct match is found
// 1.1) If an exact match was not found, a similar match can be found through promotion, standard conversion or user-defined conversion
// 2) No match is found
// 3) An ambigious match was found

// Example of indirect matching
// void print(char *value);
// void print(int value);
// print('a'); // promoted to match print(int)

// How does ambigious matching occur since every param is considered unique?
// This occurs since all promotions or conversions used to find a match are treated equally which results in a function call receiving multiple candidates
// These are considered compile-time errors

int main() {

	int x = add(1,2);
	std::cout << "x = " << x << '\n';

	double y = add(1.23, 4.25);
	std::cout << "y = " << y << '\n';

	return 0;
}

// Summary: Function overloading can lower a program’s complexity significantly while introducing very little additional risk. 
// Rule: use function overloading to make your program simpler.