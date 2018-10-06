#include <iostream>
// Chp 13
// Friend functions & classes

// There will be situations where non-member functions & classes will require working tightly
// with another classes and functions. This is a breach in data privacy but is perfectly okay
// given the context. So how is it possible to accomplish a secure communication channel between
// the two?

// Option 1: Have one class used the publicly exposed functions of the other. The issue with this is
// other classes that are not suppose to interact with it will also have the same priviledge to access 
// its members. Another issue, is the additional overhead of creating specific member functions for this situation
// 
// Option 2: Make a friend!
// friend function/keyword: a keyword that enables another class to be the only other class capable of accessing
// the private members of a class as though it were a member of the class itself

class Accumulator {
private: 
	int m_value;
public:
	Accumulator(): m_value{10} {}
	void add(int value) {m_value+= value;}
	int getValue() {return m_value;}

	friend void reset(Accumulator &Accumulator); // make the reset function a friend to this class
	//~Accumulator();
	
};

void reset(Accumulator &accumulator) {
	accumulator.m_value = 0;
}

// A function can be a friend to multiple classes simultaneously

class Humidity; // class prototype or forward declaration to state to Temperature that a class Humidity exists

class Temperature {
private:
	int m_temp;
public:
	Temperature(int temp=0): m_temp{temp} {}
	friend void printWeather(const Temperature &temperature, const Humidity &humidity);
};

class Humidity {
private:
	int m_humidity;
public: 
	Humidity(int humidity= 0): m_humidity{humidity} {}
	friend void printWeather(const Temperature &temperature, const Humidity &humidity);
};

void printWeather(const Temperature &temperature, const Humidity &humidity) {
	std::cout << "The temperature is " << temperature.m_temp << " and the humidity is " <<
	humidity.m_humidity << '\n';
	// Since it is a friend to both classes, it can acces private data from both classes
}


// All this introduced logic can be applied to the classes themselves
// NOTE: that the friend keyword is a one-way characteristic, meaning that if A marks B as a friend,
// it does not imply that A is a friend of B

class Vector3d;

class Point3d
{
private:
	double m_x, m_y, m_z;
 
public:
	Point3d(double x = 0.0, double y = 0.0, double z = 0.0)
		: m_x(x), m_y(y), m_z(z)
	{
 
	}
 
	void print()
	{
		std::cout << "Point(" << m_x << " , " << m_y << " , " << m_z << ")\n";
	}
 
	void moveByVector(const Vector3d &v);
};

class Vector3d
{
private:
	double m_x, m_y, m_z;
 
public:
	Vector3d(double x = 0.0, double y = 0.0, double z = 0.0)
		: m_x(x), m_y(y), m_z(z)
	{
 
	}
 
	void print()
	{
		std::cout << "Vector(" << m_x << " , " << m_y << " , " << m_z << ")\n";
	}
	friend void Point3d::moveByVector(const Vector3d &v);
};

void Point3d::moveByVector(const Vector3d &v) {
 		m_x+=v.m_x;
		m_y+= v.m_y;
		m_z+= v.m_z;
  }


int main(int argc, char const *argv[]){
	/*
	Accumulator acc;
	acc.add(5);
	reset(acc); // not a member of the accumulator class
	std::cout << acc.getValue() << '\n';
	Humidity hum{5};
	Temperature temp{12};
	printWeather(temp,hum);
	*/
Point3d p(1.0, 2.0, 3.0);
	Vector3d v(2.0, 2.0, -3.0);
 
	p.print();
	p.moveByVector(v);
	p.print();
	return 0;
}

/* ==== Summary ======
A friend function or class is a function or class that can access the private members of another class as though it were a member of that class.
This allows the friend or class to work intimately with the other class, without making the other class expose its private members (e.g. via access functions).
Note that making a specific member function a friend requires the full definition for the class of the member function to have been seen first.
 */

// Quiz time