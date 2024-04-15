#pragma once
#include <iostream>
#include <time.h>
#include <Windows.h>

using namespace std;

class ComputerBoardShow
{
private:
	static uint8_t computerBoard[25];
public:
	void BuildBoard();
	static uint8_t* GetBoardNum() { return computerBoard; }
	void GetBoard();
	void TextColor(int font, int backGround);
};

