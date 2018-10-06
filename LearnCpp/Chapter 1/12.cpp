#include <iostream>
#include "io.h"
// Chp 12
// Comprehensive Quiz
// 

/* 2)
int readNumber();
void writeAnswer(int result);

*/

/* 1)
int readNumber() {
	int var;
	std::cout << "Please enter a var: ";
	std::cin >> var;
	return var;
}

void writeAnswer(int result) {
	std::cout << "The result of adding our values is: " << result << "\n";
}

*/
int main () {
	int input1 = readNumber();
	int input2 = readNumber();
	int result = input1 + input2;
	writeAnswer(result);
	return 0;
}

// 1) CORRECT 

// 2) CORRECT

// 3) CORRECT

