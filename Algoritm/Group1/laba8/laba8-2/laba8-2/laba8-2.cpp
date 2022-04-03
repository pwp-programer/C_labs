#include <iostream>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	const int size = 30;
	char str[size], symbol;
	cout << "Введите строку : ";
	cin.getline(str, size);
	cout << "Введите символ : ";
	cin >> symbol;
	for (int i = 0; i < size; i++)
	{
		if (str[i] == symbol) str[i] = '*';
	}

	/*
	string str, symbol;
	cout << "Введите строку : ";
	getline(cin, str);
	cout << "Введите символ : ";
	cin >> symbol;
	for (int i = 0; i < str.size(); i++)
	{
		if (str.substr(i, 1) == symbol) str.replace(i, 1, "*");
	}
	*/
	cout << "Строка после изменения - " << str;
	return 0;
}
