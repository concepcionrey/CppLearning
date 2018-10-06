#include <iostream>

int getInput() {
	std::cout << "Enter a value: ";
	int val;
	std::cin >> val;
	return val;
}

void printResult(int result) {
	std::cout << "My result is " << result << "\n";
}

int main() {
	int result{getInput()};
	printResult(result);
	return 0;
}