#pragma once
#include <iostream>

using namespace std;

#pragma region 사용자 정의 자료형
/*

▶ 사용자 정의 자료형이란?

- 기존에 존재하는 자료형을 기반하여 새로운 자료형의 조합을 만드는 기능이라고 할 수 있다.
ㄴ 사용자 정의 자료형을 활용하면 특정 데이터의 집합을 표현하는 것이 가능하다.

 사용자 정의 자료형의 종류

- 구조체
ㄴ 특정 데이터의 집합을 정의하는 자료형
- 열거형
ㄴ 집합을 정의하는 자료형
- 공용체
ㄴ 특정 심볼릭 상수를 정의하는 자료형
- 클래스(C: 구조체 / C++: 클래스 (구조체 확장))
ㄴ OOP에서 특정 객체를 생성하고 관리하는 자료형

▷ 구조체

- 하나 이상의 변수를 묶어서 새로운 자료형을 정의하는 도구라고 할 수 있다.

- C++에는 클래스가 도입되었지만 C언어와의 호환성 때문에 구조체를 그대로 사용할 수 있다.

- 또한 C++구조체는 C언어의 구조체에 기능을 확장하여 기존의 클래스와 동일한 구조와 기능을 가진다.

EX)
struct STUnitData
{
	int m_nID;
	int m_nLevel;
};


▷ 열거형

- 데이터의 집합을 만들어 내거나 유지보수면에서 효율적으로 정수값을 관리하고 싶을 때 사용이 된다.
ㄴ 단, 정수 데이터라고 하더라도 기본적으로 오름차순 / 내림차순을 설정해줄 수 없다.

EX)
enum EUnitType
{
	UNIT_TYPE_A,
	UNIT_TYPE_B,
	UNIT_TYPE_C
};

※ 스위치와 조합이 좋다.


▷ 공용체

- 1개의 메모리 공간에 여러개의 데이터가 공존할 수 있는 자료형

- 기본적으로 가장 큰 데이터의 크기로 메모리가 할당이 된다.

EX)
union EUnitType
{
	int m_nID;
	int m_nLevel;
};


▷ 클래스

EX)
class CUnitData
{
private:
	int m_nID;
	int m_nLevel;

public:
};

*/
#pragma endregion

/*
	사용자 정의 자료형은 이 부분에 써야한다.
*/

/*
★★★★ 면접(?) 문제 ★★★★
구조체 vs 클래스 차이
구조체는 기본 접근 제어 지시자가 public이고,
클래스는 기본 접근 제어 지시자가 private이다.(캡슐화)
 */

// 구초제 선언 방법
struct tagFamily //추상화가 안 된 경우
{
	const char*/*char*의 크기: 4byte*/ name;
	int age;
	int height;
	float weight;
	bool wedding;
}; // 메모리에 올려놔야 접근해서 쓸 수 있다.

struct tagPlayer // 추상화가 안 된 경우, 하지만 이렇게 써야하는 경우가 있다(플레이어는 고유 특성을 갖고 있기 때문)
{
	int hp;
	int mp;
	int att;
	int def;
	float speed;
};

struct tagUnit // 추상화가 된 경우
{
	const char* name;
	int hp;
	float att;
	bool die;
};

enum EColor_TYPE
{
	// 대문자 표기법을 사용한다.
	RED,
	GREEN,
	BLUE = 1000,
	BLACK,
	WHITE
};

enum EMotion_TYPE
{
	R_WALK,
	L_WALK,
	R_RUN,
	L_RUN
};

// 기존 열거형 같은 경우에는 암묵적 형변환이 일어나기에 상관 없지만
// enum class 같은 경우에는 타입을 지정해 줘야 한다.
// ㄴ 오류 방지 + 메모리 절약
// C++ 스타일
enum class Motion_type : uint16_t // 4바이트를 16바이트로 처리해준다.
{
	R_WALK,
	L_WALK,
	R_RUN,
	L_RUN
};

// 클래스가 들어갔기 때문에 익명의 개념도 추가가 된다.
// ㄴ 단, 해당 방식으로 선언된 열거형은 식별할 수 있는
// 이름이 존재하지 않기 때문에 따로 변수화 시키는 것은 불가
// ㄴ 이러한 규칙은 다른 사용자 정의 자료형에도 적용이 된다

enum
{
	UINT_SIZE = 5
	// 데이터만 묶어놓을 때, 하나씩 빼서 사용할 때
};

union STData
{
	int m_nDataA;
	int m_nDataB;
	float m_fData;
};

class MainGame_02
{
private:
	tagFamily human; // 크기: 구조체에 있는 모든 자료형의 합
	EMotion_TYPE m_motion;
	STData stData;

public:
	MainGame_02();
	~MainGame_02();
};

/*
과제1. 클래스

- 클래스를 5개 생성 후 각각 다른 문구를 출력한다.

EX) 출력의 형태
(클래스 이름) 클래스 1번
(클래스 이름) 클래스 2번
.
.
(클래스 이름) 클래스 5번

※ 본인이 생각한 가장 효율적인 방법으로 구현해 온다.
ㄴ 클래스를 만들어서 포인터로 만들 것인지, 배열로 만들 것인지, 함수의 인자로 쑤셔넣을 것인지

과제2. 문자열

- char 사용할 것

1. 문자를 입력 받아 입력받은 문자를 거꾸로 출력해라.
ㄴ EX) ABCD -> DCBA

2. 있는 그대로를 출력하지만 짝수에 있는 문자만 거꾸로 출력
ㄴ EX) ASDFG -> AFDSG

3. 주민번호를 입력하고 -이 제거된 주민번호 출력할 것
ㄴ EX) 1234567-12345678 -> 123456712345678

과제3. 하이로우 세븐

♠ 1 ~ 13까지의 카드
◆ 1 ~ 13까지의 카드
♣ 1 ~ 13까지의 카드
♥ 1 ~ 13까지의 카드

- 종류별 13장의 카드 => 총 52장의 카드를 사용한다.

예외처리:
ㄴ A = 1
ㄴ J = 11
ㄴ Q = 12
ㄴ K = 13

- 52장의 카드를 최소 한번 랜덤으로 섞고 그 후 매턴 마다 5장씩 뒤집는다.

- 앞쪽에 배치된 다섯장의 카드 보고 6번째 카드의 숫자를 예측한다.

- Seven보다 높으면 High, 낮으면 Low, 같으면 Seven중 하나에 배팅

- Seven일 경우 배팅금에 15배 획득
ㄴ 나머지는 건만큼 얻거나 잃거나.


타임어택
ㄴ 보류

열심히 조사

- 노트에 적어온다.

- STL + 자료구조 + 알고리즘 + 스택 + 큐 + 백터 + 리스트 + 맵 + 반복자 + 컨테이너
*/