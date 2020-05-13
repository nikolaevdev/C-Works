// 6_exps.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    
    setlocale(LC_ALL, "Rus");

    int i, mas[10];
    float sr_ar = 0, col = 0, sum = 0;
    cout << " Введите 10 элементов массива \n";
 
    for (i = 0; i < 10; i++)
    {
        cin >> mas[i]; //Ввод данных в массив
    }

    for (i = 0; i < 10; i++)
    {
        sum += mas[i];
        col++;
    }

    sr_ar = sum / col;
    cout << " Среднее арифметическое введенных чисел = " << sr_ar << endl;
    
    return 0;

}
