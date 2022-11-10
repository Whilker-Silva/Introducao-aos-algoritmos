#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
    float custo;
    float valor_ingresso;
    float qtd_ingresso;

    ifstream arqin("teatro.txt");
    arqin >> custo >> valor_ingresso;

    qtd_ingresso = custo/valor_ingresso;
    qtd_ingresso = ceil(qtd_ingresso);

    cout << qtd_ingresso;
    ofstream arqout("convite.txt");
    arqout << qtd_ingresso;

    return 0;
}