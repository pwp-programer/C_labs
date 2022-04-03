#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	double x, a, y;
	x = 5;
	a = 10.2;

	do
	{
		y = a * x * x;
		x++;
	} while (x <= 35);
	cout << "y = " << y << "\n";
	system("pause");
	return 0;
}
