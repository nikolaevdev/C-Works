#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
  
	char a1[15], a2[15];

    ifstream in1("f.txt", ios_base::in);
    ifstream in2("g.txt", ios_base::in);
    ofstream out("h.txt");

	if ((!in1.is_open()) || (!in2.is_open()) || (!out.is_open()))
		cout << "Error reding\n\n\n";
	else
	{
		for (; in1.peek() != EOF;)
		{
			in1.getline(a1, 15);
			in2.getline(a2, 15);

			out << (atof(a1) + atof(a2)) / 2 << endl;

		}
		in1.close();
		in2.close();
		out.close();
	}

    return 0;
}