#include "func.h"
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    double a = 0.2, b = 1;
    int n = 10;
    cout << "Метод левых треугольников : " << leftpraym(a, b, n) << endl;
    cout << "Метод правых треугольников : " << rightparam(a, b, n) << endl;
    cout << "Метод трапеции : " << trapec(a, b, n) << endl;
    cout << "СalceValue : " << calceValue(a, b, n) << endl;
    cout << "Primitive : " << primitive(a, b, n) << endl;
}