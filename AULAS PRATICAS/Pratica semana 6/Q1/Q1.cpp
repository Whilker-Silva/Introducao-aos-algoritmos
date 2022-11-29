#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string nameArq;
    float valor_lido;
    float soma = 0;

    cin >> nameArq;
    ifstream arq(nameArq);

    while (arq >> valor_lido)
    {
        soma = soma + valor_lido;
    }

    cout << soma;

    return 0;
}