#include "PlayerInputNum.h"

int8_t PlayerInputNum::playerNumArr[25] = {};
int PlayerInputNum::playerNumCount = 0;
bool PlayerInputNum::isContainZero = false;

void PlayerInputNum::ArrAddNum()
{
	int num, count;
	count = 0;
	bool isEqual = false;
	while (true)
	{
		cout << "0~24의 숫자 중 하나를 입력하세요: ";
		cin >> num;
		for (int i = 0; i < playerNumCount; i++)
		{
			if (num == playerNumArr[i])
			{
				isEqual = true;
			}
		}

		if (num == 0 && !isContainZero)
		{
			playerNumArr[playerNumCount++] = num;
			if (num == 0)
			{
				isContainZero = true;
			}
			break;
		}
		else if(num != 0)
		{
			if (!isEqual)
			{
				playerNumArr[playerNumCount++] = num;
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