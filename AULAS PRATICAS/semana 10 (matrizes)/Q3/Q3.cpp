#include <iostream>

using namespace std;

int main()
{

    int L, C;
    cin >> L >> C;

    int matriz[L][C];
    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cin >> matriz[i][j];
        }
    }

    int n;
    cin >> n;

    int linhas[n];
    for (int i = 0; i < n; i++)
    {
        cin >> linhas[i];
        linhas[i]--;
    }

    int soma;
    for (int i = 0; i < n; i++)
    {
        soma = 0;

        for (int j = 0; j < C; j++)
        {
            soma += matriz[linhas[i]][j];
        }

        cout << soma << endl;
    }

    return 0;
}
