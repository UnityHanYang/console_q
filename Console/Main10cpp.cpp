#include <iostream>
#include <Windows.h>
#include "PixelConsole.h"
#include "Lobby.h"


using namespace std;

void main()
{
	PixelConsole* pc = new PixelConsole;
	pc->PrintS(0, 15, 0, 0);
	Lobby* lb = new Lobby;
	lb->SelectMenu();
}
