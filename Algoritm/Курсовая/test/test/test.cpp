#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
#include <cstdlib>
#include <map>
#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <iterator>

// NEEDED
#include <conio.h>
#include <stdio.h>
#include <algorithm>

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
			string* all_array = new string[1000];

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
					if (counter_6 == 4)
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
				all_array[i] = line;
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
			else if (mode == "all")
				return all_array;
		}
	}


	void sort_array(string* array, int size)
	{
		int n = size; vector <string> vec;

		system("cls");
		string a;
		for (int i = 0; i < n; i++)
		{
			vec.push_back(array[i]);
		}

		std::map<std::string, size_t> counter;
		for (const auto& item : vec)
		{
			counter[item]++;
		}

		std::vector<std::pair<size_t, std::string>> sorting;
		for (auto it = counter.begin(); it != counter.end(); it++)
		{
			sorting.push_back({ it->second,it->first });
		}

		std::sort(sorting.rbegin(), sorting.rend(), [](const auto& l, const auto& r)
			{
				return l.first < r.first;
			});

		std::vector<std::string> vec_result;
		vec_result.reserve(vec.size());
		for (const auto& item : sorting)
		{
			vec_result.insert(vec_result.end(), item.first, item.second);
		}

		for (const auto& item : vec_result)
		{
			std::cout << item << "\n";
		}
	}

};





int main()
{
	SetConsoleCP(1251);           // Это база, 
	SetConsoleOutputCP(1251);	 //  это знать надо 


	MyClass use;

	string* month_array = use.returner_arrays("C:\\github\\C_labs\\Algoritm\\Курсовая\\data.txt", "month");
	int size = use.size_func("C:\\github\\C_labs\\Algoritm\\Курсовая\\data.txt", "city");
	system("cls");

	string month;
	getline(cin, month);

	for (int i = 0; i < size; i++)
	{
		string zero_month = "0" + month;
		if (zero_month == month_array[i] || month == month_array[i])
			cout << "text" << endl;
	}

	return 0;
}