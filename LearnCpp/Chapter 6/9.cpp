#include <iostream>
// Chp 9
// Dynamic memory allocation with new and delete

// C++ has 3 types of memory allocation
// 1) Static memory allocation: happens for static & global variables. memory is allocated and 
// persists until the end of a program life cycle
// 2) Automatic memory allocation: happens for local variables and function parameters, memory for
// these type of variable are allocated and destroyed in the block they were defined in
// 3) Dynamic memory allocation: the topic of this chapter

// 1) & 2) have two things in common:
// 1) the size of the variable/array must be known at compile time
// 2) memory allocation and deallocation happens automatically (when the variable is instantiated & destroyed)
// 
// However...these will eventually come across situations where problems can occur especially with external file input

// A possible solution
char name[25]; // make a guess of the size of the variable we'll need during runtime
// However, it's a naive solution, what if the average name length was (25/2)? therefore, memory space is unused and 
// wasted

// Dynamic memory allocation: ability for running program to request memory from the OS when needed. This space comes from
// the heap

int main() {
	int *ptr = new int {5}; // To dynamically allocate new memory, we used the keyword "new" to request
						// an integer's worth of memory is requested from the OS, and a ptr containing the address is made
	
	// Unlike static or automatic memory, the program itself is responsible for  requesting and 
	// disposing of dynamically allocated memory.

	delete ptr; // to free the dynamically allocated memory, we used the keyword "delete" to free the memory back
				// back to the OS, to be used elsewhere
	ptr = nullptr; // ensures ptr does not become a dangling ptr

	// Rule: Set deleted pointers to 0 (or nullptr in C++11) unless they are going out of scope 
	// immediately afterward.

	// Thew "new" operator can actually fail,
	// When requesting memory from the heap, sometimes there isn't any free memory to provide
	// If this occurs, then bad_alloc exception is thrown
	int *value = new (std::nothrow) int{5}; // instead of throwing an exception, value will be set to a null ptr
	delete value;
}

// Conclusion:
/*
Operators new and delete allow us to dynamically allocate single variables for our programs.

Dynamically allocated memory has no scope and will stay allocated until you deallocate it or the program terminates.

Be careful not to dereference dangling or null pointers.
 */