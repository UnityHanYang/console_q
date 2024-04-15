#include <iostream>

using namespace std;

void main() {
	//Example_04b
	//과제2.반복문 숙달

	int inputNumber;

	cin >> inputNumber;

	if (inputNumber > -11 && inputNumber < 11) {
		while (inputNumber > -15) {
			cout << inputNumber << endl;
			inputNumber -= 5;
		}
	}
}