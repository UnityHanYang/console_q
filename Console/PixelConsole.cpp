#include "PixelConsole.h"

void PixelConsole::SetColor(int fontColor, int backgroundColor)
{
	int Color = fontColor + backgroundColor * 16;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color);
}

void PixelConsole::PrintS(int count, int font, int background, bool isEndl)
{

    SetColor(font, background);

    for (int i = 0; i < count; i++)
    {
        std::cout << "¤±";
    }

    if (isEndl)
    {
        std::cout << std::endl;
    }
}
