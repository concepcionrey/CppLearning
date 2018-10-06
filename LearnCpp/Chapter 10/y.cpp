#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	string s1{"the run cat"};
	/*
	string s2{};
	cin >> s1 >> s2;
	string res{};
	res += s1;
	res += s2;
*/
	for(int i = 0; i < s1.length(); ++i) {
		if (s1.at(i) == ' ')
			cout << "I hite a space\n";
	}
	return 0;
}