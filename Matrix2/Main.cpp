#include"Matrix.h"
#include"Vector.h"
#include"Jacobi.h"

int main() {

	double * x = CreateVector(N);
	double * b = CreateVector(N);
	double ** A = CreateMatrixWithZeros(N);
	FillMatrix(A, N);
	CreateB(b, N);
	CreateX(x, N);
	//PrintMatrix(A, N);
	cout << endl;
	//PrintVector(x, N);
	//PrintVector(b, N);
	printf_s("\n");
	printf_s("\n");

	double * res = ComputeJacobi(x, b, A, N);
	PrintVector(res, N);
	printf_s("\n");
	system("PAUSE");
	return 0;
}