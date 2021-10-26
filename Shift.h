#pragma once
#include"stdafx.h"
#include"Сonstants.h"
#include"Print.h"

void ShiftLeft(int arr[], const unsigned int N, int shift);											// Циклический сдвиг влево массива с целым зн-ми
void ShiftLeft(double arr[], const unsigned int N, int shift);										// Циклический сдвиг влево массива с веществ. зн-ми
void ShiftLeft(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int shift);	// Циклический сдвиг влево двумерного массива с целым зн-ми

void ShiftRight(int arr[], const unsigned int N, int shift);										// Циклический сдвиг вправо массива с целыми зн-ми
void ShiftRight(double arr[], const unsigned int N, int shift);										// Циклический сдвиг вправо массива с веществ. зн-ми
void ShiftRight(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int shift);	// Циклический сдвиг вправо двумерного массива с целым зн-ми