// 9__3__6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

#include <fstream>
#include <iomanip>
using namespace std;


int main()
{
    ifstream in("f.txt");

    int i;
    while (in >> i)
    {
        if (i < 0)
            cout << setw(5) << i << endl;
    }
    in.close();
    return 0;
}

