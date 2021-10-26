#include<iostream>
//#include<time.h>	// библиотека на С, чтобы случайные числа были разными
//#include<ctime>		// такая же библиотека на С++, чтобы случайные числа были разными
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

// Выводит массив на экран
void Print(int arr[], const unsigned int N);									// Âûâîäèò ìàññèâ íà ýêðàí
void Print(double arr[], const unsigned int N);
void Print(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);

// Выводит массив на экран в обратном порядке
void ReversePrint(int arr[], const unsigned int N);								// Âûâîäèò ìàññèâ â îáðàòíîì ïîðÿäêå
void ReversePrint(double arr[], const unsigned int N);
void ReversePrint(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);

// Выводит линию - разделитель на экран
void PrintLine();

// Сортировка массива
void Sort(int arr[], const unsigned int N);											
void Sort(double arr[], const unsigned int N);										
void Sort(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);	

// Сдвиг влево
void ShiftLeft(int arr[], const unsigned int N, int shift);											
void ShiftLeft(double arr[], const unsigned int N, int shift);										
void ShiftLeft(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int shift);	

// Сдвиг вправо
void ShiftRight(int arr[], const unsigned int N, int shift);										
void ShiftRight(double arr[], const unsigned int N, int shift);										
void ShiftRight(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int shift);

// Сумма
int Sum(int arr[], const unsigned int N);												
double Sum(double arr[], const unsigned int N);
int Sum(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);

// Среднее значение
double Avg(int arr[], const unsigned int N);											
double Avg(double arr[], const unsigned int N);
double Avg(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);

// Минимальное значение в массиве
int MinValueIn(int arr[], const unsigned int N);										
double MinValueIn(double arr[], const unsigned int N);
int MinValueIn(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);

// Максимальное значение в массиве
int MaxValueIn(int arr[], const unsigned int N);										
double MaxValueIn(double arr[], const unsigned int N);
int MaxValueIn(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);

void main()
{
	setlocale(LC_ALL, "");
	int arr_types;
	cout << "Сколько массивов отобразить? \n1 - одномерный int,\n2 - плюс одномерный double, \n3 - плюс двумерный int";
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

// FillRand
void FillRand(int arr[], const unsigned int N, int minRand, int maxRand)
{
	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}

void FillRand(double arr[], const unsigned int N, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % ((long long)maxRand - minRand) + minRand;
		arr[i] /= 100;
	}
}

void FillRand(int arr[ROWS][COLS], const unsigned int COLS, const unsigned int ROWS, int minRand, int maxRand)
{
	for (int i = 0; i < COLS; i++)
	{
		for (int j = 0; j < ROWS; j++)
		{
			arr[i][j] = rand() % (maxRand - minRand) + minRand;
		}
	}
}

// Print
void Print(int arr[], const unsigned int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Print(double arr[], const unsigned int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Print(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

// ReversePrint
void ReversePrint(int arr[], const unsigned int N)
{
	for (int i = N - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void ReversePrint(double arr[], const unsigned int N)
{
	for (int i = N - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void ReversePrint(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	for (int i = 0; i < ROWS; i++)
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

// Sum
int Sum(int arr[], const unsigned int N)
{
	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum += arr[i];
	}
	return sum;
}

double Sum(double arr[], const unsigned int N)
{
	double sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum += arr[i];
	}
	return sum;
}

int Sum(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

// Avg
double Avg(int arr[], const unsigned int N)
{
	return (double)Sum(arr, N) / N;
}

double Avg(double arr[], const unsigned int N)
{
	return Sum(arr, N) / N;
}

double Avg(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}

// MinValueIn
int MinValueIn(int arr[], const unsigned int N)
{
	int min = arr[0];
	for (int i = 0; i < N; i++)
	{
		if (min > arr[i]) min = arr[i];
	}
	return min;
}

double MinValueIn(double arr[], const unsigned int N)
{
	double min = arr[0];
	for (int i = 0; i < N; i++)
	{
		if (min > arr[i]) min = arr[i];
	}
	return min;
}

int MinValueIn(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	int min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (min > arr[i][j]) min = arr[i][j];
		}
	}
	return min;
}

// MaxValueIn
int MaxValueIn(int arr[], const unsigned int N)
{
	int max = arr[0];
	for (int i = 0; i < N; i++)
	{
		if (max < arr[i]) max = arr[i];
	}
	return max;
}

double MaxValueIn(double arr[], const unsigned int N)
{
	double max = arr[0];
	for (int i = 0; i < N; i++)
	{
		if (max < arr[i]) max = arr[i];
	}
	return max;
}

int MaxValueIn(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	int max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (max < arr[i][j]) max = arr[i][j];
		}
	}
	return max;
}