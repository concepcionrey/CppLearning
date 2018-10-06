#include <iostream>
#include <vector>
// Chp 6
// Typedef & aliasing
//

// Sometimes repeated returns types need to be retyped into another type. Typedef allows the possibility
// of creating an alias for a known type.

// The advantages of using typedef include simplyifying complex types
typedef std::vector<std::pair<std::string, int>> pairlist_t;

// C++11 introduced type alias. It introduces a name that can be used as a synonym for a type. Always favor this.
// using pairlist_t = std::vector<std::pair<std::string, int>>
bool hasDuplicates(pairlist_t pairlist) {};

int main() {
	std::int8_t i{97};
	std::cout << i << "\n"; // this prints out a not 97
	return 0;
}

// Quiz
// 1)
/*
using error_t = int;
error_t printData();
 */

// 2)
/*
typedef int error_t;
error_t printData();
 */