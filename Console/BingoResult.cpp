#include "BingoResult.h"
#include "BingoCheck.h"

void BingoResult::GetGameResult()
{
	int num;
	while (true)
	{
		
		cout << "프로그램을 종료하시려면 1을 입력하세요: ";
		cin >> num;
		if (num == 1)
		{
			break;
		}
	}
}
