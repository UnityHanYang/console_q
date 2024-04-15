#include "Battlecruiser.h"
#include "Tank.h"


Battlecruiser::Battlecruiser()
{
	name = "배틀크루저";
	hp = 1000;
	mp = 200;
	atk = 1400;
	die = false;

	cout << "내 이름은 : " << name << endl;
	cout << "체력: " << hp << endl;
	cout << "마나: " << mp << endl;
	cout << "공격력: " << atk << endl;
	cout << "공격력: " << atk << endl;
	cout << boolalpha;
	cout << "나는 죽지 않는다!" << die << endl;

	attack();
}

Battlecruiser::~Battlecruiser()
{
}


void Battlecruiser::attack()
{
	cout << "야마토" << endl;
}
