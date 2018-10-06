#include <iostream>
#include <array>
#include <algorithm>
// Chp 15
// Introduction to STD::array

// There are problems with using fixed & dynamic arrays. Fixed arrays decay into ptrs while dynamic arrays are messy regarding deallocation and can generate complexity issues later on

// WELCOME STD::ARRAY

void printSize(const std::array<int,5> &myArray) {
	std::cout << "The length of the array is " << myArray.size() << '\n';
}

int main() {
	std::array<int,3> myArray; // sample of using std::array to generate an int array of size 3 elements
	// NOTE: the length must always be set at compile time
	
	std::array<int,5> myArray_1 {1,2,3,4,5}; // it is possible to initialize arrays with uniform initialization
	myArray_1 = {5,4,3,2}; // It is also possible to assign arrays with initializer lists

	// sample of iterating the contents of myArray_1 using for each loop
	for (auto& n:myArray_1) {
		std::cout << n << " ";
	}
	std::cout << '\n';

	// std::array has another option for accessing elements besides the subscript operator
	std::cout << "Using the .at() operator to access myArray_1's element at index 0: " << myArray_1.at(0) << '\n';
	// The benefit of using the ".at()" opeator is it peforms bound-checking 
	
	std::cout << "To obtain the size of an array use .size(), the size of myArray_1: " << myArray_1.size() << "\n"; 

	// Since std::array prevents arrays from decaying into ptrs, it is possible to pass an array as a function parameter
	printSize(myArray_1);
	// Rule: Always pass std::array by reference or const reference
	
	// It is also possible to sort the array!
	std::array<int,5> myUnsortedArray {3,5,2,1,4};
	std::sort(myUnsortedArray.begin(), myUnsortedArray.end());

	return 0;
}

/* ===== SUMMARY ======
std::array is a great replacement for build-in fixed arrays. It’s efficient, in that it doesn’t use any more memory than built-in fixed arrays. 
The only real downside of a std::array over a built-in fixed array is a slightly more awkward syntax, and that you have to explicitly specify the array 
length (the compiler won’t calculate it for you from the initializer). But those are minor quibbles — we recommend using std::array over built-in fixed 
arrays for any non-trivial use

 */