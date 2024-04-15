#pragma once
#include <iostream>
#include <time.h>
#include <Windows.h>

using namespace std;

struct BingocheckAtt 
{
	int count;
	int count2;
	bool isContain;
};

class BingoCheck
{
private:
	static int bingoLineCount;
	static int rowIndexCount;
	static int colIndexCount;
	static bool isLeftCross;
	static bool isRightCross;
	static int rowIndexArr[5];
	static int colIndexArr[5];

	BingocheckAtt ba;
public:
	void LineComparison();
	void CrossLineCheck();
	void RowLineCheck();
	void ColLineCheck();

	int GetBingoLineCount() { return bingoLineCount; }
};

