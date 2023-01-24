#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    char *vetor1 = new char[100];
    char *vetor2 = new char[100];

    for (int i = 0; i < 100; i++)
    {
        scanf("%c", &vetor1[i]);

        if (vetor1[i] == '\n')
        {
            i = 100;
        }
    }

    for (int i = 0; i < 100; i++)
    {
        scanf("%c", &vetor2[i]);

        if (vetor2[i] == '\n')
        {
            i = 100;
        }
    }

    int n = strlen(vetor1) + strlen(vetor2);

    char *vetor3 = new char[n];
    int cont = 0;

    for (int i = 0; i < (strlen(vetor1) - 1); i++)
    {
        vetor3[i] = vetor1[i];
        cont++;
    }

    vetor3[cont] = ' ';
    cont++;

    // cout << cont;

    for (int i = 0; i < (strlen(vetor2) - 1); i++)
    {
        vetor3[cont + i] = vetor2[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << vetor3[i];
    }

     return 0;
}