#include <iostream>
#include <string>
// Chp 5
// Constructors

// When all members of a class are public, it is possible to initialize it directly with an initialization list
// or uniform initialization

// Quiz
class Ball {
private:
	std::string m_color;
	double m_radius;
public:
	Ball() {
		m_color = "black";
		m_radius = 10.0;
	}

	Ball(std::string color="black") {
		m_color = color;
		m_radius = 10.0;
	}

	Ball(int radius=10.0) {
		m_color = "black";
		m_radius = radius;
	}

	Ball(int radius=10.0, std::string color="black") {
		m_color = color;
		m_radius = radius;
	}
};

class Foo {
public:
	int m_x;
	int m_y;
	// If a class has no constructor, C++ will automatically generate a public implicit constructor
	// Rule: Provide at least one constructor for your class, even if it’s an empty default constructor
	// If a constructor is created then the implicit constructor is not created
};

// What happens if there are private variables? use constructors 
// constructor: a special class member function that is automatically called when an object is instantiated. usually for init
// 1) constructors must have the same name as the class
// 2) they have no return type

class Fraction {
private:
	int m_numerator;
	int m_denominator;

public: 
	Fraction() { // default constructor: a constructor that takes no params, member vars will hold garbage vals w/o default contr
		m_numerator = 0;
		m_denominator = 1;
	}

	Fraction(int numerator, int denominator=1) { // non-default constructor, can co-exist with default via overloading
		assert(denominator != 0);
		m_numerator = numerator;
		m_denominator = denominator;
	} // adding default param to this constructor can implicility act as a default instead

	int getNumerator() {return m_numerator;}
	int getDenominator() {return m_denominator;}
	double getValue() {
		return static_cast<double>(m_numerator)/m_denominator;
	}
};

int main(int argc, char const *argv[]) {
	Fraction frac; // no arguments were called therefore the default constructor is called
	std::cout << frac.getNumerator() << "/" << frac.getDenominator() << '\n';
	
	Fraction frac2 {5,2}; // Rule: Use direct or uniform initialization with your classes
	std::cout << frac2.getNumerator() << "/" << frac2.getDenominator() << '\n';
	return 0;
}

// When dealing with nested classes...
// By default, when the outer class is constructed, the member variables will have their default constructors called. This happens 
// before the body of the constructor executes.