#pragma once
#include <iostream>

using namespace std;

#pragma region 접근자 + 설정자
/*
▶ 접근자 + 설정자

- 접근자 (Accessor)
ㄴ 맴버 변수 값을 반환하는 맴버 함수를 지칭한다.

- 설정자 (Mutator)
ㄴ 맴버 변수 값을 변경하는 맴버 함수를 지칭한다.

※ 일반적으로 Getter(Get) / Setter(Set)라고 불린다.
ㄴ 포인터에 대한 지식, 응용력이 부족할 때 많이 사용 됨.

※ HLL(High Level Language) / 상용 엔진에서는 프로퍼티라는 이름으로 다시 만날 수 있다.
*/
#pragma endregion
class Player_03
{
private:
	int _hp;
	int _mp;
	int att;
	float _speed;

public:
	// 캡슐 함수 (Getter / Setter)
	// ㄴ 일반 함수들은 cpp에서 기능을 구현하는게 원칙이지만 -> 겟터 + 셋터 함수는 헤더파일에서
	//		구현을 원칙으로 한다.
	// inLine
	// 템플릿
	int getHp() { return _hp; }
	void setHp(int hp) { _hp = hp; }

	int getMp() { return _mp; }
	void setMp(int mp) { _mp = mp; }

	float getSpeed() { return _speed; }
	void setSpeed(float speed) { _speed = speed; }

	Player_03() {}
	~Player_03() {}
};

