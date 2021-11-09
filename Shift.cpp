#include"Shift.h"

// ShiftLeft
template<typename T> void ShiftLeft(T arr[], const unsigned int N, int shift)
{
	T temp = T();
	for (int i = 0; i < shift; i++) {
		for (unsigned int j = 0; j < N; j++)
		{
			(j == 0) ? temp = arr[0] : arr[j - 1] = arr[j];
		}
		arr[N - 1] = temp;
	}
	Print(arr, N);
}

template<typename T> void ShiftLeft(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int shift)
{
	for (unsigned int i = 0; i < ROWS; i++) {
		T temp = T();
		for (int k = 0; k < shift; k++)
		{
			for (unsigned int j = 0; j < COLS; j++)
			{
				if (j == 0) {
					temp = arr[i][0];
				}
				else {
					arr[i][j - 1] = arr[i][j];
				}
			}
			arr[i][COLS - 1] = temp;
		}
	}
	Print(arr, ROWS, COLS);
}

// ShiftRight
template<typename T> void ShiftRight(T arr[], const unsigned int N, int shift)
{
	ShiftLeft(arr, N, N - shift);
}

template<typename T> void ShiftRight(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int shift)
{
	ShiftLeft(arr, ROWS, COLS, COLS - shift);
}