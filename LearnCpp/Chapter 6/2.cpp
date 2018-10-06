#include <iostream>
// Chp 2
// Arrays (Part II)

// Arrays are like normal variables, when created they are uninitialized.
// One way to initialize them is to perform each initialization individually
int Xprime[5];
//Xprime[0] = 1;
//Xprime[1] = 3;
// ... and so on but this is tedious, instead there exists the option to use initializer lists
int Yprime[5] {2,3,5,7,11}; // compiler will complain if more elements are introduced than the size provided
// However,if there are less initializers in the list, then the remaining elements are initialized to 0

// it is all possible to initialize all elements to 0 via
int Zprime[5] {};

// It is also not necessary to provide the length either, the compiler can figure out the length of the array
int Xarray[] {1,2,3,4,5};

// arrays & enum classes require additional work since enum classes lack implicit type conversion to ints
enum class StudentNames {
	KENNY,
	KYLE,
	STAN,
	BUTTERS,
	MAX_STUDENTS,
};

//int testScores[static_cast<int>(StudentNames::MAX_STUDENTS)];
//testScores[static_cast<int>(StudentNames::STAN)] = 76;

// Passing arrays to functions
// when normal variables are passed by value, C++ copies the value of the argument into the function parameter
// Since, it is only copied received by the function calle, the original data is unchanged. However, copying
// can generate tremendous overhead when array sizes reach large values. With arrays, the actual array is passed

void alterArray(int val[5]) {
	for(int i{0}; i<5;++i) {
		val[i] = 3;
	}
}

// sizeof: returns the size of a pointer not the actual array!
void printArraySize(int arr[]) {
	std::cout << sizeof(arr) << '\n';
}

// Indexing out of bounds for an array will generate undefined behaviour
// C++ will not perform any checking ensuring indices are valid

// Quiz
double highTemperaturesInAYear[365] {};

namespace  Animals {
	enum Animals {
		CHICKEN,
		DOG,
		CAT,
		ELEPHANT,
		DUCK,
		SNAKE,
		MAX_ANIMALS,
	};
}
int main() {
	// sample of passing arrays to functions
	int arr[5]{};
	for(auto&n :arr) {
		std::cout << n << " ";
	}
	std::cout << "\n";
	alterArray(arr);

	for(auto&n :arr) {
		std::cout << n << " ";
	}
	std::cout << "\n";

	std::cout << "actual array size: " << sizeof(arr) << '\n';
	printArraySize(arr);

	int animal[Animals::MAX_ANIMALS] {2,4,4,4,2,0};
	std::cout << "An elephant has " << animal[Animals::ELEPHANT] << '\n';
	return 0;
}

