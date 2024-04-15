#include "BettingInput.h"

void BettingInput::Betting()
{
	while (true)
	{
		cout << "¹èÆÃ±Ý: ";
		cin >> betting;

		if (betting >= 1000)
		{
			break;
		}
	}

	count += 3;
	gameCount++;
}
