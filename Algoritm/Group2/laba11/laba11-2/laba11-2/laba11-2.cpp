#include <iostream>
#include <math.h>

using namespace std;

void form(int x) 
{
    double z = pow(x, 2) - 2 * pow(sqrt(pow(x, 2)), 4) + 5;
} 

int main() 
{
    setlocale(LC_ALL, "rus");
    double y, & z = y;
    int x;

    cout << "Введите значение x: " << endl;
    cin >> x;

    cout << "Ваш ответ: " << endl;
    cout << y;

    return 0;
}
