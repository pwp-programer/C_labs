#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    int a, b, n;
    n = 0;
    cout << "Введите число a: ";
    cin >> a;
    cout << "Введите число b: ";
    cin >> b;

    for (a; a < b; a++)
    {
        cout << a << "\n";
        n++;

    }

    cout << b << "\n";
    cout << "Количество чисел в этом диапазоне = " << n + 1;

    return 0;
}