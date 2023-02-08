#include <iostream>
#include <cstring>

using namespace std;

void AUMENTAVETOR(int *vetor, int tam, int pos)
{
    int *vetorauxiliar = new int[tam - 1];
    vetorauxiliar = vetor;
    delete[] vetor;
    vetor = new int[tam];
    vetor = vetorauxiliar;
    vetor[pos] = 0;
    delete[] vetorauxiliar;
}

int main()
{

    int n1, n2;
    cin >> n1 >> n2;

    int *vetor1 = new int[n1];
    int *vetor2 = new int[n2];

    for (int i = 0; i < n1; i++)
    {
        cin >> vetor1[i];
    }
    for (int i = 0; i < n2; i++)
    {
        cin >> vetor2[i];
    }

    // procura sequencia no primeiro vetor e adicionar no
    // vetorsequencia que vai aumentar de tamanho conforme precisar
    int *vetorsequencia = new int[1];
    vetorsequencia[0] = vetor1[0];

    int inicioSeq = 0, fimSeq = 0, tamSeq = 1;

    for (int i = 1; i < n1; i++)
    {
        if (vetor1[i] == vetorsequencia[fimSeq] + 1)
        {
            fimSeq++;
            tamSeq++;
            AUMENTAVETOR(vetorsequencia, tamSeq, fimSeq);
            vetorsequencia[fimSeq] = vetor1[i];
        }

        for (int j = 0; j < tamSeq; j++)
        {
            cout << vetorsequencia[j] << " ";
        }
        cout << endl;
    }

    return 0;
}

