#include <iostream>
// Chp 7
// Chars

// Chars: a type of data type that is an integer (and follows all the rules of being an 
// integer) but also its own special case type. It holds a 1-byte integer that is usually
// interpreted as an ASCII character.
// 
// Codes 0-31: useless
// Codes 32-127: known as the printable characters that represent letter, numbers, and punctuation
// used to display text on the screen.

int main() {
	char ch1{97}; // initialization w/ integer 97
	char ch2{'a'}; // initialization w/ code point for 'a'

	// However, be careful not to mix up character numbers with actual numbers
	char chw{5}; // initialized with integer value 5
	char chw2{'5'}; // intialized with code point for '5'

	// When printing char values using std::cout, char variables are displayed as
	// ASCII characters instead of numbers
	std::cout << "This is what happens when outputting char 97: " << ch1 << "\n";
	std::cout << ch2 << "\n";

	// However, it is still possible to print out integers instead of ASCII characters
	// using type-casting.
	// type-casting: process to create a value of one type using a value from another type
	
	// Do not do this
	int i{ch1}; // This is clunky by assigning a char to an integer, then printing that integer
	std::cout << i << "\n";

	// Instead use static cast, static_cast<new_type>(expression)
	std::cout << "Static cast in-action! " << "\n";
	std::cout << "Before: " << ch1 << "\n";
	std::cout << "After: " << static_cast<int>(ch1) << "\n";
	
	// It is important to note that static_cast takes an expression as an input. 
	// When a variable is passed, its evaluated to produce its value which is then converted
	// to a different type. Its internal data does not change. static-casting also does not perform
	// range-checking so casting integers into chars will cause overflow.
	// 
	
	// Example of inputting char
	std::cout << "Enter a keyboard character: ";
	char ch{};
	std::cin >> ch; // note that char can only 1 character, others are discarded
	std::cout << ch  << " has an ASCII code " << static_cast<int>(ch) << "\n";

	// Escape sequences: special characters that begin with a "\" followed by a letter
	// or a number.
	// 1) \n: new line
	// 2) \t: create a horizontal tab
	// 3) \a: make an alert
	// 4) \f: move the curst to the next logical page
	// 5) \r: move the cursor to the beginning of line
	// 6) \v: print a vertical tab
	// 7) \': a single quote
	// 8) \": a single double quote
	// 9) \\: a backslashs
	// 10) \?: a question mark
	// 11) /x(number): translate into char represented by hex
	//
	std::cout << "\"This is a quoted text \"" << "\n";
	std::cout << "This string contains a single backslash \\" << "\n";
	std::cout << "6f in hex is char \'\x6F\'" << "\n";

	// "\n" vs std::endl
	// Notice these two produce the exact same results, both move the cursor to the next line.
	// Interally, however, they are different. When std::cout is outputting information, its
	// output could be buffered, meaning inputted data is not released till a certain threshold
	// is has arrived. This is where the difference comes in. std::endl will guarantee the buffer 
	// is flushed for every call to std::cout while "\n" gradually stores queue input.
	return 0;
}

