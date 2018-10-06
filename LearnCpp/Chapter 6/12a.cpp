#include <iostream>
#include <string>
// Chp 12a
// For-each loops

// C++11 introduces a new type of loop called a for-each loop (also known as a range-based loop) that provides a simpler and safer method of iteration (of every element)

/*
for (element_declaration : array)
	statement;
 */

void quiz() {
	std::string array[] {"Alex","Betty","Caroline","Dave","Emily","Fred", "Greg", "Holly"};
	std::cout << "Enter a name: ";
	std::string input;
	std::cin >> input;

	for(auto &name : array) {
		if (name.compare(input) == 0) {
			std::cout << input << " was found.\n";
			return;
		}
	}
	std::cout << input << " was not found.\n";
}

int main() {
	// Sample of for-each loop
	int array[] {1,2,3,4,5,6,7,8,9};

	for (auto& n: array) { // NOTE: that for the element_declaration that "auto&" is used. This ensures that a copy of the array is not created and the original array is used
		std::cout << n <<  " ";
	}
	std::cout << "\n";
	// Rule: Use references or const references for your element declaration in for-each loops for performance reasons.
	
	// NOTE: for-each doesn't work with pointers to an array
	/*
	{
    int sum = 0;
    for (const auto &number : array) // compile error, the size of array isn't known
        sum += number;
 
    return sum;   
}
	THIS WILL FAIL
	 */
	quiz();
	return 0;
}

/* ==== SUMMARY ======
	For-each loops provide a superior syntax for iterating through an array when we need to access all of the array elements in forwards sequential order. It should be preferred 
	over the standard for loop in the cases where it can be used. To prevent making copies of each element, the element declaration should ideally be a reference.
 */