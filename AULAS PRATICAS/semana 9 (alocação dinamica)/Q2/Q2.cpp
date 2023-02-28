#include <iostream>
#include <cstring>

using namespace std;

void aumentaVetor(int *v, int tam)
{
    int *aux = new int[tam];

    memcpy(aux, v, sizeof(int) * tam);
    delete[] v;

    v = new int[tam + 2];
    memcpy(v, aux, sizeof(int) * tam);
    delete[] aux;
}

int main()
{
    int tam = 0;
    int primeira = 0;
    int *vetor = new int[tam];
    //aumentaVetor(vetor, tam);
    int aux;

    cin >> aux;
    while (aux > 0)
    {
        if (tam % 2 == 0 and tam > 0)
        {
            /*if (primeira == 0)
            {
                aumentaVetor(vetor, tam);
                primeira++;
            }*/
            aumentaVetor(vetor, tam);
        }

        vetor[tam] = aux;
        tam++;

        cin >> aux;
    }

    

    return 0;
}
