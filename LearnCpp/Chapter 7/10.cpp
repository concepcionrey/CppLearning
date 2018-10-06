#include <iostream>
#include <vector>

// Chp 10
// std::vector capacity & stack behaviour

int main() {	
	int *array = new int[10] {1,2,3,4,5}; // consider this example
	// this array has a length of 10 but 5 elements have been allocated
	delete[] array;
	// STD::vector has the uniqueness to keep track of length & capacity.
	// length: how many elements are being used in the array
	// capacity: how many elements were allocated in memory
	std::vector<int> v{0,1,2};
	v.resize(5); // intentionally requesting that the first 5 elements of this vector are in-use
	std::cout << "Length: " << v.size() << '\n';
	std::cout << "Capacity: " << v.capacity() << '\n'; // capacity is guaranteed to be at least as large as the array length of a vector

	// Why worry about this? resizing is computationally expensive and would prefer to minimize the # of resizes
	// Observe
	std::vector<int> arr;
	arr = { 0, 1, 2, 3, 4 };
	std::cout << "length: " << arr.size() << "  capacity: " << arr.capacity() << '\n';
	arr = { 9, 8, 7 };
	std::cout << "length: " << arr.size() << "  capacity: " << arr.capacity() << '\n';
	// That a smaller array was assigned to the vector but it did not reallocate its memory since the capacity did not change. Only the length changed.
	
	// NOTE: that a vector will not resize itself based on a call to the subscript operator or at() function!
	
	// Vectors can also be used as stacks and the importance of memory management and capacity come into play here
	// Stack-based functions on vectors will resize when necessary
	// To alleviate this issue, it is possible to declare ahead of time the capacity that allocated for the vector using "reserve()"
	// NOTE: When resizing, it is possible for the vector to allocate extra capacity than needed.
	return 0;
}

// Time left 7m33s from 30