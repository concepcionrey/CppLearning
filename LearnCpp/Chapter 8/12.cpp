#include <iostream>
// Chp 12
// Static member functions

// When static member vars are public, they are accessibl via the scope resolution operator. What if they're private?

class Something
{
private:
	static int s_value;

public:
	static int getValue() {return s_value;} // sample of using static functions
};

int Something::s_value = 1; // initializer

// The "this" ptr: static member functions do not have a this ptr since they are not attached to a object
// Accesing other vars: static member functions are able to access other static members but not non-static members
// and this is because these vars require an object to be instantiated

int main() {
	// NOTE: it is possible to create public member functions to obtain private static mem vars but that requires
	// creating objects. It is possible to get away with it via using static member functions instead
	std::cout << getValue() << '\n';
}

// Dangers of creating pure static classes also known as monostates:
// all static members are instantiated once, therefore it is not possible to generate more than one copy for situations
// that requires another instance of the class unless duplicating the code with a different name. It generates the 
// same behaviour and problem as g_variables

// It is not possible to create static constructors in C++

// Summary 
// Static member functions can be used to work with static member variables in the class. An object of the class is not required to call them.
// 