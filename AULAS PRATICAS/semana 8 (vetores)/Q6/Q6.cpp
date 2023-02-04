#include <iostream>

using namespace std;

int main()
{

    int vetor_entrada[8];
    for (int i = 0; i < 8; i++)
    {
        cin >> vetor_entrada[i];
    }

    int vetor_posivos[8], vetor_negativos[8];
    int qtd_positivos = 0, qtd_negativos = 0;

    for (int i = 0; i < 8; i++)
    {
        if (vetor_entrada[i] > 0)
        {
            vetor_posivos[qtd_positivos] = vetor_entrada[i];
            qtd_positivos++;
        }

        else
        {
            vetor_negativos[qtd_negativos] = vetor_entrada[i];
            qtd_negativos++;
        }
    }

    for (int i = 0; i < qtd_positivos; i++)
    {
        cout << vetor_posivos[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < qtd_negativos; i++)
    {
        cout << vetor_negativos[i] << " ";
    }

    return 0;
}
