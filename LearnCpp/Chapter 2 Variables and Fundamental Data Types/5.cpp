#include <iostream>
#include <iomanip>
// Chp 5
// Floating point numbers

// Integers are great for counting whole numbers but what about numbers
// with decimals or fractional components? Welcome floating point.
// A floating point is a data type that can hold real numbers like .0424
// or -3.33333. Some fun name origins, "floating" comes from the fact it
// can support a variable # with digits before and after the decimal point.
// 
// There are 3 types of floating point data types:
// 1) float: 4 bytes
// 2) double: 8 bytes
// 3) long double: 8 bytes [but can be 12 or 16]
// 

// When using floating point literals, it is always a convention
// to distinguish them by including at least 1 decimal point.
// Generally, floating point literals default to double, an f is suffixed in the end
// to denote that a literal is of type float.
//

// Scientific Notation: a shorthand used for writing long lengthy numbers
// in a concise manner. In C++, this is represented with the letter "e" or "E" which
// is the same as saying "times 10 to the power of."
int main () {
	int x{5}; // an integer
	float fValue{5.0f}; // f is suffixed to the end to distinguish as a float type
	std::cout << "The size of a float is " << sizeof(fValue) << "\n";
	std::cout << "The value it is holding: " << fValue << "\n";
	double dValue{5.0}; // 5.0 is a floating point literal
	std::cout << "The size of a double is " << sizeof(dValue) << "\n";
	std::cout << "The value it is holding is " << dValue << "\n"; 
	long double ldValue;
	std::cout << "The size of a long double is " << sizeof(ldValue) << "\n";

	// It is important to note the digits before the "e" are known as significant digits
	// and define the number's precision. The more sigfigs, the more precise. In C++, 
	//
	// Precision & trailing 0s after a decimal:
	// it does not distinguish between 5 & 5.0000, they are equivalent.
	// 
	// Precision: definition of how many significant numbers a variable can represent
	// without information loss. By the standard, std::cout has a default precision of 6.
	
	std::cout << "Playing around with Scientific Notation" << "\n";
	double d1{5000.0};
	double d2{5e3};
	double d3{.05};
	double d4{5E-2};
	std::cout << d1 << " is equivalent to " << d2 << "\n";
	std::cout << d3 << " is equivalent to " << d4 << "\n";

	std::cout << "Playing with Precision..." << "\n";
	float f{};
	f = 9.87654321f;
	std::cout << f << "\n";
	f = 987.654321f;
	std::cout << f << "\n";
	f = 987654.321f;
	std::cout << f << "\n";
	f = 9876543.21f;
	std::cout << f << "\n";
	f = 0.0000987654321f;
	std::cout << f << "\n"; //this returns 9.87654e-005 which is == 9.87654e-5

	// It is possible to manipulate this with setprecision() from #include <iomanip>
	// BE CAREFUL! undefined behaviour can arise when using floating point numbers that
	// require more precision than the variables can hold.
	std::cout << std::setprecision(17);
	float fManipu{987654321.0f};
	std::cout << fManipu << "\n";
	std::cout << std::setprecision(6);

	std::cout << "Playing with rounding errors" << "\n";
	// Rounding errors also exist. Decimals are represented in binary a little bit differently.
	// .1 is equivlanet to 0.00011001100110011... This can be detrimental regarding precision.
	double re{.1};
	std::cout << re << "\n";
	std::cout << std::setprecision(17);
	std::cout << re << "\n";
	// Another example
	double re_1{1.0};
	std::cout << re_1 << "\n";
	double re_2{.1+.1+.1+.1+.1+.1+.1+.1+.1+.1};
	std::cout << re_2 << "\n";

	std::cout << "Playing around with Nan and Inf" << "\n";
	// There are 2 special categories of floating point numbers; 
	// 1) Inf: infinity, which is either pos/neg.
	// 2) NaN: Not a number.
	double zero{0.0};
	double posinf{5.0/zero};
	std::cout << posinf << "\n";

	double neginf{-5.0/zero};
	std::cout << neginf << "\n";

	double nan{zero/zero};
	std::cout << nan << "\n";

	return 0;
}

// Conclusion:
// 1) Floating point numbers are great for storing very large lengthy numbers vice versa
// as long as they have a limited # of sigfigs otherwise the use of std::setprecision() is needed.
// 2) Floating point numbers are also prone to rounding errors where the number of sigfigs
// in a variable are larger then the allotted precision.
// 
// Quiz:
// a) 3.45e1m 3 sigfigs [WRONG, only trim if they're no decimals]
// b) 4e-3, 4 sigfig [WRONG, same reason as a)]
// c) 1.23005e2, 6 sigfig CORRECT
// d) 1.46e5 3 sig CORRECT
// e) 1.46000001e5, 9 sigfigs CORRECT
// f) 8e-10, 1 sigif CORRECT
// g) 3.45000, 6 sigfigs CORRECT