#include <iostream>
#include <string>
// Chp 4b
// An introduction to std::string
// 

// Wht exactly is a string?
// A string is a collection of characters that form into text. (This includes numbers and special characters)
// To use it, it requires the <string> header file.
// 

void letterAgeDistributor() {
	std::cout << "Enter your full name: ";
	std::string fullName{""};
	std::getline(std::cin, fullName);

	std::cout << "Enter your age: ";
	int age{};
	std::cin >> age;

	double result{static_cast<double>(age)/fullName.length()};
	std::cout << "You've lived " << result << " for each letter of your name \n";
}

int main() {
	using std::cout;
	using std::cin;
	using std::getline;
	using std::string;

	cout << "A simple usage of strings: \n";
	string sampleString{"The Iron Fortress"};
	cout << sampleString << "\n";

	// Sometimes using strings can have certain issues
	cout << "What happens if we give a value that includes whitespaces... \n";
	string fullName{};
	cin >> fullName;
	cout << "As you can see only " << fullName << " is outputted \n";
	// This is because the ">>" operator extracts characters from cin up to the first whitespace (The rest is stored within cin)
	// To resolve this, the std namespace has a function getline() that takes in cin & a variable string
	cin.ignore(32767, '\n'); // this is explained later
	
	cout << "Let's use getline()! \n";
	string myName{};
	getline(cin,myName);
	cout << "Now, the whole input is produced as " << myName << "\n";

	// Sometimes there are issues with using cin & getline together
	cout << "Enter a random name: ";
	string randomName{};
	cin >> randomName;
	cout << randomName << '\n';

	cin.ignore(32767,'\n'); // Remove to see the code not work properly

	cout << "Enter a random value: ";
	string randomNumber{};
	getline(cin, randomNumber);
	cout << randomNumber << '\n';
	// When cin takes the input from a user for randomName, it also includes a '\n' character as part of the value
	// when the program arrives at getline, it'll notice there is a '\n' remaining in cin and assume the upcoming value
	// is an empty string.
	// To resolve this, refer to line 28 to always ignore the '\n' character
	// FUN FACT: 32767 is the magic number because it represents the largest signed value that can be stored into a 2 byte int
	
	// Strings can be appended!
	string stringHalfA{"42"};
	string stringHalfB{" is the answer to the universe"};
	cout << stringHalfA + stringHalfB << "\n";

	string stringHalfC{" is not the answer"};
	stringHalfA+=stringHalfC;
	cout << stringHalfA << "\n";

	// QUIZ
	letterAgeDistributor();
	return 0;
}