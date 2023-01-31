#include <iostream>

using namespace std;

float CENTIMETRO(float v)
{
    v = v * 100;

    return v;
}

float METRO(float v)
{
    v = v / 100;

    return v;
}

int main()
{
    float valor;
    string unidade;

    cin >> valor >> unidade;

    if (unidade == "centimetro")
    {
        cout << CENTIMETRO(valor) << " cm";
    }

    else if (unidade == "metro")
    {
        cout << METRO(valor) << " m";
    }

    else
    {
        cout << "ERRO";
    }
    return 0;
}
