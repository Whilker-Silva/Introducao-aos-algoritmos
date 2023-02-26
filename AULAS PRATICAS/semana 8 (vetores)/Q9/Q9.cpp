#include <iostream>

using namespace std;

int main()
{

    int vetor[7];

    // Preenche vetor
    for (int i = 0; i < 7; i++)
    {
        cin >> vetor[i];
    }

    // Procura multiplos de 2
    int multiplos = 0;

    for (int i = 0; i < 7; i++)
    {
        if ((vetor[i] % 2) == 0)
        {
            multiplos++;
            cout << vetor[i] << " ";
        }
    }

    if (multiplos == 0)
    {
        cout << 0 << endl;
    }

    else
    {
        cout << endl;
    }

    // Procura multiplos de 3
    multiplos = 0;

    for (int i = 0; i < 7; i++)
    {
        if ((vetor[i] % 3) == 0)
        {
            multiplos++;
            cout << vetor[i] << " ";
        }
    }

    if (multiplos == 0)
    {
        cout << 0 << endl;
    }

    else
    {
        cout << endl;
    }

    // Procura multiplos de 2 e 3
    multiplos = 0;

    for (int i = 0; i < 7; i++)
    {
        if (((vetor[i] % 2) == 0) and ((vetor[i] % 3) == 0))
        {
            multiplos++;
            cout << vetor[i] << " ";
        }
    }

    if (multiplos == 0)
    {
        cout << 0 << endl;
    }

    return 0;
}
