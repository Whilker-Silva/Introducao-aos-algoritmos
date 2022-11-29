#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int tamanho;
    int contador_linhas = 1;
    int contador_colunas = 1;

    ofstream arq("jogo.txt");

    cin >> tamanho;

    while (contador_linhas <= tamanho)
    {
        // em linhas impares
        if ((contador_linhas % 2) != 0)
        {
            while (contador_colunas <= tamanho)
            {
                // em colunas impares
                if ((contador_colunas % 2) != 0)
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

        // em linhas pares
        else
        {
            while (contador_colunas <= tamanho)
            {
                // em colunas impares
                if ((contador_colunas % 2) != 0)
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
        contador_colunas = 1;
        contador_linhas++;
    }
    return 0;
}