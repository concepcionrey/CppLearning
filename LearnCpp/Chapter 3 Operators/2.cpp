#include <iostream>
#include <cmath>
// Chp 2
// Arithmetic operators

// Unary arithmetic operators: operators that act on 1 operand. There are only two:
// 1) "+": indicates the value of the operand
// 2) "-": negates the value of the operand
// 
// Binary arithmetic operators: operators that take in a left & right operand. There are five:
// 1) "+": addition
// 2) "-": subtraction
// 3) "*": multiplication
// 4) "/": division
// 5) "%": remainder
// 
// Note: Division & remainder are unique to have additional details associated with them.
// 1) Division can be broken down into 2 states:
// 1.1) If both operands are integers, integer division will be performed, any fractional component
// is dropped.
// 1.2) If one or more of the operands are a floating point value, then floating point division is performed
// 
// 2) Modulus (x mod y = z == x*y+z) only works on integer operands. It is very useful for testing
// whether a number is evenly divisible by another number. For instance, if x % y == 0, then we know that y
// divides evenly into x.
// 2.1) In c++11, specifications ensured that integer division will always truncate towards 0 when
// negative numbers are used
// 
//  Arithmetic assignment operators: operators in conjunction with assignment. This creates a shortcut
//  insteaf of using statements like x = x + 5;
//  1) "=": assignment
//  2) "+=": add x to y
//  3) "-=": minus y from x
//  4) "*=": multiply x by y
//  5) "/=": divide x by y
//  6) "%=": put the remainder of x/y in x 

void modulusCounter() {
	int count{1};
	while (count <= 100) {
		std::cout << count << " ";

		if (count%20 == 0) {
			std::cout << "\n";
		}

		count +=1;
	}
}

bool isEven(int n) {
	/*
	if (n%2 == 0) {
		return true;
	} else {
		return false;
	}
	*/
	return (x%2) == 0;
}

int main() {
	// An example of the two different modes of division:
	std::cout << "Integer division: " << 7/3 << "\n";
	std::cout << "Floating point division: " << 7.0/3 << "\n";

	// An example of Modulus in action
	modulusCounter();

	// Quiz:
	// 1) 6 + ((5*4)%3) = 8
	// 2)
	
	std::cout << "Enter an integer value: ";
	int n;
	std::cin >> n;

	if (isEven(n)) {
		std::cout << "Integer is even" << "\n";
	} else {
		std::cout << "Integer is odd" << "\n";
	}
	
	return 0;
}