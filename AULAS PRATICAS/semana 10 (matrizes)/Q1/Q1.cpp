#include <iostream>

using namespace std;

int main()
{

    int l, c;
    cin >> l >> c;

    double **matriz;

    matriz = new double *[l];

    for (int i = 0; i < l; i++)
    {
        matriz[i] = new double[c];
    }

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> matriz[i][j];
        }
    }

    double soma = 0;

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            soma = soma + matriz[i][j];
        }
    }

    for (int i = 0; i < l; i++)
    {
        delete[] matriz[i];
    }

    delete[] matriz;

    cout << soma;

    return 0;
}