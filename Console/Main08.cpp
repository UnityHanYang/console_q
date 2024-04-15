#include "BettingInput.h"
#include "CardShow.h"
#include "EqualNumber.h"
#include "GameSetting.h"
#include "Suff.h"
#include <Windows.h>

void main()
{
	GameSetting gs;
	CardShow cs;
	BettingInput bi;
	EqualNumber en;

	Suff sf;

	sf.Combine();

	while (true)
	{
		cs.CardFlip();


		cout << '\n';

		bi.Betting();

		cout << '\n';

		en.GameResult();
		Sleep(1500);

		if (gs.gameCount == 17)
		{
			break;
		}

		if (gs.money < 1000)
		{
			break;
		}
		system("cls");
	}
}