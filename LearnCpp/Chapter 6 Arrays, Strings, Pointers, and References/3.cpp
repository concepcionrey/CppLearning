#include <iostream>
// Chp 3
// Arrays & Loops


int main() {
	/*
	int scores[] {84,92,76,81,56};
	const int numStudents{sizeof(scores)/sizeof(scores[0])};
	int totalScore{0};

	for(auto& n: scores) {
		totalScore += n;
	}
	std::cout << static_cast<double>(totalScore)/numStudents << '\n';

*/
	// Quiz
	// 1)
	int array[] {4,6,7,3,8,2,1,9,5};
	int arraySize{sizeof(array)/sizeof(array[0])};
	for(auto& n: array) {
		std::cout << n << " ";
	}
	std::cout << "\n";

	// 2)
	int ui{-999};
	while (ui < 1 || ui > 9) {
	std::cout << "Enter a # between 1 and 9: ";
	std::cin >> ui;
	if (std::cin.fail()) {
		std::cin.clear();
		std::cin.ignore(32767,'\n');
		}
	}

	std::cout << "User input exists in the array!\n";
	for(auto&n :array) {
		std::cout << n << " ";
	}
	std::cout << "\n";

	for(int i{0};i< (sizeof(array)/sizeof(array[0]));++i) {
		if (array[i] == ui) {
			std::cout << i << '\n';
			break;
		}
	}
	// 3)
	 int scores[] = { 84, 92, 76, 81, 56 };
    const int numStudents = sizeof(scores) / sizeof(scores[0]);
 
    int maxIndex = 0; // keep track of the index of our largest score

 
    // now look for a larger score
    for (int student = 0; student < numStudents; ++student)
        if (scores[student] > scores[maxIndex])
            maxIndex = student;
 
    std::cout << "The best score was " << scores[maxIndex] << '\n';
	return 0;
}