#pragma once
#include <iostream>
#include <time.h>

using namespace std;

class ComputerInputNum
{
private:
	static int8_t computerNumArr[25];
	static int computerNumCount;
	static bool isContainZero;

public:
	int8_t* GetNum() { return computerNumArr; }
	int GetCount() { return computerNumCount; }
	void ArrAddNum();
};

