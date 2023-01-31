#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int numero;

    ifstream arqin("numeros.txt");
    ofstream arq_pares("pares.txt");
    ofstream arq_impares("impares.txt");

    while (arqin >> numero)
    {
        if ((numero % 2) == 0)
        {
            arq_pares << numero << " ";
        }

        else
        {
            arq_impares << numero << " ";
        }
    }

    return 0;
}