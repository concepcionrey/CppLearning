#include <iostream>
#include <cstdint>
// Chp 4a
// Fixed width integers

// The biggest concern with the interger data type is C++ guarantees
// a minimum size to be expected. However, different computer architectures
// will vary on the size of the integer variables. This design choice
// predates all the way back to C where performance was the priority.
// Designers at that time left it open to programmers to pick the size
// that was most suited to their computer architecture.
//

// C++11 introduced a solution called fixed-width integers that guarantee
// these data types will have the same size universally. This can be used
// by #include <cstdint>.
// 

int main () {
	std::cout << "An example of using the <cstdint> library" << "\n";
	std::int16_t i{5};
	std::cout << i << "\n";

	// This library has its faults though. int8_t & uint8_t has undefined
	// behaviour. AVOID IT all all costs.
	int8_t myint{65};
	std::cout << "int8_t * uint8_t has undefined behaviour" << "\n";
	std::cout << myint << "\n"; // The compiler will read this as a char instead of an int

	return 0;
}

// C++11 also introduced two other sets of fixed-width integers.
// 1) Fast type (int_fast#_t): gives an integer that's the fastest type
// with a width of least # bits.
// 2) Least type (int_least#_t): gives the smallest integer type with at least
// # bits.
// 
// Integer best practices:
// 1) int are always preferred when the size of an integer does not matter. Such
// as expecting a user to input their age or give a number. It is not important to know
// if 16 or 32 bits is better, they both contain the values in their range.
// 
// 2) If a progammer needs a variable that guaranteed to be a particular size
// and favours performance, then use int_fast#_t
// 
// 3) If a progammer needs a bariable that guarantees a particular size and favours memory,
// then use int_least#_t
// 
// 4) Only used unsigned for compelling reasons.