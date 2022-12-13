#include <iostream>

using namespace std;

void Sequencia(int &numero)
{
    if ((numero % 2) == 0)
    {
        numero = numero / 2;
    }

    else
    {
        numero = (numero * 3) + 1;
    }
}

int main()
{
    int numero;
    int cont = 0;
    cin >> numero;

    cout << numero << " ";
    cont++;

    while (numero != 1)
    {
        Sequencia(numero);
        cout << numero << " ";
        cont++;
    }

    cout << endl
         << cont;

    return 0;
}