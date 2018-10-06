#include <iostream>
// Chp 15
// Nested Types in Classes

// It is possible in C++ to nest(define) types within a class




class Fruit
{
// Alternatively to generating that 1st public access specifier below
 // ...
public:
	enum FruitType
	{
		APPLE,
		BANANA,
		CHERRY
	}; // Note, public access identifier is called again below, this is because m_type needs to know what FruitType is

private:
	FruitType m_type;
	int m_percentage = 0;
public:
	Fruit(FruitType type): m_type{type} {};

	FruitType getType() {return m_type;}
	int getPercentage() {return m_percentage;}
};

int main(int argc, char const *argv[])
{
	Fruit f_1(Fruit::APPLE);
	std::cout << f_1.getType() <<'\n';
	return 0;
}

/* ==== SUMMARY ======
Classes act as a namespace for any nested type, this includes enum,enum class,typedef, type alias and so on.
The only concern is that they lack the hidden "this" ptr within the class

 */