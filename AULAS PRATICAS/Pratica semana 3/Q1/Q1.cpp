#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string nome; //variável para guardar nome do arquivo a ser lido
    string palavra; //variável para guardar palavra contida no arquivo

    cin >> nome;

    ifstream arquivo(nome); //abrindo arquivo para leitura
    arquivo >> palavra; //lendo arquivo e salvando na variável palavra

    cout << palavra;

    return 0;
}