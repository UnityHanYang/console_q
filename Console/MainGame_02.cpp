#include "MainGame_02.h"

#define EXAMPLE_TYPE_STRUCT         1
#define EXAMPLE_TYPE_ENUM           2
#define EXAMPLE_TYPE_UNION          3
#define EXAMPLE_TYPE_CLASS          4

#define EXAMPLE_TYPE           EXAMPLE_TYPE_CLASS

MainGame_02::MainGame_02()
{
#if EXAMPLE_TYPE == EXAMPLE_TYPE_STRUCT

	// 선언
	// C 스타일
	//struct tagFamily Family;
	/*
	1. 구조체는 먼저 무엇을 교집합을 묶을지 생각해 보고 설계한다.

	2. 사용할 수 있게 메모리에 올려야 하니 변수화 시킨다.

	3. 다음으로는 초기화 한다.
	ㄴ 맴버 변수에 접근할 때는 .을 이용한다.

	- 또한 구조체의 초기화는 배열의 초기화와 같이 지정된 값이 순서대로 구조체 필드에 할당된다.

	*/

	// C++
	//tagFamily Family;
	// 위 두 방법은 서로 호환이 안 된다.

	human.name = "인간";
	human.age = 18;
	human.height = 174;
	human.wedding = false;
	human.weight = 69;

	cout << "이름: " << human.name << "\n"
		<< "나이: " << human.age << "\n"
		<< "키: " << human.height << "\n"
		<< "결혼: " << human.wedding << "\n"
		<< "나이: " << human.age << "\n"
		<< "몸무게: " << human.weight << "\n";

	cout << '\n';

	// 구조체의 장점: 재생산성이 좋다.

	// 상속을 전제한 경우 private이어도 사용할 수 있다.
	tagPlayer player;
	player.hp = 100;
	player.mp = 50;
	player.att = 10;
	player.def = 5;
	player.speed = 10.5f;

	// 출력도 동일....

	cout << '\n';

	tagUnit marin;
	marin.name = "마린";
	marin.hp = 100;
	marin.att = 5.5f;
	cout << boolalpha;
	// boolalpha:  bool -> 0, 1 -> T / F 변환
	marin.die = false;

	// 너 구초제 아니었냐 ? -> 배열
	tagUnit zergling = { "저글링", 50, 50.f, true };

	// 이제야 좀 쓸만해졌네
	// ㄴ 유지보수성 ↑ (관리가 편해진다)
	tagPlayer arrPlayer[4] =
	{
		{100, 100, 100, 100, 100},
		{90, 90, 90, 90, 90},
		{80, 80, 80, 80, 80},
		{70, 70, 70, 70 , 70}
	};

	for (int i = 0; i < 4; i++)
	{
		cout << i + 1 << "번째 플레이어" << endl;

		cout << "채력: " << arrPlayer[i].hp << endl; // 100, 90, 80, 70이 나옴
		cout << "========" << endl;
	}
	

#elif EXAMPLE_TYPE == EXAMPLE_TYPE_ENUM

	// 매우 위함함.
	// ㄴ 이름 충돌 => namespace, class 
	// 범용적으로 class가 유리하다.
	cout << "블랙: " << BLACK << endl; // 객체 보관성의 법칙이 깨짐
	// 개나소나 접근해서 값을 사용, 변경할 수 있다.
	//	C++11에선 enum class가 이 문제를 해결해 준다.

	m_motion = L_WALK;

	switch (m_motion)
	{
	case R_WALK:
		cout << "오른쪽 걷기" << endl;
		break;
	case L_WALK:
		cout << "왼쪽 걷기" << endl;
		break;
	case R_RUN:
		cout << "오른쪽 뛰기" << endl;
		break;
	case L_RUN:
		cout << "왼쪽 뛰기" << endl;
		break;
	}

	if (m_motion == L_WALK)
	{
		m_motion = R_RUN;

		if (m_motion == R_RUN)
		{
			cout << "오른쪽으로 뛰고 있다" << endl;
		}
	}

#elif EXAMPLE_TYPE == EXAMPLE_TYPE_UNION
	
/*
구조체 vs 공용체

- 구조체는 구조체를 구성하는 각각의 필드가 서로 별개의 메모리를 사용하는 반면에
공용체는 하나의 메모리를 가지고 각각의 필드가 서로 공유하는 구조를 지닌다.

- 공용체의 크기는 맴버들 중 가장 큰 맴버 변수의 크기로 설정이 된다.

- 그렇기 때문에 공용체에서는 각 필드의 값이 할당 될 경우 마지막으로 할당한 필드의 값만 유효하다.

※ 데이터를 절약하고 싶을 때 한 번쯤 떠올릴만한 공용체

*/

stData.m_nDataA = 0;
stData.m_nDataB = 200;
stData.m_fData = 3.14f;

cout << "== 공용체 ==" << endl;

cout << "정수 데이터: " << stData.m_nDataA << endl; // 쓰레기 값
cout << "정수 데이터: " << stData.m_nDataB << endl; // 쓰레기 값
cout << "실수 데이터: " << stData.m_fData << endl; // 3.14f
// 맨 아래에 있는 값만 남겨 두고, 그 위에 있는 얘들은 쓰레기 값이 된다.



#else

// 클래스도 기본적으로 중첩이 가능하다.

class Time
{
public:
	int hour, min, sec;

	void setTime(int h, int m, int s)
	{
		hour = h;
		min = m;
		sec = s;
	}

	void outTime()
	{
		printf("시간은 %d:%d:%d 입니다.\n", hour, min, sec);
	}
};

Time now;
now.setTime(19, 41, 40);
now.outTime();

#endif
}

MainGame_02::~MainGame_02()
{
}