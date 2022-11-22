#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    float degrau = 0;
    float altura = 0;
    float qtd_degraus = 0;
    int arredondamento = 0;

    cin >> degrau;
    cin >> altura;

    degrau = degrau / 100;
    qtd_degraus = altura / degrau;

    arredondamento = ceil(qtd_degraus);

    cout << arredondamento << endl;

    return 0;
}