#include <iostream>

using namespace std;

struct ponto
{
    int x, y;
};

struct retangulo
{
    ponto v1, v2;
};

int main()
{
    ponto p;
    int qtd_retangulo;
    int retangulos = 0;

    cin >> p.x >> p.y;
    cin >> qtd_retangulo;

    retangulo R[qtd_retangulo];
    for (int i = 0; i < qtd_retangulo; i++)
    {
        cin >> R[i].v1.x >> R[i].v1.y;
        cin >> R[i].v2.x >> R[i].v2.y;
    }

    for (int i = 0; i < qtd_retangulo; i++)
    {
        if (p.x >= R[i].v1.x && p.x <= R[i].v2.x && p.y >= R[i].v1.y && p.y <= R[i].v2.y)
        {
            retangulos++;
        }
    }

    cout << retangulos;

    return 0;
}
