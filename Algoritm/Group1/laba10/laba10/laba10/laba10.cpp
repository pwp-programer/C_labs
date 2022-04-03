#include <iostream>
#include <string>
using namespace std;

struct booksshop
{
	int cost;
	int colvoexzemp;
	int yearsizd;
	string namebooks;
	string authorbooks;
};


int main()
{
	setlocale(LC_ALL, "rus");
	const int n = 3;

	struct booksshop shop[n];

	for (int i = 0; i < n; i++)
	{
		cout << endl;

		cout << "Автор книги: " << endl;
		cin.ignore();
		getline(cin, shop[i].authorbooks);


		cout << "Название книги: " << endl;
		getline(cin, shop[i].namebooks);
		//	cin.ignore();

		cout << "Год издания: " << endl;
		cin >> shop[i].yearsizd;

		cout << "Стоймость: " << endl;
		cin >> shop[i].cost;

		cout << "Количество экземпляров: " << endl;
		cin >> shop[i].colvoexzemp;
	}

	cout << endl;







	//  Âûâîä âñåãî ñïèñêà
	for (int j = 0; j < n; j++)
	{
		cout << "\tАвтор номер: " << j + 1 << endl;
		cout << shop[j].authorbooks << endl;
		cout << shop[j].namebooks << endl;
		cout << shop[j].yearsizd << endl;
		cout << shop[j].cost << endl;
		cout << shop[j].colvoexzemp << endl;
	}

	//  Ââîä ñ êîíñîëè àâòîðà êíèãè
	string avtor;
	int index = 0;
	cout << "Введиет автора для поиска его книг: ";
	cin.ignore();
	getline(cin, avtor);
	//	cin.ignore();
	for (int q = 0; q < n; q++)
	{
		if (shop[q].authorbooks == avtor)
		{
			/*cout << shop[q].authorbooks << endl;
			cout << shop[q].namebooks << endl;
			cout << shop[q].yearsizd << endl;
			cout << shop[q].cost << endl;
			cout << shop[q].colvoexzemp << endl;*/

			index += shop[q].colvoexzemp;
		}
	}
	cout << "\tКоличество книг данного автора:" << index << endl;

	system("pause");
	return 0;
}