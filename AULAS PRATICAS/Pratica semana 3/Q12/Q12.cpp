#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    float altura;
    float lagura;
    float profundidade;
    float densidade;
    float peso;

    ifstream arquivo("entrada.txt");
    arquivo >> profundidade >> altura >> lagura >> densidade;

    peso = (profundidade * altura * lagura) * densidade;

    cout << peso;

    return 0;
}