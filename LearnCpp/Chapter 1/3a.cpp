#include <iostream>
// Chp .3a
// A first look at cout, cin and endl

// cout (character output) is an iostream function that is used
// to output text from the console
void callCout () {
	std::cout << "Hello World!" << "\n";
}

// cout is often used with the "<<" operators to print many things
// or multiple lines
void callCoutWithMultipleLines () {
	int x = 4;
	std::cout << "X is equal to the value of " << x << "\n";
}

// cin (character input) is the opposite of cout where cin reads user
// input from the console and stores them into a variable in a program
void callCin () {
	int x;
	std::cout << "Please enter a value for x ";
	std::cin >> x;
	if (!std::cin) {
		std::cout << "A number was not provided" << "\n";
	} else {
	std::cout << "X is equal to the user input value " << x << "\n";
	}
} 


// Not mention here is std::endl (end line) whose purpose is to
// flush the buffer and start outputting at a "\n"
int main () {
	callCout();
	callCoutWithMultipleLines();
	callCin();
	return 0;
}

// NOTES::
// Validating numeric input, it is possible to use call !std::cout
// which I believe is a type checker against the user input and the type
// asked
