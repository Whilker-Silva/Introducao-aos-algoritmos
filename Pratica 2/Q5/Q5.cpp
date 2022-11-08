#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    float nota1, peso1;
    float nota2, peso2;
    float nota3, peso3;
    float notafinal;

    ifstream arquivo("notas.txt");
    arquivo >> nota1 >> peso1;
    arquivo >> nota2 >> peso2;
    arquivo >> nota3 >> peso2;

    notafinal = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / (peso1 + peso2 + peso3);

    ofstream arquivo2("final.txt");
    arquivo2 << fixed << setprecision(2) << notafinal;

    return 0;
}