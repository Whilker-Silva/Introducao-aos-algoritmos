#include <iostream>
#include <fstream>

using namespace std;

int main(){

    string nome;
    string palavra;

    cin >> nome;
    cin >> palavra;

    ofstream saida(nome);

    saida << palavra;
}