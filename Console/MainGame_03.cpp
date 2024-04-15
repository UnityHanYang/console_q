#include "MainGame_03.h"

// 생성자
MainGame_03::MainGame_03()
{
	_Player = new Player_03;
	_Player->setHp(100);

	cout << "플레이어 현재 체럭: " << _Player->getHp() << endl << endl;

	cout << "소형 물약(1번), 대형 물약(2번)" << endl;

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
			cout << "깜지 콜?" << endl;
		}
		cout << endl;
		cout << "물약 먹은 후 체력: ";
		cout << _Player->getHp() << endl;
	}*/

	/*
	- 실습

	1. 독약 생성을 해보도록
		ㄴ 도트 데미지

	2. 즉사 물약 만들어 보도록
		ㄴ 한번에 사망 처리

	3. 플레이어가 체력이 0이하로 내려가면 음수값 예외처리 하도록

	4. 체력 재생 물약 만들어 보도록
		ㄴ 지속적인 체력 회복 (체력 회복 배수는 현재 총 체력의 7%)
	*/
	_Poison = new Poison_01;
	_Poison->SetPoison(10);
	_Poison->SetDiePoison(200);
	_Player->setHp(100);

	int choice;
	int secC;

	cout << "독약 생성(1), 즉사 물약(2): ";
	cin >> choice;
	while (true)
	{
		if (choice == 1)
		{
			cout << "체력 회복(1), 독약 생성(2): ";
			cin >> secC;

			if (secC == 1)
			{
				int fValue = _Player->getHp() / 7;
				_Poison->SetHealing(fValue);
				_Player->setHp(_Player->getHp() + _Poison->GetHealing());
				cout << "플레이어 현재 체력: " << _Player->getHp();
			}
			else
			{
				_Player->setHp(_Player->getHp() - _Poison->GetPoison());
				cout << "플레이어 현재 체력: " << _Player->getHp();
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
				cout << "플레이어 현재 체력: " << _Player->getHp();
				break;
			}
		}
	}
	
}

// 소멸자
MainGame_03::~MainGame_03()
{
	delete _Player;
}
