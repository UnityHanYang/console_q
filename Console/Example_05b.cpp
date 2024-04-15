#include <iostream>

using namespace std;

#pragma region 상수
/*

▶ 상수란?

- 변수와 달리 저장된 데이터를 변경할 수 없는 공간에 붙여진 이름을 의미한다.
ㄴ 상수는 한번 데이터가 저장되고 나면 변경하는 것이 일반적으론 불가능하다. -> C++만 상수를 변경하는 것이 가능, 다른 언어는 불가능

  
  상수의 종류 -> low level 컴퓨터가 좋아하는 형태

- 리터럴 상수 ( 이름이 없는 상수 ) -> 메모리에 넣을 필요가 없는 상수, 메모리 할당 안됨
ㄴ 이름이 없는 상수라고 하며 임시 값이라고도 지칭한다.
ㄴ EX: 1, 3.14 'C' 등등...
1은 그냥 1일 뿐이고 'C'는 그냥 C일 뿐이다.
ㄴ 리터럴 상수는 쓸 수도, 읽어올 수도 없음.

- 심볼릭 상수 ( 이름이 존재하는 상수) -> 메모리 할당 됨 // C언어 느낌
ㄴ 심볼릭 상수는 const 라는 키워드를 통해서 선언이 가능하고 리터럴 상수와 달리
이름을 통해서 안에 저장되어 있는 데이터를 읽어 들이는 것이 가능하다.
ㄴ EX: const 한정자를 통해 만들어진 변수 / 네이밍
	ㄴ int number = 100;  =>  const int number = 100; // number는 상수화가 됐다
		ㄴ 공부 열심히 합시다

ㄴ 심볼릭 상수는 값을 쓸 수는 없지만 읽어올 수는 있음.


▶ Constexpr // C++과 잘 어울림

- 이 키워드는 C++11에서 추가됐다.
ㄴ 객체나 함수 앞에 붙일 수 있는 키워드로 해당 객체나 함수의 반환값을 컴파일 타임에 알 수 있다.
ㄴ C++17부터는 람다식에 적용 가능

★ 무엇보다 컴파일 타임에 값이 결정되므로 함수 호출간 템플릿 인자로 넘겨줄 때 아주 유용하다.


 const / constexpr의 차이점

- 초기화 여부 / 오류 발견시기
 ㄴ 런타임 이전까지 지연시킬 수 있느냐 / 컴파일 타임에 잡아 낼 수 있느냐의 차이
값이 확정되는 프로세스가 다르다.

Constexpr: 컴파일 타임
const: 런타임 이전(창이 뜨기 전에)

컴파일 단점: 필요할 때만 쓰는게 아니라 필요없을 때도 존재한다.
ㄴ 할수 있는 일이 많아서 메모리 사용량이 많다.

EX) 컴파일을 통역사라고 가정하면 필요할 때만 통역사를 옆에 데려와서 사용하게 해주면 되는데, 필요 없을 때도 통역사가 옆에 있다. -> 아주 큰 단점



링크가 obj파일을 유효성 검사를 하고 컴파일러에게 던져주고 
EX) 우리가 게임을 하는 중이 런타임이라 함


▶ Readonly

- C#에서 지원하는 상수화 키워드

const VS Readonly

const
ㄴ 초시화 이후 값을 변경할 수 없다.
ㄴ 선언하는 시점에만 초기화 가능
ㄴ 컴파일 타임 상수


Readonly // 게임 해상도 세팅, 게임 접속시간을 확인해 더 이상 해상도를 바꾸지 않으면 readonly를 통해 변수에서 상수로 바꿈
ㄴ 초기화 이후 값을 변경할 수 없다.
ㄴ 단, 선언하는 시점과 생성자에서 초기화가 1번 가능하다.
ㄴ 런타임 상수

※ 컴파일 타임 상수는 변수가 실제 값으로 대체가 되고 런타임 상수는 변수의 참조 형식이기 때문에
성능과 속도를 고려하면 const > readonly

※ 하지만 인스턴스마다 다른 값을 할당하고 싶으면 / 사용자 정의 자료형 => readonly


  define VS const

- 메모리 할당 여부
ㄴ 리터럴 / 심볼릭
ㄴ const는 메모리를 할당 받고(심볼릭 쪽) / #define은 메모리를 차지하지 않는다.(리터럴 쪽)

const를 쓸 때: 유지보수 때문에
define을 쓸 때: 메모리를 신경 안 쓸 때(메모리 절약)

- #define은 데이터가 저장된 메모리 공간을 가르키는 리터럴 상수이며 별도의 메모리를 할당하지 않는다.

- const는 심볼릭 상수로 별도의 메모리를 할당받는 변수이므로 타입을 지정해 줘야 한다.
ㄴ 스택 영역이라는 곳에 할당되기 때문에 필드(내가 속해있는 중괄호 안, 중괄호 안에 있는 코드를 의미)가 종료되면 메모리가 해제된다.
ㄴ 또한 타입체크(변수는 int n = '가'를 쓸 수 있지만 상수는 자료형에 대한 값을 명확하게 제시를 해야하기 때문에 타입체크를 중요시한다)가 발생하기 때문에 컴파일 과정에서 타입에 대한 오류를 확인할 수 있다.

//C/C++를 쓰는 이유는 효율적이기 때문

// - 하나 더 얘기하자면 const의 경우 이니셜라이저(클래스를 배우고 나서 이 부분 이니셜라이저를 가르쳐달라고 말하기) ㅅ

*/
#pragma endregion

void main()
{
	//Pass, 상수는 기본적으로 선언을 함과 동시에 초기화를 시켜줘야한다.
	//const int number = 100;

	//const int number1;
	//number1 = 100; // 선언을 하고 다음 줄에 값을 할당해주었으므로 오류

	cout << "== 리터럴 상수 ==" << endl;
	cout << "정수형: " << 10 << ", " << 10L << ", " << 10LL << endl;
	cout << "실수형: " << 3.14f << ", " << 3.14 << endl;
	cout << "문자형: " << 'A' << endl;

	printf("\n");

	cout << "== 심볼릭 상수 ==" << endl;
	
	const int nValue = 0;
	const float fValueA = 3.14f;
	const double dbValueA = 3.14f;

	//cout << "출력 값: " << nValue
	printf("%d, %f, %lf\n", nValue, fValueA, dbValueA);
	// 심볼릭 상수는 cout 보다 printf가 좋다
	
	// 변수를 안 쓰고 상수를 쓰는 이유: 상수가 변수보다 더 빠름

	// ★ 손코딩 / 문답식(5지선다) ★

	const int cNumberA = 100;
	int const cNumberB = 200;
	// 두 개의 차이가 없다( 변수를 상수화 시키겠다 )

	// *: C언어 문법 -> 포인터
	// 변수명이 가리키는 주소의 값을 변경할 수 없다. (주소 상수화)
	const int* cNumberC;

	int pNum;

	//포인터 변수의 상수화
	int* const cNumberD = &pNum;

	// 변수명이 가리키는 주소와 그 주소의 값도 상수화
	const int* const cNumberE = &pNum;
}
