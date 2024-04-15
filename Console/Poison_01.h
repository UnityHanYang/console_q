#pragma once
#include <iostream>

class Poison_01
{
private:
	int poison;
	int diePoison;
	int healling;

public:
	int GetPoison() { return poison; }
	void SetPoison(int damage) { poison = damage; }

	int GetDiePoison() { return diePoison; }
	void SetDiePoison(int damage) { diePoison = damage; }

	int GetHealing() { return healling; }
	void SetHealing(int heal) { healling = heal; }

	Poison_01() {}
	~Poison_01() {}
};

