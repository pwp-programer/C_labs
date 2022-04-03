#include <iostream>
#include <algorithm>

using namespace std;

int bebra(const void* a, const void* b)
{
	return (*(int*)a - *(int*)b);
}

// функция с алгоритмом двоичного поиска 
int binarnyiPoisk(int arr[], int left, int right, int key)
{
	int midd = 0;
	while (1)
	{
		midd = (left + right) / 2;

		if (key < arr[midd])
			right = midd - 1;
		else if (key > arr[midd])
			left = midd + 1;
		else
			return midd;

		if (left > right)
			return -1;
	}
}

int main()
{
	setlocale(LC_ALL, "rus");

	const int a = 20;
	int array[a];
	int key = 0;
	int sort = 0;

	for (int i = 0; i < a; i++)
	{

		array[i] = rand() % 99;
		cout << " " << array[i];
	}
	cout << endl;
	qsort(array, a, sizeof(int), bebra);
	for (int i = 0; i < a; i++)
		cout << array[i] << endl;


	cout << "\n\nВведите любое число: ";
	cin >> key;

	sort = binarnyiPoisk(array, 0, a, key);

	if (sort >= 0)
	{
		cout << "Указанное число находится в ячейке с индексом: " << sort << "\n\n";
	}

	else
	{
		cout << "В массиве нет такого числа!\n\n";
	}
	return 0;
}
