#include <iostream>
#include <time.h>
#include <string>

using namespace std;

void EqualNumber();

string threeNumebrStr;
void StrikeResult(string playerInput, string computerInput);

int main()
{
	//Example_05c.cpp
	//����2
	int count = 0;
	for (int i = 0; i < 3; i++)
	{
		EqualNumber();
	}

	cout << "��ǻ�Ͱ� ���� ���ڴ�: " << threeNumebrStr << "�Դϴ�.\n���ڸ� �Է����ּ���: ";
	while (true)
	{
		string playerInput;
		cin >> playerInput;
		StrikeResult(playerInput, threeNumebrStr);
		count++;
		if (playerInput._Equal(threeNumebrStr))
		{
			cout << "�����Դϴ�, " << count << "�� ���� �����̽��ϴ�\n";
			break;
		}
		cout << "���ڸ� �Է����ּ���: ";
	}

}

void StrikeResult(string playerInput, string computerInput)
{
	int strike, ball, out;
	strike = ball = out = 0;
	for (int i = 0; i < playerInput.size(); i++)
	{
		for (int j = 0; j < computerInput.size(); j++)
		{
			if ((int)playerInput[i] - '0' == (int)computerInput[j] - '0')
			{
				if (i == j)
				{
					strike++;
				}
				else
				{
					ball++;
				}
			}
		}
	}
	if (strike == 0 && ball == 0)
	{
		out++;
	}
	cout << "��Ʈ����ũ: " << strike << ", ��: " << ball << ", �ƿ�: " << out << endl << endl;
}

void EqualNumber()
{
	int count = 0;
	int ran, change;
	char cValue;
	while (true)
	{
		srand(time(NULL));
		ran = rand() % 10;
		if (threeNumebrStr.size() > 0)
		{
			for (int i = 0; i < threeNumebrStr.size(); i++)
			{
				if ((int)threeNumebrStr[i] - '0' != ran)
				{
					count++;
				}
			}
			if (count == threeNumebrStr.size())
			{
				threeNumebrStr += to_string(ran);
				break;
			}
			count = 0;
		}
		else
		{
			threeNumebrStr = to_string(ran);
			break;
		}
	}
}