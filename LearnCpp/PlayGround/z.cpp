#include <iostream>

int main() {
	using std::cout;
	/*
	int value1{0};
	int value2{3};
	int *const ptr{&value1};
	ptr = &value2;
	cout << *ptr << "\n";

*/
	int **array{new int*[10]};
	for(int i{0};i<10;++i) {
		array[i] = new int[i+1];
	}
	return 0;
}