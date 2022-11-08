#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    float salario;
    float despesa1;
    float despesa2;
    float saldo;

    ifstream arquivo("entrada.txt");
    arquivo >> salario >> despesa1 >> despesa2;

    despesa1 = despesa1 + (despesa1 * (0.38 / 100));
    despesa2 = despesa2 + (despesa2 * (0.38 / 100));

    saldo = salario - despesa1 - despesa2;

    cout << saldo;

    return 0;
}