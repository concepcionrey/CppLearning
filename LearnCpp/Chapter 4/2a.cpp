#include <iostream>
// Chp 4.a
// Why Global variables are evil

// NOTE: AVOID USING GLOBAL VARIABLES AS MUCH AS YOU CAN, specifically non-const global variables
// "harmless in small academic projects but problematic in large scale systems"

// Consider this system

int g_mode;

static double g_gravity{9.8}; // proper naming convention for a global variable 

void doSomething() {
	g_mode = 2;
}

double getGravity() {
	return g_gravity;
}

double instanceVelocity(double gravity, int time) {
	return getGravity()*time;
}

int main() {
	// Obeserve that the progammer has set g_mode to hold the value 1
	g_mode = 1;
	// The programmer then makes a function call to doSomething() which changes the value g_mode = 2. 
	doSomething();


	// If the progammer had no knowledge that doSomething() would change g_mode's value then it would create confusion
	// interfering with the flow of the overall system and promote unexpected behaviour
	if(g_mode == 1) {
		std::cout << "No threat detected! \n";
	} else {
		std::cout << "Launching nuclear missles \n";
	} 
	// Local variables are safer to use because other functions (thanks to local scope) cannot have a direct influence on 
	// their values. 
	// 
	// In particular, global variables have 2 key issues:
	// 1) It could require exponential backtracking if a bug within the system is tied to it. A progammer could have made reference
	// to it several times and need to test every individual call to find the bug.
	// 
	// 2)Global variables reduce the modularity and flexibility of the system since they can be used by any function & a
	// progammer can fall prey to the trap of having too much reliance on using them 
	// 
	// Occasionally, non-const global variables does have usage particularly as being the most optimable choice to 
	// reduce complexity in a system. For instance, a server chat log. It is not necessary to have separate instances of a chatroom.
	// Instead, it is easier to keep track of a singular chat that records all conversations since the beginning to the present.
	// 
	// 
	// When using non-const global variables, adhere to these guidelines:
	// 1) It is preferrable naming-wise to follow the format "g_xxx" to reduce namaing collisions & promote awareness that it is a global
	// variable
	// 2) Do not use it directly, instead attach a static keyword (to prevent it from being accessible outside of the file it's declared) &
	// write getter functions that promote good maintenance and as well as ease while refactoring
	// 3) Pass them as parameters, if a function ever needs to use a different value it is easier to vary the parameter.
	return 0;
}

// General rule
// 1) Use local variables over global variables whenever reasonable and pass them to the function that needs them
// 2) Const global variables are okay as long as proper naming conventions are followed
// 3) Avoid using non-const global variables, use local variables as much as possible