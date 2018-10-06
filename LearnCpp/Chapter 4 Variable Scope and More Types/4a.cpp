#include <iostream>
// Chp 4a
// Explicit type conversion (casting)

// In the previous chapter, two types of type conversions were introduced, implicit conversion &
// explicit conversion
int main() {

	// Observe the behaviour of the following:
	// Since 10 & 4 are both integers, neither is promoted & and integer division will occur resulting
	// in a value of 2 being stored in f.
	float f = 10/4; // Since 10 & 4 are both integers stored in a floating variable
	
	std::cout << f << "\n"; // f's output to the command line will be "2"
	// In order to fix this, ensure that at least of the operands are of type floating point such 
	// as "2.0". Once this occurs, the next time the compiler evaluates the expression, it will undergo 
	// floating point division.

// Type casting: a request by the progammer to change the fundamental type of a variable/perform a type 
// casting. There are 5 types of type conversion.
// 1) C-style casts
// 2) static casts
// 3) const casts
// 4) dynamic casts
// 5) reinterpret casts
// 
// It is a general rule to AVOID using C-style and reinterpret casts unless highly needed

// C-style casts: uses () with the name of the type to cast inside
	int i1{10};
	int i2{4};
	float f0{(float)i1/i2}; // an instance of C-style casts
	float f1{float(i1)/i2}; // a function-like version of C-style casts
// Since C-style casts are not checked till after compile time, they are prone to generating error
// when misused. As a result, avoid using C-style casts

// Static casts: a form of type conversion that provides compile-time error checking in order to prevent
// errors from being passed into the executable. Static casts are also intentionally not as strong as C-style
// casts to ensure developers & users will not break something.

// Static casts are used to inform compilers that progammers are doing something wrong intentionally.
int i{48};
char c{static_cast<char>(i)}; // an instance of intentional static casting
std::cout << c << "\n";
	return 0;
}

// Quiz:
// An implicity type conversion is a process when a user does not inform the computer/compiler how it will resolve
// fundamental data type conversions and hence the compiler will follow a certain hierachy to peform a requested type conversion
// while explicit type conversions are a process where users use cast operators to perfrom type changes.