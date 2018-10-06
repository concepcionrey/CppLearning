#include <iostream>
#include "constants.h"
// Chp 9
// Const, constexpr, and symbolic constants
// 
// Sometimes, it's useful whe it's not possible to change
// the value of a variable after initialization

void doNothing(const int x) {};

int main() {
	// To define variables whose values cannot be altered at any point
	// besides initialization, the const keyword is used. Const variables
	// must be initialized at the moment of definition, otherwise the compiler
	// will complain.

	const double gravity{9.8}; // It's also possible to flip the order but this is preferred
	std::cout << "This is the value of gravity: " << gravity << "\n";

	// It's also possible to initialize const variables from non-const values
	std::cout << "Enter your age: ";
	int age{};
	std::cin >> age;
	const int userAge = age;
	std::cout << "User age is : " << userAge << "\n";

	// Generally, const is most often used with function parameters
	// By making a function parameter const, it does two things:
	// 1) it tells the caller that the function called will not change the value of the argument
	// 2) it ensures that the function call does not change the value of the argument
	
	// C++ has 2 types of consts that are used in 2 different situations; Compile time & Run time
	// 
	// Compile time: process of compiling a program. During this time, the compiler coverts the .cpp
	// file into a .o file (object file) and ensures that it is syntactically correct. Compile time constants
	// are constants that are resolved during compile time. 
	// 
	// Run time: the process of running a system. During this time, code is executed on a
	// line by line basis. Run time constants are constants whose values are defined at runtime
	// because the compiler cannot determine their values at compile time because their values are either
	/// from user inputs or passed down as an argument from another function
	// 
	
	// constexpr: a keyword introduced in C++11 to indicate that a constant is a compile-time constant
	constexpr int sum{4+5}; // 4+ 5 can be resolved during compile time

	// An exxample of an invalid use of constexpr
	/*
	std::cout << "Entering a user inputted value will break constexpr: ";
	int num;
	std::cin >> num;
	constexpr int numX{num};
	*/

	// General rules:
	// 1) Any variable that should not change valeus after initialization and whose intializer is known 
	// at compile-time should use constexpr
	// 2) Any variable that should not change values after initialization and whose initializer is not known
	// should use const.

	// In chapter 8, magic numbers were introduced as literals which represented constant values and highly suggested
	// to avoid using. To achieve the same results, however, it is possible to use symbolic constant.
	// 
	// symbolic constant: names given to constant literal value. There are 2 ways to use them
	// 
	// 1) The bad way: using object-like macros with a substitution paramter as symbolic constants.
	//  Using "#define identifier substitution_text" as a symbolic constant has 2 key issues with usage
	//  1.1) It is very tedious to debug since the instances are not replaced by the debugger 
	//  and require looking for its definition for every occurance.
	//  1.2) #defined values have a file scope, meaning it is possible to encounter naming conflicts when 
	//  the same identifier is used multiple times in various functions.
	// 
	// 2) the good way: use const variables
	constexpr int myValue{};
	constexpr int maxNameLength{45};
	std::cout << "Woof" << constants::myAge;
	// The easiest way of managing constants are creating a header file and declaring a namespace
	return 0;
}