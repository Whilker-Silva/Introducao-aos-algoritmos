#include <iostream>

using namespace std;

int main()
{
    int qtdPalavras, maiorPalavra = 0;
    cin >> qtdPalavras;
    cin.ignore();

    string vetor[qtdPalavras];

    for (int i = 0; i < qtdPalavras; i++)
    {
        getline(cin, vetor[i]);
        int tam = vetor[i].size();

        if (tam > maiorPalavra)
        {
            maiorPalavra = vetor[i].size();
        }
    }

    for (int i = 0; i < qtdPalavras; i++)
    {
        int tam, qtdEspaco;
        string aux;

        tam = vetor[i].size();
        qtdEspaco = maiorPalavra - tam;

        int cont = 0;
        while (cont != qtdEspaco)
        {
            aux += "*";
            cont++;
        }

        aux += vetor[i];
        vetor[i] = aux;
    }

    for (int i = 0; i < qtdPalavras; i++)
    {
        cout << vetor[i] << endl;
    }

    return 0;
}
