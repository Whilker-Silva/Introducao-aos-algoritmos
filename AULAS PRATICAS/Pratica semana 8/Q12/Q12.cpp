#include <iostream>

using namespace std;

int main()
{
    // informando tamanho dos vetores
    int n1, n2;
    cin >> n1 >> n2;

    // informando valores dos vetores
    int *vetor1 = new int[n1];
    for (int i = 0; i < n1; i++)
    {
        cin >> vetor1[i];
    }

    int *vetor2 = new int[n2];
    for (int i = 0; i < n2; i++)
    {
        cin >> vetor2[i];
    }

    // comparando vetores
    int iguais = 0;

    if (n1 > n2)
    {
        for (int i = 0; i < n1; i++)
        {
            for (int j = 0; j < n2; j++)
            {
                if (vetor1[i] == vetor2[j])
                {
                    iguais++;
                }
            }
        }
    }

    cout << iguais;

    

    return 0;
}