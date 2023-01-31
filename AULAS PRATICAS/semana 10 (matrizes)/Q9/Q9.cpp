#include <iostream>
#include <fstream>

using namespace std;

// declação do procedimento para preencher matrizes com valor do arquivo
void preencheNavios(int **matriz, int tam, ifstream &arquivo);

// declação do procedimento verificar qtd de navio afundados na horizontal
void procuraNavio_H(int **navios, int **tiros, int n, int &naviosAbatidos);

// declação do procedimento verificar qtd de navio afundados na Vetical
void procuraNavio_V(int **navios, int **tiros, int n, int &naviosAbatidos);

int main()
{
    int n, naviosAbatidos = 0;

    // abrindo arquivo para leitura
    ifstream arquivo("BatalhaNaval.txt");
    arquivo >> n;

    // declaração da matriz dinamica para posição dos navios;
    int **navios;
    navios = new int *[n];
    for (int i = 0; i < n; i++)
    {
        navios[i] = new int[n];
    }

    // declaração da matriz dinamica para posição dos tiros;
    int **tiros;
    tiros = new int *[n];
    for (int i = 0; i < n; i++)
    {
        tiros[i] = new int[n];
    }

    // prencher matrizes com conteudo do arquivo
    preencheNavios(navios, n, arquivo);
    preencheNavios(tiros, n, arquivo);

    // Verificar a quantidade de navios abtidos
    procuraNavio_H(navios, tiros, n, naviosAbatidos);
    procuraNavio_V(navios, tiros, n, naviosAbatidos);

    // impreimir quantidade de navios abtidos no terminal
    cout << naviosAbatidos;

    return 0;
}

/*





*/

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
/*





*/
void procuraNavio_H(int **navios, int **tiros, int n, int &naviosAbatidos)
{

    int incioNavio, fimNavio;
    int partesAbatidas = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - 1); j++)
        {
            // se encontrar uma peça do navio e a peça do lado tbm é o msm navio
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
                        k = n;
                    }
                }

                // quantidades de partes do navio
                partesAbatidas = fimNavio - incioNavio + 1;

                // comparar com a matriz de tiros
                for (int k = incioNavio; k <= fimNavio; k++)
                {
                    if (tiros[i][k] == 1)
                    {
                        partesAbatidas--;
                    }
                }
                // se todas parte do navio foram abatidas
                if (partesAbatidas == 0)
                {
                    naviosAbatidos++;
                }

                j = fimNavio;
            }
        }
    }
}

/*





*/
void procuraNavio_V(int **navios, int **tiros, int n, int &naviosAbatidos)
{

    int incioNavio, fimNavio;
    int partesAbatidas = 0;

    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < (n - 1); i++)
        {
            // se encontrar uma peça do navio e a peça de baico tbm é o msm navio
            if (navios[i][j] != 0 && navios[i][j] == navios[i + 1][j])
            {
                incioNavio = i;

                // percorrer restante da coluna até o final ou até navio acabar
                for (int k = (i + 1); k < n; k++)
                {

                    if (navios[k][j] == navios[i][j])
                    {
                        fimNavio = k;
                    }

                    else
                    {
                        k = n;
                    }
                }

                // quantidades de partes do navio
                partesAbatidas = fimNavio - incioNavio + 1;

                // comparar com a matriz de tiros
                for (int k = incioNavio; k <= fimNavio; k++)
                {
                    if (tiros[k][j] == 1)
                    {
                        partesAbatidas--;
                    }
                }
                // se todas parte do navio foram abatidas
                if (partesAbatidas == 0)
                {
                    naviosAbatidos++;
                }

                i = fimNavio;
            }
        }
    }
}