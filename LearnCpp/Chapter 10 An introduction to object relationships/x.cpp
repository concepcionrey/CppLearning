#include <string>
#include <iostream>
using namespace std;




int main() {
	string str{};
	getline(cin, str);
	string res{};
	int start = 0;
	for(int i = 0; i<str.length(); ++i) {
		if (str.at(i) == ' ' || str.at(i) == str.at(str.length()-1)) {
			string temp = str.substr(start,((i-start)+1)) + " ";
			reverse(temp.begin(), temp.end());
			res+= temp;
			//cout << res << "\n";
			start = i+1;
		}
	}
	
	reverse(res.begin(), res.end());
	cout << res; // note res[0] should be removed
	return 0;
}

//

// foo bar
// oof rab
//  rab oof 
//  the run cat
//  
/*
This is temp: the
This is temp: run cat
ehttac nur*/