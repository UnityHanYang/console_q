#include <iostream>
#include "Father.h"
#include "Mother.h"
#include "Me.h"

using namespace std;

void main()
{
	
	Father fh;
	fh.fP = { "홍길동", 53, "유튜브 시청", "서울시 강동구" };
	fh.ShowInfo();

	cout << endl;
	cout << endl;

	Mother mh;
	mh.mP = { "심사임당", 52, "독서", "서울시 강동구" };
	mh.ShowInfo();

	cout << endl;
	cout << endl;

	Me me;
	me.mP = { "김나라", 22, "게임", "서울시 강동구" };
	me.ShowInfo();
}