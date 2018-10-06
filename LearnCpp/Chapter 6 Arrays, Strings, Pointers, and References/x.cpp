#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
// Chp X
// Comprehensive quiz

enum Items
{
	ITEM_HEALTH_POTIONS,
	ITEM_TORCHES,
	ITEM_ARROWS,
	MAX_SIZE,
};

struct Student
{
	int grade;
	std::string f_name;
};

int array[MAX_SIZE] {2,5,10};

int countTotalItem(int *array) {
	int res{0};
	for (int i{0}; i < Items::MAX_SIZE; ++i) {
		res+=array[i];
	}
	return res;
}

void doSort(Student *std, int length) {
	for(int i{0}; i < length; ++i) {
		int higestGradeIndex = i;
		for(int j{i+1}; j <length; ++j) {
			if(std[j].grade > std[higestGradeIndex].grade) {
				higestGradeIndex = j;
			}
		}
		std::swap(std[i],std[higestGradeIndex]);
	} 
}

void quiz_2() {
	int numOfStudents{0};
	std::cout <<"How many students are there? "; // could use do-while to ensure users input valid entries
	std::cin >> numOfStudents;
	Student *sArray = new Student[numOfStudents];

	for(int i{0}; i< numOfStudents; ++i) {
		std::string studentName{""};
		int studentGrade{0};
		std::cin >> studentName;
		std::cin >> studentGrade;
		sArray[i].grade = studentGrade;
		sArray[i].f_name = studentName;
	}

	doSort(sArray,numOfStudents);


	for(int i{0}; i < numOfStudents; ++i) {
		std::cout << sArray[i].f_name << " got a grade of " << sArray[i].grade << '\n'; 
	}
	delete[] sArray;
}

void quiz_3(int &a, int &b) {
	int temp {0};
	temp = a;
	a = b;
	b = temp;
}

void quiz_4() {
	char myString[] = "Hello World!";
	char *ptr = myString;
	while(*ptr != '\0') {
		std::cout << *ptr << " ";
		++ptr;
	}
}

/*
Quiz 5
1) the loop will access an element which is out-of-bounds. Use "<" instead of "<="
2) It is not possible to use a dereferenced ptr to change the value of the variable it is pointing to since the ptr treats it as a const
3) Cannot pass the array as a function parameter and call a for-each loop on it. Array will decay into a ptr
4) temp will return as a ptr to the first element and will not be able to know how big of an array it is [temp is a fixed array that is also a localvar and will go out of scope at the end of the function(meaning it gets destroyed)]
5) incorrect ptr type
 */

int main() {
	std::cout << "The player has " << countTotalItem(array) << " items in total.\n";
	//quiz_2();
	int a = 5;
	int b = 10;
	quiz_3(a,b);
	std::cout << "this is a: " << a << '\n';
	std::cout << "this is b: " << b << '\n';
	quiz_4();
	return 0;
}