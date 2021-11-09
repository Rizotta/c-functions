#pragma once
#include"stdafx.h"
#include"constants.h"
#include"Print.h"

// Сумма
template<typename T> T Sum(T arr[], const unsigned int n);
template<typename T> T Sum(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);

// Среднее значение
template<typename T> double Avg(T arr[], const unsigned int n);
template<typename T> double Avg(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);

// Минимальное значение в массиве
template<typename T> T MinValueIn(T arr[], const unsigned int n);
template<typename T> T MinValueIn(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);

// Максимальное значение в массиве
template<typename T> T MaxValueIn(T arr[], const unsigned int n);
template<typename T> T MaxValueIn(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);
