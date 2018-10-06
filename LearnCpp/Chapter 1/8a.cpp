#include <iostream>
// Chp 8a
// Naming conflicts & the std namespace 
//

// C++ requires all identifiers (variables and/or function names) be non-ambigious.
// If two identifiers are introduced into a program in a way that is is 
// impossible to tell them apart, then either the compiler or the linker will complain.
// This is known as a "naming collision" (naming conflict)
// 
// Considering the example provided where 8ahelper1 and 8ahelper2 both contain
// definitions for the identifier doSomething(). When compiled together a linker
// error will arise.
// 
// Naming collisions usually occur in two general cases:
// 1) Two files in the project have a function with the same name & different definitions.
// A Linker error
// 2) A code file includes a header file that contains an identifier that conflicts with something
// else. (Compiler error)
// 

int doSomething(int x);

int main() {
	doSomething(5);
	return 0;
}

// the std namespace:
// When C++ was originally defined, all of its identifiers in the C++
// STL were accessibly directly. For instance "cin" & "cout" can be called
// instantly. However, this led to the potential problems where any
// identifer in the STL could conflict with a programmer's own written identifiers.
// To resolve this, C++ moved all of its STL functionality to a special area called
// namespace. A namespace guarantees all its identifiers are unique. Meaning, it
// adheres to the ODR.