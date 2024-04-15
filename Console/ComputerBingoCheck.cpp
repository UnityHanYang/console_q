#include "ComputerBingoCheck.h"
#include "ComputerBoardShow.h"
#include "ComputerInputNum.h"

int ComputerBingoCheck::computerBingoLineCount = 0;
bool ComputerBingoCheck::isComputerLeftCross = false;
bool ComputerBingoCheck::isComputerRightCross = false;
int ComputerBingoCheck::computerRowIndexCount = 0;
int ComputerBingoCheck::computerColIndexCount = 0;
int ComputerBingoCheck::ComputerRowIndexArr[5] = {};
int ComputerBingoCheck::ComputerColIndexArr[5] = {};

void ComputerBingoCheck::LineComparison()
{
	ComputerInputNum cn;
	ComputerBoardShow cbs;
	for (int i = 0; i < cn.GetCount(); i++)
	{
		for (int j = 0; j < 25; j++)
		{
			if (cn.GetNum()[i] == cbs.GetBoardNum()[j])
			{
				cbs.GetBoardNum()[j] = 'X';
				break;
			}
		}
	}
	system("cls");
}

void ComputerBingoCheck::CrossLineCheck()
{
	ComputerBoardShow cbs;
	for (int i = 4; i <= 6; i += 2)
	{
		ba.count2 = ba.count = 0;
		for (int j = 0; j < 25; j++)
		{
			if ((int)cbs.GetBoardNum()[j] == 88)
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
		if (ba.count == 5 && !isComputerRightCross)
		{
			computerBingoLineCount++;
			isComputerRightCross = true;
		}
		else if (ba.count2 == 5 && !isComputerLeftCross)
		{
			computerBingoLineCount++;
			isComputerLeftCross = true;
		}
	}
}

void ComputerBingoCheck::RowLineCheck()
{
	ComputerBoardShow cbs;
	int lastIndex = 4;
	for (int j = 0; j < 25; j++)
	{
		if ((int)cbs.GetBoardNum()[j] == 88)
		{
			ba.count++;
		}
		if (j != 0 && j % lastIndex == 0)
		{
			for (int i = 0; i < computerRowIndexCount; i++)
			{
				if (ComputerRowIndexArr[i] == j)
				{
					ba.isContain = true;
				}
			}
			if (!ba.isContain && ba.count == 5)
			{
				computerBingoLineCount++;
				ComputerRowIndexArr[computerRowIndexCount] = j;
				computerRowIndexCount++;
			}
			ba.isContain = false;
			ba.count = 0;
			lastIndex += 5;
		}
	}
}

void ComputerBingoCheck::ColLineCheck()
{
	ComputerBoardShow cbs;
	for (int i = 0; i < 5; i++)
	{
		int index = i;
		for (int j = 0; j < 5; j++)
		{
			if ((int)cbs.GetBoardNum()[index] == 88)
			{
				ba.count++;
			}
			index += 5;
		}

		for (int j = 0; j < computerColIndexCount; j++)
		{
			if (ComputerColIndexArr[j] == i)
			{
				ba.isContain = true;
			}
		}
		if (!ba.isContain && ba.count == 5)
		{
			computerBingoLineCount++;
			ComputerColIndexArr[computerColIndexCount] = i;
			computerColIndexCount++;
		}
		ba.isContain = false;
		ba.count = 0;
		index = 0;
	}
}
