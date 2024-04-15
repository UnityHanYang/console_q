#include "SettingMap.h"

void SettingMap::TextColor(int font, int backGround)
{
	int color = font + backGround * 16;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
