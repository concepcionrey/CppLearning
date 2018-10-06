#include <iostream>
#include <functional>

using arithmeticFcn = int(*)(int,int);

int getUserInput() {
	std::cout << "Enter an integer: ";
	int x{0};
	std::cin >> x;
	return x;
}

char getOperation() {
	std::cout << "Enter an operation ('+','-','*','/')\n";
	char x{};
	while(true) {
		std::cin >> x;

		if(x != '+' && x && '-' && x != '*' && x != '/') {
			std::cout << "Invalid input, try again\n";
		} else {
			break;
		}
	}

	return x;
}

int add(const int x, const int y) {
	return x + y;
}

int subtract(const int x, const int y) {
	return x - y;
}

int multiply(const int x, const int y) {
	return x * y;
}

int divide(const int x, const int y) {
	return x / y;
}

struct arithmeticStruct
{
	char op;
	arithmeticFcn fcn;
};

static const arithmeticStruct arithmeticArray[] {
	{'+',add},
	{'-',subtract},
	{'*',multiply},
	{'/', divide}
};

arithmeticFcn getArithmeticFunction(const char op) {
	/* Quiz 1 Solution:
	switch(op) {
		case '+':
			return add;
		case '-':
			return subtract;
		case '*':
			return multiply;
		case '/':
			return divide;
		default:
			std::cout << "Invalid operation\n";
			return nullptr;
	}
	*/
	for(const auto &n: arithmeticArray){
		if (n.op == op)
			return n.fcn;
	}
	return add; // default
}

int main() {
	int x = getUserInput();
	char op = getOperation();
	int y = getUserInput();

	arithmeticFcn res = getArithmeticFunction(op);

	std::cout << x << " " << op << " " << y << " = " << res(x,y) << "\n";

	return 0;
}