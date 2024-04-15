#include <iostream>
#include <time.h>
#include <sstream>
#include <vector>

using namespace std;

#define ARR_SIZE 7

void GetGameResult(vector<int> playerInput, int rottoNum[]);

void main()
{
	int arr[ARR_SIZE];
	bool isEqual = false;

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		srand(time(NULL));
		while (true)
		{
			int ran = (rand() % 42) + 1;
			for (int j = 0; j < sizeof(arr) / sizeof(int); j++)
			{
				if (arr[j] == ran) isEqual = true;
			}
			if (!isEqual)
			{
				arr[i] = ran;
				break;
			}
			isEqual = false;
		}
	}
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;

	vector<int> playerNumbers;
	char playerInput[ARR_SIZE - 1];
	cout << "번호 6개를 입력해주세요(1~43): ";

	for (int i = 0; i < 6; i++) {
		int num;
		cin >> num;
		playerNumbers.push_back(num);
	}


	GetGameResult(playerNumbers, arr);
}

void GetGameResult(vector<int> playerInput, int rottoNum[])
{
	int count = 0;
	bool isBouns = false;
	vector<int>::iterator itera;
	for (int i = 0; i < sizeof(rottoNum) - 2; i++)
	{
		int j = 0;
		for(itera = playerInput.begin(); itera != playerInput.end(); itera++)
		{
			if (*itera == rottoNum[i] && i == j)
			{
				count++;
				break;
			}
			j++;
		}
	}
	const char* result;
	switch (count)
	{
	case 6:
		cout << "1등!!\n";
		break;
	case 5:
		for (int n : playerInput)
		{
			isBouns = (n == rottoNum[(sizeof(rottoNum) - 2)]) ? true : false;
		}
		 result = (isBouns) ? "2등\n" : "3등\n";
		cout << result << endl;
		break;
	case 4:
		cout << "4등\n";
		break;
	case 3:
		cout << "5등\n";
	default:
		cout << "꽝\n";
		break;
	}
}