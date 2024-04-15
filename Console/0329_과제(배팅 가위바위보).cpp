#include <iostream>
#include <string>

using namespace std;

string GetIntToString(int num);
int GetGameResult(string playerInput, string computerInput, int bettingGold);

int main()
{
	//Example_05c.cpp
	//과제1. 가위바위보
	int myMoney = 10000;

	for (int i = 0; i < 5; i++)
	{
		srand(time(NULL));

		if (myMoney >= 1000)
		{
			int bettingGold = 0;
			while (true)
			{
				cout << "배팅할 금액을 적어주세요: ";
				cin >> bettingGold;
				cout << '\n';
				if (bettingGold >= 1000)
				{
					int num = rand() % 3;
					cout << "컴퓨터가 " << GetIntToString(num) << "를 냈습니다\n무엇을 내시겠습니까? ";

					string str;
					cin >> str;

					myMoney += GetGameResult(str, GetIntToString(num), bettingGold);
					if (myMoney > 0)
					{
						cout << "보유 금액: " <<  myMoney;
					}
					else
					{
						cout << "보유 금액: 0";
						cout << '\n';
						cout << '\n';
						i = 4;
						break;
					}
					cout << '\n';
					cout << '\n';
					break;
				}
			}
		}
		else
		{
			cout << "보유 금액이 배팅 최소 금액보다 적어요." << endl;
			break;
		}
	}
}

int GetGameResult(string playerInput, string computerInput, int bettingGold)
{
	int gold = 0;
	if ((playerInput._Equal("가위") && computerInput._Equal("보")) ||
		(playerInput._Equal("바위") && computerInput._Equal("가위")) ||
		(playerInput._Equal("보") && computerInput._Equal("바위")))
	{
		cout << "이겼습니다\n";
		gold = bettingGold * 3;
	}
	else if ((playerInput._Equal("가위") && computerInput._Equal("바위")) ||
		(playerInput._Equal("바위") && computerInput._Equal("보")) ||
		(playerInput._Equal("보") && computerInput._Equal("가위")))
	{
		cout << "졌습니다\n";
		gold = -(bettingGold * 7);
	}
	else if ((playerInput._Equal(computerInput)))
	{
		cout << "비겼습니다\n";
		gold = bettingGold * 5;
	}
	return gold;
}

string GetIntToString(int num)
{
	string str;
	switch (num)
	{
	case 0:
		str = "가위";
		break;
	case 1:
		str = "바위";
		break;
	case 2:
		str = "보";
		break;
	}
	return str;
}