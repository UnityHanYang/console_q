#include "MainGame_03.h"

// ������
MainGame_03::MainGame_03()
{
	_Player = new Player_03;
	_Player->setHp(100);

	cout << "�÷��̾� ���� ü��: " << _Player->getHp() << endl << endl;

	cout << "���� ����(1��), ���� ����(2��)" << endl;

	int input;

	/*while (true)
	{
		cin >> input;

		if (input == 1)
		{
			_Player->setHp(_Player->getHp() + 100);
		}
		else if (input == 2)
		{
			_Player->setHp(_Player->getHp() + 500);
		}
		else
		{
			cout << "���� ��?" << endl;
		}
		cout << endl;
		cout << "���� ���� �� ü��: ";
		cout << _Player->getHp() << endl;
	}*/

	/*
	- �ǽ�

	1. ���� ������ �غ�����
		�� ��Ʈ ������

	2. ��� ���� ����� ������
		�� �ѹ��� ��� ó��

	3. �÷��̾ ü���� 0���Ϸ� �������� ������ ����ó�� �ϵ���

	4. ü�� ��� ���� ����� ������
		�� �������� ü�� ȸ�� (ü�� ȸ�� ����� ���� �� ü���� 7%)
	*/
	_Poison = new Poison_01;
	_Poison->SetPoison(10);
	_Poison->SetDiePoison(200);
	_Player->setHp(100);

	int choice;
	int secC;

	cout << "���� ����(1), ��� ����(2): ";
	cin >> choice;
	while (true)
	{
		if (choice == 1)
		{
			cout << "ü�� ȸ��(1), ���� ����(2): ";
			cin >> secC;

			if (secC == 1)
			{
				int fValue = _Player->getHp() / 7;
				_Poison->SetHealing(fValue);
				_Player->setHp(_Player->getHp() + _Poison->GetHealing());
				cout << "�÷��̾� ���� ü��: " << _Player->getHp();
			}
			else
			{
				_Player->setHp(_Player->getHp() - _Poison->GetPoison());
				cout << "�÷��̾� ���� ü��: " << _Player->getHp();
			}

			if (_Player->getHp() <= 0)
			{
				break;
			}
		}
		else if (choice == 2)
		{
			_Player->setHp(_Player->getHp() - _Poison->GetDiePoison());
			if (_Player->getHp() < 0)
			{
				_Player->setHp(0);
				cout << "�÷��̾� ���� ü��: " << _Player->getHp();
				break;
			}
		}
	}
	
}

// �Ҹ���
MainGame_03::~MainGame_03()
{
	delete _Player;
}
