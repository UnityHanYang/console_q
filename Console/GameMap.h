#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>

class GameMap
{
private:
	static int map[12][20];
public:
	void CreateMap();
	void SetPosition(int x, int y);
	void SetColor(int fontColor, int backgroundColor);
};

