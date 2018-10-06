#include <iostream>
#include <typeinfo>
// Chp 4
// Implicit Type conversion

// Type conversion: the process of converting a value from one type 
// to another fundamental type. The underlying behaviour is the computer changing the
// binary representations of these variables

// There are two types of type conversion
// 1) Implicit type conversion (coercion): the compiler automatically transforms one fundamental type
// into another
// 1.1) This can be broken down into...
// 
// a) numeric promotion (widening): converting a smaller type into a larger type
// An instance of this is converting chars into integers or longs
// 
// b) numeric conversion (narrowing) : converting a larger type into a smaller type
// NOTE: this type of conversion maye lead into  a loss of data and cause the compiler to complain
// 
// 2) Explicit type conversion: users use cast operation to change types
// 

// The type various rules of conversion include:
// 1) converting a value into a type that doesn't have a larger enough range to support the value will lead to
// unexpected results
// 2) converting from a larger interal or floating type will usually work as long as the value fits in the range
// of the smaller type
// 3) floating point values will experience rounding errors due to loss of precision 
// 4) converting from an integer to a floating ppoint number will work as long as the value fits within the range of the
// floating type
// 

void exampleTypeID() {
	// example of how arithmetic conversions take place 
	short a{4};
	short b{5};
	std::cout << typeid(a + b).name() << " " << a + b << "\n";
}

int main() {
	float f{3}; // compiler converts 3 into a floating point number before storing/assigning it into f

	std::cout << "An example of how type conversion can lead to unexpected results \n";
	int i{30000};
	std::cout << "i has the value of: " << i << "\n";
	// UNCOMMENT TO TEST
	// char c{i};
	// std::cout << "putting it into char c and casting it as an int will cause it to become: " <<
	// static_cast<int>(c) << "\n";
	
	// Evaluating arithmetic expressions
	// When the compiler evaluates expressions, it breaks these down into subexpressions and follow a certain 
	// set of rules to evaluate these expressions correctly. Both operands are required to become the same type.
	// 1) If an operand is an integer that is narrower than an int, it will undergo integral promotion
	// 2) If the operand still do not mach, the the compiler will find the highest priority operand and implicitly
	// convert the operand to match
	
	exampleTypeID();
	return 0;
}
// Quiz time:
//  1) numeric promotion is a form of type conversion where a value is converted into a type of larger value
//  while numeric conversion is its inverse where a larger type is converted into a smaller type