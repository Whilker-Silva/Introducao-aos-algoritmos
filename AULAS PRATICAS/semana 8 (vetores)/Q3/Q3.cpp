#include <iostream>

using namespace std;

int main()
{

    string palavra;
    string vogais = "aeiou";

    int qtd_vogais = 0;
    int tam;

    cin >> palavra;
    tam = palavra.size();

    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (palavra[i] == vogais[j])
            {
                qtd_vogais++;
            }
        }
    }

    cout << qtd_vogais;

    return 0;
}
