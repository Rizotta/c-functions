#include"Sort.h"

void Sort(int arr[], const unsigned int N)
{
	for (int i = 1; i < N; i++)
	{
		for (int j = i; j > 0 and arr[j - 1] > arr[j]; j--)
		{
			int temp = arr[j];
			arr[j] = arr[j - 1];
			arr[j - 1] = temp;
		}
	}
	Print(arr, N);
}

void Sort(double arr[], const unsigned int N)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = i; j > 0 and arr[j - 1] > arr[j]; j--)
		{
			int temp = arr[j];
			arr[j] = arr[j - 1];
			arr[j - 1] = temp;
		}
	}
	Print(arr, N);
}

void Sort(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int z = j; z > 0 and arr[i][z] < arr[i][z - 1]; z--)
			{
				int temp = arr[i][z];
				arr[i][z] = arr[i][z - 1];
				arr[i][z - 1] = temp;
			}
		}
	}
	Print(arr, ROWS, COLS);
}