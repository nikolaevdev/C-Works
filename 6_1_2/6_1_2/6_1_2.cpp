#include <iostream>
using namespace std;

int main()
{
    
    setlocale(LC_ALL, "Rus");

    int table[10][10];
    int sred = 0;
    int sum = 0;
    int col = 0;

    cout << "Массив: ";

    for (int t = 0; t < 10; t++) {
        for (int i = 0; i < 10; i++) {
            table[t][i] = rand() % 100 + 1;
            sum += table[t][i];
            col++;
            cout << table[t][i] << " ";
        }

        cout << '\n';

    }

    sred = sum / col;
    cout << " Среднее арифметическое введенных чисел = " << sred << endl;

    system("pause");
    
    return 0;

}