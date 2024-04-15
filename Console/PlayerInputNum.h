#pragma once
#include <iostream>

using namespace std;
	
class PlayerInputNum
{
private:
	static int8_t playerNumArr[25];
	static int playerNumCount;
	static bool isContainZero;

public:
	int8_t* GetNum() { return playerNumArr; }
	int GetCount() { return playerNumCount; }
	void ArrAddNum();
};

