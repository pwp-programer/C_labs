#include <iostream>
using namespace std;
int hms_to_specs(int h, int m, int s)
{
	long n = 0;
	n = h * 3600 + m * 60 + s;
	return n;
}
int main()
{
	setlocale(LC_ALL, "rus");
	int s;
	int m;
	int h;


	while (true)
	{
		cout << "ведите количество часов: " << endl;
		cin >> h;
		cout << "ведите количество минут: " << endl;
		cin >> m;
		cout << "ведите количество секунд: " << endl;
		cin >> s;
		hms_to_specs(h, m, s);
		cout << "Количество секунд: " << hms_to_specs(h, m, s) << endl;
	}
	system("pause");
	return 0;
}
