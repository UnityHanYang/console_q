#pragma once
#include <iostream>

class SequenceCompare
{
private:
	static bool isSuccess;
public:
	void MapArrCompare();
	bool GameResult() { return isSuccess; }
};
