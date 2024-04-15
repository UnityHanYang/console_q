#include <iostream>
#include <time.h>
#include <Windows.h>

using namespace std;

void main()
{
	srand(time(NULL));

	//세팅
	int card[52];          // 카드 52장
	int shape[3];          // 카드 모양 3장
	int number[3];         // 카드 숫자 3장
	int betting;           // 배팅 금액
	int money = 10000;     // 소지금
	int gameCount = 0;     // 52 / /3 => 17 -> 종료
	int turn = 0;          // 사용한 카드 버릴 놈 -> 한 게임당 3씩 턴을 증가시킨다.

	// 초기화
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
		
		
	// 게임 루프
	// for -> while이 더 유리
	while (true)
	{
		// 치트
		system("cls");

		for (int i = 0; i < 3; i++)
		{
			shape[i] = card[turn + 1] / 13;
			number[i] = card[;

			switch (shape[i])
			{
			case 0:
				cout << "♠";
				break;
			case 1:
				cout << "◆";
				break;
			case 2:
				cout << "♣";
				break;
			case 3: 
				cout << "♥";
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

		cout << "총 금액: " << money << endl;
		cout << "배팅 하시오." << endl;
		cin >> betting;

		if (betting < 100 || betting > money)
		{
			cout << "배팅 금액이 작습니다, 배팅 금액을 올려서 배팅하세요: ";
			Sleep(500);
			continue;
		}

		// 보여지는 카드 두 장중 a < c인 경우, a > c인 경우
		// ㄴ a < c < b, a > c > b
		// ㄴ 외에는 중간(가운데)이 없다는걸 의미하기 때문에 모두 Out
		if ((number[0] < number[2] && number[2] < number[1]) ||
			(number[0] > number[2] && number[2] > number[1]))
		{
			cout << "카드 숫자: " << number[2] + 1 << endl;
			money *= betting;
			cout << betting << " 돈 획득" << endl;
			Sleep(500);
		}
		else
		{
			cout << "카드 숫자: " << number[2] + 1 << endl;
			money -= betting;
			cout << betting << " 돈 일" << endl;
			Sleep(500);
		}

		turn += 3;

		gameCount++;

		if (gameCount == 17)
		{
			cout << "카드가 더 이상 없습니다." << endl;
			break;
		}

		if (money < 100)
		{
			cout << "배팅할 돈이 부족합니다." << endl;
			break;
		}
	}
}