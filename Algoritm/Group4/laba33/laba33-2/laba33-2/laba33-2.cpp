#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

long double fact(long double n) { // Функция считающая факториал
	long double sum = 1;

	for (long double i = 1; i < n + 1; i++)
	{
		sum = sum * i;
	}

	return sum;
}

int main()
{
	setlocale(LC_ALL, "rus");

	int number, number1, n, k, m;
	cout << "1 - факториал. 2 - вычисления: ";
	cin >> number;

	switch (number)
	{
	case 1:
		cout << "Факториал. Введите число: " << endl;
		cin >> n;
		cout << "Факториал " << n << " равен: " << fixed << setprecision(0) << fact(n) << std::endl;
		break;
	case 2:
		cout << "Формулы: \n1 - сочетаний, 2 - размещений, 3 - размещений с повторениями." << endl;
		cin >> number1;

		switch (number1)
		{

		case 1:
			cout << "Введите n:  ";
			cin >> n;

			cout << "Введите k:  ";
			cin >> k;

			if (k <= n)
			{
				cout << fact(n) / (fact(k) * fact(n - k)) << endl;
			}
			break;

		case 2:
			cout << "Введите количество m элементов:  ";
			cin >> m;

			cout << "Введите n - элементное множество:  ";
			cin >> n;

			if (m <= n)
			{
				double answer = fact(n) / fact(n - m);
				cout << answer << endl;
			}
			break;

		case 3:
			cout << "Введите число n:  ";
			cin >> n;

			cout << "Введите число k:  ";
			cin >> k;

			double answer = pow(n, k);
			cout << answer << endl;
			break;
		}
	}

	system("pause");
	return 0;
}