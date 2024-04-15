#include "Tank.h"

void Tank::attack()
{
	name = "시즈탱크";
	hp = 600;
	mp = 0;
	atk = 1000;
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

Tank::Tank()
{
}

Tank::~Tank()
{
}
