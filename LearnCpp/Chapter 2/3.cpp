#include <iostream>
// Chp 3
// Variable sizes and the sizeof operator
// 

// Recall that memory is organized into byte-sized units, with each unit associated with a unique
// memory address where values can be stored & accessed. However, this is only true to an extent.
// A variable's size is at least 1 byte in several cases and with this, they end up taking several
// memory addresses to store its value instead only a single address. This generally varies between 
// data types.
// 
// Generally, a variable n bits can hold up to 2^n possible # of values. With a single byte (8 bits),
// This byte can hold up to 256 different values.
// 
// The size of C++ basic data types vary. This is also very dependent on the architecture & the compiler
// a computer is running on. However, C++ guarantees that various data types will have the following minimum
// sizes...
// 
// 1) Boolean --> 1 byte
// 2) Character
// 2.1) char --> 1 byte
// 2.2) wchar_t --> 1 byte
// 2.3) chat16_t --> 2 bytes
// 2.4) char32_t --> 4 bytes
// 
// 3) Integers
// 3.1) short --> 2 bytes
// 3.2) int --> 2 bytes
// 3.3) long --> 4 bytes
// 3.4) long long --> 8 bytes
// 
// 4) Floating point
// 4.1) float --> 4 bytes
// 4.2) double --> 8 bytes
// 4.3) long double --> 8 bytes
// 
// To verfiy the actual sizes of these variables, it is possible to use the sizeof( operator to determine
// a variable's size on a specific machine.
// 

int main() {
	std::cout << "bool:\t\t" << sizeof(bool) << " bytes" << "\n";
	std::cout << "char:\t\t" << sizeof(char) << " bytes" << "\n";
	std::cout << "wchar_t:\t" << sizeof(wchar_t) << " bytes" << "\n";
	std::cout << "char16_t:\t" << sizeof(char16_t) << " bytes" << "\n";
	std::cout << "short:\t\t" << sizeof(short) << " bytes" << "\n";
	std::cout << "int:\t\t" << sizeof(int) << " bytes" << "\n";
	std::cout << "long long:\t" << sizeof(long long) << " bytes" << "\n";
	std::cout << "float:\t\t" << sizeof(float) << " bytes" << "\n";
	std::cout << "double:\t\t" << sizeof(double) << " bytes" << "\n";
	std::cout << "long double:\t" << sizeof(long double) << " bytes" << "\n"; 
	return 0;
}