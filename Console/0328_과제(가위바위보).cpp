#include <iostream>
#include <time.h>
#include <string>

using namespace std;

void GetGameResultCout(string playerValue, string computerValue);
string GetResult(int number);

void main()
{
	//Example_05.cpp
	// 가위바위보 게임
	int i = 0;

	while (i < 5)
	{
		int computerNumber = 0;
		srand(time(NULL));
		string playerValue = "";
		computerNumber = rand() % 3;
		cout << "컴퓨터가 " << GetResult(computerNumber) << "를 냈습니다. 뭘 내시겠습니까?: ";
		cin >> playerValue;
		if (playerValue._Equal("가위") || playerValue._Equal("바위") || playerValue._Equal("보")) 
		{
			GetGameResultCout(playerValue, GetResult(computerNumber));
			i++;
		}
		else
		{
			cout << "가위, 바위, 보 중에 입력해주세요\n\n";
		}
	}
}

void GetGameResultCout(string playerValue, string computerValue)
{
	string result = (playerValue._Equal("바위") && computerValue._Equal("가위") ||
		playerValue._Equal("보") && computerValue._Equal("바위") ||
		playerValue._Equal("가위") && computerValue._Equal("보"))
		? "이겼습니다" : (playerValue._Equal("바위") && computerValue._Equal("보") ||
			playerValue._Equal("가위") && computerValue._Equal("바위") ||
			playerValue._Equal("보") && computerValue._Equal("가위"))
		? "졌습니다" : "비겼습니다";

	if{
		ㅑ 0<i
		if (asdf) {

		}
		else if () {

		}
		else {

		}
	
	


	}
	cout << result << '\n\n';
}

string GetResult(int number)
{
	string result = "";

	if (number == 0)
	{
		result = "가위";
	}
	else if (number == 1)
	{
		result = "바위";
	}
	else 
	{
		result = "보";
	}
	return result;
}