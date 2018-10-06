#include <iostream>
// Chp 7
// Pointers

// a variable is a name for a place in memory that can hold a value
// when a program reads that variable, it locates the memory adress and checks
// what value is stored in that address

int main() {
	// the "&" address-of operator
	int x{5};
	std::cout << "This is the value: " << x << "\n";
	std::cout << "This is the mem_adress: " << &x << '\n';

	// the "*" dereference operator
	std::cout << "This is a sample of using the dereference operator: " << *&x << "\n";

	// Pointers: variabls that strictly hold other memory addresses as its value
	int *ptr{nullptr}; // a null int ptr, ptrs are like other variables and hold garbage when created
	double *dptr{nullptr}; // a null double ptr
	int *ptr_0, ptr_1; // watch out, ptr_1 is actually just an int!

	ptr = &x; // assigning a value to a ptr
	std::cout << "This line outputs the value of the pointer: " << ptr << '\n';
	std::cout << "This line outputs the value of the address that is pointed by the pointer: " << *ptr << '\n';

	*ptr = 25; // it is possible to change the value of the original variable through a pointer
	std::cout << "This is the value of x after using a pointer to change its value: " << x << '\n';
	// NOTE: never dereference invalid pointers

	return 0;
}

/* ======= Why use Pointers? =========
1) Arrays are implemented using pointers. Pointers can be used to iterate through an array (as an alternative to array indices) (covered in lesson 6.8).
2) They are the only way you can dynamically allocate memory in C++ (covered in lesson 6.9). This is by far the most common use case for pointers.
3) They can be used to pass a large amount of data to a function in a way that doesn’t involve copying the data, which is inefficient (covered in lesson 7.4)
4) They can be used to pass a function as a parameter to another function (covered in lesson 7.8).
5) They can be used to achieve polymorphism when dealing with inheritance (covered in lesson 12.1).
6) They can be used to have one struct/class point at another struct/class, to form a chain. This is useful in some more advanced data structures, such as linked lists and trees.
 */

// Quiz 
// 2) error on line 3, assigning a mem_address to an int variable