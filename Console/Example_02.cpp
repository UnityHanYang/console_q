#include <iostream>
#include <windows.h>
//C언어 -> 시간 관련 헤더
#include <time.h>

//메모리 릭: 줄줄 메모리

//using 지시자: 지정한 네임스페이스의 모든 명칭을 이 선언이 있는 영역으로 가져와 소속 지정없이\
명칭을 바로 사용하겠다는 지시자.
using std::cout;
using std::endl;
using std::cin;

int number;

namespace A {
	namespace B {
		namespace C {
			int numebr;
		}
	}
}

#pragma region 자료형 + 변수 선언
/*
▶ 자료형

- 변수의 종류를 의미하며 기초 자료형(Data Type)이라고 생각하면 된다.

변수란?

- 변할 수 있는 숫자나 데이터를 의미
- 컴퓨터로 하여금 값을 저장할 수 있는 메모리 공간에 붙는 이름
- 변수를 이용하면 특정 값을 저장 후 해당 값을 이용한 여러가지 연산을 처리하는 것이 가능하기 때문이다.

▷ C/C++언어에서 지원하는 자료형 종류

- 정수
ㄴ 소수점이 없는 수를 표현하기 위한 자료형
ㄴ int에 문자를 넣어도 들어간다. ex) int num = "가";
	ㄴ 문자의 범위가 -128~127이므로 정수로 표현돼있다.

- 실수
ㄴ 소수점이 있는 수를 표현하기 위한 자료형

- 문자
ㄴ 문자를 표현하기 위한 자료형

- 논리
ㄴ 참 / 거짓을 판별하는 자료형


C / C++ 언어 정수형 자료형의 종류

- (unsigned) short (2바이트 크기를 지니는 자료형)
- (unsigned) int (4바이트)
- (unsigned) long (4 ~ 8바이트)
- (unsigned) long long	(8바이트)

C / C++ 언어 실수형 자료형의 종류

- float (4바이트)
- double (8바이트)

C / C++ 언어 문자형 자료형의 종류

- char (1바이트)

C / C++ 언어 논리형 자료형의 종류

- bool (1바이트 => 참(1) / 거짓(0)을 나타내는 자료형)

- C언어는 논리형에 해당하는 참 또는 거짓이라는 자료형이 별도로 존재하지 않았다.
ㄴ 그렇기 때문에 일반적으로 정수 0은 거짓 / NonZero를 모두 true로 인지시켰다.

- 그러다가 C++ 논리형 자료형이 추가됐다.
ㄴ true / false

- 지금은 C언어에도 bool 자료형 있다.

- C/C++ 자료형은 기본적으로 음수(signed)를 표현하는 것이 가능하지만 경우에 따라서
음수를 표현하지 않는 대신에 양수를 좀 더 크게 표현하는 방법이 있다.
ㄴ 즉, unsigned를 사용하면 된다.


▶ 자료형의 크기

1. 정수형 자료형

자료형 타입              크기               범위
short                  2바이트        -32767 ~ 32767
unsigned short         2바이트           0 ~ 65534
int                    4바이트		 약 -21억 ~ 약 21억
unsigned int		   4바이트           0 ~ 약 43억
long				   4바이트        약 -21억 ~ 약 21억
unsigned long          4바이트           0 ~ 약 43억

2. 실수형 자료형

자료형 타입              크기               범위
float                  4바이트       소수점 6 ~ 8자리까지
double                 8바이트       소수점 15 ~ 17자리까지

3. 문자형 자료형

자료형 타입              크기               범위
char                   1바이트        정수를 담는다. (문자)

4. 논리형 자료형

자료형 타입              크기               범위
bool                   1바이트         0(거짓) 1(참)


▶ 변수 선언

- 변수 선언이란?
 ㄴ 값을 저장할 수 있는 메모리 공간에 이름을 정의하는걸 뜻한다.

기본 형식: 변수 형태(종류) 변수명
 ㄴ EX: int number;

EX:
int num = 20; 뒤에 세미콜론을 붙이면 컴퓨터가 세미콜론을 만나면 개행을 시작함(다음 줄로 넘어감), 세미콜론 뒤에 빈 공간을 읽지 않는다는 뜻
 ㄴ 변수의 선언으로 인해서 num이라는 이름으로 메모리 공간이 할당
 ㄴ int num = 20; 은 단순히 num에 20을 저장하는게 아니라 num이 의미하는 메모리 공간에 20을 넣어라 라는
 의미가 된다.
*/
#pragma endregion



void main()
{

	/*number = 100;
	A::B::C::numebr;

	ABC::numebr;*/

	int testNumA = true;
	int testNumB = false;
	int testResult = testNumA + testNumB;

	// 1 + 0
	cout << "boolean: " << testResult << endl;

	cout << endl;
	// ======
	// 변수 초기화 방법
	// ㄴ 다양한 방법이 존재하고 일반적으로는 아래와 같다.

	// int형 변수 선언
	int num0;
	// 선언 이후 값 변경
	num0 = 10;

	// 변수는 선언과 동시에 초기화를 하고 있다.
	int num1 = 3;
	int num2 = 6;
	int total;

	// 자료형이 같은 경우 여러개의 변수를 같이 선언할 수 있다.
	// ㄴ 자료형이 같다고 다 묶지 않는 경우도 있다.
	int num3;
	int num4;
	int num5;
	int num6, num7, num8;
	num6 = num7 = num8 = 100;

	int num = 2;
	float fsValue = 3.14;
	cout << sizeof(1) << endl;
	cout << sizeof(num) << endl;
	cout << sizeof(true) << endl;
	cout << sizeof(fsValue) << endl;

	cout << "정수 1의 사이즈: " << sizeof(1) << endl;
	cout << "정수 2의 사이즈: " << sizeof(2) << endl;
	cout << "true의 사이즈: " << sizeof(true) << endl;
	cout << "false의 사이즈: " << sizeof(false) << endl;

	cout << endl;

	int nValue = 0;

	//C++
	cout << "숫자 입력: " << endl;
	// 사용할 때 주의를 요함
	//cin >> nValue;

	cout << "내가 입력한 숫자: " << nValue << endl;

	cout << endl;

	//C언어
	//printf("정수 입력 : ");
	// 사용할 때 주의를 요함
	//scanf_s("%d", &nValue);

	short ValueA = 10;
	int ValueB = 20;
	long ValueC = 30;
	long long ValueD = 40;

	printf("C언어 short: %d, %d\n", ValueA, sizeof(ValueA));
	printf("C언어 int: %d, %d\n", ValueB, sizeof(ValueB));
	printf("C언어 long: %ld, %ld\n", ValueC, sizeof(ValueC));
	printf("C언어 long long: %lld, %lld\n", ValueD, sizeof(ValueD));

	cout << endl;

	cout << "C++ short: " << ValueA << ", " << "사이즈: " << sizeof(ValueA) << endl;
	cout << "C++ int: " << ValueB << ", " << "사이즈: " << sizeof(ValueB) << endl;
	cout << "C++ long: " << ValueC << ", " << "사이즈: " << sizeof(ValueC) << endl;
	cout << "C++ long long: " << ValueD << ", " << "사이즈: " << sizeof(ValueD) << endl;

	cout << endl;

	//실습
	// ㄴ 실수형 + 문자형 자료형에 대해 C / C++ 스타일로 출력하기.

	float fValue = 3.1415;
	double dValue = 3.141592;
	char cValue = 'A';

	printf("C언어 float: %f, %f\n", fValue, sizeof(fValue));
	printf("C언어 double: %lf, %lf\n", dValue, sizeof(dValue));
	printf("C언어 char: %c, %c\n", cValue, sizeof(cValue));

	cout << endl;

	cout << "C++ float: " << fValue << ", " << sizeof(fValue) << endl;
	cout << "C++ double: " << dValue << ", " << sizeof(dValue) << endl;
	cout << "C++ char: " << cValue << ", " << sizeof(cValue) << endl;

	cout << endl;
}

	/*
		▶ 변수 표기법에 대해

		1. 헝가리안

		- 예전 절차지향적인 방식으로 코딩할 때 이 변수가 어떤 변수인지 알기 위해서
		그 변수 형태가 뜻하는 약자를 붙였다.

		EX)
		int num            <=>         nNUm
		float ValueA       <=>         fValueA;
		double ValueB      <=>         dbValueB;
		char letter        <=>         chLetter;
		bool playerDead    <=>         bPlayerDead / isPlayerDead

		- 네이티브 코딩에서는 많이 사용되지 않다가 근래에 다시 사용되는 추세
		ㄴ 절차지향 -> 객체지향 -> 컴포넌트 ( 헝가리안 )
			ㄴ 상용 엔진 (언리얼 / 유니티)
		  절차지향에서 객체지향으로 추세가 바뀌었고, 객체지향에서 컴포넌트 형식으로 추세가 바뀌었다.

		※ 표기법은 내가 사용을 안 한다고 하더라도 표기법의 규칙정도는 숙지해야 한다.
			ㄴ 협업 -> 같이 하는 일 -> 내가 안 써도 다른 사람은 사용한다.

		2. 카멜식

		- 객체지향적인 방식의 코딩으로 바뀌면서 가독성을 위해서 한 단어의 앞글자만
		대문자로 표기한다.

		EX)
		int playerselectnumber;
		int playerSelectNumber;

		3. 파스칼 케이스

		EX)
		int PlayerSelectNumber;

		4. 스네이크
		
		- 단어를 언더바로 끊어서 표기하는 방법 (카멜식)
		
		EX)
		int player_Select_Number;
		 ㄴ 언더바가 많으면 그 변수가 한 번에 클릭이 안 될 수 있음

		
		변수 이름의 특징

		- 기본적으로 변수의 이름은 알파벳 / 숫자 / 언더바로 구성된다.
		- C언어 같은 경우에는 대소문자를 구분하며 Num과 num이 다른 변수 이름이다.

			1. 변수의 이름은 숫자로 시작할 수 없다.
			2. 키워드 역시 변수 이름으로 사용할 수 없다.
			3. 이름 사이에 공백이 삽입될 수 없다.

		
		int Num100; (O)
		int Num101; (O)
		int _Num101; (오류는 안 나지만 권장은 안 함)
		int 6Num; (X)
		int Num Lock; (X)
		int bool; (X)
		
	*/

	/*

	// 랜덤 시드 초기화
	srand(time(NULL));

	int numR;
	// rand(): 랜덤 함수 => 랜덤 숫자를 반환한다.\
		ㄴ 불안정 난수
	numR = rand() % 5; // 0, 1, 2, 3, 4
	cout << numR << endl;
	
	
	int weaponA = 0;

	//20 ~ 25
	weaponA = rand() % 6;
	weaponA += 20;


	cout << "무기의 데미지 값: " << weaponA << endl;

}

/*
과제1. 아이템 만들기

 - 종류와 데미지, 가격이 다른 무기 및 방어구 + 악세사리 5종을 만들고 화면에 출력

 - 출력된 화면에는 아이템 종류에 따른 가격 + 특성을 함께 나열한다.

 ※ 포트폴리오 대비 도트 포함시킬 것
 ㄴ 무기 1종 + 방어구 1종 = 총 2종

 과제2. 랜덤 숫자 담기

 - 1 ~ 5까지의 랜덤 숫자를 정수형에 담아라.

 - 6 ~ 19까지의 랜덤 숫자를 정수형에 담아라.

 - 23 ~ 189까지의 랜덤 숫자를 정수형에 담아라.

 ★ 도전 과제1. 정규 분포도 뽑기

 - rand() 함수를 이용해서 1 ~ 1000까지의 수를 랜덤하게 뽑고 이를 10만번 수행했을 때
 나올 수 있는 정규 분포도를 구해올 것

 - 분포도는 많이 나온 숫자부터 오름차 순으로 정렬시킬 것

 ※ 조건문 사용 금지


 한줄 조사. 반복문 + 연산자

 - 반복문의 종류와 역할에 대해서 조사해 온다.

 - 연산자의 종류와 역할에 대해서 조사해 온다.

 - 노트에 적어올 것

*/


#pragma region 첫번째 과제

/*
※ 그날 배운 내용 복습할 것


과제 1. 좋아하는 캐릭터 출력 1

- 캐릭터 양식은 자유
- 최소 사이즈: 50 x 50

과제 2. 좋아하는 캐릭터 출력 2

- 1번 과제와 동일하지만 컬러풀하게 만들어 올 것
- 최소 사이즈 50 x 50

※ 1번과 2번 과제의 캐릭터는 동일 캐릭터 X
※ 최소 사이즈 신경쓸 것

- 최소 사이즈란 터미널에서 x, y좌표를 이용하는 것(x: 50, y: 50)
	ㄴ 중점을 두고 좌표를 이용하면 쉬움


추가 공부. 한컴타자연습 긴글(영문) 150타 이상 인증샷

한줄 조사. C++ 변수 + 연산자의 종류에 대해서 다시 한 번

- 노트에 적어올 것


정리하는 습관들 들일 것

- 노션을 이용해서 적을 것
	ㄴ 수업에 대한 내용(수업에서 깨달은 내용, 수업을 들으면서 궁금한 내용, 그거에 대한 답 등등, 수업내용 정리) (나의 성장기)
	ㄴ 면접 정리할 내용

*/

#pragma endregion