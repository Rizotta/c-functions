#pragma once
#include"Constants.h"

// Возвращает сумму массива
int Sum(int arr[], const unsigned int N);												
double Sum(double arr[], const unsigned int N);											
int Sum(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);			

// Возвращает cреднее арифметическое массива
double Avg(int arr[], const unsigned int N);											
double Avg(double arr[], const unsigned int N);											
double Avg(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);		

// Возвращает минимальное значение из массива
int MinValueIn(int arr[], const unsigned int N);										
double MinValueIn(double arr[], const unsigned int N);									
int MinValueIn(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);	

// Возвращает максимальное значение из массива
int MaxValueIn(int arr[], const unsigned int N);										
double MaxValueIn(double arr[], const unsigned int N);									
int MaxValueIn(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);	