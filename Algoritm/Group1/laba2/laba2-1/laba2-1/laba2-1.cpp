#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int num1, num2, num3;
	cout << "Введите первое число: ";
	cin >> num1;
	cout << "Введите второе число: ";
	cin >> num2;
	cout << "Введите третье число: ";
	cin >> num3;

	if (num1 < num2 && num1 < num3) {
		cout << "Наименьшее число: " << num1;
	}
	else if (num2 < num1 && num2 < num3) {
		cout << "Наименьшее число: " << num2;
	}
	else if (num3 < num1 && num3 < num2) {
		cout << "Наименьшее число: " << num3;
	}
	return 0;
}
