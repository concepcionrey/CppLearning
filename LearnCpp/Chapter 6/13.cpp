#include <iostream>
// Chp 13
// Void pointers

// void pointer: also known as a generic pointer, it is a pointer that can point to an object of any data type

int main() {
	void *ptr = nullptr; // example of a void pointer
	int a{5};
	float b{23.4f};

	// sample of how void pointer can be redirected to different data types
	ptr = &a;
	ptr = &b;

	ptr = &a;
	// However, since it is unaware of what type it is pointing to, it requires a cast in-order to deference its value. It is not possible to dereference a void ptr
	int *iPtr = static_cast<int*>(ptr);
	std::cout << *iPtr << "\n"; // It is up to the programmer to be aware what casting is required

	/* ===== GENERAL ===== 
	It is not possible to do pointer arithmetic on a void pointer. This is because pointer arithmetic requires the pointer to know what size object it is 
	pointing to, so it can increment or decrement the pointer appropriately.
	 */
	return 0;
}


/* ==== SUMMARY ===
In general, it is a good idea to avoid using void pointers unless absolutely necessary, as they effectively allow you to avoid type checking. 
This allows you to inadvertently do things that make no sense, and the compiler won’t complain about it.
 */

/*
Quiz:
1) a void pointer is a pointer whose type is void and can be used to point to anything while a null pointer is a pointer whose currently pointing to a null or not a mem_address

 */
 
 