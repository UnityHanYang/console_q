#pragma once
#include <iostream>

using namespace std;

#pragma region 클래스
/*
▶ 클래스란?

- 속성에 해당하는 필드와 행위에 해당하는 함수의 집합을 클래스라고 한다.
	 ㄴ 클래스를 이용하면 데이터 뿐만 아니라 함수를 특정 집합에 포함하는게 가능하다.


EX)

class CUnit
{
	private:
	.
	.
	.

	public:
	.
	.
	.
};

- 클래스는 접근 제어 지시자를 이용해서 변수 또는 함수에 접근할 수 있는 영역을
제한하는 것이 가능하다.

 종류

1. private
ㄴ 캡슐화와 연관이 있다.

2. public
ㄴ 다형성과 연관이 있다.

3. protected
	ㄴ 상속된 클래스에게 맴버 변수, 메서드를 제공하지만
		public와 다르게 자유롭게 쓸 순 없다.

4. @

※ 클래스는 기본적으로 객체의 안전성을 위해 외부에서 함부로 값을 건드리지 못하게 되어 있다.
   되어 있다. 그렇기 때문에 맴버를 숨기는 경향이 있고 이런 특성 때문에 캡슐화가 성립이 된다.

※ 접근 제어 지시자를 명시하지 않으면 클래스는 기본적으로 private 속성을 갖는다.

class의 5대 특성

- 캡슐화

- 다형성

- 추상화

- 상속
*/
#pragma endregion

// 절차, 객체를 번갈아가면서 사용해본다
// ㄴ 어떠한 프로그램을 절차,객체 두 방식을 만들어본다.
// 그럼 그 언어들에 빨리 익숙해짐

//struct Mystruct {
//
//};
//
//enum Myenum {
//
//};

class MainGame
{
	// 클래스가 익숙해 질 때까지 당분간 변수는 private 영역 안에 잡아두도록.
private:
	// 변수 선언 / 변수 선언 및 초기화
	// ㄴ 클래스 내에선 변수 선언 및 초기화를 하면 안 된다.
	int _Number; // 변수는 public 으로 안 나가는 식으로 코드를 짜야한다.
	int _x; // 클래스 안, 카멜식에서 언더바가 들어가면 클래스 맴버변수를 의미
	int _y;

	int m_nID = 0;
	string m_oString = "";

	const int m_nConstValue = 0;
	// 예외 적으로 상수는 초기화를 해야한다. (상수는 더 이상 값변경이 안 되기 때문에 선언 및 초기화를 같이 해줘야 하기 때문에)

	/*
	- 원래 클래스에서 변수를 만들어줄 때 초기화를 허용하지 않았지만 이게 또 은근
	불편하기 때문에 C++11에서 초기화 할 수 있는 기능이 추가됐다.
	ㄴ 심볼릭 상수들도 초기화 가능
	*/

	// 클래스가 익숙해 질 때까지 당분간 함수는 public 영역 안에 잡아두도록.
public:
	void outPut();
	void showPosition(void);
	void movePosition(void);
	void setPosition(int x, int y);

	//void FunctionA(const int a); // 인자에 대한 상수화

	//void FunctionB() const; // 맴버 변수의 상수화(읽기 전용 함수 -> 수정하지 않고 값만 불러오겠다), 가장 많이 쓰이는 형태

	//const void FunctionC(); // 반환 값에 대한 상수화

	//int const FunctionD(); // 반환 값에 대한 상수화

	//const int FunctionE() const; // 반환 값과 맴버 변수의 상수화

	//const int valueA;
	//mutable int valueB;

	//void DoSomething(int x) const
	//{
	//	valueA = x;
	//	valueB = x;
	//}

	//void print() const { cout << "데이터: " << valueB << endl; }

	// 생성자
	// ㄴ 주로 맴버 변수의 값을 원하는 값으로 대입하는 작업을 하거나 그 외 객체가\
		  동작하는데 필요한 모든 초기화 처리를 담당하기도 한다.
	MainGame();
	// 소멸자
	// ㄴ 객체가 바꿔놓은 환경을 원래대로 돌려 놓거나 할당한 자원을 회수하는 역할을\
		한다. (동적할당 등의 메모리 해제)
	~MainGame();
};

