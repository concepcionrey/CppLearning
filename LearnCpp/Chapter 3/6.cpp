#include <iostream>
// Chp 6
// Logical Operators
//

int main() {
	// There are 3 type of logical operators
	// 1) Logical NOT: "!" => if an operands evaluates to TRUE, logical NOT will evaluate it to false
	bool sampleNot{true};
	std::cout << "This variable is currently: " << std::boolalpha << sampleNot << "\n";
	std::cout << "This variable is now changed to " << !sampleNot << std::noboolalpha << "\n";
	// 1.1) Be careful with precedence when using logical NOT, it has a very high precedence. 
	// 1.2) Logical NOT also works with integer types. Recall that in C++, any nonzero value is false.
	int x{5};
	std::cout << "This is currenlty: " << x << " but negating it makes it: " << !x << "\n";
	// 1.3) Always use parenthesis to make intentions clear & as well as resolve any precedence bugs.
	
	// 2) Logical OR: "||" => an operator used to test where 1 or both conditions of a conditional are met.
	std::cout << "An example of logical OR: \n";
	std::cout << "Enter a value: ";
	int y{};
	std::cin >> y;

	if (y == 0 || y == 1) {
		std::cout << "0 or 1 has been selected \n";
	} else {
		std::cout << "0 or 1 has not been selected \n";
	}

	// 3) Logical AND: "&&" => an operator used to test if both conditions are true.
	std::cout << "An example of logical AND \n";
	std::cout << "Enter a value: ";
	int z{0};
	std::cin >> z;

	if (z > 10 && z < 20) {
		std::cout << "User input is between 10 && 20 \n"; 
	} else {
		std::cout << "User input is not between 10 && 20 \n";
	}

	// Short circuit evaluation: the process of resolving logical functionality. With AND, As soon as it hits a false case on the
	// first conditional, it will then ignore the need to evaluate the operation on the 2nd conditional and return false
	// as soon as possible. With OR, when the first conditional evaluates to true then, the operator automatically returns true
	// 
	
	// De Morgan's law: The De Morgan's laws state that complement of intersection of two sets is the union of their complements.
	// Specifically it entails these two states:
	// 1) !(x && y) == !x || !y
	// 2) !(x || y) == !x && !y
	
	// What about exclusive or (XOR)?
	// C++ doesn't provide an operator for it because it cannot be short circuited. This can be circumvented via
	// 1) using a combinations of OR && AND
	// 2) using NOT
	// 

	// Quiz:
	// 1) (true && true) || false == True CORRECT
	// 2) (false && true) || true ==True CORRECT
	// 3) (false && true) || false || true == True CORRECT
	// 4) (5 > 6 || 4 > 3) && (7 > 8) == False CORRECT
	// 5) !(7 > 6 || 3 > 4) == False CORRECT
	return 0;
}