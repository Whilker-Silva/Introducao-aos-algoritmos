#include <iostream>
#include <string>
#include <sstream>

using namespace std;

struct Renas
{
    string nome;
    int ano;
    int forca;
    int velocidade;
};

Renas *aumentaVetor(Renas *vetor, int tamanhoAtual)
{
    Renas *vetorAuxiliar = new Renas[tamanhoAtual];

    for (int i = 0; i < tamanhoAtual - 1; i++)
    {
        vetorAuxiliar[i] = vetor[i];
    }

    return vetorAuxiliar;
}

int main()
{
    int tempo, forca, velocidade;
    int tamanhoVetor = 2;
    int qtdAumento = 0;

    Renas *vetorRenas;
    vetorRenas = new Renas[tamanhoVetor];

    for (int i = 0; i <= tamanhoVetor; i++)
    {

        string aux;
        getline(cin, aux);

        istringstream stream(aux);

        if (aux != "fim")
        {
            if (i == tamanhoVetor)
            {
                tamanhoVetor++;
                qtdAumento++;
                vetorRenas = aumentaVetor(vetorRenas, tamanhoVetor);
            }

            stream >> vetorRenas[i].nome;
            stream >> vetorRenas[i].ano;
            stream >> vetorRenas[i].forca;
            stream >> vetorRenas[i].velocidade;
        }

        else
        {
            cin >> tempo >> forca >> velocidade;
            i = tamanhoVetor + 1;
        }
    }

    for (int i = 0; i < tamanhoVetor; i++)
    {
        Renas r = vetorRenas[i];
        if (2023 - r.ano >= tempo && r.forca >= forca && r.velocidade >= velocidade)
        {
            cout << r.nome << endl;
        }
    }

    cout << qtdAumento << endl;
    cout << tamanhoVetor << endl;

    return 0;
}
