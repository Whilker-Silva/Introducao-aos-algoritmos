#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int num;
    int contador;
    int vetor[n];

    contador = 0;
    while (contador < n)
    {
        cin >> num;
        if (num % 2 == 0)
        {
            vetor[contador] = num;
            contador++;
        }
    }

    contador = 0;
    while (contador < n)
    {
        cout << endl << vetor[contador];
        contador++;
    }

    return 0;
}