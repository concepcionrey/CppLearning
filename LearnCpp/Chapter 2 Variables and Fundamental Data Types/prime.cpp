#include <iostream>

bool isPrime(int x) {
	bool res{true};
	for (int i{2}; i < x; i++) {
		if (x % i == 0) {
			res = false;
			break;
		} 
	}

	return res;
}

int main() {
	std::cout << "Enter a single digit integer: ";
	int x{};
	std::cin >> x;

	if (isPrime(x)) 
		std::cout << "The digit is prime!" << "\n";
	else 
		std::cout << "This digit is not prime!" << "\n";

	return 0;
}