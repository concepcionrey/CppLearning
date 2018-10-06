#include <iostream>
#include <string>
#include <algorithm>
// Chp 9a 
// Dynamically allocating arrays

// In addition to allocating single values, it is also possible to allocate arrays of variables

void quiz() {
	std::cout << "How many names would you like to enter? ";
	int numNames{0};
	std::cin >> numNames;

	std::string *stringArr = new std::string[numNames];

	for(int i{0}; i < numNames; ++i) {
		std::string userInput{""};
		std::cout << "Enter name #" << i+1 << ": ";
		std::cin >> userInput;
		stringArr[i] = userInput;
	}

	std::sort(stringArr,stringArr+numNames);

	std::cout << "Here is your sorted list: \n";
	
	for (int i{0}; i<numNames;++i) {
		std::cout << "Name #" << i+1 << ": " << stringArr[i] << "\n";
	}

	delete[] stringArr;
}

int main() {
	// to dynamically allocate an array, we used the array form of new and delete
	std::cout << "Enter the length of the array: ";
	int length{0};
	std::cin >> length;

	int *array = new int[length]; // use array new to instantiate an array of size length

	array[0] = 5;
	delete[] array; // use array delete to free the memory used by array

	// “How does array delete know how much memory to delete?” 
	// answer: array new[] keeps track of how much memory was allocated to a variable, 
	// so that array delete[] can delete the proper amount
	

	// General:
	// 1) dynamic arrays are almost identical to fixed arrays where it functions like a decayed fixed array
	// except programmers but manually call new[] & delete[]
	
	// In C++11, it is possible to initialize dynamic arrays using initializer lists
	int *array2 = new int[5] {1,2,3,4,5}; // Note: the length of the dynamic array must be explicitly given
	std::cout << array2[0] << '\n';
	delete[] array2;

	quiz();
	return 0;
}