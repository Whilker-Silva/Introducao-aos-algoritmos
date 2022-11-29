#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int tamanho;
    int contador_linhas = 0;
    int contador_colunas = 0;

    ofstream arq("jogo.txt");

    cin >> tamanho;

    while (contador_linhas < tamanho)
    {
        // em linhas Pares
        if ((contador_linhas % 2) == 0)
        {
            while (contador_colunas < tamanho)
            {
                if ((contador_colunas % 2) == 0)
                {
                    arq << ".";
                }

                else
                {
                    arq << "#";
                }

                contador_colunas++;
            }
        }

        // em linhas impares
        else
        {
            while (contador_colunas < tamanho)
            {
                // em colunas impares
                if ((contador_colunas % 2) == 0)
                {
                    arq << "#";
                }

                else
                {
                    arq << ".";
                }

                contador_colunas++;
            }
        }

        arq << endl;
        contador_colunas = 0;
        contador_linhas++;
    }
    return 0;
}