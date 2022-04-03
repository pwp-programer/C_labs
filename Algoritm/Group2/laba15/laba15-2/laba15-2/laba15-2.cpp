#include <iostream>
using namespace std;
void nech();
int main()
{
	setlocale(LC_ALL, "rus");
	cout << "Введите числа и ноль в конце : ";
	nech();
	return 0;
}
void nech()
{
	int x;
	cin >> x;
	if (x % 2 != 0)
		cout << x;
	if (x != 0) nech();
}

