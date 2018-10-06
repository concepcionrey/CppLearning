#include <iostream>
#include <cassert>
#include <array>
// Chp 12a
// Assert and static_assert

// One way to check if a program has violated any rules or assumptions is by writing a condition check that returns an err message. C++, however, provides
// another faster way to do so, this shortcut is known as assert

// assert: preprocessor macro that evaluates a condition at run-time. If true assert does nothing else return an err message and the program is terminated.
// This error message contains the conditional expression that failed, along with the name of the code file and the line number of the assert.

int getArrayValue(std::array<int,10> &array, int index) {
	assert(index >= 0 && index <= 9);

	return array[index];
}

// Sometimes, asserts won't be very expressive

void checkIfNull() {
	int *ptr = nullptr;

	assert(ptr && "nullptr detected"); // using C-style strings with logical AND is an option to make asserts more descriptive. This works because C-style strings
									   // always evals to true
}

// NOTE: asserts should (ideally) never be encountered in production code (because your code should already be thoroughly tested

// C++11 introduced a new type of assert, static_assert. Unlike assert, static_assert resolves at compile-time
static_assert(sizeof(long) == 3, "long must be 8 bytes"); // test to check if assert was evaluated
// NOTE: In C++11, a diagnostic message must be supplied as the second parameter. In C++17, providing a diagnostic message is optional.
int main(){
	std::array<int,10> myarray { 2, 16, 77, 34, 50 };
	checkIfNull();
	//int x = getArrayValue(myarray,-23); // sample of asserting in action
	return 0;
}