#include "EqualNumber.h"

void EqualNumber::GameResult()
{
	if ((jqk[0] > jqk[2] && jqk[1] < jqk[2]) ||
		(jqk[0] < jqk[2] && jqk[1] > jqk[2]))
	{
		cout << "����";
		money += betting * 10;
	}
	else {
		cout << "����";
		money -= betting;
	}
	cout << "\n������: " << money << endl;
}
