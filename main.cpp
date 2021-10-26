#include<Windows.h>
#include"FillRand.h"
#include"Print.h"
#include"Sort.h"
#include"Shift.h"
#include"Statistics.h"
		
void main()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);		
	COORD coord;
	SetConsoleDisplayMode(hConsole, CONSOLE_FULLSCREEN_MODE, &coord);

	setlocale(LC_ALL, "");
	int arr_types;
	cout << "Сколько массивов отобразить? \n1 - одномерный int,\n2 - одномерный double, \n3 - двумерный int";
	cout << "\nВведите количество = > "; cin >> arr_types;
	if (arr_types == 0 || arr_types > 3) 
	{
		cout << "Вы выбрали некорректное количество. Выход.";
		return;
	} 

	int shift;
	cout << "Введите величину сдвига для элементов массива => "; 
	cin >> shift;
	cout << endl;

	if (arr_types > 0)
	{
		PrintLine();
		cout << endl << "Первый массив, значения типа int: \t";
		int arr[N];
		FillRand(arr, N, MINRAND, MAXRAND);
		Print(arr, N);
		cout << "Первый массив в обратном порядке: \t";
		ReversePrint(arr, N);
		cout << "Первый отсортированный массив: \t\t";
		Sort(arr, N);
		cout << endl << "Первый массив, сдвинутый на " << shift << " влево: \t";
		ShiftLeft(arr, N, shift);
		cout << "Первый массив, сдвинутый на " << shift << " вправо: \t";
		ShiftRight(arr, N, shift);
		cout << endl << "Статистика первого массива. \n";
		cout << "Сумма элементов: \t\t" << Sum(arr, N) << endl;
		cout << "Среднее арифметическое: \t" << Avg(arr, N) << endl;
		cout << "Минимальное значение массива: \t" << MinValueIn(arr, N) << endl;
		cout << "Максимальное значение массива: \t" << MaxValueIn(arr, N) << endl;
		cout << endl;
	}
	if (arr_types > 1)
	{
		PrintLine();
		cout << endl << "Второй массив, значения типа double: \t";
		double brr[N];
		FillRand(brr, N);
		Print(brr, N);
		cout << "Второй массив в обратном порядке: \t";
		ReversePrint(brr, N);
		cout << "Второй отсортированный массив: \t\t";
		Sort(brr, N);
		cout << endl << "Второй массив, сдвинутый на " << shift << " влево: \t";
		ShiftLeft(brr, N, shift);
		cout << "Второй массив, сдвинутый на " << shift << " вправо: \t";
		ShiftRight(brr, N, shift);
		cout << endl << "Статистика второго массива. \n";
		cout << "Сумма элементов: \t\t" << Sum(brr, N) << endl;
		cout << "Среднее арифметическое: \t" << Avg(brr, N) << endl;
		cout << "Минимальное значение массива: \t" << MinValueIn(brr, N) << endl;
		cout << "Максимальное значение массива: \t" << MaxValueIn(brr, N) << endl;
		cout << endl;
	}
	if (arr_types > 2)
	{
		PrintLine();
		cout << endl << "Третий двумерный массив, значения типа int: \n";
		int i_arr_2[ROWS][COLS];
		FillRand(i_arr_2, ROWS, COLS);
		Print(i_arr_2, ROWS, COLS);
		cout << endl;
		cout << "Третий массив в обратном порядке: \n";
		ReversePrint(i_arr_2, ROWS, COLS);
		cout << endl << "Третий отсортированный массив: \n";
		Sort(i_arr_2, ROWS, COLS);
		cout << endl << "Третий массив, сдвинутый на " << shift << " влево: \n";
		ShiftLeft(i_arr_2, ROWS, COLS, shift);
		cout << endl << "Третий массив, сдвинутый на " << shift << " вправо: \n";
		ShiftRight(i_arr_2, ROWS, COLS, shift);
		cout << endl << "Статистика третьего массива. \n";
		cout << "Сумма элементов: \t\t" << Sum(i_arr_2, ROWS, COLS) << endl;
		cout << "Среднее арифметическое: \t" << Avg(i_arr_2, ROWS, COLS) << endl;
		cout << "Минимальное значение массива: \t" << MinValueIn(i_arr_2, ROWS, COLS) << endl;
		cout << "Максимальное значение массива: \t" << MaxValueIn(i_arr_2, ROWS, COLS) << endl;
		cout << endl;
	}
}