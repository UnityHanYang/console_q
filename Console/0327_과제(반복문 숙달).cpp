#include <iostream>

using namespace std;

void main() {
	//Example_04b
	//����2.�ݺ��� ����

	int inputNumber;

	cin >> inputNumber;

	if (inputNumber > -11 && inputNumber < 11) {
		while (inputNumber > -15) {
			cout << inputNumber << endl;
			inputNumber -= 5;
		}
	}
}