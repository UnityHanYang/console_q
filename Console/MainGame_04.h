#pragma once
#include "Unit.h"
#include "Tank.h"
#include "Battlecruiser.h"

/*
����� ����� �κ�(�������� ã�� �� ģ���� �θ� Ŭ������ Ȱ���ϰڴ�)
		�� �޸𸮿� ���������� ì�� �� �ִ�.

�ν��Ͻ�ȭ

- ���� Ŭ����: Manager��� �Ҹ�(EX: Sound Manager -> ���带 �����Ѵ�)

- ������ Ŭ����
�ν��Ͻ�ȭ�� �Ǳ� ���� ���� ��
*/
class MainGame_04
{
private:
	Unit* _terran;
	Tank* _siegeTank;
	Battlecruiser* _Battlecruiser;
public:
	MainGame_04();
	~MainGame_04();
};

