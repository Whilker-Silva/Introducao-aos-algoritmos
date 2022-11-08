#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    int horas;
    int minutos;
    int segundos;

    cin >> horas;
    cin >> minutos;

    horas = horas * 60;
    minutos = horas + minutos;
    segundos = minutos * 60;

    ofstream arquivo("saida.txt");
    arquivo << horas << endl
            << minutos << endl
            << segundos;
}