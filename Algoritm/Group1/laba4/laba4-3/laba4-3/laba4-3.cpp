#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	double i = 1;
	double s, sum = 0.0;
	while (sum >= 0.04)
	{
		s = pow(4, i) / pow(7, i);
		sum = s + sum;
		i++;
	}
	cout << sum;
	return 0;
}