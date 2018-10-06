#include <iostream>
#include <string>
// Chp 8b
// non-static member initialization

class Rectangle
{
private: // starting in C++11, it is possible to give normal class member variables a default init value
    double m_length = 1.0; // m_length has a default value of 1.0
    double m_width = 1.0; // m_width has a default value of 1.0
 
public:
    Rectangle()
    {
    // This constructor will use the default values above since they aren't overridden here
    }
 
    void print()
    {
        std::cout << "length: " << m_length << ", width: " << m_width << '\n';
    }
};
// non-static member init: provides default values for member vars that the constructor will use if constructor
// does not provide init values for the members themselves. NOTE that the constructor still dictated what object 
// can be created

// Rules:
// 1) If a default initialization value is provided and the constructor initializes the member via the member initializer 
// list, the member initializer list will take precedence. 
// 2) Favor use of non-static member initialization to give default values for your member variables.

// Quiz: refactor this
class Ball {
private:
	std::string m_color ="black";
	double m_radius = 10.0;
 
public:
        // Default constructor with no parameters
	Ball()
	{
		//m_color = "black";
		//m_radius = 10.0;
	}
 
        // Constructor with only color parameter (radius will use default value)
	Ball(const std::string &color) : m_color{color}
	{
	//	m_color = color;
	//	m_radius = 10.0;
	}
 
        // Constructor with only radius parameter (color will use default value)
	Ball(double radius): m_radius{radius}
	{
	//	m_color = "black";
	//	m_radius = radius;
	}
 
        // Constructor with both color and radius parameters
	Ball(const std::string &color, double radius): m_color{color}, m_radius{radius}
	{
	//	m_color = color;
	//	m_radius = radius;
	}
 
	void print()
	{
		std::cout << "color: " << m_color << ", radius: " << m_radius << '\n';
	}
};

// Quiz: why have a default constructor?
// because Ball def will look for a constructor to handle its object instantiation and if the default does not 
// exist (empty params), then the compiler will complain
int main(int argc, char const *argv[])
{
	Ball def;
	def.print();
 
	Ball blue("blue");
	blue.print();
	
	Ball twenty(20.0);
	twenty.print();
	
	Ball blueTwenty("blue", 20.0);
	blueTwenty.print();
	return 0;
}