#include <iostream>
//Chp 5a
// Enumerated classes
// 

// With enumerated types, they're not type safe.
// C++ introduces enum classes to guarantee enumerations are strongly typed & strongly scoped.
enum Color
{
	RED,
	BLUE,
};

enum Fruit
{
	APPLE,
	ORANGE,
};

enum class classColor {
	RED,
	BLUE,
};

enum class classFruit {
	BANANA,
	APPLE,
};

int main () {
	using std::cout;

	classColor color{classColor::RED};
	classFruit fruit{classFruit::BANANA};
	if (color == classColor::RED) { // both fruit & color are implicitly converted to integers, in this case both 0
		//cout << "Color & fruit are equivalent \n";
		cout << "The color is red \n";
	} else {
		//cout << "Color & fruit are not equivalent \n";
		cout << "The color is blue \n";
	}
	return 0;
}

// General notes
// 1) You can't compare enumerators of different enum classes. (unless they are casted to ints prior)