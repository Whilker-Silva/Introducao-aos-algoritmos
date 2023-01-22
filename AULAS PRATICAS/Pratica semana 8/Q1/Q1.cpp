#include <iostream>

using namespace std;

int main()
{
    int qtd_vendas;
    cin >> qtd_vendas;

    int valor[qtd_vendas];
    for (int i = 0; i < qtd_vendas; i++)
    {
        cin >> valor[i];
    }

    int menor, maior;
    int qtd_menor = 0, qtd_maior = 0;

    bool primeiraVez = false;

    for (int i = 0; i < qtd_vendas; i++)
    {
        int cont = 0;
        for (int j = 0; j < qtd_vendas; j++)
        {
            if (valor[i] == valor[j])
            {
                cont++;
            }
        }

        if (primeiraVez == false)
        {
            maior = valor[i];
            menor = valor[i];
            qtd_maior = cont;
            qtd_menor = cont;
            primeiraVez = true;
        }

        else if (cont > qtd_maior)
        {
            maior = valor[i];
            qtd_maior = cont;
        }

        else if (cont < qtd_menor)
        {
            menor = valor[i];
            qtd_menor = cont;
        }
    }

    cout << maior << endl
         << qtd_maior << endl
         << menor << endl
         << qtd_menor;

    return 0;
}