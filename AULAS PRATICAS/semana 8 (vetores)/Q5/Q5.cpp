#include <iostream>

using namespace std;

int main()
{
    bool palindromo = true;

    int tamanho;
    cin >> tamanho;

    int vetor[tamanho];
    for (int i = 0; i < tamanho; i++)
    {
        cin >> vetor[i];
    }

    tamanho--;
    for (int i = 0; i <= tamanho; i++)
    {
        if (vetor[i] != vetor[tamanho])
        {
            palindromo = false;
        }
        tamanho--;
    }

    if (palindromo == true)
    {
        cout << true;
    }

    else
    {
        cout << false;
    }

    return 0;
}
