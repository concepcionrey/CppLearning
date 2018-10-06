#include <iostream>
#include <algorithm>
// Chp x
// Comprehensive quiz

// Quiz 1
double max (double a, double b);

void swap(int &a, int &b);

int& getLargestElement(int *array, int length);
/*
Quiz 2
a) array is a locally defined fixed array that will get destroyed when the program exits the function therefore a garbage value will be returned
b) No termination condition
c) function parameters are not unique since they both are floats also there is no check for dividing by 0
d) array length is to big to be placed on the call stack, better to use memory from the heap
e) accessing argv is accesing an array of C-style strings which cannot be stored as a value for an int variable via assignment
 */

// Quiz 3) refer to programs

int main() {
	return 0;
}