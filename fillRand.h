#pragma once
#include"stdafx.h"
#include"Constants.h"

// Заполняет массив случайными числами
void FillRand(int arr[], const unsigned int N, int minRand = 0, int maxRand = 100);											
void FillRand(double arr[], const unsigned int N, int minRand = 0, int maxRand = 100);									
void FillRand(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int minRand = 0, int maxRand = 100);
void FillRand(double arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int minRand = 0, int maxRand = 100);