#include <iostream>
#include <string>
// Chp 5
// Enumerated Types

// Sometimes built-in types aren't sufficient, progammers need more flexibility & control
// Progammer-made data types are known as user defined data types

// One instance of this is known as an enumerated type (enumeration)
// enumration: a data type where every possible value is defined as a symbolic constant (enumerators)

// An example of an enum

enum Color // Enumerator names must always begin with a capital letter
{
	COLOR_RED, // naming conventions for enumerators suggest all capitals
	COLOR_BLUE,
	COLOR_GREEN, // every enumerator holds an integer val starting at 0 and every additinal enumerator holds an incremented value
	COLOR_BLACK,
	COLOR_WHITE, // in C++ 11, it is suggested to end with a trailing comma
}; // Enumerated types must always end with a ";"

Color g_paint{COLOR_WHITE}; // Sample of a defining a variable with type Color

enum Race
{
	RACE_ORC,
	RACE_GOBLIN,
	RACE_TROLL,
	RACE_OGRE,
	RACE_SKELETON,
};

Race enemyType{RACE_TROLL};

enum ItemType
{
	ITEMTYPE_SWORD,
	ITEMTYPE_POTION,
	ITEMTYPE_BOW,
	ITEMTYPE_SHIELD,
};

std::string getItenName(ItemType itemType) {
	using std::cout;

	switch(itemType) {
		case 0:
			return std::string{"Sword"};
			break;
		case 1:
			return std::string{"Potion"};
			break;
		case 2:
			return std::string{"Bow"};
			break;
		case 3:
			return std::string{"Shield"};
			break;
		default :
			return std::string{"???"};
			break;
	}	
}

int main() {
	ItemType itemType{ITEMTYPE_SWORD};

	std::cout << "You are carrying a " << getItenName(itemType) << "\n";
	return 0;
}

// General rules about enumerated types:
// 1) It is illegal to define an enumrator in more than one enumeration
// 2) Enumerators are prefixed with capitalized enums
// 3) Don't assign the same values to two different enumerators
// 4) enumerators hold interger values, to outout it as a text requires a switch statement
// 5) It is not possible to implicitly convert an integer to an enumerated type nor it is possible to cin it
// 6) It is not possible to forward declare enumrerated types but it is possible to put them into header files

// The purpose of enumerators is for situations to represent various different states more clearly

// QUIZ
// 3)
//  a) T
//  b) T
//  c) F
//  d) T
//  e) T
//  f) F