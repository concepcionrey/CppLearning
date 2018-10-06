#include <iostream>
// Chp 10
// Const class objects and member functions


// const classes: instantiated class objects can also be made struct with the const keyword. Init is done by the constructor

// const member functions: functions that are able to be called by const objects/classes 
// This means if a const class is created with a non-const getter function, the code will not be able to compile
// Like all other uses for const, this ensures the object is read-only or unmodifable

class Something {
public:
	int m_value;
	Something(): m_value{0} {};
	
	void resetValue() {m_value = 0;}
	void setValue(int value){m_value = value;}
	int getValue() const{return m_value;} // to make a function const, add the const keyword after the function prototype
	// if the const function is defined outside of the class, then the const keywords must be applied to both prototype & function definition
};

/*
int Something::getValue() const {
	return m_value; }
 */


int main() {
	const Something foo; // constructors can never be marked const since the constructor is required to init the object(this includes the mem var)
	std::cout << foo.getValue();
	return 0;
}

/* ==== summary ======
Because passing objects by const reference is common, your classes should be const-friendly. That means making any member function that does not modify the state of the class object const!

 */