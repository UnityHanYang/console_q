#include "Unit.h"


Unit::Unit()
{
	// �̷��� ������ ����
	// �θ� Ŭ������ ��üȭ ����.
	name = "�׶� ����";
	hp = 100;
	mp = 50;
	atk = 800;
	die = false;

	cout << "�� �̸��� : " << name << endl;
	cout << "ü��: " << hp << endl;
	cout << "����: " << mp << endl;
	cout << "���ݷ�: " << atk << endl;
	cout << "���� ���� �ʴ´�!" << die << endl;

	attack();
}

Unit::~Unit()
{
	//! Do Nothing
}


void Unit::attack(const char* myName, const char* enemyName)
{
	cout << myName << "�� " << enemyName << "�� �����Ѵ�." << endl;
}

void Unit::attack(int atk, int enemyHp)
{
	cout << atk << "�� �������� ���� ü�� " << enemyHp << "�� ���� ���״�." << endl;
}

void Unit::attack(bool enemyDie)
{
	cout << boolalpha;
	cout << "�� ���� ����:\r " << enemyDie << endl;
}

void Unit::attack()
{
	cout << "���� �����Ѵ�." << endl;
}