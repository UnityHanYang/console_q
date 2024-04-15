#include "MainGame_05.h"

MainGame_05::MainGame_05()
{
	_gun = new gun;
	_bow = new bow;

	cout << "¹«±â ÀåÂø" << endl;
	_myWeapon = _gun;
	_myWeapon->attack();

	_myWeapon = _bow;
	_myWeapon->attack();
}

MainGame_05::~MainGame_05()
{
	delete _gun;
	delete _bow;
}
