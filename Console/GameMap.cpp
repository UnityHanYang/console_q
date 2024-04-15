#include "GameMap.h"
#define UP 72
#define DOWN 80

int GameMap::map[12][20] = {
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0  },
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0  },
	{0, 0, 2, 2, 0, 0, 0, 1, 1, 1,1, 0, 0, 0, 0, 0, 0, 0, 0, 0  },
	{0, 0, 2, 2, 0, 0, 0, 1, 0, 0,1, 0, 0, 0, 0, 0, 0, 0, 0, 0  },
	{0, 0, 0, 0, 0, 0, 0, 1, 0, 0,1, 0, 0, 0, 0, 0, 0, 0, 0, 0  },
	{0, 0, 0, 0, 0, 0, 0, 1, 0, 0,1, 0, 0, 0, 0, 0, 0, 0, 0, 0  },
	{0, 0, 0, 0, 0, 0, 0, 1, 1, 1,1, 0, 0, 0, 0, 0, 0, 0, 0, 0  },
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0  },
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0  },
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0  },
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0  },
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0  }

};

void GameMap::SetColor(int fontColor, int backgroundColor)
{
	int Color = fontColor + backgroundColor * 16;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color);
}
void GameMap::SetPosition(int x, int y)
{
	COORD pos = { x , y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void GameMap::CreateMap()
{
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			int num = map[i][j];
			if (num == 0)
			{
				SetColor(8, 8);
				std::cout << "ㅁ";
			}
			else if (num == 1)
			{
				SetColor(6, 6);
				std::cout << "ㅁ";
			}
			else if (num == 2)
			{
				SetColor(4, 4);
				std::cout << "ㅁ";
			}
		}
		std::cout << std::endl;
	}

	/*SetPosition(8, 3);
	SetColor(15, 4);
	std::cout << "ㅅ";
	SetPosition(8, 4);
	SetColor(15, 4);
	std::cout << "ㅅ";
	SetPosition(7, 3);
	SetColor(15, 4);
	std::cout << "ㅅ";
	SetPosition(7, 4);
	SetColor(15, 4);
	std::cout << "ㅅ";*/
	/*char c;
	std::cout << "\n\n\n";
	if (_kbhit())
	{
		c = _getch();
		if ((int)c == -32)
		{
			c = _getch();
			switch (c)
			{
			case UP:
				cout << "▶ 공격\n";
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
				delete ig;
			}
		}
		system("cls");
	}
	std::cout << "\n\n\n\n\n\n\n\n\n\n\n";*/
}
