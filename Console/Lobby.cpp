#include "Lobby.h"
#include "InGame.h"

#define UP 72
#define DOWN 80

void Lobby::SelectMenu()
{
	cout << "[위, 아래 방향키를 이용해 선택]\n";
	cout << "게임 시작\n";
	cout << "게임 종료\n";

	bool isStart = false;
	InGame* ig = new InGame;

	char c;
	while(true)
	{
		if (_kbhit())
		{
			c = _getch();
			if ((int)c == -32)
			{
				system("cls");
				c = _getch();
				switch (c)
				{
				case UP:
					cout << "▶ 게임 시작\n";
					cout << "게임 종료\n";
					isStart = true;
					break;
				case DOWN:
					cout << "게임 시작\n";
					cout << "▶ 게임 종료\n";
				}
			}
			else if ((int)c == 13)
			{
				if (isStart)
				{
					system("cls");
					ig->InGamePrint();
					delete ig;
				}
			}
		}
		
	}
}
