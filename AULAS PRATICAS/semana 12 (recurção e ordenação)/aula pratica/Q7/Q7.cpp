#include <iostream>

using namespace std;

void preenche(int vetor[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> vetor[i];
    }
}

void imprime(int vetor[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << vetor[i] << " ";
    }
    cout << endl;
}

void selection_sort(int vetor[], int tam)
{
    int menor, aux_troca;
    for (int indice = tam-1; indice >= 0; indice--)
    {
        menor = indice;
        for (int j = indice - 1; j >= 0; j--)
        {
            if (vetor[j] < vetor[menor])
            {
                menor = j;
            }
        }
        aux_troca = vetor[indice];
        vetor[indice] = vetor[menor];
        vetor[menor] = aux_troca;
        imprime(vetor, tam);
    }
}

int main()
{
    int n;
    cin >> n;
    int vetor[n];
    preenche(vetor, n);
    selection_sort(vetor, n);

    return 0;
}
