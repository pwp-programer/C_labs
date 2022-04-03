#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int massiv[20], vvod, i = 0, nachVopr, diapozon = 0, m = 0, znach, j = 0;

	cout << "Заполнить массив автоматически?" << endl;
	cout << "Введите 1 для автоматического заполнения или 0 для самостоятельного: " << endl;
	cin >> nachVopr;

	if (nachVopr == 1)
	{
		while (m < 12)
		{
			diapozon = 0 + rand() % 99;
			massiv[m] = diapozon;
			m++;
		}
		for (j = 0; j < 12; j++)
		{
			cout << "\t Элемент массива номер " << j + 1 << " имеет значение " << massiv[j] << endl;
		}
		cout << endl;
	}
	else
	{
		while (i < 12)
		{

			do {
				cout << "Введите число номер: " << i + 1 << " в диапазоне от 0 до 99 (включительно " << endl;
				cin >> vvod;
			} while (vvod < 0 || vvod > 99);
			massiv[i] = vvod;
			i++;

		}
		for (j = 0; j < 12; j++)
		{
			cout << "\t Элемент массива номер " << j + 1 << " имеет значение: " << massiv[j] << endl;
		}
		cout << endl;
	}

	system("pause");
	return 0;
}