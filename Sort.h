#pragma once
#include"stdafx.h"
#include"Сonstants.h"
#include"Print.h"

void Sort(int arr[], const unsigned int N);											// Сортирует массив c целыми значениями в порядке возрастания
void Sort(double arr[], const unsigned int N);										// Сортирует массив с вещественными значениями в порядке возрастания
void Sort(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);	// Сортирует многомерный массив в порядке возрастания