#include <iostream>
// Chp 4a
// A first look at function parameters & arguments
// 
// function parameter: a variable used in a function where its
// value is provided by the caller of the function. 
// Eg.. caller("int x")
// 
// Each function's parameters are only valid within that function.
// Meaning, if two different functions both use x as a var, then these
// parameters are independent from each other

// argument: the value passed down from the caller during a function call
//Eg..

// printValue(5) 5 is the argument passed to printValue() from the caller

// How parameters and arguments work together:
// When a function is called, all the parameters of the callee are created
// as variables. The values of the argument are then copied into its matching
// parameter. This is known as ***pass by value***.

void printValue(int x) {
	std::cout << "This is the value provided: " << x << "\n";
}

void printValues(int x, int y) {
	std::cout << "This is x: " << x << " and this is y " << y << "\n";
}

int add(int x, int y) {
	return x + y;
}

int multiply(int z, int w) {
	return z * w;
}

int doubleNumber(int x) {
	return
}

int main () {
	int x;
	int y;
	std::cout << "Enter a value: ";
	std::cin >> x;
	std::cout << "Calling printValue(" << x << ")" << "\n";
	printValue(x);
	std::cout << "Finished call to printValue()" << "\n" << "\n";

	std::cout << "Playing around with function calls..." << "\n";
	std::cout << "Enter a value for x: ";
	std::cin >> x;
	std::cout << "Enter a value for y: "; 
	std::cin >> y;
	std::cout << "\n";
	
	std::cout << "Playing with basic functions..." << "\n";
	std::cout << "This is the result of adding " << x <<
	" + " << y << " = " << add(x,y) << "\n";
	std::cout << "This is the result of multiplying " << x <<
	" * " << y << " = " << multiply(x,y) << "\n";
	std:: cout << "\n";

	std::cout << "Playing with expressions..." << "\n";
	std::cout << add(x+y, 3*4) << "\n";

	std::cout << "Playing with variables..." << "\n";
	std::cout << add(x,x) << "\n";

	std::cout << "Playing with chaining function calls..." << "\n";
	std::cout << add(1,multiply(x,add(x,y))) << "\n";

	return 0;
}

// Quiz
// 1) This will not compile because mulitply has a return type of type void
// 2) a) Inside multiply , product is never passed back to the caller, b) 
// Inside main, multiply only passes 1 argument while it expects 2
// 3) 24
// 4)
