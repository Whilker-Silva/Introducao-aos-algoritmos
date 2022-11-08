#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    int valor;
    int algarismo1;
    int algarismo2;
    int algarismo3;
    int resto;
    int soma;
    int produto;

    cin >> valor;

    algarismo1 = valor / 100;
    resto = valor % 100;

    algarismo2 = resto / 10;
    algarismo3 = resto % 10;

    soma = algarismo1 + algarismo2 + algarismo3;
    produto = algarismo1 * algarismo2 * algarismo3;

    cout << soma;

    ofstream arquivo("saida.txt");
    arquivo << produto;

    return 0;
}