#include"Shift.h"

// ShiftLeft
void ShiftLeft(int arr[], const unsigned int N, int shift)
{
	int temp;
	for (int i = 0; i < shift; i++) {
		for (int j = 0; j < N; j++)
		{
			(j == 0) ? temp = arr[0] : arr[j - 1] = arr[j];
		}
		arr[N - 1] = temp;
	}
	Print(arr, N);
}

void ShiftLeft(double arr[], const unsigned int N, int shift)
{
	int temp;
	for (int i = 0; i < shift; i++) {
		for (int j = 0; j < N; j++)
		{
			(j == 0) ? temp = arr[0] : arr[j - 1] = arr[j];
		}
		arr[N - 1] = temp;
	}
	Print(arr, N);
}

void ShiftLeft(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int shift)
{
	for (int i = 0; i < ROWS; i++) {
		int temp;
		for (int k = 0; k < shift; k++)
		{
			for (int j = 0; j < COLS; j++)
			{
				if (j == 0) {
					temp = arr[i][0];
				} else {
					arr[i][j - 1] = arr[i][j];
				}
			}
			arr[i][COLS - 1] = temp;
		}
	}
	Print(arr, ROWS, COLS);
}

// ShiftRight
void ShiftRight(int arr[], const unsigned int N, int shift)
{
	ShiftLeft(arr, N, N - shift);
}

void ShiftRight(double arr[], const unsigned int N, int shift)
{
	ShiftLeft(arr, N, N - shift);
}

void ShiftRight(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int shift)
{
	ShiftLeft(arr, ROWS, COLS, COLS - shift);
}