#include "EqualNumber.h"

void EqualNumber::GameResult()
{
	if ((jqk[0] > jqk[2] && jqk[1] < jqk[2]) ||
		(jqk[0] < jqk[2] && jqk[1] > jqk[2]))
	{
		cout << "성공";
		money += betting * 10;
	}
	else {
		cout << "실패";
		money -= betting;
	}
	cout << "\n소지금: " << money << endl;
}
