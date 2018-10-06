#include <iostream>
// Chp 14
// Pointers to pointers & dynamic multi-dimensional arrays

// pointer to a pointer: a pointer that holds the address of another pointer

int main() {
	int value{5};
	int *ptr = &value;
	int **ptrptr = &ptr;

	std::cout << **ptrptr << '\n'; // sample of  dereferencing the value of the pointer that is being pointed at by the ptrptr, dereferencing it once will generate the mem_address of ptr
	
	// NOTE: It is not possible to set a pointer to a pointer directly by value
	/*
	ptrptr = &&value WILL FAIL
	 */	
	
	// Array of pointers: ptrptr have a few uses such as dynamically creating an array of ptrs
	int **array = new int*[10]; // array elements become pointer to integers
	delete[] array;

	// Pointers are also used to create dynamically allocated multi-dimensional arrays
	int fArray[10][10]; // a fixed multi-dimensional array

	auto dArray = new int[10][50]; // auto can guess the type of the array, one way of generating a dynamically allocated multi-dimensional array assuming right-most value is a compile time constant

	// assuming it is not a compile time constant, we can do this instead
	int **dmArray = new int*[5];
	for(int i {0}; i < 5; ++i) {
		dmArray[i] = new int[5]; // Our dynamic two-dimensional array is a dynamic one-dimensional array of dynamic one-dimensional arrays!
	}

	dmArray[0][1] = 23;
	std::cout << dmArray[0][1] << '\n';
	
	// Deleting also requires looping as well
	for (int i{0}; i < 5; ++i) {
		delete[] dmArray[i];
	}
	delete[] dmArray; // last step that needs to be performed

	/*
	Note that we delete the array in the opposite order that we created it. If we delete dmArray before the array elements, then we’d have 
	to access deallocated memory to delete the array elements. And that would result in undefined behavior.
	 */
	
	// NOTE: It is also possible to instead generate a 1D array of x*y for simplicity

	// NOTE: It is possible to also create non-rectangular arrays
	return 0;
}


/* ==== SUMMARY ======
to pointers unless no other options are available, because they’re complicated to use and potentially dangerous.
 */