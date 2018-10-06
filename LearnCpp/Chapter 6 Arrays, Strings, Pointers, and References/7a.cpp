#include <iostream>
// Chp 7a
// Null pointers

// Just like normal variables, when pointers are instantiated, they hold garbage values

// besides memory addresses, a pointer can hold 1 more type of value, a null value
// pointers that point to null are known as null pointers

float *ptr{0}; // ptr is now a null ptr

// pointers evaluate to false if they are null and to true if they point to non-null values
// Avoid dereferencing a null ptr. As mentioned in the previous chapter, dereferencing this pointer
// will lead towards undefined behaviour as they hold no addresses. What do you get from a non-existing address?

int main() {
	// evaluating the boolean state of a null ptr
	if (ptr) {
		std::cout << "I am not null!\n";
	} else {
		std::cout << "I am null! \n";
	}

	// In C++11, a new keyword called "nullptr", an rvalue constant, was introduced to reduce to inconsistency with
	// using 0 to notify a variable is null
	ptr = nullptr; // ptr is float pointer set to a null value
	return 0;
}

// Best practice: With C++11, use nullptr to initialize your pointers to a null value.