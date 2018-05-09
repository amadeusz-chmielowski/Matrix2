#pragma once
#include"Variables.h";
double residual_norm(double *x, double * b, double ** A, int n) {
	int i;
	int j;
	double *r;
	double r_norm;

	r = new double[n];

	for (i = 0; i < n; i++)
	{
		r[i] = -b[i];
		for (j = 0; j < n; j++)
		{
			r[i] = r[i] + A[i][j] * x[j];
		}
	}

	r_norm = 0.0;
	for (i = 0; i < n; i++)
	{
		r_norm = r_norm + r[i] * r[i];
	}
	r_norm = sqrt(r_norm);

	delete[] r;

	return r_norm;
}

double * ComputeJacobi(double *  x, double * b, double ** A, int n)
{
	int iteration = 0;
	double relerror = 0;
	double * x_new = new double[n]; 
	double big=0;
	double temp=0;
	do {
		for (int i = 0; i <= n-1; i++)
		{
			x_new[i] = b[i];
			for (int j = 0; j <= n-1; j++)
			{
				if (i != j
					)
					x_new[i] = x_new[i] - A[i][j] * x[j];
			}
			temp = (x_new[i]) / A[i][i];
			relerror = residual_norm(x, b, A, n);
			if (relerror>big)
				big = relerror;
			x[i] = temp;
		}
		iteration++;
		if (iteration % 4 == 0) {
			cout << " ... " << iteration;
		}
	} while (relerror>error);
	return x;
}


