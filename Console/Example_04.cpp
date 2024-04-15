#include <iostream>

using namespace std;

#pragma region 조건문
/*
▶ 조건문이란?

- 프로그램이 실행되는 동안 정해져 있는 경우의 수에 맞춰서 서로 다른 결과를 도출하기
  위한 문법을 의미한다.

- 조건문을 이용하면 다양한 결과를 출력하는 프로그램을 작성하는 것이 가능하다.

	조건문의 종류

1. if ~ else 조건문
2. switch ~ case 조건문


▶ if ~ else 조건문

- 조건적 실행 (조건에 따라 실행 유무)

- 조건을 만족하는 if문을 발견하면 나머지 if문을 건너뛴다.

- if와 else가 만나서 이루는 문장의 수는 둘이 아니라 하나이다.

- if ~ else문에서 조건의 만족여부 검사는 위에서 아래로 절차지향적으로 진행이 돤다.

- 조건이 만족되어 해당 블록을 실행하고 나면 마지막 else까지는 건너뛴다.

- 조건을 만족하지 않으면 마지막의 else문을 실행한다.

시간 복잡도: 시간과 타협할 수 없음
공간 복잡도: 시간과 타협할 수 있음
EX)
// 1. 이 방식이 2번 방법보다 더 빠름(첫번째 조건이 참이면 나머지 조건들은 무시하고 건너뛰기 때문)
if (조건식)
{
	조건이 참이면 실행될 코드
}
else if (조건식)
{
	조건식이 참이면 실행될 코드
}
else
{
	위 조건들이 만족되지 않으면 실행될 코드
}

// 2.
if (조건식)
{
	조건이 참이면 실행될 코드
}

if (조건식)
{
	조건식이 참이면 실행될 코드
}
else
{
	위 조건들이 만족되지 않으면 실행될 코드
}


▶ switch

- 스위치 문을 사용하는 경우는 일일이 조건별로 세팅을 해주기가 용이하기 때문
 ㄴ 그렇기 때문에 상태 변화 / 조건이 많은 경우에 사용하면 좋은 효율을 낼 수 있다.

 - 그리고 if문과 매우 흠사하다는 특징이 있으며 스위치문으로 작성이 되는 로직은 if문으로도 전부
 교체가 가능하다. -> 단, 코드량이 엄청나게 길어질 수 있으니 주의 요망

 EX)

 switch (Data Type)
 {
	case 1:

	case 2:

	case 3:

	default:
 }

 - 인자값에는 int형과 char형이 들어 올 수 있다.
  ㄴ 하지만 보통 int형을 많이 쓴다. -> cpu연산 우선순위 때문에(int가 char보다 우선순위다.)

- 스위치 문은 인자값에 따라서 실행할 영역을 결정한다.
ㄴ EX: 인자값이 1이면 case 1:이 실행되고 / 인자값이 2이면 case 2:이 실행된다.

- switch ~ case 조건문의 default는 if ~ else문의 else문에 해당하는 역할을 수행한다.

- 또한 switch ~ case 조건문은 if ~ else문과 다르게 범위에 해당하는 조건을 줄 수 없을 뿐더러
조건문을 사용할 수 있는 자료형은 정수형만 취급을 한다. (정수 이외에 값을 조건으로 줄 경우 올바른 결과를 출력할 수 없다.)

인자에 실수를 넣으면 들어가긴 하나 case문에서 막힘(case문에 3.1, 2.2 등등.. 실수를 못 넣음)


▶ C/C++ 언어 제어문의 종류

// 가장 빨리 친해져야할 순위: 3 -> 2 -> 1 -> 4

1. return
ㄴ 조건문일 때는 다시 돌려 보낸다. / 함수에서는 값을 반환하고 초기화 한다.

2. continue
ㄴ. 조건문일 때는 연산을 하지 않고 뛰어 넘는다. / while문에서는 바로 이전 문항으로 돌아간다.

3. break;
ㄴ. 만나면 멈춘다. / while문 같은 경우는 while문을 탈출하는 용도로 사용할 수 있다.

4. goto: 알고는 있어야하지만 쓰기 적합하지 않는 경우가 많다.   (객체지향 파괴자)    중첩 반복문에서 빼낼 때 편함
ㄴ 보통 점프문이라고 불리며 goto에 라벨을 지정하면 중간에 있는 흐름과 코드는 무시하고
해당 라벨로 이동한다.

중첩 반복문에서 break를 쓰고 나온다고 하면 반복문은 종료되지만 반복문의 메모리가 남아있다(메모리가 클리어가 안 됨)
이럴 때 필요한게 goto

※ break문은 반복문을 탈출하는 용도로 자주 사용이 된다.
	ㄴ 이 친구의 유무에 따라서 결과 값이 완전히 달라지니 주의할 것
*/
#pragma endregion

void main() {
	int nOperator;
	cout << "내가 입력한 숫자 = ";
	cin >> nOperator;

	if (nOperator == 0) // 조건 식이 3줄 이상 넘어가면 잘못된 확률이 높다.
	{
		cout << "리그 오브 레전드" << endl;
	}
	else if (nOperator == 1)
	{
		cout << "로스트 아크" << endl;
	}
	else
	{
		cout << "블러드" << endl;
	}

	cout << '\n';

	int inputNumber;

	cout << "0번, 1번, 2번 중 하나를 선택하시오. " << endl;
	cout << "내가 입력한 숫자: ";
	cin >> inputNumber;


	switch (inputNumber)
	{
	case 0:
		cout << "0번 입력시 출력" << endl;
		break;
	case 1:
		cout << "1번 입력시 출력" << endl;
		break;
	case 2:
		cout << "2번 입력시 출력" << endl;
		break;

	default:
		cout << "그 외의 입력시 출력" << endl;
		break;
	}

	cout << "\n";

	/*
	▶ C/C++ 언어의 증/감 연산자

	- 전위 증/감 연산자
	- 후위 증/감 연산자

	- 전위 증/감 연산자는 해당 변수의 값을 증/감 시킨 후 연산에 활용하는 반면
	- 후위 증/감 연산자는 연산에 활용이 된 후 해당 변수의 값이 변경된다.
	*/

	int nValue = 10;

	cout << "증/감 연산 결과 출력: " << endl;

	// ?
	cout << "값은: " << ++nValue << endl;

	// ?
	cout << "값은: " << --nValue << endl;

	// ?
	cout << "값은: " << nValue++ << endl;

	// ?
	cout << "값은: " << nValue-- << endl;

	// ?
	cout << "nValue의 값: " << nValue << endl;

	cout << "\n";

	int nValueA, nValueB, nValueC, nValueD;
	nValueA = nValueB = nValueC = nValueD = 10;

	if ((nValueA == nValueB++) && (nValueC++ < ++nValueD))
	{
		cout << nValueA << endl;
		cout << nValueB << endl;
		cout << nValueC << endl;
		cout << nValueD << endl;
	}

	/*
	▶ goto문

	- 객체지향에서는 사용할 때 극 주의가 필요하다.
	ㄴ 잘못 사용한 / 남발한 goto문은 가독성을 심하게 떨어뜨리게 코드의 흐름을 방해한다.
		ㄴ 특히 스파게티 일조하기 때문에 프로그래머의 현명한 판단이 가장 중요하다.
		스파게티 코드: 코드가 서로 꼬여있고, 엉켜있는 상태

	EX)
	goto 레이블;
	레이블:
	*/

	for (int i = 2; i < 10; i++) {
		for (int j = 1; j < 10; j++)
		{
			if (i % 2 == 0) {
				goto EXIT_1;
			}

			if (i % 5 == 0) {
				goto EXIT_2;
			}

			// 이 친구는 구구단을 몇단만 출력할까요?
			cout << i << " x " << j << " = " << i * j << endl;
		}
	EXIT_1:
		cout << "1단을 출력 후 실행: " << i << endl << endl;
	}
EXIT_2:
	cout << "반복문 탈출했다!" << endl;
	// 이 goto는 안 좋은 예시
	// 좋은 예시는 여러 중첩 반복문을 사용할 때 반복문을 기다릴 수 없을 때, 컴파일 밖으로 빼고 싶을 때 사용
	// 이중반복문에선 goto를 쓰지말고 삼중, 사중 때부터 고려해보자.
}
