#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string nome_arquivo;                      // variável para nome do arquivo a ser lido
    string filme1, filme2;                    // variável para nomes dos filmes
    int sabado1, sabado2, domingo1, domingo2; // variável para valores de venda em cada dia
    int bilheteria1, bilheteria2;             // variável para valor total das bilheterias de cada filme

    // atribuindo nome inserido na terminal na variável
    cin >> nome_arquivo;

    // lendo o arquivo informado e atribuindo valores às variáveis
    ifstream arq1(nome_arquivo);
    arq1 >> filme1 >> sabado1 >> domingo1;
    arq1 >> filme2 >> sabado2 >> domingo2;

    // soma dos valores de vendo no sabado e domingo
    bilheteria1 = sabado1 + domingo1;
    bilheteria2 = sabado2 + domingo2;

    // mostrando resultados no terminal
    cout << filme1 << " : " << bilheteria1 << endl
         << filme2 << " : " << bilheteria2;

    return 0;
}