#include <iostream>
#include <fstream>
#include <string.h>
#include <windows.h>

using namespace std;

struct bookshop
{
	string avtor;
	string name;
	int cost;
	int colvoex;
	int godizd;
};


int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);

	fstream file;
	string path = "C:\\Users\\pwp\\Desktop\\С++ labs\\Group2\\laba17\\laba17-1\\laba17-1\\test.txt";
	//string path = "test.txt";
	file.open(path);



	if (!file.is_open()) {
		cout << "error" << endl;
	}
	else {
		int n = 0;
		file >> n;

		struct bookshop* array = new bookshop[n];
		int i = 0;

		/*for (int i = 0; i < n; i++) {
			cin >> array[i].avtor;
			cin >> array[i].name;
			cin >> array[i].godizd;
			cin >> array[i].cost;
			cin >> array[i].colvoex;
		}*/

		//  Сбор данных
		while (!file.eof()) {
			file >> array[i].avtor;
			file >> array[i].name;
			file >> array[i].godizd;
			file >> array[i].cost;
			file >> array[i].colvoex;
			i++;
		}


		//  Код
		cout << "Введите автора для поиска его книг и информации по ним: ";
		string find;
		cin >> find;

		for (int i = 0; i < n; i++)
		{
			if (array[i].avtor == find)
			{
				cout << array[i].avtor << " ";
				cout << array[i].name << " ";
				cout << array[i].godizd << " ";
				cout << array[i].cost << " ";
				cout << array[i].colvoex << " ";
			}
		}

	}

	file.close();



	system("pause");
	return 0;
}
