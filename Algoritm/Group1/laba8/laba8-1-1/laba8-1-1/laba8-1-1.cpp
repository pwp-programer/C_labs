#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    const int MAX = 30;
    char s1[MAX], s2[MAX];
    cout << "Введите значение для первой строки: ";
    cin.get(s1, MAX);
    s2[MAX];
    s1[MAX];

    for (int i = 0; i < MAX; i++)
    {
        s2[i] = s1[i];
    }

    cout << "Первая строка 1: ";
    cout << s1 << endl;
    cout << "Вторая строка 2: ";
    cout << s2 << endl;

    system("pause");
    return 0;
}
