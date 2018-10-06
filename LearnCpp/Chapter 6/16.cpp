#include <iostream>
#include <vector>
// Chp 16
// An introduction to STD::Vector

// C++ offers another option that makes working with dynamic arrays safer and easier

// WELCOME TO VECTORS
// 1) handles its own memory management, can create arrays whose length is set at run-time without needing to allocate and de-allocate using new/delete
// 2) resizable
// 3) performs self-cleanup preventing mem_leaks

int main() {
	std::vector<int> v {1,2,3}; // sample of creating an int vector
	v = {1,2}; // can be re-assigned using initializer lists

	// sample of accessing an index of a vector with bound checking
	std::cout << v.at(0) << '\n';

	std::cout << v.size() << '\n'; // It is also possible to request a vector's length similar to std::array

	v.resize(1); // vectors can resize themselves by calling resize(), However resizing is computationally expensive
	return 0;
}

/* ==== SUMMARY ======
Because variables of type std::vector handle their own memory management (which helps prevent memory leaks), remember their 
length, and can be easily resized, we recommend using std::vector in most cases where dynamic arrays are needed.

 */