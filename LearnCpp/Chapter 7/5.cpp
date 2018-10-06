#include <iostream>
// Chp 5
// Inline functions

// Although functions boast several benefits such as reducing duplicated code, easier debugging and type checking, it has one potentially big downside. Whenever a function call is made
// a performance overhead is incurred. Specifically speaking, a function results in the compiler saving the current instruction's address to memory, instantiating the function parameters,
// assinging values to these parameters and branching/jumping to the next instruction. For large-scale complex functions, this cost is insignificant since the time to run the function itself
// will take longer. However, with small functions such as getters and setters, this can create a performance penalty.

// C++ has an option to combine the advantages of function calls with the speed of code written in-place. This is known as the "inline" keyword where where every function call to an
// inline function gets replaced with the contents of the function itself.

int mint(const int x, const int y) {
	return (x > y) ? x : y ;
}
int main() {
	std::cout << min(4,3) << '\n';
	std::cout << min(2,3) << '\n';
	// min() is called twice thus incurring the performance penalty twice. Since it is a small function, it makes it the perfect candidate to attributed as inline
	// When the compiler compiles the inline min() function, our call to min() in main become std::cout << (4 > 3) ? 4 : 3 << '\n';
	// This executes faster at the risk of code bloat. Inline functions are best suited for small-scale functions that are called inside loops and do not branch
	return 0;
}

// Rule: Be aware of inline functions, but modern compilers should inline functions for you as appropriate, so there isn’t a need to use the keyword.