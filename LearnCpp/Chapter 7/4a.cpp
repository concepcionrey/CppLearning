#include <iostream>
#include <string>
#include <tuple>
// Chp 4a
// Returning values by value,address and reference

// Quiz_1
int sumTo(const int n) {}; // CHECK

// Quiz_2
std:::string printEmployeeName(Employee &e) {}; //return type should be  void, function parameter should be const

// Quiz_3
std::tuple<int,int> minMax(const int a, const int b) {}; // solution used out parameter, void minmax(const int x, const int y, int &minOut, int &maxOut);

// Quiz_4
*int getIndexOfLargestValue(int *array,int length) {}; // return type is just int, function parameters also const

// Quiz_5
const &int getElement(int *array, int index){}; // function parameter is const
int main() {
	return 0;
}