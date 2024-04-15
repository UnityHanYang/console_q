#pragma once
#include <iostream>
#include <time.h>

using namespace std;
struct comBingocheckAtt
{
	int count;
	int count2;
	bool isContain;
};

class ComputerBingoCheck
{
private:
	static int computerBingoLineCount;
	static int computerRowIndexCount;
	static int computerColIndexCount;
	static bool isComputerLeftCross;
	static bool isComputerRightCross;
	static int ComputerRowIndexArr[5];
	static int ComputerColIndexArr[5];

public:
	comBingocheckAtt ba;
	void LineComparison();
	void CrossLineCheck();
	void RowLineCheck();
	void ColLineCheck();
	int GetBingoLineCount() { return computerBingoLineCount; }
};

