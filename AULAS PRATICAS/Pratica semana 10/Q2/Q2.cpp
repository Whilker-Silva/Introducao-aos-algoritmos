#include <iostream>

using namespace std;

int main()
{

    int L, C;
    cin >> L >> C;

    int **matriz;

    matriz = new int *[L];

    for (int i = 0; i < L; i++)
    {
        matriz[i] = new int[C];
    }

    for (int i = 0; i < L; i++)
    {

        if (i % 2 == 0)
        {
            for (int j = 0; j < C; j++)
            {
                cin >> matriz[i][j];
            }
        }

        else
        {
            for (int j = C; j > 0; j--)
            {
                cin >> matriz[i][j - 1];
            }
        }
    }

    for (int i = 0; i < L; i++)
    {

        for (int j = 0; j < C; j++)
        {
            cout << matriz[i][j] << " ";
        }
    }

    return 0;
}