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
	//과제2
	int count = 0;
	for (int i = 0; i < 3; i++)
	{
		EqualNumber();
	}

	cout << "컴퓨터가 뽑은 숫자는: " << threeNumebrStr << "입니다.\n숫자를 입력해주세요: ";
	while (true)
	{
		string playerInput;
		cin >> playerInput;
		StrikeResult(playerInput, threeNumebrStr);
		count++;
		if (playerInput._Equal(threeNumebrStr))
		{
			cout << "정답입니다, " << count << "번 만에 맞히셨습니다\n";
			break;
		}
		cout << "숫자를 입력해주세요: ";
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
	cout << "스트라이크: " << strike << ", 볼: " << ball << ", 아웃: " << out << endl << endl;
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