#include <iostream>
#include <ctime>
using namespace std;
int DIM1; int DIM2;

int rand(int range_min, int range_max)
{
	return rand() % (range_max - range_min + 1) + range_min;
}

int** array_generator(unsigned int dim1, unsigned int dim2) {
	int** ptrary = new int* [dim1];
	for (int i = 0; i < dim1; i++) {
		ptrary[i] = new int[dim2];
	}
	return ptrary;
}

void array_destroyer(int** ary, unsigned int dim1) {
	for (int i = 0; i < dim1; i++) {
		delete[] ary[i];
	}
	delete[] ary;
}

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int** matrix;
	cout << "Введите размер двумерного массива и количество столбов: ";
	cin >> DIM1 >> DIM2;
	matrix = array_generator(DIM1, DIM2);

	for (int i = 0; i < DIM1; i++) {
		for (int j = 0; j < DIM2; j++) {
			matrix[i][j] = rand(-50, 50);
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	int min = matrix[0][0], max = matrix[0][0];

	for (int i = 0; i < DIM1; i++) {
		for (int j = 0; j < DIM2; j++) {
			if (min < matrix[i][j]) min = matrix[i][j];
			if (max > matrix[i][j]) max = matrix[i][j];
		}
	}

	cout << "Сумма " << min << " и " << max << " = " << max + min;

	array_destroyer(matrix, DIM1);
	return 0;
}
