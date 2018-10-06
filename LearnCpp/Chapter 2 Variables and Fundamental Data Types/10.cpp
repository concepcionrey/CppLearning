#include <iostream>
// Chp 10
// Quiz
// 

// 1) Symbolic constants are better than literal constants because they provide
// cclarity & context to the constant's inclusion in the system. The reasons that
// #defined symbolic constants are because it creates difficulty in debugging a system.
// 
// 2) 
// a) int
// b) bool
// c) const double
// d)  [X] int16_t
// e) float
// f) long
// g) char
// h) [x] int16_t

double userInput() {
	std::cout << "Enter a double value: ";
	double var{};
	std::cin >> var;
	return var;
}

char userOperator() {
	std::cout << "Enter a valid operator: ";
	char op{};
	std::cin >> op;

	if (op == '+' || op == '-' || op == '*' || op == '/') {
		return op;
	} else {
		std::cout << "Invalid operator" << "\n";
	}
	return op;
}

void printResult(const double u1, const double u2, const char u3) {
	switch(u3) {
		case '+':
			std::cout << u1 << " + " << u2 << " = " << u1+u2 << "\n";
			break;
		case '-':
			std::cout << u1 << " - " << u2 << " = " << u1-u2 << "\n";
			break;
		case '*':
			std::cout << u1 << " * " << u2 << " = " << u1*u2 << "\n";
			break;
		case '/':
			std::cout << u1 << " / " << u2 << " = " << u1/u2 << "\n";
			break;
	}
}

int main() {
	// 3)
	double u1{userInput()};
	double u2{userInput()};
	char u3{userOperator()};

	printResult(u1,u2,u3);
	return 0;
}