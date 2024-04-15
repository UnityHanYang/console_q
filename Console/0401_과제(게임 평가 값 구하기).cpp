#include <iostream>
#include <string>

using namespace std;

#define ARRAY_LENGTH  6
void main()
{
	// 1.
	int arr1[ARRAY_LENGTH] = { 30, 60, 150, 25, 5, 15 };
	int age1 = 0;

	int arr1_Size = sizeof(arr1) / sizeof(arr1[0]);
	for (int i = 0; i < arr1_Size; i++)
	{
		age1 += arr1[i];
	}

	age1 /= ARRAY_LENGTH;

	cout << "1¹ø Æò±Õ: " << age1 << endl;

	cout << endl;
	// 2.
	
	int arr2[6];
	for (int i = 0; i < 6; i++)
	{
		int num;
		cin >> num;
		arr2[i] = num;
	}
	int age2 = 0;

	int arr2_Size = sizeof(arr2) / sizeof(arr2[0]);
	for (int i = 0; i < arr2_Size; i++)
	{
		age2 += arr2[i];
	}

	age2 /= ARRAY_LENGTH;

	cout << "2¹ø Æò±Õ: " << age2 << endl;
}