#include <iostream>

using namespace std;

void preenche(float vetor[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> vetor[i];
    }
}

void imprime(float vetor[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << vetor[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    float vetor[n];
    preenche(vetor, n);
    imprime(vetor, n);

    return 0;
}
