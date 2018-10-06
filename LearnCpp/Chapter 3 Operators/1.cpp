#include <iostream>
#include <cmath>
// Chp 1
// Operator precedence and associativity
//

// Operation: a mathematical calculation involving zero or more input values
// known as operands and symbols known as operators.
// 
// Operator precedence: the order in which operations are evaluated. C++ follows 
// a similar analysis. Those with the highest precedence (1) are evaulated first.
// Eg. 4 + 2 * 3 results in 4 + (2*3) = 10
// 
// Operator associativity: the rule that occurs when a compiler comes across two operations
// of the same precedence. To resolve this, the compiler follows a left to right or a right
// to left associativity based on the precedence level. Precedence level 1 is the highest 
// while level 17 is the lowest.
// 

int main() {

	// Notice: In C++, the "^" operator denotes a bitwise XOR operation. In order
	// to do exponents, use the pow() function that exists in the <cmath> header file.
	// Note that due to rounding errors with floating numbers, the results are not precise.

	double x{pow(3.0,4.0)}; // 3 to the 4th power, pow() takes in a double & returns a double
	std::cout << "3 to the 4th power is: " << x << "\n";
 	return 0;
}

// Quiz:
// 1)
// a) x = ((3 + 4)+ 5); CORRECT
// b) x = (y = z); CORRECT
// c) z *= ((++y) + 5); CORRECT
// d) (a || (b && c))|| d; CORRECT
