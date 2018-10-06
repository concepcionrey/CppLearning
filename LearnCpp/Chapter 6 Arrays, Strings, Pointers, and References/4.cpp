#include <iostream>
// Chp 4
// Soring an array using Selection sort

/* ====== How it Works ======== 
Selection sort performs the following steps to sort an array from smallest to largest:
1) Starting at array index 0, search the entire array to find the smallest value
2) Swap the smallest value found in the array with the value at index 0
3) Repeat steps 1 & 2 starting from the next index

*/

void bubbleSort() {
	const int length(9);
	int array[length] = { 6, 3, 2, 9, 7, 1, 5, 4, 8 };

	for(int startI{0}; startI < length; ++startI) {
		int numOfSwaps = 0;
		for(int currIndex{0}; currIndex < length - startI; ++currIndex) {
			if(array[currIndex] > array[currIndex+1]) {
				std::swap(array[currIndex], array[currIndex+1]);
				++numOfSwaps;
			}
		}
		if (!numOfSwaps) {
			std::cout << "Early termination on iteration " << startI+1 << "\n";
			break;
		}
	}
	for (auto& n: array) {
		std::cout << n << " ";
	}
}

int main() {

	const int length = 5;
	int array[length] = { 30, 50, 20, 10, 40 };
 
	// Step through each element of the array
	// (except the last one, which will already be sorted by the time we get there)
	for (int startIndex = 0; startIndex < length - 1; ++startIndex)
	{
		// smallestIndex is the index of the smallest element we’ve encountered this iteration
		// Start by assuming the smallest element is the first element of this iteration
		int smallestIndex = startIndex;
 
		// Then look for a smaller element in the rest of the array
		for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
		{
			// If we've found an element that is smaller than our previously found smallest
			if (array[currentIndex] > array[smallestIndex])
				// then keep track of it
				smallestIndex = currentIndex;
		}
 
		// smallestIndex is now the smallest element in the remaining array
                // swap our start element with our smallest element (this sorts it into the correct place)
		std::swap(array[startIndex], array[smallestIndex]);
	}
 
	// Now that the whole array is sorted, print our sorted array as proof it works
	for (int index = 0; index < length; ++index)
		std::cout << array[index] << ' ';
	std::cout << '\n';
 	bubbleSort();
	return 0;
}