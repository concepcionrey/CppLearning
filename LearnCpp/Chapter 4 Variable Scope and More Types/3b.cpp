#include <iostream>
#include "foo.h"
#include "goo.h"
#include "add.h"
#include "subtract.h"
// Chp 3b
// Namespaces

// naming conflict: a problem that occurs when two identifiers are introduced into the same scope (global scope) and the 
// compiler cannot solve the ambiguity in determining which version of an identifier to use.
// 
// namespace: an area of code that guarantees all identifiers/functions defined are unique (no possibilty of naming
// collisions). 
// 1) By default global variables & normal functions are in global scope.
// 2) It's legal to declare namespace blocks in multiple locations (either across multiple files & multiple places in the
// same file)
// 3) It is also possible to make nested namespaces but it is advised to not use it
/* Since Goo is within Foo it is possible to access Goo via Foo::Goo::g_x
namespace Foo
	{
	namespace Goo
		{
			const int g_x{5};
		}
	}
 */

// Scope resolution operator("::"): adds the ability to prefix a namespace to an identifier telling the compiler where
// to obtain the definition of a certain identifier

// In order to prevent naming collision errors with the compiler and the linker, namespaces ensure that identifiers don't
// exist in the global scope but towards their own namespaces.



int main () {
	/* This would generate an error since the compiler is unsure which header file it needs to access
	std::cout << doSomething(3,4) << "\n";
	*/

	// Using the doSomething() that exists in Goo
	std::cout << Goo::doSomething(4,3) << "\n";
	// Using the doSomething() that exists in Foo
	std::cout << Foo::doSomething(4,3) << "\n";	

	// Example of 2 different header files using the same namespace
	std::cout << "Using basicMath ns (from different files)... \n";
	std::cout << basicMath::add(4,3) << "\n";
	std::cout << basicMath::subtract(4,3) << "\n";

	return 0;
}