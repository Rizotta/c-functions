#pragma once
#include"stdafx.h"
#include"Constants.h"

// Выводит массив на экран
void Print(int arr[], const unsigned int N);									
void Print(double arr[], const unsigned int N);										
void Print(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);	
void Print(double arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);

// Выводит массив в обратном порядке
void ReversePrint(int arr[], const unsigned int N);								
void ReversePrint(double arr[], const unsigned int N);										
void ReversePrint(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);	
void ReversePrint(double arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);

// Выводит линию - разделитель
void PrintLine();																