#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int a;
	cout << "Введите число от 0 - 9: ";
	cin >> a;
	switch (a) {
	case 0:
		cout << "0 - ноль ";
		break;
	case 1:
		cout << "1 - один ";
		break;
	case 2:
		cout << "2 - два ";
		break;
	case 3:
		cout << "3 - три ";
		break; 
	case 4:
		cout << "4 - четыре";
		break;
	case 5:
		cout << "5 - пять";
		break;
	case 6:
		cout << "6 - шесть";
		break;
	case 7:
		cout << "7 - семь";
		break;
	case 8:
		cout << "8 - восемь";
		break;
	case 9:
		cout << "9 - девять";
		break;

	}
	return 0;
}