#include "Shuffle.h"
#include "PlayerInputNum.h"
#include "BingoCheck.h"
#include "BingoResult.h"
#include "ComputerBoardShow.h"
#include "ComputerInputNum.h"
#include "ComputerBingoCheck.h"
#include <Windows.h>

void main()
{
	Shuffle sf;
	PlayerInputNum pin;
	BingoCheck bc;
	BingoResult br;
	ComputerBoardShow cbs;
	ComputerInputNum cn;
	ComputerBingoCheck cbc;

	int num;
	cout << "숫자를 입력하세요(혼자하기: 1, AI와 같이하기: 2): ";
	cin >> num;

	if (num == 1)
	{
		sf.BuildBoard();
		while (true)
		{
			sf.GetBoard();
			pin.ArrAddNum();
			bc.LineComparison();
			bc.CrossLineCheck();
			bc.ColLineCheck();
			bc.RowLineCheck();
			if (bc.GetBingoLineCount() == 5)
			{
				system("cls");
				break;
			}
			system("cls");
		}
		sf.GetBoard();
		br.GetGameResult();
	}
	else if (num == 2)
	{
		sf.BuildBoard();
		cbs.BuildBoard();
		while (true)
		{
			sf.GetBoard();
			cbs.GetBoard();
			pin.ArrAddNum();
			bc.LineComparison();
			bc.CrossLineCheck();
			bc.ColLineCheck();
			bc.RowLineCheck();
			if (bc.GetBingoLineCount() == 5)
			{
				system("cls");
				break;
			}
			sf.GetBoard();
			cbs.GetBoard();
			Sleep(1500);
			cn.ArrAddNum();
			cbc.LineComparison();
			cbc.CrossLineCheck();
			cbc.ColLineCheck();
			cbc.RowLineCheck();
			if (cbc.GetBingoLineCount() == 5)
			{
				system("cls");
				break;
			}
			sf.GetBoard();
			cbs.GetBoard();
			Sleep(1500);
			system("cls");
		}
		sf.GetBoard();
		cbs.GetBoard();
		br.GetGameResult();
	}

}