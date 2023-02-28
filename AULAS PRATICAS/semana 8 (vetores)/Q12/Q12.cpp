#include <iostream>

using namespace std;

int main()
{
    int tam, pos;

    // Informa tamanho primeito vetor
    cin >> tam;

    // declara vetores
    int v1[tam];
    int v2[tam * 2];

    // preenche vetor 1
    for (int i = 0; i < tam; i++)
    {
        cin >> v1[i];
    }

    // preenche vetor 2
    for (int i = 0; i < tam; i++)
    {
        cin >> v2[i];
    }

    // informa posicao
    cin >> pos;

    for (int i = 0; i < tam; i++)
    {

        for (int j = (tam + i); j > pos; j--)
        {
            v2[j] = v2[j - 1];
        }
        v2[pos] = v1[i];

        for (int j = 0; j <= (tam + i); j++)
        {
            cout << v2[j] << " ";
        }
        cout << endl;
    }

    return 0;
}
