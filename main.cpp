#include"FillRand.h"
#include"Print.h"

void main()
{
	setlocale(LC_ALL, "");
	int arr[N];
	
	cout << "Исходный массив с целыми значениями: \t";
	FillRand(arr, N, MINRAND, MAXRAND);
	Print(arr, N);

	cout << "Исходный массив с дробными значениями: \t";
	double brr[N];
	FillRand(brr, N);
	Print(brr, N);

	cout << "Исходный многомерный массив с целыми значениями: \n";
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);

	
}