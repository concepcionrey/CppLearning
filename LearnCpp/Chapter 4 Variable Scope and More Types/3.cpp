#include <iostream>
// Chp 3
// Static duration variables
// 

// In 2a, we learnt that when the static keyword is applied to a global variables, it defines the global variable
// with internal linkage meaning that it is only accessible in the system that it was declared in.
// 
// However, when applied to a local variable, its effect changes. Instead of having automatic duration, a local variable's duration
// becomes static duration meaning that once that variable has been created & initialized once, it is not destroyed once the program
// exits its point of definition and persists for the duration of the whole system.

// A simple example of automatic duration
/*
void incrementAndPrint() {
	int value{1}; // value is initialized with value 1
	++ value;
	std::cout << value << "\n";
	} //value is destroyed once the system exits the function
// The system's output would be -> 2,2,2
 */

// An example of static duration
void incrementAndPrint() {
	static int s_value{1}; // s_value has been created & intialized only once in the first function call
	++s_value;
	std::cout << s_value << "\n"; // Whenever a static keyword is attached to a variable, naming-wise follow s_xxx
// The system's output is -> 2,3,4
}
int main() {
	incrementAndPrint();
	incrementAndPrint();
	incrementAndPrint();
	return 0;
}

// Quiz:
// 1) Whenever a static keyword is attached to a global variable, it tells the compiler that the variable can only be 
// accessible from the file that's declared it while if used on a local variable, it tells the compiler that the variable
// will use static duration meaning, that once the variable is initialized and created, it will persist until the end of the
// system's life.