#include <iostream>

using namespace std;

void main()
{
	char c1[100];
	int count = 0;
	cout << "���ڸ� �Է� �޾� �Է¹��� ���ڸ� �Ųٷ� ����ض�: ";
	cin >> c1;

	for (int i = 0; c1[i] != '\0'; i++)
	{
		count++;
	}
	for (int i = 0; i < count / 2; i++)
	{
		char temp = c1[count - (i + 1)];
		c1[count - (i + 1)] = c1[i];
		c1[i] = temp;
	}
	for (int i = 0; c1[i] != '\0'; i++)
	{
		cout << c1[i];
	}

	cout << endl;
	cout << endl;

	char c2[100];
	cout << "�ִ� �״�θ� ��������� ¦���� �ִ� ���ڸ� �Ųٷ� ���: ";
	cin >> c2;
	int count2 = 0;

	for (int i = 0; c2[i] != '\0'; i++)
	{
		count2++;
	}
	for (int i = 0; i < count2 / 2; i++)
	{
		if (i % 2 == 1)
		{
			char temp = c2[count2 - (i + 1)];
			c2[count2 - (i + 1)] = c2[i];
			c2[i] = temp;
		}
	}
	for (int i = 0; c2[i] != '\0'; i++)
	{
		cout << c2[i];
	}


	cout << endl;
	cout << endl;

	char jumin[15];
	cout << "�ֹι�ȣ�� �Է��ϰ� -�� ���ŵ� �ֹι�ȣ ����� ��: ";
	cin >> jumin;
	for (int i = 0; i < sizeof(jumin); i++)
	{
		if (jumin[i] != '-')
		{
			cout << jumin[i];
		}
	}
}