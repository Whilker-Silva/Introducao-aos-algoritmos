#include <iostream>

using namespace std;

void reajuste(bool &x, bool y)
{
    if (x == false)
    {
        if (y == true)
        {
            cout << endl;
            cout << endl;
        }
        cout << "COM REAJUSTE:";
        x = true;
    }
}

void semAumento(bool &x)
{
    if (x == false)
    {
        cout << "SEM REAJUSTE:";
        x = true;
    }
}

int main()
{
    string nome[5];
    float salario[5];
    int tempo[5];

    // preenche vetor
    for (int i = 0; i < 5; i++)
    {
        cin >> nome[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cin >> salario[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cin >> tempo[i];
    }

    // verificar sem aumentos

    bool verifica1 = false;
    for (int i = 0; i < 5; i++)
    {
        if (tempo[i] < 5 and salario[i] > 400)
        {
            semAumento(verifica1);
            cout << endl;
            cout << nome[i];
        }
    }

    bool verifica2 = false;
    for (int i = 0; i < 5; i++)
    {
        if (tempo[i] >= 5 and salario[i] <= 400)
        {
            reajuste(verifica2, verifica1);
            salario[i] += salario[i] * 0.35;
            cout << endl;
            cout << nome[i] << " " << salario[i];
        }

        else if (tempo[i] >= 5 and salario[i] > 400)
        {
            reajuste(verifica2, verifica1);
            salario[i] += salario[i] * 0.25;
            cout << endl;
            cout << nome[i] << " " << salario[i];
        }

        else if (tempo[i] < 5 and salario[i] <= 400)
        {
            reajuste(verifica2, verifica1);
            salario[i] += salario[i] * 0.5;
            cout << endl;
            cout << nome[i] << " " << salario[i];
        }
    }

    return 0;
}
