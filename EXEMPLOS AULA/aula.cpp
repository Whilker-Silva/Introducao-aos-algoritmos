#include <iostream>
using namespace std;
int main()
{
    string nome, email;
    int idade;
    cin >> email;
    getline(cin, nome);

    cin >> idade;
    cout << "Nome: " << nome << endl;
    cout << "Email: " << email << endl;
    cout << "Idade: " << idade << endl;
    return 0;
}