#include <iostream>
// Chp 6
// Boolean values and an introduction to if statements

// boolean variables: variables that only have 2 specific values. 1 (true) &
// 0 (false).


int main() {
	bool b; // an example of a boolean value
	bool b1{false};
	bool bNot{!true}; // an example of using the "!" character

// Boolean values are not stored as true or false. Instead they are stored as integers
// as previously mentioned. They evaluate to 1 & 0 if std::cout by a progammer. 

	std::cout << "This is what happens when you cout true: " << true << "\n";
	std::cout << "This is what happens when you cout false: " << false << "\n";

	std::cout << "The same applies with variables like b1{false}: " << b1 << "\n";
	std::cout << "And its negation: " << !b1 << "\n"; 

	std::cout << "This can be overcome by using the function std::boolalpha: " << "\n";
	std::cout << std::boolalpha;
	std::cout << "This is true: " << true << "\n";
	std::cout << "This is false: " << false << "\n" << "\n";

// The most common use for booleans is if-else statements
	if (b1 == false) std::cout << "b1 is false" << "\n"; // an example but unclear in readability

	if (b1 != false) 
		std::cout << "b1 is true" << "\n";
	else 
		std::cout << "b1 is false" << "\n" << "\n";

// A simple application of using these statements
	std::cout << "Enter an integer: ";
	int x{};
	std::cin >> x;
	std::cout << "Enter another integer: ";
	int y{};
	std::cin >> y;
	if (x == y) 
		std::cout << x << " & " << y << " are equivalent!" << "\n";
	else
		std::cout << "They are not equivalent" << "\n";

// NOTE: any non-zero value that is provided as input will always run the first
// if statement

// Inputting boolean values are also a pain in the a**
	bool c;
	std::cout << "Enter a value for c: ";
	std::cout << c; // somehow it doesn't give a garbage value but converts to 0
	std::cin >> c;
	std::cout << "The current value for c is: " << c << "\n";
	return 0;
}