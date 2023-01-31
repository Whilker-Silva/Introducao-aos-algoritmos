#include <iostream>

using namespace std;

bool verifica(int resto)
{
    if (resto == 0)
    {
        return true;
    }

    else
    {
        return false;
    }
}

int soma_algarismos(int algarismo)
{
    int soma = 0;
    int resto = algarismo;

    while (resto != 0)
    {
        soma = soma + (resto % 10);
        resto = resto / 10;
    }
    return soma;
}

int main()
{
    int numero;
    int resto;

    cin >> numero;

    resto = numero % soma_algarismos(numero);
    cout << resto << " ";

    if (verifica(resto) == true)
    {
        cout << "sim";
    }
    else
    {
        cout << "nao";
    }

    return 0;
}