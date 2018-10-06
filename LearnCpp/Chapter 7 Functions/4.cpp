#include <iostream>
// Chp 4
// Passing arguments by address

// There is one final way to pass arguments, pass by address

// pass by address: passing the address of an argument rather than the argument itself. This involves the func param being a ptr since the arg is an address


void foo(int *ptr) {
	*ptr = 6; // function foo() changes the value of the argument through the ptr parameter ptr
}

void printArray(const int *array, int length) { // pass by address is most commonly used with built-in arrays 
		if(!array)  // It is always good to ensure params passed by address are not null before using them
			return;
	for (int i{0}; i <length;++i) {
		std::cout << array[i] << '\n';
	}
	// NOTE: It is also possible to make the function param const, to ensure read-only values and prevent modification to the original values
}
int main() {
	int value{5};
	std::cout << "value = " << value << '\n';
	foo(&value);
	std::cout << "value = " << value <<'\n';

	int array[] = {1,2,3,4,5,6};
	printArray(array,sizeof(array)/sizeof(array[0])); // recall that fixed arrays decay into ptrs when passed as arguments, hence the inability to know its length
	return 0;
}

/*
Refer to chapter itself for additional information such as the break-down of pass by address such as understanding that everything is essentially pass by value
 */