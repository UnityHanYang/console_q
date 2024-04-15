#include <iostream>
#include <Windows.h>

void PrintS(int count, int font, int background, bool isEndl);
void SetColor(int fontColor, int backgroundColor);

void main()
{
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "\t\t\t\t\t\t\t\t\t";
    PrintS(14, 15, 15, 0);
    PrintS(4, 0, 0, 1);
    std::cout << "\t\t\t\\t\t\t\t\t\t\t";
    PrintS(1, 15, 15, 1);
}

void PrintS(int count, int font, int background, bool isEndl)
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

void SetColor(int fontColor, int backgroundColor)
{
    int Color = fontColor + backgroundColor * 16;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color);
}