#include "Date.h"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	Date foo(2011,9,11);
	cout << foo.getYear() << '\n';
	return 0;
}