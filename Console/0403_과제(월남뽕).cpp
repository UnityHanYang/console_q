#include <iostream>
#include <time.h>

using namespace std;

void main()
{
	int card[52];
	int tool[3];
	int jqk[3];

	int count = 0;
	int gameCount = 0;
	int betting;
	int money = 10000;

	for (int i = 0; i < 52; i++)
	{
		card[i] = i;
	}
	srand(time(NULL));
	for (int i = 0; i < 100; i++)
	{
		int index1 = rand() % 52;
		int index2 = rand() % 52;

		int temp = card[index1];
		card[index1] = card[index2];
		card[index2] = temp;
	}

	while (true)
	{
		for (int i = 0; i < 3; i++)
		{
			jqk[i] = card[count + i] % 13;
			tool[i] = card[count + i] / 13;

			switch (tool[i])
			{
			case 0:
				cout << "◇";
				break;
			case 1:
				cout << "♠";
				break;
			case 2:
				cout << "♧";
				break;
			case 3:
				cout << "♥";
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
				cout << "k \t";
				break;
			default:
				cout << jqk[i] << " \t";
				break;
			}
		}
		cout << '\n';


		while(true)
		{
			cout << "배팅금: ";
			cin >> betting;

			if (betting >= 1000)
			{
				break;
			}
		}
		cout << '\n';
		if ((jqk[0] > jqk[2] && jqk[1] < jqk[2]) ||
			(jqk[0] < jqk[2] && jqk[1] > jqk[2]))
		{
			cout << "성공";
			money += betting * 10;
		}
		else {
			cout << "실패";
			money -= betting;
		}
		cout << "\n소지금: " << money << endl;

		count+=3;
		gameCount++;

		if (gameCount == 17)
		{
			break;
		}

		if (money < 1000)
		{
			break;
		}
	}
}
