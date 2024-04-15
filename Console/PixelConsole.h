#pragma once
#include <iostream>
#include <Windows.h>

class PixelConsole
{
private:
    void SetColor(int fontColor, int backgroundColor);
public:

    void PrintS(int count, int font, int background, bool IsEndl);


};

