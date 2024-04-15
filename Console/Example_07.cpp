#include "Example_07.h"

#define EXAMPLE_TYPE_PRINT    1

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

// 삼항 연산자
#define EXAMPLE_TYPE_TERNARY_OPERATOR  2
// 문자열
#define EXAMPLE_TYPE_STRING 3

#define EXAMPLE_TYPE EXAMPLE_TYPE_STRING

namespace EXAMPLE_2
{
	void Example()
	{
#if EXAMPLE_TYPE == EXAMPLE_TYPE_PRINT
		cout << "실불릭 세팅을 하려면 이곳에서" << endl;

#elif EXAMPLE_TYPE == EXAMPLE_TYPE_TERNARY_OPERATOR
		cout << "삼항 연산자" << endl;

		int numA, numB;
		cout << "정수 입력: ";
		cin >> numA;

		numB = (numA > 0) ? numA : numA * (-1);

		cout << "입력한 수의 값: " << numB << endl;

		printf("\n");

		int numberA;
		int numberB = 100;
		int result;

		cout << "정수 입력: ";
		cin >> numberA;

		result = numberA < 10 ? numberA : numberB;

		cout << "삼항 연산의 결과값: " << result << endl;
#else

		char moonja = 'A';
		int numA = 20;
		float numB = 3.0f;
		bool numC = true;

		cout << moonja << endl;

		cout << sizeof(moonja) << " : 바이트" << endl;
		cout << sizeof(numA) << " : 바이트" << endl;
		cout << sizeof(numB) << " : 바이트" << endl;
		cout << sizeof(numC) << " : 바이트" << endl;

		printf("\n");

		/*
		C/C++은 타입에 엄격한 언어
			ㄴ 이는 오류를 방지하기 위함이다.

		- 기본적으로 타입 오류를 예방할 수 있는게 NULL이다.

		★ 문자는 기본적으로 NULL문자가 추가 안 된다.

		  NULL(문자 / 문자열을 쓰면 포인터, 배열, NULL을 충족시킬 수 있다)

		- <iostream>에 정의되어 있다.

		- NULL은 0 주소를 의미하며 그렇기에 포인터 변수를 초기화 할 때 사용할 수 있다.

		char* p = NULL;  ==  char* p = 0; // 같은 의미

		int n = NULL;   !=  int n = 0; // 다른 의미
		
		※ 전자는 p변수의 주소값에 0을 넣는 것이고 후자는 정수 0을 n에 넣는다는 의미
		*/

		/*
		C / C++ 언어의 문자열 표현 방법
		ㄴ " " 조합을 통해서 문자열을 표현하는 것이 가능하며 이 때 char의 배열을 이용한다.
		ㄴ 또한 문자열 상수를 통해 초기화를 할 경우 널 문자를 명시적으로 기입하지 않아도 된다.

		*/

		char strA = 'A';
		char strB[4] = "abc"; // 끝에 자동으로 \0이 들어간다 EX) char strB[4] = "abc\0";
		// ㄴ 1Byte가 더 들어간다.
		// ㄴ 널 문자를 마지막에 기입하기 위함

		char strC[20] = "i like game.!";
		// 배열은 자료구조다. -> 선형자료구조 - > 선형자료구조형 이기 때문에
		//find를 안 한다. -> 내가 끝나면 내 뒤에 또 있는지만 확인한다.

		cout << strC << endl;

		strC[10] = '\0';
		// 배열의 특성상 맨 앞(인덱스 0)은 없어지지 않으므로 .!이 나오는게 아니고
		// i like 같이 앞에만 남는다.

		cout << strC << endl;
		//char strC[20] = "Programming is fun";

		//strC[2] = '\0';
		
		//cout << strC << endl;
		
		/*
		▶ 4대 문자열 + @

		- 기본적으로 문자열 조작 함수
		ㄴ 문자와 문자열을 다룰 때 일반적으로 사용할 수 있는 기능들의 집합

		1. strlen
		ㄴ 문자열의 길이를 계산하는 기능

		2. strcmp
		ㄴ 문자열을 비교하는 기능

		3. strcpy
		ㄴ 문자열을 복사하는 기능

		4. strcat
		ㄴ 문자열을 합치는 기능
		*/

		cout << "4대 문자열" << endl;

		cout << '\n';

		/*
		1. strlen(): 문자열 길이
		ㄴ EX) strlen("문자열");

		int strlen()
		{
			return 정수;
		}
		*/

		char strD[100] = "abcdef"; // 쓰는 값만 컴퓨터에게 넘겨준다. -> 오버플로우가 발생하지 않아 터질 수가 없음.
		// 문자열이 들어가면 배열이 들어가고, 포인터가 들어간다.
		// ㄴ 버퍼가 하나라도 오버가 되면 터진다
		int lenA = strlen(strD);
		cout << strlen(strD) << endl;
		cout << "문자열의 길이: " << lenA << endl;

		cout << '\n';

		/*
		★ 이거 물어보는 회사가 생각보다 많더라
		어떤 경우에 0, -1, 1을 반환하는지 ★
		2. strcmp(문자열, 문자열): 문자열 비교

		EX)
		int strcmp(char* str1, char* str2)
		{
			if(두 문자가 같은지?)
			{
				return 0;
			}
			else
			{
				if(앞 문자가 큰지?)
				{
					return -1;
				}
				else
				{
					return 1;
				}
			}
			return 0;
		}
		
		*/

		char strE[10] = "abc";
		char strF[10] = "abc";
		char strG[10] = "abb";

		int lenB = strcmp(strE, strF);
		int lenC = strcmp(strE, strG);

		// 접속 -> ID + PW
		cout << lenB << endl;
		cout << lenC << endl;

		cout << '\n';

		/*
		3. strcpy(문자열, 문자열): 문자열 복사

		EX)
		void strcpy(char* str1, char* str2)
		{

		}
		*/

		char strH[10] = "ABCDEFG";
		char strI[10] = "HIJK";

		cout << strH << endl;

		strcpy(strH, strI);
		// 배열의 크기가 둘이 같으면 문제가 없는데
		// 한쪽이 크거나, 작거나 하면 문제가 생긴다.
		// 한쪽 배열은 크기가 4인데 다른 한쪽은 크기가 10이어서 4 이상의 인덱스 값을
		// 못 받기 때문

		cout << strH << endl;

		cout << '\n';

		/*
		4. strcat(문자열, 문자열): 문자열 연결
		*/

		char strJ[100] = "오늘 과제는 ";
		char strK[100] = "없으면 좋겠지?";

		//cout << strJ << endl;

		//strcat(strJ, strK);

		// strncat: 유니코드냐, 싱글이냐, 멀티냐 선택할 수 있는 선택형
		// strcat_s: 문자 오버플로우를 방지할 수 있다.
		//	ㄴ strcat_s(strJ, strK, bufferSize);
		//		ㄴ 버퍼가 오버가 되더라도, 데이터를 손실 시키고 넘어간다, 터뜨리지 않고 넘어감.
		//	ㄴ '오늘 과제는 없으면' 하고 짤리겠지만(원하는 문자열은 안 나오겠지만), 오류를 방지해줘서 프로그램을 살린다.

		cout << strJ << endl;

		cout << endl;
		cout << '\n';
		//차이점:
		// 출력버퍼를 확인하냐, 확인을 안 하냐

		// 5. strtok(): 문자열 자르기
		// ㄴ 4대 문자열은 아니지만 파일 입출력에 많이 쓰이는 놈
		// ㄴ 자를 조건 (EX: _ / \ 등등 ... -> ,는 웬만하면 사용 금지)

		char strL[10] = "ABCD EFGH";

		//strtok(strL, " ");

		cout << strL << endl;

		char strM[100] = "이곳에 문자를";
		/*const*/const char* strN = "이렇게도 사용 가능";
		string strZ = "이게 된다고?";
#endif

	}
}

/*
과제1. 주민번호 생성기

- 시작하면 원하는 생년을 입력 받는다. (4자리, 2자리)
	ㄴ 1980 / 80 

- 월과 일을 입력 (2자리, 1자리)
	ㄴ EX: 06 / 6

- 예외처리: 31일이 있는 달과 30일 까지만 있는 달, 2월도 처리를 해올 것

- 성별 선택
ㄴ 남자는 1 또는 3 / 여자는 2 또는 4
ㄴ 만약 다른 값을 입력하면 성별을 랜덤하게 설정한다.

- 그리고 마지막 6자리는 랜덤으로 출력
ㄴ 단 0이 오면 안 된다. (0이 하나도 들어가면 안 된다)

4대 문자열을 안 쓰는 방향으로 코드를 짠다.


과제2. 로또 당첨기

- 당첨 번호 6개 + 보너스 번호 1개

- 6개 입력

- 1등: 당첨 번호 6개와 내가 입력한 6개의 숫자가 같을 때

- 2등: 당첨 번호 5개 + 보너스번호 1개와 내가 입력한 6개 숫자가 일치할 때

- 3등: 당첨 번호 5개와 내가 입력한 5개의 숫자가 같을 때				

- 4등: 당첨번호 4개와 내가 입력한 4개의 숫자가 같을 때

- 5등: 당첨번호 3개와 내가 입력한 3개의 숫자가 같을 때


한줄 조사. 사용자 정의 자료형

- 노트에 적어온다.

- 비유할 것 생각해 온다.

클래스는 딮하게 갈 필요 없다.

*/