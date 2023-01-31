#include <iostream>
#include <fstream>

using namespace std;

/*   FUNÇÔES   */
void preencheNavios(int **matriz, int tam, ifstream &arquivo)
{

    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            arquivo >> matriz[i][j];
        }
    }
}

int procuraNavio_H(int **navios, int **tiros, int n)
{

    int incioNavio, fimNavio;
    int partesAbatidas = 0, naviosAbatidos = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - 1); j++)
        {
            // se encontra uma peça do navio e a peça do lado tbm é o msm navio
            if (navios[i][j] != 0 && navios[i][j] == navios[i][j + 1])
            {
                incioNavio = j;

                // percorrer restante da linha até o final ou até navio acabar
                for (int k = (j + 1); k < n; k++)
                {

                    if (navios[i][k] == navios[i][j])
                    {
                        fimNavio = k;
                    }

                    else
                    {
                        j = k + 1;
                        k = n;
                    }
                }
            }

            // quantidades de partes do navio
            partesAbatidas = fimNavio - incioNavio + 1;

            // comparar com a matriz de tiros
            for (int k = incioNavio; k <= fimNavio; k++)
            {
                if (navios[i][k] == tiros[i][k])
                {
                    partesAbatidas--;
                }
            }

            if (partesAbatidas == 0)
            {
                naviosAbatidos++;
            }

            partesAbatidas = 0;
        }
    }

    return naviosAbatidos;
}
/*

//////////////////////////////////////////////////////////////////////////////////////////////////////

*/

int main()
{

    int n;

    ifstream arquivo("BatalhaNaval.txt");
    arquivo >> n;

    // declaração das matrizes dinamicas;
    int **navios;
    navios = new int *[n];
    for (int i = 0; i < n; i++)
    {
        navios[i] = new int[n];
    }

    int **tiros;
    tiros = new int *[n];
    for (int i = 0; i < n; i++)
    {
        tiros[i] = new int[n];
    }

    preencheNavios(navios, n, arquivo);
    preencheNavios(tiros, n, arquivo);

    cout << procuraNavio_H(navios, tiros, n);

    return 0;
}
