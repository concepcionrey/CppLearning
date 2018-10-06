#include <iostream>
// Chapter 3c
// using statements
// 

// It is possible to be more efficient with writing code. In the C++ language, there exists a statment called
// a "using" statement.
// 
// using declaration: a statement that informs the compiler that a certain identifier/function will use a specific
// defintion from a certain namespace from now on.
// 
// using directive: a statement that informs the compiler it will use all identifiers from a given namespace as its
// primary source for definitions.

namespace  a
{
	int x{10};
}

namespace b
{
	int x{10};	
}

int main() {

	/* 
	Example of ambiguity resutling in an error complaint from the compiler. The program will fail to compile
	since it is unable to resolve which version of x it will use
	using namespace a;
	using namespace b;
	*/

	using std::cout; // informs the compiler that the std version of cout will be used
	cout << "Hello World! \n";

	// When using "using" statements in a block, its effect will only apply to the block that it was
	// declared in. This helps reduces the chances of coming across naming collisions.
	return 0;
	}

// General rules:
// 1) Avoid using using directives entirely
// 2) It is impossible to cancel the effects of a using statement in the block it has been defined in (consider limiting scope)
// 3) Preferrable to use "using" declarations in lieue of directives (within a function & not at global scope)