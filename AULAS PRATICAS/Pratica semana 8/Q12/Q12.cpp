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
    cout << endl;

    ///////////////////////////////////////////////////

    int *sequencia = new int[n1];
    for (int j = 0; j < n1; j++)
    {
        sequencia[j] = NULL;
    }
    sequencia[0] = vetor1[0];

    int inicio = 0, fim = 0;

    for (int i = 1; i < n1; i++)
    {
        if ((vetor1[i] - sequencia[i - 1]) == 1)
        {
            sequencia[i] = vetor1[i];
            fim++;
        }

        else
        {

            for (int j = inicio; j < fim; j++)
            {
                for (int k = 0; k < n2; k++)
                {
                    if (sequencia[j] == vetor2[k])
                    {
                        cout << vetor2[k] << " ";
                    }
                }
            }

            cout << endl;

            inicio = i;
            fim = i;
        }
    }

    return 0;
}
