#include <iostream>
// Chp 7
// Forward declarations & definitions

// This will not compile because the compiler reads files
// sequentially & when it reaches the function call to add()
// it doesn't know what add is since it's not been defined till
// later on.

/*
int main() {
	std::cout << "The sum of 3 & 4 is " << add(3,4) <<
	"\n";
	return 0;
}

int add(int x, int y) {
	return x + y;
}
*/

// Two options to fix this:
// 
// 1) reordering the system so that add() is defined
// earlier than main()
// 	1.1) This will not always be possible. Assume a
// 	situation where two functions call each other. The 
// 	compiler's seqeuntial behaviour cannot resolve it.
// 	
// 2) using forward declarations
// 
//  Forward Declarations: a process that alerts a compiler about
//  the existence of an identifer before it has been defined. When
//  the compiler comes across a call to a function, it'll know it will
//  eventually be making a function call there even though nothing's been
//  defined for the function yet.
//  
//  To write a forward declaration, a function prototype is used. This
//  consists of the function's name, its parameters and return type. 
//

int add(int x, int y); // Note. It's not necessary to provide the parameters
// It's type is enough. However, for the sake of readability, it is included.

int main() {
	// When the compiler arrives at add() it'll know what add() looks like
	// and not complain
	std::cout << "The sum of 3 & 4 is = " << add(3,4) << "\n";
	return 0; 
}

int add (int x, int y) {
	return x + y;
}


// What happens if we forward declare a function but do not define it?
// If the forward declaration is made but the function is never called, then the
// program will compile. However, if it is called, then the linker will complain
// because it cannot resolve the function call.

// Declarations vs. definitions
// 
// definition: process that implements/ instantiates an identifier. It is used mainly
// to satisfy the linker.
// 
// One definition rule (ODR): 
// 1) within a given file, an identifier can only have 1 definition
// 2) within a given program, an object or a function can only have 1 definition.
// Violating the ODR will generate errors for the linker, redefinition errors to be
// specific.
// 
// declaration: a statement that notifies the compiler the existence of an identifier.
// This is enough to satisfy a compiler
// 
// "All definitions are declarations but not all declarations are definitions"
// 
// Pure declarations: a subset of declarations that cannot be identifies as definitions.
// 
// Quiz:
// 1) A function prototype is a declaration statement that includes a function's name
// return type and parameters while a forward declaration tells the compiler the existence
// of an identifier before it's been defined.
// 2) 
int doMath(int first, int second, int third, int fourth);
// 3) this will fail to compile because add()'s definition has 2 parameters not 3
// 4) this will fail to link because add()'s been redefined from having 2 parameters to 3 
// [WRONG] it does not compile. The compiler will complain that the forward declaration is different
// 5) this will fail to compile because of the same reasons as #4
// 6) this will compile