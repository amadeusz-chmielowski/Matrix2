#pragma once
#include "Variables.h"


double ** CreateMatrixWithZeros(int n) {
	double ** matrix;
	matrix = new double*[n];
	for (int i = 0; i < n; i++) {
		matrix[i] = new double[n];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			matrix[i][j] = (double)0;
		}
	}
	return matrix;
}

void PrintMatrix(double ** matrix, int n)
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << matrix[j][i] << " ";
		}
		cout << endl;
	}
}

void FillMatrix(double ** matrix, int number)
{
	for (int i = 0; i < number; i++) {
		for (int j = 0; j < number; j++) {
			if (i == j) {
				matrix[j][i] = 5 + e;
			}
			if (i == j + 1 || i == j - 1 || i == j - 2 || i == j + 2) {
				matrix[j][i] = -1;
			}
		}
	}
}