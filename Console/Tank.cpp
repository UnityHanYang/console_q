#include "Tank.h"

void Tank::attack()
{
	name = "������ũ";
	hp = 600;
	mp = 0;
	atk = 1000;
	die = false;

	cout << "�� �̸��� : " << name << endl;
	cout << "ü��: " << hp << endl;
	cout << "����: " << mp << endl;
	cout << "���ݷ�: " << atk << endl;
	cout << "���ݷ�: " << atk << endl;
	cout << boolalpha;
	cout << "���� ���� �ʴ´�!" << die << endl;

	attack();
}

Tank::Tank()
{
}

Tank::~Tank()
{
}
