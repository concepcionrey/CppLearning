#include <iostream>
// Chp 7
// Destructors

// destructors: a special class function that is excecuted when an object of that class is destroyed.
// While constructors help init, destructors help clean up

// When an object goes out of scope or a dynamically allocated variable gets de-allocated then the destructor is
// automatically called to perform any necessary clean-up before the object/variable is removed from memory
// Therefore, if a class object is holding any hidden resources, the destructor is the perfect candidate to ensure
// everything known about that object is wiped before removal

// Naming convention:
// 1) the destructor must have the same name as the class but prefixed with a "~"
// 2) It cannot take any arguments
// 3) It has no return value
// *) It is very similar to a constructor
// **) It is not possible to overload destructors

// NOTE: generally destructors are not explicitly called since they are performed automatically in object removal but 
// there are edge cases that require doing maintenance & removal more than once 

// Sample usage of a destructor on an int array class
class IntArray {
private:
	int *m_array;
	int m_length;
 
public:
	IntArray(int length) // constructor
	{
		assert(length > 0);
 
		m_array = new int[length];
		m_length = length;
	}
 
	~IntArray() // destructor
	{
		// Dynamically delete the array we allocated earlier
		delete[] m_array ;
	}
 
	void setValue(int index, int value) { m_array[index] = value; }
	int getValue(int index) { return m_array[index]; }
 
	int getLength() { return m_length; }
};
int main(int argc, char const *argv[])
{
	IntArray ar(10); // allocate 10 integers
	for (int count=0; count < 10; ++count)
		ar.setValue(count, count+1);
 
	std::cout << "The value of element 5 is: " << ar.getValue(5);
	// Once main exits by returning 0, ~IntArray is automatically called to de-allocate the object from memory and delete the array
	return 0;
}


// RAII (Resource Acquisition Is Initialization) is a programming technique whereby resource is tied to the lifetime of objects with
// automatic duration. In C++, this is exemplified with classes via the constructor & the destructor
// Rule: If your class dynamically allocates memory, use the RAII paradigm, and don’t allocate objects of your class dynamically

/* ==== SUMMARY ======
As you can see, when constructors and destructors are used together, your classes can initialize and clean up after themselves without 
the programmer having to do any special work! This reduces the probability of making an error, and makes classes easier to use.
 */