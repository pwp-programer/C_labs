#include "Developer.h"

void JuniorDeveloper::code()
{
	cout << position << " разработчик по имени " << fullName << " пишет код...\n";
}

void MiddleDeveloper::code()
{
	cout << position << " разработчик со стажем " << stazh << " года пишет код...\n";
}

void SeniorDeveloper::code()
{
	cout << position << " разработчик из компании " << company << " знает следующие технологии : \n";
	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << ". " << technologies[i] << endl;
	}
}