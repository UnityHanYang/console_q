#include "Battlecruiser.h"
#include "Tank.h"


Battlecruiser::Battlecruiser()
{
	name = "��Ʋũ����";
	hp = 1000;
	mp = 200;
	atk = 1400;
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

Battlecruiser::~Battlecruiser()
{
}


void Battlecruiser::attack()
{
	cout << "�߸���" << endl;
}
