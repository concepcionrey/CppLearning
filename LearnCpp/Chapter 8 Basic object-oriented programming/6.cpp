#include <iostream>
// Chp 6
// Overlapping and delegating constructors

// It's not uncommon to have a class with multiple constructors that have overlapping functionality.

class Foo {

private:
	void doA() { // another solution is to create a common function that can be called by both constructors
		// code to do A
	}
public:
	Foo() {
		// do A
	};
	Foo(int value):Foo() { // Observe that there are 2 constructors and both require to do A which is duplicated (not good)
		// Do A
		// Do B
	}

	// One solution to remove duplication but does not work with pre-C++11 compilers
	//Foo(): Foo() { // sample of constructor chaining

	//} // it will not work because in pre-C++11 compilers, calling a constructor from another constructor
	// creates a temporary object that gets destroyed while the original constructor remains untouched

};
// NOTE: It is fairly common to include an Init() function that initializes member variables to their 
// default values, and then have each constructor call that Init() function before doing its parameter-
// specific tasks. This minimizes code duplication and allows you to explicitly call Init() from wherever you like.


// C++11 introduces constructor chaining/ constructor delegation that allows constructors to call other constructors
// When delegating constructors note 2 things
// 1) when using chaining, a constructor can strictly only delegate or initialize vars
// 2) it's possible to create an infinite loop via chaining construc A to construct B which chains back to construct A
int main(int argc, char const *argv[])
{
	
	return 0;
}