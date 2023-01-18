#include <iostream>

using namespace std;

int main()
{
    // informando tamanho dos vetores
    int n1, n2;
    cin >> n1 >> n2;

    // informando valores dos vetores
    int *vetor1 = new int[n1];
    for (int i = 0; i < n1; i++)
    {
        cin >> vetor1[i];
    }

    int *vetor2 = new int[n2];
    for (int i = 0; i < n2; i++)
    {
        cin >> vetor2[i];
    }
    cout << endl;

    ///////////////////////////////////////////////////

    int *vetor3 = new int[n1];
    int j = 0, k = 0;

    for (int i = 0; i < n1; i++)
    {
        while (vetor1[i] == vetor2[j])
        {
            vetor3[k] = vetor1[i];
            j++;
            k++;
        }

        //cout<<k<<endl;

        if (k > 1)
        {
            for (int x = 0; x < k; x++)
            {
                cout << vetor3[x];
            }
            cout<<endl;
        }

        k = 0;
    }

    return 0;
}
