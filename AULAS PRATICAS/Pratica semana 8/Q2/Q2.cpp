#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int aluno[n];
    int qtd_alunos = n;
    int qtd_repetidos = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> aluno[i];
    }

    for (int i = 0; i < n; i++)
    {
        int repetidos = 0;

        for (int j = 0; j < n; j++)
        {
            if (aluno[i] == aluno[j])
            {
                repetidos++;
            }
        }
        if (repetidos > 1)
        {

            qtd_repetidos += repetidos;
        }

        repetidos = 0;
    }

    qtd_repetidos = sqrt(qtd_repetidos) - 1;
    qtd_alunos -= qtd_repetidos;

    cout << qtd_alunos;

    return 0;
}