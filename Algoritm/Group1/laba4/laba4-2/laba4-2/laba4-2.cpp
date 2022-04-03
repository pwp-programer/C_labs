#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	double i = 1;
	while (i <= 3)
	{
		cout << "number " << i << " !" << "\n";
		i++;
	}

	return 0;
}
