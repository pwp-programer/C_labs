#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
#include <cstdlib>
#include <map>

using namespace std;



class MyClass
{
public:

	int size_func(string path, string mode)
	{
		ifstream fout(path, ios_base::in);
		if (fout.is_open())
		{
			int i = 0, size_acc = 0, size_6 = 0, city_size = 0;
			string line;

			while (getline(fout, line))
			{
				if ((i == 0 || i % 2 == 0) && !(line.empty()))
				{
					size_acc++;
				}
				if (i % 6 == 0)
				{
					size_6++;
				}
				if (i % 5 == 0)
				{
					city_size++;
				}
				i++;
			}
			fout.close();
			if (mode == "acc")
				return size_acc;
			else if (mode == "prnt")
				return i;
			else if (mode == "6_data" || mode == "money")
				return size_6;
			else if (mode == "city")
				return city_size;
		}
	}


	string* returner_arrays(string path, string mode)
	{
		ifstream fout(path, ios_base::in);
		if (fout.is_open())
		{
			int i = 0, l_i = 0, p_i = 0, counter_6 = 0, prnt_counter = 0, city_counter = 0, money_counter = 0, month_counter = 0;
			string line;
			string* login_array = new string[1000];
			string* pass_array = new string[1000];
			string* data_array = new string[1000];
			string* city_array = new string[1000];
			string* money_array = new string[1000];
			string* month_array = new string[1000];

			while (getline(fout, line))
			{
				if ((i == 0 || i % 2 == 0) && !(line.empty()))
				{
					login_array[l_i] = line;
					l_i++;
				}
				if (!(i == 0 || i % 2 == 0) && !(line.empty()))
				{
					pass_array[p_i] = line;
					p_i++;
				}
				if (counter_6 <= 6)
				{
					data_array[prnt_counter] = data_array[prnt_counter] + line + " ";
					if (counter_6 == 5)
					{
						city_array[city_counter] = line;
						city_counter++;
					}
					if (counter_6 == 2)
					{
						month_array[month_counter] = line;
						month_counter++;
					}
					counter_6++;
				}
				if (counter_6 >= 6)
				{
					cout << money_array[money_counter] << endl;
					money_array[money_counter] = line;
					money_counter++;

					data_array[prnt_counter] = data_array[prnt_counter] + "\n";
					prnt_counter++;
					counter_6 = 0;
				}
				i++;
			}
			fout.close();
			if (mode == "login")
				return login_array;
			else if (mode == "pass")
				return pass_array;
			else if (mode == "prnt")
				return data_array;
			else if (mode == "city")
				return city_array;
			else if (mode == "money")
				return money_array;
			else if (mode == "month")
				return month_array;
		}
	}



	void func()
	{
		string* array = returner_arrays("C:\\github\\C_labs\\Algoritm\\Курсовая\\data.txt", "prnt");
		int size = size_func("C:\\github\\C_labs\\Algoritm\\Курсовая\\data.txt", "prnt");

		map <string, int> mp;

		/* Алгоритм проверки:
			1. Заполнить mp знаениями из массива для ключей и 1 для самих объектов.
			2. Цикл в котором мы проверим элемент на вхождение в mp и посчитаем количество вхождений.
			3. По итогу перезапишем значение объекта для ключа который мы только что проверили.
			4. Отсортируем по ключам и запишем в новый массив.
			5. Вернём массив для дальнейшей работы с ним.

		Методы:
			1. swap
			2. find
			3. count
			4. contains

		*/
		map<int, string> m1;
		map<int, int>::size_type i;
		typedef pair<int, int> Int_Pair;

		m1 = { {2, "Витебск"},{2, "Минск"} };

		// Keys must be unique in map, so duplicates are ignored
		i = m1.count(2);
		cout << i << endl;

		i = m1.count(1);
		cout << i << endl;

	}
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	MyClass use;
	use.func();


	return 0;
}