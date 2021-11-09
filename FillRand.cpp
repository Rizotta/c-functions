#include"FillRand.h"

// FillRand
void FillRand(int arr[], const unsigned int N, int minRand, int maxRand)
{
	for (unsigned int i = 0; i < N; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
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
	for (unsigned int i = 0; i < COLS; i++)
	{
		for (unsigned int j = 0; j < ROWS; j++)
		{
			arr[i][j] = rand() % (maxRand - minRand) + minRand;
		}
	}
}

void FillRand(double arr[ROWS][COLS], const unsigned int COLS, const unsigned int ROWS, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	for (unsigned int i = 0; i < COLS; i++)
	{
		for (unsigned int j = 0; j < ROWS; j++)
		{
			arr[i][j] = rand() % ((long long)maxRand - minRand) + minRand;
			arr[i][j] /= 100;
		}
	}
}