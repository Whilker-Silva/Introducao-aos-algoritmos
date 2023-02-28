#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int tam = 0;
    int *vetor = new int[tam];
    int aux;

    cin >> aux;
    while (aux > 0)
    {
        if (tam % 2 == 0 and tam > 0)
        {
            int *auxi = new int[tam];

            memcpy(auxi, vetor, sizeof(int) * tam);
            delete[] vetor;

            vetor = new int[tam + 2];
            memcpy(vetor, auxi, sizeof(int) * tam);
            delete[] auxi;
        }

        vetor[tam] = aux;
        tam++;

        cin >> aux;
    }

    float mediana;
    if (tam % 2 == 0)
    {
        mediana = vetor[tam / 2];
        mediana += vetor[(tam / 2) - 1];
        mediana /= 2;
    }

    else
    {
        mediana = vetor[tam / 2];
        mediana /= 2;
    }

    cout << mediana << " ";

    return 0;
}
