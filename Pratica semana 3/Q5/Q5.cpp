#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    int nota1, peso1;
    int nota2, peso2;
    int nota3, peso3;
    float notafinal;

    ifstream arquivo("notas.txt");
    arquivo >> nota1 >> peso1;
    arquivo >> nota2 >> peso2;
    arquivo >> nota3 >> peso3;

    notafinal = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / float(peso1 + peso2 + peso3);

    ofstream arquivo2("final.txt");
    arquivo2 << setprecision(2) << fixed << notafinal;

    return 0;
}
