#include "Example_07.h"

#define EXAMPLE_TYPE_PRINT    1

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

// ���� ������
#define EXAMPLE_TYPE_TERNARY_OPERATOR  2
// ���ڿ�
#define EXAMPLE_TYPE_STRING 3

#define EXAMPLE_TYPE EXAMPLE_TYPE_STRING

namespace EXAMPLE_2
{
	void Example()
	{
#if EXAMPLE_TYPE == EXAMPLE_TYPE_PRINT
		cout << "�ǺҸ� ������ �Ϸ��� �̰�����" << endl;

#elif EXAMPLE_TYPE == EXAMPLE_TYPE_TERNARY_OPERATOR
		cout << "���� ������" << endl;

		int numA, numB;
		cout << "���� �Է�: ";
		cin >> numA;

		numB = (numA > 0) ? numA : numA * (-1);

		cout << "�Է��� ���� ��: " << numB << endl;

		printf("\n");

		int numberA;
		int numberB = 100;
		int result;

		cout << "���� �Է�: ";
		cin >> numberA;

		result = numberA < 10 ? numberA : numberB;

		cout << "���� ������ �����: " << result << endl;
#else

		char moonja = 'A';
		int numA = 20;
		float numB = 3.0f;
		bool numC = true;

		cout << moonja << endl;

		cout << sizeof(moonja) << " : ����Ʈ" << endl;
		cout << sizeof(numA) << " : ����Ʈ" << endl;
		cout << sizeof(numB) << " : ����Ʈ" << endl;
		cout << sizeof(numC) << " : ����Ʈ" << endl;

		printf("\n");

		/*
		C/C++�� Ÿ�Կ� ������ ���
			�� �̴� ������ �����ϱ� �����̴�.

		- �⺻������ Ÿ�� ������ ������ �� �ִ°� NULL�̴�.

		�� ���ڴ� �⺻������ NULL���ڰ� �߰� �� �ȴ�.

		  NULL(���� / ���ڿ��� ���� ������, �迭, NULL�� ������ų �� �ִ�)

		- <iostream>�� ���ǵǾ� �ִ�.

		- NULL�� 0 �ּҸ� �ǹ��ϸ� �׷��⿡ ������ ������ �ʱ�ȭ �� �� ����� �� �ִ�.

		char* p = NULL;  ==  char* p = 0; // ���� �ǹ�

		int n = NULL;   !=  int n = 0; // �ٸ� �ǹ�
		
		�� ���ڴ� p������ �ּҰ��� 0�� �ִ� ���̰� ���ڴ� ���� 0�� n�� �ִ´ٴ� �ǹ�
		*/

		/*
		C / C++ ����� ���ڿ� ǥ�� ���
		�� " " ������ ���ؼ� ���ڿ��� ǥ���ϴ� ���� �����ϸ� �� �� char�� �迭�� �̿��Ѵ�.
		�� ���� ���ڿ� ����� ���� �ʱ�ȭ�� �� ��� �� ���ڸ� ��������� �������� �ʾƵ� �ȴ�.

		*/

		char strA = 'A';
		char strB[4] = "abc"; // ���� �ڵ����� \0�� ���� EX) char strB[4] = "abc\0";
		// �� 1Byte�� �� ����.
		// �� �� ���ڸ� �������� �����ϱ� ����

		char strC[20] = "i like game.!";
		// �迭�� �ڷᱸ����. -> �����ڷᱸ�� - > �����ڷᱸ���� �̱� ������
		//find�� �� �Ѵ�. -> ���� ������ �� �ڿ� �� �ִ����� Ȯ���Ѵ�.

		cout << strC << endl;

		strC[10] = '\0';
		// �迭�� Ư���� �� ��(�ε��� 0)�� �������� �����Ƿ� .!�� �����°� �ƴϰ�
		// i like ���� �տ��� ���´�.

		cout << strC << endl;
		//char strC[20] = "Programming is fun";

		//strC[2] = '\0';
		
		//cout << strC << endl;
		
		/*
		�� 4�� ���ڿ� + @

		- �⺻������ ���ڿ� ���� �Լ�
		�� ���ڿ� ���ڿ��� �ٷ� �� �Ϲ������� ����� �� �ִ� ��ɵ��� ����

		1. strlen
		�� ���ڿ��� ���̸� ����ϴ� ���

		2. strcmp
		�� ���ڿ��� ���ϴ� ���

		3. strcpy
		�� ���ڿ��� �����ϴ� ���

		4. strcat
		�� ���ڿ��� ��ġ�� ���
		*/

		cout << "4�� ���ڿ�" << endl;

		cout << '\n';

		/*
		1. strlen(): ���ڿ� ����
		�� EX) strlen("���ڿ�");

		int strlen()
		{
			return ����;
		}
		*/

		char strD[100] = "abcdef"; // ���� ���� ��ǻ�Ϳ��� �Ѱ��ش�. -> �����÷ο찡 �߻����� �ʾ� ���� ���� ����.
		// ���ڿ��� ���� �迭�� ����, �����Ͱ� ����.
		// �� ���۰� �ϳ��� ������ �Ǹ� ������
		int lenA = strlen(strD);
		cout << strlen(strD) << endl;
		cout << "���ڿ��� ����: " << lenA << endl;

		cout << '\n';

		/*
		�� �̰� ����� ȸ�簡 �������� ������
		� ��쿡 0, -1, 1�� ��ȯ�ϴ��� ��
		2. strcmp(���ڿ�, ���ڿ�): ���ڿ� ��

		EX)
		int strcmp(char* str1, char* str2)
		{
			if(�� ���ڰ� ������?)
			{
				return 0;
			}
			else
			{
				if(�� ���ڰ� ū��?)
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

		// ���� -> ID + PW
		cout << lenB << endl;
		cout << lenC << endl;

		cout << '\n';

		/*
		3. strcpy(���ڿ�, ���ڿ�): ���ڿ� ����

		EX)
		void strcpy(char* str1, char* str2)
		{

		}
		*/

		char strH[10] = "ABCDEFG";
		char strI[10] = "HIJK";

		cout << strH << endl;

		strcpy(strH, strI);
		// �迭�� ũ�Ⱑ ���� ������ ������ ���µ�
		// ������ ũ�ų�, �۰ų� �ϸ� ������ �����.
		// ���� �迭�� ũ�Ⱑ 4�ε� �ٸ� ������ ũ�Ⱑ 10�̾ 4 �̻��� �ε��� ����
		// �� �ޱ� ����

		cout << strH << endl;

		cout << '\n';

		/*
		4. strcat(���ڿ�, ���ڿ�): ���ڿ� ����
		*/

		char strJ[100] = "���� ������ ";
		char strK[100] = "������ ������?";

		//cout << strJ << endl;

		//strcat(strJ, strK);

		// strncat: �����ڵ��, �̱��̳�, ��Ƽ�� ������ �� �ִ� ������
		// strcat_s: ���� �����÷ο츦 ������ �� �ִ�.
		//	�� strcat_s(strJ, strK, bufferSize);
		//		�� ���۰� ������ �Ǵ���, �����͸� �ս� ��Ű�� �Ѿ��, �Ͷ߸��� �ʰ� �Ѿ.
		//	�� '���� ������ ������' �ϰ� ©��������(���ϴ� ���ڿ��� �� ����������), ������ �������༭ ���α׷��� �츰��.

		cout << strJ << endl;

		cout << endl;
		cout << '\n';
		//������:
		// ��¹��۸� Ȯ���ϳ�, Ȯ���� �� �ϳ�

		// 5. strtok(): ���ڿ� �ڸ���
		// �� 4�� ���ڿ��� �ƴ����� ���� ����¿� ���� ���̴� ��
		// �� �ڸ� ���� (EX: _ / \ ��� ... -> ,�� �����ϸ� ��� ����)

		char strL[10] = "ABCD EFGH";

		//strtok(strL, " ");

		cout << strL << endl;

		char strM[100] = "�̰��� ���ڸ�";
		/*const*/const char* strN = "�̷��Ե� ��� ����";
		string strZ = "�̰� �ȴٰ�?";
#endif

	}
}

/*
����1. �ֹι�ȣ ������

- �����ϸ� ���ϴ� ������ �Է� �޴´�. (4�ڸ�, 2�ڸ�)
	�� 1980 / 80 

- ���� ���� �Է� (2�ڸ�, 1�ڸ�)
	�� EX: 06 / 6

- ����ó��: 31���� �ִ� �ް� 30�� ������ �ִ� ��, 2���� ó���� �ؿ� ��

- ���� ����
�� ���ڴ� 1 �Ǵ� 3 / ���ڴ� 2 �Ǵ� 4
�� ���� �ٸ� ���� �Է��ϸ� ������ �����ϰ� �����Ѵ�.

- �׸��� ������ 6�ڸ��� �������� ���
�� �� 0�� ���� �� �ȴ�. (0�� �ϳ��� ���� �� �ȴ�)

4�� ���ڿ��� �� ���� �������� �ڵ带 §��.


����2. �ζ� ��÷��

- ��÷ ��ȣ 6�� + ���ʽ� ��ȣ 1��

- 6�� �Է�

- 1��: ��÷ ��ȣ 6���� ���� �Է��� 6���� ���ڰ� ���� ��

- 2��: ��÷ ��ȣ 5�� + ���ʽ���ȣ 1���� ���� �Է��� 6�� ���ڰ� ��ġ�� ��

- 3��: ��÷ ��ȣ 5���� ���� �Է��� 5���� ���ڰ� ���� ��				

- 4��: ��÷��ȣ 4���� ���� �Է��� 4���� ���ڰ� ���� ��

- 5��: ��÷��ȣ 3���� ���� �Է��� 3���� ���ڰ� ���� ��


���� ����. ����� ���� �ڷ���

- ��Ʈ�� ����´�.

- ������ �� ������ �´�.

Ŭ������ �K�ϰ� �� �ʿ� ����.

*/