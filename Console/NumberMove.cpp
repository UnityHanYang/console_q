#include "NumberMove.h"
#include "IMap.h"
#include "SequenceCompare.h"

int NumberMove::x = 0;
int NumberMove::y = 0;
int NumberMove::playCount = 0;

void NumberMove::NumMoveMent(int col, int row, bool isCheat)
{
	NormalMap* nm_M = new NormalMap;
	SequenceCompare* sc = new SequenceCompare;
	if (!isCheat)
	{

		if (row == 1)
		{
			if (GetPosX() > 3) return;
		}
		else if (row == -1)
		{
			if (GetPosX() < 1) return;
		}

		if (col == 1)
		{
			if (GetPosY() > 2) return;
		}
		else if (col == -1)
		{
			if (GetPosY() < 1) return;
		}

		uint8_t temp = nm_M->GetMap()[GetPosX()][GetPosY()];
		nm_M->GetMap()[GetPosX()][GetPosY()] = nm_M->GetMap()[GetPosX() + row][GetPosY()];
		nm_M->GetMap()[GetPosX() + row][GetPosY()] = temp;
		SetPosX(GetPosX() + row);

		uint8_t temp2 = nm_M->GetMap()[GetPosX()][GetPosY()];
		nm_M->GetMap()[GetPosX()][GetPosY()] = nm_M->GetMap()[GetPosX()][GetPosY() + col];
		nm_M->GetMap()[GetPosX()][GetPosY() + col] = temp2;
		SetPosY(GetPosY() + col);

		playCount++;

		sc->MapArrCompare();
	}
	else
	{
		int count = 0;
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				nm_M->GetMap()[j][i] = count;
				count++;
			}
		}
		nm_M->GetMap()[4][3] = '#';
		SetPosY(3);
		SetPosX(4);

		uint8_t temp = nm_M->GetMap()[GetPosX()][GetPosY()];
		nm_M->GetMap()[GetPosX()][GetPosY()] = nm_M->GetMap()[GetPosX() - 1][GetPosY()];
		nm_M->GetMap()[GetPosX() - 1][GetPosY()] = temp;
		SetPosX(GetPosX() - 1);

		sc->MapArrCompare();
	}
	delete sc;
	delete nm_M;
}


void NumberMove::PlayerInPut()
{
	NormalMap* nm_M = new NormalMap;
	bool isEnter;
	std::cout << "방향키 입력(치트 입력: a): ";
	while (true)
	{
		if (_kbhit()) {
			uint8_t xy = nm_M->GetMap()[GetPosX()][GetPosY()];
			xy = _getch();
			switch (xy)
			{
			case 'H': // 위쪽 방향키
				std::cout << "↑";
				NumMoveMent(-1, 0, false);
				break;
			case 'M': // 오른쪽 방향키
				std::cout << "→";
				NumMoveMent(0, 1, false);
				break;
			case 'K': // 왼쪽 방향키
				std::cout << "←";
				NumMoveMent(0, -1, false);
				break;
			case 'P': // 아래쪽 방향키
				std::cout << "↓";
				NumMoveMent(1, 0, false);
				break;
			case 'a': // 치트
				std::cout << "치트";
				NumMoveMent(0, 0, true);
				break;
			default:
				break;
			}
			break;
		}
	}
	std::cout << std::endl;
	delete nm_M;
}