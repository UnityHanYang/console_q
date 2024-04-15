#include <iostream>
#include <time.h>
#include <Windows.h>

using namespace std;

void main()
{
	int card[52];
	int tool[6];
	int jqk[6];
	int count = 0;
	int money = 10000;
	int betting;
	char hle;
	int gameCount = 0;

	for (int i = 0; i < sizeof(card) / sizeof(card[0]); i++)
	{
		card[i] = i;
	}
	srand(time(NULL));

	for (int i = 0; i < 1000; i++)
	{
		int index1 = rand() % 52;
		int index2 = rand() % 52;

		if (index1 != index2)
		{
			int temp = card[index1];
			card[index1] = card[index2];
			card[index2] = temp;
		}
	}

	while (true)
	{
		for (int i = 0; i < 6; i++)
		{
			tool[i] = card[count + i] / 13;
			jqk[i] = card[count + i] % 13;

			switch (tool[i])
			{
			case 0:
				cout << "��";
				break;
			case 1:
				cout << "��";
				break;
			case 2:
				cout << "��";
				break;
			case 3:
				cout << "��";
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
				cout << "K \t";
				break;
			default:
				cout << jqk[i] + 1 << " \t";
				break;
			}
		}
		cout << endl;
		cout << endl;

		while (true)
		{
			cout << "������: " << money << endl;
			cout << "������ �ݾ��� �Է��ϼ���: ";
			cin >> betting;

			if (betting >= 1000 && betting <= money)
			{
				break;
			}
		}
		cout << endl;
		cout << endl;
		while (true)
		{
			cout << "���� ũ�⸦ ���ϼ���(High: H, Low: L, Equal: E): ";
			cin >> hle;

			if (hle == 'H' || hle == 'L' || hle == 'E')
			{
				break;
			}
		}
		if (jqk[5] + 1 > 7)
		{
			if (hle == 'H')
			{
				cout << "���ÿ� �����߽��ϴ�." << endl;
				money += betting;
			}
			else
			{
				cout << "���ÿ� �����߽��ϴ�." << endl;
				money -= betting;
			}
		}
		else if (jqk[5] + 1 < 7)
		{
			if (hle == 'L')
			{
				cout << "���ÿ� �����߽��ϴ�." << endl;
				money += betting;
			}
			else
			{
				cout << "���ÿ� �����߽��ϴ�." << endl;
				money -= betting;
			}
		}
		else if (jqk[5] + 1 == 7)
		{
			if (hle == 'E')
			{
				cout << "���ÿ� �����߽��ϴ�." << endl;
				money += betting * 15;
			}
			else
			{
				cout << "���ÿ� �����߽��ϴ�." << endl;
				money -= betting;
			}
		}
		cout << "������: " << money << endl;
		count += 6;
		gameCount++;
		Sleep(2000);
		system("cls");

		if (money < 1000)
		{
			cout << "������ ���� �����ϴ�." << endl;
			break;
		}
		if (gameCount == 8)
		{
			cout << "ī�尡 �� �̻� �����ϴ�." << endl;
			break;
		}
	}
}