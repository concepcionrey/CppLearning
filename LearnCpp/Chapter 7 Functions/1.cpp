#include <iostream>
// Chp 1
// Function parameters & arguments

// function parameter(formal parameter): variable declared in a function declaration
void foo(int x) {}; // declaration, function prototype --> x is a parameter

int main() {
	// argument(actual parameter): value that is passed to the function by the caller
	foo(6+1); //6 is the argument passed to x

	// When a function is called, all of the parameters of the functions are created as var, and the value of the arguments are copied(pass by value) into the parameter
}