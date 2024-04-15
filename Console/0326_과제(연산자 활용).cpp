#include <iostream>

using std::cout;
using std::endl;
using std::cin;

void main() {
	// Example_03
	// 연산자 활용
	//a
	int aNum1, aNum2;

	cin >> aNum1 >> aNum2;

	cout << endl;
	cout << "cNum1 + cNum2 = " << aNum1 + aNum2;
	
	cout << '\n';
	cout << '\n';


	//b
	int bNum1, bNum2, bNum3;

	cin >> bNum1 >> bNum2 >> bNum3;

	int bResult = (bNum1 + bNum2) * (bNum3 + bNum1) % bNum1;

	cout << endl;
	cout << "bResult: " << bResult;

	cout << '\n';
	cout << '\n';


	//c
	int cNum1, cNum2;

	cin >> cNum1 >> cNum2;

	int remain = cNum1 % cNum2;
	int share = cNum1 / cNum2;

	cout << endl;
	cout << "remain: " << remain << ", " << "share: " << share;
}