#include<iostream>
using namespace std;

void FillRand(int arr[], const unsigned int N);					// Заполняет массив случайными числами
void Print(int arr[], const unsigned int N);					// Выводит массив на экран
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
	FillRand(arr, N);
	cout << "Исходный массив: \t\t"; Print(arr, N);
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

void FillRand(int arr[], const unsigned int N) 
{
	for (int i = 0; i < N; i++)
	{
		arr[i] = rand();
	}
}

void Print(int arr[], const unsigned int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
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
	for (int i = 0; i < N; i++)
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
	for (int i = 0; i < N; i++)
	{
		if (min > arr[i]) min = arr[i];
	}
	return min;
}

int MaxValueIn(int arr[], const unsigned int N)
{
	int max = arr[0];
	for (int i = 0; i < N; i++)
	{
		if (max < arr[i]) max = arr[i];
	}
	return max;
}

void Sort(int arr[], const unsigned int N)
{
	int temp;
	for (int i = 0; i < N; i++)
	{
		for (int j = (N - 1); j > i; j--)
		{
			if (arr[j] < arr[j - 1])
			{
				temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
			}
		}
	}

	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
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
	for (int i = 0; i < shift_clr; i++)
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
	for (int i = 0; i < N - shift_clr; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}