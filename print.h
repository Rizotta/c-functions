#pragma once
#include"stdafx.h"
#include"Сonstants.h"

void Print(int arr[], const unsigned int N);									// Выводит массив на экран
void Print(double arr[], const unsigned int N);										
void Print(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);	
	
void ReversePrint(int arr[], const unsigned int N);								// Выводит массив в обратном порядке
void ReversePrint(double arr[], const unsigned int N);										
void ReversePrint(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);	

void PrintLine();																// Печатает линию - разделитель