#include <iostream>
#include <time.h>
#include <Windows.h>

using namespace std;

void main()
{
	srand(time(NULL));

	//����
	int card[52];          // ī�� 52��
	int shape[3];          // ī�� ��� 3��
	int number[3];         // ī�� ���� 3��
	int betting;           // ���� �ݾ�
	int money = 10000;     // ������
	int gameCount = 0;     // 52 / /3 => 17 -> ����
	int turn = 0;          // ����� ī�� ���� �� -> �� ���Ӵ� 3�� ���� ������Ų��.

	// �ʱ�ȭ
	for (int i = 0; i < 52; i++)
	{
		card[i] = i;
	}

	for (int i = 0; i < 1000; i++)
	{
		int index1 = rand() % 52;
		int index2 = rand() % 52;
		int temp = card[index1];
		card[index1] = card[index2];
		card[index2] = temp;
	}
		
		
	// ���� ����
	// for -> while�� �� ����
	while (true)
	{
		// ġƮ
		system("cls");

		for (int i = 0; i < 3; i++)
		{
			shape[i] = card[turn + 1] / 13;
			number[i] = card[;

			switch (shape[i])
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

			switch (number[i])
			{
			case 0:
				cout << "A \t";
				break;
			case 1:
				cout << "J \t";
				break;
			case 2:
				cout << "Q \t";
				break;
			case 3:
				cout << "K \t";
				break;
			default :
				cout << number[i] + 1 << " \t";
				break;
			}
		}

		cout << endl;

		cout << "�� �ݾ�: " << money << endl;
		cout << "���� �Ͻÿ�." << endl;
		cin >> betting;

		if (betting < 100 || betting > money)
		{
			cout << "���� �ݾ��� �۽��ϴ�, ���� �ݾ��� �÷��� �����ϼ���: ";
			Sleep(500);
			continue;
		}

		// �������� ī�� �� ���� a < c�� ���, a > c�� ���
		// �� a < c < b, a > c > b
		// �� �ܿ��� �߰�(���)�� ���ٴ°� �ǹ��ϱ� ������ ��� Out
		if ((number[0] < number[2] && number[2] < number[1]) ||
			(number[0] > number[2] && number[2] > number[1]))
		{
			cout << "ī�� ����: " << number[2] + 1 << endl;
			money *= betting;
			cout << betting << " �� ȹ��" << endl;
			Sleep(500);
		}
		else
		{
			cout << "ī�� ����: " << number[2] + 1 << endl;
			money -= betting;
			cout << betting << " �� ��" << endl;
			Sleep(500);
		}

		turn += 3;

		gameCount++;

		if (gameCount == 17)
		{
			cout << "ī�尡 �� �̻� �����ϴ�." << endl;
			break;
		}

		if (money < 100)
		{
			cout << "������ ���� �����մϴ�." << endl;
			break;
		}
	}
}