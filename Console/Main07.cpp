#include <iostream>
#include "Father.h"
#include "Mother.h"
#include "Me.h"

using namespace std;

void main()
{
	
	Father fh;
	fh.fP = { "ȫ�浿", 53, "��Ʃ�� ��û", "����� ������" };
	fh.ShowInfo();

	cout << endl;
	cout << endl;

	Mother mh;
	mh.mP = { "�ɻ��Ӵ�", 52, "����", "����� ������" };
	mh.ShowInfo();

	cout << endl;
	cout << endl;

	Me me;
	me.mP = { "�質��", 22, "����", "����� ������" };
	me.ShowInfo();
}