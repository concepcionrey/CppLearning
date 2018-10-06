#include <iostream>
#include <cmath>
// Chp 3
// Passing arguments by reference

// While pass by value is suitable in many cases, it has a couple of limitations.
// 1) passing non-fundamental data types like a large class or a struct will make a copy of said data type and significantly affect performance
// 2) the only way to return back to the caller is via the function's return value, there are cases where it is better to modify the argument that is passed

// Pass by reference solves this

void addOne(int &y) { // sample of pass by reference
	y+=1;
}

// It is also possible to have multiple return values via parameters
void getSinCos(double degrees, double &sinOut, double &cosOut) { // out parameters: parameters only used to return values back to the caller
	 const double pi = 3.14159265358979323846; // the value of pi
    double radians = degrees * pi / 180.0;
    sinOut = std::sin(radians);
    cosOut = std::cos(radians);
}

// NOTE: There are downsides for this method of programming
// 1) syntax is unnatural
// 2) caller must create & pass variables to hold these results even if they don't intend to use them
// 3) readability is affected, it's not clear that out paraemeters are used


// Limitations of pass-by-reference
// Recall! non-const references can only refer to non-const variables so a ference param cannot any arguments that is an r-value or a const l-value
// 

// Pass by const reference
// this ensures the argument passed into the parameter is read-only and avoids side-effects of unintentionally changing any component of the reference
// It is guaranteed to the caller that the function will not change the argument
// RULE: When passing an argument by reference, always use a const references unless you need to change the value of the argument

void foo(int *&ptr) { // pass ptr by pass by reference
	ptr = nullptr; // changes the original ptr's value, not the copy!
}
int main() {
	int x{1};
	std::cout << "x = " << x << '\n';
	addOne(x); // when x is passed to this function, y becomes a reference to x and any changes made to y will change x
	std::cout << "x = " << x << '\n';

	double sin{0.0};
	double cos{0.0};

	getSinCos(30.0,sin,cos); 
	std::cout <<"Sin is " << sin << '\n';
	std::cout <<"Cos is " << cos << '\n';

	int y{5};
	int *ptr{&y};
	std::cout << "ptr is " << (ptr ? "non-null": "null") << '\n';
	foo(ptr);
	std::cout << "ptr is " << (ptr ? "non-null" : "null") << "\n"; 
	return 0;
}


/*
Pros and Cons of using pass by reference
	PRO: References allow a function to change the value of the argument, which is sometimes useful. Otherwise, const references can be used to 
	guarantee the function won’t change the argument.
	PRO: Because a copy of the argument is not made, pass by reference is fast, even when used with large structs or classes.
	PRO: References must be initialized, so there’s no worry about null values.

	CON: Because a non-const reference cannot be initialized with an const l-value or an r-value (e.g. a literal or an expression), arguments to 
	reference parameters must be normal variables.
	CON: It’s impossible to tell from the function call whether the argument may change. An argument passed by value and passed by reference looks the same. 
	We can only tell whether an argument is passed by value or reference by looking at the function declaration. This can lead to situations where the programmer 
	does not realize a function will change the value of the argument.

	When to use: When passing structs or classes (use const if read-only), When you need the function to modify an argument, When you need access to the type information of a fixed array
 */











