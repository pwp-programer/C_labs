#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int k, n, i;
    cout << "Введите число N: ";
    cin >> n;
    cout << "Введите число K: ";
    cin >> k;

    for (i = 0; i < n; i++)
    {
        cout << "Число k = " << k << "\n";
    }

    return 0;
}