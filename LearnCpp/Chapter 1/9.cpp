#include <iostream>
#include "add.h"
// Chp 9
// Header files
// 
// As programs grow larger and larger it becomes harder
// to forward declare every function to be used in a file...
//

int main() {
	std::cout << "The sume of 3 & 4 is: " << add(3,4) << "\n";
	return 0;
}

// Understanding how Header files work:
// Notice that we call "std::cout" without defining it. How does the
// compiler know what is cout? The answer is that cout has been
// declared by the compiler in a header file called "iostream." The first line
// requests that all the content of the header file "iostream" be copied into
// this file. However, this is only a declaration not a definition. So where
// does the definition come from? it comes during runtime where the linker will
// link the outputted .o file with the C++ runtime support library.
// 
// Writing a header file:
// 1) Header guard: statements written in the header file to prevent
// the compiler from redefining the header more than once.
// 2) The actual content. This content refers to all the forward declrations
// of all the functions that we want to be seen by other files within the system.
// 
// When the compiler compiles the "#include <...> or "..."", it copies the content
// of the x.h file into the current file that includes it.
// 

// Angel brackets vs quotes
// There's a distinction between requesting to include the "iostream" library
// and the file known as "add.h" Angel brackets are used to tell the compiler
// to include header files that was included with the compiler, and it should look
// for it in the systems directory. On the other hand, quotes are used to tell the
// compiler that the header file is provided by the programmer and it should check
// the current project directory for its definition/ source. 
// 

// Wait?! iostream doesn't also end with .h?
// This is more of a history lesson. Iostream.h is different from <iostream>. Back then
// C++ projects had all its projects in the standard runtime library all end with .h 
// However, when ANSI came in and sought to standardize C++, C++s functionality was 
// relocated to the std namespace. However, this change came at the cost of deprecating
// all working programs at the time. To circumvent this and provide backwards compatibilty,
// A new set of header files were introduced under the same name to appeal to new programs
// while older programs could still retain calling its .h equivalents.
// 
// NOTE: do not ever use the standard .h versions of the libraries since they are deprecated.
// 

// Best practices:
// 1) Always include header guards: prevents the compiler from defining it more than once
// 2) Do not define variables inside header files unless they are of type const
// 3) Do not define functions either
// 4) Each header file should pertain to a specfic responsibilty
// 5) Do not include .cpp files