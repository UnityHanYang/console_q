#pragma once
#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <algorithm>


class NumberMove
{
private:
	static int x;
	static int y;
	static int playCount;

public:
	void NumMoveMent(int col, int row, bool isCheat);
	void PlayerInPut();
	int GetPlayCout() { return playCount; }

	void SetPosX(int _x) { this->x = _x; }
	void SetPosY(int _y) { this->y = _y; }
	int GetPosX() { return x; }
	int GetPosY() { return y; }
};

