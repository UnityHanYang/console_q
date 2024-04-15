#include "Example_07.h";
#include "MainGame.h";
#include "MainGame_02.h";
#include "MainGame_03.h"

void main()
{
	//EXAMPLE_2::Example();

	/*
	2024.04.05
	★ 아주 중요한 개념 ★
	- 선언문에 의해 생성된 클래스형의 변수를 인스턴스라고 한다.

	- 클래스는 어디까지나 타입일 뿐이지 그 자체가 정보를 저장하는 변수는 아니다.

	- 클래스를 선언한다고 해서 구조체 변수가 생기는 것이 아닌 것 처럼
	  클래스를 선언한다고 해서 실제로 값을 기억할 수 있는 메모리가 할당되지는 않는다.
	*/

	// 1. 정적 할당
	//MainGame mg; // 인스턴스화 됐다.
	//mg.outPut();
	//// 구조체에서 많이 하는 방법.

	//// 2. 동적 할당
	//MainGame* mainG = new MainGame; // 인스턴스화 됐다.
	//mainG->showPosition(); // 변수는 초기화를 안하면 쓰레기 값이 나온다.
	//// 찾는데 속도 이슈가 있다(아주 무거운 데이터: 100000, 1000000 이런 크기, 작은 데이터는 정적, 동적 둘다 속도가 비슷하다).
	//mainG->setPosition(100, 100);
	//mainG->showPosition();
	//mainG->movePosition();
	//mainG->movePosition();
	//mainG->movePosition();	
	//mainG->showPosition();
	
	MainGame_02 mg2;

	//delete mainG;
}