#include <iostream>
// Chp 14
// Anonymous functions

// In certain cases, variables are only needed temporarily

// anonymous object: a value with no name. They have expression scope and cannot be referred to besides its creation

int add(const int x, const int y) {
	return x + y; // x + y's result is an anonymous object
}

void printVal(int value) {
	std::cout << value << '\n';
} 

// Sample of complex usage of anonymous objects     
class Cents
{
private:
    int m_cents;
 
public:
    Cents(int cents) { m_cents = cents; }
 
    int getCents() const { return m_cents; }
};
 
Cents add(const Cents &c1, const Cents &c2)
{
    return Cents(c1.getCents() + c2.getCents()); // return anonymous Cents value
}

int main(int argc, char const *argv[]) {
	printVal(3+5); // another use-case of anonymous functions
	Cents cents1(6);
	Cents cents2(8);
	std::cout << add(cents1,cents2).getCents() << "\n";
	return 0;
}





/* === Summary ====
Anonymous objects/functions are primarily used to pass	or return values without the need of creating temporarily varialbes
which contributes to bloating code, making it unclean, long and complex to follow. They are treated like r-values because of this
behaviour, also meaning they can only be passed by const reference and returned by value
 */