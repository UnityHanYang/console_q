#include "Example_06_A.h"

#define EXAMPLE_TYPE_PRINT  1

#define ARRAY_TYPE_SIMPLE  1
#define ARRAY_TYPE_DIMENSION  2

// ���
#define EXAMPLE_TYPE  EXAMPLE_TYPE_PRINT
#define ARRAY_TYPE  ARRAY_TYPE_DIMENSION

namespace EXAMPLE_1
{
#define ARRAY_SIZE     5
	void Example()
	{
#if EXAMPLE_TYPE == EXAMPLE_TYPE_PRINT
		cout << "��� �׽�Ʈ" << endl;

		cout << '\n';

		// �Ϲ����� ���
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

		// 1����
		int num[6];

		// �ʷϻ� �� -> �ʱ�ȭ -> ���� ���ų�?
		cout << num[0] << endl; // ������ ���� ���
		cout << num[1] << endl; // ������ ���� ���
		cout << num[2] << endl; // ������ ���� ���
		cout << num[3] << endl; // ������ ���� ���
		cout << num[4] << endl; // ������ ���� ���
		cout << num[5] << endl; // ������ ���� ���

		cout << '\n';

		// �ݺ��� -> for�� -> �ݺ� Ƚ��

		// �迭 ���� ����� ���ÿ� �ʱ�ȭ�� �����ϴ�.
		int anNums[6] = { 0, 1, 2, 3, 4, 5 };
		/*int anNums[6] = {};
		int anNums[6] = { 0, };*/

		// �� ����� ���� + ���� -> �ҹ��
		// �� ����� ����ϸ� ���� �����÷ο찡 �߻��Ѵ�.
		// ���ͷ� 6�� �״�� ����ϴ� ���� �����ϴ�.
		// �� ���ǽ��� �迭�� ũ��� �ٲ�� �Ѵ�.
		for (int i = 0; i < 6; i++)
		{
			cout << "�迭�� ��: " << anNums[i] << endl;
		}

		cout << '\n';

		// 1����
#if ARRAY_TYPE == ARRAY_TYPE_SIMPLE
		/*
		- �迭�� ũ�⸦ ������ ���𰡸� �ؾ��� �� sizeof �����ڸ� ���÷���.
		�� sizeof �����ڸ� �迭�� Ȱ���� ��� �迭 ��ü�� ����Ʈ ũ�⸦
		����ϴ� ���� �����ϱ� ����

		EX)
		int anValues[5];

		sizeof(anValues);
		�� 20
		sizeof(ansValues[0]);
		�� 4
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
			// ���� ������
			printf("%d%c ", anValuesA[i], (i <= sizeA - 2) ? ',' : ' ');
		}

		// 2����
#else
		/*
		�� C/C++ ����� ������ �迭 ����

		C#���� �������� ���� ����: ��� �Ӹ��� �������� �����ϱ⿡ �������

		int anMatrix[5][5];
		int anDimensionMatrix[5][5][5];
		// int anDimensionMatrix[5][523][513][203]; .. �̷������� �Ǹ� ����ϱⰡ ������ �����ϴ�

		sizeof(anMatrix); -> 5 * (�迭 ��� ũ��: 5 * 4) => 100
		sizeof(anDimensionMatrix); 5 * (5 * (�迭 ��� ũ��: 5 * 4)) => 500
		
		*/

		int anMatrix[ARRAY_SIZE][ARRAY_SIZE] = { 0 };

		const int nRow = sizeof(anMatrix) / sizeof(anMatrix[0]);
		const int nCol = sizeof(anMatrix[0]) / sizeof(anMatrix[0][0]);
		// ������ �þ ���� �ݺ����� �þ��.
		// �� x / y

#endif // End of ARRAY_TYPE_SIMPLE

#else

#endif // End Of EXAMPLE_TYPE_PRINT
	}
}