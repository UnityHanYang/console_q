#include "MainGame_06.h"
#include <iostream>
#include <vector>
// 생성자가 호출될 때 헤더파일이 있냐 없냐
// 참조 오류 방지


MainGame_06::MainGame_06()
{
	/*
	▶ STL 백터에서 자주 사용하는 기능

	push_back()
	ㄴ 데이터 뒤에서부터 값을 추가

	사용하고 있는 값은 사용하고 있는 메모리에만 넣는다.
	ㄴ 임시 메모리에 사용하면 안 됨.

	★ 면접 문제 ★

	emplace_back()
	ㄴ 데이터 뒤에서부터 값을 추가

	메모리를 챙기려면 push
	속도를 챙기려면 emplace
	push_back, emplace_back를 번갈아가면서 써야한다.

	pop_back() (front도 지원함->pop_front) 하지만 front를 써서 앞의 데이터를 삭제하면 데이터의 대량의 이동을 하므로 거의 사용하지 말 것
	ㄴ 데이터 뒤에서부터 값을 삭제
	ㄴ 방 자체를 삭제하지 않고 인덱스만 삭제시킨다.
	ㄴ 인덱스가 사라진 방은 임시 메모리로 바뀐다.

	size()
	ㄴ 백터의 개수
	ㄴ 백터라는 컨테이너 안에 담긴 인덱스 개수 (총량)

	resize()
	ㄴ 메모리 재연산 (방 연산)

	clear()
	ㄴ 방을 모두 삭제
	ㄴ 스테이지가 바뀔 때, 씬이 바뀔 때 사용

	begine()
	ㄴ 백터의 0번째 인덱스

	end()
	ㄴ 백터의 마지막 인덱스

	insert()
	ㄴ 값 삽입
	ㄴ 삽입 삭제는 백터의 입출력을 느리게 만드므로 덜 사용해야한다.

	erase()
	ㄴ 인덱스 삭제
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
	//댕글링 포인터
	// Clear된 공간에 접근을 시도하려고 했기 때문에 터진다.

	_vNumber.push_back(1);
	_vNumber.push_back(2);

	_vNumber.insert(_vNumber.begin() + 1, 100);


	// 안전도: 상 -> 직접 참조
	for (int i = 0; i < _vNumber.size(); ++i)
	{
		cout << _vNumber[i] << endl;
	}

	// 후위가 아닌 전위를 사용해야하는 이유
	// 메모리가 완성이 안 돼있는 경우가 있다(호출 순서 때문에)
	// 클래스에서 상속 관계가 돼있을 때 이런 문제가 발생한다.
	// 미리 보내놓고 확인하겠다.

	for (_viNumber = _vNumber.begin(); _viNumber != _vNumber.end(); ++_viNumber)
	{
		cout << *_viNumber << endl; // 주소값을 찾아가야하니까 포인터*를 사용
	}
	LinePrint();

	PrintVector();
}


/*
보유 기술
C# / Unity / DB / ? C++ / STL
*/
void MainGame_06::PrintVector()
{
	LinePrint();
	LinePrint();
	LinePrint();

	cout << "푸시백" << endl;

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


	// 기본적으로
	cout << "삽입" << endl;

	_vNumber.insert(_vNumber.begin() + 2, 10);

	cout << _vNumber[0] << endl;
	cout << _vNumber[1] << endl;
	cout << _vNumber[2] << endl;
	cout << _vNumber[3] << endl;
	cout << _vNumber[4] << endl;

	LinePrint();

	// 3.
	cout << "팝백" << endl;
	_vNumber.pop_back();
	// 게임에선 팝백이 아닌 erase로 범위를 지정해서 지우는 방식을 많이 쓴다.

	// 상 -> 최상
	// 최상을 안 하고 상을 쓰는 이유: 1. 귀찮다, 2. 메모리 사용량이 더 많다(for문에서 하나의 객체만 사용하는 거랑 두개의 객체가 사용되는거랑)
	for (int i = 0; i < _vNumber.size(); i++)
	{
		cout << _vNumber[i] << endl;
	}

	/*
	▶ for each문

	- 주어진 범위의 모든 데이터를 하나씩 순회하며 동작하는 경우에 사용할 수 있다.
	ㄴ 기본적으로 컨테이너의 반복자 개념
	ㄴ 단, for each는 vector의 컨테이너 요소는 아니며 알고리즘 함수 요소일 뿐이다.
	
	- 모든 컨테이너는 반복자를 가지고 있으며 이는 for each를 사용해서 컨테이너의 원소 접근이 가능하다는 얘기

	-for each로 가능한 이유는 스마트 포인터로 만들어진 문법이기 때문
	ㄴ 이는 순회하면서 원하는 요소에 접근을 하기가 용이하다는 얘기


	▶ auto

	- 컴파일러가 컴파일시 자동으로 자료형을 추론한다.

	- 상시 / 수시로 자로형을 추론할 수 있는게 아닌 컴파일러가 자료형을 추론하기 위한 명시적인 조건이 주어져야 한다.

	- C/C++은 타입에 매우 엄격한 언어이기 때문에 변수를 생성할 때 자료형을 명시해야 한다.
	ㄴ 단, auto 키워드를 사용하면 변수의 자료형을 명시하지 않더라도 컴파일러에 의해서 자동적으로 변수의 자료형이
	결정된다.

	▶ range based for

	- VS 2015부터 지원하는 문법

	컨테이너를 순회할 수 있는 알고리즘 함수
	for each (auto p in _vNumber) 시간복잡도에 민감한 함수
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


	// 5. 역순회
	_vriNumber = _vNumber.rbegin();
	for (_vriNumber; _vriNumber != _vNumber.rend(); ++_vriNumber) // 반복자는 스마트 포인터로 이루어져있기 때문에 음수값이 들어가면 안 됨
	{
		cout << *_vriNumber; // 주소값을 찾아가야하니까 포인터*를 사용
	}

	//★★★ 사골 ★★★
	// 6. 인덱스 참조

	cout << _vNumber.at(4) << endl;
	// ㄴ 범위 점검을 한다. => 속도는 느리지만 안전하다.
	// 4번째 인덱스에 들어가기 전에 3번째 인덱스를 확인해서 값이 있으면 4번째 인덱스가 있다고 확인하고 4번째 인덱스의 값을 반환
	// 3번째 인덱스에 값이 없어도 4번째 인덱스에 들어가지만 Null을 리턴한다.
	cout << _vNumber[4] << endl;
	// ㄴ 범위 점검을 하지 않는다. => 빠르지만 스릴 만점


	// 7. front
	cout << "프론트" << endl; // 다른 클래스에서 vector의 begin을 가져올 때 사용 됨
	cout << _vNumber.front() << endl;

	// 8. back
	cout << "백" << endl;
	cout << _vNumber.back() << endl;

	// 9. size
	cout << "사이즈" << endl;
	cout << _vNumber.size() << endl;

	// 10. clear
	cout << "클리어" << endl;
	_vNumber.clear();

	// 11. empty
	// ㄴ 비어 있으면 T / 하나 이상 있으면 F

	// T
	if (_vNumber.empty())
	{
		cout << "텅텅 비었는걸?" << endl;

		return;
	}


	cout << _vNumber.at(2) << endl;
	// Null이 아닌 날라간다 -> Clear로 모든 방을 삭제 시켰기 때문에

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

