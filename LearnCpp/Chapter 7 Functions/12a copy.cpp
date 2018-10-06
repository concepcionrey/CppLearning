#include <iostream>
#include <cassert>
#include <array>
// Chp 12a
// Assert and static_assert

// One way to check if a program has violated any rules or assumptions is by writing a condition check that returns an err message. C++, however, provides
// another faster way to do so, this shortcut is known as assert

// assert: preprocessor macro that evaluates a condition at run-time. If true assert does nothing else return an err message and the program is terminated.
// This error message contains the conditional expression that failed, along with the name of the code file and the line number of the assert.

int getArrayValue(const std::array<int,10> &array, int index) {
	assert(index >= 0 && index <= 9);

	return array[index];
}

int main(){
	std::array<int,3> arr {1,2,3};
	getArrayValue(arr,-2);
	return 0;
}