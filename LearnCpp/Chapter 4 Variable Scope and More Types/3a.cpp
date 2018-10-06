#include <iostream>

int g_x{0}; // external non-const global variable
static int g_StaticX{0}; // internal non-const globaal variable NOTE: can be initialized or uninitialized
// Chp 3a
// Scope, duration & linkage summary

// Scope: the accessibility of a function. If a function is out of scope, it is not accessible.
// 1) Variables with block scope/local scope: accessible from the blocks that declared them
// 	1.1) This includes: local variables, function parameters, locally defined types
// 2) Variables with global scope: accessible anywhere from a file
// 	2.1) This includes: global variables, normal functions, globally defined types

// 	Duration: when a variable is created & destroyed
// 	1) Variables with automatic duration: created at the point of definition & destroyed when the program exits
// 	the blocks that called it
// 	 1.1) This includes: local variables
// 	2) Variables with static duration: variables with the static keyword prefixed to them. Indicates it is created at the point of definiition
// 	& persists untl the end of the program.
// 	 2.1) This includes: global variables & static local variables
// 	3) Dynamic variables: created & destroyed by the programmer's request

// Linkage: determines when multiple references to an identifier refers to the same identifier or not
// 1) No linkage: identifier only refers to itself
//  1.1) This includes: local variables, user defined types
// 2) Internal linkage: identifers can be accessed anywhere within the file it is declared
//  2.1) This includes: static global variables, const global, static function 
// 3) External linkage: can be accessed anywhere within the file it is declared or elsewhere
//  3.1) This includes: normal functions, non-const global variables, extern const global variables and 
//  user defined types.
//  3.2) Identifiers with external linkage could come across redefinition complaints from the compiler if it's been defined
//  more than once across all the files compiled into the executable	

void doSomething(int userInput) {}; // function parameter

int main () {
	int localX{}; // Local variable
	static int localStaticX{}; // a static local variable
	int *x  = new int; // a dynamic local variable
	return 0;
}