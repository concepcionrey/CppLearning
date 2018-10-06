#include <iostream>
#include <cmath>
// Chp 5
// Relational operators
// 
// There are 6 type of relational operators:
// 1) greater than: ">"
// 2) less than: "<"
// 3) greater than or equals: ">="
// 4) less than or equals: "<="
// 5) equality: "=="
// 6) inequality: "!="

int enterValue() {
	std::cout << "Enter a value: ";
	int x{};
	std::cin >> x;
	return x;
}

bool isAmostEqual(double a, double b, double epsilon) {
	// first, find the distance between a & b as a positive value. Then
	// check if this distance is less than whatever value is placed within epsilon.
	// If the values are close enough, the function will evaluate to true
	return fabs(a - b) <= epsilon;
}

// Donald Knuth introduced a more effective implementation since the former requires the
// user to consider an appropriate epsilon for their inputs

bool approximatelyEqual(double a, double b, double epsilon) {
	// Epsilon is used an a multiplier so its effects will be relative to its given inputs.
	// This will work for many cases but not for values that approach 0
	return fabs(a-b) <= ( (fabs(a) < fabs(b) ? fabs(b) : fabs(a)) * epsilon);
}

// A better version makes use of both an absolute & a relative epsilon

bool approximatelyEqualAbsRel(double a, double b, double absEpsilon, double relEpsilon) {
	// First, we check to see if the distance between a and b is less than our absEpsilon, 
	// which should be set at something very small (e.g. 1e-12). This handles the case where 
	// a and b are both close to zero. If that fails, then we fall back to Knuth’s algorithm.
	double diff{fabs(a - b)};
	if (diff <= absEpsilon)
		return true;
	return diff <= ( (fabs(a) < fabs(b) ? fabs(b): fabs(a)) * relEpsilon);
}

int main() {
	// a simple program describing relational operators in action
	int u1{enterValue()};
	int u2{enterValue()};

	if (u1 == u2) {
		std::cout << u1<< " equals " << u2 << "\n";
	} 

	if (u1 != u2) {
		std::cout << u1 << " !equals " << u2 << "\n";
	}

	if (u1 > u2) {
		std::cout << u1 << " > " << u2 << "\n";
	} else if (u1 < u2) {
		std::cout << u1 << " < " << u2 << "\n";
	} else if (u1 >= u2) {
		std::cout << u1 << " >= " << u2 << "\n";
	} else {
		std::cout << u1 << " <= " << u2 << "\n";
	}

	// Comparing floating point values are a little more complicated. Rather,
	// they are dangerous! This is because floating point values have small rounding errors
	// which can lead to unexpected results.
	
	// an example of this error:
	// d1 evaluates to 0.0100000000000005116
	// while d2 evaluates to 0.0099999999999997868
	double d1{100 - 99.99};
	double d2{10 - 9.99};

	if (d1 == d2) {
		std::cout << "d1 == d2" << "\n";
		} else if (d1 > d2) {
			std::cout << "d1 > d2" << "\n";
		} else if (d1 < d2) {
			std::cout << "d1 < d2" << "\n";
		}
	// To resolve this, create a function that calculates how close each value is to each other.
	// Traditionally a variable called "epsilon" is used to represent the closeness between values.
	std::cout << "Playing with floating point equality..\n";
	double a{0.1 + 0.1 +0.1 +0.1 + 0.1 +0.1 +0.1 +0.1 + 0.1 + 0.1};
	std::cout << 1e-8 << "\n";
	std::cout << approximatelyEqual(a, 1.0, 1e-8) << "\n";
	std::cout << approximatelyEqual(a-1.0, 0.0, 1e-8) << "\n";
	std::cout << approximatelyEqualAbsRel(a-1.0, 0.0, 1e-12, 1e-8) << "\n";
	return 0;
}