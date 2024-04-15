#include <iostream>

// 독이 든 성배
// STL String은 메모리 블록이나 문자열을 다룰 수 있는 기능과 함수들을 포함하는 헤더
// ㄴ 유니코드 사용할 것이라면 wchar.h
#include <string> //내부를 보면 캐릭터(char)로 구현돼있음, string에 의존하지 말자.
// 회사에서는 string이 아닌 char를 물어본다.
#include <wchar.h>
//문자와 문자열 -> 손코딩, 메모리 구조를 테스트하기 아주 좋음

using namespace std;

#pragma region 함수
/*

▶ 함수

- 음료수 자판기
ㄴ (음료수 자판기는 음료수를 배출하는 기계)

 함수를 사용하는 이유

 - 중복로직 제거
 - 관리 용이함
 - 가독성 향상
 - 편리성

  함수를 선언하는 방법
  반환 자료형 함수 이름(입력 자료형(인자 / 인수 / 파라미터)) // (C/C++: 인자, 인수), (C#: 파라미터, 매개변수)
  {   <- 함수 시작
	함수 내용
  }   <- 함수 끝

  
  설명

- 함수 이름: 말 그대로 함수의 이름이며 함수를 실행(호출)할 때 사용한다.
- 인자(인수): 함수가 해야 할 일의 세부사항을 지정하며 함수의 작업거리라고 할 수 있다.
- 반환 자료형: 함수가 리턴하는 값의 데이터 형이며 함수의 작업 결과라고 할 수 있다.
- 함수 내용: {} 안에 함수의 실제 코드가 존재한다.

※ 함수의 이름은 "기본적"으로 유일해야 한다.
ㄴ 동일한 이름의 함수를 N개 이상 선언하는 것은 불가능 하다.

▷ void형 함수란? 

- 리턴 할 값이 없는 함수

- 함수의 입력 또는 출력이 없을 경우 void 키워드를 통해서 해당 함수가 입/출력이 없다 라는 것을
명시한다.

C/C++에서 함수를 위쪽, 아래쪽 2개를 만드는 이유: 위쪽 함수는 선언이고 아래쪽 함수는 구현이기 때문에(C/C++은 2개 구현해야한다)
함수를 선언만 하면 초록색 줄이 뜨면서 함수는 선언했는데 왜 안 쓰냐는 식으로 말하면서 권장하고있음

※ 우리가 알게 모르게 사용한 함수들
ㄴ rand(): 랜덤값을 뽑는 함수

※ 함수 선언은 기본적으로 메인 함수 윗쪽에 해줘야 한다.
   ㄴ 함수를 선언과 동시에 구현을 하면 회사에서 안 좋게 봄.

▷ C/C++ 언어의 함수 선언이 필요한 이유

- C/C++ 언어의 컴파일러는 기본적으로 파일의 내용을 위에서 아래로 해석한다.

- 이때 컴파일러가 이미 지나친 라인에서 포함되어 있지 않은 함수를 호출할 경우 컴파일러가
이에 대한 내용을 전혀 모르기 때문에 에러가 발생한다.

- 그렇기 때문에 함수의 선언을 통해서 컴파일러에게 해당 함수가 우리가 쓰는 프로젝트 파일 어딘가에


- 즉, 함수의 선언과 정의가 반드시 동일한 파일에 존재하지 않아도 된다는 것을 의미한다.

- 함수의 선언은 중복으로 명시하는 것이 가능하지만 함수의 정의는 반드시 유일해야 한다.

C# 함수명은 카멜식이 아닌 파스칼식으로 작성할 것

*/
#pragma endregion

// 함수 선언
void OutputValueA();

// int형 변수를 받고 있지만 반환을 하지 않는다. (void)
void OutputValueB(int numA);
void OutputValueC(int numA, int numB);

// 문자열
void OutputString(string str);
string GetStringFunc(string strA, string strB);
int CheckingString(string strA, string strB);

int GetAddValue(int numA, int numB);
int GetSubValue(int numA, int numB);
int GetMultipleValue(int numA, int numB);
float GetDivideValue(int numA, int numB);

// 함수의 이름은 기본적으로 중복이 안 된다.
// 중복된 함수가 있을 때 별도로 호출할 수 있는 방법이 있을까?

namespace NS_FUNC_A
{
	void Sample()
	{
		cout << "내가 바로 Sample 1" << endl;
	}
}

namespace NS_FUNC_B
{
	void Sample()
	{
		cout << "내가 바로 Sample 2" << endl;
	}
}

void main() 
{
	// 내가 컴퓨터인데...
	// ㄴ 망했어.
	/*
	 Sample();
	 Sample();
	// 이렇게 호출하면 모호함이 된다
	 */

	NS_FUNC_A::Sample();

	NS_FUNC_B::Sample();
	// 이럴 때 namespace를 이용해서 다른 공간을 만들어준 뒤 호출한다.

	// ?
	OutputValueA();
	// 5
	OutputValueB(5);
	// 1, 9 / 19
	OutputValueC(1, 9);
	// 과제가 너무 쉽다. ^^
	OutputString("과제가 너무 쉽다. ^^");

	int nResultA = GetAddValue(18, 25);
	OutputValueB(nResultA);

	string sResultB = GetStringFunc("즐거운", "프로그래밍");
	OutputString(sResultB);

	nResultA = CheckingString("너무 재밌다.", "너무 재밌다.");
	OutputValueB(nResultA);

	// 함수라는 놈은 ... C? / C++?
	// C에서 나온 놈

	int numL = 0;
	int numR = 0;

	cout << "정수 (2개) 입력: " << endl;
	cin >> numL >> numR;

	printf("%d + %d = %d\n", numL, numR, GetAddValue(numL, numR));
	printf("%d - %d = %d\n", numL, numR, GetSubValue(numL, numR));
	printf("%d * %d = %d\n", numL, numR, GetMultipleValue(numL, numR));
	printf("%d / %d = %f\n", numL, numR, GetDivideValue(numL, numR));

	cout << '\n';

	/*
	- 이처럼 함수는 다양한 유형을 가질 수 있다.

	  C/C++ 언어의 함수 유형

	- 입력 O, 출력 O
	- 입력 O, 출력 X
	- 입력 X, 출력 O
	- 입력 X, 출력 X

	void ShowINfo(int NAge, char* psName);
	ㄴ 입력 O, 출력 X
	int getRandomValue(void);
	ㄴ 입력 X, 출력 O
	void SomeFunction(void);
	ㄴ 입력 X, 출력 X

	*/
}

/* 
void main() {

}
 이런식으로 중괄호를 들여쓰기 해서 쓰면 가독성이 안 좋고, 회사에서 안 좋게 본다. -> 하루 빨리 고치는게 좋음, main함수의 중괄호처럼 정석을 쓰자
*/

void OutputValueA()
{
	cout << "내가 바로 함수다!" << endl;
}

void OutputValueB(int numA)
{
	cout << numA << endl;
}

void OutputValueC(int numA, int numB)
{
	cout << numA << numB << endl;
}

void OutputString(string str)
{
	cout << str << endl;
}

string GetStringFunc(string strA, string strB)
{
	// 리스키
	// 문자 / 문자열에 대해서는 -> 사칙연산 x
	// string문자의 첫 글자의 주소를 가르키고 있다, 뒤에 글자는 배열 형식으로 되어 있다.

	/*
	함수는 return 키워드를 통해서 함수의 종료 또는 반환하는 것이 가능
	함수의 결과값은 입력과는 달리 하나의 결과만을 반환할 수 있다.
	ㄴ 정석(정석이긴 하지만 여러개의 결과값을 낼 순 있다) -> C++만 가능
	// 함수의 반환값이 많을 수록 속도면에서도 떨어지고 메모리도 많이 차지 한다.
	*/

	// C언어 4대 + 2대 = 6대 문자열
	// C++ String
	// C# String
	return strA.append(strB);
}

int CheckingString(string strA, string strB)
{
	// 같으면 1 / 다르면 0 반환
	return strA == strB;
}

// ? -> 객체지향
int GetAddValue(int numA, int numB)
{
	return numA + numB;
}

int GetSubValue(int numA, int numB)
{
	return numA - numB;
}

int GetMultipleValue(int numA, int numB)
{
	return numA * numB;
}

float GetDivideValue(int numA, int numB)
{
	return numA / (float)numB; //인자를 float numB 라고 안하고 int로 해줘서 형변환 시켜준 이유는 속도가 빠르기 때문
}

/*

과제1. 가위바위보 게임

- if문을 이용해 만든다.
	ㄴ switch 사용하지 말 것

- 게임의 진행 횟수는 총 5판
	ㄴ 이후는 게임 종료

- 필수: 치트(상대가 뭘 낼 경우의 수를 구하는 것)
	ㄴ EX) 컴퓨터가 가위를 낸다고 하면 사용자는 그걸 보고 바위를 내면 이기고, 보를 내면 지게 만들기.


과제2. 복습, 또 복습하도록

- 지금까지 배운 내용들을 복습한다.

- 그리고 어떻게 복습을 했는지 구현화 시켜온다.
	ㄴ 이제까지 배운 내용을 토대로 뭔가를 만들어서 설명하는 것


도전 과제1. 문자 / 문자열에 대한 과제

- 문제가 어려운건 아니지만 우리가 아직 수업을 안 나갔기 때문에.

★ 작년 상반기 스마일 게이트 출제 문제 ★

<주의 사항>
C++ 언어도 풀어야 하고 빈칸을 알맞게 채워 넣으시오.
C 런타임 라이브러리(strlen, strcmp, strcpym, strcat)나 STL등 기타 라이브러리 함수를 사용하면 안 됩니다.
특히 String을 사용 시 바로 탈락 처리되니 유의 바랍니다.
그리고 해당 방법에 대해 왜 그렇게 작성을 했는지 본인의 의견을 주석으로 기입하시오.

문제. 주어진 문자열을 단어 단위로 순서를 뒤집어 출력하시오.
<예>
입력 값: "Hello World this is SmileGate"
변환 값: "SmileGate is this World Hello"

<조건>
입력 문자열은 앞 뒤에 공백이 없다고 가정합니다.
모든 단어는 공백 한 칸으로 구분된다고 가정합니다.

void ReverseWorld(char* output, int outputArraySize, const char* input)
{
	// 이곳에 채워 놓으시오.
}

마지막으로 본인이 작성한 로직에 대한 시간 복잡도를 계산하는 수식을 별도의 함수로 구현하고
동작방식과 왜 그렇게 작성했는지 기술하시오.
*/
