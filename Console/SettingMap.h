#pragma once
#include <iostream>
#include <Windows.h>

class SettingMap
{
public:
	template<size_t N, size_t M>
	void Shuffle(uint8_t(&arr)[N][M]);

	template<size_t N, size_t M>
	void PrintfMap(uint8_t(&arr)[N][M]);

	void TextColor(int font, int backGround);
};

template<size_t N, size_t M>
inline void SettingMap::Shuffle(uint8_t(&arr)[N][M])
{
	srand(time(NULL));
	for (int i = 0; i < 500; i++)
	{
		int index1 = rand() % N;
		int index2 = rand() % N;
		int index3 = rand() % (M - 1);
		int index4 = rand() % (M - 1);

		if (index1 != index2 && index3 != index4)
		{
			int temp = arr[index1][index3];
			arr[index1][index3] = arr[index2][index4];
			arr[index2][index4] = temp;
		}
	}
}

template<size_t N, size_t M>
inline void SettingMap::PrintfMap(uint8_t(&arr)[N][M])
{
	for (int i = 0; i < sizeof(arr[0]) / sizeof(uint8_t); i++)
	{
		for (int j = 0; j < sizeof(arr) / sizeof(arr[0]); j++)
		{
			if (arr[j][i] >= 32 && arr[j][i] <= 126)
			{
				TextColor(2, 0);
				printf("%c%s", arr[j][i], (j % 5 == 4) ? "\n\n\n\n" : "\t");
				TextColor(15, 0);
			}
			else
			{
				TextColor(15, 0);
				printf("%d%s", arr[j][i], (j % 5 == 4) ? "\n\n\n\n" : "\t");
			}
		}
	}

}
