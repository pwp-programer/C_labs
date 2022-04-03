#include <iostream>
#include <string>
using namespace std;


void recursia();

int main()
{
	setlocale(LC_ALL, "RUS");
	recursia();
	return 0;
}

void recursia()
{
	int A, B;
	cout << "Введите число А: "; cin >> A;
	cout << "\nВведите число B: "; cin >> B;
	if (A > B)
	{
		for (int i = 0; A > B; A--)
		{
			cout << A << " ";
		}
		cout << B << endl << endl;
	}
	if (A < B)
	{
		for (int i = 0; A <= B; A++)
		{
			cout << A << " ";
		}
	}
	recursia();
}
