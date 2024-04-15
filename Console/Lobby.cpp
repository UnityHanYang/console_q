#include "Lobby.h"
#include "InGame.h"

#define UP 72
#define DOWN 80

void Lobby::SelectMenu()
{
	cout << "[��, �Ʒ� ����Ű�� �̿��� ����]\n";
	cout << "���� ����\n";
	cout << "���� ����\n";

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
					cout << "�� ���� ����\n";
					cout << "���� ����\n";
					isStart = true;
					break;
				case DOWN:
					cout << "���� ����\n";
					cout << "�� ���� ����\n";
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
