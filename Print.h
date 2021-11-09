#pragma once
#include"stdafx.h"
#include"constants.h"

// Выводит массив на экран
template<typename T>void Print(T arr[], const unsigned int n);
template<typename T>void Print(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);

// Выводит массив на экран в обратном порядке
template<typename T>void ReversePrint(T arr[], const unsigned int n);
template<typename T>void ReversePrint(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned COLS);

// Выводит линию - разделитель на экран
void PrintLine();