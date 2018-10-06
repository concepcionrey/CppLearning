#include <iostream>
// Chp 4.7 Quiz #1, 

struct AdData
{
	double adsShown;
	double adsClicked;
	double adsEarningsFromClicked;
};

struct Fraction
{
	int numerator;
	int denominator;
};

Fraction setValues();

void fractionProblem() {
	using std::cout;

	cout << "Fraction A: \n";
	Fraction a{setValues()};

	cout << "Fraction B: \n";
	Fraction b{setValues()};

	cout << "Fraction A * Fracion B = " << a.numerator*b.numerator << "/" << a.denominator*b.denominator << "\n";
}

Fraction setValues() {
	using std::cout;

	Fraction temp;
	cout << "Enter a numerator: ";
	std::cin >> temp.numerator;

	cout << "Enter a denominator: ";
	std::cin >> temp.denominator;

	return temp;
}

void printRevenue(AdData ad){
	using std::cout;

	cout << "Revenue based on: \n";
	cout << "# of ads shown: " << ad.adsShown << "\n";
	cout << "# of ads clicked: " << ad.adsClicked << "\n";
	cout << "Earnings per ad: " << ad.adsEarningsFromClicked << "\n";

	cout << "Total revenue = " << (ad.adsShown*ad.adsClicked*ad.adsEarningsFromClicked) << "\n";
}

int main() {
	using std::cout;

	cout << "Enter values for current ad results: \n";

	cout << "Ads shown: ";
	double adsShown{};
	std::cin >> adsShown;

	cout << "Ads clicked: ";
	double adsClicked{};
	std::cin >> adsClicked;

	cout << "Ads earnings average today: ";
	double adsEarningsFromClicked{};
	std::cin >> adsEarningsFromClicked;

	AdData ad{adsShown,adsClicked,adsEarningsFromClicked};

	printRevenue(ad);

	cout << "\n";

	fractionProblem();
	return 0;
}