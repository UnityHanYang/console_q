#pragma once
#include "Unit.h"

class Tank : Unit
{
public:
	/*
	▶ 오버라이딩

	- 기존의 정의된 함수를 무시해 버린다. (재정의)

	- 상속 관계에서 자식의 클래스가 부모의 클래스에 대해서 정해진다.

	- 일반적으로 함수를 상속받아 재정의 한다.
	*/
	virtual void attack() override; // override 키워드는 생략 가능, 하지만 붙이는게 좋다.
	// 바인딩

	Tank();
	~Tank();
};

