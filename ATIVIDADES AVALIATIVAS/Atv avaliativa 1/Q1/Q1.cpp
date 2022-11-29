#include <iostream>

using namespace std;

int main()
{

    int valor;                  // variável que irá receber o valor de 4 digitos
    int alg1, alg2, alg3, alg4; // variáveis para guardar o valor de cada algarismo
    int resto;                  // variável para guardar o resto das divisões sucessivas

    // atribuindo valor inserido na terminal na variável
    cin >> valor;

    // cálculo para separar o 1º algorismo
    alg1 = valor / 1000;
    resto = valor % 1000;

    // cálculo para separar o 2º algorismo
    alg2 = resto / 100;
    resto = valor % 100;

    // cálculo para separar o 3º algorismo
    alg3 = resto / 10;
    resto = valor % 10;

    // cálculo para separar o 4º algorismo
    alg4 = resto;

    // mostrando valor invertido no terminal
    cout << alg4 << alg3 << alg2 << alg1;
    
    return 0;
}