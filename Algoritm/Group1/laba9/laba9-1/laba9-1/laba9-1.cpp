#include <iostream>
#include <set>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	set <int> sett;

	int n;
	cout << "Задайте размер массива: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int x;
		cout << "Задайте значение элементу множества под номером: " << i + 1 << " : ";
		cin >> x;
		sett.insert(x);
	}

	cout << "Размер множества: " << sett.size() << endl;
	system("pause");
	return 0;
}
