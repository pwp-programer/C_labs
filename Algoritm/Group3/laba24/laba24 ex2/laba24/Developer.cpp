#include "Developer.h"

void JuniorDeveloper::code()
{
	cout << position << " ����������� �� ����� " << fullName << " ����� ���...\n";
}

void MiddleDeveloper::code()
{
	cout << position << " ����������� �� ������ " << stazh << " ���� ����� ���...\n";
}

void SeniorDeveloper::code()
{
	cout << position << " ����������� �� �������� " << company << " ����� ��������� ���������� : \n";
	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << ". " << technologies[i] << endl;
	}
}