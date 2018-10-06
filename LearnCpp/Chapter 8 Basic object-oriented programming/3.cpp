#include <iostream>
// Chp 3
// Public vs access specifiers

// public members: members that can be accssed outside of the structure they are defined in
// By default, members are private meaning they can only be accessed by other members of the class
// access specifiers: determines who has access to the members
// Rule: Make member variables private, and member functions public, unless you have a good reason not to.

class DateClass {
	int m_year;
	int m_month;
	int m_day;
public:
	void setDate(int month, int day, int year) {
		m_month = month;
		m_day = day;
		m_year = year;
	}
	void print() {
		std::cout << m_month << "/" << m_day << "/" << "/" << m_year;
	}

	void copyFrom(const DateClass &d) {
		m_year = d.m_year;
		m_month = d.m_month;
		m_day = d.m_day;
	}
	/*
	One nuance of C++ that is often missed or misunderstood is that access control works on a 
	per-class basis, not a per-object basis. This means that when a function has access to the 
	private members of a class, it can access the private members of any object of that class type 
	that it can see
	 */
};

class Stack {
	const static int m_length{10};
	int m_array[m_length];
	int m_lengthOfArray;
public:
	void reset() {
			m_lengthOfArray = 0;
			for(int i{0}; i< m_length; ++i) {
				m_array[i] = 0;
			}
	} 

	bool push(int x) {
		if(m_lengthOfArray == 10) {
			return false;
		} else {
			m_array[m_lengthOfArray++] = x;
			//++m_lengthOfArray;
			return true;
		}
	}

	int pop() {
		assert(m_lengthOfArray > 0);
		int y = m_array[m_lengthOfArray];
		m_array[m_lengthOfArray] = 0;
		--m_lengthOfArray;
		return y;
	}

	void print() {
		std::cout << "( ";
		for (int i = 0; i < m_lengthOfArray; ++i)
			std::cout << m_array[i] << ' ';
		std::cout << ")\n";
	}
};
int main() {
	/*
	DateClass date;
	date.setDate(10, 14, 2020);

	DateClass copy;
	copy.copyFrom(date);
	copy.print();
*/

	Stack stack;
	stack.reset();
 
	stack.print();
 
	stack.push(5);
	stack.push(3);
	stack.push(8);
	stack.print();
 
	stack.pop();
	stack.print();
 
	stack.pop();
	stack.pop();
 
	stack.print();
	return 0;
}

/*

 */