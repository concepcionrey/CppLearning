#include <iostream>
// Chp 6
// Do while statements
// 

// Sometimes it is desired to execute a while loop at least once.

int main() {
	int pChoice{0}; // pChoice is declared outside of the do block to avoid automatic duration on the do block
	do {
		std::cout << "Select a difficulty: \n";
		std::cout << "0 || 1 || 2 \n";
		std::cin >> pChoice;
	}

	while (pChoice != 0 && pChoice != 1 && pChoice != 2); {
	} // the statement will execute once, the condition is checked, and execution will return to the top of the do-while loop

	std::cout << "You've selected difficulty: " << pChoice << "\n";
	return 0;
}