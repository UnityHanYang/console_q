#include <iostream>

using namespace std;

#pragma region 함수 + 변/상수 + 스코프 + 라이플사이클
/*

▶ 변수와 상수 영역이란?

- 변/상수가 프로그램에 걸쳐서 영향을 미칠 수 있는 범위를 의미한다.
ㄴ 변/상수의 종류에 따라서 해당 변/상수에 접근할 수 있는 범위가 달라진다.
	ㄴ 효율적으로 사용하면 데이터의 값을 보존하고 컴퓨터가 자동으로 최작화를 수행한다.
		ㄴ 할당된 메모리에 회수

- 바꿔 말해, 서로 다른 영역에서만 유효한 동일한 이름을 지니는 변/상수가 존재할 경우
각각의 변/상수는 서로 별개라는 의미이다.

- 또한 C/C++ 언어는 {}에 조합을 통해서 특정 영역의 시작과 끝을 나타내는 것이 가능


★ 면접 사골 문제 ★
▷ C/C++ 언어의 변/상수 종류

- 로컬 (지역) // 자기가 소멸되면 삭제한다.
ㄴ 특정 영역에서만 접근이 가능한 변/상수

- 전역 (글로벌)
ㄴ 프로그램 전체에서 접근이 가능한 변/상수

- 정적 로컬 (지역)
ㄴ 특정 영역에서만 접근이 가능하지만 지역 변수와 달리 해당 변수의 값이 항상 유지되는 변/상수

- 정적 전역 (글로벌)
ㄴ 전역 변수와 달리 해당 변/상수가 선언된 파일에서만 접근이 가능한 변/상수

★ 면접 사골 문제 ★

- 전역 / 지역 / 동적 변수 등 변수의 LifeCycle 설명해 보시오.
ㄴ Allocate -> Release -> Memory Pool
ㄴ 변수의 메모리가 확보된 시점부터 해제되어 가용 메모리 풀에 반환되는 시점을 의미한다.

- 변수는 자신이 선언된 Scope 내에서 생성되고 소멸된다.

◆ 지역변수의 생명 주기: 함수의 생명 주기
◆ 전역변수의 생명 주기: 어플리케이션 생명 주기

int형 변수를 선언해서 메모리를 써야할 때: Allocate
함수의 끝 중괄호를 만나 끝날 때
메모리를 해제하고 메모리를 반환시킨다: Release
*/
#pragma endregion

void IncreaseValue(int Value);
void DecreaseValue(int Value);

// 함수 외에서
// 충돌을 했을 때 전역 변수가 사용된다.
static int g_Value = 0;
const int g_ConstantValue = 0;

void main()
{
	int value = 0;

	cout << "정수 입력: ";
	cin >> value;
	// -> 10

	cout << '\n';

	cout << "값 증가시킨 후" << endl;

	IncreaseValue(value);
	IncreaseValue(value);

	cout << g_Value << endl << endl;

	cout << '\n';

	cout << "값을 감소시킨 후" << endl;

	DecreaseValue(value);
	DecreaseValue(value);

	cout << g_Value << endl << endl;

	// 다른 언어에서 부러워하는 기능
	// ㄴ 특정 영역 안에 새로운 영역을 만드는 기능

	{
		int value = 0;
		int g_ConstantValue = 0;
		
		value = 100;
		g_ConstantValue = 200;
		// 데이터 바꿔치기 하겠다. -> 속도 때문에
	}

	cout << value << endl;
	cout << g_ConstantValue << endl;
}

// 값을 증가시킨다.
void IncreaseValue(int value)
{
	int LocalValue = 0;
	g_Value += value;
	LocalValue += value;

	cout << "값을 증가시키는 함수의 지역 변수: " << LocalValue << endl;
}

// 값을 감소시킨다.
void DecreaseValue(int value)
{
	// 함수 내에서
	// 한 번만 초기화 됨 -> 지역 변수와 달리 함수를 빠져나가도 소멸되지 않는다.
	// 정적 변/상수는 특정에서만 접근이 가능한 지역 변수의 특징과 프로그램이 종료될 때까지
	// 사라지지 않는 전역 변수의 특성을 모두 지니고 있다.
	// 그렇기 때문에 선언하는 영역과 실행이 되는 그 첫 순간에만 유효하다는 것을 알 수 있다.
	static int LocalValue = 0;
	g_Value -= value;
	LocalValue -= value;

	cout << "값을 감소시키는 함수의 지역 변수: " << LocalValue << endl;
}
