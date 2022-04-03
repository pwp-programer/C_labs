#include <iostream>
#include <cstdlib>
#include <Windows.h>
#include <stdio.h>
#include <time.h>
using namespace std;

//константа для хранения размера матрицы
#define MATRIX_SIZE 4

//структура, в которой хранится строка матрицы, результат сложения элементов этой строки и случайное число,
//которым будет инициализирован генератор случайных чисел в данном потоке
struct row
{
	int value[MATRIX_SIZE];
	int result;
	int rnd;
};

DWORD WINAPI generateAndCalc(void* data)
{
	//преобразуем полученные данные к типу структуры
	row* r = (row*)data;
	//инициализируем генератор случайных чисел полученным числом
	srand(r->rnd);
	//генерируем элементы строки
	for (int i = 0; i < MATRIX_SIZE; i++)
	{
		r->value[i] = rand() % 10;
	}
	//находим сумму
	r->result = 0;
	for (int i = 0; i < MATRIX_SIZE; i++)
	{
		r->result += r->value[i];
	}
	return 0;
}
int main()
{
	//инициализируем генератор случайных чисел
	srand(time(NULL));
	//определяем дескрипторы потоков,
	//идентификаторы потоков и структуры для строк матрицы
	HANDLE thread[MATRIX_SIZE];
	DWORD thrId[MATRIX_SIZE];
	row rows[MATRIX_SIZE];

	for (int i = 0; i < MATRIX_SIZE; i++)
	{
		//генерируем случайные числа для каждой строки
		rows[i].rnd = rand();
		//создаем потоки
		thread[i] = CreateThread(NULL, 0, &generateAndCalc, &rows[i], 0, &thrId[i]);
	}
	//ждем, пока все эти потоки завершатся
	WaitForMultipleObjects(MATRIX_SIZE, thread, TRUE, INFINITE);
	//выводим результат работы программы на экран
	int res = 0;
	for (int i = 0; i < MATRIX_SIZE; i++)
	{
		res += rows[i].result;
	}
	for (int i = 0; i < MATRIX_SIZE; i++)
	{
		for (int j = 0; j < MATRIX_SIZE; j++)
		{
			printf(" %d", rows[i].value[j]);
		}

		printf("\n");
	}
	printf(" | summa = %d\n", res);
	return 0;
}