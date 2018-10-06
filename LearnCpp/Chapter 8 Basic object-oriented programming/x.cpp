#include <iostream>
#include <cmath>
#include <string>
#include <ctime>
#include <cstdlib>

// Comprehension quiz

// q1/

class Point2d {
private:
	double m_x;
	double m_y;
public:
	Point2d(double x=0.0, double y=0.0): m_x{x}, m_y{y} {}

	friend double distanceFrom(const Point2d &point,const Point2d &point2);
	void print() {
		std::cout << "Point2D(" << m_x << ", " << m_y << ")\n";
	}

/*
	double distanceTo(Point2d point2) {
		return sqrt(pow((m_x - point2.m_x),2) + pow((m_y- point2.m_y),2));
	}
	*/
};

// non-member version
double distanceFrom(const Point2d &point,const Point2d &point2) {
	return sqrt(pow((point.m_x - point2.m_x),2) + pow((point.m_y- point2.m_y),2));
}

// q2
class HelloWorld
{
private:
	char *m_data;

public:
	HelloWorld()
	{
		m_data = new char[14];
		const char *init = "Hello, World!";
		for (int i = 0; i < 14; ++i)
			m_data[i] = init[i];
	}

	~HelloWorld()
	{
       delete[] m_data; // replace this comment with your destructor implementation
   }

   void print() const
   {
   	std::cout << m_data;
   }
};

// q3



class Monster
{
public: 
	enum MonsterType
	{
		DRAGON,
		GOBLIN,
		OGRE,
		ORC,
		SKELETON,
		TROLL,
		VAMPIRE,
		ZOMBIE,
		MAX_MONSTER_TYPES
	};
private:
	MonsterType m_type;
	std::string m_name;
	std::string m_roar;
	int m_hitPoints;
public:
	Monster(MonsterType type, std::string name,std::string roar, int hitPoints):
	m_type{type}, m_name{name}, m_roar{roar}, m_hitPoints{hitPoints} {}

	std::string getTypeString(MonsterType m_type) const {
		switch(m_type) {
			case DRAGON: return "Dragon";
			break;
			case GOBLIN: return "Goblin";
			break;
			case OGRE: return "Ogre";
			break;
			case ORC: return "Orc";
			break;
			case SKELETON: return "Skeleton";
			break;
			case TROLL: return "Troll"; 
			break;
			case VAMPIRE:return "Vampire";
			break;
			case ZOMBIE: return "Zombie";
			break;
			default: return "???";
			break;
		}
	}

	void print() {
		std::cout << m_name << " the " << getTypeString(m_type) << " has " << m_hitPoints << " hit points and says "
		<< m_roar << "*\n";
	}
};

class MonsterGenerator {
public:
	static int getRandomNumber(int min, int max) {
		static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);  // static used for efficiency, so we only calculate this value once
		// evenly distribute the random number across our range
		return static_cast<int>(rand() * fraction * (max - min + 1) + min);
	}



	static Monster generateMonster() {
		Monster::MonsterType type = static_cast<Monster::MonsterType>(getRandomNumber(0,Monster::MAX_MONSTER_TYPES-1));
		int hitPoints = getRandomNumber(0,100);
		static std::string s_names[] {"Boney", "Chompy", "Booey", "Scaly", "Spikey", "Rowdy"};
		std::string name = s_names[getRandomNumber(0,5)];
		static std::string s_roar[] {"Boo", "Meow", "Rawr", "Slither", "clank", "krakoom"};
		std::string roar = s_roar[getRandomNumber(0,5)];
		return Monster(type,name, roar, hitPoints);

		// static keyword was attatched to both string arrays to ensure they are only created once for the entire life time of the program
	}

};



int main(int argc, char const *argv[]) {
	srand(static_cast<unsigned int>(time(0)));
	rand();
	Point2d first;
	Point2d second(3.0,4.0);
	first.print();
	second.print();
	std::cout << "Distance between two points: " << distanceFrom(first, second) << '\n';
	Monster m = MonsterGenerator::generateMonster();
	m.print();
	return 0;
}