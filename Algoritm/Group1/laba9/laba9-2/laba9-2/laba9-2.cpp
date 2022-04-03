#include <iostream>
#include <set>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	set <int> sett;
	int n;
	cout << "Задайте максимальный размер множества: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cout << "Введите число: ";
		cin >> x;
		if (sett.find(x) != sett.end())

			cout << "Yes" << endl;


		else {
			sett.insert(x);
			cout << "No" << endl;
			sett.insert(x);
		}

	}

	system("pause");
	return 0;

}
