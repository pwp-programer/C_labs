#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, x, i;
    n = 30;
    x = 1;

    for (i = 0; i < n; i++)
    {
        cout << pow(-1, i) * pow(x, i) << "\n";
    }
    return 0;
}
