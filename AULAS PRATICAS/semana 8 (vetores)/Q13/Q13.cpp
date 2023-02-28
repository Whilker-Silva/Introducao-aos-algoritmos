#include <iostream>

using namespace std;

int main()
{
    int vendas[10];
    float comissao[10];
    float salarios[10];
    string vendedor[10];

    int totalVendas = 0;
    int posMaior = 0;

    for (int i = 0; i < 10; i++)
    {
        // preenche vetor
        cin >> vendedor[i];
        cin >> vendas[i];
        cin >> comissao[i];

        // calcula valor do salario
        salarios[i] = vendas[i] * comissao[i];

        // soma qtd de vendas
        totalVendas += vendas[i];

        // verifica se é o maior salário
        if (salarios[i] > salarios[posMaior])
        {
            posMaior = i;
        }
    }

    // imprime relação
    for (int i = 0; i < 10; i++)
    {
        cout << vendedor[i] << " ";
        cout << salarios[i] << endl;
    }

    cout << endl;
    cout << totalVendas << endl;
    cout << vendedor[posMaior] << " " << salarios[posMaior];

    return 0;
}
