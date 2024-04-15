#include <iostream>
#include <time.h>
#include <algorithm>
#include <Windows.h>

using namespace std;


void ChangeCard(int playerNum);

void RandomShake(int arr[], int num);

void BoardWrite(bool isEnter, int input[], bool isUp, int turn);


void Setting(int ary[]);

char toolArr[10][4] = { "☆", "◇", "♤", "♡", "♧", "★", "◆", "♠", "♥", "♣" };
int boardSize[4][5];
int randomArr[20];
int playerInput[20];
int randomInput[20];
int arr[20];
int equalRandomNum[9];


void main()
{
	EXIT:
	int count, count2, index;
	count = count2 = index = 0;
	bool isEnter, isUp, isCheat, isEqual, isEnter2;
	isEnter = isUp = isCheat = isEqual = isEnter2 = false;
	int turn, equalCount;
	turn = equalCount = 0;
	char reset;
	int playerInputCount = 0;
	srand(time(NULL));
	for (int i = 0; i < sizeof(playerInput) / sizeof(playerInput[0]); i++)
	{
		playerInput[i] = -12;
	}

	for (int i = 0; i < 20; i++)
	{
		int num = i % 10;
		randomArr[i] = num;
	}
	RandomShake(randomArr, 20);

	for (int i = 0; i < sizeof(equalRandomNum) / sizeof(equalRandomNum[0]); i++)
	{
		while (true)
		{
			int num = rand() % 10;
			for (int j = 0; j < sizeof(equalRandomNum) / sizeof(equalRandomNum[0]); j++)
			{
				if (equalRandomNum[j] == num)
				{
					isEqual = true;
				}
			}
			if (!isEqual)
			{
				equalRandomNum[i] = num;
				break;
			}
			isEqual = false;
		}
	}
	RandomShake(equalRandomNum, 9);

	for (int i = 0; i < (sizeof(boardSize) / 5) / 4; i++)
	{
		for (int j = 0; j < (sizeof(boardSize) / 4) / 4; j++)
		{
			boardSize[i][j] = count;
			count++;
		}
	}

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		arr[i] = i;
	}

	RandomShake(arr, 20);

	for (int i = 0; i < 100; i++)
	{
		int index1 = rand() % 20;
		int index2 = rand() % 20;

		int temp = arr[index1];
		arr[index1] = arr[index2];
		arr[index2] = temp;
	}

	while (true)
	{
		if (isEnter)
		{
			if (isCheat)
			{
				BoardWrite(isEnter, randomInput, isUp, 18);
			}
			else
			{
				BoardWrite(isEnter, playerInput, isUp, turn);
			}
			for (int i = turn; i < turn + 1; i += 2)
			{
				if (playerInput[i] != 30)
				{
					if (randomArr[playerInput[i]] == randomArr[playerInput[i + 1]])
					{
						equalCount++;
					}
				}
			}
			if (equalCount == 10)
			{
				Sleep(1000);
				cout << "게임이 끝났습니다\n다시 시작하시겠습니까?(y / n) ";
				cin >> reset;
				if (reset == 'y')
				{
					Setting(randomArr);
					Setting(playerInput);
					Setting(randomInput);
					Setting(arr);
					Setting(equalRandomNum);
					system("cls");
					goto EXIT;
				}
				else
				{
					break;
				}
			}
			cout << endl;
			cout << endl;
			if (isCheat)
			{
				cout << "5초 뒤에 다시 뒤집어 집니다.\n";
				Sleep(5000);
				isCheat = false;
			}
			else
			{
				cout << "3초 뒤에 다시 뒤집어 집니다.\n";
				Sleep(3000);
			}
			system("cls");
			if (!isEnter2)
			{
				for (int i = turn; i < turn + 1; i += 2)
				{
					if (randomArr[playerInput[i]] != randomArr[playerInput[i + 1]])
					{
						playerInput[i] = -222;
						playerInput[i + 1] = -111;
					}
				}
			}

		}
		BoardWrite(isEnter, playerInput, isUp, turn);

		cout << endl;
		cout << endl;
		if (isEnter)
		{
			for (int i = turn; i < turn + 1; i += 2)
			{
				if (playerInput[i] != 30 || playerInput[i + 1] != 30)
				{
					if (randomArr[playerInput[i]] == randomArr[playerInput[i + 1]])
					{
						turn += 2;
						break;
					}
				}
			}
		}
		if (isEnter2)
		{
			turn += 2;
			equalCount = 9;
		}
		while (true)
		{
			bool isInputEqual = false;
			cout << "뒤집을 숫자 2개를 입력하세요(치트1: 20, 20 입력, 치트2: 30, 30 입력): ";
			for (int i = turn; i < turn + 2; i++)
			{
				cin >> playerInput[i];
				if (turn > 0)
				{
					for (int j = 0; j < turn; j++)
					{
						if (playerInput[i] == playerInput[j])
						{
							isInputEqual = true;
							break;
						}
					}
				}
			}
			if (!isInputEqual)
			{
				break;
			}
		}
		for (int i = turn; i < turn + 1; i++)
		{
			if (playerInput[i] == 30 && playerInput[i + 1] == 30)
			{
				isCheat = true;
				for (int i = 0; i < 20; i++)
				{
					randomInput[i] = i;
				}
			}
		}

		if (playerInput[turn] == 20)
		{
			for (int i = 0; i < sizeof(randomArr) / sizeof(randomArr[0]); i++)
			{
				for (int j = 0; j < sizeof(equalRandomNum) / sizeof(equalRandomNum[0]); j++)
				{
					if (equalRandomNum[j] == randomArr[i])
					{
						playerInput[playerInputCount] = i;
						playerInputCount++;
					}
				}
			}
			turn = 16;
			isEnter2 = true;
		}
		isEnter = true;
		system("cls");

	}
}


void Setting(int ary[])
{
	for (int i = 0; i < sizeof(*ary) / sizeof(ary[0]); i++)
	{
		ary[i] = NULL;
	}
}

void BoardWrite(bool isEnter, int input[], bool isUp, int turn)
{
	int index = 0;
	int inputArr[20];

	for (int i = 0; i < sizeof(inputArr) / sizeof(inputArr[0]); i++)
	{
		if (input[i] != 30)
		{
			inputArr[i] = input[i];
		}
	}
	sort(inputArr, inputArr + 20, greater<>());

	for (int i = ((sizeof(boardSize) / 5) / 4) - 1; i >= 0; i--)
	{
		for (int j = ((sizeof(boardSize) / 4) / 4) - 1; j >= 0; j--)
		{
			if ((isEnter && boardSize[i][j] == inputArr[index]))
			{
				ChangeCard(inputArr[index]);
				isUp = true;
			}
			else
			{
				cout << boardSize[i][j];
			}

			if (isUp)
			{
				if (index < turn + 1)
				{
					index++;
				}
				isUp = false;
			}
			cout << "\t";
		}
		if (i != 0)
		{
			cout << "\n\n\n";

		}
		cout << endl;
	}
}

void RandomShake(int arr[], int num)
{
	for (int i = 0; i < 1000; i++)
	{
		int index1 = rand() % num;
		int index2 = rand() % num;

		if (index1 != index2)
		{
			int temp = arr[index1];
			arr[index1] = arr[index2];
			arr[index2] = temp;

		}
	}
}

void ChangeCard(int playerNum)
{
	cout << toolArr[randomArr[playerNum]];
}