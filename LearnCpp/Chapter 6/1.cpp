#include <iostream>
// Chp 1
// Arrays (Part 1)
// 

struct Rectangle
{
	int length;
	int width;
};

// arrays: aggregate data type that allows one to access many variables through a single identifier
// fixed array: an array whose length is known at compile time
// "[]": the subscript operator, allows one to access an index/subscript of an array

// General rules:
// 1) array subscripts must be always of an integral type
// 1.1) Eg: array[1+2] is a valid index and so is array[index] where index is a var

int main() {
	// Instead of allocating 30 seperate integer variables to maintain the scores of 30 students in a class
	// an array allows one to write this instead
	int testScore[30]; // allocate 30 interger variables in a fixed arrray

	// sample of a double array
	double array[3] {2.0,3.0,4.3};
	std::cout << "The average of the array is ";
	double average{0};
	for(auto& n:array) {
		average+= n;
	}

	std::cout << average/3 << "\n";
	// array can be made from diferent data objects such as structs
	Rectangle rectArray[5]{};
	return 0;
}

// Summary:
// Fixed arrays provide an easy way to allocate and use multiple variables of the same type 
// so long as the length of the array is known at compile time.