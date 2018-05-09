#pragma once
#include"Variables.h"

double * CreateVector(int n) {
	double * vector = new double[n];
	for (int i = 0; i < n; i++) {
		vector[i] = (double)0;
	}
	return vector;
}

void CreateB(double * vector, int n)
{
	for (int i = 1; i < n + 1; i++) {
		vector[i - 1] = sin(i*(f + 1));
	}
}

void CreateX(double * vector, int n)
{
	for (int i = 1; i < n + 1; i++) {
		vector[i - 1] = (double)1;
	}
}

void PrintVector(double * vector, int n)
{
	for (int i = 0; i < n; i++) {
		cout << vector[i] << "\n";
	}
	cout << endl;
}