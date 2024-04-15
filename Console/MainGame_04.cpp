#include "MainGame_04.h"

MainGame_04::MainGame_04()
{
	cout << "여기가 바로 헌터 맵" << endl;
	_terran = new Unit;
	cout << '\n';

	_siegeTank = new Tank;
	cout << '\n';

	_Battlecruiser = new Battlecruiser;
	cout << '\n';

	_terran->attack("마린", "저글링");
	cout << '\n';

	_terran->attack(20, 50);
	cout << '\n';

	_terran->attack(true);
	cout << '\n';

	_terran->attack();
	cout << '\n';

	_siegeTank->attack();
	cout << '\n';

	_Battlecruiser->attack();
	cout << '\n';

}

MainGame_04::~MainGame_04()
{
	delete _siegeTank;
	delete _Battlecruiser;
	// 댕글링 포인터
	// 자식이 부모를 가르키고 있는데 부모를 없애면 자식들이 날라가기 때문
}
