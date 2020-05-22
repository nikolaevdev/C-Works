#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file;

    file.open("text_in.txt");
    if (!file) return 1;

    char str[80];
    int min = 80, ns = 0, strnum = 0;

    // Считывать и отображать строки в цикле, пока не eof
    while (!file.getline(str, sizeof(str)).eof()) {
        ns++;
        if (strlen(str) < min) {
            min = strlen(str);
            strnum = ns;
        }
    }
       
    cout << "Min = " << strnum << endl;
    file.close();
    return 0;
}