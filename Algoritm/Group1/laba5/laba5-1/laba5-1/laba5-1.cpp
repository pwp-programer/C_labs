#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	double num1;
	cout << "Задайте значение num1: ";
	cin >> num1;

	while (num1 < 100)
	{
		cout << "Попробуйте ещё раз: ";
		cin >> num1;
	}
	cout << "Вы ввели правильное число: " << num1 << "\n";
	system("pause");
	return 0;
}
