#pragma once
#include"stdafx.h"
#include"constants.h"

void Print(int arr[], const unsigned int N);										// ������� ������ � ������ ���������� �� �����
void Print(double arr[], const unsigned int N);										// ������� ������ � ������������� ���������� �� �����
void Print(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);	// ������� ����������� ������ � ������ ���������� �� �����

void ReversePrint(int arr[], const unsigned int N);											// ������� ������ � ������ ���������� �� ����� � �������� �������
void ReversePrint(double arr[], const unsigned int N);										// ������� ������ � ������������� ���������� �� ����� � �������� �������
void ReversePrint(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);	// ������� ����������� ������ � ������ ���������� �� ����� � �������� �������
