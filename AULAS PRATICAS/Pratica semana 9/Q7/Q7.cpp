#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    float *vetorPar = new float[2];
    float *vetorImpar;

    int cont = 0;
    float auxiliar, mediana;
    bool negativo = false;

    while (negativo == false)
    {
        cin >> auxiliar;

        if (auxiliar < 0)
        {
            negativo = true;
        }

        else if (cont < 2)
        {
            vetorPar[cont] = auxiliar;
            cont++;
        }

        else if ((cont % 2) == 0)
        {
            // criar vetorImpar tam = cont + 1
            vetorImpar = new float[cont + 1];

            // copiar vetorPar e adicionar auxiliar na nova posicão
            memcpy(vetorImpar, vetorPar, sizeof(float) * cont);
            vetorImpar[cont] = auxiliar;

            // deletar vetorPar
            delete[] vetorPar;
            cont++;
        }

        else
        {
            // criar vetorPmpar tam = cont + 1
            vetorPar = new float[cont + 1];

            // copiar vetorImpar e adicionar auxiliar na nova posicão
            memcpy(vetorPar, vetorImpar, sizeof(float) * cont);
            vetorPar[cont] = auxiliar;

            // deletar vetorImpar
            delete[] vetorImpar;
            cont++;
        }
    }

    if ((cont % 2) == 0)
    {

        mediana = vetorPar[(cont / 2) - 1] + vetorPar[(cont / 2)];
        mediana = mediana / 2;
        cout << mediana;
    }

    else
    {
        mediana = vetorImpar[cont / 2];
        cout << mediana;
    }

    return 0;
}