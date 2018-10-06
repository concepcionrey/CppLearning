#include <iostream>
// Chp 2
// Composition

// Object Composition: building complex objects from smaller ones. 
// Like the philosophical belief of reductionism, Things are composed of smaller things
// whose combination define/encompass the cumulative/resulting object.

// Object composition models a "has a" relationship between two objects. A computer "has a " CPU or
// a car "has a " engine. This larger object is known usually as the parent & the smaller object is
// known as the child or component. 

// In C++, this can be seen through use the of member variables within structs & classes where the member
// variables are the components and the struct/class itself is the parent. 

// Composition: a type of objection relation that fulfills the following criteria:
// 1) the part is a part of the object
// 2) the part can only belong to 1 object at a time
// 3) the part has its existence managed by the object
// 4) the part does not know the existence of the object [I think this one's a strong indicator]
// It is known as a part-whole relationship where the part must constitute part of the whole object.
// The object is responsible for the existence of its parts. Meaning, its components have the same lifetime
// as the whole object.
// Utilizing 4), Composition is a unidirectional relationship where the body knows about the existence of a heart
// not vice versa.

// Sample of a class using composition design
class Fraction
{
private:
	int m_numerator; 
	int m_denominator;
	// the private variables are not aware that it is part of a fraction, they simply hold integers.
public:
	Fraction(int numerator = 0, int denominator = 1): 
	m_numerator{numerator},m_denominator{denominator} {
		reduce();
	}
	
};
// Instead of "has-a", it is more precise to state "part-of" since the goal is modelling physical relationships &
// one object is physically contained in another.

int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}

/*
Summary
Object Composition is useful in a C++ context because it allows us to create complex classes by combining simpler, more easily manageable parts. 
This reduces complexity, and allows us to write code faster and with less errors because we can reuse code that has already been written, tested, 
and verified as working
 */