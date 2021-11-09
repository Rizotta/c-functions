#include"Print.h"

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