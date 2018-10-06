#include <iostream>
// Chp 3
// Aggregation


// To quality as aggregation, a whole object must meet the following 4 conditions
// 1) The part is a part of the object
// 2) The part can belong to more than 1 object/class at a time
// 3) The part does not have its existence managed by the object
// 4) The part does not know about the existence of the object

// Similar to composition, an aggregation is a part-whole relationship. The difference between composition is:
// 1) The part can belong to more than 1 object at a time
// 2) The part is not responsible for the existence of the object 

// EG: A person & a home address
// 1) every person has a home address
// 2) an adress can have more than 1 person at a time (think about families)
// 3) The adress isn't managed by the people living at the adress and will continue to 
// exist even after the current dwellers leave


// Aggregations possess a "has-a" relationship model

// When implementing aggregate patterns, member variables are typically
// references or pointers that are used to point at objects that have been created
// outside of the class


// Rule: Implement the simplest relationship type that meets the needs of your program, not what seems right in real-life.

int main(int argc, char const *argv[])
{
	
	return 0;
}

/* ==== Summary =====
1) Composition:
	a) uses normal member variables
	b) can use pointer members it the class handles object memory allocation itself
	c) responsible for the creation & destruction of its parts

2) Aggregation:
	a) uses pointer or reference members that points or references objects that live outside
	the scope of the aggregate class
	b) not responsible for creating/destroying its parts
	EG) a department class with member points that point to a teacher class

Quiz
1a) composition
1b) aggregation
1c) aggregation [composition]
1d) composition
1e) aggregation
*/