#pragma once
#include"stdafx.h"
#include"Constants.h"
#include"Print.h"

// Циклический сдвиг влево
void ShiftLeft(int arr[], const unsigned int N, int shift);										
void ShiftLeft(double arr[], const unsigned int N, int shift);									
void ShiftLeft(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int shift);

// Циклический сдвиг вправо
void ShiftRight(int arr[], const unsigned int N, int shift);									
void ShiftRight(double arr[], const unsigned int N, int shift);									
void ShiftRight(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int shift);