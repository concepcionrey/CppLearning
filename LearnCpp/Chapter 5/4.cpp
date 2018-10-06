#include <iostream>
// Chp 4 
// Goto statements

// Avoid using goto statements as it generally leads to systems being filled to the brim with spaghetti code (code whose execution path is as
// tangled as a bowl of spaghetti)

int main() {
	double x{0.0};

tryAgain: // statement label
	std::cout << "Enter a non-negative number: ";
	std::cin >> x;

	if (x < 0.0) {
		goto tryAgain;
	}
	// The only rule regarding goto statements is they create errors when jumping forward over variables
	// that are initialized in the same block as the goto statement
	std::cout << x << " is a non-negative number! \n";
	return 0;
}