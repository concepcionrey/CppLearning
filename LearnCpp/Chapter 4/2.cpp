#include <iostream>
// Chp 2
// Local variables, scope & duration

// scope: determines a variable's accessibility
// duration: the timeline when a variable is created and destroyed
// 
// local variables: variables defined within a function. These have automatic
// duration, created at the point of definition and destroyed when the compiler 
// exits their block
// 

// A simple example of scoping
void simpleScope() {
	// in this example, i & d are initialized/created when simpleScope() is called.
	// As soon as the code finishes executing, then i & d are destroyed
	int{5};
	double d{4.0};
}
// Variables within nested blocks are destroyed as soon as the nested block ends. Variables
// defined in a block can only be seen within that block (unless certain types are put in). 
// In addition, variables outside of a nested block are able to seen by those within the inner block.

void nestedSimpleScope() {
	// In this example, n is initialized in the outer block while d is initialized within the
	// inner block. Once the compiler exits the inner  block, d is out of scope and is destroyed.
	// Finlly, once the compiler exists out of nestedSimpleScope(), n is destroyed.
	int n{5};
	{
		double d{4.0};
	}
}

// Since local variables can only been by the functions that created/ initialized them, it promotes
// the usage of using the same naming convention across different functions. The issue of naming collisions
// is irrelevant.

// An example of inner blocks being able to see outer blocks
void printOutsideInsideVariables() {
	// In this example, the inner block can see both x & y. Once the inner block is finished, however,
	// y is destroyed is no longer usable.
	int x{5};
	{
		int y{7};
		std::cout << x << " + " << y << " = " << x +y << "\n";
	}
}

// Name-Hiding(shadowing):the process of a variable within a nested block having the same name of another 
// variable in the outer block. generally, AVOID SHADOWING to prevent confusion in variable usage.
void shadowingInstance() {
	// This program should print out 10, then 5. In the outer layer an apples variable is defined. Then
	// another different variable named apples is also defined within the nested block. When the value 10 is
	// assigned, it is assigned to the nested block apples. Once the code exits the nested block, the nested apples
	// variable is destroyed, leaving the value of the outer block apples. This works because
	// apples & apples are 2 indenpendent distinct variables. However if the inner apples was never defined, then 
	// the outer block apples would hold the value assigned within the nested block since both assignments to apple
	// are pertaining to the same singular variable. 
	int apples{5};
	if (apples >=5){
		int apples;
		apples = 10;
		std::cout << apples << "\n";
	}
	std::cout << apples << "\n";
}

// General rule:
// 1) define variables in the smallest scope and as close to its first use as possible

void simpleSwap() {
	std::cout << "Enter an integer: ";
	int u1{};
	std::cin >> u1;
	std::cout << "Enter a larger variable: ";
	int u2{};
	std::cin >> u2;

	if(u1 > u2) {
		std::cout << "Swapping the values: \n";
		int temp{u1};
		u1 = u2;
		u2 = temp;

		std::cout << "The smaller value is " << u1 << "\n";
		std::cout << "The larger value is " << u2 << "\n";
	} else {
		std::cout << "The smaller value is " << u1 << "\n";
		std::cout << "The larger value is " << u2 << "\n";
	}
}	

int main() {
	simpleSwap();
	return 0;
}
// Quiz
// 
// 2) A variable's scope determines when it is accessible while it's duration determines
// when it is created & destroyed. Local variables have automatic duration & local scope