#include <iostream>
#include <string>

using namespace std;

string GetIntToString(int num);
int GetGameResult(string playerInput, string computerInput, int bettingGold);

int main()
{
	//Example_05c.cpp
	//����1. ����������
	int myMoney = 10000;

	for (int i = 0; i < 5; i++)
	{
		srand(time(NULL));

		if (myMoney >= 1000)
		{
			int bettingGold = 0;
			while (true)
			{
				cout << "������ �ݾ��� �����ּ���: ";
				cin >> bettingGold;
				cout << '\n';
				if (bettingGold >= 1000)
				{
					int num = rand() % 3;
					cout << "��ǻ�Ͱ� " << GetIntToString(num) << "�� �½��ϴ�\n������ ���ðڽ��ϱ�? ";

					string str;
					cin >> str;

					myMoney += GetGameResult(str, GetIntToString(num), bettingGold);
					if (myMoney > 0)
					{
						cout << "���� �ݾ�: " <<  myMoney;
					}
					else
					{
						cout << "���� �ݾ�: 0";
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
			cout << "���� �ݾ��� ���� �ּ� �ݾ׺��� �����." << endl;
			break;
		}
	}
}

int GetGameResult(string playerInput, string computerInput, int bettingGold)
{
	int gold = 0;
	if ((playerInput._Equal("����") && computerInput._Equal("��")) ||
		(playerInput._Equal("����") && computerInput._Equal("����")) ||
		(playerInput._Equal("��") && computerInput._Equal("����")))
	{
		cout << "�̰���ϴ�\n";
		gold = bettingGold * 3;
	}
	else if ((playerInput._Equal("����") && computerInput._Equal("����")) ||
		(playerInput._Equal("����") && computerInput._Equal("��")) ||
		(playerInput._Equal("��") && computerInput._Equal("����")))
	{
		cout << "�����ϴ�\n";
		gold = -(bettingGold * 7);
	}
	else if ((playerInput._Equal(computerInput)))
	{
		cout << "�����ϴ�\n";
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
		str = "����";
		break;
	case 1:
		str = "����";
		break;
	case 2:
		str = "��";
		break;
	}
	return str;
}