#pragma once
#include <iostream>
#include <time.h>
#include <Windows.h>

using namespace std;

class Shuffle
{
private:
	static uint8_t board[25];
public:
	void BuildBoard();
	static uint8_t* GetBoardNum() { return board; }
	void GetBoard();
	void TextColor(int font, int backGround);

};

