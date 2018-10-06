#include <iostream>
// Chp 5
// If statements
//

// If statements are the most basic conditional branches that exist in C++. It takes the form of
// if (expression)
// 	statement
// else
// 	statement 2

// General things to know about if statements:
// 1) If statements without expliclity placing blocks will implicitly place blocks for 1 statement after the expression.
// 2) variables defined within if statements have local scope and automatid duration.
// 3) It is possible to use logical operators, nest & chain if statements (using else if) 

int main() {
	using std::cout;

	// A simple example of if statements
	cout << "Enter a number: ";
	int x{0};
	std::cin >> x;

	if(x > 10) {
		cout << x << " is greater than 10! \n";
	} else {
		cout << x << " is equal or not greater than 10 \n";
	}

	// A little more complex example of an if statement
	cout << "Enter another number: ";
	int y{0};
	std::cin >> y;

	if (y > 10) {
		cout << "y is greater than 10 \n";
	} else if (y == 10) {
		cout << "y is equal to 10 \n";
	} else {
		cout << "y is less than 10 \n";
	}

	// It is possible to omit a part of an if statement using null statements. It is declared using the ";" character.
	// Null statements are typically used when the language requires a statement to exist but the programmer doesn’t need one.
	int z{0};
	if(z >10) // an example of using null statements to omit the statement of an if statement
		;
	return 0;
}