#include"Statistics.h"

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
