#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	double a, b, h, f, x, c;
	double A_A, B_B, C_C;
	A_A = 1;
	B_B = 1;
	C_C = 1;
	cout << "Введите значение a: ";
	cin >> a;
	cout << "Введите значение b: ";
	cin >> b;
	cout << "Введите значение h: ";
	cin >> h;

	while (a <= b)
	{
		x = a;
		f = A_A * pow(x, 3) + B_B * x - C_C;
		cout << f << "\n";
		a += h;
	}

	return 0;
}
