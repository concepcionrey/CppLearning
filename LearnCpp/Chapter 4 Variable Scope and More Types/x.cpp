#include <iostream>

enum class monsterType {
	Ogre,
	Dragon,
	Orc,
	GiantSpider,
	Slime,
};

struct Monster
{
	std::string name;
	monsterType type;
	int health{};

};

std::string getMonsterType(Monster monster) {
	switch(static_cast<int>(monster.type)) {
		case 0:
			return "Ogre";
			break;
		case 1:
			return "Dragon";
			break;
		case 2:
			return "Orc";
			break;
		case 3:
			return "GiantSpider";
			break;
		case 4:
			return "Slime";
			break;
		default:
			return "Invalid monster";
			break;
		}
		return "";
}

void printMonster(Monster monster) {
	using std::cout;
	cout << "This " << getMonsterType(monster) << " is named "  << monster.name << " and has " << monster.health << " health.\n";
}

int main() {
	Monster a{"Torg", monsterType::Ogre, 145};
	Monster b{"Blurp", monsterType::Slime, 23};

	printMonster(a);
	printMonster(b);
	return 0;
}