#include <iostream>

using namespace std;

struct Sorteio
{
    int dezenas[6]; 
};

Sorteio verificaSoma(Sorteio *s, int qtdSorteios)
{
    int posMaior = 0;
    int somaMaior = 0;

    for (int i = 0; i < qtdSorteios; i++)
    {
        int soma = 0;

        for (int j = 0; j < 6; j++)
        {
            soma += s[i].dezenas[j];
        }

        if (soma > somaMaior)
        {
            posMaior = i;
            somaMaior = soma;
        }
    }

    return s[posMaior];
}

int main()
{
    
    int qtdSorteios;
    Sorteio *megasena;

    cin >> qtdSorteios;
    megasena = new Sorteio[qtdSorteios];

    for (int i = 0; i < qtdSorteios; i++)
    {

        for (int j = 0; j < 6; j++)
        {
            cin >> megasena[i].dezenas[j];
        }
    }

    Sorteio maior = verificaSoma(megasena, qtdSorteios);

    for (int i = 0; i < 6; i++)
    {
        cout << maior.dezenas[i] << " ";
    }

    return 0;
}
