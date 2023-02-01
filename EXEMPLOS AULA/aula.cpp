#include <iostream>
using namespace std;

struct medico
{
    int codigo;
    string nome, edereco;
    float salario;
};

struct paciente
{
    int codigo, idade;
    string nome, edereco;
};

struct consulta
{
    int prontuario, data;
    string diagnostico;
    medico codigoM;
    paciente codigoP;
};

void incluir(consulta *H, int p)
{
    cin >> H[p].prontuario >> H[p].data >> H[p].diagnostico;
    cin >> H[p].codigoP.codigo >> H[p].codigoP.idade;
    cin.ignore();
    getline(cin, H[p].codigoP.nome);
    getline(cin, H[p].codigoP.edereco);
    cin >> H[p].codigoM.codigo >> H[p].codigoM.salario;
    cin.ignore();
    getline(cin, H[p].codigoM.nome);
    getline(cin, H[p].codigoM.edereco);
}

void alterar_nome(consulta *H, int p, string nome)
{
    string novo_nome;
    for (int i = 0; i < p; i++)
    {
        if (nome == H[i].codigoP.nome)
        {
            cout << "Digite o novo nome: ";
            cin >> novo_nome;
            H[i].codigoP.nome = novo_nome;
        }
    }
}

void buscar_codigoM(consulta *H, int p, int codigo)
{
    for (int i = 0; i < p; i++)
    {
        if (H[i].codigoM.codigo == codigo)
        {
            cout << H[i].codigoM.nome << endl;
            cout << H[i].codigoM.edereco << endl;
            cout << H[i].codigoM.salario << endl;
        }
    }
}

int main()
{
    consulta *hospital = new consulta[2];
    string nome;
    int codigo;

    cout << "Digite os dados: ";
    for (int i = 0; i < 2; i++)
    {
        incluir(hospital, i);
    }

    cout << "Nome para ser alterado: ";
    cin >> nome;
    alterar_nome(hospital, 2, nome);

    cout << endl;
    cout << "Codigo para ser buscado: ";
    cin >> codigo;
    buscar_codigoM(hospital, 2, codigo);

    cout << endl;
    cout << "Codigos dos Pacientes: ";
    for (int i = 0; i < 2; i++)
    {
        cout << hospital[i].codigoP.codigo << endl;
    }

}