#pragma once
#include"stdafx.h"
#include"�onstants.h"

void FillRand(int arr[], const unsigned int N, int minRand = 0, int maxRand = 100);											// ��������� ������ ���������� ������� ���� int
void FillRand(double arr[], const unsigned int N, int minRand = 0, int maxRand = 100);										// ��������� ������ ���������� ������� ���� double
void FillRand(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int minRand = 0, int maxRand = 100);	// ��������� ��������� ������ ���������� ������� ���� int
void FillRand(float arr[], const unsigned int N, int minRand = 0, int maxRand = 100);										// ��������� ������ ���������� ������� ���� float
