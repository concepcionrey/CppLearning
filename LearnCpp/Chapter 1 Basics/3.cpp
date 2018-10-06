#include <iostream>
// Chp 3
// A first look at variables, initialization, and assignment
// 

int main () {

// object: a piece of memory that can be used to store values.
// It is like a cubbyhole where information can be stored and retrieved
// 
// variable: an object with a name
int fwuff;
// integer: a number than can be written without a fractunal component

int integer = 5;

// definition: a type of declaration statement to create variables
// When this statement is executed by the CPU, a process known as instantiation
// occurs where a piece of memory from RAM is set aside.
int yy; 
yy = 101;
std::cout << "This is an example of definition where the result is printed from the memory location of y, " << yy 
<< " is my value " << "\n";

// l-values & r-values
// 
// l-value: values that have a persistent memory address (variables that exist after the statement ends)
// 
// r-values: values that are do not have a persistent memory location and expire at the end of the statement
// they occur in
// 
// Initialization: defining a variable and providing an initial value
// Assignment: providing a value for a variable
// 
// ** Favour initialization over assignment **

int foo = 42; // initialize foo with value 42

// Unitialized variables: variables that haven't been assigned any values. This
// can be dangerous because it reeks of undefined behaviour where accessing it
// outputs any value that is currently occupying it (that can be out of scope of the program)

int notKnown;

std::cout << "This is an example of undefined behaviour with uninitialized variables where notKnown is "
<< notKnown << "\n"; //somehow it's getting autoinitialized to 0

// *****************************************************
// Quiz
// 

int x = 5;
x = x - 2;
std::cout << x << "\n"; // #1? --> 3

int y = x;
std::cout << y << "\n"; // #2? --> 3

std::cout << x + y << "\n"; //#3? --> 6

std::cout << x  << "\n"; //#4? --> 3

int z;
std::cout << z << "\n"; //#5? --> 0 (uninitialized)

return 0;
}



