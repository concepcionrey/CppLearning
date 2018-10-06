#include <iostream>
#include <string>
#include <array>
typedef const std::array<int,5> ia;
/*
1) Declare an array to hold the high temperature (to the nearest tenth of a degree) for each day of a year 
(assume 365 days in a year). Initialize the array with a value of 0.0 for each day.
 */

namespace Animal
{
	enum Animal
	{
		ANIMAL_CHICKEN,
		ANIMAL_DOG,
		ANIMAL_CAT,
		ANIMAL_ELEPHANT,
		ANIMAL_DUCK,
		ANIMAL_SNAKE,
		MAX_ELEMENTS,
	};
}

struct Person
{
	int age{0};
	double weight{0};
};


void stuff() {
	int scores[] = { 84, 92, 76, 81, 56 };
    const int numStudents = sizeof(scores) / sizeof(scores[0]);
 
    int maxScore = 0; // keep track of our largest score
    int foo, bar;
}

void multiplicationTable() {
	//6.5
	const int numRows{10};
	const int numCols{10};
	int product[numRows][numCols] {0};

	for (int row{0}; row < numRows; ++row) {
		for(int col{0}; col < numCols; ++col) {
			product[row][col] = row*col;
		}
	}

	for (int i{1};i<numRows;++i) {
		for(int j{1};j<numCols;++j) {
			std::cout << product[i][j] << " \t";
		}
		std::cout << "\n";
	}
}

void checkSizeOfCString() {
	// 6.6
	char myString[] {"string"};
	int length{sizeof(myString)/sizeof(myString[0])};
	std::cout << myString << " has " << length << " characters\n";
	for (int i{0};i<length;++i) {
		std::cout << static_cast<int>(myString[i]) << " ";
	}
}

void properWayOfStringHandling() {
	// 6.6
	char name[255] {};
	std::cout << "Enter your name: ";
	std::cin.getline(name,255);
	std::cout << "You've entered: " << name << "\n";
	// Note that there's a lot of methods that were introduced, however using C-string strings are very risky so avoid in favour of string library
}

void findMemoryAddress() {
	// 6.7
	// a pointer is a variable that holds a memaddress as its value
	// "&" is a address-of operator
	// "*" i a dereference operator
	int x{0};
	std::cout << x << "\n";
	std::cout << &x << "\n";
	std::cout << *&x << "\n";
}

void pointerAction() {
	// 6.7
	int x{5};
	int *intPtr{&x};
	*intPtr = 2;
	std::cout << x << "\n";
	std::cout << typeid(&x).name();
}

void breakingThings(int *&p) {
/*
Pointers are variables that hold a memory address. They can be dereferenced using the dereference operator (*) to retrieve the value at the 
address they are holding. Dereferencing a garbage pointer may crash your application.

Best practice: When declaring a pointer variable, put the asterisk next to the variable name.
Best practice: When declaring a function, put the asterisk of a pointer return value next to the type.
 */
}

void nullPtr() {
	//6.7a
	double *ptr{nullptr};

	if(ptr) {
		std::cout << "I am not null!\n";
	} else {
		std::cout << "I am actually null\n";
	}
}

void passingNullptr(int *p) {
	//6.7a
	if(p) {
		std::cout << "You passed in " << p << "\n";
	} else {
		std::cout << "You passed in a null ptr \n";
	}
}

void ptrChangingValueOfArray(int *ptr) {
	*ptr =4;
	/*
	nt array[3] {1,2,3};
	int *ptr {array};
	++ptr;
	++ptr;
	ptrChangingValueOfArray(ptr);
	cout << array[2] << "\n";
	 */
}

void dynamicMemory() {
	// 6.9a
	int *ptr = new int{6};
	std::cout << ptr << "\n";
	std::cout << *ptr << "\n";
	delete ptr;
	ptr = nullptr;
}

void dynamicAllocationArray() {
	// 6.9a
	int length{5};
	int *array = new int[length];
	std::cout << sizeof(array) << "\n";
	delete[] array;
}

void constDynamicAllocation() {
	int value{5};
	int value2{3};
	const int *ptr{&value};
	ptr = &value2; // this is okay since the ptr itself is not const and can be redirected
	// *ptr = 6 // is not okay since ptr treats the value it is pointing to as a const
	// value = 6 // is okay since the variable is being overwritten via a non-const method
	std::cout << *ptr << "\n";
	/*
	A pointer to a constant variable can point to a non-constant variable (such as variable value in the example above). 
	Think of it this way: a pointer to a constant variable treats the variable as constant when it is accessed through the pointer, 
	regardless of whether the variable was initially defined as const or not.
	 */
}

void pointersConst() {
	/*
int value = 5;
const int *ptr1 = &value; // ptr1 points to a "const int", so this is a pointer to a const value.
int *const ptr2 = &value; // ptr2 points to an "int", so this is a const pointer to a non-const value.
const int *const ptr3 = &value; // ptr3 points to a "const int", so this is a const pointer to a const value.
	 */
}

void references(int &reff) {
	// 6.11
	int value{5}; // reference to non-const values are called references
	int &ref{value};

	value = 6;
	ref = 7;
	std::cout << value << "\n";
	++ref;
	std::cout << value << "\n";

	const int y{9};
	//int &ref2{y};
	reff = 22;
}

void referencesConst() {
	// 6.11a
	int value{1};
	const int &ref{value};
	value =2; // valid
	//ref = 3; // invalid
	/*
	To avoid making unnecessary, potentially expensive copies, variables that are not pointers or fundamental data types (int, double, etc…) 
	should be generally passed by (const) reference. Fundamental data types should be passed by value, unless the function needs to change them.
	Rule: Pass non-pointer, non-fundamental data type variables (such as structs) by (const) reference.
	 */
}

void fooBar() {
	// 6.12
		Person john;
	Person &ref{john};
	ref.age = 45;
	std::cout << john.age << "\n";
}

void forEachLoops() {
	int array[] {1,2,3,4,5};
	for(auto &n: array) {
		++n;
	}

	for(auto &n: array) {
		std::cout << n << " ";
	}
}

void isNameThere() {
	bool isFound{false};
	std::string array[] {"John", "Alice", "Bob", "Carter"};
	std::cout << "Enter a name ";
	std::string input{""};
	std::getline(std::cin,input);
	for (auto &name: array) {
		if (name.compare(input) == 0) {
			isFound = true;
			break;
		}
	}
	if(!isFound) {
		std::cout << input << " was not found.\n";
	} else {
		std::cout << input <<" was found!\n";
	}
}

void usingStdArray() {
	ia myArray {1,2,3,4,5};
	std::cout << myArray[2];
	std::cout << myArray.size();
}
int main() {
	using std::cout;
	usingStdArray();
	return 0;
}	



/*
	double prime[5] {1.0,2.0,3.0};
	double test{1.34};
	cout << test << "\n";
	for(double n: prime) {
		std::cout << static_cast<int>(n) << "\n";
	}

	int arr0[Animal::MAX_ELEMENTS] {Animal::ANIMAL_DOG};
	cout << arr0[0];

	*/