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
    T[0].dia = 4;
    T[0].codigo = 5;
    T[0].distancia = 8;
    T[0].tempo = 10;

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

   
}

void aumentavetor(treinos *vetor, int tam)
{

    treinos *aux = new treinos[tam];
    memcpy(aux, vetor, sizeof(treinos) * tam);
    delete[] vetor;

    vetor = new treinos[tam + 1];
    memcpy(vetor, aux, sizeof(treinos) * tam);
    delete[] aux;

     for (int i = 0; i < tam; i++)
    {
        cout << vetor[i].dia << " ";
        cout << vetor[i].codigo << " ";
        cout << vetor[i].distancia << " ";
        cout << vetor[i].tempo << endl;
    }
}
