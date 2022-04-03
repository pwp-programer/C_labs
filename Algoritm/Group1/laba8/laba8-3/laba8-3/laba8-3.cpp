#include<string>
#include<cstring>
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	string S, S0;
	cout << "Введите строку:" << endl;
	getline(cin, S);
	cout << "\nВведите подстроку:" << endl;
	getline(cin, S0);
	int max = S.size();

	if (S.find(S0) == -1)
	{
		cout << "\nВаша строка не содержит таких элементов. Изменения не нужны.\n" << endl;
	}
	else
	{
		cout << "\nВ вашей строке есть схожие элементы." << endl;
		for (int i = S.size() - 1; i >= 0; i--)
		{
			if (S.substr(i, S0.size()) == S0)
			{
				S.erase(i, S0.size());
			}

		}
		cout << "Ваш результат: " << S << endl;
	}

	system("pause");
	return 0;
}
