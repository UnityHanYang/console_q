#include <iostream>
#include <time.h>
#include <string>

using namespace std;

void main()
{
	//Example_07.cpp
	//과제1

	char year[5];
	cout << "생년을 입력하세요(2자리 or 4자리): ";
	cin >> year;

	int count = 0;

	for (int i = 0; i < sizeof(year) - 1; i++)
	{
		if (year[i] != '\0')
		{
			count++;
		}
	}

	char date[5];
	cout << "월, 일을 입력하세요(3자리 or 4자리): ";
	cin >> date;
	bool isContain = false;
	bool isZerocontain = false;
	for (int i = 0; i < sizeof(date) - 1; i++)
	{
		if (date[i] == '0' && i == 0)
		{
			isContain = true;
			break;
		}
	}
	int count2 = 0;
	for (int i = 0; i < sizeof(date) - 1; i++)
	{
		if (date[i] != '\0')
		{
			count2++;
		}
	}


	for (int i = 2; i < sizeof(date) - 1; i++)
	{
		if (date[i] != '\0' && i == 2 && date[i] == 0)
		{
			isZerocontain = true;
		}
	}
	int gender;
	cout << "성별을 입력하세요(1 or 3: 남자, 2 or 4: 여자): ";
	cin >> gender;


	switch (gender)
	{
	case 1:
	case 2:
	case 3:
	case 4:
		break;
	default:
		srand(time(NULL));
		int ran = (rand() % 4) + 1;
		cout << ran;
		gender = ran;
		break;
	}
	char cValue[7];
	string str;
	for (int i = 0; i < sizeof(cValue); i++)
	{
		int ran = (rand() % 9) + 1;
		cValue[i] = ran + '0';
	}
	for (int i = 0; i < sizeof(cValue); i++)
	{
		str += cValue[i];
	}
	int lastNum = stoi(str);

	if (count == 3)
	{
		cout << year[0] << year[1];
	}
	else
	{
		cout << year[2] << year[3];
	}

	if (isContain)
	{
		cout << date[0] << date[1];
		if (isZerocontain)
		{
			cout << date[2] << date[3];
		}
		else
		{
			if (count2 == 4)
			{
				cout << date[2] << date[3];
			}
			else if (count2 == 3)
			{
				cout << "0" << date[2];
			}
		}
	}
	else
	{
		if (count2 == 4)
		{
			cout << date[0] << date[1] << date[2] << date[3];
		}
		else
		{
			cout << "0" << date[0] << date[1] << date[2];
		}
	}
	cout << "-" << gender << lastNum << endl;
}