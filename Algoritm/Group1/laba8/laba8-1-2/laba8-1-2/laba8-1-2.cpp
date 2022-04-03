#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int n1 = 0, n2 = 0;

    string str1;
    cout << "Введите строку номер 1: " << endl;
    cin >> str1;
    string str2;
    cout << "Введите строку номер 2: " << endl;
    cin >> str2;


    int length1 = str1.size();
    str1 += str2;
    cout << str1 << endl;
    system("pause");
    return 0;

}
