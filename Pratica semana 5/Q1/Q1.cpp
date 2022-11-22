#include <iostream>

using namespace std;

int main()
{

    int numerador, denominador;
    int quociente, resto;

    cin >> numerador;
    cin >> denominador;

    if (denominador != 0)
    {
        quociente = numerador / denominador;
        resto = numerador % denominador;

        cout << quociente << endl
             << resto;
    }

    else
    {
        cout << "erro";
    }
    return 0;

}