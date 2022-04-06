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

	cout << "Введите число: ";
	long double number;
	cin >> number;

	cout << fixed << setprecision(0) << fact(number) << std::endl;

	system("pause");
	return 0;
}