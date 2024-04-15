#pragma once
#include "Unit.h"

// 클래스 전방 선언 -> 쓰면 쓸 수록 컴파일 타임이 줄어든다.
// 선택적 컴파일, 클래스, 빌드에서 제외) 이 3가지가 대표적인 최적화
// 무거운 선언이 들어오면 전방 선언을 통해 최적화를 해준다.
//class Tank;
// 내용은 필요없고, 너라는 클래스가 필요하다

//컴파일러가 클래스에 들어가면 요효성 검사를 한다(메모리에 클래스가 있는지 검사) 그리고 생성자를 확인한다.

// 다중 상속 -> 사용할 때 많은 주의가 필요하다(반복문의 goto처럼)
class Battlecruiser : public Unit//, Tank
{
public:
	virtual void attack();

	Battlecruiser();
	~Battlecruiser();
};

