#include <iostream>
#include <time.h>
// Sleep(OneParam)
// ㄴ Sleep(1000): 1초 동안 멈춘다.
#include <Windows.h>

using namespace std;

void main() {
	bool isPlayerDead = false;

	while (true)
	{
		if (isPlayerDead)
		{
			cout << "플레이어는 죽었다." << endl;
			Sleep(3000);
			system("cls"); // 모든 버퍼를 지운다 -> 화면 클리어 cls란 clean system의 약자\
			특정 부분만 지우고 싶으면 조건문 걸어서 사용해야 함
			break;;
		}
	}
}

/*
0327_과제

과제1. 반복문 출력

※ for / while / do ~ while문

- 20에서 1까지 출력
ㄴ 모든 숫자

- 1부터 20까지 출력
ㄴ 짝수만


과제2. 반복문 숙달

- 정수 하나를 입력 받아 -5씩 반복적으로 연산되는 식을 구현한다.
	ㄴ 종료 조건: -15를 넘어가면 탈출
	ㄴ 조건: 입력 받은 값은 -10 ~ +10 사이의 숫자여야 하고 의외의 값이 들어오면 종료

※ while문을 사용할 것


과제3. 일수 출력기

- if문과 switch문 중에 본인이 판단해 효율적인 것을 선택할 것.

- 시작하면 사용자의 입력을 받고 입력한 숫자에 따라 ??일인지 출력하면 된다.

EX) 4 입력시 -> 4월은 30일까지 있습니다 -> 다시 커맨트 활성화

- 1월 ~12월까지 확인이 가능해야 하고 의외의 숫자는 예외처리 하도록

- 총 5번을 입력하면 프로그램은 종료된다.


한줄 조사. 함수

- 노트에 적어온다.

- 비유할 것 생각해 온다. (EX: 함수는 000이다);
*/