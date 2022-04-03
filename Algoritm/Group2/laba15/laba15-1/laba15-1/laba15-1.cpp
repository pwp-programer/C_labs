#include <iostream>
using namespace std;
void root(int a)
{

    if (a != 0) {
        cout << a % 10;
        root(a / 10);
    }
}
int main()
{
    int a;
    setlocale(LC_ALL, "rus");
    cout << "Введите число : ";
    cin >> a;
    cout << "Перевернутое число : "; root(a);
}
