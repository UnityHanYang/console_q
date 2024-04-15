#include <iostream>

using namespace std;

void main()
{
	char c1[100];
	int count = 0;
	cout << "문자를 입력 받아 입력받은 문자를 거꾸로 출력해라: ";
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
	cout << "있는 그대로를 출력하지만 짝수에 있는 문자만 거꾸로 출력: ";
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
	cout << "주민번호를 입력하고 -이 제거된 주민번호 출력할 것: ";
	cin >> jumin;
	for (int i = 0; i < sizeof(jumin); i++)
	{
		if (jumin[i] != '-')
		{
			cout << jumin[i];
		}
	}
}