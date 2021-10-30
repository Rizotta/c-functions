#include"Statistics.h"
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

double Sum(double arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	double sum = 0;
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

double Avg(double arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	return Sum(arr, ROWS, COLS) / (ROWS * COLS);
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

double MinValueIn(double arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	double min = arr[0][0];
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

double MaxValueIn(double arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	double max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (max < arr[i][j]) max = arr[i][j];
		}
	}
	return max;
}