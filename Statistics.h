#pragma once
#include"Сonstants.h"

int Sum(int arr[], const unsigned int N);												// Возвращает сумму массива
double Sum(double arr[], const unsigned int N);											
int Sum(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);			

double Avg(int arr[], const unsigned int N);											// Возвращает cреднее арифметическое массива
double Avg(double arr[], const unsigned int N);											
double Avg(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);		

int MinValueIn(int arr[], const unsigned int N);										// Возвращает минимальное значение из массива
double MinValueIn(double arr[], const unsigned int N);									
int MinValueIn(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);	

int MaxValueIn(int arr[], const unsigned int N);										// Возвращает максимальное значение из массива
double MaxValueIn(double arr[], const unsigned int N);									
int MaxValueIn(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);	