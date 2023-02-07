#include <iostream>

using namespace std;

int procuramaior(float *vetor, int tam);
int procuramenor(float *vetor, int tam);

int main()
{

    int tam;
    cin >> tam;

    float *vetor1 = new float[tam];
    float *vetor2 = new float[tam - 2];

    int posMaior, posMenor;

    for (int i = 0; i < tam; i++)
    {
        cin >> vetor1[i];
    }

    posMaior = procuramaior(vetor1, tam);
    posMenor = procuramenor(vetor1, tam);

    int pos2 = 0;
    for (int i = 0; i < tam; i++)
    {
        if (i != posMaior && i != posMenor)
        {
            vetor2[pos2] = vetor1[i];
            pos2++;
        }
    }

    // cout << posMaior << " " << posMenor;

    for (int i = 0; i < tam - 2; i++)
    {
        cout << vetor2[i] << endl;
    }

    return 0;
}

int procuramaior(float *vetor, int tam)
{
    int posicao = 0;

    float maior = vetor[0];

    for (int i = 0; i < tam; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
    }

    float segundoMaior = vetor[0];

    for (int i = 0; i < tam; i++)
    {
        if (vetor[i] < maior && vetor[i] > segundoMaior)
        {
            segundoMaior = vetor[i];
            posicao = i;
        }
    }

    return posicao;
}

int procuramenor(float *vetor, int tam)
{
    int posicao = 0;

    float menor = vetor[0];

    for (int i = 0; i < tam; i++)
    {
        if (vetor[i] < menor)
        {
            menor = vetor[i];
        }
    }

    float segundoMenor = vetor[0];

    for (int i = 0; i < tam; i++)
    {
        if (vetor[i] > menor && vetor[i] < segundoMenor)
        {
            segundoMenor = vetor[i];
            posicao = i;
        }
    }

    return posicao;
}
