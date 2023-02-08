#include <iostream>
#include <cstring>

using namespace std;

struct atleta
{
    int codigo, idade, peso;
    char sexo;
    string nome;
};

struct treinos
{
    int dia, tempo, codigo;
    float distancia;
};

void aumentavetor(treinos *vetor, int tam);
void verifica_MaisVelho();

int main()
{
    // qtd de corredores
    int qtd_corredores;
    cin >> qtd_corredores;

    // preenche dados de corredores
    atleta *C = new atleta[qtd_corredores];
    for (int i = 0; i < qtd_corredores; i++)
    {
        cin >> C[i].codigo;
        cin >> C[i].nome;
        cin >> C[i].idade;
        cin >> C[i].peso;
        cin >> C[i].sexo;
    }

    // preenche dados primeiro treino
    treinos *T = new treinos[1];
    T[0].dia = NULL;
    T[0].codigo = NULL;
    T[0].distancia = NULL;
    T[0].tempo = NULL;

    int cont = 1;
    bool valor = true;
    while (valor == true)
    {
        aumentavetor(T, cont);
        cin >> T[cont].dia;

        if (T[cont].dia == -1)
        {
            valor = false;
        }

        else
        {
            cin >> T[cont].codigo;
            cin >> T[cont].distancia;
            cin >> T[cont].tempo;
            cont++;
        }
    }

    verifica_MaisVelho();

    int pos_maisVelho = -1;
    int maisVelho = 0;
    for (int i = 0; i < qtd_corredores; i++)
    {

        if (C[i].idade > maisVelho && C[i].sexo == 'M')
        {
            maisVelho = C[i].idade;
            pos_maisVelho = i;
        }
    }
    float distancia_maior = 0;
    for (int i = 1; i < cont; i++)
    {
        if (T[i].codigo == C[pos_maisVelho].codigo)
        {
            distancia_maior += T[i].distancia;
        }
    }

    // imprimir primeira sainda
    if (maisVelho > 0)
    {
        cout << C[pos_maisVelho].nome << " " << distancia_maior << endl;
    }

    else
    {
        cout << -1 << endl;
    }
}

void aumentavetor(treinos *vetor, int tam)
{

    treinos *aux = new treinos[tam];
    memcpy(aux, vetor, sizeof(treinos) * tam);
    delete[] vetor;

    vetor = new treinos[tam + 1];
    memcpy(vetor, aux, sizeof(treinos) * tam);
    delete[] aux;
}

void verifica_MaisVelho()
{
}