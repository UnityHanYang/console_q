#include <iostream>
#include <string>
#include <ctime>
#include <time.h>
#include <cstdlib>
#include <Windows.h>
#include <chrono>

using namespace std;
using namespace std::chrono;

void OutputArray(string array[], int arrayLength);
void OutputResult(int allQCount, int currectCount);

int main()
{
	//Example_05.cpp
	//����

	string wordsArray[19] = { "���̳ʽ�Ƽ", "ī�Ϲ�", "Ƽ���", "�ڶ���", "Ÿ���", "�����ó׺�", "�������", "��Ÿ����", "���佺", "�׶�ĭ", "�׷��̽�", "��Ÿ��", "�����׷�", "��Ƽ��", "����ī��", "�ƺ���", "������������", "�귯��", "��ī���" };
	char choice;

	cout << "'�ð� ���� �ܾ� ��Ȯ�ϰ� ����ġ��' �� �����Ͻ÷��� y�� �����ּ���, ���α׷��� ������ ������ y�� ������ ������ ���ڸ� �Է��ϼ���\n";
	cin >> choice;
	int arrayLength = (sizeof(wordsArray) / sizeof(string));
	if (choice == 'y')
	{
		OutputArray(wordsArray, arrayLength);
	}

}

void OutputResult(int allQCount, int currectCount)
{
	int num = 0;
	string str = "";
	switch (num)
	{
	case 0:

		break;
	case 1:
	case 2:
	default:
		break;
	}
	cout << "�� ����: " << allQCount << ", ���� ����: " << currectCount << endl;
	if (allQCount > 20)
	{
		if (allQCount - currectCount < 1)
		{
			cout << "����� �ӵ��� ������ ��Ȯ�մϴ�.";
		}
		else if (allQCount - currectCount < 3)
		{
			cout << "����� �ӵ��� �������� �����ϰ� ĥ �ʿ䰡 �ֽ��ϴ�.";
		}
		else if (allQCount - currectCount < 6)
		{
			cout << "����� �ӵ��� �������� ��Ȯ���� �����ϴ�";
		}
		else {
			cout << "����� �ӵ��� �������� ��Ȯ���� ���Դϴ�.";
		}
	}
	else if (allQCount > 10)
	{
		if (allQCount - currectCount < 1)
		{
			cout << "����� �ӵ��� ���������� ��Ȯ�մϴ�.";
		}
		else if (allQCount - currectCount < 3)
		{
			cout << "����� �ӵ��� �����̰� �����ϰ� ĥ �ʿ䰡 �ֽ��ϴ�.";
		}
		else if (allQCount - currectCount < 6)
		{
			cout << "����� �ӵ��� �����̰� ��Ȯ���� �����ϴ�";
		}
		else {
			cout << "����� �ӵ��� �����̰� ��Ȯ���� ���Դϴ�.";
		}
	}
	else if (allQCount > 0)
	{
		if (allQCount - currectCount < 1)
		{
			cout << "����� �ӵ��� �������� ��Ȯ�մϴ�.";
		}
		else if (allQCount - currectCount < 3)
		{
			cout << "����� �ӵ��� ������ �����ϰ� ĥ �ʿ䰡 �ֽ��ϴ�.";
		}
		else if (allQCount - currectCount < 6)
		{
			cout << "����� �ӵ��� ������ ��Ȯ���� �����ϴ�";
		}
		else {
			cout << "����� �ӵ��� ������ ��Ȯ���� ���Դϴ�.";
		}
	}
}

void OutputArray(string array[], int arrayLength)
{
	int total = 0;
	int currect = 0;
	int duration = 30;
	auto start = steady_clock::now();

	while (true)
	{
		auto now = steady_clock::now();
		auto time_elapsed = duration_cast<seconds>(now - start).count();

		cout << "���� �ð�: " << duration - time_elapsed << "��\n";

		int ran = rand() % arrayLength;
		cout << array[ran] << endl;

		if (time_elapsed >= duration) break;
		string input;
		cin >> input;

		total++;
		if (array[ran]._Equal(input))
		{
			currect++;
		}

	}
	OutputResult(total, currect);
}


