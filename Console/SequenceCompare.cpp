#include "SequenceCompare.h"
#include "IMap.h"
#include "NumberMove.h"

bool SequenceCompare::isSuccess = false;

void SequenceCompare::MapArrCompare()
{
	NormalMap* nm = new NormalMap;
	bool isSeq = true;
	int count = 0;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if ((int)nm->GetMap()[j][i] >= 30 && i >= 0 && i <= 3 && j > 0 && j < 3)
			{
				isSeq = false;
				break;
			}
			else
			{
				if ((int)nm->GetMap()[j][i] >= 30 && i == 0 && j == 0)
				{
					continue;
				}
				else
				{
					if (count == 19)
					{
						isSeq = true;
						break;
					}
					if (count == (int)nm->GetMap()[j][i])
					{
						count++;
					}
					else
					{
						isSeq = false;
						break;
					}
				}
			}
		}
		if (!isSeq)
		{
			break;
		}
	}
	delete nm;
	if (isSeq)
	{
		system("cls");
		NumberMove* mm = new NumberMove;
		std::cout << "\n\n";
		std::cout << "숫자 옮긴 횟수: " << mm->GetPlayCout() << "번 " << std::endl;
		isSuccess = true;
		delete mm;
	}
}
