#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	const int stroka = 3, stolb = 3;
	cout << "Заполните массив, максимальный размер 3х3: " << endl;
	double massiv[3][3];
	int index = 0;


	// Сбор данных
	for (int j = 0; j < 3; j++)
	{
		for (int i = 0; i < 3; i++)
		{
			cout << "Введите значение элемента массива под номером " << i + 1 << ": ";
			cin >> massiv[j][i];
		}
		cout << endl;
	}



	// Вывод данных
	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			cout << massiv[x][y];
		}
		cout << endl;
	}

	//  Условие
	for (int i = 0; i < stolb; i++)
	{
		for (int j = 0; j < stroka; j++)
		{
			if (massiv[i][j] == massiv[j][i])
			{
				index++;
			}
		}
	}

	if (index == stroka * stolb)
	{
		cout << "Массив симметричен" << endl;
	}
	else
	{
		cout << "Массив не симметричен" << endl;
	}


	system("pause");
	return 0;
}
