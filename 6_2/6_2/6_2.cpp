#include <iostream>
using namespace std;

int main()
{

    setlocale(LC_ALL, "Rus");

    int const n = 10;

    int i, mas[n], max;

    int col = 0;

    cout << " Введите 10 элементов массива \n";

    for (i = 0; i < 10; i++)
    {
        cin >> mas[i]; //Ввод данных в массив
        col++;
    }

    max = mas[0];
    for (i = 1; i < n; i++)
    {
        if (max < mas[i]) max = mas[i];
    }

    cout << " Максимальный = " << max << endl;

    for (i = 0; i < n; i++)
    {
        if (mas[i] != max)
            cout << "[" << i << "]" << "=" << mas[i] << " " << endl;
    }

    system("pause");

    return 0;

}