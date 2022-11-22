#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
    float altura_degraus;
    float altura_total;
    float qtd_degraus;

    ifstream arqin("entrada.txt");
    arqin >> altura_degraus >> altura_total;

    qtd_degraus = (altura_total * 100) / altura_degraus;
    qtd_degraus = ceil(qtd_degraus);

    ofstream arqout("degraus.txt");
    arqout << qtd_degraus;

    return 0;
}