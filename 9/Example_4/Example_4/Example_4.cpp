// Example_4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "fstream";
using namespace std;

int main()
{
    ofstream out("data.dat", ios::binary);
    double a, b, h, i;
    cout << "a = ";
    cin >> a;
    cout << "b= ";
    cin >> b;
    cout << "h = ";
    cin >> h;

    for (i = a; i <= b; i += h)
        out.write((char*)&i, sizeof(i));
    out.close();
    ifstream in("f.dat", ios::binary);

    in.seekg(sizeof(double));

    while (in.peek() != EOF) {
        in.read((char*)&i, sizeof(double));
        cout << i << ' ';
    }
    in.close();
    return 0;


}
