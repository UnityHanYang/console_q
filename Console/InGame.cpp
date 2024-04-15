#include "InGame.h"
#include "PixelConsole.h"

#define UP 72
#define DOWN 80

void InGame::InGamePrint()
{
	PixelConsole* pc = new PixelConsole;

	while (true)
	{
		pc->PrintS(50, 10, 10, 1);
		pc->PrintS(50, 10, 10, 1);
		pc->PrintS(50, 10, 10, 1);
		pc->PrintS(50, 10, 10, 1);
		pc->PrintS(50, 10, 10, 1);
		pc->PrintS(50, 10, 10, 1);
		pc->PrintS(50, 10, 10, 1);
		pc->PrintS(50, 10, 10, 1);


		pc->PrintS(7, 10, 10, 0);
		pc->PrintS(4, 0, 0, 0);
		pc->PrintS(19, 10, 10, 0);
		pc->PrintS(9, 10, 10, 0);
		pc->PrintS(4, 0, 0, 0);
		pc->PrintS(7, 10, 10, 1); // 1
		pc->PrintS(6, 10, 10, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(4, 8, 8, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(26, 10, 10, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(4, 8, 8, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(6, 10, 10, 1); // 2
		pc->PrintS(5, 10, 10, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(6, 8, 8, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(24, 10, 10, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(6, 8, 8, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(5, 10, 10, 1); // 3
		pc->PrintS(4, 10, 10, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(8, 8, 8, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(22, 10, 10, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(8, 8, 8, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(4, 10, 10, 1); // 4
		pc->PrintS(4, 10, 10, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(5, 8, 8, 0);
		pc->PrintS(1, 15, 15, 0);
		pc->PrintS(2, 8, 8, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(22, 10, 10, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(2, 8, 8, 0);
		pc->PrintS(1, 15, 15, 0);
		pc->PrintS(5, 8, 8, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(4, 10, 10, 1); // 5
		pc->PrintS(4, 10, 10, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(4, 8, 8, 0);
		pc->PrintS(2, 15, 15, 0);
		pc->PrintS(2, 8, 8, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(2, 10, 10, 0);
		pc->PrintS(2, 0, 0, 0);
		pc->PrintS(14, 10, 10, 0);
		pc->PrintS(2, 0, 0, 0);
		pc->PrintS(2, 10, 10, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(2, 8, 8, 0);
		pc->PrintS(2, 15, 15, 0);
		pc->PrintS(4, 8, 8, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(4, 10, 10, 1); // 6
		pc->PrintS(4, 10, 10, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(1, 8, 8, 0);
		pc->PrintS(1, 15, 15, 0); // 피부색
		pc->PrintS(1, 8, 8, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(1, 15, 15, 0); // 피부색
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(1, 15, 15, 0); // 피부색
		pc->PrintS(1, 8, 8, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(1, 10, 10, 0); // 피부색
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(1, 15, 15, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(14, 10, 10, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(1, 15, 15, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(1, 10, 10, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(1, 8, 8, 0);
		pc->PrintS(1, 15, 15, 0); // 피부색
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(1, 15, 15, 0); // 피부색
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(1, 8, 8, 0);
		pc->PrintS(1, 15, 15, 0);
		pc->PrintS(1, 8, 8, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(4, 10, 10, 1); // 7
		pc->PrintS(5, 10, 10, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(1, 8, 8, 0);
		pc->PrintS(4, 15, 15, 0); // 피부색
		pc->PrintS(1, 8, 8, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(1, 10, 10, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(1, 15, 15, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(16, 10, 10, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(1, 15, 15, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(1, 10, 10, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(1, 8, 8, 0);
		pc->PrintS(4, 15, 15, 0); // 피부색
		pc->PrintS(1, 8, 8, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(5, 10, 10, 1); // 8


		pc->PrintS(6, 10, 10, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(1, 6, 6, 0);
		pc->PrintS(1, 15, 15, 0); // 피부색
		pc->PrintS(1, 14, 14, 0);
		pc->PrintS(1, 4, 4, 0);
		pc->PrintS(3, 0, 0, 0);
		pc->PrintS(1, 15, 15, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(18, 10, 10, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(1, 15, 15, 0);
		pc->PrintS(3, 0, 0, 0);
		pc->PrintS(1, 4, 4, 0);
		pc->PrintS(1, 14, 14, 0);
		pc->PrintS(1, 15, 15, 0); // 피부색
		pc->PrintS(1, 6, 6, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(6, 10, 10, 1); // 9
		pc->PrintS(5, 10, 10, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(1, 6, 6, 0);
		pc->PrintS(2, 4, 4, 0);
		pc->PrintS(1, 14, 14, 0);
		pc->PrintS(2, 4, 4, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(1, 15, 15, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(20, 10, 10, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(1, 15, 15, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(2, 4, 4, 0);
		pc->PrintS(1, 14, 14, 0);
		pc->PrintS(2, 4, 4, 0);
		pc->PrintS(1, 6, 6, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(5, 10, 10, 1); // 10
		pc->PrintS(5, 10, 10, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(1, 6, 6, 0);
		pc->PrintS(1, 4, 4, 0);
		pc->PrintS(1, 6, 6, 0);
		pc->PrintS(2, 4, 4, 0);
		pc->PrintS(2, 14, 14, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(22, 10, 10, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(2, 14, 14, 0);
		pc->PrintS(2, 4, 4, 0);
		pc->PrintS(1, 6, 6, 0);
		pc->PrintS(1, 4, 4, 0);
		pc->PrintS(1, 6, 6, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(5, 10, 10, 1); // 11
		pc->PrintS(5, 10, 10, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(1, 15, 15, 0); // 피부색
		pc->PrintS(1, 6, 6, 0);
		pc->PrintS(3, 4, 4, 0);
		pc->PrintS(1, 15, 15, 0); // 피부색
		pc->PrintS(1, 14, 14, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(22, 10, 10, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(1, 14, 14, 0);
		pc->PrintS(1, 15, 15, 0); // 피부색
		pc->PrintS(3, 4, 4, 0);
		pc->PrintS(1, 6, 6, 0);
		pc->PrintS(1, 15, 15, 0); // 피부색
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(5, 10, 10, 1); // 12
		pc->PrintS(6, 10, 10, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(4, 8, 8, 0);
		pc->PrintS(2, 0, 0, 0);
		pc->PrintS(24, 10, 10, 0);
		pc->PrintS(2, 0, 0, 0);
		pc->PrintS(4, 8, 8, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(6, 10, 10, 1); // 13
		pc->PrintS(6, 10, 10, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(1, 8, 8, 0);
		pc->PrintS(2, 0, 0, 0);
		pc->PrintS(1, 8, 8, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(26, 10, 10, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(1, 8, 8, 0);
		pc->PrintS(2, 0, 0, 0);
		pc->PrintS(1, 8, 8, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(6, 10, 10, 1); // 14
		pc->PrintS(6, 10, 10, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(1, 8, 8, 0);
		pc->PrintS(2, 0, 0, 0);
		pc->PrintS(1, 8, 8, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(26, 10, 10, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(1, 8, 8, 0);
		pc->PrintS(2, 0, 0, 0);
		pc->PrintS(1, 8, 8, 0);
		pc->PrintS(1, 0, 0, 0);
		pc->PrintS(6, 10, 10, 1); // 15
		pc->PrintS(6, 10, 10, 0);
		pc->PrintS(2, 0, 0, 0);
		pc->PrintS(2, 10, 10, 0);
		pc->PrintS(2, 0, 0, 0);
		pc->PrintS(26, 10, 10, 0);
		pc->PrintS(2, 0, 0, 0);
		pc->PrintS(2, 10, 10, 0);
		pc->PrintS(2, 0, 0, 0);
		pc->PrintS(6, 10, 10, 1); // 14
		cout << "\n\n\n";


	}


	delete pc;
}

void InGame::PlayerChoice()
{
	bool isStart = false;
	InGame* ig = new InGame;

	char c;

	cout << "[위, 아래 방향키를 이용해 선택]\n";
	cout << "공격\n";
	cout << "스킬1\n";
	cout << "스킬2\n";

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
}

