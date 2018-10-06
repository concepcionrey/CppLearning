#include <iostream>

int readNumber() {
	int var;
	std::cout << "Please enter a var: ";
	std::cin >> var;
	return var;
}

void writeAnswer(int result) {
	std::cout << "The result of adding our values is: " << result << "\n";
}