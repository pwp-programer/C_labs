#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	string player1, player2;
	int znach, vvod;
	bool peremennya;
	peremennya = true;

	while (peremennya == true)
	{
		cout << "Введите значение для первого игрока: " << "\n";
		cin >> player1;
		cout << "Введите значение для второго игрока: " << "\n";
		cin >> player2;

		if (player1 == "R")
		{
			znach = 1;
		}
		else if (player1 == "P")
		{
			znach = 2;
		}
		else
		{
			znach = 3;
		}

		switch (znach)
		{
		case 1:
			if (player2 == "P")
			{
				cout << "Второй игрок победил" << "\n";
			}
			else if (player2 == "S")
			{
				cout << "Первый игрок победил" << "\n";
			}
			else
			{
				cout << "Ничья";
			}
			break;

		case 2:
			if (player2 == "S")
			{
				cout << "Второй игрок победил" << "\n";
			}
			else if (player2 == "R")
			{
				cout << "Первый игрок победил" << "\n";
			}
			else
			{
				cout << "Ничья" << "\n";
			}
			break;
		case 3:
			if (player2 == "P")
			{
				cout << "Первый игрок победил" << "\n";
			}
			else if (player2 == "R")
			{
				cout << "Второй игрок победил" << "\n";
			}
			else
			{
				cout << "Ничья" << "\n";
				break;
			}
		}
		cout << "Для продолжения введите: 1" << "\n";
		cin >> vvod;
		if (vvod == 1)
		{
			peremennya = true;
		}
		else
		{
			peremennya = false;
		}
	}

	cout << "Спасибо за игру)" << "\n";
	system("pause");
	return 0;
}
