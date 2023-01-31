#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int aluno[n];
    int alunos_presente[n];
    bool encontrou = false;
    int pos = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> aluno[i];
        alunos_presente[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (aluno[i] == alunos_presente[j])
            {
                encontrou = true;
            }
        }

        if (encontrou == false)
        {
            alunos_presente[pos] = aluno[i];
            pos++;
        }

        encontrou = false;
    }

    cout << pos;


    return 0;
}