#include <iostream>

using namespace std;

void main()
{
	int num;
	int arr[2];
	while (true) 
	{
		cout << "두 정수를 입력하세요: ";
		for (int i = 0; i < 2; i++)
		{
			cin >> num;
			arr[i] = num;
		}
		if (arr[0] < arr[1] && arr[0] > 0 && arr[1] > 0)
		{
			break;
		}
	}
	cout << '\n';
	int sum = 0;
	for (int i = arr[0]+1; i < arr[1]; i++)
	{
		sum += i;
		cout << sum << endl;
		if (sum >= 100)
		{
			break;
		}
	}
}