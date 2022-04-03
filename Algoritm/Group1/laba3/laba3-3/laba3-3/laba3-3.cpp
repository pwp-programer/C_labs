#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    int a, b, n;
    cout << "Введите число a: ";
    cin >> a;
    cout << "Введите число b: ";
    cin >> b;
    n = b - 1;
    for (n; n > a; n--)
    {
        cout << n << "\n";

    }

    return 0;
}
