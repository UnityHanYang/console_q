#include "BettingInput.h"

void BettingInput::Betting()
{
	while (true)
	{
		cout << "���ñ�: ";
		cin >> betting;

		if (betting >= 1000)
		{
			break;
		}
	}

	count += 3;
	gameCount++;
}
