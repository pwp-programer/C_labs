#include <iostream>
#include <fstream>
#include <ostream>
#include <string>
#include <stdlib.h>
#include <cstdlib>


#pragma once


class MyClass
{
public:

	void print_data_in_file(string place_call_this_func)
	{

		bool stop_choice_in_menu_for_read_file = false;
		while (!stop_choice_in_menu_for_read_file)
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
					stop_choice_in_menu_for_read_file = true;
					break;
				}
				else if (text == "пользователя")
				{
					first_user_menu_func();
					stop_choice_in_menu_for_read_file = true;
					break;
				}
			}
		}


	}


	bool first_user_menu_func()
	{
		system("cls");
		cout << "Вы вошли как пользователь\n" << endl;
		cout << "Выберите действие:\n1-Просмотр записей в txt файлах\n2-Список наиболее посещаемых городов\n3-Вывод общего количества командировочных за указанный месяц\n4-Поиск данных\n0-Выход в главное меню" << endl;

		string choise_action_in_user_func;
		cin >> choise_action_in_user_func;

		if (choise_action_in_user_func == "1")
		{
			system("cls");
			string place_call_this_func = "пользователя";
			print_data_in_file(place_call_this_func);
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


		ifstream fout("C:\\github\\C_labs\\Algoritm\\Курсовая\\komandirovki\\komandirovki\\user_data.txt", ios_base::in);
		string line;


		if (fout.is_open())
		{
			// -----------------------------------------------------
			int i = 0;
			int l_i = 0;
			int p_i = 0;
			string* login_array = new string[1000];
			string* pass_array = new string[1000];

			while (getline(fout, line))
			{
				//std::cout << line << std::endl;
				//cout << i << endl;
				if ((i == 0 || i % 2 == 0) && !(line.empty()))
				{

					login_array[l_i] = line;
					//cout << "login:" << login_array[i] << endl;
					l_i++;
					i++;
				}
				else if ((i % 2 != 0) && !(line.empty()))
				{
					pass_array[p_i] = line;
					//cout << "pass:" << pass_array[i] << endl;
					p_i++;
					i++;
				}

			}
			fout.close(); // закрываем файл
			int size1 = i / 2;
			int size2 = i / 2;

			// -----------------------------------------------------
			cout << "Логин: " << endl;
			string username;
			cin >> username;

			cout << "Пароль: " << endl;
			string password;
			cin >> password;


			bool stop_while_in_user_func_value = false;
			while (!stop_while_in_user_func_value)
			{
				for (int i = 0; i < size1; i++)
				{
					if (username == login_array[i] && password == pass_array[i])
					{
						system("cls");
						cout << "Вы вошли как пользователь" << endl;
						stop_while_in_user_func_value = true;
						first_user_menu_func();
						break;
					}

				}
				if (stop_while_in_user_func_value == false)
				{
					system("cls");
					cout << "Пароль неверный\n1-Попробовать снова\n0-Выйти в главное меню\n" << endl;
					string choice_in_sign_in_user_menu;
					cin >> choice_in_sign_in_user_menu;

					if (choice_in_sign_in_user_menu == "1")
					{
						system("cls");
						user_func();
						stop_while_in_user_func_value = true;
						break;
					}
					else if (choice_in_sign_in_user_menu == "0")
					{
						system("cls");
						start_func();
						stop_while_in_user_func_value = true;
						break;
					}

				}


			}


		}
		fout.close();

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

				bool stop_while_in_del_menu_in_txt_file = false;

				while (!stop_while_in_del_menu_in_txt_file)
				{
					system("cls");
					string path = "C:\\Users\\pwp\\Desktop\\del_me_pls.txt";
					cout << "Выберите действие:\n1-Удалить файл полностью\n2-Очистить файл\n0-Вернутся назад" << endl;
					string choice_value_in_del_txt_file_menu;
					cin >> choice_value_in_del_txt_file_menu;

					if (choice_value_in_del_txt_file_menu == "1")
					{

						removed_file_func(path);
						stop_while_in_del_menu_in_txt_file = true;
						break;
					}
					else if (choice_value_in_del_txt_file_menu == "2")
					{

						bool stop_choice_in_clear_file_menu = false;
						while (!stop_choice_in_clear_file_menu)
						{
							system("cls");
							ofstream fout;
							fout.open(path);
							cout << "Файл очищен" << endl;
							cout << "0-Вернутся назад" << endl;
							string choice_in_clear_file_menu;
							cin >> choice_in_clear_file_menu;
							if (choice_in_clear_file_menu == "0")
							{
								txt_file_func_menu();
								stop_choice_in_clear_file_menu = true;
								break;
							}
						}

						stop_while_in_del_menu_in_txt_file = true;
						break;

					}
					else if (choice_value_in_del_txt_file_menu == "0")
					{
						txt_file_func_menu();
						stop_while_in_del_menu_in_txt_file = true;
						break;
					}
				}





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
				ofstream fout("C:\\github\\C_labs\\Algoritm\\Курсовая\\komandirovki\\komandirovki\\user_data.txt", ios_base::app);

				if (!fout.is_open()) // если файл небыл открыт
				{
					cout << "Файл не может быть открыт или создан\n"; // напечатать соответствующее сообщение
				}
				else
				{
					fout << username << "\n"; // запись строки в файл
					fout << password << "\n";
					fout.close();
				}

				system("cls");
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
					print_data_in_file(place_call_this_func);
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


	void removed_file_func(string path)
	{
		string p = path;
		if (remove(p.c_str()) != 0)
		{
			bool stop_removed_file_menu_func = false;
			while (!stop_removed_file_menu_func)
			{
				system("cls");
				std::cout << "Ошибка удаления файла\n";
				cout << "0-Вернутся назад" << endl;
				string removed_file_menu_func;
				cin >> removed_file_menu_func;
				if (removed_file_menu_func == "0")
				{
					txt_file_func_menu();
					bool stop_removed_file_menu_func = true;
					break;
				}
			}
		}
		else
		{
			bool stop_removed_file_menu_func = false;
			while (!stop_removed_file_menu_func)
			{
				system("cls");
				std::cout << "Файл успешно удалён\n";
				cout << "0-Вернутся назад" << endl;
				string removed_file_menu_func;
				cin >> removed_file_menu_func;
				if (removed_file_menu_func == "0")
				{
					txt_file_func_menu();
					bool stop_removed_file_menu_func = true;
					break;
				}
			}
		}

	}

private:

};
