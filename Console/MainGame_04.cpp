#include "MainGame_04.h"

MainGame_04::MainGame_04()
{
	cout << "���Ⱑ �ٷ� ���� ��" << endl;
	_terran = new Unit;
	cout << '\n';

	_siegeTank = new Tank;
	cout << '\n';

	_Battlecruiser = new Battlecruiser;
	cout << '\n';

	_terran->attack("����", "���۸�");
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
	// ��۸� ������
	// �ڽ��� �θ� ����Ű�� �ִµ� �θ� ���ָ� �ڽĵ��� ���󰡱� ����
}
