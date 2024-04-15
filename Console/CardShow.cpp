#include "CardShow.h"

void CardShow::CardFlip()
{
	for (int i = 0; i < 3; i++)
	{
		jqk[i] = card[count + i] % 13;
		tool[i] = card[count + i] / 13;


		switch (tool[i])
		{
		case 0:
			cout << "¡Þ";
			break;
		case 1:
			cout << "¢¼";
			break;
		case 2:
			cout << "¢¿";
			break;
		case 3:
			cout << "¢¾";
			break;
		}

		switch (jqk[i])
		{
		case 0:
			cout << "A \t";
			break;
		case 10:
			cout << "J \t";
			break;
		case 11:
			cout << "Q \t";
			break;
		case 12:
			cout << "k \t";
			break;
		default:
			cout << jqk[i] + 1 << " \t";
			break;
		}
	}
	cout << '\n';
}
