#include <iostream>

using namespace std;

int main()
{

    const int bala_leve = 4;
    const int bala_media = 10;
    const int bala_pesada = 20;

    int qtd_leve;
    int qtd_media;
    int qtd_pesada;
    int valor;
    int resto;

    cin >> valor;

    qtd_pesada = valor / bala_pesada;
    resto = valor % bala_pesada;

    qtd_media = resto / bala_media;
    resto = valor % bala_media;

    qtd_leve = resto / bala_leve;
    resto = valor % bala_leve;

    cout << qtd_leve << endl;
    cout << qtd_media << endl;
    cout << qtd_pesada << endl;
    cout << bala_leve * qtd_leve + bala_media * qtd_media + bala_pesada * qtd_pesada;

    return 0;
}