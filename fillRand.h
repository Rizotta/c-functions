#pragma once
#include"stdafx.h"
#include"Сonstants.h"

void FillRand(int arr[], const unsigned int N, int minRand = 0, int maxRand = 100);											// Заполняет массив случайными числами типа int
void FillRand(double arr[], const unsigned int N, int minRand = 0, int maxRand = 100);										// Заполняет массив случайными числами типа double
void FillRand(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int minRand = 0, int maxRand = 100);	// Заполняет двумерный массив случайными числами типа int
void FillRand(float arr[], const unsigned int N, int minRand = 0, int maxRand = 100);										// Заполняет массив случайными числами типа float
