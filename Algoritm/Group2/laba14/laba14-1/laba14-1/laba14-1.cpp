#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	//  Первый массив
	const int length = 30;
	int array1[length];
	int array2[length];

	cout << "Заполняем первый массив" << endl;
	for (int i = 0; i < length; i++)
	{
		array1[i] = rand() % 99;
	}
	cout << endl;

	cout << "Первый массив заполенен" << endl;
	for (int i = 1; i < length; i++)
	{
		int vajno = array1[i];
		int j = i - 1;
		while (j >= 0 && array1[j] > vajno)
		{
			array1[j + 1] = array1[j];
			array1[j] = vajno;
			j--;
		}
	}

	cout << "Первый массив отсортирован" << endl;
	for (int k = 0; k < length; k++)
	{
		cout << array1[k] << " ";
	}
	cout << endl;



	// Второй массив
	cout << "Заполняем второй массив" << endl;
	for (int i = 0; i < length; i++)
	{
		array2[i] = rand() % 99;
	}
	cout << endl;

	cout << "Второй массив отсортирован" << endl;
	for (int i = 1; i < length; i++)
	{
		int key = array2[i];
		int j = i - 1;
		while (j >= 0 && array2[j] < key)
		{
			array2[j + 1] = array2[j];
			array2[j] = key;
			j--;
		}
	}

	cout << "Вывод отсортированого массива" << endl;
	for (int i = 0; i < length; i++)
	{
		cout << array2[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}
