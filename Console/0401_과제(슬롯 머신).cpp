#include <iostream>
#include <time.h>
#include <string>
#include <Windows.h>

using namespace std;

int GetResult(string ranNum, int bettingMoney);


#define FOR_COUNT 3
string str;

auto setNum = []() -> void
{
	int ran;
	bool isNumEqual = false;
	int numberArr[FOR_COUNT];
	for (int i = 0; i < 3; i++)
	{
		while (true)
		{
			srand(time(NULL));
			ran = rand() % 10;
			for (int i = 0; i < (sizeof(numberArr) / sizeof(int)); i++)
			{
				if (ran == numberArr[i])
				{
					isNumEqual = true;
				}
			}
			if (!isNumEqual)
			{
				numberArr[i] = ran;
				break;
			}
			isNumEqual = false;
		}
	}
	cout << "슬롯 머신 숫자: ";
	for (int j = 0; j < 3; j++)
	{
		for (int k = 0; k < 2; k++)
		{
			for (int i = 0; i < 10; i++)
			{
				srand(time(NULL));
				ran = (i > 9) ? 0 : i;
				cout << ran;
				if (k == 1 && numberArr[j] == ran)
				{
					goto EXIT_02;
				}
				Sleep(90);
				cout << '\b';
			}
		}
	EXIT_02:
		cout << "  ";								
		str += to_string(ran);
	}
};

void main()
{
	const int bettingMoney = 1000;
	const int bettingPoint = 1000;
	int money = 10000;
	int betting;


	while (true)
	{
		cout << "치트를 활성화 하시겠습니까?(y or n) ";
		char choice;
		bool isCin;
		bool isEnable;
		cin >> choice;
		if (choice == 'y')
		{
			setNum();
			cout << '\n';
			isCin = true;
			isEnable = true;
		}
		else
		{
			isCin = true;
			isEnable = false;
		}

		int bettingNumber;
		if (isCin)
		{
			do
			{
				cout << "배팅할 금액을 입력하세요(최소 배팅금액: 1,000, 배팅 단위: 1,000): ";

				cin >> betting;

			} while (betting < 1000 || betting % bettingPoint != 0);

			cout << endl;

			if (isEnable)
			{
				cout << "숫자를 입력해주세요: ";

				cin >> bettingNumber;
				string playerInput = to_string(bettingNumber);
				money += GetResult(playerInput, betting);
			}
			else
			{
				setNum();
				cout << '\n';
				money += GetResult(str, betting);
			}

		cout << "보유금: " << money << endl;
		cout << "\n게임을 그만 하시려면 n을 입력해주시고, 게임을 계속 \n하시려면 n을 제외한 나머지 문자를 입력해주세요: ";
		char gameCancel;
		cin >> gameCancel;
		cout << '\n';
		isCin = false;
		if (gameCancel == 'n') break;
		}
	}

}

int GetResult(string ranNum, int bettingMoney)
{
	int result = 0;
	int count = 0;
	bool isEqual = true;

	char cValue = ranNum[0];
	for (int i = 1; i < ranNum.size(); i++)
	{
		if ((int)cValue != (int)ranNum[i])
		{
			count++;
			isEqual = false;
		}
	}

	if (stoi(ranNum) == 777)
	{
		result = bettingMoney * 12;
		cout << "12배 당첨\n";
	}
	else if (isEqual)
	{
		result = bettingMoney * 5;
		cout << "5배 당첨\n";
	}
	else if (count == 1)
	{
		result = bettingMoney * 2;
		cout << "2배 당첨\n";
	}
	else
	{
		result = bettingMoney * (-1);
		cout << "배팅금 획득 실패\n";
	}
	return result;
}