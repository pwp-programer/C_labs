#include <iostream>
#include <fstream>
#include <ostream>
#include <string>
#include <stdlib.h>
#include <cstdlib>


using namespace std;

class MyClass
{
public:

	void read_file(string place_call_this_func)
	{

		bool stop_choise_in_menu_for_read_file = false;
		while (!stop_choise_in_menu_for_read_file)
		{
			system("cls");
			string text = place_call_this_func;
			cout << "Список всех записей:\n" << endl;


			std::string line;

			std::ifstream in("C:\\github\\C_labs\\Algoritm\\Курсовая\\data.txt"); // окрываем файл для чтения
			if (in.is_open())
			{
				while (getline(in, line))
				{
					std::cout << line << std::endl;
				}
				in.close(); // закрываем файл
			}


			cout << "\n\nВыберите действие:\n0-Выход в меню " << text << endl;

			string choise_value_menu_in_read_file_func;
			cin >> choise_value_menu_in_read_file_func;

			if (choise_value_menu_in_read_file_func == "0")
			{
				system("cls");
				if (text == "администратора")
				{
					first_admin_menu_func();
					stop_choise_in_menu_for_read_file = true;
					break;
				}
				else if (text == "пользователя")
				{
					first_user_menu_func();
					stop_choise_in_menu_for_read_file = true;
					break;
				}
			}
		}


	}


	bool first_user_menu_func()
	{
		system("cls");
		cout << "Вы вошли как пользователь\n" << endl;
		cout << "Выберите действие:\n1-Просмотр записей в txt файлах\n2-Список наиболее посещаемых городов\n\
3-Вывод общего количества командировочных за указанный месяц\n4-Поиск данных\n0-Выход в главное меню" << endl;

		string choise_action_in_user_func;
		cin >> choise_action_in_user_func;

		if (choise_action_in_user_func == "1")
		{
			system("cls");
			string place_call_this_func = "пользователя";
			read_file(place_call_this_func);
			return true;
		}
		else if (choise_action_in_user_func == "2")
		{
			system("cls");
			cout << "Список городов" << endl;
			return true;
		}
		else if (choise_action_in_user_func == "3")
		{
			system("cls");
			cout << "Общее кол-во командировочных указаний" << endl;
			return true;
		}
		else if (choise_action_in_user_func == "4")
		{
			system("cls");
			cout << "Поиск данных" << endl;
			return true;
		}
		else if (choise_action_in_user_func == "0")
		{
			system("cls");
			start_func();
			return true;
		}


		/*
		stop_while_in_user_func_value = true;
		break;
		*/
	}

	string user_func()
	{
		string username, password;
		cout << "Введите имя пользователя: ";
		cin >> username;
		cout << "Введите пароль: ";
		cin >> password;

		string data_value[2];

		std::ifstream file("user_data.txt"); // окрываем файл для чтения
		string str;
		if (file.is_open())
		{
			// Считывание логина и пароля из файла
			int i = 0;
			while (getline(file, str))
			{
				data_value[i] = str; // Добавление их в массив для последующей обработки
				i++;
			}

			bool stop_while_in_user_func_value = false;

			while (!stop_while_in_user_func_value)
			{
				if (data_value[0] == username && data_value[1] == password)
				{
					stop_while_in_user_func_value = first_user_menu_func();
				}
				else
				{
					system("cls");
					cout << "Логин или пароль не верные.\nПопробуйте снова...\n" << endl;
					string error_user_menu_value;
					cout << "1-Попробовать снова\n0-Выход в главное меню" << endl;
					cin >> error_user_menu_value;

					if (error_user_menu_value == "1")
					{
						system("cls");
						user_func();
						stop_while_in_user_func_value = true;
						break;
					}
					else if (error_user_menu_value == "0")
					{
						system("cls");
						start_func();
						stop_while_in_user_func_value = true;
						break;
					}
				}

			}


		}
		file.close();

		return "";
	}

	void txt_file_func_menu()
	{

		bool stop_while_in_txt_file_func_menu = false;
		while (!stop_while_in_txt_file_func_menu)
		{
			system("cls");
			cout << "Вы попали в меню txt-файлов\n" << endl;


			cout << "1-Удаление данных из txt файлов\n2-Поиск данных в txt файлах\n3-Редактирование данных в txt файлах\
\n4-Запись в файл\n0-Выйти в меню администратора" << endl;

			string choise_txt_file_func_menu;
			cin >> choise_txt_file_func_menu;

			if (choise_txt_file_func_menu == "1")
			{
				//? Тут должна быть функция удаления
				system("cls");
				cout << "del_func";

				choise_txt_file_func_menu = true;
				break;
			}
			else if (choise_txt_file_func_menu == "2")
			{
				//? Тут должна быть функция поиска
				system("cls");
				cout << "find_func";

				choise_txt_file_func_menu = true;
				break;
			}
			else if (choise_txt_file_func_menu == "3")
			{
				//? Тут должна быть функция редактирования данных в файлах
				system("cls");
				cout << "edit_func";

				choise_txt_file_func_menu = true;
				break;
			}
			else if (choise_txt_file_func_menu == "4")
			{
				//? Тут должна быть функция записи в файл
				system("cls");
				cout << "write_func";

				choise_txt_file_func_menu = true;
				break;
			}
			else if (choise_txt_file_func_menu == "0")
			{
				system("cls");
				first_admin_menu_func();

				choise_txt_file_func_menu = true;
				break;
			}
		}


	}


	string register_new_user()
	{


		cout << "Вы попали в меню создания нового пользователя\n" << endl;
		cout << "Введите имя пользователя:" << endl;
		string username;
		cin >> username;

		cout << "\nВведите пароль для нового пользователя:" << endl;
		string password;
		cin >> password;


		bool stop_while_for_menu_in_register_user = false;
		while (!stop_while_for_menu_in_register_user)
		{
			string choise_menu_value_for_register_new_user;
			cout << "\n1-Для подтверждения нового пользователя\n0-Отменить действие и выйти в меню администратора" << endl;
			cin >> choise_menu_value_for_register_new_user;

			if (choise_menu_value_for_register_new_user == "1")
			{
				system("cls");
				ofstream fout("user_data.txt"); // создаём объект класса ofstream для записи и связываем его с файлом cppstudio.txt
				fout << username << "\n"; // запись строки в файл
				fout << password << "\n";
				system("cls");
				fout.close(); // закрываем файл
				cout << "Новый пользователь добавлен" << endl;
				stop_while_for_menu_in_register_user = true;
				break;

			}
			else if (choise_menu_value_for_register_new_user == "0")
			{
				system("cls");
				cout << "Вы отменили создание нового пользователя" << endl;
				first_admin_menu_func();
				stop_while_for_menu_in_register_user = true;
				break;
			}
		}









		return "";
	}




	string start_func()
	{
		bool while_stop_for_start_func = false;
		while (!while_stop_for_start_func)
		{
			system("cls");
			cout << "Выберите режим:\n1-Администратор\n2-Пользователь\n0-Выход\n";
			string start_value;
			cin >> start_value;
			if (start_value == "1")
			{
				system("cls");
				cout << entrance_in_admin_func() << endl;
				while_stop_for_start_func = true;
				break;
			}
			else if (start_value == "2")
			{
				system("cls");
				cout << user_func() << endl;
				while_stop_for_start_func = true;
				break;
			}
			else if (start_value == "0")
			{
				exit(0);
				while_stop_for_start_func = true;
				break;
			}
		}


		return " ";
	}

	bool first_admin_menu_func()
	{
		system("cls");
		cout << "Вы попали в меню администратора\n" << endl;

		cout << "1-Статистика\n2-Учётные записи\n3-Txt-файлы\n0-В главное меню" << endl;
		string admin_menu_choise_value;
		cin >> admin_menu_choise_value;

		bool stop_while_for_first_admin_menu_func = false;
		while (!stop_while_for_first_admin_menu_func)
		{
			if (admin_menu_choise_value == "1")
			{
				system("cls");
				//cout << read_file();
				/*
				stop_while_in_admin_func = true;
				break;
				*/
				cout << "Вы находитесь в меню статистика\n" << endl;
				cout << "1-Вывод всех записей\n2-Загрузка данных из файла\n3-Вывод наиболее посещаемых городов\
\n4-Вывод общей выплаты командировочных\n0-Вернутся в меню администратора" << endl;
				string choise_first_admin_menu_func;
				cin >> choise_first_admin_menu_func;

				if (choise_first_admin_menu_func == "1")
				{
					system("cls");
					string place_call_this_func = "администратора";
					read_file(place_call_this_func);
					stop_while_for_first_admin_menu_func = true;
					break;
				}
				else if (choise_first_admin_menu_func == "2")
				{
					system("cls");
					cout << "Загрузка" << endl;
					stop_while_for_first_admin_menu_func = true;
					break;
				}
				else if (choise_first_admin_menu_func == "3")
				{
					system("cls");
					cout << "Города" << endl;
					stop_while_for_first_admin_menu_func = true;
					break;
				}
				else if (choise_first_admin_menu_func == "4")
				{
					system("cls");
					cout << "Выплаты" << endl;
					stop_while_for_first_admin_menu_func = true;
					break;
				}
				else if (choise_first_admin_menu_func == "0")
				{
					system("cls");
					first_admin_menu_func();
					stop_while_for_first_admin_menu_func = true;
					break;
				}


				//return true;

			}
			else if (admin_menu_choise_value == "2")
			{
				system("cls");
				register_new_user();
				/*
				stop_while_in_admin_func = true;
				break;
				*/
				stop_while_for_first_admin_menu_func = true;
				break;
				return true;
			}
			else if (admin_menu_choise_value == "3")
			{
				system("cls");

				txt_file_func_menu();

				stop_while_for_first_admin_menu_func = true;
				break;
				return true;
			}
			else if (admin_menu_choise_value == "3")
			{
				stop_while_for_first_admin_menu_func = true;
				break;
				system("cls");

				txt_file_func_menu();

				return true;
			}
			else if (admin_menu_choise_value == "0")
			{
				system("cls");
				start_func();
				/*
				stop_while_in_admin_func = true;
				break;
				*/
				stop_while_for_first_admin_menu_func = true;
				break;
				return true;

			}
			else
			{
				return false;
			}
		}

	}


	string entrance_in_admin_func()
	{
		string username;
		cout << "Введите имя пользователя: ";
		cin >> username;
		string password;
		cout << "Введите пароль: ";
		cin >> password;

		/*
		string correct_admin_name = "ADMIN";
		string correct_admin_password = "1234";
		*/
		string correct_admin_name = "1";
		string correct_admin_password = "1";


		bool stop_while_in_admin_func = false;

		while (!stop_while_in_admin_func)
		{
			if (username == correct_admin_name and correct_admin_password == password)
			{

				stop_while_in_admin_func = first_admin_menu_func();
			}
			else
			{
				bool return_to_start_menu = false;
				while (!return_to_start_menu)
				{
					system("cls");
					cout << "Логин или пароль не верные...\n" << endl;
					cout << "Выберите действие: \n1-Попробовать снова\n0-Вернутся в главное меню" << endl;
					string error_admin_register_value;
					cin >> error_admin_register_value;
					if (error_admin_register_value == "1")
					{
						system("cls");
						entrance_in_admin_func();
						break;
					}
					else if (error_admin_register_value == "0")
					{
						system("cls");
						start_func();
						break;
					}
				}

			}
		}



		return " ";
	}

private:

};




int main()
{
	setlocale(LC_ALL, "rus");

	/*
	char buff[50]; // буфер промежуточного хранения считываемого из файла текста
	ifstream fin("C:\\Users\\pwp\\Desktop\\Курсовая\\data.txt");

	fin >> buff; // считали первое слово из файла
	cout << buff << endl; // напечатали это слово

	fin.getline(buff, 50); // считали строку из файла
	fin.close(); // закрываем файл
	cout << buff << endl; // напечатали эту строку
	*/

	MyClass apps;
	apps.start_func();

	system("pause");
	return 0;
}
