#include "Example_06_A.h"

#define EXAMPLE_TYPE_PRINT  1

#define ARRAY_TYPE_SIMPLE  1
#define ARRAY_TYPE_DIMENSION  2

// 제어문
#define EXAMPLE_TYPE  EXAMPLE_TYPE_PRINT
#define ARRAY_TYPE  ARRAY_TYPE_DIMENSION

namespace EXAMPLE_1
{
#define ARRAY_SIZE     5
	void Example()
	{
#if EXAMPLE_TYPE == EXAMPLE_TYPE_PRINT
		cout << "출력 테스트" << endl;

		cout << '\n';

		// 일반적인 방법
		int numA = 0;
		int numB = 1;
		int numC = 2;
		int numD = 3;
		int numE = 4;
		int numF = 5;

		cout << numA << endl;
		cout << numB << endl;
		cout << numC << endl;
		cout << numD << endl;
		cout << numE << endl;
		cout << numF << endl;

		cout << '\n';

		// 1차원
		int num[6];

		// 초록색 줄 -> 초기화 -> 정말 쓸거냐?
		cout << num[0] << endl; // 쓰레기 값이 출력
		cout << num[1] << endl; // 쓰레기 값이 출력
		cout << num[2] << endl; // 쓰레기 값이 출력
		cout << num[3] << endl; // 쓰레기 값이 출력
		cout << num[4] << endl; // 쓰레기 값이 출력
		cout << num[5] << endl; // 쓰레기 값이 출력

		cout << '\n';

		// 반복문 -> for문 -> 반복 횟수

		// 배열 또한 선언과 동시에 초기화가 가능하다.
		int anNums[6] = { 0, 1, 2, 3, 4, 5 };
		/*int anNums[6] = {};
		int anNums[6] = { 0, };*/

		// 이 방식은 포폴 + 현업 -> 뚝배기
		// 이 방식을 사용하면 버퍼 오버플로우가 발생한다.
		// 리터럴 6을 그대로 사용하는 것이 위험하다.
		// ㄴ 조건식을 배열의 크기로 바꿔야 한다.
		for (int i = 0; i < 6; i++)
		{
			cout << "배열의 값: " << anNums[i] << endl;
		}

		cout << '\n';

		// 1차원
#if ARRAY_TYPE == ARRAY_TYPE_SIMPLE
		/*
		- 배열의 크기를 가지고 무언가를 해야할 때 sizeof 연산자를 떠올려라.
		ㄴ sizeof 연산자를 배열에 활용할 경우 배열 전체의 바이트 크기를
		계산하는 것이 가능하기 때문

		EX)
		int anValues[5];

		sizeof(anValues);
		ㄴ 20
		sizeof(ansValues[0]);
		ㄴ 4
		*/

		int anValuesA[ARRAY_SIZE] =
		{
			1, 2, 3, 4, 5
		};

		int anValuesB[] =
		{
			1, 2, 3, 4, 5
		};

		const int sizeA = sizeof(anValuesA) / sizeof(anValuesA[0]);
		const int sizeB = sizeof(anValuesB) / sizeof(anValuesB[0]);

		printf("%d, %d, %d, %d, %d\n", anValuesA[0],
			anValuesA[1], anValuesA[2], anValuesA[3], anValuesA[4]);

		cout << '\n';

		for (int i = 0; i < sizeA; i++)
		{
			// 삼항 연산자
			printf("%d%c ", anValuesA[i], (i <= sizeA - 2) ? ',' : ' ');
		}

		// 2차원
#else
		/*
		▶ C/C++ 언어의 다차원 배열 선언

		C#에서 다차원이 빠진 이유: 사람 머리론 다차원을 연산하기에 어려워서

		int anMatrix[5][5];
		int anDimensionMatrix[5][5][5];
		// int anDimensionMatrix[5][523][513][203]; .. 이런식으로 되면 계산하기가 굉장히 복잡하다

		sizeof(anMatrix); -> 5 * (배열 요소 크기: 5 * 4) => 100
		sizeof(anDimensionMatrix); 5 * (5 * (배열 요소 크기: 5 * 4)) => 500
		
		*/

		int anMatrix[ARRAY_SIZE][ARRAY_SIZE] = { 0 };

		const int nRow = sizeof(anMatrix) / sizeof(anMatrix[0]);
		const int nCol = sizeof(anMatrix[0]) / sizeof(anMatrix[0][0]);
		// 차원이 늘어날 수록 반복문이 늘어난다.
		// ㄴ x / y

#endif // End of ARRAY_TYPE_SIMPLE

#else

#endif // End Of EXAMPLE_TYPE_PRINT
	}
}