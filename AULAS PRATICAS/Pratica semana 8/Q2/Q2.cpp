#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int aluno[n];
    int qtd_alunos = n;

    for (int i = 0; i < n; i++)
    {
        cin >> aluno[i];
    }

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            if (aluno[i] == aluno[j])
            {

                qtd_alunos--;
            }
        }
    }

    cout << qtd_alunos;

    return 0;
}