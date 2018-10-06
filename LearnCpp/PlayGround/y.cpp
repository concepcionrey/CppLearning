#include <iostream>
#include <algorithm>
#include <string>

void nameInput() {
	using std::cout;
	using std::cin;

	cout << "How many names do you like to enter? ";
	int userInput{0};
	cin >> userInput;

	std::string *strArray = new std::string[userInput];

	for(int i{0}; i< userInput; ++i) {
		cout << "Enter name #" << i+1 << ": ";
		cin >> strArray[i];
	}

	sort(strArray, strArray+userInput);

	cout << "Here is your sorted list of names:\n";
	for(int i{0}; i<userInput; ++i) {
		cout << "Name #" << i+1<< ": " << strArray[i] << "\n";
	}
	delete[] strArray;
	
}

int main() {
	nameInput();
	return 0;
}