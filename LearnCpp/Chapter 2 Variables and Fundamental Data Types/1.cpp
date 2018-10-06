#include <iostream>
// Chp 1
// Fundamental variable definition, initialization, and assignment
//

// Binary digit (bit): the smallest unit of memory. This can either be
// a or a 0. These digits are organized into sets of sequential units called
// memory addresses. 
// 
// Memory address: information that allows us to find and access contents of 
// memory at a particular location. 
// 
// Byte: the smallest unit of memory. It is composed of 8 bits.
// 
// Data type: means to intrepret the contents of a value held in memory.
// When a programmer assigns a data type to a value, the compiler & CPU encode
// the value into an appropriate sequence of bits pertaining to that data type.
// When accessing it,the data type is remade from the sequence of bits written.
// 
// Fundamental data types: also known as basic, primitive & built-in types.
// These include:
// 1) boolean: true or false values
// 2) character: a single ASCII character
// 3) floating point: a number with decimals
// 4) integer: a whole number
// 5) void *** [A special case that is of no type]
// 

int main () {
	bool boolVal;
	char chVal;
	int  wholeVal;
	float floatVal;
	double doubleVal;
	// void voidVal; // This won't work


// Variable initialization: defining a variable by providing it a value.
// In C++ there are 3 ways to achieve this:
// 1) Copy initialization: 
	int cValue = 5;
	std::cout << "Copy initialization: " << cValue << "\n";
// 2) Direct initialization:
	int dValue(5);
	std::cout << "Direct initialization: " << dValue << "\n";
// Direct initialization looks like a function call but a programmer does not
// need to be worried since the compiler can keep track of which identifiers
// are names and variables. It is a given rule to favour and use direct initialization
// over copy initialization for better overall performance. 

// 3) Uniform initialization:
	int uValue{5};
	std::cout << "Uniform initialization: " << uValue << "\n";
	
// C++11 introduced a new mechanism for initialization known as uniform
// initialization that attempts to work with all data types. The benefit
// of using this is that is disallows "narrowing" type conversions. It means
// if this initializer notices that a programmer is trying to a initialize
// a variable with an improper value, it will complain and throw an error.
// Eg.
// int failVal{4.2}
// If using a C++11 compiler, it is recommended to use this over direct initialization.

// Uninitialized variable: a variable that has not been initialized. It is good rule
// to always initialize variables as soon as possible to avoid holding garbage values.
// 

// It is also possible to define multiplle variables at once. 
	int a,b; // is equivalent to writing them on separate lines.
	int c(7), d(9);
	int e{2}, f{3};
	std::cout << c << " " << d << " " << e << " " << f << " All work!" << "\n";

// A very easy mistake to avoid when initializing multiple variables is
// initializing them as they are defined. The general rule is to avoid defining
// multiple variables on a single line if any of them are also going to be initialized.
// Eg,
// int a, b(5); // will fail

// NOTE:
// 1) modern C++ style guidelines dictate to define variables as close to their
// first use as possible instead of accumulating them all at the top of a system.


}