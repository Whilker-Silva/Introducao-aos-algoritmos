#include <iostream>

using namespace std;

int main()
{
    int L = 10, C = 10;

    double **matriz = new double *[L];

    for (int i = 0; i < L; i++)
    {
        matriz[i] = new double[C];
    }

    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cin >> matriz[i][j];
        }
    }

    int iMaior = 0;
    int jMaior = 0;

    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (matriz[i][j] > matriz[iMaior][jMaior])
            {
                iMaior = i;
                jMaior = j;
            }
        }
    }

    int iMenor = iMaior;
    int jMenor = 0;

    for (int j = 0; j < C; j++)
    {
        if (matriz[iMenor][j] < matriz[iMenor][jMenor])
        {
            jMenor = j;
        }
    }

    cout << matriz[iMenor][jMenor] << endl;
    cout << iMenor << " " << jMenor;

    for (int i = 0; i < L; i++)
    {
        delete[] matriz[i];
    }

    delete[] matriz;

    return 0;
}
