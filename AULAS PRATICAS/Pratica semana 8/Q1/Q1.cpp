#include <iostream>

using namespace std;

void imprime(float *v, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        cout << v[i] << endl;
        // cout << *(v + i) << "";
    }

    cout << endl;
}

int main()
{
    // qtd de elementos
    int n;
    cin >> n;

    // entrada
    float *v = new float[n];

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    //imprime(v, n);

    // Saida
    float *saida = new float[n - 2];

    float maior = v[0];
    float segundoMaior = v[0];

    int posMaior = 0;
    int posSegundoMaior = 0;

    float menor = v[0];
    float segundoMenor = v[0];

    int posMenor = 0;
    int posSegundoMenor = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[i] > maior)
        {
            segundoMaior = maior;
            posSegundoMaior = posMaior;

            maior = v[i];
            posMaior = i;
        }

        else if (v[i] > segundoMaior)
        {
            segundoMaior = v[i];
            posSegundoMaior = i;
        }

        if (v[i] < menor)
        {
            segundoMenor = menor;
            posSegundoMenor = posMenor;

            menor = v[i];
            posMenor = i;
        }

        else if (v[i] < segundoMenor)
        {
            segundoMenor = v[i];
            posSegundoMenor = i;
        }
    }

    // cout << posSegundoMaior << endl;
    // cout << posSegundoMenor << endl;

    int j = 0;

    for (int i = 0; i < n; i++)
    {
        if (i != posSegundoMaior and i != posSegundoMenor)
        {
            saida[j] = v[i];
            j++;
        }
    }

    imprime(saida, n - 2);

    return 0;
}