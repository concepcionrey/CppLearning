#include <iostream>
// Chp 1
// Control Flow Introduction
// 

// When a program is run, the CPU begins execution at the top of main() and terminates
// at the end of main(), this sequence of execution is known as an execution path (path).

// There are several situations where a program does not undergo sequential flow (programs taking the same path
// every time they are run) such as counting from 0 to n where n is unknown at compile time

// Types of control flow statements:
// 1) Halt: tells the program to quit immediately. This requires the exit() function from the <cstdlib> header file.
// Specifically, exit() autoamitelly terminates the program with minimal cleanup and returns an exit code to the compiler.
// 
// 2) Jump: tells the program to jump from one statement to the next. A good example is having function calls in main() where
// the program reads the function call and jumps to its definition before returning back to main()
// 
// 3) Conditional branch: gives the program options to decide the next part of the path to traverse. An if statement
// is an example of a conditional branch
// 
// 4) Loops: tells the program to repeat a sequence of statements till the condition of the loop has been set to false
// 
// 5) Exceptions: tells the program that an error has occured during runtime and shifts the execution path to a function that
// can handle the exception.
int main() {
	return 0;
}