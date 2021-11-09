#pragma once
#include"stdafx.h"
#include"constants.h"
#include"Print.h"

// Сдвиг влево
template<typename T> void ShiftLeft(T arr[], const unsigned int N, int shift);
template<typename T> void ShiftLeft(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int shift);

// Сдвиг вправо
template<typename T> void ShiftRight(T arr[], const unsigned int N, int shift);
template<typename T> void ShiftRight(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int shift);
