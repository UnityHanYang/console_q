#include <iostream>

using namespace std;

void main() {
	//Example_04b
	// ����3. �ϼ� ��±�
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
			cout << dateNumber << "���� 31�ϱ��� �ֽ��ϴ�\n";
			break;
		case 2:
			cout << dateNumber << "���� 29�ϱ��� �ֽ��ϴ�\n";
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			cout << dateNumber << "���� 30�ϱ��� �ֽ��ϴ�\n";
			break;
		default:
			cout << "1~12�� �߿��� �Է��ϼ���";
			break;
		}
		cout << endl;
	}
}