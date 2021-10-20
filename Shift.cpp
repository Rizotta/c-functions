#include"Shift.h"

void ShiftLeft(int arr[], const unsigned int N, int shift)
{
	int shift_v;
	for (int i = 0; i < shift; i++) {
		for (int j = 0; j <= N - 1; j++)
		{
			(j == 0) ? shift_v = arr[0] : arr[j - 1] = arr[j];
		}
		arr[N - 1] = shift_v;
	}
	Print(arr, N);
}

void ShiftLeft(double arr[], const unsigned int N, int shift)
{
	int shift_v;
	for (int i = 0; i < shift; i++) {
		for (int j = 0; j <= N - 1; j++)
		{
			(j == 0) ? shift_v = arr[0] : arr[j - 1] = arr[j];
		}
		arr[N - 1] = shift_v;
	}
	Print(arr, N);
}

void ShiftRight(int arr[], const unsigned int N, int shift)
{
	ShiftLeft(arr, N, N - shift);
}

void ShiftRight(double arr[], const unsigned int N, int shift)
{
	ShiftLeft(arr, N, N - shift);
}