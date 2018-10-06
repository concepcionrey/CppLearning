#include <iostream>
// Chp 4
// Sizeof, comma, and conditional operators
//

// sizeof operator: operator that returns the size of a variable
// 
// comma operator: operats that allows for multiple expression evaluations.
// Note, the comma operator evaluates the right most operand & has the lowest
// precedence. This is also different from declaring multiple variables at once.
// 
// conditional operator: C++'s only ternary operator used to simplifiy evaluations
// for simple boolean condiitions (if/else)
// x = (condition) ? some_value: some_value

int main() {
	// example of using the sizeof() operator 
	double d{5.0};
	float f{3.0f};
	std::cout << "This is the size of d: " << sizeof(d) << "\n";
	std::cout << "This is the size of f: " << sizeof(f) << "\n";

	// example of the comma operator
	int x{0};
	int y{2};
	int z = (++x, ++y); // Direct & uniform initialization fails
	std::cout << "This is what happens when using the ',' operator: " << z << "\n"; // z gets initialized with "y"
	// The above code can be rewritten more neatly as...	
	/*
	++x;
	++y;
	int z = y;
	 */
	// TLDR: avoid using comma operator unless within for loops
	
	// example of using conditional operator
	// instead of writing ...
	/*
	if (x>y) {
		larger = x;
	else
		larger = y;
		}
	 */ 
	int larger{x>y ? x: y};
	std::cout << "an example of using the conditional operator: " << larger << "\n";
	// TLDR: only use conditional operators for simple conditionals to improve readability
	
	(std::cout << (x>y)) ? x: y; // NOTE: "<<" operator has a higher precedence
	return 0;
}

// General notes:
// 1) conditional operator evaluates as an expression where if/else evaluates a set of statements
// 2) the type of expressions must match within a conditional or be convertible