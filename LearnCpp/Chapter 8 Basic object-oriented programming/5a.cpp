#include <iostream>
// Chp 5a
// Constructor member initializer lists

// Although works, THIS DOES NOT EXHIBIT GOOD coding style
class Something
{
private:
    int m_value1;
    double m_value2;
    char m_value3;
 
public:
    Something()
    {
        // These are all assignments, not initializations
        m_value1 = 1;
        m_value2 = 2.2;
        m_value3 = 'c';
    }
}; 
/*
It is the equivalent of doing this 
 
int m_value1;
double m_value2;
char m_value3;
 
m_value1 = 1;
m_value2 = 2.2;
m_value3 = 'c';
While
 */

// To solve this, C++ can use member intializer lists to initialize class member variables
// which is very similar to direct initialization

class SomethingBetter {
private:
	int m_value1;
	double m_value2;
	char m_value3;
public:
	SomethingBetter(): m_value1(1), m_value2(2.2), m_value3('c') {}; // this is direct initialization
	void print() {
		std::cout << "Something(" << m_value1 << ", " << m_value2 << ", " << m_value3  << ")\n";
	}
};
// Rule: Use member initializer lists to initialize your class member variables instead of assignment.
// Rule: Favor uniform initialization over direct initialization if your compiler is C++11 compatible
int main(int argc, char const *argv[])
{
	SomethingBetter yay;
	yay.print();
	return 0;
}

/*
===== SUMMARY  ========
Member initializer lists allow us to initialize our members rather than assign values to them. This is the only way 
to initialize members that require values upon initialization, such as const or reference members, and it can be more 
performant than assigning values in the body of the constructor. Member initializer lists work both with fundamental types 
and members that are classes themselves.
 */