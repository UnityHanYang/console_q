#include <iostream> // 라이브러리
#include <time.h>
#include <random>

using namespace std;

#pragma region 난수 + 셔플
/*

▶ 난수 (Random NUmber)

- 무작위로 만들어 지는 알 수 없는 값을 의미한다.
ㄴ 패를 무작위로 섞거나 / 적의 움직임을 미리 알 수 없도록 하기 위해 난수 필요


  난수 생성 루틴

- 난수 생성 루틴 규칙에 변화를 줄 수 있는게 srand()

- srand() 자체는 난수 발생기에 난수를 발생시키는 시작점(공을 뽑고 공을 안 놓은 상태, (os가 부팅된 시간))을 제공하고 이는
난수 발생기로 하여금 난수를 발생시키는 기준점이 된다.

- 기본적으로 난수 발생시가 실행될 시간은 예측을 할 수가 없기 때문에
시간값을 시작점으로 사용한다면 난수를 생성할 수 있었던 것


※ 불완전 난수
- 옛날 헤더파일이기 때문에 데이터 범위가 작다
- 우리가 쓰고 있는건 64비트인데 srand는 32비트이다.
	ㄴ 난수를 뽑아보면 골고루 나올 것 같지만 의외로 겹치는게 많은게 있는게 이 때문임.


▶ 완벽한 난수

- srand/rand() 함수의 조합은 완벽한 난수를 생성할 수 없기 때문에 C++11에서
새롭게 추가된 Random Number Generator (랜덤 디바이스) // 랜덤 디바이스가 C++ Boostr에서 나왔다.

- C++ Boost에서 추가된 케이스 // 낡았거나 오래됐기 대문에 현대 트랜드에 따라 하드웨어에 맞게 재정의, 검증 해주겠다, 비공식 라이브러리
ㄴ C# .Net 개정판에서 추가

문제점
- 엄청 무겁다. -> 메모리 사용이 높다.
- 계산을 많이 해야한다.

반복문을 넣어서 최적화 시켜주면 됨.
*/
#pragma endregion


void main()
{
	// 랜덤 시드 초기화
	srand(time(NULL));

	int damage = (rand() % 10) + 1;

	cout << "데미지: " << damage << endl;

	for (int i = 0; i < 10; i++)
	{
		printf("%d \t", rand());
	}

	// 셔플(섞는다)
	// ㄴ 게임에서 셔플은 데이터를 섞는 행위
	// ㄴ <algorithm> 헤더파일이 존재한다. -> 셔플을 하기 위해 추천 x
	int num[10];
	int dest, sour, temp;
	// 시작점, 도착점, 임시값

	for (int i = 0; i < 10; i++)
	{
		num[i] = i;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << num[i] << endl << endl;
	}

	for (int i = 0; i < 100000; i++)
	{
		dest = rand() % 10; // dest값에 0 ~ 9까지의 정수값을 무작위로 대입
		sour = rand() % 10; // sour값에 0 ~ 9까지의 정수값을 무작위로 대입

		temp = num[dest];
		num[dest] = num[sour];
		num[sour] = temp;
	}

	cout << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << "[" << i << "] = " << num[i] << endl;
	}



	//2024.04.02

	// 디바이스 생성
	random_device oRandomDevice; // oRandomDevice 앞에 o는 object를 의미
	// random_device가 굉장히 무겁다. 함부로 막 쓰면 안 됨
	// 이 친구를 쓰려면 <time.h>를 걷어내고 써야한다.
	// 두 개 다 연산이 필요한 친구. 둘 다 쓰면 안 됨.

	// 시드 설정 (난수 생성 엔진 초기화)
	mt19937_64 rnd(oRandomDevice()); 
	// 시드점을 기준(시작점)으로 랜덤값을 뽑겠다. 시드점은 절대로 두 번 이상 뽑히지 않으므로 완벽한 난수라고 할 수 있다.

	cout << "랜덤 디바이스: \n" << rnd << endl;

	int randomMin = 1;
	int randomMax = 10;

	// 범위 설정
	// ㄴ 정수
	uniform_int_distribution<int> range(randomMin, randomMax);

	// 실수
	uniform_real_distribution<float> range(randomMin, randomMax);
	
	// 정규 분포
	normal_distribution<double> range(randomMin, randomMax);

	// 평균적인 메모리를 보장해주겠다.

	cout << '\n';

	int randomValue = range(rnd);
	cout << "추출값: " << randomValue << endl;

	int numberA = (oRandomDevice() % 10) + 1;
	int numberB = (oRandomDevice() % 10) + 1;

	int numberA = (rand() % 10) + 1;
	int numberB = (rand() % 10) + 1;
}

/*
과제1. 게임 평가 값 구하기 (평균)

- 항목은 6개

- 게임 평가: 캐릭터 / 배경 / 퀘스트 / 아이템 / 과금력 / 레이드 등등

- 조건: 
1. 1차원 배열로 값을 정하고 평균값을 구해서 출력 // 코드 상에서 먼저 정해준다
2. 1차원 배열로 값을 세팅하고 내가 값을 입력하면 평균값을 구해서 출력한다. // 사용자가 일일이 입력한다


과제2. 슬롯머신

- 777 같은 숫자가 3개 나올 시 배팅금액의 12배

- 7을 제외한 같은 숫자 3개 나올 시 배팅금액의 5배

- 같은 숫자 2개 나올 시 배팅금액의 2배

- 그 외에는 배팅금액 잃기

- 기본 소지금: 10,000원 / 최소 배팅: 1,000원 / 배팅 단위: 1,000

- 필수:
ㄴ 1. 룰렛이 동작하는 모습 -> 시각화
	ㄴ 
	auto setNum = []() -> void
	{

	}; // 얘를 쓸 때 왜 시각화 부분에서 유리한가?
	setNum();
ㄴ 2. 배팅을 하고 내가 룰렛을 멈추지 않으면 룰렛은 자동으로 계속 반복한다.
	ㄴ 예를 들어 0번을 누르면 게임이 멈추고 배팅 금액을 입력한다.
ㄴ 3. 치트 구현
	ㄴ 치트가 활성화 되면 숫자 3개를 입력 받는다.
		ㄴ 치트로 입력된 숫자는 다음 번 룰렛이 시동될 때 당첨되는걸 확인할 수 있게

한줄 조사. 문자열

- 노트에 적어온다.

- 비유할 것 생각해 온다.

*/