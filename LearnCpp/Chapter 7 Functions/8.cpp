#include <iostream>
#include <algorithm>
#include <functional>

// Chp 8
// Function Ptr

// Function ptr: ptrs that point to functions instead of variables


using validateFnc = bool(*)(int,int); // It is also possible to create an alias for fncptrs, this is identical to also using typedef but prefer using this for cleaner syntax
// Instead of doing this "bool validate(int x, int y, bool (*fcnPtr)(int, int));", it becomes this bool validate(int x, int y, validateFcn pfcn)

// In C++11, another means of defining fnc ptrs were introduced. Using the "functional" library.
// bool validate(int x, int y, std::function<bool>(int,int)> fcn) --> notice that the return type and func params are nested within the brackets

int foo() {
	return 5;
}

int goo() {
	return 6;
}

int loo(int x){
	std::cout << x << "\n";
	return 0;
}

bool ascending(int x,int y) {
	return x > y;
}

bool descending(int x, int y) {
	return x < y;
}

// sample of using fnc ptrs that uses user-defined comparisons
void selectionSort(int *array, int length, bool (*comparisonFcn)(int,int)= ascending) { // It is possible to provide default params for func being passed
	for (int i{0}; i < length; ++i) {
		int preferredIndex = i;
		for(int j{i+1}; j < length; ++j) {
			if(comparisonFcn(array[preferredIndex], array[j])) {
				preferredIndex = j;
			}
		}
		std::swap(array[i],array[preferredIndex]);
	}
}
 
// Recall this worn't work since for each loops don't work with ptrs to arrays and arrays decay into ptrs when passed as arguments
void printArray(int *array) {
	//for (auto&n :array) {
	// 	std::cout << n << " ";
	// }
}


int main() {
	int (*fncPtr)(int); // how to instantiate a func ptr, NOTE the use of a parenthesis to enclose the "*" and name otherwise the compiler would intepret it as a forward declaration
	// called fncPtr that takes no arguments and returns an int ptr
	// fncPtr = foo; // assign the function foo not the return value of foo to fncPtr
	// NOTE that the type of the function ptr must match the type of the function
	
	// To call a function using a func ptr can be done in two ways
	// 1) explicit dereference
	fncPtr = loo;
	(*fncPtr)(5);
	// 2) Implicit dereference
	fncPtr(7);

	// NOTE: that fnc parameters cannot work with default params since default params are resolved at compile time while fnc ptrs are resolved at run-time. Simply pass values for any
	// default params in this case
	
	// One of the important uses of fnc parameters is to pass functions as an argument to other functions, this is known as a callback function
	
	 int array[9] = { 3, 7, 9, 5, 6, 1, 8, 2, 4 };
	 selectionSort(array,9,ascending);
	 for(int i{0}; i < 9; ++i) {
	 	std::cout << array[i] << " ";
	 }
	 std::cout << "\n";
	 selectionSort(array,9, descending);
	 for(int i{0}; i < 9; ++i) {
	 	std::cout << array[i] << " ";
	 }


	return 0;
}


// Quiz

/* 
Function pointers are useful primarily when you want to store functions in an array (or other structure), or when you need to pass a function to another function. 
Because the native syntax to declare function pointers is ugly and error prone, we recommend you use typedefs (or in C++11, std::function).
 */