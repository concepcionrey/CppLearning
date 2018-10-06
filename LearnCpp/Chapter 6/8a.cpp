#include <iostream>
// Chp 8a
// Pointer arithmetic & array indexing


// C++ allows the ability to perform integer addition and subtraction on pointers.
// ptr+1 will nto return the mem_address after the ptr but the mem_address of the next
// object of that the type that ptr points towards.
// Eg. 
// If an integer ptr points +3 from its original spot, it will point to the address 3 integers after ptr
// or 12 bytes

int main() {

	// sample of scaling: compiler multiplying the integer by the size of the object being pointed to
	int value = 7;
	int *ptr = &value;

	// Observe each address differs by 4, since an integer is 4 bytes on the machine used
	for(int i{0}; i<4; ++i) {
		std::cout << ptr+ (i+1) << '\n';
	}

	// This is helpful in pointing out that arrays are also laid out in sequential order
	return 0;
}