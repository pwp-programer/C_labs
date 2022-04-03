#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int num1, num2, resoult;
	cout << "Задайте значение для num1: ";
	cin >> num1;
	cout << "Задайте значение для num2: ";
	cin >> num2;
	cout << "Введите результат умножения этих чисел: ";
	cin >> resoult;

	if (resoult == (num1 * num2))
	{
		cout << "Правильно";
	}
	else
	{
		cout << "Не правильно\n";
		cout << "Правильный ответ:" << num1 * num2;
	}

	return 0;
}