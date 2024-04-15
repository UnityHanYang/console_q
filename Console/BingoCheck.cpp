#include "BingoCheck.h"
#include "PlayerInputNum.h"
#include "Shuffle.h"

int BingoCheck::bingoLineCount = 0;
bool BingoCheck::isLeftCross = false;
bool BingoCheck::isRightCross = false;
int BingoCheck::rowIndexCount = 0;
int BingoCheck::colIndexCount = 0;
int BingoCheck::rowIndexArr[5] = {};
int BingoCheck::colIndexArr[5] = {};

void BingoCheck::LineComparison()
{
	Shuffle sf;
	PlayerInputNum pin;
	for (int i = 0; i < pin.GetCount(); i++)
	{
		for (int j = 0; j < 25; j++)
		{
			if (pin.GetNum()[i] == sf.GetBoardNum()[j])
			{
				sf.GetBoardNum()[j] = 'X';
				break;
			}
		}
	}
	system("cls");
}

void BingoCheck::CrossLineCheck()
{
	Shuffle sf;
	for (int i = 4; i <= 6; i += 2)
	{
		ba.count2 = ba.count = 0;
		for (int j = 0; j < 25; j++)
		{
			if ((int)sf.GetBoardNum()[j] == 88)
			{
				if (i == 4 && j != 0 && j % i == 0 && j != 24)
				{
					ba.count++;
				}
				else if (i == 6 && j % i == 0)
				{
					ba.count2++;
				}
			}
		}
		if (ba.count == 5 && !isRightCross)
		{
			bingoLineCount++;
			isRightCross = true;
		}
		else if (ba.count2 == 5 && !isLeftCross)
		{
			bingoLineCount++;
			isLeftCross = true;
		}
	}
}

void BingoCheck::RowLineCheck()
{
	Shuffle sf;
	int lastIndex = 4;
	for (int j = 0; j < 25; j++)
	{
		if ((int)sf.GetBoardNum()[j] == 88)
		{
			ba.count++;
		}
		if (j != 0 && j % lastIndex == 0)
		{
			for (int i = 0; i < rowIndexCount; i++)
			{
				if (rowIndexArr[i] == j)
				{
					ba.isContain = true;
				}
			}
			if (!ba.isContain && ba.count == 5)
			{
				bingoLineCount++;
				rowIndexArr[rowIndexCount] = j;
				rowIndexCount++;
			}
			ba.isContain = false;
			ba.count = 0;
			lastIndex += 5;
		}
	}
}

void BingoCheck::ColLineCheck()
{
	Shuffle sf;
	for (int i = 0; i < 5; i++)
	{
		int index = i;
		for (int j = 0; j < 5; j++)
		{
			if ((int)sf.GetBoardNum()[index] == 88)
			{
				ba.count++;
			}
			index += 5;
		}

		for (int j = 0; j < colIndexCount; j++)
		{
			if (colIndexArr[j] == i)
			{
				ba.isContain = true;
			}
		}
		if (!ba.isContain && ba.count == 5)
		{
			bingoLineCount++;
			colIndexArr[colIndexCount] = i;
			colIndexCount++;
		}
		ba.isContain = false;
		ba.count = 0;
		index = 0;
	}
}
