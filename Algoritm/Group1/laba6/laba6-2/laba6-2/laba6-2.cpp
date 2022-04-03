#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int massiv[20], vvod, i = 0;

	while (i < 20)
	{

		do {
			cout << "Введите число под номером: " << i + 1 << " от 10 до 100 (включительно): " << endl;
			cin >> vvod;
		} while (vvod < 10 || vvod > 100);
		massiv[i] = vvod;
		i++;

	}
	cout << "\tВывод на экран " << endl;

	for (i = 0; i < 20; i++)
	{
		cout << "Значение массива под номером: " << i + 1 << " : " << massiv[i] << endl;
	}
	cout << "bebra" << endl;

	system("pause");
	return 0;
}
