#include <iostream>
// Chp 4d
// A first look at scope
//
// When is an instantiated variable destroyed?
// 
// Scope: the concept that determines when a variable can be
// seen and used during instantiation. 
// 
// Local scope: variables that are instantiated can only be 
// used and seen by the functions that define them. Local
// variables are destroyed when they the program exits the
// function/ go out of scope.
// 

int add(int x, int y) {
	return x + y; // x & y are destroyed once the program exits
}

void doIt(int x) {
	int y = 4;
	std::cout << "doIt: x = " << x << " y = " << y << "\n";
	x = 3;
	std::cout << "doIt: x = " << x << " y = " << y << "\n";
}

void quizTester() {
	int x = 1;
	int y = 2;
	std::cout << "main: x = " << x << " y = " << y << "\n";
	doIt(x);
	std::cout << "main: x = " << x << " y = " << y << "\n";
}

 int main () {
 	int a = 4;
 	int b = 5;

 	std::cout << "Simple look at scope result: " << add(a,b) << "\n";
 	quizTester();
 	return 0; // a & b are destroyed once the program exits

 }

 // what if the same identifier is used as local variable and 
 // arguments for multiple functions? This posses no threat if you
 // recall local scope. Recall that, variables can only be seen and 
 // used by the variables that defined them. Therefore, if 
 // function A has the same parameters as function B, both their
 // parameters are distinct from each other.
 // 
 // Quiz
 // this returns
 // main: x = 1 y = 2
 // doIt: x = 1 y = 4
 // doIt: x = 3 y = 4
 // main: x = 1 y = 2