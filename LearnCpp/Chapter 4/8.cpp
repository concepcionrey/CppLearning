#include <iostream>
// Chp 8
// Auto keyword

// Before C++11, the auto keyword was obselete in its purpose to define automatic duration for variable duration.
// However, its use has changed into the process of type inference, the compiler being able to deduce a variable's type.

// Trailing syntax: c++11 feature where return type is specified  after the rest of the function prototype

int add(int x, int y);
double divide(double x, double y);
void printSomething();
std::string calculateThis(int x, double d);

auto add(int x, int y) -> int;
auto divide(double x, double y) -> double;
auto printSomething() -> void;
auto calculateThis(int x, double d) -> std::string;

int main() {
	using std::cout;

	// A simple example of the auto keyword
	auto i{1+2}; // since 1 & 2 are integers (initializers), i is to be assumed of type int
	cout << "The value of i is: " << i << "\n";
	return 0;
}

// General notes
// 1) cannot be used for uninitialized variables or as the type for function parameters because the compiler
// will be unable to deduce what type the variable will be.