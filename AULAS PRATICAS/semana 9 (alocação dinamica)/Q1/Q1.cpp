#include <iostream>
#include <cstring>

using namespace std;

int procura(float *v, int n, int teste)
{

    int maior = 0;
    int menor = 0;
    // procura maior e menor
    for (int i = 0; i < n; i++)
    {
        if (v[i] > v[maior])
        {
            maior = i;
        }

        if (v[i] < v[menor])
        {
            menor = i;
        }
    }

    int maior2 = menor;
    int menor2 = maior;
    // procura segundo maior
    for (int i = 0; i < n; i++)
    {
        if (v[i] > v[maior2] and v[i] < v[maior])
        {
            maior2 = i;
        }

        if (v[i] < v[menor2] and v[i] > v[menor])
        {
            menor2 = i;
        }
    }

    if (teste == 1)
    {
        return maior2;
    }

    else if (teste == 0)
    {
        return menor2;
    }
}

void *reduzVetor(float *vetor, int n, int maior, int menor)
{
    float *novoVetor;
    novoVetor = new float[n - 2];

    int j = 0;

    for (int i = 0; i < n - 2; i++)
    {
        if (j != maior and j != menor)
        {
            novoVetor[i] = vetor[j];
            j++;
        }

        else
        {
            j++;
            i--;
        }
    }

    delete[] vetor;

    vetor = new float[n - 2];
    memcpy(vetor, novoVetor, sizeof(float) * (n - 2));
    delete[] novoVetor;
}

int main()
{
    int n;
    cin >> n;

    float *vetor;

    vetor = new float[n];

    for (int i = 0; i < n; i++)
    {
        cin >> vetor[i];
    }

    int maior = procura(vetor, n, 1);
    int menor = procura(vetor, n, 0);

    reduzVetor(vetor, n, maior, menor);

    for (int i = 0; i < n - 2; i++)
    {
        cout << vetor[i] << endl;
    }

    delete[] vetor;

    return 0;
}
