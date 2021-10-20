#pragma once
#include"stdafx.h"
#include"Print.h"

void ShiftLeft(int arr[], const unsigned int N, int shift);				// Выполняет циклический сдвиг влево массива с целым зн-ми
void ShiftLeft(double arr[], const unsigned int N, int shift);			// Выполняет циклический сдвиг влево массива с веществ. зн-ми

void ShiftRight(int arr[], const unsigned int N, int shift);			// Выполняет циклический сдвиг вправо массива с целыми зн-ми
void ShiftRight(double arr[], const unsigned int N, int shift);			// Выполняет циклический сдвиг вправо массива с веществ. зн-ми