#include <iostream>
#include <cstring>
#include <iomanip>

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
    int distancia;
};

void aumentavetor(treinos *vetor, int tam);
void imprime(treinos *vetor, int tam);

int main()
{
    int qtd_corredores;
    cin >> qtd_corredores;

    atleta *C = new atleta[qtd_corredores];
    for (int i = 0; i < qtd_corredores; i++)
    {
        cin >> C[i].codigo;
        cin >> C[i].nome;
        cin >> C[i].idade;
        cin >> C[i].peso;
        cin >> C[i].sexo;
    }

    cout << endl;
    cout << endl;
    cout << endl;

    treinos *T = new treinos[1];
    cin >> T[0].dia;
    cin >> T[0].codigo;
    cin >> T[0].distancia;
    cin >> T[0].tempo;

    int tam = 1;
    bool treino = true;

    while (treino == true)
    {
        int dia;
        cin >> dia;
        if (dia != -1)
        {
            aumentavetor(T, tam);
            T[tam].dia = dia;
            cin >> T[tam].codigo;
            cin >> T[tam].distancia;
            cin >> T[tam].tempo;

            tam++;
        }

        else
        {
            treino = false;
        }

        imprime(T, tam);
        cout << endl;
    }

    // imprime(T, tam);

    return 0;
}

void aumentavetor(treinos *vetor, int tam)
{
    treinos *aux = new treinos[tam];
    memcpy(aux, vetor, sizeof(treinos) * tam);
    delete[] vetor;

    vetor = new treinos[tam + 1];
    memcpy(vetor, aux, sizeof(treinos) * tam);
    delete[] aux;

    vetor[tam].dia = 0;
    vetor[tam].codigo = 0;
    vetor[tam].distancia = 0;
    vetor[tam].tempo = 0;

    // imprime(vetor, tam);
    // cout << endl;
}

void imprime(treinos *vetor, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        cout << "treino " << i << " : ";
        cout << vetor[i].dia << " ";
        cout << vetor[i].codigo << " ";
        cout << fixed << setprecision(1) << vetor[i].distancia << " ";
        cout << vetor[i].tempo << endl;
    }
}
