#include <iostream>
// Chp 8
// Literals
// 

// Literals: hardcoded expressions whose values cannot be altered. Such as
// integers and strings.
// It is okay to use literal in code as long as it their meanings are clear
// and easily deduciable for any reader/


int main() {
	bool myNameIsRey = true; // an example of a boolean var with boolean literal true
	int x{5}; // an example of boolean var using uniform initialization

	// Numeric literals can have suffixes, although they are optional because the compiler
	// can deduce their type from the context that it is being used for.
	unsigned int nValue = 5u;
	long nValue2 = 5L;

	// Octal & hexadecimal literals: other forms of number counting
	// While a decimal is base 10 where vales 0-9 exist for use, binary is
	// base 2 since only 1 & 0 are the only digits that exist. Likewise, octal
	// & hexadecimal follow the same procedure.
	// 
	// Octal: base-8 that includes digits from 0-7. 
	int ox = 012; // To use base-8, prefix a literal with "0"

	// Hexadeicmal: base-16 that includes values from 0-f. They provide a concise way of reading values
	// Each individual value is 4 bits where a hexadecimal pair makes 1 byte
	// Eg. 0011 1010 0111 1111 1001 1000 0010 0110 --> 3A7F 9826 (in-hex)
	int hexX{0xF};
	std::cout << "This is the value that hexX gets evaluated to: " << hexX << "\n";

	// binary literal: different integer types that can be expressed in binary (base-2). Originally,
	// hexadecimals provided a work around to circumvent assigning binary literals.
	// 
	int bin{0};
	bin = 0x01; // 0000 0001
	bin = 0x02; // 0000 0010
	bin = 0x04; // 0000 0100
	// ...so on and so forth check out 
	// http://www.learncpp.com/cpp-tutorial/28-literals/
	// for the complete list
	// 
	// However in C++14, the "0b" prefix was introduced to peform the same action.
	bin = 0b1; // 0000 0001
	bin = 0b11; // 0000 0011
	bin = 0b1010; // 0000 1010

	// C++14 Also introduces "`" as a digit separator to ease reading long literals
	bin = 0b1011'0010; // 1011 0010 binary value to variable bin
	std::cout << bin << "\n";
	return 0;
}


// General rule:
// 1) Avoid using magic numbers
// 1.1) Magic numbers are hardcoded literals that exist in the middle of a system without
// prior context. This creates issuses in understanding their purpose and why they were
// written there in the first place. It is also tedious if these magic numbers have multiple instances
// within the system and requires to be changed. 
// eg.
// int maxStudents = numClassrooms * 30; // 30 is implied to be the max # students in a room, not very clear.