#include <iostream>
#include <fstream>
#include <ostream>
#include <string>
#include <stdlib.h>
#include <cstdlib>
#include <Windows.h>  // Для жёсткой локализации в cmd и текстовом файле.


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


	void find_func(string place_call_this_func)
	{
		string* array = returner_arrays("C:\\github\\C_labs\\Algoritm\\Курсовая\\data.txt", "prnt");
		int size = size_func("C:\\github\\C_labs\\Algoritm\\Курсовая\\data.txt", "prnt");

		system("cls");
		cout << "Введите запрос для поиска среди записей: " << endl;
		string request;
		getline(cin, request);
		while (true)
		{
			system("cls");
			cout << "Список всех записей включающие \"" << request << "\":\n" << endl;

			bool stop_value_in_find_func = false;
			for (int i = 0; i < size; i++)
			{
				size_t pos = array[i].find(request);
				if (pos != std::string::npos)
				{
					cout << array[i];
					stop_value_in_find_func = true;
				}
			}
			if (stop_value_in_find_func == false)
			{
				system("cls");
				cout << "По запросу \"" << request << "\" ничего не найдено..." << endl;
			}

			cout << "\n\n1-Искать снова\n0-Вернутся назад\n";
			string find_val_after_find_menu;
			getline(cin, find_val_after_find_menu);
			string text = place_call_this_func;

			if (find_val_after_find_menu == "1")
			{
				system("cls");
				if (text != "usr")
				{
					find_func("admin");
					break;
				}
				else if (text == "usr")
				{
					find_func("usr");
					break;
				}
			}
			else if (find_val_after_find_menu == "0")
			{
				system("cls");
				if (text != "usr")
				{
					admin_menu();
					break;
				}
				else if (text == "usr")
				{
					usr_menu();
					break;
				}
			}
		}
	}


	void print_info_func(string place_call_this_func)
	{
		string* array = returner_arrays("C:\\github\\C_labs\\Algoritm\\Курсовая\\data.txt", "prnt");
		int size = size_func("C:\\github\\C_labs\\Algoritm\\Курсовая\\data.txt", "prnt");
		while (true)
		{
			system("cls");
			string text = place_call_this_func;
			cout << "Список всех записей:\n" << endl;
			for (int i = 0; i < size; i++)
			{
				cout << array[i];
			}
			cout << "\n\nВыберите действие:\n0-Выход в меню " << text << endl;

			string choise_value_menu_in_read_file_func;
			getline(cin, choise_value_menu_in_read_file_func);

			if (choise_value_menu_in_read_file_func == "0")
			{
				system("cls");
				if (text == "администратора")
				{
					admin_menu();
					break;
				}
				else if (text == "пользователя")
				{
					usr_menu();
					break;
				}
			}
		}
	}


	bool usr_menu()
	{
		system("cls");
		cout << "Вы вошли как пользователь\n" << endl;
		cout << "Выберите действие:\n1-Просмотр записей в txt файлах\n2-Список наиболее посещаемых городов\n3-Вывод общего количества командировочных за указанный месяц\n4-Поиск данных\n0-Выход в главное меню" << endl;

		string choise_action_in_user_func;
		getline(cin, choise_action_in_user_func);

		if (choise_action_in_user_func == "1")
		{
			system("cls");
			string place_call_this_func = "пользователя";
			print_info_func(place_call_this_func);
			return true;
		}
		else if (choise_action_in_user_func == "2")
		{
			while (true)
			{
				system("cls");
				cout << "Список городов: ";
				string* city_array = returner_arrays("C:\\github\\C_labs\\Algoritm\\Курсовая\\data.txt", "city");
				int size = size_func("C:\\github\\C_labs\\Algoritm\\Курсовая\\data.txt", "city");

				for (int i = 0; i < size - 1; i++)
				{
					cout << "Город номер " << i + 1 << ": " << city_array[i] << endl;
				}

				cout << "\n\nВыберите действие:\n0-Вернутся назад" << endl;
				string choice_value;
				getline(cin, choice_value);
				if (choice_value == "0")
				{
					usr_menu();
					break;
				}
			}
			return true;
		}
		else if (choise_action_in_user_func == "3")
		{
			while (true)
			{
				string* money_array = returner_arrays("C:\\github\\C_labs\\Algoritm\\Курсовая\\data.txt", "money");
				string* month_array = returner_arrays("C:\\github\\C_labs\\Algoritm\\Курсовая\\data.txt", "month");
				int size = size_func("C:\\github\\C_labs\\Algoritm\\Курсовая\\data.txt", "money");
				int size_m = size_func("C:\\github\\C_labs\\Algoritm\\Курсовая\\data.txt", "month");
				system("cls");

				cout << "Введите номер месяца: ";
				string month_choice;
				getline(cin, month_choice);

				system("cls");
				cout << "Общее кол-во командировочных выплат: \n\n" << endl;

				bool month_value = false;
				int counter = 0;
				for (int i = 0; i < size_m; i++)
				{
					if (month_array[i] == month_choice)
					{
						cout << "Выплата номер " << counter + 1 << ": " << "за месяц " << month_choice << ": " << money_array[i] << endl;
						month_value = true;
						counter++;
					}
				}
				if (month_value == false)
				{
					cout << "Командировочных выплат за данный месяц нет" << endl;
				}

				cout << "\n\nВыберите действие:\n0-Вернутся назад" << endl;
				string choice_value;
				getline(cin, choice_value);
				if (choice_value == "0")
				{
					usr_menu();
					break;
				}
			}
			return true;

		}
		else if (choise_action_in_user_func == "4")
		{
			system("cls");
			find_func("usr");
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

	void user_func()
	{
		string* login_array = returner_arrays("C:\\github\\C_labs\\Algoritm\\Курсовая\\komandirovki\\komandirovki\\user_data.txt", "login");
		string* pass_array = returner_arrays("C:\\github\\C_labs\\Algoritm\\Курсовая\\komandirovki\\komandirovki\\user_data.txt", "pass");
		int size = size_func("C:\\github\\C_labs\\Algoritm\\Курсовая\\komandirovki\\komandirovki\\user_data.txt", "acc");

		system("cls");
		cout << "Логин: " << endl;
		string username;
		getline(cin, username);

		cout << "Пароль: " << endl;
		string password;
		getline(cin, password);

		bool stop = false;
		while (true)
		{
			for (int i = 0; i < size; i++)
			{
				if (username == login_array[i] && password == pass_array[i])
				{
					system("cls");
					cout << "Вы вошли как пользователь" << endl;
					usr_menu();
					stop = true;
					break;
				}

			}
			if (stop == false)
			{
				system("cls");
				cout << "Пароль неверный\n\n1-Попробовать снова\n0-Выйти в главное меню\n";
				string choice_in_sign_in_user_menu;
				getline(cin, choice_in_sign_in_user_menu);

				if (choice_in_sign_in_user_menu == "1")
				{
					system("cls");
					user_func();
					break;
				}
				else if (choice_in_sign_in_user_menu == "0")
				{
					system("cls");
					start_func();
					break;
				}
			}
		}
	}

	void txt_file_func_menu()
	{
		while (true)
		{
			system("cls");
			cout << "Вы попали в меню txt-файлов\n\
1-Удаление данных из txt файлов\n2-Поиск данных в txt файлах\n3-Редактирование данных в txt файлах\
\n4-Запись в файл\n0-Выйти в меню администратора" << endl;

			string choise_txt_file_func_menu;
			getline(cin, choise_txt_file_func_menu);

			if (choise_txt_file_func_menu == "1")
			{
				bool stop_while_in_del_menu_in_txt_file = false;

				while (!stop_while_in_del_menu_in_txt_file)
				{
					system("cls");
					string path = "C:\\github\\C_labs\\Algoritm\\Курсовая\\data.txt";
					cout << "Выберите действие:\n1-Удалить файл полностью\n2-Очистить файл\n0-Вернутся назад" << endl;
					string choice_value_in_del_txt_file_menu;
					getline(cin, choice_value_in_del_txt_file_menu);

					if (choice_value_in_del_txt_file_menu == "1")
					{
						removed_file_func(path);
						break;
					}
					else if (choice_value_in_del_txt_file_menu == "2")
					{
						while (true)
						{
							system("cls");
							ofstream fout;
							fout.open(path);
							cout << "Файл очищен" << endl;
							cout << "0-Вернутся назад" << endl;
							string choice_in_clear_file_menu;
							getline(cin, choice_in_clear_file_menu);
							if (choice_in_clear_file_menu == "0")
							{
								txt_file_func_menu();
								break;
							}
						}
						break;

					}
					else if (choice_value_in_del_txt_file_menu == "0")
					{
						txt_file_func_menu();
						break;
					}
				}
				break;
			}
			else if (choise_txt_file_func_menu == "2")
			{
				system("cls");
				find_func("admin");
				break;
			}
			else if (choise_txt_file_func_menu == "3")
			{
				//? Тут должна быть функция редактирования данных в файлах
				system("cls");
				cout << "edit_func";
				break;
			}
			else if (choise_txt_file_func_menu == "4")
			{
				//? Тут должна быть функция записи в файл
				system("cls");
				cout << "write_func";
				break;
			}
			else if (choise_txt_file_func_menu == "0")
			{
				system("cls");
				admin_menu();
				break;
			}
		}
	}


	void reg_new_usr()
	{
		system("cls");
		cout << "Вы попали в меню создания нового пользователя\nимя пользователя:" << endl;
		string username;
		getline(cin, username);

		cout << "Введите пароль для нового пользователя:" << endl;
		string password;
		getline(cin, password);

		while (true)
		{
			system("cls");
			string choise_menu_value_for_register_new_user;
			cout << "Вы хотите создать учётную запись с именем: " << username << " и паролем " << password << "\n\n\
1-Подтверждение создания\n0-Отменить создание и вернутся назад" << endl;
			getline(cin, choise_menu_value_for_register_new_user);

			if (choise_menu_value_for_register_new_user == "1")
			{
				system("cls");
				ofstream fout("C:\\github\\C_labs\\Algoritm\\Курсовая\\komandirovki\\komandirovki\\user_data.txt", ios_base::app);

				if (!fout.is_open()) // если файл небыл открыт
				{
					cout << "Файл не может быть открыт или создан\n"; // напечатать соответствующее сообщение
				}
				else
				{
					fout << "\n" << username << "\n"; // запись строки в файл
					fout << password;
					fout.close();
				}

				system("cls");
				cout << "Новый пользователь добавлен\n" << endl;

				cout << "1-Создать ещё одного пользователя\n0-Вернутся назад" << endl;
				string choice_val_after_reg_new_usr;
				getline(cin, choice_val_after_reg_new_usr);

				while (true)
				{
					if (choice_val_after_reg_new_usr == "1")
					{
						reg_new_usr();
						break;
					}
					else if (choice_val_after_reg_new_usr == "0")
					{
						admin_menu();
						break;
					}
				}
				break;
			}
			else if (choise_menu_value_for_register_new_user == "0")
			{
				system("cls");
				cout << "Вы отменили создание нового пользователя" << endl;
				admin_menu();
				break;
			}
		}
	}



	string start_func()
	{
		while (true)
		{
			system("cls");
			cout << "Выберите режим:\n\n1-Администратор\n2-Пользователь\n0-Выход\n";
			string start_value;
			getline(cin, start_value);
			if (start_value == "1")
			{
				system("cls");
				entrance_in_admin_func();
				break;
			}
			else if (start_value == "2")
			{
				system("cls");
				user_func();
				break;
			}
			else if (start_value == "0")
			{
				exit(0);
				break;
			}
		}


		return " ";
	}

	void admin_menu()
	{
		while (true)
		{
			system("cls");
			cout << "Вы попали в меню администратора\n" << endl;

			cout << "1-Статистика\n2-Учётные записи\n3-Txt-файлы\n0-В главное меню" << endl;
			string admin_menu_choise_value;
			getline(cin, admin_menu_choise_value);

			if (admin_menu_choise_value == "1")
			{
				statistic_menu();
				break;
			}
			else if (admin_menu_choise_value == "2")
			{
				accounts_menu();
				break;
			}
			else if (admin_menu_choise_value == "3")
			{
				txt_file_func_menu();
				break;
			}
			else if (admin_menu_choise_value == "0")
			{
				start_func();
				break;
			}
		}
	}


	void entrance_in_admin_func()
	{
		string username;
		cout << "Введите имя администратора: ";
		getline(cin, username);
		string password;
		cout << "Введите пароль: ";
		getline(cin, password);

		string correct_admin_name = "1";
		string correct_admin_password = "1";

		while (true)
		{
			if (username == correct_admin_name and correct_admin_password == password)
			{
				admin_menu();
				break;
			}
			else
			{
				while (true)
				{
					system("cls");
					cout << "Логин или пароль не верные...\n\
Выберите действие : \n1 - Попробовать снова\n0 - Вернутся в главное меню" << endl;
					string error_admin_register_value;
					getline(cin, error_admin_register_value);
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
	}



	void edit_acc_menu()
	{
		string* login_array = returner_arrays("C:\\github\\C_labs\\Algoritm\\Курсовая\\komandirovki\\komandirovki\\user_data.txt", "login");
		string* pass_array = returner_arrays("C:\\github\\C_labs\\Algoritm\\Курсовая\\komandirovki\\komandirovki\\user_data.txt", "pass");
		int size = size_func("C:\\github\\C_labs\\Algoritm\\Курсовая\\komandirovki\\komandirovki\\user_data.txt", "acc");

		while (true)
		{
			// Вывод и сбор информации для последующей корректной работы.
			system("cls");
			cout << "Вы попали в меню редактирования учётной записи\nНеобходимо войти в аккаунт для того что бы изменить его данные\n\n\
Введите имя учётной записи: " << endl;

			string find_and_replace_username;
			getline(cin, find_and_replace_username);

			cout << "Введите пароль от учётной записи: " << endl;
			string find_and_replace_password;
			getline(cin, find_and_replace_password);

			bool error_value = false;
			// Проверка на наличие уч записи с такими логином и паролем
			for (int i = 0; i < size; i++)
			{
				if (find_and_replace_username == login_array[i] && find_and_replace_password == pass_array[i])
				{
					error_value = true;
					while (true)
					{
						system("cls");
						cout << "Выберите действие\n\n1-Изменения логина\n2-Изменение пароля\
\n3-Изменение логина и пароля учётной записи\n0-Вернутся назад\n";
						string edit_login_and_passwords_data_value;
						getline(cin, edit_login_and_passwords_data_value);

						if (edit_login_and_passwords_data_value == "1")
						{
							edit_login(find_and_replace_username, find_and_replace_password);
							break;
						}
						else if (edit_login_and_passwords_data_value == "2")
						{
							edit_pass(find_and_replace_username, find_and_replace_password);
							break;
						}
						else if (edit_login_and_passwords_data_value == "3")
						{
							edit_login_and_pass(find_and_replace_username, find_and_replace_password);
							break;
						}
						else if (edit_login_and_passwords_data_value == "0")
						{
							admin_menu();
							break;
						}
					}
				}
			}
			if (error_value == false)
			{
				system("cls");
				cout << "Логин или пароль не правильные\n\n1-Попробовать ещё раз\n0-Вернутся назад\n";
				string edit_error_data_for_reg_in_acc_menu;
				getline(cin, edit_error_data_for_reg_in_acc_menu);
				while (true)
				{
					if (edit_error_data_for_reg_in_acc_menu == "1")
					{
						edit_acc_menu();
						break;
					}
					else if (edit_error_data_for_reg_in_acc_menu == "0")
					{
						admin_menu();
						break;
					}
				}
			}
		}
	}



	void removed_file_func(string path)
	{
		string p = path;
		if (remove(p.c_str()) != 0)
		{
			while (true)
			{
				system("cls");
				cout << "Ошибка удаления файла\n\0-Вернутся назад" << endl;
				string removed_file_menu_func;
				getline(cin, removed_file_menu_func);
				if (removed_file_menu_func == "0")
				{
					txt_file_func_menu();
					break;
				}
			}
		}
		else
		{
			while (true)
			{
				system("cls");
				cout << "Файл успешно удалён\n\0-Вернутся назад" << endl;
				string removed_file_menu_func;
				getline(cin, removed_file_menu_func);
				if (removed_file_menu_func == "0")
				{
					txt_file_func_menu();
					break;
				}
			}
		}
	}


	void edit_pass(string find_and_replace_username, string find_and_replace_password)
	{
		system("cls");
		string* login_array = returner_arrays("C:\\github\\C_labs\\Algoritm\\Курсовая\\komandirovki\\komandirovki\\user_data.txt", "login");
		string* pass_array = returner_arrays("C:\\github\\C_labs\\Algoritm\\Курсовая\\komandirovki\\komandirovki\\user_data.txt", "pass");
		int size = size_func("C:\\github\\C_labs\\Algoritm\\Курсовая\\komandirovki\\komandirovki\\user_data.txt", "acc");


		ofstream fout1;
		fout1.open("C:\\github\\C_labs\\Algoritm\\Курсовая\\komandirovki\\komandirovki\\user_data.txt");
		for (int i = 0; i < size; i++)
		{
			if (find_and_replace_username == login_array[i] && find_and_replace_password == pass_array[i])
			{
				fout1 << login_array[i] << "\n";
				system("cls");
				cout << "Введите новый пароль" << endl;
				string new_pass;
				getline(cin, new_pass);
				fout1 << new_pass << "\n";
			}
			else
			{
				fout1 << login_array[i] << "\n";
				fout1 << pass_array[i] << "\n";
			}
		}


		fout1.close();
		while (true)
		{
			system("cls");
			cout << "Новое пароль сохранён\nВыберите действие:\n\n1-Смена пароля\n0-Вернутся назад\n";
			string stop_value_in_edit_login_pass;
			getline(cin, stop_value_in_edit_login_pass);

			if (stop_value_in_edit_login_pass == "1")
			{
				system("cls");
				cout << "\nВведите имя учётной записи: " << endl;
				string usr_name;
				getline(cin, usr_name);

				cout << "Введите пароль от учётной записи: " << endl;
				string usr_pass;
				getline(cin, usr_pass);

				edit_pass(usr_name, usr_pass);
				break;
			}
			else if (stop_value_in_edit_login_pass == "0")
			{
				admin_menu();
				break;
			}
		}
	}



	void edit_login_and_pass(string find_and_replace_username, string find_and_replace_password)
	{
		ifstream fout("C:\\github\\C_labs\\Algoritm\\Курсовая\\komandirovki\\komandirovki\\user_data.txt", ios_base::in);
		string line;

		if (fout.is_open())
		{
			int i = 0;
			int l_i = 0;
			int p_i = 0;
			string* login_array = new string[1000];
			string* pass_array = new string[1000];
			while (getline(fout, line))
			{
				if ((i == 0 || i % 2 == 0) && !(line.empty()))
				{

					login_array[l_i] = line;
					i++;
					l_i++;
				}
				else if ((i % 2 != 0) && !(line.empty()))
				{
					pass_array[p_i] = line;
					p_i++;
					i++;
				}

			}
			fout.close(); // закрываем файл
			int size1 = p_i - 1;

			string change_login_val = find_and_replace_username;
			string change_pass_val = find_and_replace_password;


			ofstream fout1;
			fout1.open("C:\\github\\C_labs\\Algoritm\\Курсовая\\komandirovki\\komandirovki\\user_data.txt");

			system("cls");
			for (int i = 0; i < p_i; i++)
			{
				if (change_login_val == login_array[i] && change_pass_val == pass_array[i])
				{
					cout << "Введите новый логин для учётной записи: " << endl;
					string new_login;
					getline(cin, new_login);

					cout << "Введите новый пароль для учётной записи: " << endl;
					string new_pass;
					getline(cin, new_pass);
					fout1 << new_login << "\n";
					fout1 << new_pass << "\n";
				}
				else
				{
					fout1 << login_array[i] << "\n";
					fout1 << pass_array[i] << "\n";
				}
			}
			fout1.close();
			while (true)
			{
				system("cls");
				cout << "Новое имя учётной записи сохранено\nВыберите действие:\n\n1-Смена логина\n0-Вернутся назад\n";
				string stop_value_in_edit_login_pass;
				getline(cin, stop_value_in_edit_login_pass);

				if (stop_value_in_edit_login_pass == "1")
				{
					system("cls");
					cout << "\nВведите имя учётной записи: " << endl;
					string usr_name;
					getline(cin, usr_name);

					cout << "Введите пароль от учётной записи: " << endl;
					string usr_pass;
					getline(cin, usr_pass);

					edit_login_and_pass(usr_name, usr_pass);
					break;
				}
				else if (stop_value_in_edit_login_pass == "0")
				{
					system("cls");
					admin_menu();
					break;
				}
			}
		}
	}


	void edit_user_data(string path, string mode, string login, string passwords)
	{
		system("cls");
		string* login_array = returner_arrays(path, "login");
		string* pass_array = returner_arrays(path, "pass");
		int acc_size = size_func(path, "acc");
		int data_size = size_func(path, "data");

		if (mode == "login")
		{
			// Функция записи
		}
		else if (mode == "pass")
		{

		}
		else if (mode == "all")
		{

		}
	}


	void edit_login(string find_and_replace_username, string find_and_replace_password)
	{
		string* login_array = returner_arrays("C:\\github\\C_labs\\Algoritm\\Курсовая\\komandirovki\\komandirovki\\user_data.txt", "login");
		string* pass_array = returner_arrays("C:\\github\\C_labs\\Algoritm\\Курсовая\\komandirovki\\komandirovki\\user_data.txt", "pass");
		int size = size_func("C:\\github\\C_labs\\Algoritm\\Курсовая\\komandirovki\\komandirovki\\user_data.txt", "acc");

		ofstream fout1;
		fout1.open("C:\\github\\C_labs\\Algoritm\\Курсовая\\komandirovki\\komandirovki\\user_data.txt");

		system("cls");
		for (int i = 0; i < size; i++)
		{
			if (find_and_replace_username == login_array[i] && find_and_replace_password == pass_array[i])
			{
				cout << "Введите новое имя для учётной записи: " << endl;
				string new_login;
				getline(cin, new_login);
				fout1 << new_login << "\n";
				fout1 << pass_array[i] << "\n";
			}
			else
			{
				fout1 << login_array[i] << "\n";
				fout1 << pass_array[i] << "\n";
			}
		}
		fout1.close();
		while (true)
		{
			system("cls");
			cout << "Новое имя учётной записи сохранено\nВыберите действие:\n\n1-Смена логина\n0-Вернутся назад\n";
			string stop_value_in_edit_login_pass;
			getline(cin, stop_value_in_edit_login_pass);

			if (stop_value_in_edit_login_pass == "1")
			{
				system("cls");
				cout << "\nВведите имя учётной записи: " << endl;
				string usr_name;
				getline(cin, usr_name);

				cout << "Введите пароль от учётной записи: " << endl;
				string usr_pass;
				getline(cin, usr_pass);

				edit_login(usr_name, usr_pass);
				break;
			}
			else if (stop_value_in_edit_login_pass == "0")
			{
				system("cls");
				admin_menu();
				break;
			}
		}
	}




	void prnt_acc_data()
	{
		while (true)
		{
			system("cls");
			ifstream fout("C:\\github\\C_labs\\Algoritm\\Курсовая\\komandirovki\\komandirovki\\user_data.txt", ios_base::in);
			string line;

			if (fout.is_open())
			{
				int i = 0;
				int counter = 0;
				while (getline(fout, line))
				{
					if ((i == 0 || i % 2 == 0) && !(line.empty()))
					{
						cout << "\t\tУчётная запись номер \"" << counter + 1 << "\":\n";
						cout << "\tлогин: \"" << line << "\"\n";
						i++;
						counter++;
					}
					else if ((i % 2 != 0) && !(line.empty()))
					{
						cout << "\tпароль: \"" << line << "\"\n";
						i++;
						cout << "\n\n";
					}

				}
				fout.close(); // закрываем файл
			}


			cout << "\n\nВыберите действие:\n0-Вернутся назад\n";
			string prnt_acc_data_choice_val;
			getline(cin, prnt_acc_data_choice_val);
			if (prnt_acc_data_choice_val == "0")
			{
				admin_menu();
				break;
			}
		}
	}



	void statistic_menu()
	{
		while (true)
		{
			system("cls");
			cout << "Вы находитесь в меню статистика\n" << endl;
			cout << "1-Вывод всех записей\n2-Загрузка данных из файла\n3-Вывод наиболее посещаемых городов\
\n4-Вывод общей выплаты командировочных\n0-Вернутся в меню администратора" << endl;
			string choise_first_admin_menu_func;
			getline(cin, choise_first_admin_menu_func);

			if (choise_first_admin_menu_func == "1")
			{
				system("cls");
				string place_call_this_func = "администратора";
				print_info_func(place_call_this_func);
				break;
			}
			else if (choise_first_admin_menu_func == "2")
			{
				system("cls");
				cout << "Загрузка" << endl;
				break;
			}
			else if (choise_first_admin_menu_func == "3")
			{
				system("cls");
				cout << "Города" << endl;
				break;
			}
			else if (choise_first_admin_menu_func == "4")
			{
				system("cls");
				cout << "Выплаты" << endl;
				break;
			}
			else if (choise_first_admin_menu_func == "0")
			{
				system("cls");
				admin_menu();
				break;
			}
		}
	}



	void accounts_menu()
	{
		while (true)
		{
			system("cls");
			cout << "Вы находитесь в меню учётных записей\n\
1-Создание нового пользователя\n2-Смена данных об учётной записи\n3-Вывод всех данных об учётных записях\
\n0-Вернутся назад\n";

			string admin_user_acc_menu_choice;
			getline(cin, admin_user_acc_menu_choice);

			if (admin_user_acc_menu_choice == "1")
			{
				reg_new_usr();
				break;
			}
			else if (admin_user_acc_menu_choice == "2")
			{
				edit_acc_menu();
				break;
			}
			else if (admin_user_acc_menu_choice == "3")
			{
				system("cls");
				prnt_acc_data();
				break;
			}
			else if (admin_user_acc_menu_choice == "0")
			{
				system("cls");
				admin_menu();
				break;
			}
		}
	}


private:

};




int main()
{
	SetConsoleCP(1251);           // Это база, 
	SetConsoleOutputCP(1251);	 //  это знать надо 

	MyClass apps;
	apps.start_func();

	system("pause");
	return 0;
}
