#include <iostream>
#include <cstdlib>

namespace  a
{
	int x{10};
}

namespace b
{
	int x{20};
}

int main() {
	using namespace a;
	//using namespace b;
	using std::cout;

	// cout << "Enter a value: ";
	// int x{};
	// std::cin >> x;


	cout << "Hello World! \n";
	cout << x << "\n";
	(cout << (10 >20)) ? 1:2;
	return 0;
}