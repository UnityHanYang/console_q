#pragma once
#include <time.h>
#include <iostream>

class IMap
{
public:
	virtual void CreateMap() = 0;
	virtual void PrintMap() = 0;
};

class NormalMap : public IMap
{
private:
	static uint8_t mapArr[5][4];
public:
	virtual void CreateMap();
	virtual void PrintMap();
	uint8_t (*GetMap())[4] { return mapArr; }
};
