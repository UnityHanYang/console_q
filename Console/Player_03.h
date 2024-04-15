#pragma once
#include <iostream>

using namespace std;

#pragma region ������ + ������
/*
�� ������ + ������

- ������ (Accessor)
�� �ɹ� ���� ���� ��ȯ�ϴ� �ɹ� �Լ��� ��Ī�Ѵ�.

- ������ (Mutator)
�� �ɹ� ���� ���� �����ϴ� �ɹ� �Լ��� ��Ī�Ѵ�.

�� �Ϲ������� Getter(Get) / Setter(Set)��� �Ҹ���.
�� �����Ϳ� ���� ����, ������� ������ �� ���� ��� ��.

�� HLL(High Level Language) / ��� ���������� ������Ƽ��� �̸����� �ٽ� ���� �� �ִ�.
*/
#pragma endregion
class Player_03
{
private:
	int _hp;
	int _mp;
	int att;
	float _speed;

public:
	// ĸ�� �Լ� (Getter / Setter)
	// �� �Ϲ� �Լ����� cpp���� ����� �����ϴ°� ��Ģ������ -> ���� + ���� �Լ��� ������Ͽ���
	//		������ ��Ģ���� �Ѵ�.
	// inLine
	// ���ø�
	int getHp() { return _hp; }
	void setHp(int hp) { _hp = hp; }

	int getMp() { return _mp; }
	void setMp(int mp) { _mp = mp; }

	float getSpeed() { return _speed; }
	void setSpeed(float speed) { _speed = speed; }

	Player_03() {}
	~Player_03() {}
};

