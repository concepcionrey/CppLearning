#include <iostream>
// Chp 5
// Multi-dimensional array

// an array of arrays is called a multi-dimensional array

int array[3][5] =
{
{ 1, 2, 3, 4, 5 }, // row 0
{ 6, 7, 8, 9, 10 }, // row 1
{ 11, 12, 13, 14, 15 } // row 2
};
// One way of initializing arrays

// initializing a multi-dimenstional array to all 0s
int zeroArray[1][1] {0};

int main() {
	// Sample of application usage
	const int numRows = 10;
    const int numCols = 10;
    int product[numRows][numCols] = { 0 };
 
    // Calculate a multiplication table
    for (int row = 0; row < numRows; ++row)
        for (int col = 0; col < numCols; ++col)
            product[row][col] = row * col;
 
    // Print the table
    for (int row = 1; row < numRows; ++row)
    {
        for (int col = 1; col < numCols; ++col)
            std::cout << product[row][col] << "\t";
 
        std::cout << '\n';
    }
	return 0;
}