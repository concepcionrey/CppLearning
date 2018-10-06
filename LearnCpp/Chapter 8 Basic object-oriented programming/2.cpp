#include <iostream>
// Chp 2
// Classes & class members

// sample C++ class
class DateClass { // Rule: Name your classes starting with a capital letter.

public:
	int m_year;
	int m_month;
	int m_day;

	void print() {
		std::cout << m_year << "/" << m_month << "/" << m_day << '\n';
	}
};

class IntPair {
public: 
	int m_x;
	int m_y;

	void set(int x=0, int y=0) {
		m_x = x;
		m_y = y;
	}

	void print() {
		std::cout << "Pair(" << m_x <<", " << m_y  << ")\n";
	}
};

// One of the main uses of classes is while non-member functions require passing data to the function
// member functions implicitly passes an object to work with.	

int main() {
	DateClass day{2020,5,14};
	day.print();
	IntPair ip;
	ip.set(1,1);
	ip.print();


	return 0;
}