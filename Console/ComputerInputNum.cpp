#include "ComputerInputNum.h"

int8_t ComputerInputNum::computerNumArr[25] = {};
int ComputerInputNum::computerNumCount = 0;
bool ComputerInputNum::isContainZero = false;

void ComputerInputNum::ArrAddNum()
{
	int num, count;
	count = 0;
	bool isEqual = false;
	while (true)
	{
		num = rand() % 25;
		for (int i = 0; i < computerNumCount; i++)
		{
			if (num == computerNumArr[i])
			{
				isEqual = true;
			}
		}

		if (num == 0 && !isContainZero)
		{
			computerNumArr[computerNumCount++] = num;
			if (num == 0)
			{
				isContainZero = true;
			}
			break;
		}
		else if (num != 0)
		{
			if (!isEqual)
			{
				computerNumArr[computerNumCount++] = num;
				if (num == 0)
				{
					isContainZero = true;
				}
				break;
			}
		}
		isEqual = false;
	}
}
