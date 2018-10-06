#include <iostream>
// Chp 4
// A first look at functions and return values
// 
// Function: a group of reusuable statements designed to perform a 
// particular job.
// 
// Often times a program requires multiple functions and often interrupts
// its own work flow to achieve this. This is very similar to real life where
// we're doing a task and remember tasks in-between so we pause, do the forgotten task
// and return to our original task.
// 
// Function call: an expression that tells the CPU to interrupt its current activity
// to execute another one. Essentially, the CPU "places a bookmark" on its current point
// of execution and then calls the function named in the function call.
// 
// Caller: function that initiations the function call
// Callee: funcion being called or the called function
// 

void doPrint() {
	std::cout << "In doPrint()" << "\n";
}

// Return type: the type declared before the function name that
// determines the type of value expected to be returned
int returnNumber() {
	return 42;
}

// Void: an indicator mentioning that a function call will not return anything
// doPrint() is an example of using void where it does not return anything back
// to the caller. 
// Note: calling an iosteam library function on void type functions will create errors
// since they cannot handle "nothing values"
//

// Notes:
// main functions return 0s back to the OS--> we use int main ()...
// but WHY? returning an interger val back to the OS is known as a status code
// and tells the OS and any other program whether or not my program has run
// successfully. If forgotten, then the compiler will return 0 on my behalf but
// never rely on that. It's more useful to explicitly show it as it shows your intents.

int getValueFromUser() {
	int a;
	std::cout << "Enter a value: " << "\n";
	std:: cin >> a;
	return a;
}

// Any other function can call another function!

void printC () {
	std::cout << "C" << "\n";
}

void printAC () {
	std::cout << "A" << "\n";
	printC();
}

void printB () {
	std::cout << "B" << "\n";
}

void callACB () {
	printAC();
	printB();
}

// Nested functions: This is illegal. Functions cannot be defined inside other functions.
// Eg..
/*
#include <iostream>
 
int main()
{
    int foo() // this function is nested inside main(), which is illegal.
    {
        std::cout << "foo!" << std::endl;
        return 0;
    }
 
    foo();
    return 0;
}
 */

int main () {
	std::cout << "A basic example of Functions in action..." << "\n";
	std::cout << "Starting main()" << "\n";
	doPrint();
	std::cout << "Ending main()" << "\n";
	std::cout << "\n";

	std::cout << "Playing around with return values..." << "\n";
	std::cout << "Calling returnNumber yields " << returnNumber() << "\n";
	std::cout << "We can chain function calls with operators to achive results like " <<
	returnNumber() + 5 << "\n";
	// We can also simply also call
	returnNumber(); // 42 is returned but ignored since main () does not do anything with it
	std::cout << "\n"; 

	std::cout << "Reusing functions for different purposes...";
	int x = getValueFromUser();
	int y = getValueFromUser();
	std::cout << x << " + " << y << " = " << x+y << "\n";
	std::cout << "\n";

	std::cout << "Playing around with function calls within function calls..." << "\n";
	callACB();
	return 0;
}

// Quiz time:
// 1a) returns 16 CORRECT
// 1b) DNC because return 9's definition is nested within return7 CORRECT
// 1c) it returns both 7 & 9 to main but gets ignored since main does not do anything CORRECT
// 1d) A and B are printed on seperate lines CORRECT
// 1e) prints A WRONG [recall! that std::cout does not expect "nothing" values]
// 1f) returns 5 both times to main and is printed, 7 as well is ignored in both calls to
// getNumbers() CORRECT
// 1g) returns 5 WRONG ["return 5()" was the name called, CAREFUL naming convention] 
// 1h) DNC because return5 lacks a ()
// THIS ACTUALLY COMPILES but the function will not be called due to missing parenthesis