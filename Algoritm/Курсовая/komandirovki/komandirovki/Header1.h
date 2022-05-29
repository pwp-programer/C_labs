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
			cout << "������ ���� �������:\n" << endl;


			std::string line;

			std::ifstream in("C:\\github\\C_labs\\Algoritm\\��������\\data.txt"); // �������� ���� ��� ������
			if (in.is_open())
			{
				while (getline(in, line))
				{
					std::cout << line << std::endl;
				}
				in.close(); // ��������� ����
			}


			cout << "\n\n�������� ��������:\n0-����� � ���� " << text << endl;

			string choise_value_menu_in_read_file_func;
			cin >> choise_value_menu_in_read_file_func;

			if (choise_value_menu_in_read_file_func == "0")
			{
				system("cls");
				if (text == "��������������")
				{
					first_admin_menu_func();
					stop_choice_in_menu_for_read_file = true;
					break;
				}
				else if (text == "������������")
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
		cout << "�� ����� ��� ������������\n" << endl;
		cout << "�������� ��������:\n1-�������� ������� � txt ������\n2-������ �������� ���������� �������\n3-����� ������ ���������� ��������������� �� ��������� �����\n4-����� ������\n0-����� � ������� ����" << endl;

		string choise_action_in_user_func;
		cin >> choise_action_in_user_func;

		if (choise_action_in_user_func == "1")
		{
			system("cls");
			string place_call_this_func = "������������";
			print_data_in_file(place_call_this_func);
			return true;
		}
		else if (choise_action_in_user_func == "2")
		{
			system("cls");
			cout << "������ �������" << endl;
			return true;
		}
		else if (choise_action_in_user_func == "3")
		{
			system("cls");
			cout << "����� ���-�� ��������������� ��������" << endl;
			return true;
		}
		else if (choise_action_in_user_func == "4")
		{
			system("cls");
			cout << "����� ������" << endl;
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


		ifstream fout("C:\\github\\C_labs\\Algoritm\\��������\\komandirovki\\komandirovki\\user_data.txt", ios_base::in);
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
			fout.close(); // ��������� ����
			int size1 = i / 2;
			int size2 = i / 2;

			// -----------------------------------------------------
			cout << "�����: " << endl;
			string username;
			cin >> username;

			cout << "������: " << endl;
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
						cout << "�� ����� ��� ������������" << endl;
						stop_while_in_user_func_value = true;
						first_user_menu_func();
						break;
					}

				}
				if (stop_while_in_user_func_value == false)
				{
					system("cls");
					cout << "������ ��������\n1-����������� �����\n0-����� � ������� ����\n" << endl;
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
			cout << "�� ������ � ���� txt-������\n" << endl;


			cout << "1-�������� ������ �� txt ������\n2-����� ������ � txt ������\n3-�������������� ������ � txt ������\
\n4-������ � ����\n0-����� � ���� ��������������" << endl;

			string choise_txt_file_func_menu;
			cin >> choise_txt_file_func_menu;

			if (choise_txt_file_func_menu == "1")
			{

				bool stop_while_in_del_menu_in_txt_file = false;

				while (!stop_while_in_del_menu_in_txt_file)
				{
					system("cls");
					string path = "C:\\Users\\pwp\\Desktop\\del_me_pls.txt";
					cout << "�������� ��������:\n1-������� ���� ���������\n2-�������� ����\n0-�������� �����" << endl;
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
							cout << "���� ������" << endl;
							cout << "0-�������� �����" << endl;
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
				//? ��� ������ ���� ������� ������
				system("cls");
				cout << "find_func";

				choise_txt_file_func_menu = true;
				break;
			}
			else if (choise_txt_file_func_menu == "3")
			{
				//? ��� ������ ���� ������� �������������� ������ � ������
				system("cls");
				cout << "edit_func";

				choise_txt_file_func_menu = true;
				break;
			}
			else if (choise_txt_file_func_menu == "4")
			{
				//? ��� ������ ���� ������� ������ � ����
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


		cout << "�� ������ � ���� �������� ������ ������������\n" << endl;
		cout << "������� ��� ������������:" << endl;
		string username;
		cin >> username;

		cout << "\n������� ������ ��� ������ ������������:" << endl;
		string password;
		cin >> password;


		bool stop_while_for_menu_in_register_user = false;
		while (!stop_while_for_menu_in_register_user)
		{
			string choise_menu_value_for_register_new_user;
			cout << "\n1-��� ������������� ������ ������������\n0-�������� �������� � ����� � ���� ��������������" << endl;
			cin >> choise_menu_value_for_register_new_user;

			if (choise_menu_value_for_register_new_user == "1")
			{
				system("cls");
				ofstream fout("C:\\github\\C_labs\\Algoritm\\��������\\komandirovki\\komandirovki\\user_data.txt", ios_base::app);

				if (!fout.is_open()) // ���� ���� ����� ������
				{
					cout << "���� �� ����� ���� ������ ��� ������\n"; // ���������� ��������������� ���������
				}
				else
				{
					fout << username << "\n"; // ������ ������ � ����
					fout << password << "\n";
					fout.close();
				}

				system("cls");
				cout << "����� ������������ ��������" << endl;
				stop_while_for_menu_in_register_user = true;
				break;

			}
			else if (choise_menu_value_for_register_new_user == "0")
			{
				system("cls");
				cout << "�� �������� �������� ������ ������������" << endl;
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
			cout << "�������� �����:\n1-�������������\n2-������������\n0-�����\n";
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
		cout << "�� ������ � ���� ��������������\n" << endl;

		cout << "1-����������\n2-������� ������\n3-Txt-�����\n0-� ������� ����" << endl;
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
				cout << "�� ���������� � ���� ����������\n" << endl;
				cout << "1-����� ���� �������\n2-�������� ������ �� �����\n3-����� �������� ���������� �������\
\n4-����� ����� ������� ���������������\n0-�������� � ���� ��������������" << endl;
				string choise_first_admin_menu_func;
				cin >> choise_first_admin_menu_func;

				if (choise_first_admin_menu_func == "1")
				{
					system("cls");
					string place_call_this_func = "��������������";
					print_data_in_file(place_call_this_func);
					stop_while_for_first_admin_menu_func = true;
					break;
				}
				else if (choise_first_admin_menu_func == "2")
				{
					system("cls");
					cout << "��������" << endl;
					stop_while_for_first_admin_menu_func = true;
					break;
				}
				else if (choise_first_admin_menu_func == "3")
				{
					system("cls");
					cout << "������" << endl;
					stop_while_for_first_admin_menu_func = true;
					break;
				}
				else if (choise_first_admin_menu_func == "4")
				{
					system("cls");
					cout << "�������" << endl;
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
		cout << "������� ��� ������������: ";
		cin >> username;
		string password;
		cout << "������� ������: ";
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
					cout << "����� ��� ������ �� ������...\n" << endl;
					cout << "�������� ��������: \n1-����������� �����\n0-�������� � ������� ����" << endl;
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
				std::cout << "������ �������� �����\n";
				cout << "0-�������� �����" << endl;
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
				std::cout << "���� ������� �����\n";
				cout << "0-�������� �����" << endl;
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
