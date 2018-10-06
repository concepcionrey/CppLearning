#include <iostream>
// Chp 7
// Structs

// Sometimes we need more than one variable to represent a single object, and defining multiple variables multiplied
// by the # of objects to be represented can become exhaustive and cumbersome
// C++ solves this with struct data types

// Struct (structure): a user defined aggregate data type that groups multiple variables together

// an example of a struct (they need to be defined before they can be used)
struct Employee
{
	short id; // these are known as members(or fields)
	int age;
	double wage;
	// Take note, nothing has been stored in memory yet, an employee has been defined not created yet
};

struct Point3d
{
	double x;
	double y;
	double z;
};

void printInformation(Employee employee) {
	using std::cout;

	cout << "ID: " << employee.id << "\n";
	cout << "Age: " << employee.age  << "\n";
	cout << "Wage: " << employee.wage << "\n";
}

Point3d getZeroPoint() {
	Point3d temp{0,0,0};
	return temp;
}


int main() {
	using std::cout;
	Employee joe{5,34,45.23}; // a Employee struct called joe is created & initialized
	// Instead of assigning values to each variable, an intializer list is used instead (C++11 methods used)
	// Not all member variables have to be initialized
	// To access & assign joe's members, a member selector operator is used "."
	cout << "Joe's wage is " << joe.wage << "\n";

	Employee viv{6,21,14.56};
	// Note they work the same as normal variables and it is possible to use operations on them
	double larger{(viv.wage > joe.wage) ?  viv.wage: joe.wage};
	cout  << larger << " has the larger wage \n";

	// Non-static member initialization
	// In C++11 it became possible to give non-static struct members a default value, however this conflicts with
	// uniform initialization

	// Playing around with Structs,
	
	// Print Joe's information
	printInformation(joe);

	cout << "\n";

	Point3d zero = getZeroPoint();

	if (zero.x == 0 && zero.y == 0 && zero.z == 0) {
		cout << "This point is 0\n";
	} else {
		cout << "This point is not at 0\n";
	}
	return 0;
}