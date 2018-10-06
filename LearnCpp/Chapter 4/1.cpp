#include <iostream>
// Chapter 1
// Blocks (compound statements)
// 
// block: a group of different statements that are read together as a single line by the compiler
// Its purpose is to allow multiple statements to be used where using a single statement can normally
// be used.

void sampleBlockingFunction() {
	std::cout << "Enter a value: ";
	int value{0};
	std::cin >> value;

	if (value) {
		std::cout << value << " is a positive nonzero value \n";
		std::cout << "Double its value is " << value*2 << "\n";
	} else {
		std::cout << value << " is 0 \n";
		std::cout << "Can't really perform much operations on 0 \n";
	}
}

int main() {
	sampleBlockingFunction();
	return 0;
}