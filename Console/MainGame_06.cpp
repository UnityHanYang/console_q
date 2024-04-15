#include "MainGame_06.h"
#include <iostream>
#include <vector>
// �����ڰ� ȣ��� �� ��������� �ֳ� ����
// ���� ���� ����


MainGame_06::MainGame_06()
{
	/*
	�� STL ���Ϳ��� ���� ����ϴ� ���

	push_back()
	�� ������ �ڿ������� ���� �߰�

	����ϰ� �ִ� ���� ����ϰ� �ִ� �޸𸮿��� �ִ´�.
	�� �ӽ� �޸𸮿� ����ϸ� �� ��.

	�� ���� ���� ��

	emplace_back()
	�� ������ �ڿ������� ���� �߰�

	�޸𸮸� ì����� push
	�ӵ��� ì����� emplace
	push_back, emplace_back�� �����ư��鼭 ����Ѵ�.

	pop_back() (front�� ������->pop_front) ������ front�� �Ἥ ���� �����͸� �����ϸ� �������� �뷮�� �̵��� �ϹǷ� ���� ������� �� ��
	�� ������ �ڿ������� ���� ����
	�� �� ��ü�� �������� �ʰ� �ε����� ������Ų��.
	�� �ε����� ����� ���� �ӽ� �޸𸮷� �ٲ��.

	size()
	�� ������ ����
	�� ���Ͷ�� �����̳� �ȿ� ��� �ε��� ���� (�ѷ�)

	resize()
	�� �޸� �翬�� (�� ����)

	clear()
	�� ���� ��� ����
	�� ���������� �ٲ� ��, ���� �ٲ� �� ���

	begine()
	�� ������ 0��° �ε���

	end()
	�� ������ ������ �ε���

	insert()
	�� �� ����
	�� ���� ������ ������ ������� ������ ����Ƿ� �� ����ؾ��Ѵ�.

	erase()
	�� �ε��� ����
	*/

	int num[2];
	num[0] = 1;
	num[1] = 2;

	cout << num[0] << endl;
	cout << num[1] << endl;

	LinePrint();

	_vNumber.push_back(1);
	_vNumber.push_back(2);

	cout << _vNumber[0] << endl;
	cout << _vNumber[1] << endl;

	LinePrint();

	_vNumber.pop_back();
	_vNumber.pop_back();

	for (int i = 0; i < 10; i++)
	{
		_vNumber.push_back(i + 1);
		cout << _vNumber[i] << endl;
	}

	LinePrint();

	_vNumber.push_back(1);

	_vNumber.pop_back();

	_vNumber.clear();

	_vNumber.insert(_vNumber.begin() + 5, 100);
	//��۸� ������
	// Clear�� ������ ������ �õ��Ϸ��� �߱� ������ ������.

	_vNumber.push_back(1);
	_vNumber.push_back(2);

	_vNumber.insert(_vNumber.begin() + 1, 100);


	// ������: �� -> ���� ����
	for (int i = 0; i < _vNumber.size(); ++i)
	{
		cout << _vNumber[i] << endl;
	}

	// ������ �ƴ� ������ ����ؾ��ϴ� ����
	// �޸𸮰� �ϼ��� �� ���ִ� ��찡 �ִ�(ȣ�� ���� ������)
	// Ŭ�������� ��� ���谡 ������ �� �̷� ������ �߻��Ѵ�.
	// �̸� �������� Ȯ���ϰڴ�.

	for (_viNumber = _vNumber.begin(); _viNumber != _vNumber.end(); ++_viNumber)
	{
		cout << *_viNumber << endl; // �ּҰ��� ã�ư����ϴϱ� ������*�� ���
	}
	LinePrint();

	PrintVector();
}


/*
���� ���
C# / Unity / DB / ? C++ / STL
*/
void MainGame_06::PrintVector()
{
	LinePrint();
	LinePrint();
	LinePrint();

	cout << "Ǫ�ù�" << endl;

	_vNumber.push_back(1);
	_vNumber.push_back(2);
	_vNumber.push_back(3);
	_vNumber.push_back(4);
	_vNumber.push_back(5);

	cout << _vNumber[0] << endl;
	cout << _vNumber[1] << endl;
	cout << _vNumber[2] << endl;
	cout << _vNumber[3] << endl;
	cout << _vNumber[4] << endl;

	LinePrint();


	// �⺻������
	cout << "����" << endl;

	_vNumber.insert(_vNumber.begin() + 2, 10);

	cout << _vNumber[0] << endl;
	cout << _vNumber[1] << endl;
	cout << _vNumber[2] << endl;
	cout << _vNumber[3] << endl;
	cout << _vNumber[4] << endl;

	LinePrint();

	// 3.
	cout << "�˹�" << endl;
	_vNumber.pop_back();
	// ���ӿ��� �˹��� �ƴ� erase�� ������ �����ؼ� ����� ����� ���� ����.

	// �� -> �ֻ�
	// �ֻ��� �� �ϰ� ���� ���� ����: 1. ������, 2. �޸� ��뷮�� �� ����(for������ �ϳ��� ��ü�� ����ϴ� �Ŷ� �ΰ��� ��ü�� ���Ǵ°Ŷ�)
	for (int i = 0; i < _vNumber.size(); i++)
	{
		cout << _vNumber[i] << endl;
	}

	/*
	�� for each��

	- �־��� ������ ��� �����͸� �ϳ��� ��ȸ�ϸ� �����ϴ� ��쿡 ����� �� �ִ�.
	�� �⺻������ �����̳��� �ݺ��� ����
	�� ��, for each�� vector�� �����̳� ��Ҵ� �ƴϸ� �˰��� �Լ� ����� ���̴�.
	
	- ��� �����̳ʴ� �ݺ��ڸ� ������ ������ �̴� for each�� ����ؼ� �����̳��� ���� ������ �����ϴٴ� ���

	-for each�� ������ ������ ����Ʈ �����ͷ� ������� �����̱� ����
	�� �̴� ��ȸ�ϸ鼭 ���ϴ� ��ҿ� ������ �ϱⰡ �����ϴٴ� ���


	�� auto

	- �����Ϸ��� �����Ͻ� �ڵ����� �ڷ����� �߷��Ѵ�.

	- ��� / ���÷� �ڷ����� �߷��� �� �ִ°� �ƴ� �����Ϸ��� �ڷ����� �߷��ϱ� ���� ������� ������ �־����� �Ѵ�.

	- C/C++�� Ÿ�Կ� �ſ� ������ ����̱� ������ ������ ������ �� �ڷ����� ����ؾ� �Ѵ�.
	�� ��, auto Ű���带 ����ϸ� ������ �ڷ����� ������� �ʴ��� �����Ϸ��� ���ؼ� �ڵ������� ������ �ڷ�����
	�����ȴ�.

	�� range based for

	- VS 2015���� �����ϴ� ����

	�����̳ʸ� ��ȸ�� �� �ִ� �˰��� �Լ�
	for each (auto p in _vNumber) �ð����⵵�� �ΰ��� �Լ�
	{
		cout << p << endl;
	}

	for (auto components : _vNumber)
	{

	}

	*/

	// 4. erase
	// (begin() + index)
	// erase(being() + 5, begin() + e)

	cout << "erase" << endl;

	_vNumber.erase(_vNumber.begin() + 1);
	_vNumber.erase(_vNumber.begin(), _vNumber.begin() + 3);

	LinePrint();


	// 5. ����ȸ
	_vriNumber = _vNumber.rbegin();
	for (_vriNumber; _vriNumber != _vNumber.rend(); ++_vriNumber) // �ݺ��ڴ� ����Ʈ �����ͷ� �̷�����ֱ� ������ �������� ���� �� ��
	{
		cout << *_vriNumber; // �ּҰ��� ã�ư����ϴϱ� ������*�� ���
	}

	//�ڡڡ� ��� �ڡڡ�
	// 6. �ε��� ����

	cout << _vNumber.at(4) << endl;
	// �� ���� ������ �Ѵ�. => �ӵ��� �������� �����ϴ�.
	// 4��° �ε����� ���� ���� 3��° �ε����� Ȯ���ؼ� ���� ������ 4��° �ε����� �ִٰ� Ȯ���ϰ� 4��° �ε����� ���� ��ȯ
	// 3��° �ε����� ���� ��� 4��° �ε����� ������ Null�� �����Ѵ�.
	cout << _vNumber[4] << endl;
	// �� ���� ������ ���� �ʴ´�. => �������� ���� ����


	// 7. front
	cout << "����Ʈ" << endl; // �ٸ� Ŭ�������� vector�� begin�� ������ �� ��� ��
	cout << _vNumber.front() << endl;

	// 8. back
	cout << "��" << endl;
	cout << _vNumber.back() << endl;

	// 9. size
	cout << "������" << endl;
	cout << _vNumber.size() << endl;

	// 10. clear
	cout << "Ŭ����" << endl;
	_vNumber.clear();

	// 11. empty
	// �� ��� ������ T / �ϳ� �̻� ������ F

	// T
	if (_vNumber.empty())
	{
		cout << "���� ����°�?" << endl;

		return;
	}


	cout << _vNumber.at(2) << endl;
	// Null�� �ƴ� ���󰣴� -> Clear�� ��� ���� ���� ���ױ� ������

	LinePrint();
	
}

void MainGame_06::SampleVector(std::vector<int> valueList)
{
	for (int i = 0; i < 5; i++)
	{
		valueList.push_back(i);
	}

	for (int i = 0; i < valueList.size(); i++)
	{
		std::cout << valueList[i] << std::endl;
	}
}

void MainGame_06::SampleSTVector(std::vector<STData> valueList)
{
}

void MainGame_06::PracticeVector(void)
{
}

MainGame_06::~MainGame_06()
{
}

