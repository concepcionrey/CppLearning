#include <iostream>
// Chp 11
// Reference Variables

// refererence: a 3rd type of variable that C++ supports. It a type that acts as an alias to another object or value

// There are 3 types of references:
// 1) references to non-const value:
// 2) references to const values:
// 3) r-value references

void changeRef(int &ref) {
	ref = 444;
}

int main() {
	int value{5};
	int &ref = value; // a reference to a variable value. Use the "&" character between the ref type and var name. They primarily are used for aliasing
	// Thus, ref is a reference to value
	
	std::cout << "Current value of of value: " << value << '\n';
	++ref;
	std::cout << "Updated value of value changed via ref: " << value << "\n";

	// Recall:
	// 1) l-values are objects that have a defined mem_address and persists beyond a single expression
	// 2) r-values are temporary objects that do not have a defined mem_address
	
	// Rules:
	// 1) references must always be initialized, null references are non-existant
	// 1.1) references to non const can only be initialized with non-const values
	// 1.2) non-const references cannot refer to r-values neither const values
	// 2) references cannot be reassigned
	
	// Usage:
	// References are primarily used as function parameters where the reference parameter acts as an alias for the argument, and no copy is made into the parameter

	changeRef(value);
	std::cout << "Updated value of value via using ref as a func param: "<< value << '\n'; 
	// Best practice: Pass arguments by non-const reference when the argument needs to be modified by the function.
	
	// Useful trick
	// 1) when references are used alongside C-style arrays, then the array does not decay into a ptr
	
	// References vs ptrs:
	// They are very similar, however, references are safer to use compared to ptrs since references cannot be null nor can they be assigned to other variables.
	// However, this limits the functionality. Hence the rule of thumb is to use pointers in situations where references are not sufficient


	return 0;
}
/* ====== Summary ======
References allow us to define aliases to other objects or values. References to non-const values can only be initialized with non-const l-values. References can not be reassigned once initialized.

References are most often used as function parameters when we either want to modify the value of the argument, or when we want to avoid making an expensive copy of the argument.

 */