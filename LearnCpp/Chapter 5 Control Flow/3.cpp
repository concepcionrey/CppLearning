#include <iostream>
// Chp 3
// Switch statements

// Sometimes using chained if statements can be decrease readability of one's code. Instead switch statements offer
// a more efficient method of handling multiple cases.
//

// Switch statements are composed of the switch() followed by a block that contains case labels and default labels.
//  case label: is a check that compares the expression within the switch for equality.
// 	default label: when no case labels match the expression, the switch statement treats this as the error case.

// Rules about switch statements:
// 1) expressions within switch() can only take intergral data types. String or floating point literals will cause the compiler to complain.
// 2) When a case matches with the input, execution will continue until terminated by a return/goto/break statement or any
// method that will interrupt the execution path.
// 2.1) Not having termination statements can create fall-through, a situation where cases will overflow to other cases.
// 3) You can declare but not initialize variables within case statements (both before and after case labels)
// 3.5) You are, however, allowed to initialize in the last case/default case since no fall-through will occur. PLEASE AVOID
// 4) all statements in a switch statement are all in the same scope due to the switch not implicitly blocking
enum class Pokemon {
	MISSINGNO,
	BULBASAUR,
	SQUIRTLE,
	CHARMANDER,
	PIKACHU,
	EVEE,
};

enum class Animal {
	PIG,
	CHICKEN,
	GOAT,
	CAT,
	DOG,
	OSTRICH,
};

std::string getAnimalName(Animal animal) {
	switch(animal) {
		case Animal::PIG:
			return "pig";
		case Animal::CHICKEN:
			return "chicken";
		case Animal::GOAT:
			return "goat";
		case Animal::CAT:
			return "cat";
		case Animal::DOG:
			return "dog";
		case Animal::OSTRICH:
			return "ostrich";
		default:
			std::cout << "Invalid animal found ";
			return NULL;
	}
	return "";
}

int printNumberOfLegs(Animal animal) {
	using std::cout;

	cout << "A " << getAnimalName(animal) << " has ";
	switch(animal) {
		case Animal::PIG:
		case Animal::CHICKEN:
		case Animal::OSTRICH:
		cout << "2 legs. \n";
		break;
		case Animal::GOAT:
		case Animal::CAT:
		case Animal::DOG:
		cout << "4 legs \n";
		break;
		default:
			std::cout << "Invalid animal found ";
			break;
	}
	return 0;
}

int calculate(int a, int b, char op) {
	switch(op) {
		case '+':
			return a + b;
		case '-':
			return a  - b;
		case '*':
			return a * b;
		case '/':
			return a/b;
		case '%':
			return a % b;
		default: 
			std::cout << "Error op \n";
	}
	return 0;
};

int main() {
	using std::cout;
	cout << "Choose a pokemon! ";
	int pChoice{0};
	std::cin >> pChoice;

	switch(pChoice) {
		case static_cast<int>(Pokemon::MISSINGNO):
			cout << "ERROR?!?!? MISSINGNO !>3$# HAS BEEN ?!?@SELCTED ?!?@?ER# \n";
			break; // a statement to indicate to the compiler that we are finishd with this block of code
		case static_cast<int>(Pokemon::BULBASAUR):
			cout << "The grass starter! \n";
			break;
		case static_cast<int>(Pokemon::SQUIRTLE):
			cout << "The water starter! \n";
			break;
		default:
			cout << "???";
			break;
	}

	// A switch expressing the rule #3
	switch(pChoice) {
		int a; // declaration is allowed
	//	int b = 3; // initialization is now allowed
		case 0: 
			int c;
			break;
		case 1:
			c = 2; // due to all the case label statements being in the same scope, it is possible to declare a variable in 1 case and use it in another
		default:
			cout <<"Hello \n";
			break;
	}

	// Quiz time
	// 1) calculate identifier
	cout << "Enter a number: ";
	int a{0};
	std::cin >> a;

	cout << "Enter another number: ";
	int b{0};
	std::cin >> b;

	cout << "Enter an operation (+,-,*,/,%): ";
	char op{};
	std::cin >> op;

	cout << a << op << b << " = " << calculate(a,b,op) << "\n";

	// 2)
	printNumberOfLegs(Animal::CAT);
	printNumberOfLegs(Animal::OSTRICH);

	return 0;
}
