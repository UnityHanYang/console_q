#include <iostream>
#include <Windows.h>
#include <time.h>

using std::cout;
using std::endl;

void main()
{
	// Example_02
	// 랜덤 숫자 담기
	srand(time(NULL));

	int oneQ = 0;

	oneQ = rand() % 6;
	
	cout << "oneQ: " << oneQ << endl;

	int twoQ = 0;

	twoQ = (rand() % 15) + 5;

	cout << "twoQ: " << twoQ << endl;

	int threeQ = 0;

	threeQ = (rand() % 168) + 22;

	cout << "threeQ: " << threeQ << endl;

}