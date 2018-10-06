#include <iostream>
// Chp 9
// Class code & header files

// Sample of writing class functions outside the class itself via the "::" operator to define functions as part of a specific class

class Date {
private: 
	int m_year;
	int m_month;
	int m_day;
public:
	Date(int year, int month, int day);
	void SetDate(int year, int month, int day);
	int getYear() {return m_year;}
	int getMonth() {return m_month;}
	int getDay() {return m_day;}
};

Date::Date(int year, int month, int day) {
	SetDate(year,month,day);
}

void Date::SetDate(int year, int month, int day) {
	m_year = year;
	m_month = month;
	m_day = day;
}

// It is also possible and more commonly suggested to separate the class declaration & implementation using a header and .cpp file
// 
int main(int argc, char const *argv[]) {
	Date foo(2000,9,11);
	std::cout << foo.getDay() << "\n";
	return 0;
}

/* ==== SUMMARY =====
Doesn’t defining a class in a header file violate the one-definition rule?
No it should should not, with proper headguards in the header file, it should be impossible to include a class definition more than once in the same program

Doesn’t defining member functions in the header violate the one-definition rule?
It depends, member functions defined inside the class definition are implicitly inline & inline functions are exempt from the ODR
Member functions defined outside the class definition will be treated as regular normal functions and are subject to the ODR

So what should I define in the header file vs the cpp file, and what inside the class definition vs outside?
1) For classes used in only one file that aren’t generally reusable, define them directly in the single .cpp file they’re used in.
2) For classes used in multiple files, or intended for general reuse, define them in a .h file that has the same name as the class.
3) Trivial member functions (trivial constructors or destructors, access functions, etc…) can be defined inside the class.
4) Non-trivial member functions should be defined in a .cpp file that has the same name as the class
 */