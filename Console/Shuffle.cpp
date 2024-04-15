#include "Shuffle.h"

uint8_t Shuffle::board[25] = {};

void Shuffle::BuildBoard()
{

	for (int i = 0; i < sizeof(board); i++)
	{
		board[i] = (char)i;
	}
	srand(time((NULL)));

	for (int i = 0; i < 1000; i++)
	{
		int index1 = rand() % 25;
		int index2 = rand() % 25;

		if (index1 != index2)
		{
			int temp = board[index1];
			board[index1] = board[index2];
			board[index2] = temp;
		}
	}
}

void Shuffle::GetBoard()
{
	int count = 4;
	cout << "³ªÀÇ ºù°íÆÇ";
	cout << endl;
	for (int i = 0; i < sizeof(board); i++)
	{
		if (board[i] >= 32 && board[i] <= 126) {
			TextColor(2, 0);
			printf("%c%s", board[i], (i != 0 && i % count == 0) ? "\n\n\n\n" : "    \t");
			TextColor(15, 0);
		}
		else
		{
			TextColor(15, 0);
			printf("%d%s", board[i], (i != 0 && i % count == 0) ? "\n\n\n\n" : "    \t");
		}
		if (i != 0 && i % count == 0)
		{
			count += 5;
		}
	}
}

void Shuffle::TextColor(int font, int backGround)
{
	int color = font + backGround * 16;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}