#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int saque;
    int notas_100;
    int notas_50;
    int notas_10;
    int resto;

    cin >> saque;

    notas_100 = saque / 100;
    resto = saque % 100;

    notas_50 = resto / 50;
    resto = resto % 50;

    notas_10 = resto / 10;

    ofstream arquivo("saque.txt");

    arquivo
        << notas_100 << endl
        << notas_50 << endl
        << notas_10;
}