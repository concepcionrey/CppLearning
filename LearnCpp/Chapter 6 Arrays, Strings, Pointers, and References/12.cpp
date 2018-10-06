#include <iostream>
// Chp 12
// Member selection with pointers & references

// It is common to either have a pointer or a reference to a struct or a class, it is possible to select the member of a struct using the member selection operator (.)


struct Person
{
	int age;
	double weight;
};

int main() {
	Person john;
	Person &ref = john; // This syntax will also work for references
	ref.age = 45;
	Person *ptr = &john;
	(*ptr).age = 17; // However, with ptrs, they need to be dereferenced first
	// NOTE: that the pointer dereference must be enclosed in parenthesis, because the member selection operator has a higher precedence than the dereference operator
	ptr->age =  57; // However, C++ offers an alternative to this awkward syntax "." is equivalent to "->"
	std::cout << john.age << '\n';

	return 0;
}

/* ===== SUMMARY ======
Rule: When using a pointer to access the value of a member, use operator-> instead of operator. (the . operator)
 */