#pragma once
#include"�onstants.h"

int Sum(int arr[], const unsigned int N);												// ���������� ����� �������
double Sum(double arr[], const unsigned int N);											
int Sum(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);			

double Avg(int arr[], const unsigned int N);											// ���������� c������ �������������� �������
double Avg(double arr[], const unsigned int N);											
double Avg(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);		

int MinValueIn(int arr[], const unsigned int N);										// ���������� ����������� �������� �� �������
double MinValueIn(double arr[], const unsigned int N);									
int MinValueIn(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);	

int MaxValueIn(int arr[], const unsigned int N);										// ���������� ������������ �������� �� �������
double MaxValueIn(double arr[], const unsigned int N);									
int MaxValueIn(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);	