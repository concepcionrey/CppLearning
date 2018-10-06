#include <iostream>
#include <cmath>
// Chp 7
// Converting between binary & decimal
// 

// Converting from binary to decimal: recall every position of a number is a power of 2 starting from 0 at the right-most
// and doubling as it is read from right to left. Simply, convert every 1/0 into it's power mulitplied by its curr value
// and sum it up.
// Eg. 
// 0101 1110 = (0 * 128) + (1 * 64) + (0 * 32) + (1 * 16) + (1 * 8) + (1 * 4) + (1 * 2) + (0 * 1)

// Converting from decimal to binary: has two 2 different methods
// 1) For smaller values, work backwards
// Eg. 148 =>  148 >128? = 1 --> 20 >64? = 0 --> 20 > 32? = 0 --> 20>16? = 1 --> 4>8? = 0 --> 4 > 4? = 1
// == 1001 0100
// 
//  2) Repeated division by (2): the remainders are used to determine if the value is a 1/0 for a specific position
//  Eg. 148
//  148/2 = 74 r0
//  74/2 = 37 r0
//  37/2 = 18 r1
//  18/2 = 9 r0
//  9/ 2 = 4 r1
//  4/ 2 = 2 r0
//  2/ 2 = 1 r0 
//  1 /2 = 0 r1
//  == 1001 0100
//  

// Adding in binary:
// refer here : http://www.learncpp.com/cpp-tutorial/37-converting-between-binary-and-decimal/

// Converting signed numbers (Everything prior was unsigned numbers): use two's complement. In two's complement
// the leftmost bit signifies if it's positive or negative. Positive signed numbers are stored just like positive unsgined numbers
// while negative signed numbers are stored as the inverse of the positive number
// 
// Negative Integer to Binary: 
// 1) find its positive representation in binary
// 2) invert its bits
// 3) add 1 
// 
// Why is 1 added? To state that a negative value is simply the inverse of its positive suggests 0 would have 2 states.
// Positive 0 [0000 0000] && negative 0 [1111 1111]. By adding 1 to 1111 1111, it is intentionally overflowed to become 
// 0000 0000 && and eliminates the duality of 0 which eases arithmetic calculations
// 
// Binary to Negative Integer:
// 1) Invert its bits
// 2) add 1 **
// 3) convert to decimal
//  ** It's possible to convert to decimal and then add 1 if it's too difficult to do binary addition
//  
//  Note:
//  1) Types do matter. CPU reads the type of a variable to determine if a variable is encoded using standard binary (unsigned)
//  or two's complement (signed binary)

int binarySeparatorChecker(int binarySeparatorCounter) {
	if (!binarySeparatorCounter) {
				std::cout << " ";
				binarySeparatorCounter= 4;
			}

	return binarySeparatorCounter;
}

void binaryConverter(int x) {
	int powStarter{7};
	int binarySeparatorCounter{4};

	while(powStarter != -1) {
		if (x >= pow(2,powStarter)) {
			std::cout << "1";
			x -= pow(2,powStarter);
			--powStarter;
			--binarySeparatorCounter;
			binarySeparatorCounter = binarySeparatorChecker(binarySeparatorCounter);

		} else {
			std::cout << "0";
			--powStarter;
			--binarySeparatorCounter;
			binarySeparatorCounter = binarySeparatorChecker(binarySeparatorCounter);
		}
	}
	std::cout << "\n";
}

int enterValue(){
	std::cout << "Enter a number to be converted to  binary(must be between 0-255): ";
	int userInput{};
	std::cin >> userInput;

	return (userInput >= 0 && userInput <= 255) ? userInput: 0;
}

int main() {
	int userInput{enterValue()};

	if (userInput) {
	binaryConverter(userInput);
	} else {
		std::cout << "Incorrect value entered \n";
	} 
	
	return 0;
}

// Quiz: 