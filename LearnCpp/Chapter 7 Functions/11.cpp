#include <iostream>
// Chp 11
// Recursion

// ...I know this already
// Rule: Generally favor iteration over recursion, except when recursion really makes sense.

int factorial(int n) {
	if(n <= 1) {
		return 1;
	} else {
		return n*factorial(n-1);
	}
}

int sumOfAll(unsigned int n) {
	if(n < 10) {
		return n;
	} else {
		return sumOfAll(n/10) + (n%10);
	}
}

void recursive(int n) {
	if(n > 1) {
		recursive(n/2);
	}
	std::cout << n % 2;

}

int main() {
	recursive(0);
	//std::cout << x << "\n";

	return 0;
}