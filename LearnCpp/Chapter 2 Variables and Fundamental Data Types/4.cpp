#include <iostream>
// Chp 4
// Integers

// Integer: a data type that consists of whole numbers or non-fractional numbers.
// C++ has 5 Integer types available:
// 1) char: 1 byte [a special case]
// 2) short: 2 bytes
// 3) int: 2 bytes
// 4) long: 4 bytes
// 5) long long: 8 bytes
// 

// Rule: While it is possible short int, long int and long long in are valid. The shorthand versions
// such as short, long and long long should be preferred overall. By having the int prefix
// attached, it creates confusion for the programmer to distinguish the data type being used
// for the variable.
// 

// Signed & unsigned integers
// Signed: a variable that can hold a range of negative & postive numbers. Integer data types
// are implicility signed.

signed char c;
signed short s;
signed int i; // a 1-byte signed integer has a range of -128 to 127

// Unsigned: variables that can only hold positive integers. This also means
// that the # of positives numbers stored as twice as large.

unsigned char uc;
unsigned short us;
unsigned int ui; // a 1-byte unsigned integer has a range of 0-255

// Mathematically, 
// an n-bit signed variable has a range of -(2^n-1) to 2^(n-1)-1
// an n-bit unsigned variable has a range of 0 to 2^n-1 

// It is best practice to avoid use of unsigned integers unless, there is a specific need for them.

// Overflow: an event where bits are lost because not enough memory has been allocated for a variable
// Eg.
// Inserting the value 21 into a 4 bit variable. Observe that 21 takes 5 bits (10101) to
// represent itself. When it is inserted into the 4 bit variable, Only the rightmost bits 
// (least significant) are kept and the excess are lost. Therefore 10101 is instead stored
// as 0101 which is equivalent to the value 5.

int main() {
	std::cout << "An overflow bug in progress: " << "\n"; 
	std::cout << "A simple one: " << "\n";
	//signed char x{128}; // using uniform initialization will cause this to fail
	//std::cout << x << "\n";
	std::cout << "A more complex one: going above the upper limit " << "\n";
	unsigned short y{65535};
	std::cout << "y is " << y << "\n";
	y = y + 1;
	std::cout << "y is now " << y<< "\n";

	std::cout << "Another complex one: going below the lower limit" << "\n";
	std::cout << "y is " << y << "\n";
	y = y - 1;
	std::cout << "y is now " << y << "\n";

	std::cout << "A look at integer division" << "\n";
	std::cout << "8 / 5 = " << 8/5 << "\n"; // Fractional components are dropped because of data type
	return 0;
}
