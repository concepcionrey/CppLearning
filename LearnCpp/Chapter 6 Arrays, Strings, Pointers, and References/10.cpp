#include <iostream>
// Chp 10
// Pointers and Const

// Every pointer used up till now has been pointing towards non-const what happens when either the pointer or value is const?




int main() {
	//sample of pointing to non-const
	int value{5}; // what if value was const?
	int *ptr = &value;
	*ptr = 6;

	// Pointer to a const value: a non-const pointer pointing to const value. However, it can also point to non-const values
	int value_0{5};
	const int *ptr_0{&value_0}; // whatever this points to will always be treated/indentified as a const value
	//*ptr_0 = 6; // this will fail since the ptr's nature points only to value of type const (unchangeable)
	value_0 = 56; // This is okay. The value is non-const when accesssed through a non-const identifier

	int value_1{1};
	ptr_0 = &value_1; // since the ptr is non-const, it is can be redirected to point to other things

	int value_3{3};
	int *const ptr_c{&value_3}; // a const pointer: is a pointer whose value cannot be changed after init
	//ptr_c = &value_0; // not okay, since the ptr is a const ptr
	*ptr_c = 45; // Since the variable value_3 is non-const, it is possible to change the value being pointed via dereference
	std::cout << "Updated value for ptr_c: " << *ptr_c << '\n';

	int value_4{44};
	const int *const ptr_cc{&value_4}; // a const pointer that points on to const values; use the const keyword beore the type and before the var name
	// Essentially, a const ptr pointing to a const value cannot be set to point to another mem_addresss nor can the value it points to be changed via the ptr

	return 0;
}

/*
A non-const pointer can be redirected to point to other addresses.
A const pointer always points to the same address, and this address can not be changed.
A pointer to a non-const value can change the value it is pointing to. These can not point to a const value.
A pointer to a const value treats the value as const (even if it is not), and thus can not change the value it is pointing to.

 */