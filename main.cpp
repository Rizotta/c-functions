#include<iostream>
//#include<time.h>	// библиотека на С, чтобы случайные числа были разными
//#include<ctime>		// такая же библиотека на С++, чтобы случайные числа были разными
using namespace std;

const unsigned int ROWS = 4;
const unsigned int COLS = 5;

void FillRand(int arr[], const unsigned int N, int minRand = 0, int maxRand = 100);													// Заполняет массив случайными числами
void FillRand(double arr[], const unsigned int N, int minRand = 0, int maxRand = 100);												// Заполняет массив случайными числами, перезагруженная функция
void FillRand(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int minRand = 0, int maxRand = 100);			// Заполняет массив случайными числами, перезагруженная функция для двумерного массива
void Print(int arr[], const unsigned int N);					// Выводит массив на экран
void Print(double arr[], const unsigned int N);					// Выводит массив на экран
void Print(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);// Выводит массив на экран


void ReversePrint(int arr[], const unsigned int N);				// Выводит массив в обратном порядке на экран
int Sum(int arr[], const unsigned int N);						// Возвращает сумму массива
double Avg(int arr[], const unsigned int N);					// Возвращает cреднее арифметическое элементов массива
int MinValueIn(int arr[], const unsigned int N);				// Возвращает минимальное значение из массива
int MaxValueIn(int arr[], const unsigned int N);				// Возвращает максимальное значение из массива
void Sort(int arr[], const unsigned int N);						// Сортирует массив в порядке возрастания
void ShiftLeft(int arr[], const unsigned int N, int shift);		// Выполняет циклический сдвиг влево на заданное число элементов
void ShiftRight(int arr[], const unsigned int N, int shift);	// Выполняет циклический сдвиг вправо на заданное число элементов


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

	cout << "Массив в обратном порядке: \t"; ReversePrint(arr, N);
	cout << "Сумма элементов массива: \t" << Sum(arr, N) << endl;
	cout << "Среднее арифметическое: \t" << Avg(arr, N) << endl;
	cout << "Минимальное значение массива: \t" << MinValueIn(arr, N) << endl;
	cout << "Максимальное значение массива: \t" << MaxValueIn(arr, N) << endl;
	cout << "Массив в порядке возрастания: \t"; Sort(arr, N);
	int shift;
	cout << "Введите величину сдвига => "; cin >> shift;
	ShiftLeft(arr, N, shift);
	ShiftRight(arr, N, shift);
}

void FillRand(int arr[], const unsigned int N, int minRand, int maxRand)
{
	for (unsigned int i = 0; i < N; i++)
	{
		//arr[i] = rand();				// случайные значения
		//arr[i] = rand() % 100;		// значения меньше 100
		//arr[i] = rand() % 50 + 50;	// значения от 50 до 100

		arr[i] = rand() % (maxRand - minRand) + minRand;	// значения от minRand до maxRand
	}
}

void FillRand(double arr[], const unsigned int N, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	for (unsigned int i = 0; i < N; i++)
	{
		arr[i] = (long long)rand() % ((long long)maxRand - minRand) + minRand;
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

void Print(int arr[], const unsigned int N)
{
	for (unsigned int i = 0; i < N; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Print(double arr[], const unsigned int N)
{
	for (unsigned int i = 0; i < N; i++)
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


void ReversePrint(int arr[], const unsigned int N)
{
	for (int i = N - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

int Sum(int arr[], const unsigned int N)
{
	int sum = 0;
	for (unsigned int i = 0; i < N; i++)
	{
		sum += arr[i];
	}
	return sum;
}

double Avg(int arr[], const unsigned int N)
{
	return (double)Sum(arr, N) / N;
}

int MinValueIn(int arr[], const unsigned int N)
{
	int min = arr[0];
	for (unsigned int i = 0; i < N; i++)
	{
		if (min > arr[i]) min = arr[i];
	}
	return min;
}

int MaxValueIn(int arr[], const unsigned int N)
{
	int max = arr[0];
	for (unsigned int i = 0; i < N; i++)
	{
		if (max < arr[i]) max = arr[i];
	}
	return max;
}

void Sort(int arr[], const unsigned int N)
{
	for (unsigned int i = 0; i < N; i++)
	{
		for (unsigned int j = (N - 1); j > i; j--)
		{
			if (arr[j] < arr[j - 1])
			{
				int temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
			}
		}
	}

	Print(arr, N);
}

void ShiftLeft(int arr[], const unsigned int N, int shift)
{
	int shift_clr;
	shift_clr = shift % N;
	cout << "Массив, сдвинутый на " << shift << " влево: \t";
	for (int i = shift_clr; i < N; i++)
	{
		cout << arr[i] << "\t";
	}
	for (unsigned int i = 0; i < shift_clr; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void ShiftRight(int arr[], const unsigned int N, int shift)
{
	int shift_clr;
	shift_clr = shift % N;
	cout << "Массив, сдвинутый на " << shift << " вправо: \t";
	for (int i = N - shift_clr; i < N; i++)
	{
		cout << arr[i] << "\t";
	}
	for (unsigned int i = 0; i < N - shift_clr; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
