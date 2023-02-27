#include <iostream>

using namespace std;

enum meses
{
    janeiro,
    fevereiro,
    marco,
    abril,
    maio,
    junho,
    julho,
    agosto,
    setembro,
    outubro,
    novembro,
    dezembro
};

void imprime(int mes)
{
    if (mes == janeiro)
    {
        cout << "janeiro" << endl;
    }

    else if (mes == fevereiro)
    {
        cout << "fevereiro" << endl;
    }
    if (mes == marco)
    {
        cout << "marco" << endl;
    }

    else if (mes == abril)
    {
        cout << "abril" << endl;
    }
    if (mes == maio)
    {
        cout << "maio" << endl;
    }

    else if (mes == junho)
    {
        cout << "junho" << endl;
    }

    else if (mes == junho)
    {
        cout << "junho" << endl;
    }

    else if (mes == julho)
    {
        cout << "julho" << endl;
    }

    else if (mes == agosto)
    {
        cout << "agosto" << endl;
    }

     else if (mes == setembro)
    {
        cout << "setembro" << endl;
    }

     else if (mes == outubro)
    {
        cout << "outubro" << endl;
    }

     else if (mes == novembro)
    {
        cout << "novembro" << endl;
    }

     else if (mes == dezembro)
    {
        cout << "dezembro" << endl;
    }
}

int main()
{

    float temperaturas[12];
    int posMaior = 0;
    int posMenor = 0;

    // preenche vetor
    for (int i = 0; i < 12; i++)
    {
        cin >> temperaturas[i];
    }

    // buscar maior e menor
    for (int i = 0; i < 12; i++)
    {
        if (temperaturas[i] > temperaturas[posMaior])
        {
            posMaior = i;
        }

        if (temperaturas[i] < temperaturas[posMenor])
        {
            posMenor = i;
        }
    }

    imprime(posMaior);
    imprime(posMenor);

    return 0;
}
