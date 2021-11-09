#include<iostream>
using namespace std;

const unsigned int N = 5;
const unsigned int MINRAND = 100;
const unsigned int MAXRAND = 200;
const unsigned int ROWS = 4;
const unsigned int COLS = 5;

// Заполняет массив случайными числами
void FillRand(int arr[], const unsigned int N, int minRand = 0, int maxRand = 100);											
void FillRand(double arr[], const unsigned int N, int minRand = 0, int maxRand = 100);										
void FillRand(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int minRand = 0, int maxRand = 100);
void FillRand(double arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int minRand = 0, int maxRand = 100);

// Выводит массив на экран
template<typename T>void Print(T arr[], const unsigned int n);
template<typename T>void Print(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);

// Выводит массив на экран в обратном порядке
template<typename T>void ReversePrint(T arr[], const unsigned int n);
template<typename T>void ReversePrint(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned COLS);

// Выводит линию - разделитель на экран
void PrintLine();

// Сортировка массива
template<typename T>void Sort(T arr[], const unsigned int N);
template<typename T>void Sort(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned COLS);

// Сдвиг влево
template<typename T> void ShiftLeft(T arr[], const unsigned int N, int shift);
template<typename T> void ShiftLeft(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int shift);

// Сдвиг вправо
template<typename T> void ShiftRight(T arr[], const unsigned int N, int shift);
template<typename T> void ShiftRight(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int shift);

// Сумма
template<typename T> T Sum(T arr[], const unsigned int n);
template<typename T> T Sum(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);

// Среднее значение
template<typename T> double Avg(T arr[], const unsigned int n);
template<typename T> double Avg(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);

// Минимальное значение в массиве
template<typename T> T MinValueIn(T arr[], const unsigned int n);
template<typename T> T MinValueIn(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);

// Максимальное значение в массиве
template<typename T> T MaxValueIn(T arr[], const unsigned int n);
template<typename T> T MaxValueIn(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);

void main()
{
	setlocale(LC_ALL, "");
	int arr_types;
	cout << "Сколько массивов отобразить? \n1 - одномерный int,\n2 - плюс одномерный double, \n3 - плюс двумерный int,  \n4 - плюс двумерный double";
	cout << "\nВведите количество = > "; cin >> arr_types;
	if (arr_types == 0 || arr_types > 4)
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
	if (arr_types > 3)
	{
		PrintLine();
		cout << endl << "Четвёртый двумерный массив, значения типа double: \n";
		double i_arr_22[ROWS][COLS];
		FillRand(i_arr_22, ROWS, COLS);
		Print(i_arr_22, ROWS, COLS);
		cout << endl;
		cout << "Четвёртый массив в обратном порядке: \n";
		ReversePrint(i_arr_22, ROWS, COLS);
		cout << endl << "Четвёртый отсортированный массив: \n";
		Sort(i_arr_22, ROWS, COLS);
		cout << endl << "Четвёртый массив, сдвинутый на " << shift << " влево: \n";
		ShiftLeft(i_arr_22, ROWS, COLS, shift);
		cout << endl << "Четвёртый массив, сдвинутый на " << shift << " вправо: \n";
		ShiftRight(i_arr_22, ROWS, COLS, shift);
		cout << endl << "Статистика четвёртого массива. \n";
		cout << "Сумма элементов: \t\t" << Sum(i_arr_22, ROWS, COLS) << endl;
		cout << "Среднее арифметическое: \t" << Avg(i_arr_22, ROWS, COLS) << endl;
		cout << "Минимальное значение массива: \t" << MinValueIn(i_arr_22, ROWS, COLS) << endl;
		cout << "Максимальное значение массива: \t" << MaxValueIn(i_arr_22, ROWS, COLS) << endl;
		cout << endl;
	}
}

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

 //Print
template<typename T>void Print(T arr[], const unsigned int n) 
{
	for (unsigned int i = 0; i < N; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

template<typename T>void Print(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	for (unsigned int i = 0; i < ROWS; i++)
	{
		for (unsigned int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

// ReversePrint
template<typename T>void ReversePrint(T arr[], const unsigned int n)
{
	for (int i = N - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

template<typename T>void ReversePrint(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned COLS)
{
	for (unsigned int i = 0; i < ROWS; i++)
	{
		for (int j = COLS - 1; j >= 0; j--)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

// PrintLine
void PrintLine()
{
	cout << "---------------------------------------------------------------------------------" << endl;
}

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

// Sum
template<typename T>T Sum(T arr[], const unsigned int n)
{
	T sum = T();
	for (unsigned int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

template<typename T> T Sum(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	T sum = T();
	for (unsigned int i = 0; i < ROWS; i++)
	{
		for (unsigned int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

// Avg
template<typename T> double Avg(T arr[], const unsigned int n)
{
	return (double)Sum(arr, N) / N;
}

template<typename T> double Avg(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}

// MinValueIn
template<typename T> T MinValueIn(T arr[], const unsigned int n)
{
	T min = arr[0];
	for (unsigned int i = 0; i < N; i++)
	{
		if (min > arr[i]) min = arr[i];
	}
	return min;
}

template<typename T> T MinValueIn(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	T min = arr[0][0];
	for (unsigned int i = 0; i < ROWS; i++)
	{
		for (unsigned int j = 0; j < COLS; j++)
		{
			if (min > arr[i][j]) min = arr[i][j];
		}
	}
	return min;
}

// MaxValueIn
template<typename T> T MaxValueIn(T arr[], const unsigned int n)
{
	T max = arr[0];
	for (unsigned int i = 0; i < N; i++)
	{
		if (max < arr[i]) max = arr[i];
	}
	return max;
}

template<typename T> T MaxValueIn(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	T max = arr[0][0];
	for (unsigned int i = 0; i < ROWS; i++)
	{
		for (unsigned int j = 0; j < COLS; j++)
		{
			if (max < arr[i][j]) max = arr[i][j];
		}
	}
	return max;
}
