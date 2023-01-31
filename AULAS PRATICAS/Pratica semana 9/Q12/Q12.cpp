#include <iostream>

using namespace std;

int main()
{

    int n1, n2;
    cin >> n1 >> n2;

    int *vetor1 = new int[n1];
    int *vetor2 = new int[n2];
    int *vetorsaida;

    for (int i = 0; i < n1; i++)
    {
        cin >> vetor1[i];
    }

    for (int i = 0; i < n2; i++)
    {
        cin >> vetor2[i];
    }

    

    for (int i = 0; i < n1; i++)
    {
        if (vetor1[i + 1] == (vetor1[i] + 1))
    }

    return 0;
}