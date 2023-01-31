#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int matriz[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matriz[i][j];
        }
    }

    float media_principal = 0;
    int qtd_elementos_principal = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j <= i)
            {
                media_principal += matriz[i][j];
                qtd_elementos_principal++;
            }
            else
            {
                j = n;
            }
        }
    }

    float media_secundaria = 0;
    int qtd_elementos_secundaria = 0;

    for (int i = (n - 1); i >= 0; i--)
    {
        for (int j = (n - 1); j >= 0; j--)
        {

            if ((i + j) >= (n - 1))
            {
                media_secundaria += matriz[i][j];
                qtd_elementos_secundaria++;
            }

            else
            {
                j = 0;
            }
        }
    }

    media_principal /= qtd_elementos_principal;
    media_secundaria /= qtd_elementos_secundaria;

    cout << media_principal << endl
         << media_secundaria;

    return 0;
}