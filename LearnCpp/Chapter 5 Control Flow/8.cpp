#include <iostream>
// Chp 7
// Break & continue
//

// Minimizing the number of variables used and keeping the number of nested blocks down both improve code understandability more 
// than a break or continue harms it.For that reason, judicious use of break or continue is acceptable

// break: statement that terminates a switch or a loop, then continues execution to the first statement after
// the loop/switch
// return: statement that terminates an entire function the loop is located in, and execution continues to the first
// statement after the function call

// The issue with using break & return is reducing readability by causing execution to leap around and reduce the flow of logic in the system.
// However, judicious use of them can improve readibility by reducing the # of nested blocks and the need of complicated looping logic
int breakOrReturn() {
	while (true) {
		std::cout << "Enter 'b' to break or 'r' to return: ";
		char ch{};
		std::cin >> ch;

		if (ch == 'b') {
			break; // execution will continue to the first statement after the loop, the std::cout
		}

		if (ch == 'r') {
			return 1; // execution will return to main() or the function caller
		}
	} 
	std::cout << "The loop has been broken! \n";
	return 0;
}

int main() {
	int returnValue{breakOrReturn()};
	std::cout << "Function breakOrReturn returned " << returnValue << "\n";

	// continue: a statement to cause the execution to jump to the end of the loop body for the current iteration
	for (int i{0}; i< 20; ++i) {
		if(i%4 == 0) {
			continue; // continue is used to avoid printing any number divisible by 4 to the command line
		} // Be wary, sometime it is possible to generate infinite loops via not incrementing/decrementing condition expressions
		std::cout << i << "\n";
	}

	//
	return 0;
}