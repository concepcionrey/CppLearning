#include <iostream>
// Chp 11a
// References and const

// Similar to const ptrs, it is also possible to declare a reference to a const value, they are known as const references

void someFnc() {
	const int &ref = 3+4;
	std::cout << ref << '\n';
}

void changeVal(const int &ref) {
	// const references can also be used as function params, the benefit is ensuring that the function callee will be unable to change the original variable vice-versa
	return;
}

int main() {
	const int value{5};
	const int &ref = value; // ref is a reference to a const value

	const int &ref2 = 6; // It is also possible for const references to refer to r-values
	// normally r-values have expression scope, meaning values are destroyed at the end of the expression of their creation but references
	// are able to extend their lifetime to match the lifetime of the reference

	someFnc();

	// General:
	// variables that are not pointers or fundamental data types should be generally passed by reference while fundamental data ypes should be passed by value unless specified

	return 0;
}

/* ===== SUMMARY ====
Rule: Pass non-pointer, non-fundamental data type variables (such as structs) by (const) reference.
 */