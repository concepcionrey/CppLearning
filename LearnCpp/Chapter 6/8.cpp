#include <iostream>
// Chp 8
// Pointers & arrays

// Pointers & arrays are very related in C++

int array[5] = { 9, 7, 5, 3, 1 };

// Note: compiler will complain	
void printArraySize(int array[]) { // array[] is equivalent to *array, also a brief intro into pass by address
	// Recommendation: Favor the pointer syntax (*) over the array syntax ([]) for array function parameters.
	std::cout << "This is size of what is passed into this function: " << sizeof(array) << '\n';
}


int main() {
	// For instance, the varriable array contains the address of the first element in the array like a ptr
	std::cout << "The array has a address: " << array << '\n';

	std::cout << "Element 0 has address: " << &array[0] << '\n';

	// Although they produce the same results, their data types are implicitly different
	// an array is of type int[5] while a ptr to an array would be of type int*
	
	// General confusion lies in the evaluation of an array. When a fixed array is evaluated, it will decay
	// (implicitly converted) into a ptr to the first element of the array. All the elements of the array can
	// be accessed through the pointer but other information such as array size is lost
	
	// Example of dereferencing an array
	std::cout << *array << '\n'; // this will print array[0] == 9
	// Note that the array is not dereferenced but rather the array decays into a pointer and is dereferenced
	// from there
	
	// Difference between pointers & fixed arrays
	// 1) when using the sizeof operator, on an array it will return the full size of the array (array ength * element size)
	// 	  If used on a pointer, then the size of a memory address will be returned (in bytes)
	int *ptr = array;
	std::cout << "This is the size of the array: " << sizeof(array) << "\n";
	std::cout << "This is the size of a ptr pointing to an array: " << sizeof(ptr) << "\n";

	// A few chapters earlier, we mentioned that copying large arrays into functions can be quite expensive. Luckily,
	// C++ implicitly does nto copy arrays. When an array is passed into a function, a fixed array decays into a ptr
	// and the pointer itself is past into the function
	
	printArraySize(array);
	
	return 0;
}