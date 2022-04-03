#include <iostream>;3
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int massiv[20];
    int i, summ = 0, minZnach, index = 0;

    // Сбор данных
    for (i = 0; i < 20; i++)
    {
        cout << "Введите значение для массива под номером " << i + 1 << " : " << endl;
        cin >> massiv[i];
        cout << endl;
    }

    minZnach = massiv[0];

    for (i = 0; i < 20; i++)
    {
        if (minZnach > massiv[i])
        {
            minZnach = massiv[i];
            index = i;

        }
    }

    for (index; index < 20; index++)
    {
        summ = summ + massiv[index];
    }
    cout << "Сумма равна: " << summ;
    cout << endl;

    system("pause");
    return 0;
}
