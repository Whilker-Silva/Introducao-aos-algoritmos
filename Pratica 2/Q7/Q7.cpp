#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string nome_arq1;
    string nome_arq2;
    string nome_arq3;
    string entrada1;
    string entrada2;

    cin >> nome_arq1 >> nome_arq2 >> nome_arq3;

    ifstream arq1(nome_arq1);
    arq1 >> entrada1;

    ifstream arq2(nome_arq2);
    arq2 >> entrada2;

    ofstream arq3(nome_arq3);
    arq3 << entrada1 << " " << entrada2;

    return 0;
}