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
	cout << "���� �ӽ� ����: ";
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
		cout << "ġƮ�� Ȱ��ȭ �Ͻðڽ��ϱ�?(y or n) ";
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
				cout << "������ �ݾ��� �Է��ϼ���(�ּ� ���ñݾ�: 1,000, ���� ����: 1,000): ";

				cin >> betting;

			} while (betting < 1000 || betting % bettingPoint != 0);

			cout << endl;

			if (isEnable)
			{
				cout << "���ڸ� �Է����ּ���: ";

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

		cout << "������: " << money << endl;
		cout << "\n������ �׸� �Ͻ÷��� n�� �Է����ֽð�, ������ ��� \n�Ͻ÷��� n�� ������ ������ ���ڸ� �Է����ּ���: ";
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
		cout << "12�� ��÷\n";
	}
	else if (isEqual)
	{
		result = bettingMoney * 5;
		cout << "5�� ��÷\n";
	}
	else if (count == 1)
	{
		result = bettingMoney * 2;
		cout << "2�� ��÷\n";
	}
	else
	{
		result = bettingMoney * (-1);
		cout << "���ñ� ȹ�� ����\n";
	}
	return result;
}