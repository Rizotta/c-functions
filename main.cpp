#include"FillRand.h"
#include"Print.h"

void main()
{
	setlocale(LC_ALL, "");
	const unsigned int N = 5;
	int arr[N];
	//srand(time(NULL));	// всегда разные числа для rand()
	//srand(5);				// разные числа для разных цифр внутри srand

	int minRand = 200, maxRand = 300;
	/*
	//cout << "Введите минимальное случайное число => "; cin >> minRand;
	//cout << "Введите максимальное случайное число => "; cin >> maxRand;
	*/
	FillRand(arr, N, minRand, maxRand);
	Print(arr, N);
	double brr[N];
	FillRand(brr, N);
	Print(brr, N);

	//int i_arr_2[ROWS][COLS] = 
	//{
	//	{1,2,3},
	//	{4,5,6},
	//	{7,8,9}
	//};
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);

}