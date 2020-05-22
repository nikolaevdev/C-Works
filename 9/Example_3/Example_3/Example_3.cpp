// Example_3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "fstream";
#include "iostream";
#include <iostream>;

using namespace std;


int main()
{
    char symbol;
    ifstream in("text_in.txt");
    ofstream out("text_out.txt");

    while (in.peek() != EOF)
    {
        in.get(symbol);
        if (symbol == 'C')
            out << "C++";
        else
            out << symbol;
    }

    in.close();
    out.close();
    return 0;
}
