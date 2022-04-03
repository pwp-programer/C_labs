#include "func.h"
#include <math.h>
#include <cmath>

double sinus(double x)
{
    return sin(x);
}

double leftpraym(double a, double b, int n)
{
    double h = (b - a) / n;
    double sum = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        sum += h * sinus(a + i * h);
    }
    return sum;
}


double rightparam(double a, double b, int n)
{
    double h = (b - a) / n;
    double sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += h * sinus(a + i * h);
    }
    return sum;
}


double trapec(double a, double b, int n)
{
    double h = (b - a) / n;
    double sum = 0, x = 2;
    for (int i = 0; i <= n; i++) {
        sum += 2 * sinus(a + i * h);
    } sum *= (x / 2) - (1 / 4) * log10(abs(2 * x + 1));
    return sum;


}

double calceValue(double a, double b, int n)
{
    double h = (b - a) / n;
    double sum = 0, x = 2;
    for (double i = 0; i++; i += h)
    {
        sum += x / (2 * x + 1);
    }
    return sum;
}

double primitive(double a, double b, int n) {
    double h = (b - a) / n;
    double sum = 0;
    for (double i = 0; i++; i += h)
    {

        sum += 1 / 2;
    }
    return sum;
}