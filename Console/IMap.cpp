#include "IMap.h"
#include "SettingMap.h"
#include "NumberMove.h"

uint8_t NormalMap::mapArr[5][4] = {};
#define ROW_SIZE sizeof(mapArr) / sizeof(mapArr[0])
#define COL_SIZE sizeof(mapArr[0]) / sizeof(uint8_t)

void NormalMap::CreateMap()
{
	int count = 0;
	for (int i = 0; i < COL_SIZE; i++)
	{
		for (int j = 0; j < ROW_SIZE; j++)
		{
			mapArr[j][i] = count;
			count++;
		}
	}
	mapArr[ROW_SIZE - 1][COL_SIZE - 1] = '#';
	NumberMove* nm = new NumberMove;
	nm->SetPosX(ROW_SIZE - 1);
	nm->SetPosY(COL_SIZE - 1);
	delete nm;
	SettingMap sMap;
	sMap.Shuffle(mapArr);
}

void NormalMap::PrintMap()
{
	SettingMap* sMap = new SettingMap;
	sMap->PrintfMap(mapArr);
	delete sMap;
}