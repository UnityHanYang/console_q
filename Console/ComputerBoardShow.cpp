#include "ComputerBoardShow.h"

uint8_t ComputerBoardShow::computerBoard[25] = {};

void ComputerBoardShow::BuildBoard()
{

	for (int i = 0; i < sizeof(computerBoard); i++)
	{
		computerBoard[i] = (char)i;
	}
	srand(time((NULL)));

	for (int i = 0; i < 400; i++)
	{
		int index1 = rand() % 25;
		int index2 = rand() % 25;

		if (index1 != index2)
		{
			int temp = computerBoard[index1];
			computerBoard[index1] = computerBoard[index2];
			computerBoard[index2] = temp;
		}
	}
}

void ComputerBoardShow::GetBoard()
{
	int count = 4;
	cout << "AIÀÇ ºù°íÆÇ";
	cout << endl;
	for (int i = 0; i < sizeof(computerBoard); i++)
	{
		if (computerBoard[i] >= 32 && computerBoard[i] <= 126) {
			TextColor(2, 0);
			printf("%c%s", computerBoard[i], (i != 0 && i % count == 0) ? "\n\n\n\n" : "    \t");
			TextColor(15, 0);
		}
		else
		{
			TextColor(15, 0);
			printf("%d%s", computerBoard[i], (i != 0 && i % count == 0) ? "\n\n\n\n" : "    \t");
		}
		if (i != 0 && i % count == 0)
		{
			count += 5;
		}
	}
}

void ComputerBoardShow::TextColor(int font, int backGround)
{
	int color = font + backGround * 16;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}