#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int qtd_alunos;
    float nota1;
    float nota2;
    float nota_final;

    string nome_aluno;

    ifstream arqin("entrada.txt");
    ofstream arqout("saida.txt");

    arqin >> qtd_alunos;

    while (qtd_alunos > 0)
    {
        arqin >> nome_aluno;
        arqin >> nota1;
        arqin >> nota2;

        nota_final = (nota1 + nota2) / 2.0;

        if (nota_final < 7.0)
        {
            arqout << nome_aluno << endl;
        }

        qtd_alunos--;
    }

    return 0;
}