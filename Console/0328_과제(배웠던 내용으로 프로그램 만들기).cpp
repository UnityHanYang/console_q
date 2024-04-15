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
	//복습

	string wordsArray[19] = { "다이너스티", "카니발", "티뷰론", "코란도", "타우너", "엘지시네빔", "에스페로", "스타렉스", "아토스", "테라칸", "그레이스", "싼타모", "엘지그램", "옵티마", "투스카니", "아벨라", "엔터프라이즈", "브러엄", "아카디아" };
	char choice;

	cout << "'시간 내에 단어 정확하게 빨리치기' 를 시작하시려면 y를 눌러주세요, 프로그램을 끝내고 싶으면 y을 제외한 나머지 문자를 입력하세요\n";
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
	cout << "총 문제: " << allQCount << ", 맞힌 문제: " << currectCount << endl;
	if (allQCount > 20)
	{
		if (allQCount - currectCount < 1)
		{
			cout << "당신은 속도가 빠르고 정확합니다.";
		}
		else if (allQCount - currectCount < 3)
		{
			cout << "당신은 속도가 빠르지만 신중하게 칠 필요가 있습니다.";
		}
		else if (allQCount - currectCount < 6)
		{
			cout << "당신은 속도가 빠르지만 정확도가 낮습니다";
		}
		else {
			cout << "당신은 속도가 빠르지만 정확도는 꽝입니다.";
		}
	}
	else if (allQCount > 10)
	{
		if (allQCount - currectCount < 1)
		{
			cout << "당신은 속도가 보통이지만 정확합니다.";
		}
		else if (allQCount - currectCount < 3)
		{
			cout << "당신은 속도가 보통이고 신중하게 칠 필요가 있습니다.";
		}
		else if (allQCount - currectCount < 6)
		{
			cout << "당신은 속도가 보통이고 정확도가 낮습니다";
		}
		else {
			cout << "당신은 속도가 보통이고 정확도는 꽝입니다.";
		}
	}
	else if (allQCount > 0)
	{
		if (allQCount - currectCount < 1)
		{
			cout << "당신은 속도가 느리지만 정확합니다.";
		}
		else if (allQCount - currectCount < 3)
		{
			cout << "당신은 속도가 느리고 신중하게 칠 필요가 있습니다.";
		}
		else if (allQCount - currectCount < 6)
		{
			cout << "당신은 속도가 느리고 정확도가 낮습니다";
		}
		else {
			cout << "당신은 속도가 느리고 정확도는 꽝입니다.";
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

		cout << "남은 시간: " << duration - time_elapsed << "초\n";

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


