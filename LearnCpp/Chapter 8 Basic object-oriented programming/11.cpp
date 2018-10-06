#include <iostream>
// Chp 11
// Static member variables

// static keyword: variables are destroyed at the end of the system's lifetime (not when they go out of scope)

// static member variables: member variables are shared across all instances/objects of the class\

// Defining and init static member var
// Since static member variables are tied to the class(they are treated similarly like global var), they must be 
// defined outside the class in the global scope
/*
If the class is defined in a .h file, the static member definition is usually placed in the associated code file 
for the class (e.g. Something.cpp). If the class is defined in a .cpp file, the static member definition is usually 
placed directly underneath the class. Do not put the static member definition in a header file (much like a global variable, 
if that header file gets included more than once, you’ll end up with multiple definitions, which will cause a compile error)
 */
class Something
{
public:
	static int s_value;	// treat it like a component of the class itself and not of an object
};

int Something::s_value = 1;

int main() {
	Something first;
	Something second;

	first.s_value = 2;
	std::cout << first.s_value << '\n';
	std::cout << second.s_value << '\n'; // observe by setting the 1st var, we have also set the sec too
	return 0;
}