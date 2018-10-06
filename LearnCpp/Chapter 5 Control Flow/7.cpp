#include <iostream>
// Chp 7
// For statements
//

// The most versatile & utilized looping statement in C++.

// sample application using a for loop
void exponentCalculator(int const base, int const exponent) {
	int result{1};
	for(int i{0}; i<exponent; ++i) {
		result*= base;
	}
	std::cout << result << "\n";
}

void quiz1() {
	for (int i{0}; i<=20; ++i) {
		if( i%2 == 0) {
			std::cout << i << "\n";
		}
	}
}

void quiz2(int const n) {
	int result{0};
	for (int i{1}; i <= n; ++i) {
		result+=i;
	}
	std::cout << result << "\n";
}

int main() {
	using std::cout;
	for (int i{0}; i <= 10; ++i) { // the for loop is composed of the init statement || condition expression || end-expression
		cout << i << " ";
	}
	cout << "\n";
	exponentCalculator(2,2);

	// Is is possible to omit statements within the expression portion of the for loop
	int init{0};
	for (; init <10;) {
		cout << init << " ";
		++init;
	}

	cout << "\n";
	// It is also possible to have multiple declarations within the expression using the comma operator
	
	for (int i{10}, j{0}; i > 0 && j < 10; --i,++j) {
		cout << i << " " << j << "\n";
	}

	quiz1();
	quiz2(5);
	// Quiz 3:
	// The unsigned keyword was used so when the count arrives at 0 and is decremented, it will not go negative but evaluate to the highest possible value for that data type
	return 0;
}

// General advice:
// 1) Be careful of off-by-one errors, a bug that occurs when a for loop occurs one too many or one too short iterations.
// 2) Omitted condition expressions always evaluate to true
//