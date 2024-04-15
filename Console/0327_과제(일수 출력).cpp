#include <iostream>

using namespace std;

void main() {
	//Example_04b
	// 과제3. 일수 출력기
	int dateNumber;

	for (int i = 0; i < 5; i++) {
		cin >> dateNumber;

		switch (dateNumber)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			cout << dateNumber << "월은 31일까지 있습니다\n";
			break;
		case 2:
			cout << dateNumber << "월은 29일까지 있습니다\n";
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			cout << dateNumber << "월은 30일까지 있습니다\n";
			break;
		default:
			cout << "1~12월 중에서 입력하세요";
			break;
		}
		cout << endl;
	}
}