#include"FillRand.h"

void FillRand(int arr[], const unsigned int N, int minRand, int maxRand)
{
	for (unsigned int i = 0; i < N; i++)
	{
		//arr[i] = rand();									// случайные значения
		//arr[i] = rand() % 100;							// значения меньше 100
		//arr[i] = rand() % 50 + 50;						// значения от 50 до 100
		arr[i] = rand() % (maxRand - minRand) + minRand;	// значения от minRand до maxRand
	}
}

void FillRand(double arr[], const unsigned int N, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	for (unsigned int i = 0; i < N; i++)
	{
		arr[i] = rand() % ((long long)maxRand - minRand) + minRand;
		arr[i] /= 100;
	}
}

void FillRand(int arr[ROWS][COLS], const unsigned int COLS, const unsigned int ROWS, int minRand, int maxRand)
{
	for (int i = 0; i < COLS; i++)
	{
		for (int j = 0; j < ROWS; j++)
		{
			arr[i][j] = rand() % (maxRand - minRand) + minRand;
		}
	}
}