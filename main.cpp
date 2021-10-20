#include"FillRand.h"
#include"Print.h"
#include"Sort.h"
#include"Shift.h"

void main()
{
	setlocale(LC_ALL, "");

	cout << "Первый массив с целыми значениями: \t";
	int arr[N];
	FillRand(arr, N, MINRAND, MAXRAND);
	Print(arr, N);
	cout << "Второй массив с дробными значениями: \t";
	double brr[N];
	FillRand(brr, N);
	Print(brr, N);
	cout << "Третий многомерный массив с целыми значениями: \n";
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << endl;

	cout << "Первый массив в обратном порядке: \t";
	ReversePrint(arr, N);
	cout << "Второй массив в обратном порядке: \t";
	ReversePrint(brr, N);
	cout << "Третий массив в обратном порядке: \n";
	ReversePrint(i_arr_2, ROWS, COLS);
	cout << endl;

	cout << "Первый отсортированный массив: \t\t";
	Sort(arr, N);
	cout << "Второй отсортированный массив: \t\t";
	Sort(brr, N);
	cout << "Третий отсортированный массив: \n";
	Sort(i_arr_2, ROWS, COLS);
	cout << endl;

	int shift;
	cout << "Введите величину сдвига => ";  cin >> shift;
	cout << "Первый массив, сдвинутый на " << shift << " влево: \t";
	ShiftLeft(arr, N, shift);
	cout << "Первый массив, сдвинутый на " << shift << " вправо: \t";
	ShiftRight(arr, N, shift);
	cout << endl;
	cout << "Второй массив, сдвинутый на " << shift << " влево: \t";
	ShiftLeft(brr, N, shift);
	cout << "Второй массив, сдвинутый на " << shift << " вправо: \t";
	ShiftRight(brr, N, shift);
	cout << endl;
}