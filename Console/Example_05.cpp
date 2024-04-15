#include <iostream>

// ���� �� ����
// STL String�� �޸� ����̳� ���ڿ��� �ٷ� �� �ִ� ��ɰ� �Լ����� �����ϴ� ���
// �� �����ڵ� ����� ���̶�� wchar.h
#include <string> //���θ� ���� ĳ����(char)�� ����������, string�� �������� ����.
// ȸ�翡���� string�� �ƴ� char�� �����.
#include <wchar.h>
//���ڿ� ���ڿ� -> ���ڵ�, �޸� ������ �׽�Ʈ�ϱ� ���� ����

using namespace std;

#pragma region �Լ�
/*

�� �Լ�

- ����� ���Ǳ�
�� (����� ���Ǳ�� ������� �����ϴ� ���)

 �Լ��� ����ϴ� ����

 - �ߺ����� ����
 - ���� ������
 - ������ ���
 - ����

  �Լ��� �����ϴ� ���
  ��ȯ �ڷ��� �Լ� �̸�(�Է� �ڷ���(���� / �μ� / �Ķ����)) // (C/C++: ����, �μ�), (C#: �Ķ����, �Ű�����)
  {   <- �Լ� ����
	�Լ� ����
  }   <- �Լ� ��

  
  ����

- �Լ� �̸�: �� �״�� �Լ��� �̸��̸� �Լ��� ����(ȣ��)�� �� ����Ѵ�.
- ����(�μ�): �Լ��� �ؾ� �� ���� ���λ����� �����ϸ� �Լ��� �۾��Ÿ���� �� �� �ִ�.
- ��ȯ �ڷ���: �Լ��� �����ϴ� ���� ������ ���̸� �Լ��� �۾� ������ �� �� �ִ�.
- �Լ� ����: {} �ȿ� �Լ��� ���� �ڵ尡 �����Ѵ�.

�� �Լ��� �̸��� "�⺻��"���� �����ؾ� �Ѵ�.
�� ������ �̸��� �Լ��� N�� �̻� �����ϴ� ���� �Ұ��� �ϴ�.

�� void�� �Լ���? 

- ���� �� ���� ���� �Լ�

- �Լ��� �Է� �Ǵ� ����� ���� ��� void Ű���带 ���ؼ� �ش� �Լ��� ��/����� ���� ��� ����
����Ѵ�.

C/C++���� �Լ��� ����, �Ʒ��� 2���� ����� ����: ���� �Լ��� �����̰� �Ʒ��� �Լ��� �����̱� ������(C/C++�� 2�� �����ؾ��Ѵ�)
�Լ��� ���� �ϸ� �ʷϻ� ���� �߸鼭 �Լ��� �����ߴµ� �� �� ���Ĵ� ������ ���ϸ鼭 �����ϰ�����

�� �츮�� �˰� �𸣰� ����� �Լ���
�� rand(): �������� �̴� �Լ�

�� �Լ� ������ �⺻������ ���� �Լ� ���ʿ� ����� �Ѵ�.
   �� �Լ��� ����� ���ÿ� ������ �ϸ� ȸ�翡�� �� ���� ��.

�� C/C++ ����� �Լ� ������ �ʿ��� ����

- C/C++ ����� �����Ϸ��� �⺻������ ������ ������ ������ �Ʒ��� �ؼ��Ѵ�.

- �̶� �����Ϸ��� �̹� ����ģ ���ο��� ���ԵǾ� ���� ���� �Լ��� ȣ���� ��� �����Ϸ���
�̿� ���� ������ ���� �𸣱� ������ ������ �߻��Ѵ�.

- �׷��� ������ �Լ��� ������ ���ؼ� �����Ϸ����� �ش� �Լ��� �츮�� ���� ������Ʈ ���� ��򰡿�


- ��, �Լ��� ����� ���ǰ� �ݵ�� ������ ���Ͽ� �������� �ʾƵ� �ȴٴ� ���� �ǹ��Ѵ�.

- �Լ��� ������ �ߺ����� ����ϴ� ���� ���������� �Լ��� ���Ǵ� �ݵ�� �����ؾ� �Ѵ�.

C# �Լ����� ī����� �ƴ� �Ľ�Į������ �ۼ��� ��

*/
#pragma endregion

// �Լ� ����
void OutputValueA();

// int�� ������ �ް� ������ ��ȯ�� ���� �ʴ´�. (void)
void OutputValueB(int numA);
void OutputValueC(int numA, int numB);

// ���ڿ�
void OutputString(string str);
string GetStringFunc(string strA, string strB);
int CheckingString(string strA, string strB);

int GetAddValue(int numA, int numB);
int GetSubValue(int numA, int numB);
int GetMultipleValue(int numA, int numB);
float GetDivideValue(int numA, int numB);

// �Լ��� �̸��� �⺻������ �ߺ��� �� �ȴ�.
// �ߺ��� �Լ��� ���� �� ������ ȣ���� �� �ִ� ����� ������?

namespace NS_FUNC_A
{
	void Sample()
	{
		cout << "���� �ٷ� Sample 1" << endl;
	}
}

namespace NS_FUNC_B
{
	void Sample()
	{
		cout << "���� �ٷ� Sample 2" << endl;
	}
}

void main() 
{
	// ���� ��ǻ���ε�...
	// �� ���߾�.
	/*
	 Sample();
	 Sample();
	// �̷��� ȣ���ϸ� ��ȣ���� �ȴ�
	 */

	NS_FUNC_A::Sample();

	NS_FUNC_B::Sample();
	// �̷� �� namespace�� �̿��ؼ� �ٸ� ������ ������� �� ȣ���Ѵ�.

	// ?
	OutputValueA();
	// 5
	OutputValueB(5);
	// 1, 9 / 19
	OutputValueC(1, 9);
	// ������ �ʹ� ����. ^^
	OutputString("������ �ʹ� ����. ^^");

	int nResultA = GetAddValue(18, 25);
	OutputValueB(nResultA);

	string sResultB = GetStringFunc("��ſ�", "���α׷���");
	OutputString(sResultB);

	nResultA = CheckingString("�ʹ� ��մ�.", "�ʹ� ��մ�.");
	OutputValueB(nResultA);

	// �Լ���� ���� ... C? / C++?
	// C���� ���� ��

	int numL = 0;
	int numR = 0;

	cout << "���� (2��) �Է�: " << endl;
	cin >> numL >> numR;

	printf("%d + %d = %d\n", numL, numR, GetAddValue(numL, numR));
	printf("%d - %d = %d\n", numL, numR, GetSubValue(numL, numR));
	printf("%d * %d = %d\n", numL, numR, GetMultipleValue(numL, numR));
	printf("%d / %d = %f\n", numL, numR, GetDivideValue(numL, numR));

	cout << '\n';

	/*
	- ��ó�� �Լ��� �پ��� ������ ���� �� �ִ�.

	  C/C++ ����� �Լ� ����

	- �Է� O, ��� O
	- �Է� O, ��� X
	- �Է� X, ��� O
	- �Է� X, ��� X

	void ShowINfo(int NAge, char* psName);
	�� �Է� O, ��� X
	int getRandomValue(void);
	�� �Է� X, ��� O
	void SomeFunction(void);
	�� �Է� X, ��� X

	*/
}

/* 
void main() {

}
 �̷������� �߰�ȣ�� �鿩���� �ؼ� ���� �������� �� ����, ȸ�翡�� �� ���� ����. -> �Ϸ� ���� ��ġ�°� ����, main�Լ��� �߰�ȣó�� ������ ����
*/

void OutputValueA()
{
	cout << "���� �ٷ� �Լ���!" << endl;
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
	// ����Ű
	// ���� / ���ڿ��� ���ؼ��� -> ��Ģ���� x
	// string������ ù ������ �ּҸ� ����Ű�� �ִ�, �ڿ� ���ڴ� �迭 �������� �Ǿ� �ִ�.

	/*
	�Լ��� return Ű���带 ���ؼ� �Լ��� ���� �Ǵ� ��ȯ�ϴ� ���� ����
	�Լ��� ������� �Է°��� �޸� �ϳ��� ������� ��ȯ�� �� �ִ�.
	�� ����(�����̱� ������ �������� ������� �� �� �ִ�) -> C++�� ����
	// �Լ��� ��ȯ���� ���� ���� �ӵ��鿡���� �������� �޸𸮵� ���� ���� �Ѵ�.
	*/

	// C��� 4�� + 2�� = 6�� ���ڿ�
	// C++ String
	// C# String
	return strA.append(strB);
}

int CheckingString(string strA, string strB)
{
	// ������ 1 / �ٸ��� 0 ��ȯ
	return strA == strB;
}

// ? -> ��ü����
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
	return numA / (float)numB; //���ڸ� float numB ��� ���ϰ� int�� ���༭ ����ȯ ������ ������ �ӵ��� ������ ����
}

/*

����1. ���������� ����

- if���� �̿��� �����.
	�� switch ������� �� ��

- ������ ���� Ƚ���� �� 5��
	�� ���Ĵ� ���� ����

- �ʼ�: ġƮ(��밡 �� �� ����� ���� ���ϴ� ��)
	�� EX) ��ǻ�Ͱ� ������ ���ٰ� �ϸ� ����ڴ� �װ� ���� ������ ���� �̱��, ���� ���� ���� �����.


����2. ����, �� �����ϵ���

- ���ݱ��� ��� ������� �����Ѵ�.

- �׸��� ��� ������ �ߴ��� ����ȭ ���ѿ´�.
	�� �������� ��� ������ ���� ������ ���� �����ϴ� ��


���� ����1. ���� / ���ڿ��� ���� ����

- ������ ������ �ƴ����� �츮�� ���� ������ �� ������ ������.

�� �۳� ��ݱ� ������ ����Ʈ ���� ���� ��

<���� ����>
C++ �� Ǯ��� �ϰ� ��ĭ�� �˸°� ä�� �����ÿ�.
C ��Ÿ�� ���̺귯��(strlen, strcmp, strcpym, strcat)�� STL�� ��Ÿ ���̺귯�� �Լ��� ����ϸ� �� �˴ϴ�.
Ư�� String�� ��� �� �ٷ� Ż�� ó���Ǵ� ���� �ٶ��ϴ�.
�׸��� �ش� ����� ���� �� �׷��� �ۼ��� �ߴ��� ������ �ǰ��� �ּ����� �����Ͻÿ�.

����. �־��� ���ڿ��� �ܾ� ������ ������ ������ ����Ͻÿ�.
<��>
�Է� ��: "Hello World this is SmileGate"
��ȯ ��: "SmileGate is this World Hello"

<����>
�Է� ���ڿ��� �� �ڿ� ������ ���ٰ� �����մϴ�.
��� �ܾ�� ���� �� ĭ���� ���еȴٰ� �����մϴ�.

void ReverseWorld(char* output, int outputArraySize, const char* input)
{
	// �̰��� ä�� �����ÿ�.
}

���������� ������ �ۼ��� ������ ���� �ð� ���⵵�� ����ϴ� ������ ������ �Լ��� �����ϰ�
���۹�İ� �� �׷��� �ۼ��ߴ��� ����Ͻÿ�.
*/
