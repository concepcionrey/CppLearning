#include <iostream>
// Chp 10
// std::cin, extraction and invalid text inputs
// 

// std::cin, buffers, and extraction
// extraction: the process when the ">>" operator is used to get user input and put it into a variable
// ">>" becomes an extraction operator
// 
// When a user enters information in response to an extraction operator, it gets stored inside a buffer inside of
// std::cin. A buffer, is a location in memory dedicated for storing data temporarily while it is moved around from
// one place to the next. When an extraction occurs, the following occurs:
// 
// 1) If there is data in the buffer, then the data is used for extraction
// 2) If the input buffer has no data, the user is asked to input data for extraction
// 3) The ">>" operator extracts as much data from the buffer into the variable
// 4) Any invalid data is not extracted and left within the buffer for the next extraction
// 
// A simple example: a user inputs 5a into int x
// 5 is extracted and placed into x while a\n is left within the buffer for the next extraction
// 


// Input validation: the process of checking user input conforms to the specifications of the system
// There are 3 ways to do this:
// 1) Inline
// 2) Post-entry
// 2.1) All user input is turned into string, and converted if it matches the specifications
// 2.2) Handle all user input via error cases
// 

// Types of invalid text input:
// 1) Input extraction suceeds but the input is meaningless
// 1.1) An integer is inputted but does not belong in the indicated range of inputs
// 2) Input extraction suceeds but the user inputs additional input
// 2.1) A char operator is requested and the user inputs "*foobar"
// 3) Input extraction fails
// 3.1) An integer is requested but a char is inputted
// 4) Input extraction suceeds but the user overflows a numeric value
// 
// Note: Prior to C++11, a failed extraction would not modify the variable being extracted to. This means that if a variable was uninitialized, 
// it would stay uninitialized in the failed extraction case. However, as of C++11, a failed extraction will cause the variable to be zero-initialized. 
// Zero initialization means the variable is set to 0, 0.0, “”, or whatever value 0 converts to for that type.

// Please refer to this http://www.learncpp.com/cpp-tutorial/5-10-stdcin-extraction-and-dealing-with-invalid-text-input/
// 

char getOperator() {
	while(true) {
		std::cout << "Enter one of the following operators: +, -, *, /: ";
		char op{};
		std::cin >> op;
		std::cin.ignore(32767,'\n'); // remove any extraneous input left within the input buffer
		if (op == '+' || op == '-' || op == '*' || op == '/') {
			return op;
		} else {
			std::cout << "Try again! \n";
		}

	}
}

int main() {
	int x{0};
	std::cin >> x;
	return 0;
}

// Useful code for std::cin going into failure mode

/*
if (std::cin.fail()) // has a previous extraction failed or overflowed?
{
    // yep, so let's handle the failure
    std::cin.clear(); // put us back in 'normal' operation mode
    std::cin.ignore(32767,'\n'); // and remove the bad input
}
*/