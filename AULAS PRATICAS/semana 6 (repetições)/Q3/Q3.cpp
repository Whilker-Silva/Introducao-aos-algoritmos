#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    int turma;
    int aluno;
    float nota;

    bool presenca = false;

    ifstream arqturma("turma.txt");
    ifstream arqnotas("notas.txt");
    ofstream arqsaida("notas-turma.txt");

    while (arqturma >> turma)
    {
        while (arqnotas >> aluno && arqnotas >> nota)
        {
            if (turma == aluno)
            {
                arqsaida << aluno << " " << nota << endl;
                presenca = true;
            }
        }

        if (presenca == 0)
        {
            arqsaida << turma << " 0" << endl;
        }

        presenca = false;
        arqnotas.clear();
        arqnotas.seekg(0);
    }

    return 0;
}