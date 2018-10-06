#include <iostream>
// Chp 4c
// Keywords and identifiers
// 

// identifer: the name given to a function, variable
// and/or any kind of object in C++. Certain rules must
// be followed when naming these.
// 
// 1) the identifier cannot be a keyword
// 2) the identifer can only consist of a combination
// of uppercase and lowercase characters, numbers and the
// "_" character.
// 3) Identifiers must begin with a letter.
// 
// Variables & functions should always begin with a lowecase letter.
// 
// Identifers whose names begin with a capital letter are reserved for
// structs, classes and enumerations. 
// 
// If variables and functions are muli-worded, then separate them with
// the use of the "_" character or use CamelCase.
// 
// Eg. of good/bad naming conventions
// 
 
int main() {
	int ccount; // Bad--> nobody knows what ccount is
	int customerCount; // Good --> it's clear what we're counting

	int index; // Can go either way dependent on the context
	int totalScore; // Good, it is descriptive
	int data; // Bad, what kind of data are we using here?
	int numberOfApples; // Good, it is descriptive

	// sometimes comments can reduce the length of an identifier.
	
	// holds the # of chats in a piece of text [including whitespace]
	int numOfChars;
}

// Quiz
// 1) clear
// 2) cannot begin a variable with a "_" character
// 3) variables must begin with lowercase
// 4) variables cannot have whitespace in-between
// 5) clear, this is actually really good! [WRONG]
// 6) variables cannot use keywords
// 7) clear
// 8) variables need to begin with a lowercase character
// 9) clear