#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	const int max = 25;
	char str[max];
	int index = 0;


	cout << "Введите строку: ";
	cin.get(str, max);



	for (int i = 0; i < max; i++)
	{
		if (str[i] == 0)
		{
			cout << "Ваша строка имеет размер: " << i << endl;
			break;
		}

	}



	system("pause");
	return 0;
}
