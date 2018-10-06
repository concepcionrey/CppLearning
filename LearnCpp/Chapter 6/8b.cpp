#include <iostream>
// Chp 8b
// C-style string symbolic constants

// Rule: Feel free to use C-style string symbolic constants if you need 
// read-only strings in your program, but always make them const!

int main() {
	char c = 'Q';
	std::cout << &c << '\n';
	return 0;
}