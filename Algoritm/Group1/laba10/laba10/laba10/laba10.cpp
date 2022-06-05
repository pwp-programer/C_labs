#include <iostream>
#include <string>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>

using namespace std;

struct library
{
	string data_give_book;
	string namebooks;
	string author;
	string cipher;
	string surname_read_man;
};


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// Сколько раз будут заполнятся поля структуры
	const int n = 2;

	struct library shop[n];

	for (int i = 0; i < n; i++)
	{
		system("cls");
		cout << "Вы ввели " << i + 1 << " из " << n << ":" << endl;
		cout << "Автор книги: " << endl;
		getline(cin, shop[i].author);


		cout << "Название книги: " << endl;
		getline(cin, shop[i].namebooks);


		cout << "Дата выдачи книги: " << endl;
		getline(cin, shop[i].data_give_book);

		cout << "Шифр: " << endl;
		getline(cin, shop[i].cipher);

		cout << "Фамилия получателя книги: " << endl;
		getline(cin, shop[i].surname_read_man);
	}



	bool stop_while_in_first_menu = false;
	while (!stop_while_in_first_menu)
	{
		system("cls");
		cout << "Выберите действие:\n1-Вывод полей структуры\n2-Поиск\n" << endl;
		string choice_in_first_menu;
		cin >> choice_in_first_menu;

		if (choice_in_first_menu == "1")
		{
			//  Вывод информации из структуры
			system("cls");
			for (int j = 0; j < n; j++)
			{
				cout << "\tАвтор номер: " << j + 1 << endl;
				cout << shop[j].author << endl;
				cout << shop[j].namebooks << endl;
				cout << shop[j].data_give_book << endl;
				cout << shop[j].cipher << endl;
				cout << shop[j].surname_read_man << endl;
			}
			stop_while_in_first_menu = true;
			break;
		}
		else if (choice_in_first_menu == "2")
		{
			//  Поиск
			system("cls");
			cout << "Выберите критерий для поиска:" << endl;
			cout << "1-Поиск по фамилии автора\n2-Поиск по названию книги\n3-Поиск по шифру\n4-Поиск по фамилии читателя\n";
			string choice_in_find_menu;
			cin >> choice_in_find_menu;


			if (choice_in_find_menu == "1")
			{
				system("cls");
				cout << "Введите автора для поиска его книг: ";
				string find_author_value;
				cin.ignore();
				getline(cin, find_author_value);
				int index = 0;
				for (int q = 0; q < n; q++)
				{
					if (shop[q].author == find_author_value)
					{
						cout << shop[q].author << endl;
						index++;
					}
				}
				if (index == 0)
				{
					cout << "По данному запросу ничего не нашлось" << endl;
				}
				else
				{
					cout << "Количество упоминаний данного автора: " << index << endl;
				}

			}
			else if (choice_in_find_menu == "2")
			{
				system("cls");
				cout << "Введите название книги для её поиска: ";
				string find_namebook_value;
				cin.ignore();
				getline(cin, find_namebook_value);
				int index = 0;
				for (int q = 0; q < n; q++)
				{
					if (shop[q].namebooks == find_namebook_value)
					{
						cout << shop[q].namebooks << endl;
						index++;
					}
				}
				if (index == 0)
				{
					cout << "По данному запросу ничего не нашлось" << endl;
				}
				else
				{
					cout << "Количество упоминаний данной книги: " << index << endl;
				}
			}
			else if (choice_in_find_menu == "3")
			{
				system("cls");
				cout << "Введите шифр для поиска: ";
				string find_cipher_value;
				cin.ignore();
				getline(cin, find_cipher_value);
				int index = 0;
				for (int q = 0; q < n; q++)
				{
					if (shop[q].cipher == find_cipher_value)
					{
						cout << shop[q].cipher << endl;
						index++;
					}
				}
				if (index == 0)
				{
					cout << "По данному запросу ничего не нашлось" << endl;
				}
				else
				{
					cout << "Количество упоминаний данного шифра: " << index << endl;
				}
			}
			else if (choice_in_find_menu == "4")
			{
				system("cls");
				cout << "Введите фамилию читателя для поиска: ";
				string find_surname_read_man_value;
				cin.ignore();
				getline(cin, find_surname_read_man_value);
				int index = 0;
				for (int q = 0; q < n; q++)
				{
					if (shop[q].surname_read_man == find_surname_read_man_value)
					{
						cout << shop[q].surname_read_man << endl;
						index++;
					}
				}
				if (index == 0)
				{
					cout << "По данному запросу ничего не нашлось" << endl;
				}
				else
				{
					cout << "Количество упоминаний данной фамилии читателя: " << index << endl;
				}

			}

			stop_while_in_first_menu = true;
			break;
		}
	}




	system("pause");
	return 0;
}