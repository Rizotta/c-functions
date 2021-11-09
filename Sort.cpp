#include"Sort.h"

// Sort
template<typename T>void Sort(T arr[], const unsigned int N)
{
	for (unsigned int i = 1; i < N; i++)
	{
		for (unsigned int j = i; j > 0 and arr[j - 1] > arr[j]; j--)
		{
			T temp = arr[j];
			arr[j] = arr[j - 1];
			arr[j - 1] = temp;
		}
	}
	Print(arr, N);
}

template<typename T>void Sort(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned COLS)
{
	for (unsigned int i = 0; i < ROWS; i++)
	{
		for (unsigned int j = 0; j < COLS; j++)
		{
			for (unsigned int z = j; z > 0 and arr[i][z] < arr[i][z - 1]; z--)
			{
				T temp = arr[i][z];
				arr[i][z] = arr[i][z - 1];
				arr[i][z - 1] = temp;
			}
		}
	}
	Print(arr, ROWS, COLS);
}