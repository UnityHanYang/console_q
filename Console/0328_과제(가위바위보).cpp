#include <iostream>
#include <time.h>
#include <string>

using namespace std;

void GetGameResultCout(string playerValue, string computerValue);
string GetResult(int number);

void main()
{
	//Example_05.cpp
	// ���������� ����
	int i = 0;

	while (i < 5)
	{
		int computerNumber = 0;
		srand(time(NULL));
		string playerValue = "";
		computerNumber = rand() % 3;
		cout << "��ǻ�Ͱ� " << GetResult(computerNumber) << "�� �½��ϴ�. �� ���ðڽ��ϱ�?: ";
		cin >> playerValue;
		if (playerValue._Equal("����") || playerValue._Equal("����") || playerValue._Equal("��")) 
		{
			GetGameResultCout(playerValue, GetResult(computerNumber));
			i++;
		}
		else
		{
			cout << "����, ����, �� �߿� �Է����ּ���\n\n";
		}
	}
}

void GetGameResultCout(string playerValue, string computerValue)
{
	string result = (playerValue._Equal("����") && computerValue._Equal("����") ||
		playerValue._Equal("��") && computerValue._Equal("����") ||
		playerValue._Equal("����") && computerValue._Equal("��"))
		? "�̰���ϴ�" : (playerValue._Equal("����") && computerValue._Equal("��") ||
			playerValue._Equal("����") && computerValue._Equal("����") ||
			playerValue._Equal("��") && computerValue._Equal("����"))
		? "�����ϴ�" : "�����ϴ�";

	if{
		�� 0<i
		if (asdf) {

		}
		else if () {

		}
		else {

		}
	
	


	}
	cout << result << '\n\n';
}

string GetResult(int number)
{
	string result = "";

	if (number == 0)
	{
		result = "����";
	}
	else if (number == 1)
	{
		result = "����";
	}
	else 
	{
		result = "��";
	}
	return result;
}