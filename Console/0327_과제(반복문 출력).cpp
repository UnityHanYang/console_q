#include <iostream>

using namespace std;

void main() {
	//Example_04b
	//반복문 출력
	for (int i = 20; i > 0; i--) {
		cout << i << endl;
	}

	cout << endl;
	cout << endl;

	int aNum = 20;
	while (aNum > 0) {
		cout << aNum << endl;
		aNum--;
	}

	cout << endl;
	cout << endl;

	int aDNum = 20;
	do {
		cout << aDNum << endl;
		aDNum--;
	} while (aDNum > 0);

	cout << endl;
	cout << endl;

	int eWNum = 1;
	while (eWNum < 21) {
		++eWNum;
		cout << eWNum << endl;
		eWNum++;
	}

	cout << endl;
	cout << endl;

	int eDNum = 1;
	do {
		++eDNum;
		cout << eDNum << endl;
		eDNum++;
	} while (eDNum < 21);

	cout << endl;
	cout << endl;

	for (int i = 1; i < 21; i++) {
		++i;
		cout << i << endl;
	}

	//과제2.반복문 숙달


	//과제3. 일수 출력기
}