#include <iostream>

using std::cout;
using std::endl;

void main() {
	// Example_03
	// º°Âï±â
	for (int j = 0; j < 5; j++) {
		for (int i = 5-j; i > 0; i--) {
			cout << "*";
		}
		cout << endl;
	}

	cout << endl;

	for (int j = 0; j < 5; j++) {
		for (int i = 5 - j; i > 0; i--) {
			cout << "*";
		}
		cout << endl;
		for (int k = 0; k <= j; k++)
		{
			cout << " ";
		}
	}

	cout << endl;

	for (int j = 0; j < 5; j++) {
		for (int k = 4-j; k > 0; k--)
		{
			cout << " ";
		}
		for (int i = 0; i <= j; i++) {
			cout << "*";
		}
		cout << endl;
	}

	cout << endl;

	for (int j = 0; j < 5; j++) {
		for (int i = 0; i <= j; i++) {
			cout << "*";
		}
		for (int k = 4 - j; k > 0; k--)
		{
			cout << " ";
		}
		cout << endl;
	}

	cout << endl;

	int max = 2;
	int count = 0;
	for (int j = 0; j < 6; j++) {
		for (int i = 5-j; i > 0; i--)
		{
			cout << " ";
		}
		for (int i = 0; i < max; i++) {
			cout << "*";
		}
		cout << endl;
		max += 2;
	}
	for (int j = 0; j < 5; j++) {
		for (int i = 0; i <= j; i++)
		{
			cout << " ";
		}
		for (int i = 10-count; i > 0; i--) {
			cout << "*";
		}
		cout << endl;
		count += 2;
	}
}