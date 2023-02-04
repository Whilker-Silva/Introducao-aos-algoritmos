#include <iostream>

using namespace std;

int main()
{

    int tam1, tam2;
    cin >> tam1 >> tam2;

    float vetor1[tam1];
    float vetor2[tam2];

    bool intersecao = false;

    // preenche vetor 1
    for (int i = 0; i < tam1; i++)
    {
        cin >> vetor1[i];
    }

    // preenche vetor 2
    for (int i = 0; i < tam2; i++)
    {
        cin >> vetor2[i];
    }

    for (int i = 0; i < tam1; i++)
    {
        for (int j = 0; j < tam2; j++)
        {
            if (vetor1[i] == vetor2[j])
            {
                cout << vetor1[i] << " ";
                intersecao = true;
            }
        }
    }

    if (intersecao == false)
    {
        cout << -1;
    }

    return 0;
}
