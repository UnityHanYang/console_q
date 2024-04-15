#pragma once
#include "Unit.h"
#include "Tank.h"
#include "Battlecruiser.h"

/*
상속은 공통된 부분(교집합을 찾고 그 친구를 부모 클래스로 활용하겠다)
		ㄴ 메모리와 유지보수를 챙길 수 있다.

인스턴스화

- 관리 클래스: Manager라고 불림(EX: Sound Manager -> 사운드를 관리한다)

- 관리자 클래스
인스턴스화가 되기 위해 모인 곳
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

