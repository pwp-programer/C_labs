#include <fstream> // для операций файлового ввода/вывода
#include <iostream>
#include <windows.h>
using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	ofstream myFile;
	myFile.open("test.txt");

	int N = 0;
	cout << "Задайте значение для переменной N" << endl;
	cin >> N;
	string avtor, name, godisd, colvoex;
	int cost;
	myFile << N << endl;
	if (myFile.is_open())
	{
		cout << "Файл открыт" << endl;
		for (int i = 0; i < N; i++)
		{
			cout << "Введите автора: ";
			cin >> avtor;
			myFile << avtor << " ";

			cout << "Введите название книги: ";
			cin >> name;
			myFile << name << " ";


			cout << "Год издания: ";
			cin >> godisd;
			myFile << godisd << " ";

			cout << "Цена: ";
			cin >> cost;
			myFile << cost << " ";

			cout << "Количество экземпляров: ";
			cin >> colvoex;
			myFile << colvoex << endl;

		}
	}
	else
	{
		cout << "Файл не удалось открыть" << endl;
	}




	system("pause");
	return 0;
}