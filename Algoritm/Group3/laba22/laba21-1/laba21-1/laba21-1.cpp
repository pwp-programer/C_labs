#include<iostream>
#include <string>

using namespace std;

class Bookshop
{
private:
	string AuthorBook, NameBook;
	int YearsPublication, Cost, NumberOfCopies;

public:



	//  Тут сработал конструктор, который принимает параметры:
	Bookshop()
	{
		AuthorBook = ""; NameBook = ""; YearsPublication = 0; Cost = 0; NumberOfCopies = 0;
	}

	Bookshop(string AuthorBook, string NameBook, int YearPublication, int Cost, int NumberOfCopies)
	{
		this->AuthorBook = AuthorBook;
		this->NameBook = NameBook;
		this->YearsPublication = YearPublication;
		this->Cost = Cost;
		this->NumberOfCopies = NumberOfCopies;
	}

	void SetInput()
	{
		cout << "Введите имя автора книги: " << endl;
		getline(cin, AuthorBook);

		cout << "Введите название книги: " << endl;
		getline(cin, NameBook);

		cout << "Введите год публикации книги: " << endl;
		cin >> YearsPublication;

		cout << "Введите цену книги: " << endl;
		cin >> Cost;


		cout << "Введите количество экземпляров: " << endl;
		cin >> NumberOfCopies;
	}

	void GetPrint()
	{
		cout << AuthorBook << endl;
		cout << NameBook << endl;
		cout << YearsPublication << endl;
		cout << Cost << endl;
		cout << NumberOfCopies << endl;
	}

	~Bookshop() { // это деструктор, не будем заставлять его чистить память, пусть просто покажет где он сработал
		cout << "Тут сработал деструктор" << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "rus");
	Bookshop shop("q", "t", 4, 5, 1);
	//shop.SetInput();
	cout << endl;
	shop.GetPrint();
	system("pause");
}