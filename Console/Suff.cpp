#include "Suff.h"

void Suff::Combine()
{

	for (int i = 0; i < 52; i++)
	{
		card[i] = i;
	}
	srand(time(NULL));
	for (int i = 0; i < 100; i++)
	{
		int index1 = rand() % 52;
		int index2 = rand() % 52;

		int temp = card[index1];
		card[index1] = card[index2];
		card[index2] = temp;
	}
}
