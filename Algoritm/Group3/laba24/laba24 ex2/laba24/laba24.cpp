#include <iostream>
#include "Developer.h"
int main()
{
	setlocale(LC_ALL, "");

	JuniorDeveloper junior("Настя", 18);
	junior.code();

	MiddleDeveloper middle("Влад", 24, 3.5);
	middle.code();

	SeniorDeveloper senior("Игорь", 30, "iTechArt");
	string* technologies = new string[n];
	for (int i = 0; i < n; i++) {
		cout << "Введите " << i + 1 << " технологию: ";
		cin >> technologies[i];
	}

	senior.learnNewTechnology(technologies);
	senior.code();

	system("pause");
	return 0;
}